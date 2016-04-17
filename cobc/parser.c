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
#define yyerror			cb_error

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


#line 1308 "parser.c" /* yacc.c:339  */

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
    GRID = 464,
    GROUP = 465,
    HEADING = 466,
    HIGHLIGHT = 467,
    HIGH_VALUE = 468,
    ID = 469,
    IDENTIFICATION = 470,
    IF = 471,
    IGNORE = 472,
    IGNORING = 473,
    IN = 474,
    INDEX = 475,
    INDEXED = 476,
    INDICATE = 477,
    INITIALIZE = 478,
    INITIALIZED = 479,
    INITIATE = 480,
    INPUT = 481,
    INPUT_OUTPUT = 482,
    INSPECT = 483,
    INTO = 484,
    INTRINSIC = 485,
    INVALID = 486,
    INVALID_KEY = 487,
    IS = 488,
    I_O = 489,
    I_O_CONTROL = 490,
    JUSTIFIED = 491,
    KEPT = 492,
    KEY = 493,
    KEYBOARD = 494,
    LABEL = 495,
    LAST = 496,
    LEADING = 497,
    LEFT = 498,
    LEFTLINE = 499,
    LENGTH = 500,
    LENGTH_OF = 501,
    LESS = 502,
    LESS_OR_EQUAL = 503,
    LIMIT = 504,
    LIMITS = 505,
    LINAGE = 506,
    LINAGE_COUNTER = 507,
    LINE = 508,
    LINE_COUNTER = 509,
    LINES = 510,
    LINKAGE = 511,
    LITERAL = 512,
    LOCALE = 513,
    LOCALE_DATE_FUNC = 514,
    LOCALE_TIME_FUNC = 515,
    LOCALE_TIME_FROM_FUNC = 516,
    LOCAL_STORAGE = 517,
    LOCK = 518,
    LOWER = 519,
    LOWER_CASE_FUNC = 520,
    LOWLIGHT = 521,
    LOW_VALUE = 522,
    MANUAL = 523,
    MEMORY = 524,
    MERGE = 525,
    MINUS = 526,
    MNEMONIC_NAME = 527,
    MODE = 528,
    MOVE = 529,
    MULTIPLE = 530,
    MULTIPLY = 531,
    NAME = 532,
    NATIONAL = 533,
    NATIONAL_EDITED = 534,
    NATIONAL_OF_FUNC = 535,
    NATIVE = 536,
    NEAREST_AWAY_FROM_ZERO = 537,
    NEAREST_EVEN = 538,
    NEAREST_TOWARD_ZERO = 539,
    NEGATIVE = 540,
    NEXT = 541,
    NEXT_PAGE = 542,
    NO = 543,
    NO_ECHO = 544,
    NORMAL = 545,
    NOT = 546,
    NOTHING = 547,
    NOT_END = 548,
    NOT_EOP = 549,
    NOT_ESCAPE = 550,
    NOT_EQUAL = 551,
    NOT_EXCEPTION = 552,
    NOT_INVALID_KEY = 553,
    NOT_OVERFLOW = 554,
    NOT_SIZE_ERROR = 555,
    NO_ADVANCING = 556,
    NUMBER = 557,
    NUMBERS = 558,
    NUMERIC = 559,
    NUMERIC_EDITED = 560,
    NUMVALC_FUNC = 561,
    OBJECT_COMPUTER = 562,
    OCCURS = 563,
    OF = 564,
    OFF = 565,
    OMITTED = 566,
    ON = 567,
    ONLY = 568,
    OPEN = 569,
    OPTIONAL = 570,
    OR = 571,
    ORDER = 572,
    ORGANIZATION = 573,
    OTHER = 574,
    OUTPUT = 575,
    OVERLINE = 576,
    PACKED_DECIMAL = 577,
    PADDING = 578,
    PAGE = 579,
    PAGE_COUNTER = 580,
    PARAGRAPH = 581,
    PERFORM = 582,
    PH = 583,
    PF = 584,
    PICTURE = 585,
    PICTURE_SYMBOL = 586,
    PLUS = 587,
    POINTER = 588,
    POSITION = 589,
    POSITIVE = 590,
    PRESENT = 591,
    PREVIOUS = 592,
    PRINT = 593,
    PRINTER = 594,
    PRINTER_1 = 595,
    PRINTING = 596,
    PROCEDURE = 597,
    PROCEDURES = 598,
    PROCEED = 599,
    PROGRAM = 600,
    PROGRAM_ID = 601,
    PROGRAM_NAME = 602,
    PROGRAM_POINTER = 603,
    PROHIBITED = 604,
    PROMPT = 605,
    PROTECTED = 606,
    QUOTE = 607,
    RANDOM = 608,
    RD = 609,
    READ = 610,
    READY_TRACE = 611,
    RECORD = 612,
    RECORDING = 613,
    RECORDS = 614,
    RECURSIVE = 615,
    REDEFINES = 616,
    REEL = 617,
    REFERENCE = 618,
    REFERENCES = 619,
    RELATIVE = 620,
    RELEASE = 621,
    REMAINDER = 622,
    REMOVAL = 623,
    RENAMES = 624,
    REPLACE = 625,
    REPLACING = 626,
    REPORT = 627,
    REPORTING = 628,
    REPORTS = 629,
    REPOSITORY = 630,
    REQUIRED = 631,
    RESERVE = 632,
    RESET = 633,
    RESET_TRACE = 634,
    RETURN = 635,
    RETURNING = 636,
    REVERSE_FUNC = 637,
    REVERSE_VIDEO = 638,
    REVERSED = 639,
    REWIND = 640,
    REWRITE = 641,
    RF = 642,
    RH = 643,
    RIGHT = 644,
    ROLLBACK = 645,
    ROUNDED = 646,
    RUN = 647,
    SAME = 648,
    SCREEN = 649,
    SCREEN_CONTROL = 650,
    SCROLL = 651,
    SD = 652,
    SEARCH = 653,
    SECTION = 654,
    SECURE = 655,
    SEGMENT_LIMIT = 656,
    SELECT = 657,
    SEMI_COLON = 658,
    SENTENCE = 659,
    SEPARATE = 660,
    SEQUENCE = 661,
    SEQUENTIAL = 662,
    SET = 663,
    SHARING = 664,
    SIGN = 665,
    SIGNED = 666,
    SIGNED_INT = 667,
    SIGNED_LONG = 668,
    SIGNED_SHORT = 669,
    SIZE = 670,
    SIZE_ERROR = 671,
    SORT = 672,
    SORT_MERGE = 673,
    SOURCE = 674,
    SOURCE_COMPUTER = 675,
    SPACE = 676,
    SPECIAL_NAMES = 677,
    STANDARD = 678,
    STANDARD_1 = 679,
    STANDARD_2 = 680,
    START = 681,
    STATIC = 682,
    STATUS = 683,
    STDCALL = 684,
    STEP = 685,
    STOP = 686,
    STRING = 687,
    SUBSTITUTE_FUNC = 688,
    SUBSTITUTE_CASE_FUNC = 689,
    SUBTRACT = 690,
    SUM = 691,
    SUPPRESS = 692,
    SYMBOLIC = 693,
    SYNCHRONIZED = 694,
    SYSTEM_DEFAULT = 695,
    SYSTEM_OFFSET = 696,
    TAB = 697,
    TALLYING = 698,
    TAPE = 699,
    TERMINATE = 700,
    TEST = 701,
    THAN = 702,
    THEN = 703,
    THRU = 704,
    TIME = 705,
    TIMEOUT = 706,
    TIMES = 707,
    TO = 708,
    TOK_AMPER = 709,
    TOK_CLOSE_PAREN = 710,
    TOK_COLON = 711,
    TOK_DIV = 712,
    TOK_DOT = 713,
    TOK_EQUAL = 714,
    TOK_FALSE = 715,
    TOK_FILE = 716,
    TOK_GREATER = 717,
    TOK_INITIAL = 718,
    TOK_LESS = 719,
    TOK_MINUS = 720,
    TOK_MUL = 721,
    TOK_NULL = 722,
    TOK_OVERFLOW = 723,
    TOK_OPEN_PAREN = 724,
    TOK_PLUS = 725,
    TOK_TRUE = 726,
    TOP = 727,
    TOWARD_GREATER = 728,
    TOWARD_LESSER = 729,
    TRAILING = 730,
    TRANSFORM = 731,
    TRIM_FUNC = 732,
    TRUNCATION = 733,
    TYPE = 734,
    UNDERLINE = 735,
    UNIT = 736,
    UNLOCK = 737,
    UNSIGNED = 738,
    UNSIGNED_INT = 739,
    UNSIGNED_LONG = 740,
    UNSIGNED_SHORT = 741,
    UNSTRING = 742,
    UNTIL = 743,
    UP = 744,
    UPDATE = 745,
    UPON = 746,
    UPON_ARGUMENT_NUMBER = 747,
    UPON_COMMAND_LINE = 748,
    UPON_ENVIRONMENT_NAME = 749,
    UPON_ENVIRONMENT_VALUE = 750,
    UPPER = 751,
    UPPER_CASE_FUNC = 752,
    USAGE = 753,
    USE = 754,
    USER = 755,
    USER_DEFAULT = 756,
    USER_FUNCTION_NAME = 757,
    USING = 758,
    VALUE = 759,
    VARYING = 760,
    WAIT = 761,
    WHEN = 762,
    WHEN_COMPILED_FUNC = 763,
    WITH = 764,
    WORD = 765,
    WORDS = 766,
    WORKING_STORAGE = 767,
    WRITE = 768,
    YYYYDDD = 769,
    YYYYMMDD = 770,
    ZERO = 771,
    SHIFT_PREFER = 772
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

#line 1878 "parser.c" /* yacc.c:358  */

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
#define YYLAST   8985

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  518
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  828
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1932
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  2767

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   772

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
     515,   516,   517
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  1893,  1893,  1893,  1926,  1927,  1931,  1932,  1936,  1937,
    1941,  1941,  1964,  1975,  1981,  1982,  1986,  1987,  1991,  1999,
    2008,  2016,  2017,  2022,  2021,  2034,  2045,  2056,  2060,  2061,
    2065,  2066,  2069,  2070,  2074,  2083,  2092,  2093,  2097,  2101,
    2111,  2116,  2117,  2126,  2133,  2134,  2144,  2145,  2146,  2147,
    2148,  2161,  2160,  2170,  2171,  2174,  2175,  2189,  2188,  2198,
    2199,  2200,  2201,  2205,  2206,  2210,  2211,  2212,  2213,  2217,
    2225,  2232,  2239,  2250,  2254,  2258,  2262,  2269,  2270,  2275,
    2277,  2276,  2287,  2288,  2289,  2296,  2297,  2301,  2305,  2311,
    2316,  2319,  2326,  2331,  2341,  2342,  2354,  2355,  2359,  2360,
    2364,  2365,  2369,  2370,  2371,  2372,  2373,  2374,  2375,  2376,
    2377,  2378,  2379,  2380,  2388,  2387,  2415,  2425,  2438,  2446,
    2449,  2450,  2454,  2461,  2476,  2497,  2496,  2520,  2526,  2532,
    2538,  2544,  2550,  2560,  2564,  2571,  2575,  2580,  2579,  2590,
    2594,  2601,  2602,  2603,  2604,  2605,  2606,  2610,  2611,  2618,
    2633,  2636,  2643,  2651,  2655,  2666,  2686,  2694,  2705,  2706,
    2712,  2733,  2734,  2738,  2742,  2763,  2786,  2868,  2871,  2880,
    2899,  2915,  2933,  2951,  2968,  2985,  2995,  2996,  3003,  3004,
    3012,  3013,  3023,  3024,  3029,  3028,  3058,  3059,  3063,  3064,
    3065,  3066,  3067,  3068,  3069,  3070,  3071,  3072,  3073,  3074,
    3075,  3082,  3088,  3098,  3111,  3124,  3151,  3152,  3153,  3157,
    3158,  3159,  3160,  3163,  3164,  3170,  3171,  3175,  3179,  3180,
    3185,  3188,  3189,  3196,  3204,  3205,  3206,  3213,  3237,  3239,
    3244,  3254,  3265,  3272,  3274,  3275,  3281,  3281,  3288,  3293,
    3298,  3305,  3306,  3307,  3311,  3322,  3323,  3327,  3332,  3337,
    3342,  3353,  3364,  3374,  3382,  3383,  3384,  3390,  3401,  3408,
    3409,  3415,  3423,  3424,  3425,  3431,  3432,  3433,  3440,  3441,
    3445,  3446,  3452,  3480,  3481,  3482,  3483,  3490,  3489,  3505,
    3506,  3510,  3513,  3514,  3524,  3521,  3537,  3538,  3546,  3547,
    3555,  3556,  3560,  3581,  3580,  3597,  3604,  3608,  3614,  3615,
    3619,  3629,  3644,  3645,  3646,  3647,  3648,  3649,  3650,  3651,
    3652,  3659,  3666,  3666,  3666,  3672,  3692,  3726,  3757,  3758,
    3765,  3766,  3770,  3771,  3778,  3789,  3794,  3805,  3806,  3810,
    3811,  3817,  3828,  3846,  3847,  3851,  3852,  3853,  3857,  3864,
    3871,  3880,  3892,  3944,  3959,  3960,  3964,  3974,  3988,  3990,
    3989,  4005,  4008,  4008,  4025,  4026,  4028,  4032,  4034,  4033,
    4068,  4081,  4089,  4094,  4100,  4109,  4119,  4122,  4134,  4135,
    4136,  4137,  4141,  4145,  4149,  4153,  4157,  4161,  4165,  4169,
    4173,  4177,  4181,  4185,  4189,  4200,  4201,  4205,  4206,  4210,
    4211,  4212,  4216,  4217,  4221,  4247,  4251,  4260,  4264,  4273,
    4274,  4275,  4276,  4277,  4278,  4279,  4280,  4281,  4282,  4283,
    4284,  4285,  4286,  4293,  4317,  4345,  4348,  4357,  4382,  4393,
    4394,  4398,  4402,  4406,  4410,  4414,  4418,  4422,  4426,  4430,
    4434,  4438,  4442,  4446,  4451,  4456,  4460,  4464,  4472,  4476,
    4480,  4488,  4492,  4496,  4500,  4504,  4508,  4512,  4516,  4520,
    4528,  4536,  4540,  4544,  4548,  4552,  4556,  4564,  4565,  4569,
    4570,  4576,  4582,  4594,  4612,  4613,  4622,  4654,  4684,  4685,
    4689,  4690,  4693,  4694,  4700,  4701,  4708,  4709,  4716,  4740,
    4741,  4758,  4759,  4762,  4763,  4770,  4771,  4776,  4787,  4798,
    4809,  4820,  4849,  4848,  4857,  4858,  4862,  4863,  4866,  4867,
    4880,  4893,  4914,  4923,  4937,  4939,  4938,  4958,  4960,  4959,
    4975,  4977,  4976,  4985,  4986,  4993,  4992,  5005,  5006,  5007,
    5014,  5019,  5023,  5024,  5030,  5037,  5041,  5042,  5048,  5085,
    5089,  5094,  5100,  5101,  5106,  5107,  5108,  5109,  5110,  5114,
    5121,  5128,  5135,  5142,  5148,  5149,  5154,  5153,  5160,  5161,
    5165,  5166,  5167,  5168,  5169,  5170,  5171,  5172,  5173,  5174,
    5175,  5176,  5177,  5178,  5179,  5180,  5184,  5191,  5192,  5193,
    5194,  5195,  5196,  5197,  5200,  5201,  5202,  5205,  5206,  5210,
    5217,  5223,  5224,  5228,  5229,  5233,  5240,  5244,  5251,  5252,
    5256,  5263,  5264,  5268,  5269,  5273,  5274,  5275,  5279,  5280,
    5284,  5285,  5289,  5296,  5303,  5311,  5313,  5312,  5333,  5334,
    5338,  5339,  5343,  5345,  5344,  5415,  5433,  5434,  5438,  5443,
    5448,  5452,  5456,  5461,  5466,  5471,  5476,  5480,  5484,  5489,
    5494,  5499,  5503,  5507,  5511,  5515,  5520,  5524,  5528,  5533,
    5538,  5543,  5548,  5549,  5550,  5551,  5552,  5553,  5554,  5555,
    5556,  5565,  5570,  5581,  5582,  5586,  5587,  5591,  5592,  5596,
    5597,  5602,  5605,  5609,  5617,  5620,  5624,  5632,  5643,  5651,
    5653,  5663,  5652,  5690,  5690,  5723,  5727,  5726,  5740,  5739,
    5759,  5760,  5765,  5787,  5789,  5793,  5804,  5806,  5814,  5822,
    5830,  5859,  5892,  5895,  5908,  5913,  5923,  5954,  5956,  5955,
    5992,  5993,  5997,  5998,  5999,  6016,  6017,  6028,  6027,  6077,
    6078,  6082,  6130,  6143,  6146,  6165,  6170,  6164,  6183,  6183,
    6213,  6220,  6221,  6222,  6223,  6224,  6225,  6226,  6227,  6228,
    6229,  6230,  6231,  6232,  6233,  6234,  6235,  6236,  6237,  6238,
    6239,  6240,  6241,  6242,  6243,  6244,  6245,  6246,  6247,  6248,
    6249,  6250,  6251,  6252,  6253,  6254,  6255,  6256,  6257,  6258,
    6259,  6260,  6261,  6262,  6263,  6264,  6265,  6266,  6267,  6268,
    6269,  6283,  6295,  6294,  6310,  6309,  6320,  6324,  6328,  6333,
    6338,  6343,  6348,  6352,  6356,  6360,  6364,  6369,  6373,  6377,
    6381,  6385,  6389,  6393,  6400,  6401,  6407,  6409,  6413,  6414,
    6418,  6419,  6423,  6427,  6431,  6432,  6436,  6448,  6460,  6471,
    6475,  6476,  6480,  6487,  6491,  6497,  6501,  6505,  6509,  6513,
    6519,  6523,  6527,  6533,  6537,  6541,  6545,  6549,  6553,  6557,
    6561,  6565,  6569,  6573,  6579,  6583,  6587,  6591,  6595,  6599,
    6603,  6610,  6611,  6615,  6619,  6637,  6636,  6645,  6649,  6653,
    6659,  6660,  6667,  6671,  6682,  6681,  6690,  6694,  6706,  6707,
    6715,  6714,  6723,  6724,  6728,  6734,  6734,  6741,  6740,  6751,
    6779,  6783,  6788,  6793,  6814,  6818,  6817,  6834,  6835,  6840,
    6848,  6872,  6874,  6878,  6887,  6900,  6903,  6907,  6911,  6916,
    6939,  6940,  6944,  6945,  6950,  6953,  6958,  6967,  6971,  6979,
    6983,  6994,  6993,  7001,  7005,  7016,  7015,  7023,  7028,  7036,
    7037,  7038,  7039,  7040,  7048,  7047,  7056,  7063,  7067,  7077,
    7088,  7106,  7105,  7114,  7118,  7122,  7127,  7135,  7139,  7150,
    7149,  7159,  7163,  7167,  7171,  7175,  7179,  7184,  7191,  7192,
    7197,  7196,  7261,  7265,  7273,  7274,  7278,  7282,  7287,  7291,
    7292,  7296,  7300,  7304,  7308,  7312,  7313,  7317,  7321,  7327,
    7333,  7337,  7341,  7347,  7353,  7359,  7365,  7369,  7373,  7377,
    7381,  7385,  7389,  7393,  7400,  7404,  7415,  7414,  7423,  7427,
    7431,  7435,  7439,  7446,  7450,  7461,  7460,  7469,  7488,  7487,
    7511,  7519,  7520,  7525,  7536,  7547,  7561,  7565,  7572,  7573,
    7578,  7587,  7596,  7601,  7610,  7611,  7616,  7678,  7679,  7680,
    7684,  7685,  7689,  7693,  7704,  7703,  7715,  7716,  7737,  7751,
    7773,  7795,  7815,  7838,  7839,  7847,  7846,  7855,  7866,  7865,
    7875,  7882,  7881,  7894,  7903,  7907,  7918,  7934,  7933,  7942,
    7946,  7950,  7957,  7961,  7972,  7971,  7979,  7987,  7988,  7992,
    7993,  7994,  7999,  8002,  8009,  8013,  8021,  8028,  8029,  8030,
    8031,  8032,  8033,  8034,  8039,  8042,  8052,  8051,  8060,  8066,
    8078,  8077,  8086,  8090,  8094,  8098,  8105,  8106,  8107,  8108,
    8115,  8114,  8128,  8138,  8147,  8148,  8152,  8153,  8154,  8155,
    8156,  8157,  8161,  8162,  8166,  8171,  8178,  8179,  8180,  8181,
    8182,  8186,  8214,  8217,  8224,  8228,  8238,  8237,  8250,  8249,
    8257,  8261,  8272,  8271,  8280,  8284,  8291,  8295,  8306,  8305,
    8313,  8334,  8358,  8359,  8360,  8361,  8365,  8366,  8370,  8371,
    8372,  8373,  8385,  8384,  8395,  8401,  8400,  8411,  8419,  8427,
    8434,  8438,  8451,  8458,  8470,  8473,  8478,  8482,  8493,  8500,
    8501,  8505,  8506,  8509,  8510,  8515,  8526,  8525,  8534,  8561,
    8562,  8567,  8570,  8574,  8578,  8582,  8586,  8590,  8597,  8598,
    8602,  8603,  8607,  8611,  8621,  8632,  8631,  8639,  8649,  8660,
    8659,  8668,  8675,  8679,  8690,  8689,  8701,  8710,  8713,  8717,
    8724,  8728,  8738,  8750,  8749,  8758,  8762,  8771,  8772,  8777,
    8780,  8788,  8792,  8799,  8807,  8811,  8822,  8821,  8835,  8836,
    8837,  8838,  8839,  8840,  8841,  8845,  8846,  8850,  8851,  8857,
    8866,  8873,  8874,  8878,  8882,  8886,  8892,  8898,  8902,  8906,
    8910,  8919,  8923,  8932,  8941,  8942,  8946,  8955,  8956,  8960,
    8964,  8973,  8983,  8982,  8991,  8990,  9021,  9024,  9044,  9045,
    9048,  9049,  9057,  9058,  9063,  9068,  9078,  9094,  9099,  9109,
    9126,  9125,  9135,  9148,  9151,  9159,  9162,  9167,  9172,  9180,
    9181,  9182,  9183,  9184,  9185,  9189,  9197,  9198,  9202,  9206,
    9217,  9216,  9226,  9239,  9242,  9246,  9254,  9266,  9269,  9276,
    9277,  9278,  9279,  9286,  9285,  9294,  9301,  9302,  9306,  9307,
    9308,  9312,  9313,  9317,  9321,  9332,  9331,  9340,  9344,  9348,
    9355,  9359,  9369,  9380,  9381,  9388,  9387,  9396,  9402,  9414,
    9413,  9421,  9435,  9434,  9442,  9459,  9458,  9467,  9475,  9476,
    9481,  9482,  9487,  9494,  9495,  9500,  9507,  9508,  9512,  9513,
    9517,  9518,  9522,  9526,  9537,  9536,  9545,  9546,  9547,  9548,
    9549,  9553,  9580,  9583,  9595,  9605,  9610,  9615,  9620,  9628,
    9666,  9667,  9671,  9711,  9721,  9744,  9745,  9746,  9747,  9751,
    9760,  9766,  9776,  9785,  9794,  9795,  9802,  9801,  9813,  9823,
    9824,  9829,  9832,  9836,  9840,  9847,  9848,  9852,  9853,  9857,
    9861,  9873,  9876,  9877,  9886,  9887,  9891,  9892,  9901,  9902,
    9906,  9909,  9910,  9919,  9920,  9931,  9934,  9935,  9944,  9945,
    9957,  9960,  9962,  9972,  9973,  9985,  9986,  9990,  9991,  9992,
    9996, 10005, 10016, 10017, 10018, 10022, 10031, 10042, 10047, 10048,
   10057, 10058, 10069, 10073, 10083, 10090, 10097, 10097, 10108, 10109,
   10110, 10114, 10123, 10124, 10126, 10127, 10128, 10129, 10130, 10132,
   10133, 10134, 10135, 10136, 10137, 10139, 10140, 10141, 10143, 10144,
   10145, 10146, 10147, 10150, 10151, 10155, 10156, 10160, 10161, 10165,
   10166, 10170, 10174, 10180, 10184, 10190, 10191, 10192, 10196, 10197,
   10198, 10202, 10203, 10204, 10208, 10212, 10216, 10217, 10218, 10221,
   10222, 10232, 10244, 10253, 10265, 10274, 10286, 10301, 10302, 10307,
   10316, 10322, 10342, 10346, 10367, 10408, 10422, 10423, 10428, 10434,
   10435, 10440, 10452, 10453, 10454, 10461, 10472, 10473, 10477, 10485,
   10493, 10497, 10504, 10513, 10514, 10520, 10529, 10540, 10557, 10561,
   10568, 10569, 10570, 10577, 10578, 10582, 10586, 10593, 10594, 10595,
   10596, 10597, 10601, 10605, 10609, 10613, 10617, 10638, 10642, 10649,
   10650, 10651, 10655, 10656, 10657, 10658, 10659, 10663, 10667, 10674,
   10675, 10679, 10680, 10684, 10685, 10689, 10690, 10701, 10705, 10709,
   10713, 10714, 10718, 10722, 10723, 10730, 10734, 10738, 10742, 10746,
   10750, 10751, 10757, 10761, 10765, 10766, 10770, 10774, 10781, 10788,
   10795, 10805, 10812, 10822, 10832, 10842, 10855, 10859, 10867, 10875,
   10879, 10889, 10903, 10926, 10948, 10964, 10965, 10966, 10967, 10968,
   10969, 10973, 10977, 10994, 10998, 11005, 11006, 11007, 11008, 11009,
   11010, 11011, 11017, 11021, 11025, 11029, 11033, 11037, 11041, 11045,
   11049, 11053, 11057, 11061, 11068, 11069, 11073, 11074, 11075, 11079,
   11080, 11081, 11082, 11086, 11090, 11094, 11101, 11105, 11109, 11116,
   11123, 11130, 11140, 11147, 11157, 11164, 11174, 11178, 11191, 11195,
   11210, 11218, 11219, 11223, 11224, 11228, 11229, 11234, 11237, 11245,
   11248, 11255, 11257, 11258, 11262, 11263, 11267, 11268, 11269, 11274,
   11277, 11290, 11294, 11302, 11306, 11310, 11314, 11318, 11322, 11326,
   11330, 11337, 11338, 11344, 11345, 11346, 11347, 11348, 11349, 11350,
   11351, 11352, 11353, 11354, 11355, 11356, 11357, 11358, 11359, 11360,
   11361, 11362, 11363, 11364, 11365, 11366, 11367, 11368, 11369, 11370,
   11371, 11372, 11373, 11374, 11375, 11376, 11377, 11378, 11379, 11380,
   11381, 11382, 11383, 11384, 11385, 11386, 11387, 11388, 11389, 11390,
   11391, 11392, 11393, 11394, 11395, 11396, 11397, 11398, 11399, 11400,
   11401, 11402, 11403, 11404, 11405, 11406, 11407, 11408, 11409, 11410,
   11411, 11412, 11413, 11420, 11420, 11421, 11421, 11422, 11422, 11423,
   11423, 11424, 11424, 11425, 11425, 11426, 11426, 11427, 11427, 11428,
   11428, 11429, 11429, 11430, 11430, 11431, 11431, 11432, 11432, 11433,
   11433, 11434, 11434, 11435, 11435, 11436, 11436, 11437, 11437, 11438,
   11438, 11438, 11439, 11439, 11440, 11440, 11441, 11441, 11442, 11442,
   11443, 11443, 11443, 11444, 11444, 11445, 11445, 11445, 11446, 11446,
   11446, 11447, 11447, 11447, 11448, 11448, 11449, 11449, 11450, 11450,
   11451, 11451, 11451, 11452, 11452, 11453, 11453, 11454, 11454, 11454,
   11454, 11455, 11455, 11456, 11456, 11457, 11457, 11458, 11458, 11459,
   11459, 11459, 11460, 11460, 11461, 11461, 11462, 11462, 11463, 11463,
   11463, 11464, 11464, 11465, 11465, 11466, 11466, 11467, 11467, 11468,
   11468, 11469, 11469, 11470, 11470, 11471, 11471, 11471, 11472, 11472,
   11473, 11473, 11474, 11474, 11478, 11478, 11479, 11479, 11480, 11480,
   11481, 11481, 11482, 11482, 11483, 11483, 11484, 11484, 11485, 11485,
   11486, 11486, 11487, 11487, 11488, 11488, 11489, 11489, 11490, 11490,
   11491, 11491, 11492, 11492, 11495, 11496, 11497, 11501, 11501, 11502,
   11502, 11503, 11503, 11504, 11504, 11505, 11505, 11506, 11506, 11507,
   11507, 11508, 11508
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
  "\"Exponentiation operator\"", "EXTEND", "EXTERNAL", "FD",
  "\"FILE-CONTROL\"", "\"FILE-ID\"", "FILLER", "FINAL", "FIRST",
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
  "SYMBOLIC", "SYNCHRONIZED", "\"SYSTEM-DEFAULT\"", "\"SYSTEM-OFFSET\"",
  "TAB", "TALLYING", "TAPE", "TERMINATE", "TEST", "THAN", "THEN", "THRU",
  "TIME", "TIMEOUT", "TIMES", "TO", "\"&\"", "\")\"", "\":\"", "\"/\"",
  "\".\"", "\"=\"", "\"FALSE\"", "\"FILE\"", "\">\"", "\"INITIAL\"",
  "\"<\"", "\"-\"", "\"*\"", "\"NULL\"", "\"OVERFLOW\"", "\"(\"", "\"+\"",
  "\"TRUE\"", "TOP", "\"TOWARD-GREATER\"", "\"TOWARD-LESSER\"", "TRAILING",
  "TRANSFORM", "\"FUNCTION TRIM\"", "TRUNCATION", "TYPE", "UNDERLINE",
  "UNIT", "UNLOCK", "UNSIGNED", "\"UNSIGNED-INT\"", "\"UNSIGNED-LONG\"",
  "\"UNSIGNED-SHORT\"", "UNSTRING", "UNTIL", "UP", "UPDATE", "UPON",
  "\"UPON ARGUMENT-NUMBER\"", "\"UPON COMMAND-LINE\"",
  "\"UPON ENVIRONMENT-NAME\"", "\"UPON ENVIRONMENT-VALUE\"", "UPPER",
  "\"FUNCTION UPPER-CASE\"", "USAGE", "USE", "USER", "\"USER-DEFAULT\"",
  "\"User function name\"", "USING", "VALUE", "VARYING", "WAIT", "WHEN",
  "\"FUNCTION WHEN-COMPILED\"", "WITH", "\"Identifier\"", "WORDS",
  "\"WORKING-STORAGE\"", "WRITE", "YYYYDDD", "YYYYMMDD", "ZERO",
  "SHIFT_PREFER", "$accept", "start", "$@1", "nested_list",
  "source_element_list", "source_element", "simple_prog", "$@2",
  "program_definition", "function_definition", "_end_program_list",
  "end_program_list", "end_program", "end_function", "_program_body",
  "_identification_header", "program_id_paragraph", "$@3",
  "function_id_paragraph", "program_id_name", "end_program_name",
  "_as_literal", "_program_type", "program_type_clause", "_init_or_recurs",
  "_environment_division", "_environment_header", "_configuration_section",
  "_configuration_header", "_source_object_computer_paragraphs",
  "source_computer_paragraph", "$@4", "_source_computer_entry",
  "_with_debugging_mode", "object_computer_paragraph", "$@5",
  "_object_computer_entry", "object_clauses_list", "object_clauses",
  "object_computer_memory", "object_computer_sequence",
  "object_computer_segment", "object_computer_class", "locale_class",
  "computer_words", "_repository_paragraph", "$@6", "_repository_entry",
  "repository_list", "repository_name", "_as_literal_intrinsic",
  "repository_name_list", "_special_names_paragraph",
  "_special_names_sentence_list", "special_names_sentence_list",
  "special_name_list", "special_name", "mnemonic_name_clause", "$@7",
  "mnemonic_choices", "_special_name_mnemonic_on_off", "on_off_clauses",
  "on_off_clauses_1", "alphabet_name_clause", "@8", "alphabet_definition",
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
  "collating_sequence_clause", "file_status_clause", "_file_or_sort",
  "lock_mode_clause", "$@11", "lock_mode", "_lock_with",
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
  "recording_mode_clause", "code_set_clause", "report_clause",
  "report_keyword", "rep_name_list", "_working_storage_section", "$@15",
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
  "null_or_omitted", "call_on_exception", "call_not_on_exception",
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
  "rep_keyword", "replacing_region", "inspect_region",
  "inspect_before_after", "merge_statement", "$@61", "move_statement",
  "$@62", "move_body", "multiply_statement", "$@63", "multiply_body",
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
  "unstring_delimited", "unstring_delimited_list",
  "unstring_delimited_item", "unstring_into", "unstring_into_item",
  "unstring_into_delimiter", "unstring_into_count", "unstring_tallying",
  "end_unstring", "use_statement", "$@83", "use_phrase",
  "use_file_exception", "use_global", "use_file_exception_target",
  "use_debugging", "debugging_list", "debugging_target", "_all_refs",
  "use_start_end", "program_start_end", "use_reporting", "use_exception",
  "use_ex_keyw", "write_statement", "$@84", "write_body", "from_option",
  "write_option", "before_or_after", "write_handler", "end_write",
  "on_accp_exception", "_on_accp_exception", "escape_or_exception",
  "_not_on_accp_exception", "not_escape_or_not_exception",
  "on_disp_exception", "_on_disp_exception", "_not_on_disp_exception",
  "on_size_error", "_on_size_error", "_not_on_size_error", "on_overflow",
  "_on_overflow", "_not_on_overflow", "return_at_end", "at_end",
  "at_end_clause", "not_at_end_clause", "at_eop", "at_eop_clause",
  "not_at_eop_clause", "invalid_key", "_invalid_key_sentence",
  "_not_invalid_key_sentence", "_scroll_lines", "condition", "expr",
  "partial_expr", "$@85", "expr_tokens", "expr_token", "eq", "gt", "lt",
  "ge", "le", "exp_list", "_e_sep", "exp", "exp_term", "exp_factor",
  "exp_unary", "exp_atom", "line_linage_page_counter", "arithmetic_x_list",
  "arithmetic_x", "record_name", "table_name", "file_name_list",
  "file_name", "report_name", "mnemonic_name_list", "mnemonic_name",
  "procedure_name_list", "procedure_name", "label", "integer_label",
  "reference_list", "reference", "single_reference",
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
     765,   766,   767,   768,   769,   770,   771,   772
};
# endif

#define YYPACT_NINF -2264

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-2264)))

#define YYTABLE_NINF -1883

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -2264,   265,    -1, -2264,   504, -2264,   153, -2264, -2264,   543,
   -2264, -2264,   588,   327, -2264,   678, -2264,   722,   832,   501,
     548,   543,   543, -2264,   596,   937,  1373,   612,   731,   881,
     -84,   743,   743,  1076,  1159, -2264,   853,  1219, -2264, -2264,
     948, -2264,   897,  1006, -2264,  1210,   963,   970,  1019,  1145,
    1036, -2264, -2264,  1433,  1433,   778, -2264,  1076, -2264,   778,
   -2264, -2264,    15,  2892,  3426,  1016,     0, -2264,  1024,  1041,
   -2264, -2264, -2264,  1044,  1446, -2264, -2264,  1231,  1057, -2264,
   -2264, -2264,  1066, -2264,  1078, -2264, -2264,  1113,  3747, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,   -23, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264,  1126, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
     461, -2264, -2264,  1213, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264,  1049, -2264,  1087,    38, -2264, -2264,
       5,  1064,  1094, -2264,    47,    47,  1152,  1202,  1394,  1394,
    1394,    47,  1222,  1394,  1585, -2264,  1270,  1446,   988, -2264,
   -2264, -2264, -2264,  1428, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264,   -56, -2264, -2264,    36,    36,
     320,  1192, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264,   383,  4790,  8010,   113,   494,   159,  1138,
     474,  -207,  4897,  5785,  1398,  -196,   835,   474,  1141,  1204,
   -2264, -2264,  5785, -2264, -2264,   474,  1146,  6512,  1141,  5050,
    5785, -2264,   900,  8440,  1138,  1141,  1138,  1141,    61,   192,
    1141,  1138, -2264, -2264, -2264, -2264, -2264, -2264,  5169,  5185,
   -2264, -2264,  1146,    45,  1141,  1138,  1141,  1141,  1265,  1404,
   -2264, -2264,  1212, -2264, -2264,  1214,   -34,   563, -2264, -2264,
    1273,  1267,  1616,  1394, -2264, -2264, -2264,   750, -2264, -2264,
   -2264, -2264, -2264,   748,  1624,  1394, -2264,    88, -2264, -2264,
   -2264,  1394,  1394, -2264,  1394, -2264,  1141,  1617,  1141,  1394,
    1394,  1141, -2264,  1177,  1070,  1233, -2264,  1388, -2264, -2264,
    1179, -2264,  1235,    65, -2264,   366, -2264,  -172,  -166,   369,
   -2264, -2264, -2264, -2264,     9,  1563, -2264,  1502, -2264,  1234,
    1391,  1333, -2264,  1141, -2264, -2264,  1243,  1248,  1249, -2264,
    6697,     9,     9, -2264,  1251,  1253,  1256, -2264, -2264, -2264,
    1258,     9, -2264, -2264, -2264, -2264, -2264, -2264,  1259, -2264,
    1249, -2264, -2264,  1581, -2264,  5378, -2264, -2264, -2264,  1277,
   -2264, -2264,  1263,  1274,  1279,  6697,  8254,  8010,  8254, -2264,
      22,   718, -2264,  1571, -2264, -2264, -2264,  1244,  1277, -2264,
   -2264,   113, -2264,  1296, -2264,     9, -2264, -2264, -2264, -2264,
    1620,  2964, -2264,   159, -2264, -2264,  1138,   894,  1391,  1631,
     229, -2264,  1360, -2264, -2264,  1234,  1277,  1138,  1623,  1411,
    1182, -2264,  1633,  1607,  5497, -2264, -2264,  4591,  1245,  1268,
    1638,   154,  1278, -2264, -2264, -2264,  1642,    20, -2264, -2264,
   -2264,  4303, -2264, -2264,  1680,   -23, -2264, -2264, -2264,   474,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264,  1336, -2264, -2264,
     243, -2264,  1146, -2264, -2264,    23, -2264, -2264, -2264, -2264,
   -2264, -2264,  1319,  5785, -2264,  1337,  1650,  1745, -2264, -2264,
   -2264, -2264,   900,  1386, -2264,  1344, -2264, -2264,  8475,   -13,
     587,  1349,  1347, -2264,   961, -2264,  1358,  1668,   709, -2264,
    1622, -2264,  1675,  1411,  1677,  1622,  1141,  1678,  1322, -2264,
    1262,  1662, -2264, -2264, -2264, -2264, -2264, -2264,  1565, -2264,
     474, -2264, -2264,   -89, -2264,   907,  1808, -2264,    56, -2264,
    1694,   992,   559,  1794,  1695,  3735, -2264, -2264,  1141,  1697,
    5513,  1146, -2264, -2264,  -165, -2264, -2264, -2264, -2264,  3284,
   -2264,  1652, -2264,   868,  1699,  1740,  1703,  1622,  1399,  1460,
    1604,   309,  1403,  6490, -2264,  1352, -2264, -2264, -2264,  1548,
   -2264,    47, -2264,   687, -2264,    59, -2264, -2264, -2264, -2264,
    1394,  1458,  1608, -2264, -2264, -2264, -2264,  1150,  1394,  1357,
    1410,  1762,  1394,  1520,  1141,  1614, -2264, -2264, -2264, -2264,
    1625,  1400, -2264, -2264,  1177, -2264,    43, -2264, -2264, -2264,
   -2264, -2264, -2264,   941,   -55,  1394,    46, -2264, -2264, -2264,
   -2264,  -147, -2264, -2264, -2264,  1529, -2264, -2264,  1394,  1464,
    1566, -2264, -2264,  1773, -2264, -2264,  1141, -2264, -2264,  6904,
    1601,  8010,  1416, -2264, -2264,   -57, -2264,  1434,  8010,  8010,
    7539, -2264, -2264,  1277, -2264,  1376,  1378,  8010,  8010,  8010,
    6697,  1380,  6697, -2264, -2264, -2264,  5884,  1688, -2264,  1333,
    8010, -2264,  6697,  8010, -2264,  1277, -2264, -2264, -2264,   985,
   -2264,  1670,  8010,  8010,  8010,  8010,  8010, -2264,  1511, -2264,
    1549,  1639, -2264, -2264, -2264,  1278, -2264,   894, -2264, -2264,
   -2264,   521,     1,  1141, -2264, -2264, -2264, -2264, -2264,  8010,
    1626, -2264,  1416, -2264,  1138, -2264, -2264, -2264, -2264,  1663,
   -2264, -2264, -2264, -2264,  1600, -2264, -2264,  4591,   735,  1607,
    1607,  1607,  1607, -2264, -2264,  5785,  5884, -2264, -2264, -2264,
   -2264,  -196,   133, -2264,  1393, -2264,  1395, -2264, -2264, -2264,
   -2264,  1204, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264,  4023, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264,   -37, -2264,  1772,  1254,  1728, -2264,
    1262,   121, -2264, -2264,  1534, -2264, -2264,    94,  8010, -2264,
    1453,   474, -2264, -2264,  5884,  1386,  1401,  1138, -2264, -2264,
   -2264, -2264, -2264,  1743,  1141,   113, -2264,  1203, -2264, -2264,
   -2264, -2264,  1411,  6512, -2264, -2264, -2264,  1685, -2264, -2264,
     488,  1779, -2264, -2264,  1141,  1779,  1467, -2264,  1277,  1468,
   -2264, -2264,   476,   941, -2264, -2264,  4688, -2264,  1868,   777,
      78, -2264, -2264, -2264,  1394, -2264,   -30,  5785, -2264,    70,
    5650, -2264, -2264,  1141, -2264,  1726, -2264, -2264,  5884, -2264,
    1608, -2264, -2264,  1262, -2264, -2264, -2264, -2264, -2264,  1794,
    1696, -2264, -2264,  1203, -2264,  1465,  1525,  1554, -2264,  1469,
   -2264,  1471, -2264,  1844, -2264,  1845, -2264,  1618, -2264, -2264,
    1472, -2264, -2264, -2264,  1913,  1490, -2264, -2264,  1608, -2264,
   -2264, -2264,   532, -2264, -2264, -2264,  1676,  1144, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264,  1520, -2264,  1503, -2264,   396,
   -2264,  1553, -2264, -2264, -2264, -2264,  1705,   -55, -2264,  1720,
      47,    47, -2264,   941,  1764, -2264, -2264, -2264,   728,  1394,
   -2264,  1454,  1508, -2264, -2264,   273, -2264,  1394,  1190,  6904,
   -2264, -2264, -2264,   171,  7286, -2264,  1190, -2264, -2264, -2264,
    1456,  1455, -2264,  1262,  1190,  1734,  1550,  1679, -2264, -2264,
    1702, -2264, -2264, -2264, -2264,    28,   959,  8010, -2264, -2264,
   -2264,   350, -2264,  1141,    29,  -198,  1527,   151,  1528, -2264,
     177, -2264, -2264,   317,  1530,  1531,  1533,   281, -2264,  1277,
   -2264,  1536, -2264,   282,  1541,  1391,   815, -2264,   -59,   -58,
     474, -2264,  1072,  1544,   313, -2264,  1547,  1511,   718,   718,
   -2264, -2264, -2264,   474, -2264,  1551,   113, -2264,   -23, -2264,
   -2264,  1599, -2264,  1621, -2264,  -169,  1394, -2264, -2264, -2264,
   -2264, -2264,  1704, -2264, -2264, -2264, -2264,    -6, -2264, -2264,
    1873, -2264, -2264,  2186, -2264, -2264, -2264, -2264,  1798,   815,
    1804,    87, -2264, -2264, -2264, -2264,  1991, -2264,  1560,   264,
   -2264, -2264,   133, -2264, -2264, -2264, -2264,  1698, -2264, -2264,
   -2264,  1882,  1872,  1204, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264,  1643,  1204, -2264,  1562, -2264,  1967, -2264, -2264, -2264,
    1082, -2264,  1262,   706, -2264, -2264, -2264,  1892,    49,   206,
      -2,   474,   474,   815,  1815,  1138,    93,   974, -2264,  1877,
   -2264, -2264, -2264,  2012, -2264,  1827, -2264, -2264, -2264, -2264,
    1685, -2264, -2264, -2264, -2264,  1141,  1894,  1663,  1005, -2264,
    1519, -2264,  1521,  1262,  1717,   801, -2264,   350, -2264, -2264,
   -2264,  5785,   941,   941,   941,   941,   941,   941,   941,   941,
     777, -2264,   508,  1663,   -43, -2264,  1603,  1603, -2264, -2264,
     428,  1141,   815,  1826,  1575, -2264,  1582,  2028,  1141,   603,
     488,  2031,  1087, -2264,  1586,  1640,  1646, -2264, -2264, -2264,
    1017,  1958,  1394,  1030,  1030,  1394,    -3,  1774,  1394,  2024,
   -2264,  1739, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264,    47,    86, -2264, -2264,  1605, -2264,  1861, -2264,
       4, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,   631,
   -2264,    71, -2264,  1520, -2264,  1721, -2264, -2264,  1705, -2264,
      47, -2264, -2264, -2264, -2264, -2264,    55, -2264,    54, -2264,
   -2264, -2264, -2264,   598, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264,  2006, -2264, -2264, -2264,  1105, -2264, -2264, -2264, -2264,
    1752,  1752, -2264, -2264,  1752, -2264,  1394, -2264, -2264, -2264,
   -2264,  1394, -2264, -2264, -2264, -2264, -2264,   -22, -2264, -2264,
    2001,  1644, -2264, -2264,   -29, -2264,  1394, -2264,  2052, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264,  1190, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264,  8010,  7609,   959, -2264,
   -2264, -2264,  1360,  7625,  1263,  7869,  1263, -2264,  1141,  1263,
    1263,  1263,  6697, -2264,   -85,  1263,   -57, -2264, -2264,  1761,
     -40,  1859,   815,  7968,  1263,  1263,    57, -2264, -2264, -2264,
   -2264, -2264,   -38,    69, -2264, -2264, -2264,   374, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
    1394, -2264,   401, -2264, -2264,  1191,  1394, -2264, -2264, -2264,
   -2264, -2264,   -26,  1394, -2264, -2264,   474, -2264,   474,  2114,
   -2264,   663,   -16,   133, -2264, -2264, -2264,  1991,  1141, -2264,
   -2264, -2264, -2264,  1561,   864,   -10,  1569,    57,  1262, -2264,
   -2264,  2017, -2264, -2264, -2264, -2264,   706, -2264,  1878, -2264,
    1664, -2264, -2264,  1394, -2264, -2264,  1831,  1757, -2264, -2264,
     474, -2264,   474,   974,  1756,  1756,  1765, -2264, -2264, -2264,
   -2264,  1134, -2264, -2264,  1141,  5785,   574, -2264, -2264, -2264,
    1784, -2264, -2264,  1816, -2264, -2264, -2264, -2264,  1521, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264,   146, -2264,  1141, -2264, -2264, -2264,   638, -2264,
   -2264, -2264,  8010, -2264,  5785,  5785,  1612,  1748,  1360, -2264,
     474, -2264,    57, -2264,  1766, -2264,  1262, -2264,  1972,  1647,
   -2264,   847, -2264,   824, -2264,  1087, -2264,  1629,  1690, -2264,
    6804,   178,  1889, -2264,  1608,  1584,  1394,  2024,  1587,   354,
     444,  1608,  1590, -2264,  1394, -2264, -2264, -2264,   -53,  1457,
   -2264, -2264, -2264,  1707, -2264,  1958,  1138, -2264, -2264, -2264,
   -2264, -2264,   631, -2264,  1839, -2264, -2264,  1869, -2264,  2072,
    1106,  1645, -2264, -2264, -2264, -2264, -2264,    68, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264,   273,   273,   273,   273,   273,
   -2264,  1394,  1394,   447,   447,   273, -2264,   468, -2264,  -198,
   -2264,  1052,  1686, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264,  1902, -2264, -2264, -2264,  1903,
   -2264, -2264,  1053, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
    1812,  1391, -2264, -2264, -2264, -2264, -2264,  1141, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,  2631,   273,
   -2264, -2264,  1391, -2264, -2264, -2264, -2264,   437,   273,   447,
     447,   273,   815,  1747,   815,  1750, -2264, -2264,  5785, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,   864, -2264,
    2007, -2264,  1204, -2264, -2264, -2264,    57,  1275, -2264, -2264,
    1275, -2264,  -103,  1141, -2264, -2264, -2264,   815, -2264, -2264,
   -2264, -2264, -2264, -2264,  1727, -2264,  2066,  1858,  1890,   670,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264,  -198, -2264, -2264, -2264, -2264, -2264,  1828,
    1394,  1686,   815,  1630, -2264,  2028, -2264,  1911,  2035,  1911,
    1612, -2264, -2264, -2264, -2264,  1840, -2264, -2264, -2264, -2264,
    1218, -2264,  1087, -2264,  1683,     6, -2264, -2264,  -170,  -148,
     650,   653,   683,  1635, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264,  1744, -2264,   522, -2264, -2264, -2264, -2264,  1141,  1141,
    1905, -2264, -2264, -2264,   622, -2264, -2264, -2264,  1394,   252,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,    90,   -72,
   -2264,  1634, -2264,    74, -2264,  1692, -2264, -2264, -2264, -2264,
    1587, -2264, -2264, -2264, -2264, -2264, -2264,  1881,    19,  1911,
    1637,  1394, -2264, -2264,  1394, -2264,  1774,  1411,   365, -2264,
    1736,  1394,  2091,   605,   -74,   862,  1401, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264,  1722, -2264,  1886, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264,  2112,  1394,  1138,
    1138,   631, -2264, -2264, -2264,  1895, -2264, -2264, -2264, -2264,
     -19, -2264, -2264, -2264, -2264, -2264, -2264,   159,   273, -2264,
    1272, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264,  1141, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,   474, -2264,
     474, -2264, -2264, -2264,  2104,  2046,  1275,  1275, -2264,  1701,
    1701, -2264,  1817,  1138,     3, -2264,  1141, -2264, -2264,  5785,
   -2264,  1394,   920,  1897,  1898, -2264,  1899, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264,  1141, -2264, -2264, -2264, -2264,  1700,
   -2264, -2264,  1141,  1911, -2264,  1141, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
    1651, -2264, -2264,  2117,  1718, -2264,  1723, -2264, -2264, -2264,
   -2264,  7346,   529,  2149, -2264,  1771,  1771, -2264,  1391,  1437,
    1437, -2264, -2264,  1608,    75, -2264, -2264, -2264,  1608, -2264,
    1763, -2264,   471,   471,  1394,  1831, -2264, -2264,   648, -2264,
     878,  1394,  1394,  1394,  1394, -2264,  1913, -2264,    93,  1394,
    1774, -2264,  1770,  1671,  1138, -2264,  1846,  2162, -2264, -2264,
    2073, -2264, -2264, -2264, -2264, -2264, -2264, -2264,  1686,  1686,
    5785, -2264,  1275, -2264,  5785,  5785,  1394,  1138,  1138,  1842,
   -2264, -2264,  1708,  1141, -2264, -2264,  1784, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264,   665, -2264, -2264,  1141, -2264,  1833,
    1672, -2264,  1911,  1989,  1608,  1738,  1141, -2264,   529, -2264,
    1746,  1931, -2264,  2091, -2264, -2264,  1437,  1735, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264,   117,  1585, -2264,   831, -2264,
   -2264, -2264, -2264,    13,  1394, -2264, -2264,  1463, -2264, -2264,
     444,  1768,  1141,  1141, -2264, -2264,  1141,  1394, -2264, -2264,
   -2264,  1608, -2264,   631,  1742, -2264, -2264, -2264, -2264, -2264,
     113,  1138,  1394, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264,  1327, -2264, -2264, -2264, -2264, -2264,  1856,  2095,
   -2264,  1146, -2264,  6232, -2264, -2264,  1672,  1751,  1706,  1608,
    1718, -2264, -2264,  2089, -2264,  -216, -2264,   529, -2264, -2264,
   -2264, -2264,   444,   444, -2264, -2264, -2264, -2264,  2018, -2264,
   -2264,  1692,  1608, -2264, -2264, -2264, -2264,  1141, -2264, -2264,
     497,   497,  2198, -2264, -2264, -2264, -2264, -2264,   497,   497,
     506, -2264, -2264, -2264,   736, -2264, -2264,   114, -2264, -2264,
   -2264, -2264,   113, -2264,  1835,  1787,     2,  1698, -2264,  1753,
   -2264,  1754, -2264, -2264, -2264,  1993,  1698, -2264,  1805, -2264,
    1758, -2264, -2264, -2264,  2189,  1585, -2264,   -44, -2264, -2264,
   -2264, -2264,  1472, -2264, -2264, -2264, -2264, -2264,  1394,  1141,
    1711, -2264,  1711, -2264, -2264,  1141, -2264,  1025, -2264, -2264,
   -2264,    60,  1048, -2264, -2264, -2264, -2264, -2264,  1141,  2004,
     206,  1775,  1394,   444,  2111,  1790, -2264, -2264,  1141,  1141,
   -2264,   554, -2264, -2264, -2264, -2264, -2264,  1887,   977,    60,
   -2264, -2264,  1776,   841,  7271,  2004, -2264,  1794, -2264,  1831,
   -2264,   529, -2264,  1698, -2264,  1729, -2264,  1141, -2264,  1918,
   -2264, -2264,  1698, -2264, -2264,  1924,  1141, -2264, -2264,  1394,
    1394,  2024,  1346, -2264, -2264, -2264, -2264,  2033,  2061, -2264,
    1394, -2264,   409, -2264,  1191,  1394,  6512, -2264, -2264, -2264,
   -2264,  1752, -2264,  1608, -2264,  2182, -2264, -2264, -2264,  1141,
   -2264, -2264,  1141, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264,  2036,  1752, -2264,  1731,  1394, -2264,  1141,    50,
     700,   131, -2264, -2264,   159, -2264, -2264,  1394,  2024,  1985,
    1672, -2264, -2264, -2264,  1141,   273, -2264, -2264, -2264, -2264,
     273, -2264,  1394,  1738,  1394, -2264, -2264, -2264,  1394, -2264,
    1731, -2264,  1141, -2264,  1333, -2264, -2264, -2264,  1227, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264,  1138, -2264, -2264,
   -2264, -2264,  1295,   -66, -2264,  1141, -2264, -2264, -2264,   402,
   -2264,   159,   402, -2264,  1141, -2264, -2264,  1228, -2264, -2264,
    1985, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
     273, -2264, -2264, -2264,   273,   934,  1394,  1394,  1486, -2264,
   -2264, -2264, -2264, -2264, -2264,  1509, -2264, -2264, -2264, -2264,
   -2264,  1394,  1985,  1985, -2264,  2032,  1394,  1394, -2264,  2586,
    1985, -2264, -2264, -2264,  1985,  1985,  2027,  1304,  2024,  2040,
    1608,  1755,  1394,  1391, -2264,  1394,  1394,  1141, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264,   779, -2264,   744, -2264, -2264, -2264,  1304,  2024, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264,   252, -2264,  1394,  1718,
   -2264,  8356,  8356,  1669,  2126,  2056, -2264,  1608,   779, -2264,
   -2264,  1608,   744, -2264, -2264,   252, -2264, -2264,   779,  1738,
   -2264,  1360,  8270, -2264, -2264,  1157,  1158, -2264, -2264,  1197,
   -2264, -2264, -2264, -2264,   -69,   -69, -2264, -2264, -2264, -2264,
   -2264,  8356, -2264, -2264, -2264, -2264, -2264, -2264,  2089, -2264,
    1698, -2264, -2264, -2264, -2264, -2264, -2264, -2264,  1937, -2264,
    1937, -2264,  2205,  1825,    -9,  1933, -2264, -2264,  8356,  1608,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,    10,     1,     0,     3,    21,     6,     4,    41,
       8,     9,     0,     0,     7,     0,    11,   286,    44,     0,
       0,    41,    41,    22,     0,     0,   673,   288,     0,   176,
      46,     0,     0,    14,     0,    42,     0,     0,    20,   718,
       0,   290,     0,     0,    40,   178,     0,     0,    94,    47,
      48,    27,    26,    30,    30,     0,    12,    15,    16,     0,
      13,   287,   675,     0,     0,     0,   284,    45,     0,     0,
     182,    57,    51,     0,    96,    49,    50,     0,     0,    23,
      29,    28,     0,    17,     0,   678,   676,   694,     0,   772,
     845,   854,   860,   867,   901,   905,   919,   914,   920,   921,
     929,   976,   985,   988,  1014,  1025,  1028,  1031,  1023,  1037,
    1044,  1066,  1070,  1106,  1108,  1112,     0,  1118,  1132,  1156,
    1174,  1175,  1178,  1179,  1184,  1192,  1193,  1206,  1242,  1260,
       0,  1293,  1305,  1313,  1315,   700,  1319,  1322,  1325,  1376,
     720,   721,   722,   723,   724,   725,   726,   727,   729,   728,
     730,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,   741,   742,   743,   744,   745,   746,   747,   748,   749,
     750,   751,   752,   753,   754,   755,   756,   757,   758,   759,
     760,   761,   762,   763,   764,   765,   766,   767,   768,   769,
     719,   289,   296,   297,   348,   291,   351,     0,   177,   179,
     180,    59,    53,    95,     0,     0,     0,  1854,  1808,  1808,
    1808,     0,     0,  1808,  1781,   114,    79,    97,     0,   100,
     102,   103,   104,   150,   106,   105,   107,   108,   109,   110,
     111,   112,   113,    31,    25,  1808,    18,    19,   683,   683,
       0,     0,  1694,  1695,  1696,  1697,  1698,  1699,  1700,  1701,
    1702,  1703,  1704,  1705,  1706,  1707,  1743,  1744,  1745,  1746,
    1747,  1748,  1749,  1750,  1751,  1752,  1753,  1754,  1755,  1756,
    1757,  1758,  1759,  1760,  1761,  1762,  1708,  1709,  1710,  1711,
    1712,  1713,  1714,  1715,  1716,  1717,  1718,  1719,  1720,  1721,
    1722,  1723,  1724,  1725,  1726,  1727,  1728,  1729,  1730,  1731,
    1732,  1733,  1734,  1735,  1736,  1737,  1738,  1693,  1739,  1740,
    1741,  1742,   771,     0,     0,     0,     0,   870,     0,     0,
       0,     0,     0,     0,     0,  1436,  1016,     0,     0,  1873,
     891,   890,     0,  1036,  1436,     0,     0,     0,     0,     0,
       0,   770,     0,  1144,     0,     0,     0,     0,     0,     0,
       0,     0,  1289,  1292,  1280,  1290,  1291,  1282,     0,     0,
    1314,  1312,     0,   718,     0,     0,     0,     0,     0,   504,
     292,  1660,     0,  1504,   293,     0,  1676,   265,   183,  1780,
       0,     0,     0,  1808,  1916,    77,    58,  1779,    63,    65,
      66,    67,    68,  1779,     0,  1808,    52,    55,  1526,  1525,
     125,  1808,  1808,  1855,  1808,  1809,     0,     0,     0,  1808,
    1808,     0,  1782,     0,  1808,     0,    43,     0,    98,   101,
       0,   149,     0,     0,  1778,   683,   680,   686,     0,   683,
     695,   696,   670,   795,  1596,   843,   774,   794,  1586,  1590,
    1833,     0,  1639,     0,  1634,  1640,     0,     0,  1646,  1619,
       0,  1491,  1493,  1615,     0,     0,     0,  1637,  1620,  1546,
       0,  1495,  1618,  1638,  1616,  1641,  1642,  1621,     0,  1636,
    1646,  1635,  1617,   852,  1540,   850,  1535,  1537,  1538,  1611,
    1613,  1539,  1643,     0,     0,     0,     0,     0,     0,   855,
       0,  1480,  1483,  1485,  1488,  1555,  1490,  1665,  1553,  1554,
    1515,   861,   862,     0,  1511,  1513,  1512,   873,   871,   872,
     899,     0,  1568,   902,   903,  1567,   906,   909,  1833,   917,
       0,  1497,  1679,  1530,  1591,  1595,  1531,     0,   927,  1847,
    1615,   943,   974,  1401,  1533,   938,   940,   937,     0,  1537,
     983,     0,   874,   986,   995,   994,  1012,     0,   991,   993,
    1435,     0,  1018,  1022,  1020,  1023,  1021,  1015,  1026,  1027,
    1528,  1029,  1030,  1874,  1032,  1509,  1024,  1869,  1434,  1045,
    1047,  1505,  1067,  1068,  1071,     0,  1073,  1074,  1075,  1107,
    1246,  1583,  1584,     0,  1109,     0,  1116,     0,  1125,  1122,
    1124,  1123,  1119,  1126,  1146,  1515,  1883,  1133,  1144,  1135,
       0,  1142,     0,  1569,  1512,  1571,     0,  1172,  1671,  1176,
    1379,  1500,  1182,  1847,  1190,  1379,     0,  1204,  1197,  1501,
       0,     0,  1508,  1207,  1208,  1209,  1210,  1211,  1212,  1234,
    1213,  1237,  1214,     0,  1506,     0,     0,  1582,  1595,  1243,
    1278,  1265,  1283,  1777,  1303,     0,  1296,  1298,     0,  1310,
       0,  1316,  1317,   706,   712,   701,   702,   703,   705,     0,
    1320,     0,  1323,  1849,  1342,  1328,  1389,  1379,     0,     0,
     507,   353,     0,     0,   357,     0,   295,   298,   181,     0,
    1677,     0,   277,   273,   175,     0,   268,   270,   271,  1915,
    1808,     0,     0,    62,    64,    60,    78,  1779,  1808,     0,
       0,     0,  1808,     0,     0,     0,   171,  1518,   169,   174,
       0,     0,   173,  1527,   152,   153,  1810,   156,  1601,  1216,
    1215,   115,   119,   122,  1837,  1808,     0,    80,    99,   151,
      24,    34,    37,    39,    38,  1845,    36,   681,  1808,     0,
     692,   684,   685,   697,  1894,  1895,     0,   844,   773,   796,
       0,     0,  1588,  1589,  1834,     0,  1612,     0,     0,     0,
       0,  1632,  1541,  1542,  1543,     0,     0,     0,     0,     0,
       0,     0,     0,  1633,   853,   846,     0,     0,  1536,     0,
       0,  1622,     0,     0,  1556,  1557,  1558,  1487,  1552,     0,
    1486,  1667,     0,     0,     0,     0,     0,  1666,   858,   863,
     865,     0,   900,   868,  1570,   874,   904,   909,  1906,  1907,
     907,     0,   910,     0,   918,   915,  1891,  1890,  1498,     0,
    1681,  1499,  1593,  1594,   924,   925,   928,   922,  1848,  1428,
     975,   930,   715,   935,  1403,   939,   936,  1534,  1882,  1401,
    1401,  1401,  1401,   984,   977,     0,     0,   875,   987,  1013,
     989,  1436,  1436,   990,   997,   998,   715,  1460,  1461,  1462,
    1456,  1873,  1448,  1468,  1471,  1470,  1472,  1464,  1455,  1454,
    1459,  1458,  1457,  1463,  1443,  1447,  1465,  1467,  1469,  1445,
    1446,  1442,  1444,  1437,  1438,  1449,  1450,  1451,  1452,  1453,
    1441,  1019,  1017,  1529,  1034,  1870,   715,  1049,     0,  1069,
       0,  1096,  1080,  1072,  1077,  1078,  1079,  1250,     0,  1585,
       0,     0,  1117,  1113,     0,  1126,  1882,     0,  1134,  1140,
    1141,   715,  1137,  1436,     0,     0,  1145,     0,  1173,  1157,
    1672,  1673,  1847,     0,  1177,  1183,  1180,  1159,  1191,  1185,
    1187,  1199,  1205,  1194,     0,  1199,     0,  1563,  1564,     0,
    1235,  1238,     0,     0,  1507,  1218,     0,  1217,     0,     0,
    1593,  1279,  1261,  1267,  1808,  1268,  1263,     0,  1281,     0,
       0,  1304,  1294,     0,  1297,     0,  1311,  1306,     0,  1318,
     713,   711,   704,     0,  1850,  1851,  1324,  1343,  1326,  1777,
       0,  1390,  1377,  1381,   349,     0,     0,   510,   356,     0,
     354,     0,   363,   364,   358,     0,   361,  1808,  1678,   184,
    1789,   274,   275,   276,  1769,     0,   266,   269,     0,  1914,
      71,    61,     0,  1519,    70,    54,     0,     0,  1608,  1604,
    1609,  1607,  1605,  1610,  1606,   160,   161,   163,   172,   167,
     165,     0,   154,  1812,  1811,   157,     0,  1837,  1840,  1839,
       0,     0,   116,   120,    82,    35,  1846,    33,     0,  1808,
     693,     0,     0,   671,  1597,  1774,   801,  1808,  1392,   797,
     798,   800,   802,     0,     0,   790,  1392,  1889,  1888,   787,
     779,   781,   782,     0,  1392,     0,     0,     0,   804,   785,
       0,   793,   776,   792,   777,  1475,  1473,     0,  1587,  1560,
    1559,     0,  1545,     0,  1475,  1473,     0,  1475,     0,  1648,
    1475,  1492,  1494,  1475,     0,     0,     0,  1475,  1549,  1550,
    1551,     0,  1496,  1475,     0,  1833,  1406,   851,  1595,  1531,
       0,  1614,     0,     0,  1475,  1489,  1669,   858,  1479,  1478,
    1482,  1481,  1484,     0,   856,     0,     0,  1514,   885,   908,
     913,     0,  1794,     0,  1532,  1406,  1808,  1680,  1592,   926,
     715,   923,  1430,  1402,   716,   715,  1400,     0,   949,   948,
     941,   944,   946,     0,   933,   934,   931,   932,     0,  1406,
       0,   881,   992,  1007,  1009,  1008,  1002,  1004,  1010,  1436,
     999,   996,  1436,  1000,  1466,  1439,  1440,  1835,  1033,  1510,
     715,  1041,  1042,  1873,  1057,  1058,  1060,  1062,  1063,  1059,
    1061,  1052,  1873,  1048,     0,  1097,     0,  1099,  1098,  1100,
    1082,  1092,     0,     0,  1076,  1913,  1836,     0,  1252,     0,
    1799,     0,  1110,  1406,     0,     0,     0,  1128,  1502,  1138,
    1151,  1147,  1152,  1148,  1153,     0,  1143,  1386,  1385,  1150,
    1159,  1380,  1579,  1580,  1581,     0,     0,  1428,     0,   715,
       0,  1198,     0,     0,     0,     0,  1236,     0,  1240,  1239,
    1232,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1220,  1221,  1674,  1428,     0,  1284,  1865,  1865,  1299,  1300,
    1301,     0,  1406,     0,     0,   714,     0,  1661,     0,  1301,
    1187,  1763,   351,   505,     0,     0,   605,   355,   360,   397,
     366,  1783,  1808,     0,     0,  1808,  1783,  1826,  1808,  1767,
     294,     0,   299,   302,   303,   304,   305,   306,   307,   308,
     309,   310,     0,     0,   186,  1790,  1867,  1770,  1793,   267,
       0,    74,    76,    75,    72,    73,    56,   131,   130,   145,
     141,   146,   127,   144,   142,   128,   129,   143,   126,   132,
     133,   135,   162,     0,   166,     0,   170,  1602,   155,   158,
       0,  1838,   123,   117,   118,   121,     0,    81,     0,    85,
     687,   688,   691,     0,   682,   698,   700,  1574,   808,  1572,
    1573,     0,  1394,  1395,   775,  1396,   715,   799,  1887,  1886,
    1828,  1828,   806,   807,  1828,   813,  1808,   815,   816,   817,
     842,  1808,   818,   819,   820,   821,   822,     0,   823,   824,
     826,     0,   827,   828,     0,   829,  1808,   814,  1765,   832,
     841,   835,   803,   834,   791,   778,   780,  1392,   788,   783,
     784,   805,   786,  1476,  1477,  1598,     0,     0,     0,  1562,
    1544,  1561,  1679,     0,  1643,     0,  1643,  1647,     0,  1643,
    1643,  1643,     0,  1626,     0,  1643,     0,   715,   847,  1408,
    1593,  1594,  1406,     0,  1643,  1643,     0,  1668,   857,   859,
     866,   864,   894,  1806,   912,   911,   916,     0,  1429,   715,
    1427,   718,  1404,   955,   956,   953,   952,   954,   951,   945,
    1808,   957,     0,   960,   961,  1787,  1808,   964,   965,   947,
     966,   967,     0,  1808,   969,   950,     0,   978,     0,   876,
     877,   686,     0,  1436,  1436,  1006,   715,  1003,     0,  1040,
     715,  1043,  1038,     0,     0,  1064,     0,     0,     0,  1093,
    1095,     0,  1088,  1102,  1089,  1090,  1081,  1084,  1102,  1912,
       0,  1885,  1244,  1808,   481,   482,  1813,     0,  1800,  1251,
    1111,  1114,     0,  1128,  1841,  1841,     0,  1127,  1131,  1120,
    1503,     0,  1139,  1136,     0,     0,  1161,  1160,   715,  1181,
    1416,  1186,  1188,     0,  1200,  1436,  1436,  1195,  1201,  1219,
    1241,  1231,  1233,  1223,  1224,  1225,  1229,  1226,  1230,  1227,
    1228,  1222,  1675,  1277,     0,  1274,  1275,  1269,     0,  1262,
    1911,  1910,     0,  1866,  1287,  1287,  1411,     0,  1679,  1307,
       0,   707,     0,  1662,  1329,  1330,     0,  1333,  1336,  1340,
    1334,  1428,  1764,     0,   350,   351,   508,     0,     0,   285,
    1808,  1771,     0,  1784,     0,     0,  1808,  1767,     0,     0,
       0,     0,     0,  1827,  1808,   344,  1768,   345,     0,     0,
     346,   300,   301,  1847,  1868,  1783,     0,  1902,  1903,    69,
     134,   137,     0,   164,     0,   159,   124,     0,    92,    90,
       0,     0,    83,    86,   689,   690,   700,   718,   812,  1398,
    1399,  1391,   715,  1393,  1829,     0,     0,     0,     0,     0,
     833,  1808,  1808,  1432,  1432,     0,  1766,     0,   789,  1474,
    1599,     0,  1406,  1657,  1630,  1659,  1631,  1655,  1627,  1628,
    1629,  1653,  1650,  1651,  1625,  1532,  1407,   715,  1405,  1592,
     848,  1644,     0,  1623,  1624,  1670,  1565,  1566,   715,   715,
     897,  1833,  1807,   888,   893,   892,   887,     0,  1683,  1684,
    1685,  1686,  1687,  1688,  1689,  1690,  1682,  1431,     0,     0,
     958,   959,  1833,   653,   655,   962,   963,     0,     0,  1432,
    1432,     0,  1406,  1497,  1406,  1497,   878,   879,     0,   883,
     882,   884,  1005,  1011,  1001,  1035,  1039,  1050,  1053,  1054,
    1785,  1046,  1873,  1051,  1102,  1102,     0,  1087,  1085,  1086,
    1091,  1884,  1254,     0,  1814,  1248,  1801,  1406,  1121,  1842,
     262,   263,   264,  1130,     0,  1154,     0,     0,  1168,     0,
    1420,   715,  1415,  1189,   715,   715,  1202,  1276,  1266,  1270,
    1271,  1272,  1273,  1264,  1285,  1288,  1286,   715,  1295,  1413,
    1808,  1406,  1406,   709,  1321,  1661,  1332,  1797,  1338,  1797,
    1411,   715,   715,  1378,  1388,  1423,  1424,  1387,  1384,  1383,
    1818,   506,   351,   511,     0,     0,   491,   421,  1856,  1856,
    1856,  1856,  1856,  1878,   422,   457,   459,   425,   426,   427,
     428,   429,   430,   453,   451,   452,   454,   455,   460,   458,
     431,  1852,   456,     0,   432,   418,   433,   434,     0,     0,
    1859,   436,   437,   435,  1815,   439,   440,   438,  1808,  1810,
     398,   399,   400,   401,   402,   403,   419,   423,   424,   404,
     405,   406,   407,   408,   409,   410,   411,   412,     0,     0,
    1772,     0,   394,     0,   367,   322,   342,  1904,  1905,  1522,
     331,  1520,  1897,  1896,   324,  1524,  1523,  1824,  1781,  1797,
       0,  1808,   328,   327,  1808,   347,  1826,  1847,  1875,   247,
       0,  1808,  1779,  1813,   249,     0,  1882,   235,   185,   234,
     187,   188,   189,   190,   191,   192,     0,   193,     0,   194,
     246,   195,   196,   197,   198,   199,   200,  1775,  1808,     0,
     272,     0,   136,   168,    87,     0,    88,    93,    89,    84,
     718,  1397,   809,   811,   810,   837,   836,     0,     0,   839,
       0,  1577,  1578,   838,   831,  1603,   840,  1575,  1576,  1600,
     849,  1409,  1645,   895,   896,   715,   869,     0,   886,   971,
    1788,   654,   656,   970,   973,   972,   968,   980,     0,   979,
       0,   880,  1055,  1786,     0,     0,  1083,  1094,  1102,  1804,
    1804,  1103,     0,     0,  1257,  1253,  1247,  1115,  1129,     0,
    1162,  1808,  1428,     0,     0,  1163,     0,  1167,  1421,  1196,
    1203,  1412,   715,  1410,     0,  1309,  1308,  1344,   708,     0,
    1331,  1798,     0,  1797,  1335,     0,  1327,  1425,  1426,  1422,
    1819,  1820,  1382,   509,   513,   606,   502,   503,  1857,   450,
     449,   442,   441,   448,   447,   446,   445,   444,   443,  1879,
       0,  1853,   488,   474,   468,   413,   500,  1860,  1816,  1817,
     489,     0,     0,   415,   417,  1691,  1691,   396,  1833,     0,
       0,   395,   368,     0,   312,  1521,  1825,   333,     0,   315,
    1861,   341,     0,     0,  1808,  1813,  1876,  1877,   215,   250,
    1847,  1808,  1808,  1808,  1808,   259,  1769,   260,     0,  1808,
    1826,  1776,     0,     0,   278,   279,   282,   138,   139,    91,
       0,   825,   830,  1908,  1909,  1433,   898,   889,  1406,  1406,
       0,  1065,  1101,  1805,     0,     0,  1808,  1255,     0,     0,
    1245,  1249,     0,     0,  1158,  1171,  1418,  1419,  1170,  1166,
    1164,  1165,  1414,  1302,  1352,   710,  1337,     0,  1341,   512,
     608,   490,  1797,   470,     0,  1871,     0,   420,   492,   494,
     496,     0,   414,  1779,   461,   462,     0,     0,   377,   373,
     376,   375,   374,   389,   385,   387,   388,   390,   386,   391,
     392,   393,   370,   381,   382,   383,   378,   379,   380,   372,
     369,   323,   314,   313,   311,   332,  1781,  1862,   320,   329,
     326,   330,   325,     0,  1808,   217,   216,   213,   249,   245,
       0,     0,     0,     0,   258,   261,     0,  1808,   248,   231,
     280,     0,   281,     0,     0,   982,   981,  1056,  1105,  1104,
       0,  1258,  1808,  1436,  1169,  1417,  1774,  1375,  1374,  1353,
    1345,  1346,  1765,  1347,  1348,  1349,  1350,  1373,     0,     0,
    1339,     0,   514,     0,   612,   607,   609,     0,     0,     0,
     468,   469,  1872,   472,   501,   498,   495,     0,   416,  1692,
     371,   384,     0,     0,   334,   335,   336,   337,     0,   316,
    1796,   322,     0,   225,   226,   224,   223,     0,   209,   210,
     220,   220,     0,   208,   206,   207,   212,   211,   220,   220,
       0,   251,   252,   253,   254,   257,   232,     0,   283,   140,
     699,  1256,     0,  1155,     0,  1863,     0,  1835,   515,     0,
     613,     0,   610,   475,   471,   476,  1835,   479,     0,   493,
       0,   497,   340,   339,  1773,  1781,   321,  1663,   221,   203,
     222,   204,  1789,   205,   202,   218,   201,   219,  1808,     0,
     241,   240,   241,   237,  1259,     0,  1864,     0,  1371,  1370,
    1369,     0,     0,   615,   616,   611,   477,   479,     0,   483,
     478,     0,  1808,     0,   318,   228,  1664,   214,     0,   255,
    1516,     0,   239,   238,  1372,  1893,  1892,  1843,  1365,  1359,
    1360,  1362,     0,  1808,  1858,   483,   473,  1777,   466,  1813,
    1881,     0,   338,  1835,   317,     0,   227,   256,  1517,     0,
     244,  1844,  1835,  1368,  1363,  1366,     0,  1361,   519,  1808,
    1808,  1767,  1821,   544,   518,   522,   523,     0,  1791,   631,
    1808,   620,  1878,   621,  1787,  1808,     0,   634,   629,   624,
     630,  1828,   625,     0,   628,   636,   633,   626,   632,     0,
     637,   627,     0,   648,   642,   646,   645,   643,   647,   617,
     649,   644,     0,  1828,   467,     0,  1808,   499,     0,     0,
       0,     0,  1367,  1364,     0,  1931,  1932,  1808,  1767,     0,
     516,   520,  1792,   524,     0,     0,   618,   619,   622,   623,
       0,   651,  1808,  1871,  1808,   652,   650,   668,  1808,   487,
     484,   485,     0,   319,     0,   147,   148,   230,     0,  1900,
    1901,   242,  1358,  1355,  1357,  1356,  1351,  1354,   521,  1822,
    1823,   532,   529,   362,   545,   525,   526,   641,   640,   661,
     667,     0,   664,   486,   480,   229,   243,   528,  1898,  1899,
     531,   364,   546,   527,   659,   657,   660,   658,   662,   663,
       0,   635,   665,   666,     0,     0,  1808,  1808,     0,   533,
     534,   535,   536,   537,   538,     0,   548,   638,   639,  1918,
    1917,  1808,     0,     0,  1920,     0,  1808,  1808,   530,  1858,
       0,   543,   539,  1919,     0,     0,  1802,  1830,  1767,     0,
       0,     0,  1808,  1833,   547,  1808,  1808,     0,   553,   555,
     564,   556,   558,   561,   549,   550,   551,   560,   562,   565,
     552,     0,   557,     0,   559,   563,   554,  1830,  1767,   540,
     542,   541,  1803,   603,  1831,  1832,  1810,   589,  1808,   468,
    1436,     0,     0,     0,     0,     0,   597,     0,   587,   593,
     596,     0,   590,   598,   601,  1810,   592,   588,     0,  1871,
     585,  1679,   581,  1547,  1922,     0,     0,  1924,  1926,     0,
    1930,  1928,   566,   570,   574,   574,   568,   572,   567,   573,
     604,     0,   595,   594,   600,   599,   591,   579,   472,   602,
    1835,   580,  1548,  1921,  1925,  1923,  1929,  1927,   577,   569,
     577,   571,     0,   464,     0,     0,   576,   575,     0,     0,
     463,   584,   582,   583,   578,   586,   465
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2264, -2264, -2264, -2264, -2264,  2252, -2264, -2264, -2264, -2264,
   -2264, -2264,  2202, -2264,  1588, -2264, -2264, -2264, -2264,  2228,
    2204,  2207, -2264, -2264,  1535, -2264, -2264, -2264, -2264, -2264,
    2214, -2264, -2264, -2264,  2216, -2264, -2264,  1874,   -95, -2264,
   -2264, -2264, -2264, -2264,  2075, -2264, -2264, -2264, -2264,   890,
   -2264, -2264, -2264, -2264, -2264,  2062,   553, -2264, -2264, -2264,
   -2264,  1229, -2264, -2264, -2264, -2264, -2264,   921, -2264, -2264,
   -1641, -2264, -2264, -2264, -2264, -2264,  1570, -2264, -2264, -2264,
   -2264,  1250, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264,  -820, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264,  -125, -2264,   139,
   -2264, -2264, -2264,   -54, -2264, -2264, -2264, -2264,   137, -2264,
   -2264,  1606, -2264, -2264, -2264, -2264, -2264,   126, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264,   -45, -2264, -2264, -2264,   156,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -1268, -2264, -2264,  1632, -2264, -1924,
   -2182, -2264, -2264, -2264, -1110, -2264, -2264, -2264, -2264, -1184,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2263,  -157,   180,
    -971,  -920, -1783, -2264, -2264, -2264, -2227, -2264,  -438, -2264,
   -2264,  -123, -2264,  -128,  -150, -2264,  -251, -1768, -2264, -1660,
   -2264, -1657, -2264, -2264,    92, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,  -414,  -437,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -1265, -2264,  -390, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264,     7, -2264, -2264, -2264,  -180,  -178,  -274,  -273, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
    2081,   880, -2264,   800, -2264, -2264, -2264, -2264, -1246, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264,   267, -2264, -2264,   -25,
   -2264,  2258, -2264, -2264, -2264, -2264, -2264, -2264, -2264,  1257,
   -2264,  -712, -2264, -2264,  -696, -2264,   908, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264,  1194, -2264, -2264, -2264,
    1832, -2264, -2264, -2264, -2264, -2264,  1524, -2264, -2264,   813,
   -2264, -2264,  -599, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264,  1537, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
    1800, -2264, -2264, -2264,  1166, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
    1487, -2264, -2264,  1483, -2264, -2264,  1148,   818, -2264, -2264,
   -2264, -2264, -2264,  1791, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264,   560,  1445, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,  1447,
   -2264, -2264,   804, -2264,  1132, -2264, -2264, -1469, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264,  1767,  1439,   792, -2264, -2264, -2264, -2264, -2264, -2264,
   -2072,  1759, -2264, -2264, -2264,   784, -2264, -2264, -2264,  1111,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264,  1062, -2264, -2264, -2264,
   -2264, -2264, -2264,  1418,   781, -2264, -2264, -2264, -2264, -2264,
    -598, -2264, -2264, -2264, -2264,  1085, -2264, -2264, -2264,  1749,
   -2264,  1737, -2264, -2264, -2264,  2020, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264,   757, -2264, -2264, -2264, -2264,
   -2264,  1733,  1081, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264,   538, -2264,  1086, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,   -65,
   -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264, -2264,   462,
   -2264,  1396, -2264, -2264,  -970, -2264, -2264, -2264, -2264,   968,
   -2264, -2264, -1061, -2264, -2264,   537, -2264, -2264, -2264, -2264,
     326, -1854, -2264, -2264,   535, -1227, -2264, -2264,  -480,  -916,
    -306,  -814, -2264, -2264,  1512, -1165,   783,   786,   789,   791,
     751,   545,   -11,   844,   776, -2264,  1103,  -159,  -607,  -200,
     856,  1785, -1212,  -184,  -356, -2264,  -604, -2264,  -272, -1543,
    1591, -2253,  -396,  1381, -2264,   460, -1155,  -187,  1689,  -282,
    -286, -2264,  -113,   359, -2264,  -736, -1191, -2264,  1135,  -570,
   -1361,  -319,  1893, -1547, -2264, -2264,   -90,  -309, -2264,   -79,
    -261,  -434, -2264, -2264,  1043,  -467,  -483,  -403,  1042, -1680,
    1046,  -305,  -208,  -439,   132, -2264, -2264, -2264,   179,  1941,
   -2264, -2264,   873, -2264, -2264, -2264, -2264, -2264, -2264, -2264,
   -2264, -2264, -2264, -2264, -1431, -2264, -2264,   286, -2264, -2264,
     111, -1630,   258, -2264, -2038, -2264,  -635, -1828, -1858, -1219,
   -2264, -2264,    14, -2264, -1310, -2264, -1335, -2264, -2264,   367,
   -2264,  -209, -1876, -1890, -2264, -2264, -2264, -2264, -1767, -1379,
    -262,  -513, -1188,  1372,   858, -2264, -2264,  -509, -2264, -2264,
   -2264,   -36, -2264, -2264, -2264,  1137, -2264,   886, -1848,  -826,
   -2264, -2264, -2264,  -100,   763, -1648, -1446, -2264, -2264,   871,
   -2264, -2264,  -139, -2264,  1118, -2264, -2264, -2264,    37, -2264,
   -1579,  -260, -2264, -2264, -2264, -2264, -2264, -2264
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,     6,     7,     8,     9,    10,    11,
      56,    57,    58,    60,    16,    12,    21,   235,    22,    53,
      82,    78,   422,   735,   736,    17,    18,    29,    30,    48,
      49,   202,   396,   700,    50,   201,   386,   387,   388,   389,
     390,   391,   392,  1344,   393,   416,  1054,  1377,  1378,  1379,
    1996,  1680,    74,   216,   217,   218,   219,   220,   414,   721,
    1374,   722,   723,   221,   702,  1358,  1359,  1360,  1991,  2167,
    1361,  2567,   222,   421,   223,   714,   715,   716,  1368,   224,
    1035,  1036,   225,   226,  1364,   227,   228,   229,   230,   231,
     232,    44,    45,    70,   377,   200,   378,  1334,  1663,  1970,
    1971,  2358,  2359,  2360,  2267,  2406,  2399,  1972,  2346,  1973,
    2466,  1974,  1975,  1976,  1977,  1978,  2413,  2442,  1979,  1980,
    1981,  1982,  1983,  2363,  1984,  1985,  2156,  1986,  1567,   684,
     685,   686,   687,  1014,   688,  1010,  2164,  2165,  2282,    26,
     194,    27,    41,    66,   195,   196,   677,   197,  1007,  1322,
    1323,  2254,  1324,  2464,  2341,  2134,  1325,  1326,  1954,  2260,
    1327,  1328,  2255,  2334,  2335,  2336,  2337,  1329,  1330,  1331,
    1332,  1659,   369,  1302,   370,   371,   671,   672,  1309,   673,
    1004,  1005,  1641,  2131,  2242,  2243,  2244,  2245,  2246,   674,
    1932,  1640,  1910,  1911,  1912,  2222,  1913,  1914,  1915,  1916,
    1917,  1918,  1919,  2660,  2760,  1920,  2215,  2320,  2387,  2213,
    2427,  2429,  2430,  1556,  2458,  2560,  2561,  1921,  1922,  1923,
    1924,  1925,  2325,  2218,  2219,  2389,  1926,  1927,   670,  1635,
     997,  1862,  1306,  2094,  2209,  2312,  2422,  2453,  2484,  2485,
    2543,  2585,  2486,  2581,  2597,  2619,  2620,  2621,  2622,  2623,
    2624,  2540,  2584,  2626,  2639,  2664,  2665,  2722,  2749,  2756,
    2666,  2667,  2741,  2762,  2668,  2669,  2670,  2671,  2672,  2673,
    2698,  2699,  2702,  2703,  2674,  2675,  2676,  1639,  2210,  2315,
    2316,  2317,  2424,  2454,  2519,  1765,  1766,  2608,  2609,  2610,
    2614,  2520,  2521,    38,   743,  1386,    39,    87,   239,   238,
     425,   426,   427,   740,  1061,   241,  1063,  1686,   363,   655,
     656,  1843,  2078,   657,   658,  1294,  1163,  1164,  1491,   659,
      64,   140,   141,   313,   435,   749,   436,  1068,  1069,  1070,
    1092,  1071,  1402,  1403,  1072,  1432,  1433,   748,   142,   314,
     473,   777,   775,   143,   315,   489,  1144,   144,   316,   501,
     502,  1146,   145,   317,   510,   511,   848,  1181,  1519,  1520,
    1521,  1482,   332,  1746,  1740,  2026,   803,   146,   318,   513,
     147,   319,   516,   810,   148,   320,   519,   815,   149,   150,
     151,   321,   528,   824,   827,   152,   322,   532,   533,   534,
     535,   838,   536,  1170,  1171,  1172,  1497,  1515,   831,   153,
     323,   540,   844,   154,   324,   543,   155,   325,   546,   547,
     548,   853,   854,   855,  1191,   856,  1186,  1187,  1525,   850,
     156,   326,   557,   333,   157,   327,   558,   158,   328,   561,
     159,   329,   564,  1198,   160,   161,   334,  1202,  1532,   162,
     335,   569,   897,  1211,  1535,  1788,  1789,  1790,  1791,   163,
     336,   572,   164,   337,   574,   575,   903,   904,  1223,   905,
     906,  1546,  1547,  1220,  1221,  1222,  1540,  1797,  2051,   165,
     338,   166,   339,   584,   167,   340,   586,   913,   168,   342,
     592,   593,   917,  1569,   169,   343,   597,   921,  1573,   922,
     598,   599,   600,  1241,  1243,  1244,   170,   344,   607,  1256,
    1818,  2062,  2194,   929,   171,   172,   345,   609,   173,   174,
     346,   612,   936,   175,   347,   614,  1257,   939,   176,   177,
     348,   617,   945,  1260,  1587,  1588,   943,   178,   349,   623,
     724,   958,   624,   625,  1280,  1281,   626,   627,   628,   629,
     630,   631,   632,   179,   350,   579,  1802,   907,  2056,  1228,
    1552,  2054,  2190,   180,   351,   640,  1283,   966,  1604,  1605,
    1606,   962,   181,   642,   968,  1834,   357,   182,   358,   644,
     645,   646,  1616,   972,   183,   359,   649,   977,   184,   361,
     185,   362,   651,   186,   364,   660,   187,   365,   662,   188,
     366,   664,   990,  1624,  1625,  1299,  1627,  1848,  2084,  1850,
     988,  2079,  2204,  2300,  2301,  2302,  2576,  2303,  2449,  2450,
    2476,  2304,  2420,  2305,  2306,  2307,   189,   367,   666,   934,
    1300,  1249,  1853,   992,  1394,  1395,  1396,  1691,  1692,   833,
     834,  1166,  1468,  1469,  1728,  1838,  1839,  2073,  1579,  2195,
    1580,  1822,  1854,  1855,  1856,  1161,  1162,  1490,  2009,   567,
     568,   550,   551,   883,   884,   885,   886,   887,   888,   889,
    1095,  1446,  1105,   491,   492,   493,   494,   474,   520,   818,
     610,   618,  1237,  1238,   573,   633,   634,   894,   601,   504,
     505,  2439,  1946,  1024,  1940,  1941,  1947,   400,   717,   559,
     522,   836,   475,   476,  2712,  1117,   496,  1101,  1450,  1548,
    1735,   514,   602,  1388,  2016,  2010,  1251,  1389,   580,   637,
     477,   438,   523,   524,   439,   752,   753,  1390,  1369,  2700,
    1037,   478,   479,   480,   481,   482,   483,   484,   781,   761,
    1124,  1121,  1114,  1106,  1108,   675,  1626,  2435,   798,  1137,
    1477,   932,  1608,   681,   821,  1157,  1756,  2224,   312,  1633,
    1707,  1657,  1338,  1933,  1073,  2162,   428,   394,   413,  1644,
    2044,  1767,  1336,  2544,  1153,  2342,  2082,  1559,  2683,  2184,
    1747,   406,  1046,  1805,  2120,  2092,  2539,  2137,  1654,  1695,
    2686,   755,  1229,  1050,  1810,  2472,  1057,  1987,   986,  2112,
     404,  2100,  1929,  2258,  2417,  1614,  1665,   896,  2323,   565,
    2148,  2110,  2390,   606,  1553,  1404,  1094,   819,  2447,   746,
    1944,  2600,  2571,  1669,  1648,   812,  2175,  1612,  1230,   395,
    2631,  2637,  2725,  2726,  2727,  2728,  2729,  2488
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     407,   408,   756,   538,   411,   813,   652,  1242,   970,  1528,
     706,   725,   709,   374,    63,   712,   762,  1938,   401,   549,
     829,  1712,  1696,  1563,   409,  1697,   423,  2018,  1666,   954,
    1581,  1992,   577,  2122,  1634,  1194,  1123,   851,  1188,   372,
     636,   560,   823,   967,   503,  -674,  1133,   398,   398,   560,
     946,   784,   437,   570,   497,  1681,  1609,   515,   822,  2564,
    1015,   539,  1667,   560,  1677,  1043,   441,   635,  -672,  2448,
     616,    85,  1779,  2153,  2154,  1741,   576,   412,  1197,  1800,
     791,  1225,   603,   441,  1643,   424,  1860, -1584,  1671,  1410,
    2139,  1493,  1494,  2385,  1486,  1703,  1099,  1651,  1769,  1443,
    1443, -1869,  1564,   661,   937,   665,  1434,   498,  2748, -1585,
    1002,  2170,   526,  1550,  1438,   909,   900,  1607,  1517,   526,
     521, -1835,  1951,  2052,  2128,  1047,  1168,   526,  1738,   919,
    1215,  2380,  2418,  2252,  2151,   517,   424,   529,   731,  2343,
    1687,   526,  1169,  1052, -1590, -1611,  1093,  2410,  2002,  2003,
    2004,  2005,  2006,    -5,  1183,   823,   495,  1722,  2014, -1813,
     608,  1952,   613, -1588,  1804,  2332,  2308,   641,  2761,  1126,
    2125,   960,  1561,   192,   692, -1777,  1794,   405,  1048,  1216,
     330,   663,   757,   622,  -674,  2467,   699,  1841,  -674,  2144,
    1152,  2513,   703,   704,   806,   705, -1882,   741,   518,   -21,
     710,   711,  1610,   845,  1930,   726,  2188,  -672,  2197,   537,
   -1835,  -672,  2029,   733,     4, -1882,   899,  1557,  2371,  1225,
     500,  2033,  1443,    46,  2036,   788,   788,   788,   744,   503,
     405,  1619,  1286,  1554,   980,   518,  1398,   732,  1399,  1179,
     375,  2098,   763,   738, -1880,  -674,   650,  1467,  1443,   518,
     603,  2096,   515,  1376,   527,  2264,  1678,   679,  1661,   581,
    -674,  1844,  2123,  2098,   544,     3,   622,   792,  -672,  1098,
     449,   581,   793,   893,  1043,   545,  1044,   785,   498,   498,
     498,   680,  2411,  -672,   893,  1183,  2313,   449,  1100,  1020,
    1662,  2388,   694,   981,  2124,   979,   792,   701,  1742,  1217,
    2414,   793,  2572,   373,   490, -1882,   861,  1233,  1038,  2594,
    2097,   739,   526,  2099,   453,  1558,   734,   500,   745,  2129,
    2130,  1102,  1555,  2189,   458,  2046,  2047,   495,   495,   495,
    1214,   453,   807,  1495,   682,  2101,    47,   603,   742,  1158,
    1131,   458,  2295,   825,   560,   -21,   620,  1780,   952,   893,
    2168,   526,  1443,  1443,  1297,  1266,  2433,  2573,   331,   947,
    1287,  1743,   526,  1218,   953,  2574,  2344,  1861,     4, -1793,
     500,  1292,  1611,  1049,  1931,  1188,  2658,  1533,  1188,  1154,
    1744,  1565,  2412,   846,  1443, -1882,  1536,   975,  1443,   816,
    1723,  -674,  2313,  2277,   901,  2329,   779,   193,  2339, -1777,
    2053,  2602,   -32,  2126,  1857,   449,  1226,   376,  1748,   462,
     751,  1730,   948,  1296,  -672,   424,   512,   811,   424, -1882,
    2345,   837,   526,  1250,  1400,   733,   462,   526,  2419,  1097,
    1739,  1444,  1444,   621,  2253,  2048, -1813,  1827,   895,   653,
    2000,   434,   449, -1869,  2601,   920,  1989,   499,  1566,   453,
   -1777,  2575,   683,   434,  1990,  1551,   449,  1953,  1168,   458,
    1704,  2172,  2709,  1770,   622,  1227,   902,  1708,  1430,   578,
     898,  2565,  2138,   434,  1169,   605,   789,  1158,   464,   596,
     518,  1018,   518,  1445, -1656,  1044,   453,   792,  1781,  1022,
     788,   654,   793,  1027,  1009,   464,   458,   788,   788,   788,
     453,   434, -1808,   653,  1496,  1401,   788,   788,   788,  1118,
     458,  1118,  1682,  1437,  2085,  1668,  1051,  1016,    86,   788,
    1672,  1118,   788,  1472,   467,   751,   653,   852,   734,  1058,
     718,   788,   788,   788,   788,   788,  1745,  2434,   441,  1053,
   -1777,   467,   969,   498,   462,   549,  1522,  1097,   373,  1483,
     498,   498,   498,   713,  1444,   654,   399,   399,   788,   498,
     498,   498,  1119,  1498,  1119,  1679,  2566,   434,  1129,  2526,
     434,   434,   498,   472,  1119,   498,   521,  1295,   654,  2182,
    1444,   462,   764,  1526,   498,   498,   498,   498,   498,  2333,
     472, -1777,   495,  1184,  2093,   462,  1219,   596,   696,   495,
     495,   495,   694,  1227,  1185,   876, -1658,  1449,   495,   495,
     495,   498,  1466,   464,  2140,  1340,  2583,   786,   499,   499,
     499,   495,  1199,   434,   495,   560,   596,    13,  1253,  1232,
    1684,   430,  1457,   495,   495,   495,   495,   495,  1129,   947,
    1159,   373,  2369,   605, -1848,  1471,   521,   788,  2113,  1074,
     464,  2020,  1541,  1246,  1760,  1382,  1749,  1750,  1751,   467,
     495,  1470,  2546,  1245,   464,  1942,   893,  1451,   861,   434,
    1825,  2515,  1252,  2604,  1593,  1594,  1595,  1596,  1597,  1598,
    1599,  1600,   541,  1261,  1444,  1444,  2516,   449,   817,   449,
    2031,   566,   948,  1589,   433,  2296,   467,    15,   585,   587,
     498,  1945,   434,   526,   718,  2590,  1129,   811,   472,  1188,
     467,  2037,  1290,  2039,   521,  1542,  1444,   647,   352,  2152,
    1444, -1882,   947,  1752,  1184,  2015,  1721, -1882,  2259, -1777,
     605,   453, -1777,   453,  2605,  1185, -1652, -1649,  1173,   434,
    1096,   458,   449,   458,   526,   472,  2057,  -679,  2207,   495,
    -677, -1882,   596,   434,  2398,  1282,  1113,  1113,  1113,   472,
    1380, -1882,   330,  2405,  1543,  1065,   507,   998,  1475,  1132,
    1129,   419, -1654, -1793,  2265,   948, -1882,  1943,   521,   718,
    2075,  2076,   792,   434,  1150,    23,   453,   793,    19,  1387,
    1341, -1882,  1817,  2297,  2517,  1761,   458,  2518,  1333,  1602,
   -1773,    24, -1773,  2547,  1603,   379,  2523,   379,  1155,  1151,
    2707, -1882,   380,   353,   380,  1272,  1236,  2469,  2146, -1660,
    2266,   518,   947,  1273,  -679,    25,   462,  -677,   462,  2736,
     431,  2032,  2298,  1451,   778,  2198,   788, -1882,   682,  1381,
    1258,  2187,  1452,  1804,  1349,   863,   864,  1753,  1754, -1882,
    1383,  2536,  1755,   354,  1152,   718,  2659,  1479,  1391,  2582,
     434,  2738, -1882,  1372,  1373,  2118,  1284,  2606,  2147,  2299,
   -1777,  2661,  2607, -1777,  1481,   948,  1204,  2318,  2451,  1205,
    1206,   462,   355,   499,  1522,   865,   866,  2063,  1350,   498,
     499,   499,   499,   434,  2309,   464,   778,   464,  1351,   499,
     499,   499,  1120,  2479,  1120,   596,  2451,  2064,  2580,  1772,
     890,  1774,   499,   518,  1120,   499,  2109,    28,   526,   449,
    2625,   508,   526,   509,   499,   499,   499,   499,   499,  1265,
     521,  2480,  2481,  2065,    20,   526, -1882,   596,   495,  1365,
     331,   467,   910,   467,  2470,   560,   893,  1487,  1544,  1560,
     464,   499,  2641,  2642,   434,  1807,   683,   434,  2066,    31,
    2679,   947,   947,   453,  2680,  2681,  2045,   876,  1795,  1074,
     419,   526,  1342,   458,  1777,  2568,  2291,   356,   434,  2662,
    1685,   434,  2663,  1353,   434,   718,   434,  1729, -1773,  1274,
     472,  2677,   472,  2704,  1577,   930,   467,   596,  2587,   204,
      51,  2015,   947,  2588,   647,  1851,    32,   434,  1067,   778,
   -1773,  2119, -1848,  1842,   948,   948,   434,   381,  2687,   381,
    2250,  1275,  2704,   526,   526,   526,  2314,  2340,   449,  1859,
    1618,   955,  1725,  1343,   552,    80,  2015,  1628,  1628,  2636,
     499,  2629,  1023,  1276,  1011,   472,   931,   205,  2706,  2452,
    1578,  2630,  1354,  1570,    35,   948,  1846,  2569,   462,  2570,
      36,  2098,  1717,  2627,  2098,  1254,  2696,  2628,   596, -1773,
    1173,   588,   453,    40,   405,   923,  2701,   940,   738,  1160,
   -1882,   718,   458,   596,   526,   206,  1448,   207, -1795,   208,
      52,  1215,   924,   382,  2098,   382,   622,   209,  1277,  1959,
     877,  1642,   878,  1645,  1012,  1013,  1650,  1652,    43,  1655,
    -517,  2697,   596,   434,  2723,  2361,  2330,  2285,  2286,   718,
     449,   379,  2552,  1193, -1779,    81,   589,   464,   380,   993,
      42,  1960,  2314,  2103,   590,  1127,  2105,  1571,  -517,  -517,
    1216,  1852,  1207,  1208,  2558,  1660,   739,  1357,  1858,   383,
    2155,   383,  1160,   210,   384,  2408,   384, -1882,  2247,  2247,
    1278,   553,   554,  1201,   453,  2482,  2107,   462,  1209,  1210,
     963,  1737,  1347,   467,   458,   794,  2067,  2392,  2393,  2638,
     555,  1545, -1882,  1676,   795,   788,   788,  2445,  1239,  2421,
    1617,  2446,   788,  2678,   788,  2409,   778,  1698,  2428,  1617,
    1258,  1118,  1699,   615,  1178,  1180,   695,   379,   693,  2248,
    2248,  1247,   788,  1821,   380,  1736,   434,  1705,  1783,    55,
     591, -1808,   472,   667,  2013,   984,  1167,   985,  2027,   499,
     964,  1467,  1737,   965,   556,   828,   464, -1882,   498,   498,
    1248,  1935,   890,  2268,   596,   498,   211,   498,  1948,  2030,
     405,   719,  -517,   720,  1119,  2247,   808,  1279,   696,   462,
    1217,  1268, -1882,  1203,   526,   498,  1204,  1785,  1582,  1205,
    1206,  1348,  1269,  1234,   893,  2528,  1736,   947,  2462,  1824,
    2739,  -517,   467,  2049,  2531,   947,  2473,   495,   495,  2034,
    2035,  1759,   212,  1583,   495, -1096,   495,  1768,    59,  2483,
    2012,  2012, -1552,   405,  1771,   737,  2248,  1997,   526,   737,
     526,    61,  2050,  1245,   495,  1270,  1773,  1737,  1775,  2577,
    2474,  1762,   765,   766,  1218,   434,  1285,   718,   464,  1289,
     948,   472,   771,   381,   434,  1706,  1998,  1293,   948, -1096,
    1387,  2475,    62,  1828,  1803,  2743,  2744,    65,  1763, -1096,
    1764,   788,   526,  1392,   526,    67,  1393,  1349,  1568,   506,
     956,  1736,   521,   525,  2374,   947,  2012,  2012,  2643,  2745,
     525,   562,  -517,  -669,   467,   809,   801,  2373,   525,  1570,
     719,   582,   720,   213,    69,  2746,   604,  1646,   611,  1647,
     611,   619,   638,   582,  2011,  2011,   957,  1813,  2017,   204,
    1689,  1350,  1690,   596,   498,    68,  2615,  2055,  2747,   382,
     611,  1351,   526, -1590, -1552,  1447,  2616,   434,   948,   381,
     521,    71,  1814,   472,   792,  1352,   214,  1488,    72,   793,
     751,  1928,  1492,  2733, -1096,  1709,  1711,  1937,  2227,  2617,
    1135,    73,  1709,  2737,  1709,  1950,   418,   205,  2145,   707,
     792,   707,    46,   495,   707,   793,    47,   204,   398,    77,
    2011,  2011,  1732,  1571,  2115,   383,  1758,  1529,   797,  2618,
     384,  2090,  1955,  2091,   191,   449,  1819,  2228,  2229,  2230,
    2231,  2232,   198,   596,   373,   206,  2028,   207,   233,   208,
    2114,  1737,  2007,  2008,   240,   382,  1353,   209,   215,   199,
    2711,  2713,   203, -1096,  -343,   205,  -517,  2019,  2022,  1104,
    1107,  1110,  -669,  1875,  1876,   234,  -669,   792,   792,   453,
    -343,  2742,   793,   793,   236,  2173,  1584,  2174,  1473,   458,
     341,  2401,  1207,  1208,  1134,  1736,   237,   792,  2403,  2404,
    2752,  2634,   793,   206,   506,   207,   449,   208,  2598, -1096,
    2599,   383,  2754,   210,   360,   209,   384,  1219,  1209,  1210,
    -343,   368,  2157,   525,   526,  1354,   526,  2765,  1355,  1356,
    1140,  1141,  1142,  -669,   385,  1077,  2635,  1078,   499,   499,
     402,  2348,  2349,  2350,  2569,   499,  2570,   499,  -669,   787,
     453,   790, -1096,  2629,  1120,  2537,  2538,  -352, -1096,   526,
     458,  1833,   525,  2630,   385,   499,  2684,  2685,  1021,    33,
      34,   210,   403,   525,   462,  2226,  2233,  2234,  2235,  2236,
    2237,  2238,  2239,  1888,  1889,  1075,  1076,   405,  2132,  -343,
    1592,  2074,   410,  1714,   526,  1716,  1138,  1139,  1718,  1719,
    1720,  1115,  1116,   412,  1724,   415,   211,   420,   373,  1453,
     432,   434,  1455,  1733,  1734,   542,   571,   563,  1458,   619,
    1357,  -343,  1462,  1693,   668,  1311,   669,  1077,  1464,  1078,
     676,  1079,   678,   525, -1568, -1568, -1568, -1568,   525,   689,
     691,  1312,   690,   464,   698,   462,   708,   713,  2171,   729,
    -343,   727,   212,   730,   747,  2249,  2249,  -343,   750,  2121,
     754, -1552,  2351,   751,   211,  1080,  1081,  1082,  -343, -1552,
   -1552,  1956,   758,   774, -1552,    37,  2352,   759,   760,  -669,
     767,  1313,   768,  2714,  2634,   769,  1957,   770,   772,   467,
    2251,   779,   780,  1028,  1726,  2256,  1958,   839,   840,   841,
     842,   796,  2142,   782,   499,  2143,   515,   707,   783,   800,
     212,   820,  2150,   802,   464,  1083,  1757,  1084,   826,  2715,
   -1567, -1567, -1567, -1567,  1085,   814,  2177,  1086,   828,   830,
    2240,  1550,   434,   832,  2710,   843,  2629,  1029,   472,  2163,
     849,   847,   891,   213,   895,  2241,  2630,  1030,   908,  1064,
     911,   912,  2249,  1784,   914,   916, -1570,  1786,   925,   926,
     467,  2353,  2354,  2355,   927,  2166,  1570,  1174,  1175,  1176,
    1177,  2321,   928,  2203,  -343,  -343,  2356,  2220,   933,  1128,
     935,  2206,  2525,   938,  2208,   942,   214,   944,   949,  -343,
     526,  -343,   526,  2102,  2104,  2106,  2108,   622,  2178,   959,
    2179,   213,   961,   424,   971,  1820,   728,   976,   983,   472,
     987,   405,  2193,   989,  1087,   991,  1088,   994,  1314,   995,
     996,  1000,  1006,  1008,  1019,   718,  2158,  1023,  1025,  1315,
    1026,  1039,  1031,   622,  1056,  1041,  2364,  2365,  2368,  1059,
    2366,  1060,  1040,  1062,   214,  1097,  1111,  1103,  1112,  1128,
    1122,  1130,  1143,  1145,  1136,  1160,   500,  1165,   215,  1156,
    1189,  1200,  1192,  1065,  1213,   901,  1231,  2357, -1882,  1259,
     596, -1882,  1240,  2220,  1255,  -343,  2384,  1271, -1882, -1882,
    1263,  1264,  1291,  1303,  1304,  1298,  1305,  1307,  1959,  1308,
    -365,  1310,  2294,  1335,  1816,  2263,  1337,   506, -1773,  2396,
   -1773,  1032,  2270,  2271,  2272,  2273,  2310,   434,  1339,  1346,
    2276,  2364,  1363,  1371,   525,  2378,   215,  1128,  1366,  2001,
    1960,  -343,  1367,  1376,  1384, -1882,  1385,   399,   506,  1436,
    -236,  1435,  1439,  1835,  1835,  1316,  1317,  2290,  1440,  1442,
    2166,  1441,  1454,  1456,  1484,  1459,  1460,  1033,  1461,  1485,
    1318,  1463,  1319,  2716,  2021,   525,  1465,  2717,  2718,  1474,
    1476,  1516,  1489,  1570,  1480,  2023,  2024,  1518,  1523,  1524,
    1226,  1530,  1531,  2440,  1534,  1537,  1538,  1549,  1562,  1572,
    1574,  1128,  2391,  1575,  1578,  1961,  1585,  1590,  1586,  1620,
    1962,  1613,  2456,  1621, -1882,  1622,  1034,  1623,  1632,  1637,
    1638,  2719,  2440,  2468,  1636,  1643,  1656,  1653,  1658,  1664,
    1152,  1089,  1674,  1688,  1694,  2347,  2720,  2721,  1701,  1702,
    1706,  1727, -1589, -1882,  1963,  1787,  1796,  1799,  2367,  1804,
    1801,  2468,  1964,  1793,  1806,  1809,  1320,  1821,  1812,  1823,
    1837,  1840,  1845,  2372,  1965, -1882,  1847,  1863,  2068,  1864,
    1849,  2069,  2070,  1934,  1936,  1949,  1993,  1939,  1995,  1994,
    2553,  1090,  1467,  1999,  2071, -1545, -1587,  1570,   582,  2025,
    2043,  1091,  2058,  1551,  2038,  2059,  1966,  2040,  2087,  2088,
    -881,  2060,  1321,  -881,  1967,  2595, -1773,  2072,  2061,  2077,
    2081,  2083,  2563,  2111,  1852,  -233,  2136,  2041,  2117, -1882,
    2692,  2095,  2109,  2149,  2127,  2133,  1067,  2141,   379,  2160,
    2159,  2161,  2169,  2180,  2444,  2338,  2527,  2181,  2205,  2186,
    2199,  2200,  2201,   424,  2183,  1968,  2440,  2211,  1969,   525,
    2212,  2214,  2216,   525, -1882,  2221,  2223,  2278,  2257,  2283,
    2281,  2279, -1660,  2284,  2292,  2319,   525,  2311,  2328,   506,
    2322,  1253,  2362,  2331, -1882,  2327,  2293,  -881,  2468,  2438,
    2370,  2376, -1777,  2377,  2386,  2402,  2394, -1773,  2415,  2382,
    2416,  2423,  2425,  2431,  -881,  2578,  2383,  2426,  2432,  2296,
    2441,  1500,   525,  2461,  1501,  2457,  2463,  2465,  2460,  2471,
    2530,  1502,  1503,  2532,  2478,  1252,  2529,  2541,  2542,  2554,
    2557,  2559,  2015,  2643,  2487,  2522,  2730,  2689,  2555,  2682,
    2688,  2556,  2731,  2755,  2758,  2759, -1882,  2764,    14,    83,
      54,    79,  2690,    84,    76,    75,  1055,   697,  1683, -1882,
    2534,  2535,  2611,   515,   525,   525,   525,   397,  1504,   417,
    1670,  2545,  1375,  2586,  1042,  1362,  2550,  2443, -1882,  2269,
    2280,  1017,  2176,  2397,  2732,  2275,  2395,  2514,  2734,  2262,
    2753,  2217,  2459,   999,  2455,  2524,  -881,  -881,  -881,  2593,
    2326,  2751,  2735,  2757,  2548,  -881,  2549,  2562,  2612,  2613,
     429,  1778,   190,  2381,  2603,  1700,  1397,  -881,  2579,  1148,
     515,  1478,  1776,   799,   835,   525,  1499,  1190,  1182,  2202,
    1527,  1782,  1212,  2589,  1149,  2591,   892,  1505,  2042,  2592,
    1798,  1224,  1539, -1882,  1235,  1808,  2766,   918,  1815,   915,
    -881,  1576,  1631,  1262,  1167,  1601,  -881,   951,  -881,  1826,
     639,  -881,  1836,  -881,  -881,  -881,  1506,   950,   974,  -881,
    1629,  -881,   596,  2080,  2477,  1630,  -881,  2086,  2196,  1301,
    2089,  1829,  1147,  1570,  1830,  1196,  2695,  1831,  1507,  1832,
    2135,   941,  1591,  1345,   805,  1045,  2551,  2632,  2633,  1673,
    1675,   773,  2225,  2375,  2274,  2705,  2437,  2185,  2192,  1370,
    -881,  1792,  2640,  1811,  1615,  -881,  1988,  2644,  2645,  2596,
     788,   788,  1649,  2724,  2436,     0,     0,     0,     0,  -881,
       0,     0,     0,  2691,     0,     0,  2693,  2694,     0,     0,
       0,   788,  1508,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2750,  2750,     0,  -881,     0,     0,     0,
     788,     0,     0,     0,     0,     0,     0, -1777,     0,  2708,
       0,     0,     0,   498,   498,     0,     0,  1509,     0,     0,
       0,     0,     0,  2763,     0,     0,  -881,   788,     0,     0,
       0,   707,     0,     0,   498,     0,     0,  1510,     0,     0,
       0,     0,     0,     0,     0,   525,     0,     0,     0,     0,
       0,     0,     0,   498,     0,     0,     0,     0,     0,  -881,
       0,     0,   495,   495,     0,  -881,     0,     0,     0,  2287,
       0,     0,     0,  2288,  2289,     0,     0,  -881,  -881,     0,
     498,     0,     0,   495,     0,     0,     0,     0,     0,   525,
       0,   525,     0,     0,     0,     0,     0,     0,     0,  1511,
       0,     0,   495,     0,     0,     0,     0,     0,     0,     0,
       0,  -881,  1512,     0,     0,     0,     0,     0,     0,     0,
       0,  -881,     0,     0,     0,     0,     0,  -881,     0,   495,
       0,  1513,     0,   525,     0,   525,     0,     0,     0,     0,
       0,  -881,     0,     0,     0,     0,  -881,     0, -1777,     0,
       0,     0,  -881,     0,  -881,     0,     0,     0,  1254,     0,
    -881,  1873,    88,     0,    89,     0,    90,     0,     0,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,    92,
       0,  1398,  1077,  1399,  1078,     0,     0,     0,     0,     0,
       0,     0,     0,   525,     0,     0,  1514,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   582,     0,     0,     0,
       0,     0,    93,    94,     0,     0,     0,     0,     0,     0,
       0,     0,    95,   707,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    96,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   582,   582,
     582,   582,   582,    99,     0,     0,   582,   582,   582,     0,
     582,   100,     0,   101,     0,     0,     0,     0,     0,     0,
    -717,     0,  -717,  -717,  -717,  -717,  -717,  -717,  -717,  -717,
       0,  -717,  -717,  -717,     0,  -717,  -717,  -717,  -717,  -717,
    -717,  -717,  -717,  -717,   102,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   103,  2646,     0,     0,     0,
     104,     0,   582,     0,     0,     0,     0,     0,     0,     0,
       0,   582,   582,   582,   582,   525,     0,   525,     0,     0,
       0,     0,  1891,   499,   499,     0,   105,     0,     0,     0,
       0,     0,     0,   106,     0,     0,   107,   108,     0,  2647,
       0,  2648,     0,     0,   499,     0,   707,   109,     0,     0,
     525,     0,     0,     0,   110,     0,   111,     0,     0,   112,
       0,     0,     0,   499,     0,     0,     0,     0,     0,     0,
       0,     0,  2649,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   525,     0,     0,     0,     0,
     499,     0,     0,    88,  2650,    89,     0,    90,     0,     0,
       0,   113,    91,     0,     0,   114,     0,   115,     0,     0,
      92,     0,     0,     0,     0,     0,  1895,   116,     0,     0,
       0,     0,  2651,     0,  -717,  -717,  -717,     0,  -717,  -717,
    -717,  -717,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2116,    93,    94,   117,     0,     0,     0,     0,
       0,     0,     0,    95,     0,     0,     0,     0,   118,     0,
       0,     0,     0,     0,    96,     0,     0,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    98,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,     0,     0,     0,  1900,   121,     0,     0,
       0,     0,     0,     0,    99,  2652,     0,     0,     0,     0,
     122,   123,   100,     0,   101,     0,     0,   124,     0,     0,
       0,   125,  2653,     0,     0,     0,     0,     0,     0,   126,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   127,
       0,     0,     0,     0,  2654,   102,     0,   442,   128,     0,
       0,   582,     0,     0,     0,     0,   103,   129,     0,     0,
       0,   104,   130,   131,   444,  2655,   132,     0,   133,     0,
       0,     0,     0,     0,     0,     0,   134,     0,     0,     0,
       0,   525,     0,   525,  2656,     0,     0,   105,     0,  -717,
    1909,  2657,     0,     0,   106,     0,     0,   107,   108,  2191,
       0,     0,     0,     0,     0,     0,     0,   136,   109,     0,
       0,     0,     0,   137,     0,   110,     0,   111,   138,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -717,     0,
       0,     0,     0,     0,   139,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   445,   446,   447,     0,
       0,     0,   113,     0,     0,   448,   114,     0,   115,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   116,     0,
       0,     0,     0,     0,     0,  2261,  2261,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   117,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
       0,   804,     0,   454,   455,   456,     0,     0,     0,   457,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,   120,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   121,  2324,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     460,   122,   123,     0,     0,     0,     0,     0,   124,     0,
       0,     0,   125,     0,     0,    88,     0,    89,     0,    90,
     126,     0,     0,     0,    91,     0,     0,     0,     0,     0,
     127,     0,    92,     0,     0,     0,     0,     0,     0,   128,
       0,     0,     0,   707,     0,   707,   707,     0,   129,   707,
       0,     0,     0,   130,   131,     0,     0,   132,     0,   133,
       0,     0,     0,   506,     0,    93,    94,   134,     0,     0,
       0,     0,     0,     0,     0,    95,   463,     0,     0,     0,
     135,     0,     0,     0,     0,     0,    96,     0,     0,    97,
       0,     0,     0,     0,     0,     0,     0,     0,   136,     0,
       0,     0,     0,    98,   137,   707,   707,     0,     0,   138,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     707,     0,     0,  2400,  2400,     0,    99,   465,   466,     0,
       0,  2400,  2400,  2407,   100,   139,   101,     0,     0,     0,
       0,     0,     0,     0,     0,   506,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,     0,    89,
       0,    90,     0,     0,     0,     0,    91,   102,     0,     0,
       0,   468,     0,     0,    92,     0,     0,     0,   103,     0,
       0,     0,   707,   104,     0,     0,     0,     0,     0,     0,
       0,   469,     0,     0,   506,     0,   470,     0,     0,     0,
       0,   707,   471,     0,   434,     0,   707,    93,    94,   105,
       0,   707,   707,     0,     0,     0,   106,    95,     0,   107,
     108,     0,   506,     0,     0,     0,     0,     0,    96,     0,
     109,    97,     0,     0,     0,     0,     0,   110,     0,   111,
     707,     0,   112,     0,     0,    98,     0,     0,     0,  2533,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    99,     0,
       0,     0,     0,     0,     0,     0,   100,     0,   101,     0,
       0,     0,     0,     0,   113,     0,     0,     0,   114,     0,
     115,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     116,   707,     0,     0,     0,     0,     0,     0,     0,   102,
       0,     0,     0,     0,     0,     0,     0,     0,   582,     0,
     103,     0,     0,   582,     0,   104,     0,     0,   117,     0,
       0,     0,     0,     0,     0,   707,     0,     0,     0,     0,
       0,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   105,     0,     0,     0,     0,     0,     0,   106,     0,
       0,   107,   108,     0,     0,     0,     0,   707,     0,   119,
     120,     0,   109,     0,     0,     0,     0,     0,     0,   110,
     121,   111,     0,   582,   112,     0,     0,   582,     0,     0,
       0,     0,     0,   122,   123,     0,     0,     0,     0,     0,
     124,     0,     0,     0,   125,     0,     0,     0,     0,     0,
       0,     0,   126,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   127,     0,     0,     0,   113,     0,     0,     0,
     114,   128,   115,     0,     0,     0,     0,     0,     0,     0,
     129,     0,   116,     0,     0,   130,   131,     0,     0,   132,
       0,   133,     0,     0,     0,     0,     0,     0,     0,   134,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     117,   440,   982,     0,   441,     0,     0,     0,     0,     0,
     242,     0,   243,   118,     0,     0,     0,   244,     0,     0,
     136,     0,     0,     0,     0,   245,   137,     0,     0,     0,
       0,   138,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,     0,     0,     0,     0,   139,   246,   247,
       0,     0,     0,     0,     0,   122,   123,     0,   248,     0,
       0,     0,   124,     0,     0,     0,   125,     0,   442,   249,
       0,     0,   250,     0,   126,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   127,   444,   251,     0,     0,     0,
       0,     0,     0,   128,     0,     0,     0,     0,   643,     0,
       0,     0,   129,     0,     0,     0,     0,   130,   131,   252,
       0,   132,     0,   133,     0,     0,     0,   253,     0,   254,
       0,   134,     0,     0,     0,     0,   255,     0,   256,   257,
     258,   259,   260,   261,   262,   263,     0,   264,   265,   266,
       0,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,     0,   136,     0,     0,     0,     0,     0,   137,     0,
       0,   277,     0,   138,     0,     0,   278,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   445,   446,   447,
       0,     0,     0,     0,     0,     0,   448,     0,     0,   139,
       0,     0,   279,     0,     0,     0,     0,     0,   449,   280,
       0,     0,   281,   282,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   283,   973,     0,     0,     0,     0,     0,
     284,     0,   285,     0,     0,   286,     0,     0,     0,     0,
       0,   450,     0,     0,     0,     0,     0,   451,     0,   452,
       0,     0,   453,     0,   454,   455,   456,     0,     0,     0,
     457,     0,   458,     0,     0,     0,     0,   459,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   287,     0,     0,
       0,   288,     0,   289,     0,     0,     0,     0,     0,   440,
       0,     0,   441,   290,     0,   857,   858,   859,     0,     0,
       0,   460,     0,   860,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     461,   291,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   292,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   462,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   293,     0,     0,     0,   442,     0,     0,     0,
       0,     0,     0,   294,     0,     0,     0,   463,     0,     0,
       0,     0,     0,   444,     0,     0,     0,   295,     0,     0,
       0,     0,     0,   296,     0,     0,     0,   297,     0,     0,
       0,     0,     0,     0,     0,   298,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   299,   464,     0,     0,     0,
       0,     0,     0,     0,   300,     0,     0,     0,   465,   466,
       0,     0,     0,   301,     0,     0,     0,     0,   302,   303,
       0,     0,   304,   861,   305,     0,     0,     0,     0,     0,
       0,     0,   306,   862,     0,     0,     0,     0,     0,     0,
       0,     0,   467,     0,     0,   307,     0,     0,     0,     0,
       0,     0,   468,     0,     0,   445,   446,   447,     0,     0,
       0,     0,     0,   308,   448,     0,     0,     0,     0,   309,
     863,   864,   469,     0,   310,     0,   449,   470,     0,     0,
       0,     0,     0,   471,     0,   434,     0,     0,     0,     0,
       0,   472,     0,     0,     0,     0,  1195,     0,     0,     0,
     311,     0,     0,     0,     0,     0,     0,     0,     0,   450,
     865,   866,     0,     0,     0,   451,     0,   452,     0,     0,
     453,     0,   454,   455,   456,     0,     0,     0,   457,     0,
     458,     0,     0,     0,     0,   459,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   867,   440,
       0,     0,   441,     0,   868,   857,   858,   859,     0,   869,
       0,     0,     0,   860,     0,     0,     0,   870,     0,   460,
       0,     0,     0,     0,   871,     0,     0,     0,     0,   872,
       0,     0,     0,     0,     0,     0,     0,     0,   461,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   873,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   462,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   442,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   444,     0,   463,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   464,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   465,   466,     0,     0,
       0,     0,     0,   861,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   862,     0,     0,     0,     0,   874,     0,
     875,     0,   876,     0,     0,   877,     0,   878,   879,   880,
     467,     0,   881,   882,     0,   445,   446,   447,     0,     0,
     468,     0,     0,     0,   448,     0,     0,     0,     0,     0,
     863,   864,     0,     0,     0,     0,   449,     0,     0,     0,
     469,     0,     0,     0,     0,   470,     0,     0,     0,     0,
       0,   471,     0,   434,     0,     0,     0,     0,     0,   472,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   450,
     865,   866,     0,     0,     0,   451,     0,   452,     0,     0,
     453,     0,   454,   455,   456,     0,     0,     0,   457,     0,
     458,     0,     0,     0,     0,   459,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   867,     0,
       0,     0,     0,     0,   868,     0,     0,   440,     0,   869,
     441,     0,     0,     0,     0,     0,     0,   870,     0,   460,
       0,     0,     0,     0,   871,     0,     0,     0,     0,   872,
       0,  -942,     0,     0,     0,     0,  -942,     0,   461,  -942,
       0,     0,     0,     0,     0,     0,  -942,  -942,   873,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   462,  -942,     0,  -942,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   442,     0,     0,     0,     0,     0,
       0,     0,     0,  -942,     0,   463,     0,     0,     0,     0,
       0,   444,     0,     0,   440,     0,     0,   441,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   464,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   465,   466,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -942,     0,     0,     0,     0,     0,   874,     0,
     875,     0,   876,     0,     0,   877,     0,   878,   879,   880,
     467,   442,   881,   882,     0,     0,     0,     0,     0,     0,
     468,  -942,     0,   445,   446,   447,     0,     0,   444,     0,
       0,     0,   448,     0,     0,     0,   440,     0,     0,   441,
     469,     0,     0,  -942,   449,   470,     0,     0,     0,     0,
       0,   471,     0,   434,     0,     0,     0,     0,     0,   472,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   450,     0,     0,
       0,  1267,     0,   451,  -942,   452,     0,     0,   453,     0,
     454,   455,   456,     0,     0,     0,   457,  -942,   458,     0,
       0,     0,     0,   459,  -942,     0,     0,     0,     0,     0,
       0,     0,     0,   442,     0,     0,     0,     0,     0,     0,
     445,   446,   447,     0,     0,   443,     0,     0,     0,   448,
     444,     0,  -942,     0,     0,     0,     0,   460,     0,     0,
       0,   449,     0,   440,     0,     0,   441,     0,     0,     0,
       0,     0,  -942,     0,     0,     0,   461,     0,     0,     0,
       0,     0,     0,     0,     0,  -942,     0,     0,     0,     0,
       0,     0,     0,     0,   450,     0,     0,     0,     0,     0,
     451,     0,   452,   462,     0,   453,     0,   454,   455,   456,
       0,     0,     0,   457,     0,   458,     0,     0,     0,     0,
     459,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   463,  -942,     0,     0,     0,     0,     0,
     442,     0,   445,   446,   447,     0,     0,  -942,     0,     0,
       0,   448,     0,     0,   460,     0,     0,   444,     0,     0,
       0,     0,     0,   449,     0,     0,  -942,     0,     0,     0,
       0,     0,   464,   461,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   465,   466,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   450,     0,     0,     0,
     462,     0,   451,     0,   452,     0,     0,   453,     0,   454,
     455,   456,     0,     0,     0,   457,   440,   458,   467,   441,
       0,     0,   459,     0,     0,     0,     0,     0,   468,     0,
     463,  -942,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -942,     0,     0,     0,     0,     0,   469,   445,
     446,   447,     0,   470,     0,     0,   460,     0,   448,   471,
    -942,   434,     0,     0,     0,     0,     0,   472,     0,   464,
     449,     0,     0,     0,     0,   461,     0,     0,     0,     0,
       0,   465,   466,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   442,     0,     0,     0,     0,     0,     0,
       0,     0,   462,   450,     0,   583,     0,     0,  1268,   451,
     444,   452,     0,     0,   530,   467,   454,   455,   456,  1269,
       0,     0,   457,     0,   458,   468,     0,     0,     0,   459,
       0,     0,   463,     0,     0,   440,     0,     0,   441,     0,
       0,     0,     0,     0,     0,   469,     0,     0,     0,     0,
     470,   440,     0,     0,   441,     0,   471,     0,   434,     0,
       0,     0,     0,   460,   472,     0,     0,     0,   531,     0,
       0,   464,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   461,   465,   466,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   445,   446,   447,     0,     0,     0,     0,   462,
       0,   448,   442,     0,     0,     0,     0,   467,     0,     0,
       0,     0,     0,   449,     0,     0,     0,   468,   442,   444,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   463,
     648,     0,   643,     0,     0,   444,     0,   469,     0,     0,
       0,     0,   470,     0,     0,     0,   450,     0,   471,     0,
     434,     0,   451,     0,   452,     0,   472,   453,     0,   454,
     455,   456,     0,     0,     0,   457,     0,   458,   464,     0,
       0,     0,   459,     0,     0,     0,     0,     0,     0,     0,
     465,   466,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   460,     0,     0,     0,
       0,   445,   446,   447,   467,     0,     0,     0,     0,     0,
     448,     0,     0,     0,   468,   461,     0,   445,   446,   447,
       0,     0,   449,     0,   440,     0,   448,   441,     0,     0,
       0,     0,     0,     0,   469,     0,     0,     0,   449,   470,
       0,     0,   462,     0,     0,   471,     0,   434,     0,     0,
       0,     0,     0,   472,     0,   450,     0,     0,     0,     0,
       0,   451,     0,   452,     0,     0,   453,     0,   454,   455,
     456,   450,   463,     0,   457,     0,   458,   451,     0,   452,
       0,   459,   453,     0,   454,   455,   456,     0,     0,     0,
     457,     0,   458,     0,     0,     0,     0,   459,     0,     0,
       0,   442,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   464,     0,     0,     0,   460,     0,     0,   444,     0,
       0,     0,     0,   465,   466,     0,     0,     0,     0,     0,
       0,   460,     0,     0,   461,     0,     0,     0,     0,     0,
       0,     0,     0,   440,     0,     0,   441,     0,     0,     0,
     461,     0,     0,     0,     0,     0,     0,   467,     0,   440,
       0,   462,   441,     0,     0,     0,     0,   468,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   462,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   469,     0,     0,
       0,   463,   470,     0,     0,     0,     0,     0,   471,     0,
     434,     0,     0,     0,     0,     0,   472,   463,     0,     0,
     445,   446,   447,     0,     0,     0,     0,     0,     0,   448,
     442,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     464,   449,     0,     0,     0,     0,   442,   444,     0,     0,
       0,     0,   465,   466,     0,     0,   464,     0,     0,     0,
       0,     0,     0,   444,     0,     0,     0,     0,   465,   466,
       0,     0,     0,     0,   450,     0,     0,     0,     0,     0,
     451,     0,   452,     0,     0,   453,   467,   454,   455,   456,
       0,     0,     0,   457,     0,   458,   468,     0,     0,     0,
     459,     0,   467,     0,     0,     0,   440,     0,     0,   441,
       0,     0,   468,     0,     0,     0,   469,     0,     0,     0,
       0,   470,     0,     0,     0,     0,     0,   471,     0,   434,
       0,     0,   469,     0,   460,   472,     0,   470,     0,   445,
     446,   447,     0,   471,     0,   434,     0,     0,   448,     0,
       0,   472,     0,   461,     0,   445,   446,   447,     0,   978,
     449,     0,     0,     0,   448,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   449,     0,     0,     0,
     462,     0,     0,   442,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   450,     0,     0,     0,     0,     0,   451,
     444,   452,     0,     0,   453,     0,   454,   455,   456,   450,
     463,     0,   457,     0,   458,   451,     0,   452,     0,   459,
     453,     0,   454,   455,   456,     0,     0,     0,   457,     0,
     458,     0,     0,     0,     0,   459,     0,     0,     0,     0,
       0,   440,     0,     0,   441,     0,     0,     0,     0,   464,
       0,     0,     0,   460,     0,     0,     0,     0,   531,     0,
       0,   465,   466,     0,     0,     0,     0,     0,     0,   460,
       0,     0,   461,     0,     0,     0,     0,     0,     0,     0,
       0,   776,     0,     0,     0,     0,     0,     0,   461,     0,
       0,     0,   445,   446,   447,   467,     0,     0,     0,   462,
       0,   448,     0,     0,     0,   468,     0,     0,     0,     0,
       0,     0,     0,   449,     0,   462,     0,     0,   442,     0,
       0,     0,     0,     0,     0,   469,     0,     0,     0,   463,
     470,     0,     0,     0,     0,   444,   471,     0,   434,     0,
    1125,     0,     0,   441,   472,   463,   450,     0,     0,     0,
       0,     0,   451,     0,   452,     0,     0,   453,     0,   454,
     455,   456,     0,     0,     0,   457,     0,   458,   464,     0,
       0,     0,   459,     0,     0,     0,     0,     0,     0,     0,
     465,   466,     0,     0,   464,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   465,   466,     0,     0,
       0,     0,     0,     0,     0,     0,   460,     0,     0,     0,
       0,     0,     0,     0,   467,     0,     0,   442,     0,     0,
       0,     0,     0,     0,   468,   461,     0,   445,   446,   447,
     467,     0,     0,     0,   444,     0,   448,     0,     0,     0,
     468,     0,     0,     0,   469,     0,     0,     0,   449,   470,
       0,     0,   462,     0,     0,   471,     0,   434,     0,     0,
     469,     0,     0,   472,     0,   470,     0,     0,     0,     0,
       0,   471,     0,   434,     0,     0,     0,     0,     0,   472,
       0,   450,   463,     0,     0,     0,     0,   451,     0,   452,
       0,     0,   453,     0,   454,   455,   456,     0,     0,     0,
     457,     0,   458,     0,     0,     0,     0,   459,     0,     0,
       0,     0,     0,     0,     0,  1288,     0,     0,     0,     0,
       0,   464,     0,     0,     0,     0,   445,   446,   447,     0,
       0,     0,     0,   465,   466,   448,     0,     0,     0,     0,
       0,   460,     0,     0,     0,     0,     0,   449,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     461,     0,     0,     0,     0,     0,     0,   467,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   468,     0,     0,
     450,     0,     0,     0,     0,     0,   451,   462,   452,     0,
       0,   453,     0,   454,   455,   456,     0,   469,     0,   457,
       0,   458,   470,     0,     0,     0,   459,     0,   471,     0,
     434,     0,     0,     0,     0,     0,   472,   463,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     460,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   464,     0,     0,   461,
       0,     0,     0,     0,     0,     0,     0,     0,   465,   466,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2379,     0,     0,   462,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   467,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   468,     0,  -362,     0,   463,  -362,     0,     0,
    -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,     0,
       0,     0,   469,     0,     0,     0,     0,   470,     0,     0,
       0,     0,     0,   471,     0,   434,     0,  -362,     0,  -362,
       0,   472,     0,     0,     0,   464,  -362,     0,  -362,  -362,
    -362,  -362,  -362,  -362,  -362,     0,     0,   465,   466,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   467,  -362,     0,     0,     0,     0,     0,     0,     0,
       0,   468,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   469,     0,     0,     0,     0,   470,     0,     0,     0,
       0,     0,   471,  -362,   434,     0,     0,     0,     0,     0,
     472,     0,     0,     0,     0,     0,     0,     0,  1002,     0,
       0,  -362,  -362,  -362,  -362,  -362,     0,     0,  -362,  -362,
       0,     0,  -362,     0,     0,     0,     0,     0,  -362,     0,
    -362,     0,     0,     0,     0,     0,  -362,     0,     0,     0,
       0,  -362,     0,     0,  -362,     0,     0,     0,     0,     0,
       0,     0,  -362,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -362,     0,     0,  -362,     0,
       0,     0,     0,     0,  -362,     0,  -362,     0,     0,     0,
       0,     0,     0,     0,     0,  -362,     0,     0,     0,     0,
       0,  1001,     0,     0,     0,     0,     0,     0,  -362,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -362,  -362,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   441,     0,     0,     0,     0,  -362,     0,     0,  -362,
    -362,  -362,  -362,  -362,  -362,  -362,     0,     0,     0,     0,
    -362,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -362,  -362,     0,     0,     0,     0,     0,
       0,     0,  -362,     0,  -362,  -362,  -362,  -362,  -362,  -362,
    -362,  -362,  -362,     0,     0,     0,     0,     0,     0,     0,
    -362,     0,  -362,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   442,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -362,     0,
    -362,     0,   444,     0,     0,  -362,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -362,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -362,     0,  -362,  -362,  -362,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -362,     0,     0,     0,  1002,     0,     0,  -362,
    -362,  -362,  -362,  -362,     0,     0,  -362,  -362,     0,     0,
       0,     0,     0,     0,     0,  -362,     0,     0,     0,     0,
    -362,     0,     0,     0,  -362,  -362,     0,     0,     0,     0,
       0,     0,     0,     0,   445,   446,   447,  -362,     0,     0,
    -362,     0,  -362,   448,     0,     0,  -362,  -362,  -362,     0,
       0,     0,     0,  -362,     0,   449,  -362,     0,     0,     0,
    -362,     0,  -362,     0,     0,  -362,  -362,     0,     0,     0,
       0,     0,  1003,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -362,   453,
       0,   454,   455,   456,     0,     0,     0,   457,     0,   458,
     442,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   444,  -362,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -362,     0,     0,     0,     0,     0,   460,     0,
    -362,     0,     0,  -362,     0,  1865,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -362,     0,
    1866,     0,     0,  1867,  1868,  1869,  1870,  1871,  1872,  1873,
       0,  -362,     0,     0,     0,     0,     0,     0,     0,  -362,
       0,     0,     0,     0,   462,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1874,     0,
    1875,  1876,  1877,  1878,  1879,  1880,  1881,     0,     0,   445,
     446,   447,     0,     0,   463,     0,     0,     0,   448,     0,
    -362,     0,  -362,  -362,  -362,     0,     0,     0,     0,     0,
     449,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1882,     0,     0,     0,     0,  -362,
       0,     0,     0,   464,  1065,     0, -1882,     0,     0, -1882,
       0,     0, -1882,     0,     0,   465,   466,     0,  -362,     0,
   -1882,     0,     0,     0,   453,     0,   454,   455,   456,     0,
       0,     0,   457,     0,   458,  -362,     0,     0,     0, -1773,
       0, -1773,     0,     0,  -362,  -362,  -362,     0,     0,   467,
       0,     0,     0,  1883,  1884,  1885,  1886,  1887,  -362,   468,
    1888,  1889,     0,     0,  -362,     0, -1882,     0,     0,     0,
    1003,     0,     0,   460,     0,     0,     0,     0,     0,   469,
       0,     0,     0,     0,   470, -1882,     0,     0,     0,     0,
     471,     0,   434,     0,  1890,     0,     0,     0,   472,     0,
       0,     0,     0,     0,     0,     0,     0,   405,     0,     0,
    1891,     0,     0,     0,     0,     0, -1858,     0,     0,   462,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   463,
       0,     0,  1892,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0, -1882,     0,     0,     0,     0,     0,
       0,  1066, -1882,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1893,     0,     0,     0, -1882,     0,   464,     0,
       0,     0,     0,     0,     0,     0,  1894,     0,     0,     0,
     465,   466,     0,     0,  1895,     0,     0,  1896,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0, -1882,     0,
       0,     0,  1897,     0,     0,     0,     0, -1773,     0,     0,
       0,     0,     0,     0,   467,  1898,     0,     0, -1882,     0,
   -1882,     0,     0,  1899,   468,     0,     0,  1067,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0, -1882, -1882,   469,     0,     0,     0,     0,   470,
       0,     0,     0,     0,     0,   471,     0,   434,     0,     0,
       0,     0,     0,   472,  1900,     0,  1901,  1902,  1903,     0,
       0,     0,     0,     0,     0, -1882,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0, -1773,     0,
       0,     0,     0,  1904,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0, -1882, -1882,     0,     0,     0,     0,
       0,     0,  -359,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0, -1858,
   -1882,     0,     0,     0,     0,     0,     0, -1882,  1905,  1906,
    1907,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   -1882,     0,  1908,  2489, -1882,     0,  2490,     0,  1909,  2491,
    1867,  1868,  1869,  1870,  1871,  1872,  2492,  2493,  1405, -1882,
       0,  1406,     0,     0,  1407,     0,     0,     0,     0,     0,
       0,     0,  1408,     0,     0,     0,  1398,     0,  1399,     0,
       0,     0,     0,     0,     0,  1874, -1882,  1875,  1876,  1877,
    1878,  1879,  1880,  1881,     0, -1882,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1409,     0,
       0,     0,     0,     0, -1882,  1867,  1868,  1869,  1870,  1871,
    1872,  1882,     0,     0, -1882,     0,     0,  1410,     0,     0,
   -1882,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   596,     0,     0,     0,     0,     0,     0,
    1874,     0,  1875,  1876,  1877,  1878,  1879,  1880,  1881,     0,
       0,     0,  2494,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1883,  1884,  1885,  1886,  1887,     0,     0,  1888,  1889,     0,
       0,  2495,     0,     0,     0,     0,  1882,  2496,     0,  2497,
       0,     0,     0,     0,     0, -1808,  1411,     0,     0,     0,
    2498,     0,     0,  2499,  1412,     0,     0,     0,     0,     0,
       0,  1890,     0,     0,     0,     0,     0,     0,  1413,     0,
       0,     0,     0,     0,   405,     0,     0,  1891,     0,     0,
       0,     0,     0,     0,     0,  2500,     0,     0,     0,     0,
       0,     0,     0,     0,  2501,  1883,  1884,  1885,  1886,  1887,
    1414,     0,  1888,  1889,     0,     0,     0,  2502,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1892,
    1415,     0,  1416,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1890,     0,     0,     0,
       0,     0,     0,     0,  1417,  1418,     0,     0,     0,  2503,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2504,  1894,     0,     0,     0,     0,     0,     0,
       0,  1895,     0,     0,  1896,     0,     0,  1419,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1897,
       0,  2505,   442,     0,  1892,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1420,  1421,     0,   444,
       0,     0,     0,     0,     0,     0,     0,  2506,     0,     0,
       0,     0,     0,     0,  2507,     0,     0,     0,     0,     0,
       0,     0,  1422,     0,     0,     0,     0,     0,  1894,  1423,
       0,  2508,     0,     0,     0,     0,     0,     0,     0,  1896,
       0,  1900,  1424,  1901,  1902,  1903,  1425,     0,     0,     0,
       0,     0,   442,     0,  1897,     0,     0,     0,     0,     0,
       0,  1426,     0,     0,     0,     0,     0,     0,   442,   444,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2509,   444,     0,     0,  1427,  -614,
       0,   445,   446,   447,  2510,     0,     0,  1428,     0,     0,
     448,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2511,   449,     0,     0,  1905,  1906,  1907,  1901,  1902,
    1903,     0,     0,     0,     0,     0,  1429,     0,     0,  1908,
       0,     0,     0,     0,  2512,  1909,  1430,     0,     0,     0,
       0,     0,  1431,     0,     0,   485,     0,     0,     0,     0,
       0,   451,     0,   452,     0,     0,   453,     0,   454,   455,
     456,   445,   446,   447,   457,     0,   458,     0,     0,     0,
     448,     0,     0,     0,     0,     0,     0,   445,   446,   447,
       0,     0,   449,     0,     0,     0,   448,     0,     0,     0,
    1905,  1906,  1907,     0,     0,     0,     0,     0,   449,     0,
       0,     0,     0,     0,     0,   460,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   485,     0,     0,     0,     0,
       0,   451,     0,   452,   461,     0,   453,     0,   454,   455,
     456,   485,     0,     0,   457,     0,   458,   451,     0,   452,
       0,     0,   453,     0,   454,   455,   456,     0,     0,     0,
     457,   462,   458,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   460,     0,     0,     0,     0,
       0,   463,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   460,     0,     0,   461,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     461,     0,   442,     0,     0,     0,     0,     0,     0,     0,
     464,   462,     0,     0,     0,     0,     0,     0,     0,   444,
       0,     0,   465,   466,     0,     0,     0,   462,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   463,     0,     0,  1109,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   486,     0,   467,   463,   487,   488,
       0,     0,     0,     0,     0,     0,   468,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     464,     0,     0,     0,     0,     0,   469,     0,     0,     0,
       0,   470,   465,   466,     0,     0,   464,   471,     0,   434,
       0,   442,     0,     0,     0,   472,     0,     0,   465,   466,
       0,   445,   446,   447,  1710,     0,  1713,     0,   444,     0,
     448,     0,     0,     0,   486,     0,   467,     0,   487,   488,
       0,     0,   449,     0,     0,     0,   468,     0,     0,     0,
     486,     0,   467,   442,   487,   488,     0,     0,     0,     0,
       0,     0,   468,     0,     0,     0,   469,     0,     0,     0,
     444,   470,     0,     0,     0,   485,     0,   471,     0,   434,
       0,   451,   469,   452,     0,   472,   453,   470,   454,   455,
     456,     0,     0,   471,   457,   434,   458,     0,     0,     0,
       0,   472,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     445,   446,   447,     0,     0,     0,     0,     0,     0,   448,
       0,     0,     0,     0,     0,   460,     0,     0,     0,     0,
       0,   449,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   461,     0,     0,     0,     0,     0,
       0,     0,   445,   446,   447,     0,     0,     0,     0,     0,
       0,   448,     0,     0,   485,     0,     0,     0,     0,     0,
     451,   462,   452,   449,     0,   453,     0,   454,   455,   456,
       0,     0,     0,   457,     0,   458,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   463,     0,     0,     0,     0,   485,     0,     0,     0,
       0,     0,   451,     0,   452,     0,     0,   453,     0,   454,
     455,   456,     0,     0,   460,   457,     0,   458,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     464,     0,     0,   461,     0,     0,     0,     0,     0,     0,
       0,     0,   465,   466,     0,     0,     0,     0,     0,     0,
    1715,     0,     0,     0,     0,     0,   460,     0,     0,     0,
     462,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   486,   461,   467,   442,   487,   488,
       0,     0,     0,     0,     0,     0,   468,     0,     0,     0,
     463,     0,     0,   442,   444,     0,     0,     0,     0,     0,
       0,     0,   462,     0,     0,     0,   469,     0,     0,     0,
     444,   470,     0,     0,     0,     0,     0,   471,     0,   434,
       0,     0,     0,     0,     0,   472,     0,     0,     0,   464,
       0,     0,   463,     0,     0,     0,     0,     0,     0,     0,
       0,   465,   466,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1731,     0,     0,     0,     0,     0,     0,
       0,   464,     0,   486,     0,   467,     0,   487,   488,   442,
       0,     0,     0,   465,   466,   468,   445,   446,   447,     0,
       0,     0,     0,     0,     0,   448,   444,     0,     0,     0,
       0,     0,   445,   446,   447,   469,     0,   449,     0,     0,
     470,   448,     0,     0,     0,   486,   471,   467,   434,   487,
     488,     0,     0,   449,   472,     0,     0,   468,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     485,     0,     0,     0,     0,     0,   451,   469,   452,     0,
       0,   453,   470,   454,   455,   456,   485,     0,   471,   457,
     434,   458,   451,   442,   452,     0,   472,   453,     0,   454,
     455,   456,     0,     0,     0,   457,     0,   458,     0,     0,
     444,     0,     0,     0,     0,     0,     0,     0,   445,   446,
     447,     0,     0,     0,     0,     0,     0,   448,   442,     0,
     460,     0,     0,     0,     0,     0,     0,     0,     0,   449,
       0,     0,     0,     0,     0,   444,   460,     0,     0,   461,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   461,     0,     0,     0,     0,
       0,     0,   485,     0,     0,     0,   462,     0,   451,     0,
     452,     0,     0,   453,     0,   454,   455,   456,     0,     0,
       0,   457,   462,   458,     0,     0,     0,     0,     0,     0,
       0,   594,   445,   446,   447,     0,   463,     0,     0,     0,
       0,   448,     0,     0,     0,     0,     0,     0,  2740,     0,
       0,     0,   463,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   460,     0,     0,     0,   594,   445,   446,   447,
       0,     0,     0,     0,     0,   464,   448,     0,     0,     0,
       0,   461,     0,     0,     0,     0,     0,   465,   466,     0,
       0,   464,     0,     0,     0,     0,     0,   595,     0,   454,
     455,   456,     0,   465,   466,   457,     0,     0,   462,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   467,     0,   487,     0,     0,     0,     0,     0,     0,
       0,   468,   804,     0,   454,   455,   456,   467,   463,     0,
     457,     0,     0,     0,     0,     0,   460,   468,     0,     0,
       0,   469,     0,     0,     0,     0,   470,     0,     0,     0,
       0,     0,   471,     0,   434,     0,     0,   469,     0,     0,
     472,     0,   470,     0,     0,     0,     0,   464,   471,     0,
     434,   460,     0,     0,     0,     0,   472,     0,     0,   465,
     466,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   463,   467,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   468,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   469,     0,     0,     0,   463,   470,     0,
       0,     0,     0,     0,   471,     0,   434,     0,     0,     0,
       0,     0,   472,   465,   466,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0, -1882,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   465,   466,
       0,     0,     0,     0,     0,     0,     0,   468,     0,     0,
       0, -1882,     0,     0,     0,     0,     0,     0, -1149,     0,
       0,     0,     0,     0,     0,     0,     0,   469,     0,     0,
       0,     0,   470,     0,     0, -1149,     0,     0,   471,   596,
     434,     0,   468,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0, -1149,     0,     0,     0,     0,     0,     0,
       0,     0,   469,     0,     0,     0,     0,   470,     0,     0,
   -1149,     0,     0,   471,   596,   434
};

static const yytype_int16 yycheck[] =
{
     209,   210,   441,   322,   213,   518,   362,   923,   643,  1197,
     406,   414,   408,   197,    39,   411,   450,  1647,   205,   325,
     529,  1452,  1401,  1235,   211,  1404,   235,  1707,  1338,   633,
    1257,  1672,   337,  1909,  1302,   861,   772,    17,   852,     1,
     349,   327,   525,   642,   316,     0,   782,     1,     1,   335,
     620,   485,   313,   335,   315,     1,  1283,   318,   525,     9,
       1,   322,    58,   349,     9,    22,     9,   349,     0,     9,
       9,    56,    88,  1963,  1964,     6,   337,    58,   115,  1548,
      58,   125,   343,     9,    87,    49,  1633,    31,    17,   111,
    1948,    97,    98,  2320,  1155,   124,   153,  1316,   124,    71,
      71,   111,     9,   364,   613,   366,  1076,   315,   177,    31,
     176,   130,   320,    64,  1084,   582,    93,  1282,  1179,   327,
     320,    27,   175,   226,    50,   723,   838,   335,   166,   142,
       9,  2313,   130,    58,  1962,   319,    49,   321,    73,   126,
    1386,   349,   838,    97,   203,   203,   750,    33,  1695,  1696,
    1697,  1698,  1699,     0,    21,   638,   315,   242,  1705,   233,
     344,   214,   346,   203,   238,    48,  2204,   351,   177,   776,
     242,   638,  1233,   173,   383,    88,  1537,   233,   233,    58,
     203,   365,   443,   272,   139,  2438,   395,  1618,   143,  1956,
     189,  2454,   401,   402,   513,   404,   108,   363,     6,   200,
     409,   410,   245,    49,    26,   414,   203,   139,  2062,   322,
     116,   143,  1759,   360,   215,   245,   572,   219,  2290,   125,
     257,  1768,    71,   307,  1771,   486,   487,   488,   219,   501,
     233,  1292,   162,    27,   399,     6,    65,   172,    67,   846,
     235,   411,   450,   415,   460,   200,   359,   416,    71,     6,
     511,   245,   513,   199,   461,  2145,   201,   291,   172,   338,
     215,  1622,   172,   411,   460,     0,   272,   465,   200,   752,
     213,   350,   470,   559,    22,   471,   233,   485,   486,   487,
     488,   315,   168,   215,   570,    21,  2210,   213,   345,   692,
     204,   507,   387,   458,   204,   651,   465,   397,   229,   178,
    2372,   470,   171,   510,   315,   188,   160,   914,   704,  2562,
     304,   483,   520,   483,   257,   317,   463,   257,   309,   245,
     246,   755,   116,   320,   267,  1794,  1795,   486,   487,   488,
     900,   257,   516,   339,   275,   483,   420,   598,   504,   822,
     779,   267,  2196,   527,   630,   346,   154,   363,   630,   635,
    1991,   559,    71,    71,   989,   953,  2394,   226,   381,   620,
     290,   292,   570,   242,   453,   234,   353,  1635,   215,   368,
     257,   978,   415,   428,   196,  1189,  2639,  1203,  1192,   813,
     311,   288,   268,   229,    71,   415,  1212,   648,    71,   160,
     475,   346,  2316,  2160,   371,  2223,   454,   397,  2256,   363,
     503,  2583,   458,   475,  1631,   213,   312,   402,    34,   352,
     469,  1472,   620,   983,   346,    49,   257,   517,    49,   176,
     407,   534,   630,   932,   253,   360,   352,   635,   426,   469,
     468,   403,   403,   241,   359,  1796,   510,  1602,   448,   458,
    1686,   510,   213,   453,   510,   458,  1665,   315,   355,   257,
     363,   320,   393,   510,  1666,   406,   213,   510,  1170,   267,
     489,  2008,  2689,   489,   272,   509,   443,  1437,   490,   337,
     570,   421,   453,   510,  1170,   343,   487,   960,   421,   509,
       6,   690,     6,   455,   455,   233,   257,   465,   504,   698,
     751,   510,   470,   702,   681,   421,   267,   758,   759,   760,
     257,   510,   505,   458,   510,   334,   767,   768,   769,   770,
     267,   772,   458,  1083,  1849,   511,   725,   458,   503,   780,
     449,   782,   783,  1130,   467,   469,   458,   507,   463,   738,
     257,   792,   793,   794,   795,   796,   467,  2395,     9,   726,
     504,   467,   642,   751,   352,   851,  1181,   469,   510,  1148,
     758,   759,   760,   510,   403,   510,   510,   510,   819,   767,
     768,   769,   770,  1167,   772,   510,   516,   510,   776,  2459,
     510,   510,   780,   516,   782,   783,   776,   980,   510,  2048,
     403,   352,   450,   319,   792,   793,   794,   795,   796,   472,
     516,   504,   751,   460,  1862,   352,   475,   509,   510,   758,
     759,   760,   697,   509,   471,   459,   455,   257,   767,   768,
     769,   819,  1125,   421,  1949,  1018,  2540,   485,   486,   487,
     488,   780,   894,   510,   783,   911,   509,   123,   933,   911,
      32,   311,   455,   792,   793,   794,   795,   796,   846,   900,
     824,   510,  2283,   511,    39,  1128,   846,   908,   126,   749,
     421,  1712,  1222,   925,   253,  1058,   282,   283,   284,   467,
     819,  1128,   253,   924,   421,   311,   952,  1101,   160,   510,
    1586,  2454,   933,   271,  1272,  1273,  1274,  1275,  1276,  1277,
    1278,  1279,   323,   944,   403,   403,  2454,   213,   459,   213,
     253,   332,   900,  1263,   311,    30,   467,   154,   339,   340,
     908,   257,   510,   911,   257,  2553,   914,   807,   516,  1523,
     467,  1772,   973,  1774,   914,     9,   403,   358,   257,   114,
     403,   162,   983,   349,   460,   257,  1462,   331,   257,   363,
     598,   257,   363,   257,   332,   471,   455,   455,   838,   510,
     751,   267,   213,   267,   952,   516,  1807,   381,  2083,   908,
     381,   263,   509,   510,   257,   964,   767,   768,   769,   516,
      32,   333,   203,   257,    58,    30,   272,   458,   455,   780,
     978,   218,   455,   108,   126,   983,   288,   423,   978,   257,
    1841,  1842,   465,   510,   263,   458,   257,   470,   200,   516,
     258,   217,   218,   128,  2454,   394,   267,  2454,  1007,   291,
      65,   123,    67,   394,   296,    57,  2454,    57,   819,   288,
    2686,   237,    64,   352,    64,    38,   916,   263,   453,   510,
     172,     6,  1083,    46,   458,   103,   352,   458,   352,  2705,
     510,   394,   167,  1267,   475,  2062,  1097,   263,   275,   111,
     940,  2053,  1103,   238,   213,   207,   208,   473,   474,   290,
    1059,  2481,   478,   392,   189,   257,  2639,  1143,  1067,  2539,
     510,  2709,   288,  1050,  1051,   243,   966,   465,   503,   204,
     504,  2639,   470,   504,  1146,  1083,    12,  2212,  2421,    15,
      16,   352,   421,   751,  1519,   247,   248,   217,   257,  1097,
     758,   759,   760,   510,  2204,   421,   537,   421,   267,   767,
     768,   769,   770,    62,   772,   509,  2449,   237,  2538,  1516,
     551,  1518,   780,     6,   782,   783,   507,    85,  1126,   213,
    2600,   427,  1130,   429,   792,   793,   794,   795,   796,   453,
    1130,    90,    91,   263,   346,  1143,   333,   509,  1097,  1039,
     381,   467,   583,   467,   390,  1231,  1232,  1156,   242,  1231,
     421,   819,  2632,  2633,   510,  1562,   393,   510,   288,   458,
    2640,  1222,  1223,   257,  2644,  2645,  1792,   459,  1538,  1069,
     417,  1179,   440,   267,   311,   275,  2188,   516,   510,  2639,
    1383,   510,  2639,   352,   510,   257,   510,  1470,   253,   212,
     516,  2639,   516,  2673,  1255,   286,   467,   509,  2545,    11,
     257,   257,  1263,  2550,   645,   158,   458,   510,   273,   650,
     345,   389,   407,  1620,  1222,  1223,   510,   269,  2648,   269,
    2130,   244,  2702,  1231,  1232,  1233,  2210,   196,   213,  1633,
    1291,   124,  1466,   501,   199,   257,   257,  1298,  1299,  2618,
     908,   107,   510,   266,   357,   516,   337,    59,  2678,     1,
     130,   117,   421,  1237,   458,  1263,  1626,   357,   352,   359,
     123,   411,  1458,  2610,   411,   933,   287,  2614,   509,   334,
    1170,   171,   257,   461,   233,   488,   332,   615,   415,   232,
     506,   257,   267,   509,  1292,    97,  1097,    99,   257,   101,
     347,     9,   505,   345,   411,   345,   272,   109,   321,   221,
     462,  1310,   464,  1312,   417,   418,  1315,  1316,   227,  1318,
      62,   332,   509,   510,  2693,  2270,  2226,  2178,  2179,   257,
     213,    57,  2501,   856,    60,   347,   226,   421,    64,   667,
     399,   253,  2316,   483,   234,   776,   483,  1237,    90,    91,
      58,   294,   278,   279,  2523,  1332,   483,   516,   324,   401,
     288,   401,   232,   165,   406,   419,   406,   263,  2129,  2130,
     383,   326,   327,   896,   257,   324,   483,   352,   304,   305,
     178,  1476,    28,   467,   267,   457,   506,  2332,  2333,  2625,
     345,   475,   288,  1370,   466,  1446,  1447,   162,   921,  2377,
    1290,   166,  1453,  2639,  1455,   459,   837,  1406,  2386,  1299,
    1300,  1462,  1411,   347,   845,   846,   458,    57,   458,  2129,
    2130,     8,  1473,   293,    64,  1476,   510,  1426,  1524,   143,
     320,   204,   516,   367,  1704,   357,   491,   359,  1741,  1097,
     238,   416,  1537,   241,   399,   357,   421,   263,  1446,  1447,
      37,  1644,   883,   365,   509,  1453,   258,  1455,  1651,  1762,
     233,   310,   204,   312,  1462,  2226,   362,   480,   510,   352,
     178,   460,   288,     9,  1472,  1473,    12,  1528,   263,    15,
      16,   127,   471,   914,  1560,  2463,  1537,  1538,  2433,  1585,
    2711,   233,   467,     8,  2472,  1546,   309,  1446,  1447,  1769,
    1770,  1500,   304,   288,  1453,   213,  1455,  1506,   139,   458,
    1703,  1704,    58,   233,  1513,   425,  2226,   201,  1516,   429,
    1518,   458,    37,  1574,  1473,   956,  1516,  1622,  1518,  2531,
     343,   130,   451,   452,   242,   510,   967,   257,   421,   970,
    1538,   516,   461,   269,   510,     8,   230,   978,  1546,   257,
     516,   364,   123,  1604,  1553,   188,   188,   399,   157,   267,
     159,  1612,  1560,   163,  1562,   458,   166,   213,   384,   316,
     453,  1622,  1562,   320,    37,  1626,  1769,  1770,   211,   211,
     327,   328,   324,     0,   467,   481,   505,  2293,   335,  1563,
     310,   338,   312,   395,   174,   188,   343,   357,   345,   359,
     347,   348,   349,   350,  1703,  1704,   489,   263,  1707,    11,
     295,   257,   297,   509,  1612,   399,   178,  1803,   211,   345,
     367,   267,  1620,   452,   170,   456,   188,   510,  1626,   269,
    1620,   458,   288,   516,   465,   281,   438,  1160,   458,   470,
     469,  1640,  1165,  2698,   352,  1446,  1447,  1646,     1,   211,
     455,   422,  1453,  2708,  1455,  1654,   458,    59,  1957,   406,
     465,   408,   307,  1612,   411,   470,   420,    11,     1,    26,
    1769,  1770,  1473,  1563,  1898,   401,  1491,  1200,   224,   241,
     406,   253,  1659,   255,   458,   213,  1576,    40,    41,    42,
      43,    44,   458,   509,   510,    97,  1747,    99,   257,   101,
    1893,  1796,  1701,  1702,   381,   345,   352,   109,   510,   458,
    2691,  2692,   458,   421,    47,    59,   458,   455,   455,   758,
     759,   760,   139,    76,    77,   458,   143,   465,   465,   257,
      63,  2712,   470,   470,   458,   253,  1259,   255,   456,   267,
     404,  2351,   278,   279,   783,  1796,   458,   465,  2358,  2359,
    2731,    55,   470,    97,   501,    99,   213,   101,   253,   467,
     255,   401,  2740,   165,   341,   109,   406,   475,   304,   305,
     103,   512,  1965,   520,  1772,   421,  1774,  2758,   424,   425,
     794,   795,   796,   200,   510,    66,    90,    68,  1446,  1447,
     428,   118,   119,   120,   357,  1453,   359,  1455,   215,   486,
     257,   488,   510,   107,  1462,   249,   250,   510,   516,  1807,
     267,  1612,   559,   117,   510,  1473,   302,   303,   458,    21,
      22,   165,   410,   570,   352,  2128,   179,   180,   181,   182,
     183,   184,   185,   186,   187,    24,    25,   233,  1933,   172,
    1271,  1840,   410,  1454,  1842,  1456,   792,   793,  1459,  1460,
    1461,   768,   769,    58,  1465,   375,   258,   219,   510,  1104,
     458,   510,  1107,  1474,  1475,   257,   510,   453,  1113,   616,
     516,   204,  1117,  1396,   399,    47,   262,    66,  1123,    68,
     458,    70,   458,   630,   492,   493,   494,   495,   635,   406,
      64,    63,   415,   421,    60,   352,    69,   510,  2007,   510,
     233,   458,   304,   458,   131,  2129,  2130,   240,   196,  1908,
     309,   457,   239,   469,   258,   104,   105,   106,   251,   465,
     466,     4,   469,   132,   470,   342,   253,   469,   469,   346,
     469,   103,   469,    54,    55,   469,    19,   469,   469,   467,
    2133,   454,   469,   213,  1467,  2138,    29,   492,   493,   494,
     495,   170,  1951,   469,  1612,  1954,  2007,   704,   469,   453,
     304,   391,  1961,   133,   421,   154,  1489,   156,   135,    90,
     492,   493,   494,   495,   163,   134,  2027,   166,   357,   136,
     333,    64,   510,   166,  2690,   137,   107,   257,   516,  1988,
     138,   503,   102,   395,   448,   348,   117,   267,   469,   746,
     453,   141,  2226,  1526,    49,   409,   452,  1530,   449,   452,
     467,   338,   339,   340,   446,  1989,  1990,   839,   840,   841,
     842,  2214,   144,  2074,   357,   358,   353,  2122,   196,   776,
     145,  2082,  2457,   146,  2085,   147,   438,   505,   166,   372,
    2038,   374,  2040,  1869,  1870,  1871,  1872,   272,  2038,    31,
    2040,   395,   148,    49,   149,  1578,   458,   150,   196,   516,
     151,   233,  2061,   113,   253,   152,   255,   458,   240,   399,
     256,   458,   510,   315,   406,   257,  1966,   510,   458,   251,
     108,   257,   352,   272,   345,   475,  2272,  2273,  2281,   415,
    2276,   315,   257,   110,   438,   469,   510,   453,   510,   846,
     510,   203,   381,   344,   224,   232,   257,   297,   510,   273,
     507,   129,   507,    30,   176,   371,   453,   444,    35,   130,
     509,    38,   169,  2218,   229,   458,  2319,    49,    45,    46,
     453,   453,   196,   458,   399,   229,   372,   458,   221,   458,
      86,    86,  2193,   461,  1575,  2144,    23,   894,    65,  2342,
      67,   421,  2151,  2152,  2153,  2154,  2207,   510,   458,   273,
    2159,  2347,   449,   233,   911,  2311,   510,   914,   405,  1692,
     253,   504,   257,   199,   510,    92,   458,   510,   925,   514,
     263,   515,   238,  1614,  1615,   357,   358,  2186,   428,   277,
    2164,   302,   455,   455,   385,   455,   455,   467,   455,   368,
     372,   455,   374,   324,  1727,   952,   455,   328,   329,   455,
     453,   203,   298,  2187,   453,  1738,  1739,   203,    17,   449,
     312,   129,   140,  2409,   371,   453,    49,   125,   203,   142,
       8,   978,  2327,   196,   130,   318,   507,   310,   507,   203,
     323,   428,  2428,   458,   161,   453,   516,     9,     7,   399,
     394,   372,  2438,  2439,   458,    87,    22,   273,   309,   444,
     189,   450,   331,    47,   302,  2264,   387,   388,    57,   415,
       8,   300,   203,   190,   357,   504,    49,   189,  2277,   238,
     406,  2467,   365,   504,   317,   319,   458,   293,   313,   263,
     468,   333,   316,  2292,   377,   212,   114,   458,  1821,   399,
     443,  1824,  1825,   204,   510,   505,   257,   510,    26,   230,
    2503,   500,   416,   458,  1837,   203,   203,  2291,  1065,   297,
     103,   510,   385,   406,   367,    49,   409,   367,  1851,  1852,
       6,   263,   504,     9,   417,  2564,   253,   299,   238,   499,
     219,    96,  2528,   389,   294,   428,   255,  1778,   233,   266,
    2653,   458,   507,   407,   510,   453,   273,   510,    57,   263,
     428,    39,   257,    49,  2415,  2255,  2461,   111,   458,   342,
     263,   263,   263,    49,   463,   458,  2562,   516,   461,  1126,
      53,   453,   449,  1130,   301,    26,   405,   407,   415,    17,
     334,   510,   510,   110,   342,   196,  1143,   354,   257,  1146,
     452,  2496,   424,   458,   321,   449,   488,    83,  2594,  2408,
     458,   345,    88,   108,   115,     7,   188,   334,   373,   458,
     423,   458,   458,   408,   100,  2534,   510,   224,   460,    30,
     509,    35,  1179,  2432,    38,   221,   115,   437,   453,   342,
     312,    45,    46,   309,   458,  2496,   507,   204,   177,    57,
     204,   510,   257,   211,  2453,  2454,   120,  2650,  2509,   222,
     210,  2512,   196,   316,    49,   430,   383,   324,     6,    57,
      32,    54,   507,    59,    50,    49,   731,   393,  1378,   396,
    2479,  2480,  2591,  2534,  1231,  1232,  1233,   202,    92,   217,
    1359,  2490,  1053,  2544,   714,  1035,  2495,  2412,   415,  2150,
    2164,   685,  2025,  2347,  2697,  2158,  2341,  2454,  2701,  2143,
    2738,  2121,  2430,   671,  2427,  2455,   192,   193,   194,  2560,
    2218,  2725,  2702,  2750,  2494,   201,  2494,  2526,  2592,  2592,
     239,  1521,    64,  2316,  2585,  1417,  1069,   213,  2537,   805,
    2591,  1137,  1519,   501,   534,  1292,  1170,   854,   851,  2072,
    1192,  1523,   897,  2552,   807,  2554,   555,   161,  1788,  2558,
    1546,   904,  1220,   480,   915,  1563,  2759,   598,  1574,   592,
     246,  1250,  1300,   945,   491,  1280,   252,   630,   254,  1588,
     350,   257,  1615,   259,   260,   261,   190,   628,   645,   265,
    1299,   267,   509,  1845,  2449,  1299,   272,  1850,  2062,   993,
    1855,  1608,   801,  2577,  1608,   883,  2657,  1608,   212,  1608,
    1940,   616,  1267,  1022,   511,   716,  2496,  2616,  2617,  1363,
    1368,   470,  2126,  2302,  2156,  2677,  2402,  2050,  2059,  1047,
     306,  1535,  2631,  1565,  1287,   311,  1663,  2636,  2637,  2568,
    2691,  2692,  1314,  2693,  2397,    -1,    -1,    -1,    -1,   325,
      -1,    -1,    -1,  2652,    -1,    -1,  2655,  2656,    -1,    -1,
      -1,  2712,   266,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2724,  2725,    -1,   352,    -1,    -1,    -1,
    2731,    -1,    -1,    -1,    -1,    -1,    -1,   363,    -1,  2688,
      -1,    -1,    -1,  2691,  2692,    -1,    -1,   301,    -1,    -1,
      -1,    -1,    -1,  2754,    -1,    -1,   382,  2758,    -1,    -1,
      -1,  1458,    -1,    -1,  2712,    -1,    -1,   321,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1472,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2731,    -1,    -1,    -1,    -1,    -1,   415,
      -1,    -1,  2691,  2692,    -1,   421,    -1,    -1,    -1,  2180,
      -1,    -1,    -1,  2184,  2185,    -1,    -1,   433,   434,    -1,
    2758,    -1,    -1,  2712,    -1,    -1,    -1,    -1,    -1,  1516,
      -1,  1518,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   383,
      -1,    -1,  2731,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   467,   396,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   477,    -1,    -1,    -1,    -1,    -1,   483,    -1,  2758,
      -1,   415,    -1,  1560,    -1,  1562,    -1,    -1,    -1,    -1,
      -1,   497,    -1,    -1,    -1,    -1,   502,    -1,   504,    -1,
      -1,    -1,   508,    -1,   510,    -1,    -1,    -1,  2496,    -1,
     516,    45,     1,    -1,     3,    -1,     5,    -1,    -1,    -1,
      -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      -1,    65,    66,    67,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1620,    -1,    -1,   480,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1633,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,  1650,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1695,  1696,
    1697,  1698,  1699,   112,    -1,    -1,  1703,  1704,  1705,    -1,
    1707,   120,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,
     129,    -1,   131,   132,   133,   134,   135,   136,   137,   138,
      -1,   140,   141,   142,    -1,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   164,   210,    -1,    -1,    -1,
     169,    -1,  1759,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1768,  1769,  1770,  1771,  1772,    -1,  1774,    -1,    -1,
      -1,    -1,   236,  2691,  2692,    -1,   195,    -1,    -1,    -1,
      -1,    -1,    -1,   202,    -1,    -1,   205,   206,    -1,   253,
      -1,   255,    -1,    -1,  2712,    -1,  1803,   216,    -1,    -1,
    1807,    -1,    -1,    -1,   223,    -1,   225,    -1,    -1,   228,
      -1,    -1,    -1,  2731,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1842,    -1,    -1,    -1,    -1,
    2758,    -1,    -1,     1,   308,     3,    -1,     5,    -1,    -1,
      -1,   270,    10,    -1,    -1,   274,    -1,   276,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,   330,   286,    -1,    -1,
      -1,    -1,   336,    -1,   293,   294,   295,    -1,   297,   298,
     299,   300,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1899,    51,    52,   314,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,   327,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,   355,   356,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   410,   366,    -1,    -1,
      -1,    -1,    -1,    -1,   112,   419,    -1,    -1,    -1,    -1,
     379,   380,   120,    -1,   122,    -1,    -1,   386,    -1,    -1,
      -1,   390,   436,    -1,    -1,    -1,    -1,    -1,    -1,   398,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   408,
      -1,    -1,    -1,    -1,   458,   153,    -1,    83,   417,    -1,
      -1,  2008,    -1,    -1,    -1,    -1,   164,   426,    -1,    -1,
      -1,   169,   431,   432,   100,   479,   435,    -1,   437,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   445,    -1,    -1,    -1,
      -1,  2038,    -1,  2040,   498,    -1,    -1,   195,    -1,   458,
     504,   505,    -1,    -1,   202,    -1,    -1,   205,   206,  2056,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   476,   216,    -1,
      -1,    -1,    -1,   482,    -1,   223,    -1,   225,   487,    -1,
     228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   507,    -1,
      -1,    -1,    -1,    -1,   513,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   192,   193,   194,    -1,
      -1,    -1,   270,    -1,    -1,   201,   274,    -1,   276,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   286,    -1,
      -1,    -1,    -1,    -1,    -1,  2142,  2143,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   314,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,
      -1,   257,    -1,   259,   260,   261,    -1,    -1,    -1,   265,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   355,   356,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   366,  2216,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     306,   379,   380,    -1,    -1,    -1,    -1,    -1,   386,    -1,
      -1,    -1,   390,    -1,    -1,     1,    -1,     3,    -1,     5,
     398,    -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,
     408,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,   417,
      -1,    -1,    -1,  2270,    -1,  2272,  2273,    -1,   426,  2276,
      -1,    -1,    -1,   431,   432,    -1,    -1,   435,    -1,   437,
      -1,    -1,    -1,  2290,    -1,    51,    52,   445,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,   382,    -1,    -1,    -1,
     458,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   476,    -1,
      -1,    -1,    -1,    89,   482,  2332,  2333,    -1,    -1,   487,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2347,    -1,    -1,  2350,  2351,    -1,   112,   433,   434,    -1,
      -1,  2358,  2359,  2360,   120,   513,   122,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2372,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
      -1,     5,    -1,    -1,    -1,    -1,    10,   153,    -1,    -1,
      -1,   477,    -1,    -1,    18,    -1,    -1,    -1,   164,    -1,
      -1,    -1,  2409,   169,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   497,    -1,    -1,  2421,    -1,   502,    -1,    -1,    -1,
      -1,  2428,   508,    -1,   510,    -1,  2433,    51,    52,   195,
      -1,  2438,  2439,    -1,    -1,    -1,   202,    61,    -1,   205,
     206,    -1,  2449,    -1,    -1,    -1,    -1,    -1,    72,    -1,
     216,    75,    -1,    -1,    -1,    -1,    -1,   223,    -1,   225,
    2467,    -1,   228,    -1,    -1,    89,    -1,    -1,    -1,  2476,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,   122,    -1,
      -1,    -1,    -1,    -1,   270,    -1,    -1,    -1,   274,    -1,
     276,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     286,  2528,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2545,    -1,
     164,    -1,    -1,  2550,    -1,   169,    -1,    -1,   314,    -1,
      -1,    -1,    -1,    -1,    -1,  2562,    -1,    -1,    -1,    -1,
      -1,   327,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,   202,    -1,
      -1,   205,   206,    -1,    -1,    -1,    -1,  2594,    -1,   355,
     356,    -1,   216,    -1,    -1,    -1,    -1,    -1,    -1,   223,
     366,   225,    -1,  2610,   228,    -1,    -1,  2614,    -1,    -1,
      -1,    -1,    -1,   379,   380,    -1,    -1,    -1,    -1,    -1,
     386,    -1,    -1,    -1,   390,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   398,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   408,    -1,    -1,    -1,   270,    -1,    -1,    -1,
     274,   417,   276,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     426,    -1,   286,    -1,    -1,   431,   432,    -1,    -1,   435,
      -1,   437,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   445,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     314,     6,   458,    -1,     9,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,   327,    -1,    -1,    -1,    10,    -1,    -1,
     476,    -1,    -1,    -1,    -1,    18,   482,    -1,    -1,    -1,
      -1,   487,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   355,   356,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   366,    -1,    -1,    -1,    -1,   513,    51,    52,
      -1,    -1,    -1,    -1,    -1,   379,   380,    -1,    61,    -1,
      -1,    -1,   386,    -1,    -1,    -1,   390,    -1,    83,    72,
      -1,    -1,    75,    -1,   398,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   408,   100,    89,    -1,    -1,    -1,
      -1,    -1,    -1,   417,    -1,    -1,    -1,    -1,   113,    -1,
      -1,    -1,   426,    -1,    -1,    -1,    -1,   431,   432,   112,
      -1,   435,    -1,   437,    -1,    -1,    -1,   120,    -1,   122,
      -1,   445,    -1,    -1,    -1,    -1,   129,    -1,   131,   132,
     133,   134,   135,   136,   137,   138,    -1,   140,   141,   142,
      -1,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,    -1,   476,    -1,    -1,    -1,    -1,    -1,   482,    -1,
      -1,   164,    -1,   487,    -1,    -1,   169,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,   194,
      -1,    -1,    -1,    -1,    -1,    -1,   201,    -1,    -1,   513,
      -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,   213,   202,
      -1,    -1,   205,   206,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   216,   229,    -1,    -1,    -1,    -1,    -1,
     223,    -1,   225,    -1,    -1,   228,    -1,    -1,    -1,    -1,
      -1,   246,    -1,    -1,    -1,    -1,    -1,   252,    -1,   254,
      -1,    -1,   257,    -1,   259,   260,   261,    -1,    -1,    -1,
     265,    -1,   267,    -1,    -1,    -1,    -1,   272,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   270,    -1,    -1,
      -1,   274,    -1,   276,    -1,    -1,    -1,    -1,    -1,     6,
      -1,    -1,     9,   286,    -1,    12,    13,    14,    -1,    -1,
      -1,   306,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     325,   314,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   327,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   352,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   355,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,   366,    -1,    -1,    -1,   382,    -1,    -1,
      -1,    -1,    -1,   100,    -1,    -1,    -1,   380,    -1,    -1,
      -1,    -1,    -1,   386,    -1,    -1,    -1,   390,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   398,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   408,   421,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   417,    -1,    -1,    -1,   433,   434,
      -1,    -1,    -1,   426,    -1,    -1,    -1,    -1,   431,   432,
      -1,    -1,   435,   160,   437,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   445,   170,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   467,    -1,    -1,   458,    -1,    -1,    -1,    -1,
      -1,    -1,   477,    -1,    -1,   192,   193,   194,    -1,    -1,
      -1,    -1,    -1,   476,   201,    -1,    -1,    -1,    -1,   482,
     207,   208,   497,    -1,   487,    -1,   213,   502,    -1,    -1,
      -1,    -1,    -1,   508,    -1,   510,    -1,    -1,    -1,    -1,
      -1,   516,    -1,    -1,    -1,    -1,   233,    -1,    -1,    -1,
     513,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,
     247,   248,    -1,    -1,    -1,   252,    -1,   254,    -1,    -1,
     257,    -1,   259,   260,   261,    -1,    -1,    -1,   265,    -1,
     267,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   285,     6,
      -1,    -1,     9,    -1,   291,    12,    13,    14,    -1,   296,
      -1,    -1,    -1,    20,    -1,    -1,    -1,   304,    -1,   306,
      -1,    -1,    -1,    -1,   311,    -1,    -1,    -1,    -1,   316,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   325,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   335,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   352,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,   382,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   421,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   433,   434,    -1,    -1,
      -1,    -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   170,    -1,    -1,    -1,    -1,   455,    -1,
     457,    -1,   459,    -1,    -1,   462,    -1,   464,   465,   466,
     467,    -1,   469,   470,    -1,   192,   193,   194,    -1,    -1,
     477,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,
     207,   208,    -1,    -1,    -1,    -1,   213,    -1,    -1,    -1,
     497,    -1,    -1,    -1,    -1,   502,    -1,    -1,    -1,    -1,
      -1,   508,    -1,   510,    -1,    -1,    -1,    -1,    -1,   516,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,
     247,   248,    -1,    -1,    -1,   252,    -1,   254,    -1,    -1,
     257,    -1,   259,   260,   261,    -1,    -1,    -1,   265,    -1,
     267,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   285,    -1,
      -1,    -1,    -1,    -1,   291,    -1,    -1,     6,    -1,   296,
       9,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,   306,
      -1,    -1,    -1,    -1,   311,    -1,    -1,    -1,    -1,   316,
      -1,    30,    -1,    -1,    -1,    -1,    35,    -1,   325,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,   335,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   352,    65,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    -1,   382,    -1,    -1,    -1,    -1,
      -1,   100,    -1,    -1,     6,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   421,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   433,   434,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   161,    -1,    -1,    -1,    -1,    -1,   455,    -1,
     457,    -1,   459,    -1,    -1,   462,    -1,   464,   465,   466,
     467,    83,   469,   470,    -1,    -1,    -1,    -1,    -1,    -1,
     477,   190,    -1,   192,   193,   194,    -1,    -1,   100,    -1,
      -1,    -1,   201,    -1,    -1,    -1,     6,    -1,    -1,     9,
     497,    -1,    -1,   212,   213,   502,    -1,    -1,    -1,    -1,
      -1,   508,    -1,   510,    -1,    -1,    -1,    -1,    -1,   516,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,    -1,    -1,
      -1,   153,    -1,   252,   253,   254,    -1,    -1,   257,    -1,
     259,   260,   261,    -1,    -1,    -1,   265,   266,   267,    -1,
      -1,    -1,    -1,   272,   273,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
     192,   193,   194,    -1,    -1,    95,    -1,    -1,    -1,   201,
     100,    -1,   301,    -1,    -1,    -1,    -1,   306,    -1,    -1,
      -1,   213,    -1,     6,    -1,    -1,     9,    -1,    -1,    -1,
      -1,    -1,   321,    -1,    -1,    -1,   325,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,
     252,    -1,   254,   352,    -1,   257,    -1,   259,   260,   261,
      -1,    -1,    -1,   265,    -1,   267,    -1,    -1,    -1,    -1,
     272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   382,   383,    -1,    -1,    -1,    -1,    -1,
      83,    -1,   192,   193,   194,    -1,    -1,   396,    -1,    -1,
      -1,   201,    -1,    -1,   306,    -1,    -1,   100,    -1,    -1,
      -1,    -1,    -1,   213,    -1,    -1,   415,    -1,    -1,    -1,
      -1,    -1,   421,   325,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   433,   434,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   246,    -1,    -1,    -1,
     352,    -1,   252,    -1,   254,    -1,    -1,   257,    -1,   259,
     260,   261,    -1,    -1,    -1,   265,     6,   267,   467,     9,
      -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,   477,    -1,
     382,   480,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   491,    -1,    -1,    -1,    -1,    -1,   497,   192,
     193,   194,    -1,   502,    -1,    -1,   306,    -1,   201,   508,
     509,   510,    -1,    -1,    -1,    -1,    -1,   516,    -1,   421,
     213,    -1,    -1,    -1,    -1,   325,    -1,    -1,    -1,    -1,
      -1,   433,   434,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   352,   246,    -1,    95,    -1,    -1,   460,   252,
     100,   254,    -1,    -1,   257,   467,   259,   260,   261,   471,
      -1,    -1,   265,    -1,   267,   477,    -1,    -1,    -1,   272,
      -1,    -1,   382,    -1,    -1,     6,    -1,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    -1,   497,    -1,    -1,    -1,    -1,
     502,     6,    -1,    -1,     9,    -1,   508,    -1,   510,    -1,
      -1,    -1,    -1,   306,   516,    -1,    -1,    -1,   311,    -1,
      -1,   421,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   325,   433,   434,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   192,   193,   194,    -1,    -1,    -1,    -1,   352,
      -1,   201,    83,    -1,    -1,    -1,    -1,   467,    -1,    -1,
      -1,    -1,    -1,   213,    -1,    -1,    -1,   477,    83,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   382,
      95,    -1,   113,    -1,    -1,   100,    -1,   497,    -1,    -1,
      -1,    -1,   502,    -1,    -1,    -1,   246,    -1,   508,    -1,
     510,    -1,   252,    -1,   254,    -1,   516,   257,    -1,   259,
     260,   261,    -1,    -1,    -1,   265,    -1,   267,   421,    -1,
      -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     433,   434,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   306,    -1,    -1,    -1,
      -1,   192,   193,   194,   467,    -1,    -1,    -1,    -1,    -1,
     201,    -1,    -1,    -1,   477,   325,    -1,   192,   193,   194,
      -1,    -1,   213,    -1,     6,    -1,   201,     9,    -1,    -1,
      -1,    -1,    -1,    -1,   497,    -1,    -1,    -1,   213,   502,
      -1,    -1,   352,    -1,    -1,   508,    -1,   510,    -1,    -1,
      -1,    -1,    -1,   516,    -1,   246,    -1,    -1,    -1,    -1,
      -1,   252,    -1,   254,    -1,    -1,   257,    -1,   259,   260,
     261,   246,   382,    -1,   265,    -1,   267,   252,    -1,   254,
      -1,   272,   257,    -1,   259,   260,   261,    -1,    -1,    -1,
     265,    -1,   267,    -1,    -1,    -1,    -1,   272,    -1,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   421,    -1,    -1,    -1,   306,    -1,    -1,   100,    -1,
      -1,    -1,    -1,   433,   434,    -1,    -1,    -1,    -1,    -1,
      -1,   306,    -1,    -1,   325,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     6,    -1,    -1,     9,    -1,    -1,    -1,
     325,    -1,    -1,    -1,    -1,    -1,    -1,   467,    -1,     6,
      -1,   352,     9,    -1,    -1,    -1,    -1,   477,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   352,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   497,    -1,    -1,
      -1,   382,   502,    -1,    -1,    -1,    -1,    -1,   508,    -1,
     510,    -1,    -1,    -1,    -1,    -1,   516,   382,    -1,    -1,
     192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,   201,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     421,   213,    -1,    -1,    -1,    -1,    83,   100,    -1,    -1,
      -1,    -1,   433,   434,    -1,    -1,   421,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,   433,   434,
      -1,    -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,
     252,    -1,   254,    -1,    -1,   257,   467,   259,   260,   261,
      -1,    -1,    -1,   265,    -1,   267,   477,    -1,    -1,    -1,
     272,    -1,   467,    -1,    -1,    -1,     6,    -1,    -1,     9,
      -1,    -1,   477,    -1,    -1,    -1,   497,    -1,    -1,    -1,
      -1,   502,    -1,    -1,    -1,    -1,    -1,   508,    -1,   510,
      -1,    -1,   497,    -1,   306,   516,    -1,   502,    -1,   192,
     193,   194,    -1,   508,    -1,   510,    -1,    -1,   201,    -1,
      -1,   516,    -1,   325,    -1,   192,   193,   194,    -1,   196,
     213,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   213,    -1,    -1,    -1,
     352,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,   252,
     100,   254,    -1,    -1,   257,    -1,   259,   260,   261,   246,
     382,    -1,   265,    -1,   267,   252,    -1,   254,    -1,   272,
     257,    -1,   259,   260,   261,    -1,    -1,    -1,   265,    -1,
     267,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,
      -1,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,   421,
      -1,    -1,    -1,   306,    -1,    -1,    -1,    -1,   311,    -1,
      -1,   433,   434,    -1,    -1,    -1,    -1,    -1,    -1,   306,
      -1,    -1,   325,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   453,    -1,    -1,    -1,    -1,    -1,    -1,   325,    -1,
      -1,    -1,   192,   193,   194,   467,    -1,    -1,    -1,   352,
      -1,   201,    -1,    -1,    -1,   477,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   213,    -1,   352,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,   497,    -1,    -1,    -1,   382,
     502,    -1,    -1,    -1,    -1,   100,   508,    -1,   510,    -1,
       6,    -1,    -1,     9,   516,   382,   246,    -1,    -1,    -1,
      -1,    -1,   252,    -1,   254,    -1,    -1,   257,    -1,   259,
     260,   261,    -1,    -1,    -1,   265,    -1,   267,   421,    -1,
      -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     433,   434,    -1,    -1,   421,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   433,   434,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   306,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   467,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,   477,   325,    -1,   192,   193,   194,
     467,    -1,    -1,    -1,   100,    -1,   201,    -1,    -1,    -1,
     477,    -1,    -1,    -1,   497,    -1,    -1,    -1,   213,   502,
      -1,    -1,   352,    -1,    -1,   508,    -1,   510,    -1,    -1,
     497,    -1,    -1,   516,    -1,   502,    -1,    -1,    -1,    -1,
      -1,   508,    -1,   510,    -1,    -1,    -1,    -1,    -1,   516,
      -1,   246,   382,    -1,    -1,    -1,    -1,   252,    -1,   254,
      -1,    -1,   257,    -1,   259,   260,   261,    -1,    -1,    -1,
     265,    -1,   267,    -1,    -1,    -1,    -1,   272,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   415,    -1,    -1,    -1,    -1,
      -1,   421,    -1,    -1,    -1,    -1,   192,   193,   194,    -1,
      -1,    -1,    -1,   433,   434,   201,    -1,    -1,    -1,    -1,
      -1,   306,    -1,    -1,    -1,    -1,    -1,   213,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     325,    -1,    -1,    -1,    -1,    -1,    -1,   467,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   477,    -1,    -1,
     246,    -1,    -1,    -1,    -1,    -1,   252,   352,   254,    -1,
      -1,   257,    -1,   259,   260,   261,    -1,   497,    -1,   265,
      -1,   267,   502,    -1,    -1,    -1,   272,    -1,   508,    -1,
     510,    -1,    -1,    -1,    -1,    -1,   516,   382,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     306,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   421,    -1,    -1,   325,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   433,   434,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,   352,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   467,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   477,    -1,    32,    -1,   382,    35,    -1,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,    -1,   497,    -1,    -1,    -1,    -1,   502,    -1,    -1,
      -1,    -1,    -1,   508,    -1,   510,    -1,    65,    -1,    67,
      -1,   516,    -1,    -1,    -1,   421,    74,    -1,    76,    77,
      78,    79,    80,    81,    82,    -1,    -1,   433,   434,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   467,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   477,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   497,    -1,    -1,    -1,    -1,   502,    -1,    -1,    -1,
      -1,    -1,   508,   161,   510,    -1,    -1,    -1,    -1,    -1,
     516,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,
      -1,   179,   180,   181,   182,   183,    -1,    -1,   186,   187,
      -1,    -1,   190,    -1,    -1,    -1,    -1,    -1,   196,    -1,
     198,    -1,    -1,    -1,    -1,    -1,   204,    -1,    -1,    -1,
      -1,   209,    -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,   236,    -1,
      -1,    -1,    -1,    -1,   242,    -1,   244,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,   266,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     278,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    36,    -1,    -1,    39,
      40,    41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
     308,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   321,   322,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   330,    -1,    74,   333,    76,    77,    78,    79,
      80,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     348,    -1,   350,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   376,    -1,
     120,    -1,   100,    -1,    -1,   383,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   400,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   410,    -1,   412,   413,   414,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   172,    -1,    -1,    -1,   176,    -1,    -1,   179,
     180,   181,   182,   183,    -1,    -1,   186,   187,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   453,    -1,    -1,    -1,    -1,
     458,    -1,    -1,    -1,   204,   463,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   192,   193,   194,   475,    -1,    -1,
     220,    -1,   480,   201,    -1,    -1,   484,   485,   486,    -1,
      -1,    -1,    -1,   233,    -1,   213,   236,    -1,    -1,    -1,
     498,    -1,   242,    -1,    -1,   503,   504,    -1,    -1,    -1,
      -1,    -1,   510,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   278,   257,
      -1,   259,   260,   261,    -1,    -1,    -1,   265,    -1,   267,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,   308,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   322,    -1,    -1,    -1,    -1,    -1,   306,    -1,
     330,    -1,    -1,   333,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   348,    -1,
      36,    -1,    -1,    39,    40,    41,    42,    43,    44,    45,
      -1,   361,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   369,
      -1,    -1,    -1,    -1,   352,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      76,    77,    78,    79,    80,    81,    82,    -1,    -1,   192,
     193,   194,    -1,    -1,   382,    -1,    -1,    -1,   201,    -1,
     410,    -1,   412,   413,   414,    -1,    -1,    -1,    -1,    -1,
     213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,   439,
      -1,    -1,    -1,   421,    30,    -1,    32,    -1,    -1,    35,
      -1,    -1,    38,    -1,    -1,   433,   434,    -1,   458,    -1,
      46,    -1,    -1,    -1,   257,    -1,   259,   260,   261,    -1,
      -1,    -1,   265,    -1,   267,   475,    -1,    -1,    -1,    65,
      -1,    67,    -1,    -1,   484,   485,   486,    -1,    -1,   467,
      -1,    -1,    -1,   179,   180,   181,   182,   183,   498,   477,
     186,   187,    -1,    -1,   504,    -1,    92,    -1,    -1,    -1,
     510,    -1,    -1,   306,    -1,    -1,    -1,    -1,    -1,   497,
      -1,    -1,    -1,    -1,   502,   111,    -1,    -1,    -1,    -1,
     508,    -1,   510,    -1,   220,    -1,    -1,    -1,   516,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,
     236,    -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,   352,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   382,
      -1,    -1,   278,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   190,    -1,    -1,    -1,    -1,    -1,
      -1,   197,   198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   308,    -1,    -1,    -1,   212,    -1,   421,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,    -1,    -1,
     433,   434,    -1,    -1,   330,    -1,    -1,   333,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   244,    -1,
      -1,    -1,   348,    -1,    -1,    -1,    -1,   253,    -1,    -1,
      -1,    -1,    -1,    -1,   467,   361,    -1,    -1,   264,    -1,
     266,    -1,    -1,   369,   477,    -1,    -1,   273,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   288,   289,   497,    -1,    -1,    -1,    -1,   502,
      -1,    -1,    -1,    -1,    -1,   508,    -1,   510,    -1,    -1,
      -1,    -1,    -1,   516,   410,    -1,   412,   413,   414,    -1,
      -1,    -1,    -1,    -1,    -1,   321,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   334,    -1,
      -1,    -1,    -1,   439,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   350,   351,    -1,    -1,    -1,    -1,
      -1,    -1,   458,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   475,
     376,    -1,    -1,    -1,    -1,    -1,    -1,   383,   484,   485,
     486,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     396,    -1,   498,    32,   400,    -1,    35,    -1,   504,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    32,   415,
      -1,    35,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    65,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    74,   442,    76,    77,    78,
      79,    80,    81,    82,    -1,   451,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    -1,   480,    39,    40,    41,    42,    43,
      44,   120,    -1,    -1,   490,    -1,    -1,   111,    -1,    -1,
     496,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   509,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    76,    77,    78,    79,    80,    81,    82,    -1,
      -1,    -1,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     179,   180,   181,   182,   183,    -1,    -1,   186,   187,    -1,
      -1,   190,    -1,    -1,    -1,    -1,   120,   196,    -1,   198,
      -1,    -1,    -1,    -1,    -1,   204,   190,    -1,    -1,    -1,
     209,    -1,    -1,   212,   198,    -1,    -1,    -1,    -1,    -1,
      -1,   220,    -1,    -1,    -1,    -1,    -1,    -1,   212,    -1,
      -1,    -1,    -1,    -1,   233,    -1,    -1,   236,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   244,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   253,   179,   180,   181,   182,   183,
     244,    -1,   186,   187,    -1,    -1,    -1,   266,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   278,
     264,    -1,   266,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   220,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   288,   289,    -1,    -1,    -1,   308,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   321,   322,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   330,    -1,    -1,   333,    -1,    -1,   321,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   348,
      -1,   350,    83,    -1,   278,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   350,   351,    -1,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   376,    -1,    -1,
      -1,    -1,    -1,    -1,   383,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   376,    -1,    -1,    -1,    -1,    -1,   322,   383,
      -1,   400,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   333,
      -1,   410,   396,   412,   413,   414,   400,    -1,    -1,    -1,
      -1,    -1,    83,    -1,   348,    -1,    -1,    -1,    -1,    -1,
      -1,   415,    -1,    -1,    -1,    -1,    -1,    -1,    83,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   453,   100,    -1,    -1,   442,   458,
      -1,   192,   193,   194,   463,    -1,    -1,   451,    -1,    -1,
     201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   480,   213,    -1,    -1,   484,   485,   486,   412,   413,
     414,    -1,    -1,    -1,    -1,    -1,   480,    -1,    -1,   498,
      -1,    -1,    -1,    -1,   503,   504,   490,    -1,    -1,    -1,
      -1,    -1,   496,    -1,    -1,   246,    -1,    -1,    -1,    -1,
      -1,   252,    -1,   254,    -1,    -1,   257,    -1,   259,   260,
     261,   192,   193,   194,   265,    -1,   267,    -1,    -1,    -1,
     201,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,   194,
      -1,    -1,   213,    -1,    -1,    -1,   201,    -1,    -1,    -1,
     484,   485,   486,    -1,    -1,    -1,    -1,    -1,   213,    -1,
      -1,    -1,    -1,    -1,    -1,   306,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,
      -1,   252,    -1,   254,   325,    -1,   257,    -1,   259,   260,
     261,   246,    -1,    -1,   265,    -1,   267,   252,    -1,   254,
      -1,    -1,   257,    -1,   259,   260,   261,    -1,    -1,    -1,
     265,   352,   267,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   306,    -1,    -1,    -1,    -1,
      -1,   382,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   306,    -1,    -1,   325,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     325,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     421,   352,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
      -1,    -1,   433,   434,    -1,    -1,    -1,   352,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   382,    -1,    -1,   455,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   465,    -1,   467,   382,   469,   470,
      -1,    -1,    -1,    -1,    -1,    -1,   477,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     421,    -1,    -1,    -1,    -1,    -1,   497,    -1,    -1,    -1,
      -1,   502,   433,   434,    -1,    -1,   421,   508,    -1,   510,
      -1,    83,    -1,    -1,    -1,   516,    -1,    -1,   433,   434,
      -1,   192,   193,   194,   455,    -1,   441,    -1,   100,    -1,
     201,    -1,    -1,    -1,   465,    -1,   467,    -1,   469,   470,
      -1,    -1,   213,    -1,    -1,    -1,   477,    -1,    -1,    -1,
     465,    -1,   467,    83,   469,   470,    -1,    -1,    -1,    -1,
      -1,    -1,   477,    -1,    -1,    -1,   497,    -1,    -1,    -1,
     100,   502,    -1,    -1,    -1,   246,    -1,   508,    -1,   510,
      -1,   252,   497,   254,    -1,   516,   257,   502,   259,   260,
     261,    -1,    -1,   508,   265,   510,   267,    -1,    -1,    -1,
      -1,   516,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,   201,
      -1,    -1,    -1,    -1,    -1,   306,    -1,    -1,    -1,    -1,
      -1,   213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   325,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,
      -1,   201,    -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,
     252,   352,   254,   213,    -1,   257,    -1,   259,   260,   261,
      -1,    -1,    -1,   265,    -1,   267,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   382,    -1,    -1,    -1,    -1,   246,    -1,    -1,    -1,
      -1,    -1,   252,    -1,   254,    -1,    -1,   257,    -1,   259,
     260,   261,    -1,    -1,   306,   265,    -1,   267,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     421,    -1,    -1,   325,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   433,   434,    -1,    -1,    -1,    -1,    -1,    -1,
     441,    -1,    -1,    -1,    -1,    -1,   306,    -1,    -1,    -1,
     352,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   465,   325,   467,    83,   469,   470,
      -1,    -1,    -1,    -1,    -1,    -1,   477,    -1,    -1,    -1,
     382,    -1,    -1,    83,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   352,    -1,    -1,    -1,   497,    -1,    -1,    -1,
     100,   502,    -1,    -1,    -1,    -1,    -1,   508,    -1,   510,
      -1,    -1,    -1,    -1,    -1,   516,    -1,    -1,    -1,   421,
      -1,    -1,   382,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   433,   434,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   455,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   421,    -1,   465,    -1,   467,    -1,   469,   470,    83,
      -1,    -1,    -1,   433,   434,   477,   192,   193,   194,    -1,
      -1,    -1,    -1,    -1,    -1,   201,   100,    -1,    -1,    -1,
      -1,    -1,   192,   193,   194,   497,    -1,   213,    -1,    -1,
     502,   201,    -1,    -1,    -1,   465,   508,   467,   510,   469,
     470,    -1,    -1,   213,   516,    -1,    -1,   477,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     246,    -1,    -1,    -1,    -1,    -1,   252,   497,   254,    -1,
      -1,   257,   502,   259,   260,   261,   246,    -1,   508,   265,
     510,   267,   252,    83,   254,    -1,   516,   257,    -1,   259,
     260,   261,    -1,    -1,    -1,   265,    -1,   267,    -1,    -1,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,
     194,    -1,    -1,    -1,    -1,    -1,    -1,   201,    83,    -1,
     306,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   213,
      -1,    -1,    -1,    -1,    -1,   100,   306,    -1,    -1,   325,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   325,    -1,    -1,    -1,    -1,
      -1,    -1,   246,    -1,    -1,    -1,   352,    -1,   252,    -1,
     254,    -1,    -1,   257,    -1,   259,   260,   261,    -1,    -1,
      -1,   265,   352,   267,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   191,   192,   193,   194,    -1,   382,    -1,    -1,    -1,
      -1,   201,    -1,    -1,    -1,    -1,    -1,    -1,   378,    -1,
      -1,    -1,   382,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   306,    -1,    -1,    -1,   191,   192,   193,   194,
      -1,    -1,    -1,    -1,    -1,   421,   201,    -1,    -1,    -1,
      -1,   325,    -1,    -1,    -1,    -1,    -1,   433,   434,    -1,
      -1,   421,    -1,    -1,    -1,    -1,    -1,   257,    -1,   259,
     260,   261,    -1,   433,   434,   265,    -1,    -1,   352,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   467,    -1,   469,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   477,   257,    -1,   259,   260,   261,   467,   382,    -1,
     265,    -1,    -1,    -1,    -1,    -1,   306,   477,    -1,    -1,
      -1,   497,    -1,    -1,    -1,    -1,   502,    -1,    -1,    -1,
      -1,    -1,   508,    -1,   510,    -1,    -1,   497,    -1,    -1,
     516,    -1,   502,    -1,    -1,    -1,    -1,   421,   508,    -1,
     510,   306,    -1,    -1,    -1,    -1,   516,    -1,    -1,   433,
     434,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   382,   467,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   477,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   497,    -1,    -1,    -1,   382,   502,    -1,
      -1,    -1,    -1,    -1,   508,    -1,   510,    -1,    -1,    -1,
      -1,    -1,   516,   433,   434,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   446,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   433,   434,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   477,    -1,    -1,
      -1,   446,    -1,    -1,    -1,    -1,    -1,    -1,   488,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   497,    -1,    -1,
      -1,    -1,   502,    -1,    -1,   505,    -1,    -1,   508,   509,
     510,    -1,   477,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   488,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   497,    -1,    -1,    -1,    -1,   502,    -1,    -1,
     505,    -1,    -1,   508,   509,   510
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   519,   520,     0,   215,   521,   522,   523,   524,   525,
     526,   527,   533,   123,   523,   154,   532,   543,   544,   200,
     346,   534,   536,   458,   123,   103,   657,   659,    85,   545,
     546,   458,   458,   532,   532,   458,   123,   342,   811,   814,
     461,   660,   399,   227,   609,   610,   307,   420,   547,   548,
     552,   257,   347,   537,   537,   143,   528,   529,   530,   139,
     531,   458,   123,   837,   838,   399,   661,   458,   399,   174,
     611,   458,   458,   422,   570,   552,   548,    26,   539,   539,
     257,   347,   538,   530,   538,    56,   503,   815,     1,     3,
       5,    10,    18,    51,    52,    61,    72,    75,    89,   112,
     120,   122,   153,   164,   169,   195,   202,   205,   206,   216,
     223,   225,   228,   270,   274,   276,   286,   314,   327,   355,
     356,   366,   379,   380,   386,   390,   398,   408,   417,   426,
     431,   432,   435,   437,   445,   458,   476,   482,   487,   513,
     839,   840,   856,   861,   865,   870,   885,   888,   892,   896,
     897,   898,   903,   917,   921,   924,   938,   942,   945,   948,
     952,   953,   957,   967,   970,   987,   989,   992,   996,  1002,
    1014,  1022,  1023,  1026,  1027,  1031,  1036,  1037,  1045,  1061,
    1071,  1080,  1085,  1092,  1096,  1098,  1101,  1104,  1107,  1134,
     839,   458,   173,   397,   658,   662,   663,   665,   458,   458,
     613,   553,   549,   458,    11,    59,    97,    99,   101,   109,
     165,   258,   304,   395,   438,   510,   571,   572,   573,   574,
     575,   581,   590,   592,   597,   600,   601,   603,   604,   605,
     606,   607,   608,   257,   458,   535,   458,   458,   817,   816,
     381,   823,     3,     5,    10,    18,    51,    52,    61,    72,
      75,    89,   112,   120,   122,   129,   131,   132,   133,   134,
     135,   136,   137,   138,   140,   141,   142,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   164,   169,   195,
     202,   205,   206,   216,   223,   225,   228,   270,   274,   276,
     286,   314,   327,   355,   366,   380,   386,   390,   398,   408,
     417,   426,   431,   432,   435,   437,   445,   458,   476,   482,
     487,   513,  1266,   841,   857,   862,   866,   871,   886,   889,
     893,   899,   904,   918,   922,   925,   939,   943,   946,   949,
     203,   381,   880,   941,   954,   958,   968,   971,   988,   990,
     993,   404,   997,  1003,  1015,  1024,  1028,  1032,  1038,  1046,
    1062,  1072,   257,   352,   392,   421,   516,  1084,  1086,  1093,
     341,  1097,  1099,   826,  1102,  1105,  1108,  1135,   512,   690,
     692,   693,     1,   510,  1191,   235,   402,   612,   614,    57,
      64,   269,   345,   401,   406,   510,   554,   555,   556,   557,
     558,   559,   560,   562,  1275,  1337,   550,   562,     1,   510,
    1205,  1205,   428,   410,  1308,   233,  1289,  1289,  1289,  1205,
     410,  1289,    58,  1276,   576,   375,   563,   573,   458,   574,
     219,   591,   540,  1289,    49,   818,   819,   820,  1274,   818,
     311,   510,   458,   311,   510,   842,   844,  1228,  1229,  1232,
       6,     9,    83,    95,   100,   192,   193,   194,   201,   213,
     246,   252,   254,   257,   259,   260,   261,   265,   267,   272,
     306,   325,   352,   382,   421,   433,   434,   467,   477,   497,
     502,   508,   516,   858,  1185,  1210,  1211,  1228,  1239,  1240,
    1241,  1242,  1243,  1244,  1245,   246,   465,   469,   470,   863,
    1180,  1181,  1182,  1183,  1184,  1185,  1214,  1228,  1240,  1242,
     257,   867,   868,  1196,  1197,  1198,  1232,   272,   427,   429,
     872,   873,   257,   887,  1219,  1228,   890,  1191,     6,   894,
    1186,  1187,  1208,  1230,  1231,  1232,  1240,   461,   900,  1191,
     257,   311,   905,   906,   907,   908,   910,  1210,  1219,  1228,
     919,  1211,   257,   923,   460,   471,   926,   927,   928,  1168,
    1169,  1170,   199,   326,   327,   345,   399,   940,   944,  1207,
    1208,   947,  1232,   453,   950,  1317,  1211,  1167,  1168,   959,
    1207,   510,   969,  1192,   972,   973,  1228,  1239,  1242,  1063,
    1226,  1227,  1232,    95,   991,  1211,   994,  1211,   171,   226,
     234,   320,   998,   999,   191,   257,   509,  1004,  1008,  1009,
    1010,  1196,  1220,  1228,  1232,  1242,  1321,  1016,  1191,  1025,
    1188,  1232,  1029,  1191,  1033,  1188,     9,  1039,  1189,  1232,
     154,   241,   272,  1047,  1050,  1051,  1054,  1055,  1056,  1057,
    1058,  1059,  1060,  1193,  1194,  1207,  1225,  1227,  1232,  1063,
    1073,  1191,  1081,   113,  1087,  1088,  1089,  1211,    95,  1094,
    1210,  1100,  1192,   458,   510,   827,   828,   831,   832,   837,
    1103,  1228,  1106,  1191,  1109,  1228,  1136,  1188,   399,   262,
     746,   694,   695,   697,   707,  1253,   458,   664,   458,   291,
     315,  1261,   275,   393,   647,   648,   649,   650,   652,   406,
     415,    64,  1289,   458,   556,   458,   510,   555,    60,  1289,
     551,  1321,   582,  1289,  1289,  1289,  1200,  1232,    69,  1200,
    1289,  1289,  1200,   510,   593,   594,   595,  1206,   257,   310,
     312,   577,   579,   580,  1048,  1235,  1289,   458,   458,   510,
     458,    73,   172,   360,   463,   541,   542,   819,   415,   483,
     821,   363,   504,   812,   219,   309,  1327,   131,   855,   843,
     196,   469,  1233,  1234,   309,  1299,  1241,  1228,   469,   469,
     469,  1247,  1229,  1240,  1242,  1327,  1327,   469,   469,   469,
     469,  1327,   469,  1247,   132,   860,   453,   859,  1211,   454,
     469,  1246,   469,   469,  1229,  1240,  1242,  1184,  1228,  1180,
    1184,    58,   465,   470,   457,   466,   170,   224,  1256,   868,
     453,  1327,   133,   884,   257,  1220,  1219,  1191,   362,   481,
     891,  1321,  1333,  1299,   134,   895,   160,   459,  1187,  1325,
     391,  1262,  1233,  1234,   901,  1191,   135,   902,   357,  1305,
     136,   916,   166,  1147,  1148,   908,  1209,  1210,   909,   492,
     493,   494,   495,   137,   920,    49,   229,   503,   874,   138,
     937,    17,   507,   929,   930,   931,   933,    12,    13,    14,
      20,   160,   170,   207,   208,   247,   248,   285,   291,   296,
     304,   311,   316,   335,   455,   457,   459,   462,   464,   465,
     466,   469,   470,  1171,  1172,  1173,  1174,  1175,  1176,  1177,
    1211,   102,   941,  1208,  1195,   448,  1315,   960,  1321,  1192,
      93,   371,   443,   974,   975,   977,   978,  1065,   469,  1233,
    1211,   453,   141,   995,    49,   999,   409,  1000,  1009,   142,
     458,  1005,  1007,   488,   505,   449,   452,   446,   144,  1021,
     286,   337,  1259,   196,  1137,   145,  1030,  1305,   146,  1035,
    1137,  1189,   147,  1044,   505,  1040,  1217,  1228,  1240,   166,
    1057,  1059,  1207,   453,  1194,   124,   453,   489,  1049,    31,
    1233,   148,  1079,   178,   238,   241,  1075,   880,  1082,  1321,
    1274,   149,  1091,   229,  1089,  1228,   150,  1095,   196,  1192,
     399,   458,   458,   196,   357,   359,  1306,   151,  1118,   113,
    1110,   152,  1141,  1137,   458,   399,   256,   748,   458,   695,
     458,     1,   176,   510,   698,   699,   510,   666,   315,  1205,
     653,   357,   417,   418,   651,     1,   458,   649,  1289,   406,
    1235,   458,  1289,   510,  1201,   458,   108,  1289,   213,   257,
     267,   352,   421,   467,   516,   598,   599,  1238,  1200,   257,
     257,   475,   594,    22,   233,  1206,  1290,  1048,   233,   428,
    1301,  1289,    97,  1205,   564,   542,   345,  1304,  1289,   415,
     315,   822,   110,   824,  1232,    30,   197,   273,   845,   846,
     847,   849,   852,  1272,  1321,    24,    25,    66,    68,    70,
     104,   105,   106,   154,   156,   163,   166,   253,   255,   450,
     500,   510,   848,  1194,  1324,  1178,  1180,   469,  1234,   153,
     345,  1215,  1229,   453,  1178,  1180,  1251,  1178,  1252,   455,
    1178,   510,   510,  1180,  1250,  1250,  1250,  1213,  1228,  1240,
    1242,  1249,   510,  1213,  1248,     6,  1186,  1211,  1232,  1240,
     203,  1241,  1180,  1213,  1178,   455,   224,  1257,  1181,  1181,
    1182,  1182,  1182,   381,   864,   344,   869,  1198,   874,   891,
     263,   288,   189,  1282,  1229,  1180,   273,  1263,  1234,  1191,
     232,  1163,  1164,   834,   835,   297,  1149,   491,   849,   852,
     911,   912,   913,  1321,  1147,  1147,  1147,  1147,  1211,  1186,
    1211,   875,   928,    21,   460,   471,   934,   935,  1169,   507,
     931,   932,   507,   834,  1317,   233,  1172,   115,   951,  1196,
     129,   834,   955,     9,    12,    15,    16,   278,   279,   304,
     305,   961,   965,   176,  1217,     9,    58,   178,   242,   475,
     981,   982,   983,   976,   977,   125,   312,   509,  1067,  1300,
    1336,   453,  1207,  1186,  1211,  1000,  1321,  1190,  1191,   834,
     169,  1011,  1167,  1012,  1013,  1228,  1196,     8,    37,  1139,
    1305,  1224,  1228,  1239,  1242,   229,  1017,  1034,  1321,   130,
    1041,  1228,  1041,   453,   453,   453,  1048,   153,   460,   471,
    1211,    49,    38,    46,   212,   244,   266,   321,   383,   480,
    1052,  1053,  1289,  1074,  1321,  1211,   162,   290,   415,  1211,
    1228,   196,  1186,  1211,   833,  1235,  1217,  1274,   229,  1113,
    1138,  1139,   691,   458,   399,   372,   750,   458,   458,   696,
      86,    47,    63,   103,   240,   251,   357,   358,   372,   374,
     458,   504,   667,   668,   670,   674,   675,   678,   679,   685,
     686,   687,   688,  1289,   615,   461,  1280,    23,  1270,   458,
    1235,   258,   440,   501,   561,  1201,   273,    28,   127,   213,
     257,   267,   281,   352,   421,   424,   425,   516,   583,   584,
     585,   588,   599,   449,   602,  1321,   405,   257,   596,  1236,
    1301,   233,  1205,  1205,   578,   579,   199,   565,   566,   567,
      32,   111,  1235,  1289,   510,   458,   813,   516,  1221,  1225,
    1235,  1289,   163,   166,  1142,  1143,  1144,   847,    65,    67,
     253,   334,   850,   851,  1323,    32,    35,    38,    46,    92,
     111,   190,   198,   212,   244,   264,   266,   288,   289,   321,
     350,   351,   376,   383,   396,   400,   415,   442,   451,   480,
     490,   496,   853,   854,  1142,   515,   514,  1217,  1142,   238,
     428,   302,   277,    71,   403,   455,  1179,   456,  1180,   257,
    1216,  1229,  1228,  1179,   455,  1179,   455,   455,  1179,   455,
     455,   455,  1179,   455,  1179,   455,  1299,   416,  1150,  1151,
    1233,  1234,  1186,   456,   455,   455,   453,  1258,   864,  1208,
     453,  1196,   879,   880,   385,   368,  1150,  1289,   834,   298,
    1165,   836,   834,    97,    98,   339,   510,   914,  1194,   912,
      35,    38,    45,    46,    92,   161,   190,   212,   266,   301,
     321,   383,   396,   415,   480,   915,   203,  1150,   203,   876,
     877,   878,  1274,    17,   449,   936,   319,   934,  1300,   834,
     129,   140,   956,  1317,   371,   962,  1317,   453,    49,   982,
     984,  1217,     9,    58,   242,   475,   979,   980,  1217,   125,
      64,   406,  1068,  1322,    27,   116,   731,   219,   317,  1285,
    1207,  1150,   203,  1190,     9,   288,   355,   646,   384,  1001,
    1191,  1321,   142,  1006,     8,   196,  1017,  1228,   130,  1156,
    1158,  1163,   263,   288,   834,   507,   507,  1042,  1043,  1217,
     310,  1216,  1211,  1048,  1048,  1048,  1048,  1048,  1048,  1048,
    1048,  1053,   291,   296,  1076,  1077,  1078,  1173,  1260,  1163,
     245,   415,  1335,   428,  1313,  1313,  1090,  1321,  1228,  1150,
     203,   458,   453,     9,  1111,  1112,  1254,  1114,  1228,  1090,
    1114,  1034,     7,  1267,   692,   747,   458,   399,   394,   795,
     709,   700,  1289,    87,  1277,  1289,   357,   359,  1332,  1332,
    1289,  1277,  1289,   273,  1296,  1289,    22,  1269,   309,   689,
    1205,   172,   204,   616,   444,  1314,  1282,    58,   511,  1331,
     585,    17,   449,  1238,   331,  1236,  1205,     9,   201,   510,
     569,     1,   458,   567,    32,  1235,   825,   826,    47,   295,
     297,  1145,  1146,   834,   302,  1297,  1297,  1297,  1289,  1289,
     854,    57,   415,   124,   489,  1289,     8,  1268,  1142,  1180,
     455,  1180,  1262,   441,  1246,   441,  1246,  1200,  1246,  1246,
    1246,  1213,   242,   475,  1246,  1229,   834,   300,  1152,  1234,
    1150,   455,  1180,  1246,  1246,  1218,  1228,  1239,   166,   468,
     882,     6,   229,   292,   311,   467,   881,  1288,    34,   282,
     283,   284,   349,   473,   474,   478,  1264,   834,   837,  1289,
     253,   394,   130,   157,   159,   803,   804,  1279,  1289,   124,
     489,  1289,  1186,  1187,  1186,  1187,   877,   311,   821,    88,
     363,   504,   935,  1168,   834,  1228,   834,   504,   963,   964,
     965,   966,  1315,   504,  1218,  1217,    49,   985,   980,   189,
     985,   406,  1064,  1289,   238,  1291,   317,  1186,  1001,   319,
    1302,  1302,   313,   263,   288,  1013,  1211,   218,  1018,  1321,
     834,   293,  1159,   263,  1168,  1167,  1042,  1173,  1228,  1174,
    1175,  1176,  1177,  1180,  1083,  1211,  1083,   468,  1153,  1154,
     333,  1262,  1186,   829,  1218,   316,  1217,   114,  1115,   443,
    1117,   158,   294,  1140,  1160,  1161,  1162,  1163,   324,  1194,
    1221,   692,   749,   458,   399,    21,    36,    39,    40,    41,
      42,    43,    44,    45,    74,    76,    77,    78,    79,    80,
      81,    82,   120,   179,   180,   181,   182,   183,   186,   187,
     220,   236,   278,   308,   322,   330,   333,   348,   361,   369,
     410,   412,   413,   414,   439,   484,   485,   486,   498,   504,
     710,   711,   712,   714,   715,   716,   717,   718,   719,   720,
     723,   735,   736,   737,   738,   739,   744,   745,  1289,  1310,
      26,   196,   708,  1271,   204,  1235,   510,  1289,  1269,   510,
    1202,  1203,   311,   423,  1328,   257,  1200,  1204,  1235,   505,
    1289,   175,   214,   510,   676,  1205,     4,    19,    29,   221,
     253,   318,   323,   357,   365,   377,   409,   417,   458,   461,
     617,   618,   625,   627,   629,   630,   631,   632,   633,   636,
     637,   638,   639,   640,   642,   643,   645,  1305,  1322,  1277,
    1190,   586,   588,   257,   230,    26,   568,   201,   230,   458,
     826,   834,  1221,  1221,  1221,  1221,  1221,  1289,  1289,  1166,
    1223,  1225,  1235,  1166,  1221,   257,  1222,  1225,  1237,   455,
    1150,   834,   455,   834,   834,   297,   883,  1299,  1228,  1221,
    1299,   253,   394,  1221,  1166,  1166,  1221,  1150,   367,  1150,
     367,  1211,   964,   103,  1278,  1317,   985,   985,  1218,     8,
      37,   986,   226,   503,  1069,  1200,  1066,  1150,   385,    49,
     263,   238,  1019,   217,   237,   263,   288,   506,   834,   834,
     834,   834,   299,  1155,  1289,  1150,  1150,   499,   830,  1119,
    1112,   219,  1284,    96,  1116,  1284,  1153,   834,   834,  1162,
     253,   255,  1293,   692,   751,   458,   245,   304,   411,   483,
    1309,   483,  1309,   483,  1309,   483,  1309,   483,  1309,   507,
    1319,   389,  1307,   126,  1235,  1229,  1232,   233,   243,   389,
    1292,  1289,  1290,   172,   204,   242,   475,   510,    50,   245,
     246,   701,  1239,   453,   673,  1203,   255,  1295,   453,  1276,
    1284,   510,  1289,  1289,  1296,  1305,   453,   503,  1318,   407,
    1289,  1275,   114,  1291,  1291,   288,   644,  1235,  1321,   428,
     263,    39,  1273,  1289,   654,   655,  1191,   587,   588,   257,
     130,  1219,  1221,   253,   255,  1334,   834,  1228,  1187,  1187,
      49,   111,   985,   463,  1287,  1287,   342,  1190,   203,   320,
    1070,  1232,  1211,  1289,  1020,  1157,  1158,  1159,  1163,   263,
     263,   263,   834,  1228,  1120,   458,  1228,  1284,  1228,   752,
     796,   516,    53,   727,   453,   724,   449,   717,   741,   742,
    1239,    26,   713,   405,  1265,  1265,  1299,     1,    40,    41,
      42,    43,    44,   179,   180,   181,   182,   183,   184,   185,
     333,   348,   702,   703,   704,   705,   706,   718,   719,  1229,
     702,  1235,    58,   359,   669,   680,  1235,   415,  1311,   257,
     677,  1232,   677,  1289,  1291,   126,   172,   622,   365,   637,
    1289,  1289,  1289,  1289,  1270,   646,  1289,  1296,   407,   510,
     655,   334,   656,    17,   110,  1150,  1150,  1211,  1211,  1211,
    1289,  1190,   342,   488,  1228,  1159,    30,   128,   167,   204,
    1121,  1122,  1123,  1125,  1129,  1131,  1132,  1133,  1272,  1282,
    1228,   354,   753,   697,   707,   797,   798,   799,  1284,   196,
     725,  1235,   452,  1316,  1232,   740,   742,   449,   257,  1275,
     702,   458,    48,   472,   681,   682,   683,   684,  1321,  1276,
     196,   672,  1283,   126,   353,   407,   626,  1289,   118,   119,
     120,   239,   253,   338,   339,   340,   353,   444,   619,   620,
     621,  1204,   424,   641,  1200,  1200,  1200,  1289,  1235,   588,
     458,  1008,  1289,  1167,    37,  1268,   345,   108,  1192,     1,
     698,   799,   458,   510,  1235,   724,   115,   726,   507,   743,
    1320,  1239,  1204,  1204,   188,   673,  1235,   641,   257,   624,
    1232,   624,     7,   624,   624,   257,   623,  1232,   419,   459,
      33,   168,   268,   634,  1008,   373,   423,  1312,   130,   426,
    1130,  1300,   754,   458,   800,   458,   224,   728,  1300,   729,
     730,   408,   460,  1272,  1276,  1255,  1336,  1280,  1289,  1199,
    1200,   509,   635,   635,  1228,   162,   166,  1326,     9,  1126,
    1127,  1197,     1,   755,   801,   729,  1200,   221,   732,   731,
     453,  1289,  1204,   115,   671,   437,   628,  1199,  1200,   263,
     390,   342,  1303,   309,   343,   364,  1128,  1127,   458,    62,
      90,    91,   324,   458,   756,   757,   760,  1289,  1345,    32,
      35,    38,    45,    46,   161,   190,   196,   198,   209,   212,
     244,   253,   266,   308,   321,   350,   376,   383,   400,   453,
     463,   480,   503,   715,   716,   720,   735,   737,   739,   802,
     809,   810,  1289,  1323,   732,  1274,  1291,  1239,  1300,   507,
     312,  1300,   309,  1232,  1289,  1289,  1269,   249,   250,  1294,
     769,   204,   177,   758,  1281,  1289,   253,   394,   803,   804,
    1289,  1224,  1297,  1235,    57,  1228,  1228,   204,  1297,   510,
     733,   734,  1289,  1200,     9,   421,   516,   589,   275,   357,
     359,  1330,   171,   226,   234,   320,  1124,  1190,  1219,  1289,
    1269,   761,  1237,   697,   770,   759,  1228,  1221,  1221,  1289,
    1316,  1289,  1289,   734,  1199,  1241,  1330,   762,   253,   255,
    1329,   510,   698,  1228,   271,   332,   465,   470,   805,   806,
     807,  1219,   805,   806,   808,   178,   188,   211,   241,   763,
     764,   765,   766,   767,   768,  1237,   771,  1221,  1221,   107,
     117,  1338,  1289,  1289,    55,    90,  1338,  1339,  1324,   772,
    1289,  1237,  1237,   211,  1289,  1289,   210,   253,   255,   286,
     308,   336,   419,   436,   458,   479,   498,   505,   715,   720,
     721,   735,   737,   739,   773,   774,   778,   779,   782,   783,
     784,   785,   786,   787,   792,   793,   794,  1323,  1324,  1237,
    1237,  1237,   222,  1286,   302,   303,  1298,  1269,   210,  1235,
     507,  1289,  1299,  1289,  1289,  1228,   287,   332,   788,   789,
    1237,   332,   790,   791,  1237,  1298,  1269,  1290,  1289,   724,
    1167,  1214,  1212,  1214,    54,    90,   324,   328,   329,   372,
     387,   388,   775,  1338,  1339,  1340,  1341,  1342,  1343,  1344,
     120,   196,  1235,   789,  1235,   791,  1290,   789,  1316,  1262,
     378,   780,  1214,   188,   188,   211,   188,   211,   177,   776,
    1228,   776,  1214,   726,  1300,   316,   777,   777,    49,   430,
     722,   177,   781,  1228,   324,  1214,  1235
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   518,   520,   519,   521,   521,   522,   522,   523,   523,
     525,   524,   526,   527,   528,   528,   529,   529,   530,   531,
     532,   533,   533,   535,   534,   536,   537,   537,   538,   538,
     539,   539,   540,   540,   541,   541,   541,   541,   542,   542,
     543,   544,   544,   545,   546,   546,   547,   547,   547,   547,
     547,   549,   548,   550,   550,   551,   551,   553,   552,   554,
     554,   554,   554,   555,   555,   556,   556,   556,   556,   557,
     558,   559,   560,   561,   561,   561,   561,   562,   562,   563,
     564,   563,   565,   565,   565,   566,   566,   567,   567,   567,
     568,   568,   569,   569,   570,   570,   571,   571,   572,   572,
     573,   573,   574,   574,   574,   574,   574,   574,   574,   574,
     574,   574,   574,   574,   576,   575,   577,   577,   577,   577,
     578,   578,   579,   580,   580,   582,   581,   583,   583,   583,
     583,   583,   583,   584,   584,   585,   585,   586,   585,   587,
     587,   588,   588,   588,   588,   588,   588,   589,   589,   590,
     591,   591,   592,   593,   593,   594,   595,   595,   596,   596,
     597,   598,   598,   599,   599,   600,   601,   602,   602,   603,
     604,   605,   606,   607,   608,   609,   610,   610,   611,   611,
     612,   612,   613,   613,   615,   614,   616,   616,   617,   617,
     617,   617,   617,   617,   617,   617,   617,   617,   617,   617,
     617,   618,   618,   618,   618,   618,   619,   619,   619,   620,
     620,   620,   620,   621,   621,   622,   622,   622,   623,   623,
     624,   624,   624,   625,   626,   626,   626,   627,   628,   628,
     628,   629,   630,   631,   631,   631,   633,   632,   634,   634,
     634,   635,   635,   635,   635,   636,   636,   637,   637,   637,
     637,   638,   639,   640,   641,   641,   641,   642,   643,   644,
     644,   645,   646,   646,   646,   647,   647,   647,   648,   648,
     649,   649,   650,   651,   651,   651,   651,   653,   652,   654,
     654,   655,   656,   656,   658,   657,   659,   659,   660,   660,
     661,   661,   662,   664,   663,   663,   665,   665,   666,   666,
     667,   667,   667,   667,   667,   667,   667,   667,   667,   667,
     667,   668,   669,   669,   669,   670,   670,   670,   671,   671,
     672,   672,   673,   673,   674,   675,   675,   676,   676,   677,
     677,   678,   679,   680,   680,   681,   681,   681,   682,   683,
     684,   685,   686,   687,   688,   688,   689,   689,   690,   691,
     690,   692,   693,   692,   694,   694,   694,   695,   696,   695,
     695,   697,   698,   698,   698,   699,   700,   700,   701,   701,
     701,   701,   702,   702,   702,   702,   702,   702,   702,   702,
     702,   702,   702,   702,   702,   703,   703,   704,   704,   705,
     705,   705,   706,   706,   707,   708,   708,   709,   709,   710,
     710,   710,   710,   710,   710,   710,   710,   710,   710,   710,
     710,   710,   710,   711,   712,   713,   713,   714,   715,   716,
     716,   717,   717,   717,   717,   717,   717,   717,   717,   717,
     717,   717,   717,   717,   717,   717,   717,   717,   717,   717,
     717,   717,   717,   717,   717,   717,   717,   717,   717,   717,
     717,   717,   717,   717,   717,   717,   717,   718,   718,   719,
     719,   720,   720,   721,   722,   722,   723,   723,   724,   724,
     725,   725,   726,   726,   727,   727,   728,   728,   729,   730,
     730,   731,   731,   732,   732,   733,   733,   734,   735,   736,
     737,   738,   740,   739,   741,   741,   742,   742,   743,   743,
     744,   744,   745,   745,   746,   747,   746,   748,   749,   748,
     750,   751,   750,   752,   752,   754,   753,   755,   755,   755,
     756,   756,   756,   756,   757,   758,   759,   759,   760,   761,
     761,   761,   762,   762,   763,   763,   763,   763,   763,   764,
     765,   766,   767,   768,   769,   769,   771,   770,   772,   772,
     773,   773,   773,   773,   773,   773,   773,   773,   773,   773,
     773,   773,   773,   773,   773,   773,   774,   775,   775,   775,
     775,   775,   775,   775,   776,   776,   776,   777,   777,   778,
     779,   780,   780,   781,   781,   782,   783,   784,   785,   785,
     786,   787,   787,   788,   788,   789,   789,   789,   790,   790,
     791,   791,   792,   793,   794,   795,   796,   795,   797,   797,
     798,   798,   799,   800,   799,   799,   801,   801,   802,   802,
     802,   802,   802,   802,   802,   802,   802,   802,   802,   802,
     802,   802,   802,   802,   802,   802,   802,   802,   802,   802,
     802,   802,   802,   802,   802,   802,   802,   802,   802,   802,
     802,   802,   802,   803,   803,   804,   804,   805,   805,   806,
     806,   807,   807,   807,   808,   808,   808,   809,   810,   811,
     812,   813,   811,   814,   811,   815,   816,   815,   817,   815,
     818,   818,   819,   820,   820,   820,   821,   821,   821,   821,
     821,   821,   822,   822,   823,   823,   823,   824,   825,   824,
     826,   826,   827,   827,   827,   827,   827,   829,   828,   830,
     830,   831,   832,   833,   833,   835,   836,   834,   838,   837,
     837,   839,   839,   839,   839,   839,   839,   839,   839,   839,
     839,   839,   839,   839,   839,   839,   839,   839,   839,   839,
     839,   839,   839,   839,   839,   839,   839,   839,   839,   839,
     839,   839,   839,   839,   839,   839,   839,   839,   839,   839,
     839,   839,   839,   839,   839,   839,   839,   839,   839,   839,
     839,   839,   841,   840,   843,   842,   842,   842,   842,   842,
     842,   842,   842,   842,   842,   842,   842,   842,   842,   842,
     842,   842,   842,   842,   844,   844,   845,   845,   846,   846,
     847,   847,   847,   847,   848,   848,   849,   849,   849,   850,
     851,   851,   852,   853,   853,   853,   853,   853,   853,   853,
     853,   853,   853,   853,   853,   853,   853,   853,   853,   853,
     853,   853,   853,   853,   853,   853,   853,   853,   853,   853,
     853,   854,   854,   855,   855,   857,   856,   858,   858,   858,
     859,   859,   860,   860,   862,   861,   863,   863,   864,   864,
     866,   865,   867,   867,   868,   869,   869,   871,   870,   872,
     873,   873,   873,   873,   874,   875,   874,   876,   876,   877,
     877,   878,   878,   878,   878,   879,   879,   879,   879,   879,
     880,   880,   881,   881,   882,   882,   882,   883,   883,   884,
     884,   886,   885,   887,   887,   889,   888,   890,   890,   891,
     891,   891,   891,   891,   893,   892,   894,   895,   895,   896,
     897,   899,   898,   900,   900,   901,   901,   902,   902,   904,
     903,   905,   905,   905,   905,   905,   906,   906,   907,   907,
     909,   908,   910,   910,   911,   911,   912,   912,   912,   912,
     912,   913,   913,   913,   913,   914,   914,   915,   915,   915,
     915,   915,   915,   915,   915,   915,   915,   915,   915,   915,
     915,   915,   915,   915,   916,   916,   918,   917,   919,   919,
     919,   919,   919,   920,   920,   922,   921,   923,   925,   924,
     926,   927,   927,   928,   928,   928,   929,   929,   930,   930,
     931,   932,   933,   933,   934,   934,   935,   935,   935,   935,
     936,   936,   937,   937,   939,   938,   940,   940,   940,   940,
     940,   940,   940,   941,   941,   943,   942,   944,   946,   945,
     947,   949,   948,   950,   951,   951,   952,   954,   953,   955,
     955,   955,   956,   956,   958,   957,   959,   960,   960,   961,
     961,   961,   962,   962,   963,   963,   964,   965,   965,   965,
     965,   965,   965,   965,   966,   966,   968,   967,   969,   969,
     971,   970,   972,   973,   973,   973,   974,   974,   974,   974,
     976,   975,   977,   978,   979,   979,   980,   980,   980,   980,
     980,   980,   981,   981,   982,   982,   983,   983,   983,   983,
     983,   984,   985,   985,   986,   986,   988,   987,   990,   989,
     991,   991,   993,   992,   994,   994,   995,   995,   997,   996,
     998,   998,   999,   999,   999,   999,  1000,  1000,  1001,  1001,
    1001,  1001,  1003,  1002,  1004,  1005,  1004,  1004,  1006,  1006,
    1007,  1007,  1008,  1008,  1009,  1009,  1009,  1009,  1009,  1010,
    1010,  1011,  1011,  1012,  1012,  1013,  1015,  1014,  1016,  1017,
    1017,  1018,  1018,  1018,  1018,  1018,  1018,  1018,  1019,  1019,
    1020,  1020,  1021,  1021,  1022,  1024,  1023,  1025,  1026,  1028,
    1027,  1029,  1030,  1030,  1032,  1031,  1033,  1034,  1034,  1034,
    1035,  1035,  1036,  1038,  1037,  1039,  1039,  1040,  1040,  1041,
    1041,  1042,  1042,  1043,  1044,  1044,  1046,  1045,  1047,  1047,
    1047,  1047,  1047,  1047,  1047,  1048,  1048,  1049,  1049,  1050,
    1051,  1052,  1052,  1053,  1053,  1053,  1053,  1053,  1053,  1053,
    1053,  1054,  1054,  1055,  1056,  1056,  1057,  1058,  1058,  1059,
    1059,  1060,  1062,  1061,  1064,  1063,  1065,  1065,  1066,  1066,
    1067,  1067,  1068,  1068,  1069,  1069,  1069,  1070,  1070,  1070,
    1072,  1071,  1073,  1074,  1074,  1075,  1075,  1075,  1075,  1076,
    1076,  1076,  1076,  1076,  1076,  1077,  1078,  1078,  1079,  1079,
    1081,  1080,  1080,  1082,  1082,  1082,  1082,  1083,  1083,  1084,
    1084,  1084,  1084,  1086,  1085,  1087,  1088,  1088,  1089,  1089,
    1089,  1090,  1090,  1091,  1091,  1093,  1092,  1094,  1094,  1094,
    1095,  1095,  1096,  1097,  1097,  1099,  1098,  1100,  1100,  1102,
    1101,  1103,  1105,  1104,  1106,  1108,  1107,  1109,  1110,  1110,
    1111,  1111,  1112,  1113,  1113,  1114,  1115,  1115,  1116,  1116,
    1117,  1117,  1118,  1118,  1120,  1119,  1121,  1121,  1121,  1121,
    1121,  1122,  1123,  1123,  1124,  1124,  1124,  1124,  1124,  1125,
    1126,  1126,  1127,  1127,  1127,  1128,  1128,  1128,  1128,  1129,
    1130,  1130,  1131,  1132,  1133,  1133,  1135,  1134,  1136,  1137,
    1137,  1138,  1138,  1138,  1138,  1139,  1139,  1140,  1140,  1141,
    1141,  1142,  1143,  1143,  1144,  1144,  1145,  1145,  1146,  1146,
    1147,  1148,  1148,  1149,  1149,  1150,  1151,  1151,  1152,  1152,
    1153,  1154,  1154,  1155,  1155,  1156,  1156,  1157,  1157,  1157,
    1158,  1159,  1160,  1160,  1160,  1161,  1162,  1163,  1164,  1164,
    1165,  1165,  1166,  1166,  1167,  1168,  1170,  1169,  1171,  1171,
    1171,  1172,  1172,  1172,  1172,  1172,  1172,  1172,  1172,  1172,
    1172,  1172,  1172,  1172,  1172,  1172,  1172,  1172,  1172,  1172,
    1172,  1172,  1172,  1172,  1172,  1173,  1173,  1174,  1174,  1175,
    1175,  1176,  1177,  1178,  1178,  1179,  1179,  1179,  1180,  1180,
    1180,  1181,  1181,  1181,  1182,  1182,  1183,  1183,  1183,  1184,
    1184,  1185,  1185,  1185,  1185,  1185,  1185,  1186,  1186,  1187,
    1188,  1189,  1190,  1190,  1191,  1192,  1193,  1193,  1194,  1195,
    1195,  1196,  1197,  1197,  1197,  1198,  1199,  1199,  1200,  1201,
    1202,  1202,  1203,  1204,  1204,  1205,  1205,  1206,  1207,  1207,
    1208,  1208,  1208,  1209,  1209,  1210,  1210,  1211,  1211,  1211,
    1211,  1211,  1211,  1211,  1211,  1211,  1211,  1212,  1212,  1213,
    1213,  1213,  1214,  1214,  1214,  1214,  1214,  1214,  1214,  1215,
    1215,  1216,  1216,  1217,  1217,  1218,  1218,  1219,  1219,  1220,
    1220,  1220,  1221,  1221,  1221,  1222,  1222,  1223,  1223,  1224,
    1224,  1224,  1225,  1226,  1227,  1227,  1228,  1229,  1229,  1229,
    1229,  1230,  1231,  1231,  1231,  1231,  1232,  1232,  1233,  1234,
    1234,  1235,  1236,  1237,  1238,  1238,  1238,  1238,  1238,  1238,
    1238,  1239,  1239,  1240,  1240,  1241,  1241,  1241,  1241,  1241,
    1241,  1241,  1242,  1242,  1242,  1242,  1242,  1242,  1242,  1242,
    1242,  1242,  1242,  1242,  1243,  1243,  1244,  1244,  1244,  1245,
    1245,  1245,  1245,  1246,  1246,  1246,  1247,  1247,  1247,  1248,
    1248,  1248,  1249,  1249,  1250,  1250,  1251,  1251,  1252,  1252,
    1253,  1254,  1254,  1255,  1255,  1256,  1256,  1257,  1257,  1258,
    1258,  1259,  1259,  1259,  1260,  1260,  1261,  1261,  1261,  1262,
    1262,  1263,  1263,  1264,  1264,  1264,  1264,  1264,  1264,  1264,
    1264,  1265,  1265,  1266,  1266,  1266,  1266,  1266,  1266,  1266,
    1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,
    1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,
    1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,
    1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,
    1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,
    1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,
    1266,  1266,  1266,  1267,  1267,  1268,  1268,  1269,  1269,  1270,
    1270,  1271,  1271,  1272,  1272,  1273,  1273,  1274,  1274,  1275,
    1275,  1276,  1276,  1277,  1277,  1278,  1278,  1279,  1279,  1280,
    1280,  1281,  1281,  1282,  1282,  1283,  1283,  1284,  1284,  1285,
    1285,  1285,  1286,  1286,  1287,  1287,  1288,  1288,  1289,  1289,
    1290,  1290,  1290,  1291,  1291,  1292,  1292,  1292,  1293,  1293,
    1293,  1294,  1294,  1294,  1295,  1295,  1296,  1296,  1297,  1297,
    1298,  1298,  1298,  1299,  1299,  1300,  1300,  1301,  1301,  1301,
    1301,  1302,  1302,  1303,  1303,  1304,  1304,  1305,  1305,  1306,
    1306,  1306,  1307,  1307,  1308,  1308,  1309,  1309,  1310,  1310,
    1310,  1311,  1311,  1312,  1312,  1313,  1313,  1314,  1314,  1315,
    1315,  1316,  1316,  1317,  1317,  1318,  1318,  1318,  1319,  1319,
    1320,  1320,  1321,  1321,  1322,  1322,  1323,  1323,  1324,  1324,
    1325,  1325,  1326,  1326,  1327,  1327,  1328,  1328,  1329,  1329,
    1330,  1330,  1331,  1331,  1332,  1332,  1333,  1333,  1334,  1334,
    1335,  1335,  1336,  1336,  1337,  1337,  1337,  1338,  1338,  1339,
    1339,  1340,  1340,  1341,  1341,  1342,  1342,  1343,  1343,  1344,
    1344,  1345,  1345
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     2,     1,     1,
       0,     2,     4,     4,     0,     1,     1,     2,     3,     3,
       3,     0,     3,     0,     7,     5,     1,     1,     1,     1,
       0,     2,     0,     3,     1,     2,     1,     1,     1,     1,
       3,     0,     3,     5,     0,     3,     0,     1,     1,     2,
       2,     0,     4,     0,     3,     0,     3,     0,     4,     0,
       2,     3,     2,     1,     2,     1,     1,     1,     1,     5,
       3,     3,     4,     1,     1,     1,     1,     1,     2,     0,
       0,     4,     0,     2,     3,     1,     2,     3,     3,     3,
       0,     2,     1,     2,     0,     2,     0,     1,     2,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     3,     2,     3,     3,     1,
       0,     1,     1,     3,     4,     0,     5,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     3,     0,     4,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       0,     2,     3,     1,     2,     3,     1,     2,     1,     2,
       4,     1,     2,     1,     3,     4,     5,     0,     3,     3,
       5,     3,     4,     3,     3,     5,     0,     3,     0,     2,
       0,     2,     0,     2,     0,     6,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     5,     5,     5,     5,     1,     1,     1,     1,
       1,     1,     1,     0,     3,     0,     1,     1,     1,     1,
       0,     1,     1,     4,     1,     1,     1,     7,     0,     4,
       3,     3,     4,     0,     1,     1,     0,     5,     2,     2,
       1,     0,     4,     5,     2,     3,     1,     1,     3,     1,
       2,     4,     4,     4,     1,     3,     4,     4,     3,     1,
       1,     3,     2,     2,     2,     0,     2,     3,     1,     2,
       1,     1,     5,     0,     1,     1,     1,     0,     6,     1,
       2,     2,     0,     2,     0,     9,     0,     3,     0,     3,
       0,     2,     2,     0,     5,     3,     1,     1,     0,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     0,     1,     1,     4,     6,     9,     0,     3,
       0,     2,     0,     2,     3,     5,     5,     1,     1,     1,
       1,     3,     5,     0,     2,     1,     1,     1,     4,     2,
       2,     4,     3,     2,     2,     2,     1,     2,     0,     0,
       5,     0,     0,     2,     2,     3,     2,     1,     0,     4,
       3,     2,     0,     1,     1,     1,     0,     2,     1,     2,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     2,     2,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     0,     2,     2,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     6,     0,     2,     7,     8,     0,     2,
       0,     2,     0,     3,     0,     3,     0,     1,     1,     0,
       5,     1,     1,     0,     3,     1,     2,     1,     2,     2,
       3,     1,     0,     5,     1,     2,     1,     3,     0,     4,
       2,     4,     2,     2,     0,     0,     5,     0,     0,     5,
       0,     0,     5,     0,     2,     0,     6,     0,     2,     2,
       2,     3,     1,     1,     2,     2,     1,     2,     4,     1,
       4,     2,     0,     2,     1,     1,     1,     1,     1,     3,
       4,     4,     4,     3,     0,     2,     0,     5,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     2,
       1,     2,     1,     1,     0,     2,     2,     0,     2,     4,
       4,     0,     3,     1,     1,     3,     6,     2,     3,     2,
       2,     3,     2,     1,     2,     2,     1,     1,     1,     2,
       2,     1,     4,     2,     3,     0,     0,     5,     0,     1,
       2,     3,     1,     0,     4,     3,     0,     2,     2,     2,
       1,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     1,     5,     5,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     1,     2,     1,     2,     1,     1,     1,
       1,     0,     1,     1,     0,     1,     1,     3,     2,     0,
       0,     0,     9,     0,     4,     0,     0,     3,     0,     3,
       1,     2,     4,     0,     2,     2,     0,     3,     3,     4,
       4,     3,     0,     1,     0,     2,     2,     0,     0,     7,
       0,     2,     1,     1,     2,     1,     1,     0,     6,     0,
       2,     2,     1,     0,     1,     0,     0,     3,     0,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     0,     4,     0,     4,     3,     3,     4,     3,
       4,     3,     3,     4,     4,     3,     4,     3,     4,     5,
       3,     4,     3,     3,     1,     1,     0,     1,     1,     2,
       1,     1,     1,     2,     1,     2,     2,     2,     2,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     1,     1,     1,
       4,     3,     1,     2,     1,     1,     3,     3,     3,     3,
       3,     1,     1,     0,     1,     0,     4,     4,     5,     6,
       0,     2,     0,     1,     0,     3,     3,     4,     0,     2,
       0,     3,     1,     2,     4,     0,     2,     0,     4,     6,
       0,     1,     1,     1,     0,     0,     3,     1,     2,     2,
       3,     0,     2,     2,     2,     0,     3,     2,     2,     4,
       1,     1,     1,     1,     0,     2,     2,     0,     2,     0,
       1,     0,     3,     1,     2,     0,     3,     2,     3,     0,
       1,     3,     3,     2,     0,     4,     4,     0,     1,     1,
       1,     0,     4,     3,     2,     1,     2,     0,     1,     0,
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
       1,     4,     0,     2,     3,     3,     0,     3,     0,     3,
       3,     4,     0,     4,     4,     6,     0,     1,     0,     3,
       4,     5,     1,     1,     1,     1,     0,     3,     0,     3,
       2,     1,     0,     3,     2,     0,     4,     2,     0,     1,
       1,     1,     1,     3,     0,     2,     1,     3,     3,     0,
       3,     1,     1,     1,     3,     7,     0,     4,     7,     0,
       2,     0,     2,     2,     3,     3,     3,     2,     0,     3,
       1,     1,     0,     1,     1,     0,     3,     2,     1,     0,
       4,     4,     0,     1,     0,     4,     4,     0,     2,     3,
       0,     1,     1,     0,     4,     4,     6,     0,     2,     0,
       2,     1,     2,     3,     0,     1,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       3,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     4,     3,     4,     1,     2,     3,     1,     2,     3,
       3,     4,     0,     3,     0,     7,     0,     5,     0,     2,
       0,     2,     0,     3,     0,     2,     4,     0,     2,     4,
       0,     4,     4,     0,     3,     0,     4,     1,     1,     1,
       2,     2,     2,     2,     1,     1,     2,     1,     0,     1,
       0,     4,     2,     0,     2,     4,     4,     0,     1,     1,
       1,     1,     1,     0,     4,     5,     1,     2,     1,     3,
       3,     0,     4,     0,     1,     0,     4,     4,     6,     6,
       0,     1,     2,     0,     1,     0,     3,     1,     2,     0,
       3,     5,     0,     3,     2,     0,     4,     6,     0,     3,
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
#line 1893 "parser.y" /* yacc.c:1646  */
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
#line 6742 "parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 1905 "parser.y" /* yacc.c:1646  */
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
#line 6765 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 1941 "parser.y" /* yacc.c:1646  */
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
#line 6789 "parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 1992 "parser.y" /* yacc.c:1646  */
    {
	first_nested_program = 0;
	clean_up_program ((yyvsp[-1]), CB_PROGRAM_TYPE);
  }
#line 6798 "parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 2000 "parser.y" /* yacc.c:1646  */
    {
	  clean_up_program ((yyvsp[-1]), CB_FUNCTION_TYPE);
  }
#line 6806 "parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 2022 "parser.y" /* yacc.c:1646  */
    {
	if (set_up_program ((yyvsp[-1]), (yyvsp[0]), CB_PROGRAM_TYPE)) {
		YYABORT;
	}
  }
#line 6816 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 2028 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 6824 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 2035 "parser.y" /* yacc.c:1646  */
    {
	if (set_up_program ((yyvsp[-2]), (yyvsp[-1]), CB_FUNCTION_TYPE)) {
		YYABORT;
	}
	set_up_func_prototype ((yyvsp[-2]), (yyvsp[-1]), 1);
	cobc_cs_check = 0;
  }
#line 6836 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 2046 "parser.y" /* yacc.c:1646  */
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
#line 6851 "parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 2065 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 6857 "parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 2066 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6863 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 2075 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 6876 "parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 2084 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 6889 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 2098 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_initial = 1;
  }
#line 6897 "parser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 2102 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_recursive = 1;
  }
#line 6905 "parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 2118 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
#line 6913 "parser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 2135 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_CONFIGURATION_SECTION;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "CONFIGURATION SECTION");
	}
  }
#line 6925 "parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 2149 "parser.y" /* yacc.c:1646  */
    {
	if (warningopt && (check_comp_duplicate & SYN_CLAUSE_2)) {
		cb_warning (_("Phrases in non-standard order"));
	}
  }
#line 6935 "parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 2161 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("SOURCE-COMPUTER", SYN_CLAUSE_1, &check_comp_duplicate);
  }
#line 6945 "parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 2176 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_debugging_line, "DEBUGGING MODE");
	current_program->flag_debugging = 1;
	needs_debug_item = 1;
	cobc_cs_check = 0;
	cb_build_debug_item ();
  }
#line 6957 "parser.c" /* yacc.c:1646  */
    break;

  case 57:
#line 2189 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2, &check_comp_duplicate);
  }
#line 6967 "parser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 2218 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
#line 6975 "parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 2226 "parser.y" /* yacc.c:1646  */
    {
	current_program->collating_sequence = (yyvsp[0]);
  }
#line 6983 "parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 2233 "parser.y" /* yacc.c:1646  */
    {
	/* Ignore */
  }
#line 6991 "parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 2240 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->classification) {
		cb_error (_("Duplicate CLASSIFICATION clause"));
	} else {
		current_program->classification = (yyvsp[0]);
	}
  }
#line 7003 "parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 2251 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7011 "parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 2255 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7019 "parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 2259 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 7027 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 2263 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 7035 "parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 2277 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  }
#line 7044 "parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 2282 "parser.y" /* yacc.c:1646  */
    {
	cobc_in_repository = 0;
  }
#line 7052 "parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 2290 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 7060 "parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 2302 "parser.y" /* yacc.c:1646  */
    {
	functions_are_all = 1;
  }
#line 7068 "parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 2306 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-1]) != cb_error_node) {
		set_up_func_prototype ((yyvsp[-1]), (yyvsp[0]), 0);
	}
  }
#line 7078 "parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 2316 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7086 "parser.c" /* yacc.c:1646  */
    break;

  case 91:
#line 2320 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7094 "parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 2327 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 7103 "parser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 2332 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 7112 "parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 2343 "parser.y" /* yacc.c:1646  */
    {
	check_duplicate = 0;
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	header_check |= COBC_HD_SPECIAL_NAMES;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	}
  }
#line 7126 "parser.c" /* yacc.c:1646  */
    break;

  case 114:
#line 2388 "parser.y" /* yacc.c:1646  */
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
#line 7154 "parser.c" /* yacc.c:1646  */
    break;

  case 116:
#line 2416 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_DEVICE_CONSOLE) {
			cb_error_x (save_tree, _("Invalid CRT clause"));
		} else {
			current_program->flag_console_is_crt = 1;
		}
	}
  }
#line 7168 "parser.c" /* yacc.c:1646  */
    break;

  case 117:
#line 2426 "parser.y" /* yacc.c:1646  */
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
#line 7185 "parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 2439 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree && CB_VALID_TREE ((yyvsp[-1]))) {
		cb_define ((yyvsp[-1]), save_tree);
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
				(yyvsp[-1]), save_tree);
	}
  }
#line 7197 "parser.c" /* yacc.c:1646  */
    break;

  case 122:
#line 2455 "parser.y" /* yacc.c:1646  */
    {
	  check_on_off_duplicate = 0;
  }
#line 7205 "parser.c" /* yacc.c:1646  */
    break;

  case 123:
#line 2462 "parser.y" /* yacc.c:1646  */
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
#line 7224 "parser.c" /* yacc.c:1646  */
    break;

  case 124:
#line 2477 "parser.y" /* yacc.c:1646  */
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
#line 7243 "parser.c" /* yacc.c:1646  */
    break;

  case 125:
#line 2497 "parser.y" /* yacc.c:1646  */
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
#line 7260 "parser.c" /* yacc.c:1646  */
    break;

  case 126:
#line 2510 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		current_program->alphabet_name_list =
			cb_list_add (current_program->alphabet_name_list, (yyvsp[-2]));
	}
	cobc_cs_check = 0;
  }
#line 7272 "parser.c" /* yacc.c:1646  */
    break;

  case 127:
#line 2521 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
#line 7282 "parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 2527 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 7292 "parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 2533 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 7302 "parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 2539 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
#line 7312 "parser.c" /* yacc.c:1646  */
    break;

  case 131:
#line 2545 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 7322 "parser.c" /* yacc.c:1646  */
    break;

  case 132:
#line 2551 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[0]);
	}
  }
#line 7333 "parser.c" /* yacc.c:1646  */
    break;

  case 133:
#line 2561 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 7341 "parser.c" /* yacc.c:1646  */
    break;

  case 134:
#line 2565 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 7349 "parser.c" /* yacc.c:1646  */
    break;

  case 135:
#line 2572 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7357 "parser.c" /* yacc.c:1646  */
    break;

  case 136:
#line 2576 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 7365 "parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 2580 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[-1]));
  }
#line 7373 "parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 2584 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 7381 "parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 2591 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 7389 "parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 2595 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-3]), (yyvsp[0]));
  }
#line 7397 "parser.c" /* yacc.c:1646  */
    break;

  case 141:
#line 2601 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 7403 "parser.c" /* yacc.c:1646  */
    break;

  case 142:
#line 2602 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 7409 "parser.c" /* yacc.c:1646  */
    break;

  case 143:
#line 2603 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 7415 "parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 2604 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 7421 "parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 2605 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_high; }
#line 7427 "parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 2606 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_low; }
#line 7433 "parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 2610 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 7439 "parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 2611 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 7445 "parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 2619 "parser.y" /* yacc.c:1646  */
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
#line 7460 "parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 2633 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7468 "parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 2637 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7476 "parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 2645 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7484 "parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 2652 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7492 "parser.c" /* yacc.c:1646  */
    break;

  case 154:
#line 2656 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
	} else {
		(yyval) = (yyvsp[-1]);
	}
  }
#line 7504 "parser.c" /* yacc.c:1646  */
    break;

  case 155:
#line 2667 "parser.y" /* yacc.c:1646  */
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
#line 7525 "parser.c" /* yacc.c:1646  */
    break;

  case 156:
#line 2687 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = NULL;
	} else {
		(yyval) = CB_LIST_INIT ((yyvsp[0]));
	}
  }
#line 7537 "parser.c" /* yacc.c:1646  */
    break;

  case 157:
#line 2695 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = (yyvsp[-1]);
	} else {
		(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
	}
  }
#line 7549 "parser.c" /* yacc.c:1646  */
    break;

  case 158:
#line 2705 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 7555 "parser.c" /* yacc.c:1646  */
    break;

  case 159:
#line 2706 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 7561 "parser.c" /* yacc.c:1646  */
    break;

  case 160:
#line 2713 "parser.y" /* yacc.c:1646  */
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
#line 7583 "parser.c" /* yacc.c:1646  */
    break;

  case 161:
#line 2733 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 7589 "parser.c" /* yacc.c:1646  */
    break;

  case 162:
#line 2734 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 7595 "parser.c" /* yacc.c:1646  */
    break;

  case 163:
#line 2739 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7603 "parser.c" /* yacc.c:1646  */
    break;

  case 164:
#line 2743 "parser.y" /* yacc.c:1646  */
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
#line 7623 "parser.c" /* yacc.c:1646  */
    break;

  case 165:
#line 2764 "parser.y" /* yacc.c:1646  */
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
#line 7645 "parser.c" /* yacc.c:1646  */
    break;

  case 166:
#line 2787 "parser.y" /* yacc.c:1646  */
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
#line 7726 "parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 2868 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7734 "parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 2872 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7742 "parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 2881 "parser.y" /* yacc.c:1646  */
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
#line 7759 "parser.c" /* yacc.c:1646  */
    break;

  case 170:
#line 2900 "parser.y" /* yacc.c:1646  */
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
#line 7774 "parser.c" /* yacc.c:1646  */
    break;

  case 171:
#line 2916 "parser.y" /* yacc.c:1646  */
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
#line 7790 "parser.c" /* yacc.c:1646  */
    break;

  case 172:
#line 2934 "parser.y" /* yacc.c:1646  */
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
#line 7806 "parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 2952 "parser.y" /* yacc.c:1646  */
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
#line 7822 "parser.c" /* yacc.c:1646  */
    break;

  case 174:
#line 2969 "parser.y" /* yacc.c:1646  */
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
#line 7838 "parser.c" /* yacc.c:1646  */
    break;

  case 175:
#line 2990 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_environment (current_program);
  }
#line 7846 "parser.c" /* yacc.c:1646  */
    break;

  case 177:
#line 2997 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
#line 7855 "parser.c" /* yacc.c:1646  */
    break;

  case 179:
#line 3005 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
#line 7865 "parser.c" /* yacc.c:1646  */
    break;

  case 181:
#line 3014 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  }
#line 7875 "parser.c" /* yacc.c:1646  */
    break;

  case 184:
#line 3029 "parser.y" /* yacc.c:1646  */
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
#line 7901 "parser.c" /* yacc.c:1646  */
    break;

  case 185:
#line 3051 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE ((yyvsp[-3]))) {
		validate_file (current_file, (yyvsp[-3]));
	}
  }
#line 7911 "parser.c" /* yacc.c:1646  */
    break;

  case 201:
#line 3083 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
  }
#line 7921 "parser.c" /* yacc.c:1646  */
    break;

  case 202:
#line 3089 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	if ((yyvsp[0])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	} else {
		current_file->flag_fileid = 1;
	}
  }
#line 7935 "parser.c" /* yacc.c:1646  */
    break;

  case 203:
#line 3099 "parser.y" /* yacc.c:1646  */
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
#line 7952 "parser.c" /* yacc.c:1646  */
    break;

  case 204:
#line 3112 "parser.y" /* yacc.c:1646  */
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
#line 7969 "parser.c" /* yacc.c:1646  */
    break;

  case 205:
#line 3125 "parser.y" /* yacc.c:1646  */
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
#line 7997 "parser.c" /* yacc.c:1646  */
    break;

  case 206:
#line 3151 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 8003 "parser.c" /* yacc.c:1646  */
    break;

  case 207:
#line 3152 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 8009 "parser.c" /* yacc.c:1646  */
    break;

  case 208:
#line 3153 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int4; }
#line 8015 "parser.c" /* yacc.c:1646  */
    break;

  case 214:
#line 3165 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_line_adv = 1;
  }
#line 8023 "parser.c" /* yacc.c:1646  */
    break;

  case 216:
#line 3172 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_ext_assign = 1;
  }
#line 8031 "parser.c" /* yacc.c:1646  */
    break;

  case 220:
#line 3185 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8039 "parser.c" /* yacc.c:1646  */
    break;

  case 223:
#line 3197 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2, &check_duplicate);
  }
#line 8048 "parser.c" /* yacc.c:1646  */
    break;

  case 224:
#line 3204 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
#line 8054 "parser.c" /* yacc.c:1646  */
    break;

  case 225:
#line 3205 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_DYNAMIC; }
#line 8060 "parser.c" /* yacc.c:1646  */
    break;

  case 226:
#line 3206 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_RANDOM; }
#line 8066 "parser.c" /* yacc.c:1646  */
    break;

  case 227:
#line 3214 "parser.y" /* yacc.c:1646  */
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
#line 8091 "parser.c" /* yacc.c:1646  */
    break;

  case 228:
#line 3237 "parser.y" /* yacc.c:1646  */
    { }
#line 8097 "parser.c" /* yacc.c:1646  */
    break;

  case 229:
#line 3240 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("SUPPRESS WHEN ALL");
  }
#line 8105 "parser.c" /* yacc.c:1646  */
    break;

  case 230:
#line 3245 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("SUPPRESS WHEN SPACE/ZERO");
  }
#line 8113 "parser.c" /* yacc.c:1646  */
    break;

  case 231:
#line 3255 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3, &check_duplicate);
	PENDING ("COLLATING SEQUENCE");
  }
#line 8122 "parser.c" /* yacc.c:1646  */
    break;

  case 232:
#line 3266 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("STATUS", SYN_CLAUSE_4, &check_duplicate);
	current_file->file_status = (yyvsp[0]);
  }
#line 8131 "parser.c" /* yacc.c:1646  */
    break;

  case 236:
#line 3281 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LOCK", SYN_CLAUSE_5, &check_duplicate);
  }
#line 8139 "parser.c" /* yacc.c:1646  */
    break;

  case 238:
#line 3289 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  }
#line 8148 "parser.c" /* yacc.c:1646  */
    break;

  case 239:
#line 3294 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  }
#line 8157 "parser.c" /* yacc.c:1646  */
    break;

  case 240:
#line 3299 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  }
#line 8166 "parser.c" /* yacc.c:1646  */
    break;

  case 243:
#line 3308 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
#line 8174 "parser.c" /* yacc.c:1646  */
    break;

  case 244:
#line 3312 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
	PENDING ("WITH ROLLBACK");
  }
#line 8183 "parser.c" /* yacc.c:1646  */
    break;

  case 247:
#line 3328 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_INDEXED;
  }
#line 8192 "parser.c" /* yacc.c:1646  */
    break;

  case 248:
#line 3333 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
#line 8201 "parser.c" /* yacc.c:1646  */
    break;

  case 249:
#line 3338 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_RELATIVE;
  }
#line 8210 "parser.c" /* yacc.c:1646  */
    break;

  case 250:
#line 3343 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
#line 8219 "parser.c" /* yacc.c:1646  */
    break;

  case 251:
#line 3354 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PADDING", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
#line 8228 "parser.c" /* yacc.c:1646  */
    break;

  case 252:
#line 3365 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8, &check_duplicate);
  }
#line 8236 "parser.c" /* yacc.c:1646  */
    break;

  case 253:
#line 3375 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9, &check_duplicate);
	current_file->key = (yyvsp[0]);
  }
#line 8245 "parser.c" /* yacc.c:1646  */
    break;

  case 254:
#line 3382 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8251 "parser.c" /* yacc.c:1646  */
    break;

  case 255:
#line 3383 "parser.y" /* yacc.c:1646  */
    { PENDING ("SPLIT KEYS"); }
#line 8257 "parser.c" /* yacc.c:1646  */
    break;

  case 256:
#line 3384 "parser.y" /* yacc.c:1646  */
    { PENDING ("SPLIT KEYS"); }
#line 8263 "parser.c" /* yacc.c:1646  */
    break;

  case 257:
#line 3391 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10, &check_duplicate);
	current_file->key = (yyvsp[0]);
  }
#line 8272 "parser.c" /* yacc.c:1646  */
    break;

  case 258:
#line 3402 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11, &check_duplicate);
  }
#line 8280 "parser.c" /* yacc.c:1646  */
    break;

  case 261:
#line 3416 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SHARING", SYN_CLAUSE_12, &check_duplicate);
	current_file->sharing = (yyvsp[0]);
  }
#line 8289 "parser.c" /* yacc.c:1646  */
    break;

  case 262:
#line 3423 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8295 "parser.c" /* yacc.c:1646  */
    break;

  case 263:
#line 3424 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 8301 "parser.c" /* yacc.c:1646  */
    break;

  case 264:
#line 3425 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8307 "parser.c" /* yacc.c:1646  */
    break;

  case 267:
#line 3434 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 8315 "parser.c" /* yacc.c:1646  */
    break;

  case 272:
#line 3453 "parser.y" /* yacc.c:1646  */
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
#line 8344 "parser.c" /* yacc.c:1646  */
    break;

  case 273:
#line 3480 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 8350 "parser.c" /* yacc.c:1646  */
    break;

  case 274:
#line 3481 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 8356 "parser.c" /* yacc.c:1646  */
    break;

  case 275:
#line 3482 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 8362 "parser.c" /* yacc.c:1646  */
    break;

  case 276:
#line 3483 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 8368 "parser.c" /* yacc.c:1646  */
    break;

  case 277:
#line 3490 "parser.y" /* yacc.c:1646  */
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
#line 8377 "parser.c" /* yacc.c:1646  */
    break;

  case 278:
#line 3495 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	cb_verify (cb_multiple_file_tape_clause, "MULTIPLE FILE TAPE");
	cobc_cs_check = 0;
  }
#line 8389 "parser.c" /* yacc.c:1646  */
    break;

  case 284:
#line 3524 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_WORKING;
  }
#line 8397 "parser.c" /* yacc.c:1646  */
    break;

  case 285:
#line 3532 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_data (current_program);
  }
#line 8405 "parser.c" /* yacc.c:1646  */
    break;

  case 287:
#line 3539 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_DATA_DIVISION;
  }
#line 8413 "parser.c" /* yacc.c:1646  */
    break;

  case 289:
#line 3548 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
#line 8423 "parser.c" /* yacc.c:1646  */
    break;

  case 292:
#line 3562 "parser.y" /* yacc.c:1646  */
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
#line 8441 "parser.c" /* yacc.c:1646  */
    break;

  case 293:
#line 3581 "parser.y" /* yacc.c:1646  */
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
#line 8461 "parser.c" /* yacc.c:1646  */
    break;

  case 295:
#line 3598 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 8469 "parser.c" /* yacc.c:1646  */
    break;

  case 296:
#line 3605 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8477 "parser.c" /* yacc.c:1646  */
    break;

  case 297:
#line 3609 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 8485 "parser.c" /* yacc.c:1646  */
    break;

  case 300:
#line 3620 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("EXTERNAL", SYN_CLAUSE_1, &check_duplicate);
#if	0	/* RXWRXW - Global/External */
	if (current_file->flag_global) {
		cb_error (_("File cannot have both EXTERNAL and GLOBAL clauses"));
	}
#endif
	current_file->flag_external = 1;
  }
#line 8499 "parser.c" /* yacc.c:1646  */
    break;

  case 301:
#line 3630 "parser.y" /* yacc.c:1646  */
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
#line 8518 "parser.c" /* yacc.c:1646  */
    break;

  case 311:
#line 3660 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3, &check_duplicate);
	/* ignore */
  }
#line 8527 "parser.c" /* yacc.c:1646  */
    break;

  case 315:
#line 3673 "parser.y" /* yacc.c:1646  */
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
#line 8551 "parser.c" /* yacc.c:1646  */
    break;

  case 316:
#line 3693 "parser.y" /* yacc.c:1646  */
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
#line 8589 "parser.c" /* yacc.c:1646  */
    break;

  case 317:
#line 3728 "parser.y" /* yacc.c:1646  */
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
#line 8621 "parser.c" /* yacc.c:1646  */
    break;

  case 319:
#line 3759 "parser.y" /* yacc.c:1646  */
    {
	current_file->record_depending = (yyvsp[0]);
  }
#line 8629 "parser.c" /* yacc.c:1646  */
    break;

  case 320:
#line 3765 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8635 "parser.c" /* yacc.c:1646  */
    break;

  case 321:
#line 3766 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8641 "parser.c" /* yacc.c:1646  */
    break;

  case 322:
#line 3770 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8647 "parser.c" /* yacc.c:1646  */
    break;

  case 323:
#line 3771 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8653 "parser.c" /* yacc.c:1646  */
    break;

  case 324:
#line 3779 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LABEL", SYN_CLAUSE_5, &check_duplicate);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
#line 8662 "parser.c" /* yacc.c:1646  */
    break;

  case 325:
#line 3790 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
#line 8671 "parser.c" /* yacc.c:1646  */
    break;

  case 326:
#line 3795 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
	if (!current_file->assign) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	}
  }
#line 8683 "parser.c" /* yacc.c:1646  */
    break;

  case 331:
#line 3818 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("DATA", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
#line 8692 "parser.c" /* yacc.c:1646  */
    break;

  case 332:
#line 3830 "parser.y" /* yacc.c:1646  */
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
#line 8711 "parser.c" /* yacc.c:1646  */
    break;

  case 338:
#line 3858 "parser.y" /* yacc.c:1646  */
    {
	current_file->latfoot = (yyvsp[0]);
  }
#line 8719 "parser.c" /* yacc.c:1646  */
    break;

  case 339:
#line 3865 "parser.y" /* yacc.c:1646  */
    {
	current_file->lattop = (yyvsp[0]);
  }
#line 8727 "parser.c" /* yacc.c:1646  */
    break;

  case 340:
#line 3872 "parser.y" /* yacc.c:1646  */
    {
	current_file->latbot = (yyvsp[0]);
  }
#line 8735 "parser.c" /* yacc.c:1646  */
    break;

  case 341:
#line 3881 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9, &check_duplicate);
	/* ignore */
  }
#line 8745 "parser.c" /* yacc.c:1646  */
    break;

  case 342:
#line 3893 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CODE SET", SYN_CLAUSE_10, &check_duplicate);
	if (CB_VALID_TREE ((yyvsp[0]))) {
		cb_tree			x;
		struct cb_alphabet_name	*al;

		x = cb_ref ((yyvsp[0]));
		if (current_file->organization != COB_ORG_LINE_SEQUENTIAL &&
		    current_file->organization != COB_ORG_SEQUENTIAL) {
			cb_error (_("CODE-SET clause invalid for file type"));
		}
		if (!CB_ALPHABET_NAME_P (x)) {
			cb_error_x ((yyvsp[0]), _("Alphabet-name is expected '%s'"), cb_name ((yyvsp[0])));
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
					cb_warning_x ((yyvsp[0]), _("Ignoring CODE-SET '%s'"),
						      cb_name ((yyvsp[0])));
				}
				break;
#else
			case CB_ALPHABET_EBCDIC:
			case CB_ALPHABET_CUSTOM:
				current_file->code_set = al;
				break;
			default:
				if (warningopt) {
					cb_warning_x ((yyvsp[0]), _("Ignoring CODE-SET '%s'"),
						      cb_name ((yyvsp[0])));
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
#line 8796 "parser.c" /* yacc.c:1646  */
    break;

  case 343:
#line 3945 "parser.y" /* yacc.c:1646  */
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
#line 8812 "parser.c" /* yacc.c:1646  */
    break;

  case 346:
#line 3965 "parser.y" /* yacc.c:1646  */
    {
	current_report = build_report ((yyvsp[0]));
	current_report->file = current_file;
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
#line 8826 "parser.c" /* yacc.c:1646  */
    break;

  case 347:
#line 3975 "parser.y" /* yacc.c:1646  */
    {
	current_report = build_report ((yyvsp[0]));
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
#line 8839 "parser.c" /* yacc.c:1646  */
    break;

  case 349:
#line 3990 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
#line 8849 "parser.c" /* yacc.c:1646  */
    break;

  case 350:
#line 3996 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[0])));
	}
  }
#line 8859 "parser.c" /* yacc.c:1646  */
    break;

  case 351:
#line 4005 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8867 "parser.c" /* yacc.c:1646  */
    break;

  case 352:
#line 4008 "parser.y" /* yacc.c:1646  */
    {
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 8877 "parser.c" /* yacc.c:1646  */
    break;

  case 353:
#line 4014 "parser.y" /* yacc.c:1646  */
    {
	struct cb_field *p;

	for (p = description_field; p; p = p->sister) {
		cb_validate_field (p);
	}
	(yyval) = CB_TREE (description_field);
  }
#line 8890 "parser.c" /* yacc.c:1646  */
    break;

  case 358:
#line 4034 "parser.y" /* yacc.c:1646  */
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
#line 8909 "parser.c" /* yacc.c:1646  */
    break;

  case 359:
#line 4049 "parser.y" /* yacc.c:1646  */
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
#line 8933 "parser.c" /* yacc.c:1646  */
    break;

  case 360:
#line 4069 "parser.y" /* yacc.c:1646  */
    {
	/* Free tree assocated with level number */
	cobc_parse_free ((yyvsp[-2]));
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 8947 "parser.c" /* yacc.c:1646  */
    break;

  case 361:
#line 4082 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8955 "parser.c" /* yacc.c:1646  */
    break;

  case 362:
#line 4089 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 8965 "parser.c" /* yacc.c:1646  */
    break;

  case 363:
#line 4095 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 8975 "parser.c" /* yacc.c:1646  */
    break;

  case 364:
#line 4101 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	qualifier = (yyvsp[0]);
	non_const_word = 0;
  }
#line 8985 "parser.c" /* yacc.c:1646  */
    break;

  case 365:
#line 4110 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	qualifier = (yyvsp[0]);
	non_const_word = 0;
  }
#line 8995 "parser.c" /* yacc.c:1646  */
    break;

  case 366:
#line 4119 "parser.y" /* yacc.c:1646  */
    {
	(yyval)= NULL;
  }
#line 9003 "parser.c" /* yacc.c:1646  */
    break;

  case 367:
#line 4123 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
		(yyval)= NULL;
	} else {
		(yyval) = cb_null;
	}
  }
#line 9016 "parser.c" /* yacc.c:1646  */
    break;

  case 368:
#line 4134 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9022 "parser.c" /* yacc.c:1646  */
    break;

  case 369:
#line 4135 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 9028 "parser.c" /* yacc.c:1646  */
    break;

  case 370:
#line 4136 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 9034 "parser.c" /* yacc.c:1646  */
    break;

  case 371:
#line 4137 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 9040 "parser.c" /* yacc.c:1646  */
    break;

  case 372:
#line 4142 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 9048 "parser.c" /* yacc.c:1646  */
    break;

  case 373:
#line 4146 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 9056 "parser.c" /* yacc.c:1646  */
    break;

  case 374:
#line 4150 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 9064 "parser.c" /* yacc.c:1646  */
    break;

  case 375:
#line 4154 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int4;
  }
#line 9072 "parser.c" /* yacc.c:1646  */
    break;

  case 376:
#line 4158 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 9080 "parser.c" /* yacc.c:1646  */
    break;

  case 377:
#line 4162 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(long));
  }
#line 9088 "parser.c" /* yacc.c:1646  */
    break;

  case 378:
#line 4166 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(void *));
  }
#line 9096 "parser.c" /* yacc.c:1646  */
    break;

  case 379:
#line 4170 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(float));
  }
#line 9104 "parser.c" /* yacc.c:1646  */
    break;

  case 380:
#line 4174 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(double));
  }
#line 9112 "parser.c" /* yacc.c:1646  */
    break;

  case 381:
#line 4178 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (4);
  }
#line 9120 "parser.c" /* yacc.c:1646  */
    break;

  case 382:
#line 4182 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 9128 "parser.c" /* yacc.c:1646  */
    break;

  case 383:
#line 4186 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (16);
  }
#line 9136 "parser.c" /* yacc.c:1646  */
    break;

  case 384:
#line 4190 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 9148 "parser.c" /* yacc.c:1646  */
    break;

  case 394:
#line 4222 "parser.y" /* yacc.c:1646  */
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
#line 9175 "parser.c" /* yacc.c:1646  */
    break;

  case 395:
#line 4248 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 9183 "parser.c" /* yacc.c:1646  */
    break;

  case 396:
#line 4252 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("CONSTANT FROM clause");
	(yyval) = NULL;
  }
#line 9192 "parser.c" /* yacc.c:1646  */
    break;

  case 397:
#line 4260 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = NULL;
  }
#line 9201 "parser.c" /* yacc.c:1646  */
    break;

  case 398:
#line 4266 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  }
#line 9210 "parser.c" /* yacc.c:1646  */
    break;

  case 413:
#line 4294 "parser.y" /* yacc.c:1646  */
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
#line 9232 "parser.c" /* yacc.c:1646  */
    break;

  case 414:
#line 4318 "parser.y" /* yacc.c:1646  */
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
#line 9260 "parser.c" /* yacc.c:1646  */
    break;

  case 415:
#line 4345 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname (current_field->name);
  }
#line 9268 "parser.c" /* yacc.c:1646  */
    break;

  case 416:
#line 4349 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[0]))->data);
  }
#line 9276 "parser.c" /* yacc.c:1646  */
    break;

  case 417:
#line 4358 "parser.y" /* yacc.c:1646  */
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
#line 9299 "parser.c" /* yacc.c:1646  */
    break;

  case 418:
#line 4383 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PICTURE", SYN_CLAUSE_4, &check_pic_duplicate);
	current_field->pic = CB_PICTURE ((yyvsp[0]));
  }
#line 9308 "parser.c" /* yacc.c:1646  */
    break;

  case 421:
#line 4399 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 9316 "parser.c" /* yacc.c:1646  */
    break;

  case 422:
#line 4403 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 9324 "parser.c" /* yacc.c:1646  */
    break;

  case 423:
#line 4407 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FLOAT);
  }
#line 9332 "parser.c" /* yacc.c:1646  */
    break;

  case 424:
#line 4411 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_DOUBLE);
  }
#line 9340 "parser.c" /* yacc.c:1646  */
    break;

  case 425:
#line 4415 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PACKED);
  }
#line 9348 "parser.c" /* yacc.c:1646  */
    break;

  case 426:
#line 4419 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 9356 "parser.c" /* yacc.c:1646  */
    break;

  case 427:
#line 4423 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_5);
  }
#line 9364 "parser.c" /* yacc.c:1646  */
    break;

  case 428:
#line 4427 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_6);
  }
#line 9372 "parser.c" /* yacc.c:1646  */
    break;

  case 429:
#line 4431 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_X);
  }
#line 9380 "parser.c" /* yacc.c:1646  */
    break;

  case 430:
#line 4435 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_DISPLAY);
  }
#line 9388 "parser.c" /* yacc.c:1646  */
    break;

  case 431:
#line 4439 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_INDEX);
  }
#line 9396 "parser.c" /* yacc.c:1646  */
    break;

  case 432:
#line 4443 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PACKED);
  }
#line 9404 "parser.c" /* yacc.c:1646  */
    break;

  case 433:
#line 4447 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 9413 "parser.c" /* yacc.c:1646  */
    break;

  case 434:
#line 4452 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 9422 "parser.c" /* yacc.c:1646  */
    break;

  case 435:
#line 4457 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 9430 "parser.c" /* yacc.c:1646  */
    break;

  case 436:
#line 4461 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 9438 "parser.c" /* yacc.c:1646  */
    break;

  case 437:
#line 4465 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
#line 9450 "parser.c" /* yacc.c:1646  */
    break;

  case 438:
#line 4473 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 9458 "parser.c" /* yacc.c:1646  */
    break;

  case 439:
#line 4477 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 9466 "parser.c" /* yacc.c:1646  */
    break;

  case 440:
#line 4481 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
#line 9478 "parser.c" /* yacc.c:1646  */
    break;

  case 441:
#line 4489 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_CHAR);
  }
#line 9486 "parser.c" /* yacc.c:1646  */
    break;

  case 442:
#line 4493 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
#line 9494 "parser.c" /* yacc.c:1646  */
    break;

  case 443:
#line 4497 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 9502 "parser.c" /* yacc.c:1646  */
    break;

  case 444:
#line 4501 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 9510 "parser.c" /* yacc.c:1646  */
    break;

  case 445:
#line 4505 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 9518 "parser.c" /* yacc.c:1646  */
    break;

  case 446:
#line 4509 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 9526 "parser.c" /* yacc.c:1646  */
    break;

  case 447:
#line 4513 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_LONG);
  }
#line 9534 "parser.c" /* yacc.c:1646  */
    break;

  case 448:
#line 4517 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
#line 9542 "parser.c" /* yacc.c:1646  */
    break;

  case 449:
#line 4521 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
#line 9554 "parser.c" /* yacc.c:1646  */
    break;

  case 450:
#line 4529 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
#line 9566 "parser.c" /* yacc.c:1646  */
    break;

  case 451:
#line 4537 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN32);
  }
#line 9574 "parser.c" /* yacc.c:1646  */
    break;

  case 452:
#line 4541 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN64);
  }
#line 9582 "parser.c" /* yacc.c:1646  */
    break;

  case 453:
#line 4545 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN128);
  }
#line 9590 "parser.c" /* yacc.c:1646  */
    break;

  case 454:
#line 4549 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_DEC64);
  }
#line 9598 "parser.c" /* yacc.c:1646  */
    break;

  case 455:
#line 4553 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_DEC128);
  }
#line 9606 "parser.c" /* yacc.c:1646  */
    break;

  case 456:
#line 4557 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("USAGE", SYN_CLAUSE_5, &check_pic_duplicate);
	PENDING ("USAGE NATIONAL");
  }
#line 9615 "parser.c" /* yacc.c:1646  */
    break;

  case 461:
#line 4577 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
#line 9625 "parser.c" /* yacc.c:1646  */
    break;

  case 462:
#line 4583 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
#line 9635 "parser.c" /* yacc.c:1646  */
    break;

  case 463:
#line 4596 "parser.y" /* yacc.c:1646  */
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
#line 9654 "parser.c" /* yacc.c:1646  */
    break;

  case 465:
#line 4614 "parser.y" /* yacc.c:1646  */
    {
	current_field->step_count = cb_get_int ((yyvsp[0]));
  }
#line 9662 "parser.c" /* yacc.c:1646  */
    break;

  case 466:
#line 4624 "parser.y" /* yacc.c:1646  */
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
#line 9697 "parser.c" /* yacc.c:1646  */
    break;

  case 467:
#line 4656 "parser.y" /* yacc.c:1646  */
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
#line 9727 "parser.c" /* yacc.c:1646  */
    break;

  case 468:
#line 4684 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9733 "parser.c" /* yacc.c:1646  */
    break;

  case 469:
#line 4685 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9739 "parser.c" /* yacc.c:1646  */
    break;

  case 470:
#line 4689 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9745 "parser.c" /* yacc.c:1646  */
    break;

  case 471:
#line 4690 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9751 "parser.c" /* yacc.c:1646  */
    break;

  case 473:
#line 4695 "parser.y" /* yacc.c:1646  */
    {
	current_field->depending = (yyvsp[0]);
  }
#line 9759 "parser.c" /* yacc.c:1646  */
    break;

  case 475:
#line 4702 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_zero, 0, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 9768 "parser.c" /* yacc.c:1646  */
    break;

  case 477:
#line 4710 "parser.y" /* yacc.c:1646  */
    {
	/* current_field->initialized = 1; */
  }
#line 9776 "parser.c" /* yacc.c:1646  */
    break;

  case 478:
#line 4717 "parser.y" /* yacc.c:1646  */
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
#line 9801 "parser.c" /* yacc.c:1646  */
    break;

  case 479:
#line 4740 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9807 "parser.c" /* yacc.c:1646  */
    break;

  case 480:
#line 4743 "parser.y" /* yacc.c:1646  */
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
#line 9824 "parser.c" /* yacc.c:1646  */
    break;

  case 481:
#line 4758 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_ASCENDING); }
#line 9830 "parser.c" /* yacc.c:1646  */
    break;

  case 482:
#line 4759 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_DESCENDING); }
#line 9836 "parser.c" /* yacc.c:1646  */
    break;

  case 484:
#line 4764 "parser.y" /* yacc.c:1646  */
    {
	current_field->index_list = (yyvsp[0]);
  }
#line 9844 "parser.c" /* yacc.c:1646  */
    break;

  case 485:
#line 4770 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 9850 "parser.c" /* yacc.c:1646  */
    break;

  case 486:
#line 4772 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 9856 "parser.c" /* yacc.c:1646  */
    break;

  case 487:
#line 4777 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 9865 "parser.c" /* yacc.c:1646  */
    break;

  case 488:
#line 4788 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("JUSTIFIED", SYN_CLAUSE_8, &check_pic_duplicate);
	current_field->flag_justified = 1;
  }
#line 9874 "parser.c" /* yacc.c:1646  */
    break;

  case 489:
#line 4799 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SYNCHRONIZED", SYN_CLAUSE_9, &check_pic_duplicate);
	current_field->flag_synchronized = 1;
  }
#line 9883 "parser.c" /* yacc.c:1646  */
    break;

  case 490:
#line 4810 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLANK", SYN_CLAUSE_10, &check_pic_duplicate);
	current_field->flag_blank_zero = 1;
  }
#line 9892 "parser.c" /* yacc.c:1646  */
    break;

  case 491:
#line 4821 "parser.y" /* yacc.c:1646  */
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
#line 9919 "parser.c" /* yacc.c:1646  */
    break;

  case 492:
#line 4849 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE", SYN_CLAUSE_12, &check_pic_duplicate);
	current_field->values = (yyvsp[0]);
  }
#line 9928 "parser.c" /* yacc.c:1646  */
    break;

  case 494:
#line 4857 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 9934 "parser.c" /* yacc.c:1646  */
    break;

  case 495:
#line 4858 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 9940 "parser.c" /* yacc.c:1646  */
    break;

  case 496:
#line 4862 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9946 "parser.c" /* yacc.c:1646  */
    break;

  case 497:
#line 4863 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0])); }
#line 9952 "parser.c" /* yacc.c:1646  */
    break;

  case 499:
#line 4868 "parser.y" /* yacc.c:1646  */
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[0]));
  }
#line 9963 "parser.c" /* yacc.c:1646  */
    break;

  case 500:
#line 4881 "parser.y" /* yacc.c:1646  */
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
#line 9980 "parser.c" /* yacc.c:1646  */
    break;

  case 501:
#line 4894 "parser.y" /* yacc.c:1646  */
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
#line 10000 "parser.c" /* yacc.c:1646  */
    break;

  case 502:
#line 4915 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY clause");
	} else {
		current_field->flag_any_length = 1;
	}
  }
#line 10013 "parser.c" /* yacc.c:1646  */
    break;

  case 503:
#line 4924 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY clause");
	} else {
		current_field->flag_any_length = 1;
		current_field->flag_any_numeric = 1;
	}
  }
#line 10027 "parser.c" /* yacc.c:1646  */
    break;

  case 505:
#line 4939 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LOCAL_STORAGE_SECTION;
	current_storage = CB_STORAGE_LOCAL;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "LOCAL-STORAGE");
	}
  }
#line 10040 "parser.c" /* yacc.c:1646  */
    break;

  case 506:
#line 4948 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->local_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 10050 "parser.c" /* yacc.c:1646  */
    break;

  case 508:
#line 4960 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
#line 10060 "parser.c" /* yacc.c:1646  */
    break;

  case 509:
#line 4966 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 10070 "parser.c" /* yacc.c:1646  */
    break;

  case 511:
#line 4977 "parser.y" /* yacc.c:1646  */
    {
	PENDING("REPORT SECTION");
	current_storage = CB_STORAGE_REPORT;
	cb_clear_real_field ();
  }
#line 10080 "parser.c" /* yacc.c:1646  */
    break;

  case 515:
#line 4993 "parser.y" /* yacc.c:1646  */
    {
	if (CB_INVALID_TREE ((yyvsp[0]))) {
		YYERROR;
	} else {
		current_report = CB_REPORT (cb_ref ((yyvsp[0])));
	}
	check_duplicate = 0;
  }
#line 10093 "parser.c" /* yacc.c:1646  */
    break;

  case 519:
#line 5008 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 10101 "parser.c" /* yacc.c:1646  */
    break;

  case 520:
#line 5015 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1, &check_duplicate);
	cb_error (_("GLOBAL is not allowed with RD"));
  }
#line 10110 "parser.c" /* yacc.c:1646  */
    break;

  case 521:
#line 5020 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CODE", SYN_CLAUSE_2, &check_duplicate);
  }
#line 10118 "parser.c" /* yacc.c:1646  */
    break;

  case 524:
#line 5031 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3, &check_duplicate);
  }
#line 10126 "parser.c" /* yacc.c:1646  */
    break;

  case 528:
#line 5050 "parser.y" /* yacc.c:1646  */
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
#line 10163 "parser.c" /* yacc.c:1646  */
    break;

  case 529:
#line 5086 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[0]));
  }
#line 10171 "parser.c" /* yacc.c:1646  */
    break;

  case 530:
#line 5090 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[-3]));
	current_report->columns = cb_get_int ((yyvsp[-1]));
  }
#line 10180 "parser.c" /* yacc.c:1646  */
    break;

  case 531:
#line 5095 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[-1]));
  }
#line 10188 "parser.c" /* yacc.c:1646  */
    break;

  case 539:
#line 5115 "parser.y" /* yacc.c:1646  */
    {
	current_report->heading = cb_get_int ((yyvsp[0]));
  }
#line 10196 "parser.c" /* yacc.c:1646  */
    break;

  case 540:
#line 5122 "parser.y" /* yacc.c:1646  */
    {
	current_report->first_detail = cb_get_int ((yyvsp[0]));
  }
#line 10204 "parser.c" /* yacc.c:1646  */
    break;

  case 541:
#line 5129 "parser.y" /* yacc.c:1646  */
    {
	current_report->last_control = cb_get_int ((yyvsp[0]));
  }
#line 10212 "parser.c" /* yacc.c:1646  */
    break;

  case 542:
#line 5136 "parser.y" /* yacc.c:1646  */
    {
	current_report->last_detail = cb_get_int ((yyvsp[0]));
  }
#line 10220 "parser.c" /* yacc.c:1646  */
    break;

  case 543:
#line 5143 "parser.y" /* yacc.c:1646  */
    {
	current_report->footing = cb_get_int ((yyvsp[0]));
  }
#line 10228 "parser.c" /* yacc.c:1646  */
    break;

  case 546:
#line 5154 "parser.y" /* yacc.c:1646  */
    {
	check_pic_duplicate = 0;
  }
#line 10236 "parser.c" /* yacc.c:1646  */
    break;

  case 566:
#line 5185 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("TYPE", SYN_CLAUSE_16, &check_pic_duplicate);
  }
#line 10244 "parser.c" /* yacc.c:1646  */
    break;

  case 579:
#line 5211 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("NEXT GROUP", SYN_CLAUSE_17, &check_pic_duplicate);
  }
#line 10252 "parser.c" /* yacc.c:1646  */
    break;

  case 580:
#line 5218 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SUM", SYN_CLAUSE_19, &check_pic_duplicate);
  }
#line 10260 "parser.c" /* yacc.c:1646  */
    break;

  case 585:
#line 5234 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
  }
#line 10268 "parser.c" /* yacc.c:1646  */
    break;

  case 587:
#line 5245 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINE", SYN_CLAUSE_21, &check_pic_duplicate);
  }
#line 10276 "parser.c" /* yacc.c:1646  */
    break;

  case 590:
#line 5257 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLUMN", SYN_CLAUSE_18, &check_pic_duplicate);
  }
#line 10284 "parser.c" /* yacc.c:1646  */
    break;

  case 602:
#line 5290 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SOURCE", SYN_CLAUSE_22, &check_pic_duplicate);
  }
#line 10292 "parser.c" /* yacc.c:1646  */
    break;

  case 603:
#line 5297 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GROUP", SYN_CLAUSE_23, &check_pic_duplicate);
  }
#line 10300 "parser.c" /* yacc.c:1646  */
    break;

  case 604:
#line 5304 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("USAGE", SYN_CLAUSE_24, &check_pic_duplicate);
  }
#line 10308 "parser.c" /* yacc.c:1646  */
    break;

  case 606:
#line 5313 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 10319 "parser.c" /* yacc.c:1646  */
    break;

  case 607:
#line 5320 "parser.y" /* yacc.c:1646  */
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
#line 10335 "parser.c" /* yacc.c:1646  */
    break;

  case 613:
#line 5345 "parser.y" /* yacc.c:1646  */
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
#line 10359 "parser.c" /* yacc.c:1646  */
    break;

  case 614:
#line 5365 "parser.y" /* yacc.c:1646  */
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
#line 10414 "parser.c" /* yacc.c:1646  */
    break;

  case 615:
#line 5416 "parser.y" /* yacc.c:1646  */
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
#line 10434 "parser.c" /* yacc.c:1646  */
    break;

  case 618:
#line 5439 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("BLANK LINE", COB_SCREEN_BLANK_LINE,
					 "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
#line 10443 "parser.c" /* yacc.c:1646  */
    break;

  case 619:
#line 5444 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN,
					 "BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
#line 10452 "parser.c" /* yacc.c:1646  */
    break;

  case 620:
#line 5449 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BELL", COB_SCREEN_BELL);
  }
#line 10460 "parser.c" /* yacc.c:1646  */
    break;

  case 621:
#line 5453 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
#line 10468 "parser.c" /* yacc.c:1646  */
    break;

  case 622:
#line 5457 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("ERASE EOL", COB_SCREEN_ERASE_EOL,
					 "ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
#line 10477 "parser.c" /* yacc.c:1646  */
    break;

  case 623:
#line 5462 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("ERASE EOS", COB_SCREEN_ERASE_EOS,
					 "ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
#line 10486 "parser.c" /* yacc.c:1646  */
    break;

  case 624:
#line 5467 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
					 "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 10495 "parser.c" /* yacc.c:1646  */
    break;

  case 625:
#line 5472 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("LOWLIGHT", COB_SCREEN_LOWLIGHT,
					 "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 10504 "parser.c" /* yacc.c:1646  */
    break;

  case 626:
#line 5477 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
#line 10512 "parser.c" /* yacc.c:1646  */
    break;

  case 627:
#line 5481 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
#line 10520 "parser.c" /* yacc.c:1646  */
    break;

  case 628:
#line 5485 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
	PENDING ("OVERLINE");
  }
#line 10529 "parser.c" /* yacc.c:1646  */
    break;

  case 629:
#line 5490 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("GRID", COB_SCREEN_GRID);
	PENDING ("GRID");
  }
#line 10538 "parser.c" /* yacc.c:1646  */
    break;

  case 630:
#line 5495 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
	PENDING ("LEFTLINE");
  }
#line 10547 "parser.c" /* yacc.c:1646  */
    break;

  case 631:
#line 5500 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("AUTO", COB_SCREEN_AUTO);
  }
#line 10555 "parser.c" /* yacc.c:1646  */
    break;

  case 632:
#line 5504 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("SECURE", COB_SCREEN_SECURE);
  }
#line 10563 "parser.c" /* yacc.c:1646  */
    break;

  case 633:
#line 5508 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  }
#line 10571 "parser.c" /* yacc.c:1646  */
    break;

  case 634:
#line 5512 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("FULL", COB_SCREEN_FULL);
  }
#line 10579 "parser.c" /* yacc.c:1646  */
    break;

  case 635:
#line 5516 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[0]);
  }
#line 10588 "parser.c" /* yacc.c:1646  */
    break;

  case 636:
#line 5521 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
#line 10596 "parser.c" /* yacc.c:1646  */
    break;

  case 637:
#line 5525 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
#line 10604 "parser.c" /* yacc.c:1646  */
    break;

  case 638:
#line 5529 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINE", SYN_CLAUSE_16, &check_pic_duplicate);
	current_field->screen_line = (yyvsp[0]);
  }
#line 10613 "parser.c" /* yacc.c:1646  */
    break;

  case 639:
#line 5534 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLUMN", SYN_CLAUSE_17, &check_pic_duplicate);
	current_field->screen_column = (yyvsp[0]);
  }
#line 10622 "parser.c" /* yacc.c:1646  */
    break;

  case 640:
#line 5539 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18, &check_pic_duplicate);
	current_field->screen_foreg = (yyvsp[0]);
  }
#line 10631 "parser.c" /* yacc.c:1646  */
    break;

  case 641:
#line 5544 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19, &check_pic_duplicate);
	current_field->screen_backg = (yyvsp[0]);
  }
#line 10640 "parser.c" /* yacc.c:1646  */
    break;

  case 650:
#line 5557 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));

	check_repeated ("USING", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[0]);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 10653 "parser.c" /* yacc.c:1646  */
    break;

  case 651:
#line 5566 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FROM", SYN_CLAUSE_21, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[0]);
  }
#line 10662 "parser.c" /* yacc.c:1646  */
    break;

  case 652:
#line 5571 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));

	check_repeated ("TO", SYN_CLAUSE_22, &check_pic_duplicate);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 10674 "parser.c" /* yacc.c:1646  */
    break;

  case 661:
#line 5602 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 10682 "parser.c" /* yacc.c:1646  */
    break;

  case 662:
#line 5606 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
#line 10690 "parser.c" /* yacc.c:1646  */
    break;

  case 663:
#line 5610 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
#line 10698 "parser.c" /* yacc.c:1646  */
    break;

  case 664:
#line 5617 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 10706 "parser.c" /* yacc.c:1646  */
    break;

  case 665:
#line 5621 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
#line 10714 "parser.c" /* yacc.c:1646  */
    break;

  case 666:
#line 5625 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
#line 10722 "parser.c" /* yacc.c:1646  */
    break;

  case 667:
#line 5633 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("OCCURS", SYN_CLAUSE_23, &check_pic_duplicate);
	current_field->occurs_max = cb_get_int ((yyvsp[-1]));
	current_field->occurs_min = current_field->occurs_max;
	current_field->indexes++;
	current_field->flag_occurs = 1;
  }
#line 10734 "parser.c" /* yacc.c:1646  */
    break;

  case 668:
#line 5644 "parser.y" /* yacc.c:1646  */
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  }
#line 10742 "parser.c" /* yacc.c:1646  */
    break;

  case 670:
#line 5653 "parser.y" /* yacc.c:1646  */
    {
	current_section = NULL;
	current_paragraph = NULL;
	check_pic_duplicate = 0;
	check_duplicate = 0;
	cobc_in_procedure = 1U;
	cb_set_system_names ();
	header_check |= COBC_HD_PROCEDURE_DIVISION;
  }
#line 10756 "parser.c" /* yacc.c:1646  */
    break;

  case 671:
#line 5663 "parser.y" /* yacc.c:1646  */
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
#line 10772 "parser.c" /* yacc.c:1646  */
    break;

  case 672:
#line 5675 "parser.y" /* yacc.c:1646  */
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
#line 10791 "parser.c" /* yacc.c:1646  */
    break;

  case 673:
#line 5690 "parser.y" /* yacc.c:1646  */
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
#line 10824 "parser.c" /* yacc.c:1646  */
    break;

  case 675:
#line 5723 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 10832 "parser.c" /* yacc.c:1646  */
    break;

  case 676:
#line 5727 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 10841 "parser.c" /* yacc.c:1646  */
    break;

  case 677:
#line 5732 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 10853 "parser.c" /* yacc.c:1646  */
    break;

  case 678:
#line 5740 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("CHAINING invalid in user FUNCTION"));
	} else {
		current_program->flag_chained = 1;
	}
  }
#line 10866 "parser.c" /* yacc.c:1646  */
    break;

  case 679:
#line 5749 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 10878 "parser.c" /* yacc.c:1646  */
    break;

  case 680:
#line 5759 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10884 "parser.c" /* yacc.c:1646  */
    break;

  case 681:
#line 5761 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 10890 "parser.c" /* yacc.c:1646  */
    break;

  case 682:
#line 5766 "parser.y" /* yacc.c:1646  */
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
#line 10914 "parser.c" /* yacc.c:1646  */
    break;

  case 684:
#line 5790 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 10922 "parser.c" /* yacc.c:1646  */
    break;

  case 685:
#line 5794 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error (_("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		PENDING (_("BY VALUE parameters"));
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 10935 "parser.c" /* yacc.c:1646  */
    break;

  case 687:
#line 5807 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO;
	}
  }
#line 10947 "parser.c" /* yacc.c:1646  */
    break;

  case 688:
#line 5815 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_4;
	}
  }
#line 10959 "parser.c" /* yacc.c:1646  */
    break;

  case 689:
#line 5823 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO | CB_SIZE_UNSIGNED;
	}
  }
#line 10971 "parser.c" /* yacc.c:1646  */
    break;

  case 690:
#line 5831 "parser.y" /* yacc.c:1646  */
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
#line 11004 "parser.c" /* yacc.c:1646  */
    break;

  case 691:
#line 5860 "parser.y" /* yacc.c:1646  */
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
#line 11037 "parser.c" /* yacc.c:1646  */
    break;

  case 692:
#line 5892 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 11045 "parser.c" /* yacc.c:1646  */
    break;

  case 693:
#line 5896 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
		(yyval) = cb_int0;
	} else {
		(yyval) = cb_int1;
	}
  }
#line 11058 "parser.c" /* yacc.c:1646  */
    break;

  case 694:
#line 5908 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
#line 11068 "parser.c" /* yacc.c:1646  */
    break;

  case 695:
#line 5914 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_main) {
		cb_error (_("RETURNING clause cannot be OMITTED for main program"));
	}
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause cannot be OMITTED for a FUNCTION"));
	}
	current_program->flag_void = 1;
  }
#line 11082 "parser.c" /* yacc.c:1646  */
    break;

  case 696:
#line 5924 "parser.y" /* yacc.c:1646  */
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
#line 11115 "parser.c" /* yacc.c:1646  */
    break;

  case 698:
#line 5956 "parser.y" /* yacc.c:1646  */
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
#line 11124 "parser.c" /* yacc.c:1646  */
    break;

  case 699:
#line 5962 "parser.y" /* yacc.c:1646  */
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
#line 11154 "parser.c" /* yacc.c:1646  */
    break;

  case 704:
#line 6000 "parser.y" /* yacc.c:1646  */
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
#line 11175 "parser.c" /* yacc.c:1646  */
    break;

  case 706:
#line 6018 "parser.y" /* yacc.c:1646  */
    {
	/* check_unreached = 0; */
  }
#line 11183 "parser.c" /* yacc.c:1646  */
    break;

  case 707:
#line 6028 "parser.y" /* yacc.c:1646  */
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
#line 11231 "parser.c" /* yacc.c:1646  */
    break;

  case 708:
#line 6072 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (CB_TREE (current_section));
  }
#line 11239 "parser.c" /* yacc.c:1646  */
    break;

  case 711:
#line 6083 "parser.y" /* yacc.c:1646  */
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
#line 11288 "parser.c" /* yacc.c:1646  */
    break;

  case 712:
#line 6131 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[0]), 0) != cb_error_node) {
		cb_error_x ((yyvsp[0]), _("Unknown statement '%s'"), CB_NAME ((yyvsp[0])));
	}
	YYERROR;
  }
#line 11301 "parser.c" /* yacc.c:1646  */
    break;

  case 713:
#line 6143 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11309 "parser.c" /* yacc.c:1646  */
    break;

  case 714:
#line 6147 "parser.y" /* yacc.c:1646  */
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
#line 11325 "parser.c" /* yacc.c:1646  */
    break;

  case 715:
#line 6165 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
#line 11335 "parser.c" /* yacc.c:1646  */
    break;

  case 716:
#line 6170 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  }
#line 11344 "parser.c" /* yacc.c:1646  */
    break;

  case 717:
#line 6175 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[-2]);
	current_statement = CB_STATEMENT ((yyvsp[-1]));
  }
#line 11354 "parser.c" /* yacc.c:1646  */
    break;

  case 718:
#line 6183 "parser.y" /* yacc.c:1646  */
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
#line 11385 "parser.c" /* yacc.c:1646  */
    break;

  case 719:
#line 6210 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11393 "parser.c" /* yacc.c:1646  */
    break;

  case 720:
#line 6214 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11401 "parser.c" /* yacc.c:1646  */
    break;

  case 770:
#line 6270 "parser.y" /* yacc.c:1646  */
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
#line 11419 "parser.c" /* yacc.c:1646  */
    break;

  case 771:
#line 6284 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cobc_cs_check = 0;
  }
#line 11428 "parser.c" /* yacc.c:1646  */
    break;

  case 772:
#line 6295 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ACCEPT", TERM_ACCEPT);
	if (cb_accept_update) {
		check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
	}
	if (cb_accept_auto) {
		check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
	}
  }
#line 11442 "parser.c" /* yacc.c:1646  */
    break;

  case 774:
#line 6310 "parser.y" /* yacc.c:1646  */
    {
	  check_duplicate = 0;
	  check_line_col_duplicate = 0;
	  line_column = NULL;
  }
#line 11452 "parser.c" /* yacc.c:1646  */
    break;

  case 775:
#line 6316 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept ((yyvsp[-3]), line_column, current_statement->attr_ptr);
  }
#line 11461 "parser.c" /* yacc.c:1646  */
    break;

  case 776:
#line 6321 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 0);
  }
#line 11469 "parser.c" /* yacc.c:1646  */
    break;

  case 777:
#line 6325 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 1);
  }
#line 11477 "parser.c" /* yacc.c:1646  */
    break;

  case 778:
#line 6329 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[-3]));
  }
#line 11486 "parser.c" /* yacc.c:1646  */
    break;

  case 779:
#line 6334 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[-2]));
  }
#line 11495 "parser.c" /* yacc.c:1646  */
    break;

  case 780:
#line 6339 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[-3]));
  }
#line 11504 "parser.c" /* yacc.c:1646  */
    break;

  case 781:
#line 6344 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[-2]));
  }
#line 11513 "parser.c" /* yacc.c:1646  */
    break;

  case 782:
#line 6349 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_day_of_week ((yyvsp[-2]));
  }
#line 11521 "parser.c" /* yacc.c:1646  */
    break;

  case 783:
#line 6353 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_escape_key ((yyvsp[-3]));
  }
#line 11529 "parser.c" /* yacc.c:1646  */
    break;

  case 784:
#line 6357 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_exception_status ((yyvsp[-3]));
  }
#line 11537 "parser.c" /* yacc.c:1646  */
    break;

  case 785:
#line 6361 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_time ((yyvsp[-2]));
  }
#line 11545 "parser.c" /* yacc.c:1646  */
    break;

  case 786:
#line 6365 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[-3]));
  }
#line 11554 "parser.c" /* yacc.c:1646  */
    break;

  case 787:
#line 6370 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_command_line ((yyvsp[-2]));
  }
#line 11562 "parser.c" /* yacc.c:1646  */
    break;

  case 788:
#line 6374 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_environment ((yyvsp[-3]));
  }
#line 11570 "parser.c" /* yacc.c:1646  */
    break;

  case 789:
#line 6378 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_get_environment ((yyvsp[-1]), (yyvsp[-4]));
  }
#line 11578 "parser.c" /* yacc.c:1646  */
    break;

  case 790:
#line 6382 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_number ((yyvsp[-2]));
  }
#line 11586 "parser.c" /* yacc.c:1646  */
    break;

  case 791:
#line 6386 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_value ((yyvsp[-3]));
  }
#line 11594 "parser.c" /* yacc.c:1646  */
    break;

  case 792:
#line 6390 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11602 "parser.c" /* yacc.c:1646  */
    break;

  case 793:
#line 6394 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_name ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11610 "parser.c" /* yacc.c:1646  */
    break;

  case 795:
#line 6402 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 11618 "parser.c" /* yacc.c:1646  */
    break;

  case 801:
#line 6420 "parser.y" /* yacc.c:1646  */
    {
	  check_repeated ("FROM CRT", SYN_CLAUSE_1, &check_duplicate);
  }
#line 11626 "parser.c" /* yacc.c:1646  */
    break;

  case 802:
#line 6424 "parser.y" /* yacc.c:1646  */
    {
	  check_repeated ("MODE IS BLOCK", SYN_CLAUSE_2, &check_duplicate);
  }
#line 11634 "parser.c" /* yacc.c:1646  */
    break;

  case 806:
#line 6437 "parser.y" /* yacc.c:1646  */
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
#line 11650 "parser.c" /* yacc.c:1646  */
    break;

  case 807:
#line 6449 "parser.y" /* yacc.c:1646  */
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
#line 11666 "parser.c" /* yacc.c:1646  */
    break;

  case 808:
#line 6461 "parser.y" /* yacc.c:1646  */
    {
	check_attr_with_conflict (_("AT screen-location"), SYN_CLAUSE_3,
				  _("LINE or COLUMN"), SYN_CLAUSE_1 | SYN_CLAUSE_2,
				  &check_line_col_duplicate);

	line_column = (yyvsp[0]);
  }
#line 11678 "parser.c" /* yacc.c:1646  */
    break;

  case 809:
#line 6471 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11684 "parser.c" /* yacc.c:1646  */
    break;

  case 810:
#line 6475 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11690 "parser.c" /* yacc.c:1646  */
    break;

  case 811:
#line 6476 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11696 "parser.c" /* yacc.c:1646  */
    break;

  case 812:
#line 6481 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11704 "parser.c" /* yacc.c:1646  */
    break;

  case 813:
#line 6488 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
  }
#line 11712 "parser.c" /* yacc.c:1646  */
    break;

  case 814:
#line 6492 "parser.y" /* yacc.c:1646  */
    {
	if (cb_accept_auto) {
		remove_attrib (COB_SCREEN_AUTO);
	}
  }
#line 11722 "parser.c" /* yacc.c:1646  */
    break;

  case 815:
#line 6498 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
#line 11730 "parser.c" /* yacc.c:1646  */
    break;

  case 816:
#line 6502 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
#line 11738 "parser.c" /* yacc.c:1646  */
    break;

  case 817:
#line 6506 "parser.y" /* yacc.c:1646  */
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
#line 11746 "parser.c" /* yacc.c:1646  */
    break;

  case 818:
#line 6510 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_FULL);
  }
#line 11754 "parser.c" /* yacc.c:1646  */
    break;

  case 819:
#line 6514 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 11764 "parser.c" /* yacc.c:1646  */
    break;

  case 820:
#line 6520 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LEFTLINE);
  }
#line 11772 "parser.c" /* yacc.c:1646  */
    break;

  case 821:
#line 6524 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWER);
  }
#line 11780 "parser.c" /* yacc.c:1646  */
    break;

  case 822:
#line 6528 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 11790 "parser.c" /* yacc.c:1646  */
    break;

  case 823:
#line 6534 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_NO_ECHO);
  }
#line 11798 "parser.c" /* yacc.c:1646  */
    break;

  case 824:
#line 6538 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
#line 11806 "parser.c" /* yacc.c:1646  */
    break;

  case 825:
#line 6542 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, (yyvsp[0]), NULL, COB_SCREEN_PROMPT);
  }
#line 11814 "parser.c" /* yacc.c:1646  */
    break;

  case 826:
#line 6546 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_PROMPT);
  }
#line 11822 "parser.c" /* yacc.c:1646  */
    break;

  case 827:
#line 6550 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REQUIRED);
  }
#line 11830 "parser.c" /* yacc.c:1646  */
    break;

  case 828:
#line 6554 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
#line 11838 "parser.c" /* yacc.c:1646  */
    break;

  case 829:
#line 6558 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_SECURE);
  }
#line 11846 "parser.c" /* yacc.c:1646  */
    break;

  case 830:
#line 6562 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 11854 "parser.c" /* yacc.c:1646  */
    break;

  case 831:
#line 6566 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 11862 "parser.c" /* yacc.c:1646  */
    break;

  case 832:
#line 6570 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
#line 11870 "parser.c" /* yacc.c:1646  */
    break;

  case 833:
#line 6574 "parser.y" /* yacc.c:1646  */
    {
	if (cb_accept_update) {
		remove_attrib (COB_SCREEN_UPDATE);
	}
  }
#line 11880 "parser.c" /* yacc.c:1646  */
    break;

  case 834:
#line 6580 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
  }
#line 11888 "parser.c" /* yacc.c:1646  */
    break;

  case 835:
#line 6584 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPPER);
  }
#line 11896 "parser.c" /* yacc.c:1646  */
    break;

  case 836:
#line 6588 "parser.y" /* yacc.c:1646  */
    {
	check_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, NULL, 0);
  }
#line 11904 "parser.c" /* yacc.c:1646  */
    break;

  case 837:
#line 6592 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 11912 "parser.c" /* yacc.c:1646  */
    break;

  case 838:
#line 6596 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, 0);
  }
#line 11920 "parser.c" /* yacc.c:1646  */
    break;

  case 839:
#line 6600 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
#line 11928 "parser.c" /* yacc.c:1646  */
    break;

  case 840:
#line 6604 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, (yyvsp[0]), NULL, NULL, 0);
  }
#line 11936 "parser.c" /* yacc.c:1646  */
    break;

  case 843:
#line 6616 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  }
#line 11944 "parser.c" /* yacc.c:1646  */
    break;

  case 844:
#line 6620 "parser.y" /* yacc.c:1646  */
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
#line 11959 "parser.c" /* yacc.c:1646  */
    break;

  case 845:
#line 6637 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ADD", TERM_ADD);
  }
#line 11967 "parser.c" /* yacc.c:1646  */
    break;

  case 847:
#line 6646 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '+', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 11975 "parser.c" /* yacc.c:1646  */
    break;

  case 848:
#line 6650 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list ((yyvsp[-4]), '+'));
  }
#line 11983 "parser.c" /* yacc.c:1646  */
    break;

  case 849:
#line 6654 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 11991 "parser.c" /* yacc.c:1646  */
    break;

  case 851:
#line 6661 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11999 "parser.c" /* yacc.c:1646  */
    break;

  case 852:
#line 6668 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  }
#line 12007 "parser.c" /* yacc.c:1646  */
    break;

  case 853:
#line 6672 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  }
#line 12015 "parser.c" /* yacc.c:1646  */
    break;

  case 854:
#line 6682 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  }
#line 12024 "parser.c" /* yacc.c:1646  */
    break;

  case 856:
#line 6691 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_allocate ((yyvsp[-2]), (yyvsp[0]), NULL, (yyvsp[-1]));
  }
#line 12032 "parser.c" /* yacc.c:1646  */
    break;

  case 857:
#line 6695 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		cb_error_x (CB_TREE (current_statement),
			    _("ALLOCATE CHARACTERS requires RETURNING clause"));
	} else {
		cb_emit_allocate (NULL, (yyvsp[0]), (yyvsp[-3]), (yyvsp[-1]));
	}
  }
#line 12045 "parser.c" /* yacc.c:1646  */
    break;

  case 858:
#line 6706 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 12051 "parser.c" /* yacc.c:1646  */
    break;

  case 859:
#line 6707 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12057 "parser.c" /* yacc.c:1646  */
    break;

  case 860:
#line 6715 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER statement");
  }
#line 12066 "parser.c" /* yacc.c:1646  */
    break;

  case 864:
#line 6729 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_alter ((yyvsp[-3]), (yyvsp[0]));
  }
#line 12074 "parser.c" /* yacc.c:1646  */
    break;

  case 867:
#line 6741 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
	call_nothing = 0;
  }
#line 12084 "parser.c" /* yacc.c:1646  */
    break;

  case 869:
#line 6757 "parser.y" /* yacc.c:1646  */
    {
	if (CB_LITERAL_P ((yyvsp[-4])) &&
	    current_program->prog_type == CB_PROGRAM_TYPE &&
	    !current_program->flag_recursive &&
	    !strcmp ((const char *)(CB_LITERAL((yyvsp[-4]))->data), current_program->orig_program_id)) {
		cb_warning_x ((yyvsp[-4]), _("Recursive program call - assuming RECURSIVE attribute"));
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
	cb_emit_call ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), (yyvsp[-5]));
  }
#line 12107 "parser.c" /* yacc.c:1646  */
    break;

  case 870:
#line 6779 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 12116 "parser.c" /* yacc.c:1646  */
    break;

  case 871:
#line 6784 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STATIC_LINK);
	cobc_cs_check = 0;
  }
#line 12125 "parser.c" /* yacc.c:1646  */
    break;

  case 872:
#line 6789 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  }
#line 12134 "parser.c" /* yacc.c:1646  */
    break;

  case 873:
#line 6794 "parser.y" /* yacc.c:1646  */
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
#line 12155 "parser.c" /* yacc.c:1646  */
    break;

  case 874:
#line 6814 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12163 "parser.c" /* yacc.c:1646  */
    break;

  case 875:
#line 6818 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 12172 "parser.c" /* yacc.c:1646  */
    break;

  case 876:
#line 6823 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error_x (CB_TREE (current_statement),
			    _("Number of parameters exceeds maximum %d"),
			    COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 12185 "parser.c" /* yacc.c:1646  */
    break;

  case 877:
#line 6834 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12191 "parser.c" /* yacc.c:1646  */
    break;

  case 878:
#line 6836 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 12197 "parser.c" /* yacc.c:1646  */
    break;

  case 879:
#line 6841 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error_x (CB_TREE (current_statement),
			    _("OMITTED only allowed with BY REFERENCE"));
	}
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_null);
  }
#line 12209 "parser.c" /* yacc.c:1646  */
    break;

  case 880:
#line 6849 "parser.y" /* yacc.c:1646  */
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
#line 12235 "parser.c" /* yacc.c:1646  */
    break;

  case 882:
#line 6875 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 12243 "parser.c" /* yacc.c:1646  */
    break;

  case 883:
#line 6879 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY CONTENT");
	} else {
		call_mode = CB_CALL_BY_CONTENT;
	}
  }
#line 12256 "parser.c" /* yacc.c:1646  */
    break;

  case 884:
#line 6888 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 12269 "parser.c" /* yacc.c:1646  */
    break;

  case 885:
#line 6900 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12277 "parser.c" /* yacc.c:1646  */
    break;

  case 886:
#line 6904 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12285 "parser.c" /* yacc.c:1646  */
    break;

  case 887:
#line 6908 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 12293 "parser.c" /* yacc.c:1646  */
    break;

  case 888:
#line 6912 "parser.y" /* yacc.c:1646  */
    {
	call_nothing = CB_CONV_NO_RET_UPD;
	(yyval) = cb_null;
  }
#line 12302 "parser.c" /* yacc.c:1646  */
    break;

  case 889:
#line 6917 "parser.y" /* yacc.c:1646  */
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
#line 12326 "parser.c" /* yacc.c:1646  */
    break;

  case 894:
#line 6950 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12334 "parser.c" /* yacc.c:1646  */
    break;

  case 895:
#line 6955 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12342 "parser.c" /* yacc.c:1646  */
    break;

  case 896:
#line 6960 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_call_overflow, "ON OVERFLOW clause");
	(yyval) = (yyvsp[0]);
  }
#line 12351 "parser.c" /* yacc.c:1646  */
    break;

  case 897:
#line 6968 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12359 "parser.c" /* yacc.c:1646  */
    break;

  case 898:
#line 6973 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12367 "parser.c" /* yacc.c:1646  */
    break;

  case 899:
#line 6980 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  }
#line 12375 "parser.c" /* yacc.c:1646  */
    break;

  case 900:
#line 6984 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  }
#line 12383 "parser.c" /* yacc.c:1646  */
    break;

  case 901:
#line 6994 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CANCEL", 0);
  }
#line 12391 "parser.c" /* yacc.c:1646  */
    break;

  case 903:
#line 7002 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 12399 "parser.c" /* yacc.c:1646  */
    break;

  case 904:
#line 7006 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 12407 "parser.c" /* yacc.c:1646  */
    break;

  case 905:
#line 7016 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CLOSE", 0);
  }
#line 12415 "parser.c" /* yacc.c:1646  */
    break;

  case 907:
#line 7024 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12424 "parser.c" /* yacc.c:1646  */
    break;

  case 908:
#line 7029 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12433 "parser.c" /* yacc.c:1646  */
    break;

  case 909:
#line 7036 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NORMAL); }
#line 12439 "parser.c" /* yacc.c:1646  */
    break;

  case 910:
#line 7037 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT); }
#line 12445 "parser.c" /* yacc.c:1646  */
    break;

  case 911:
#line 7038 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); }
#line 12451 "parser.c" /* yacc.c:1646  */
    break;

  case 912:
#line 7039 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); }
#line 12457 "parser.c" /* yacc.c:1646  */
    break;

  case 913:
#line 7040 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_LOCK); }
#line 12463 "parser.c" /* yacc.c:1646  */
    break;

  case 914:
#line 7048 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
#line 12471 "parser.c" /* yacc.c:1646  */
    break;

  case 916:
#line 7057 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-3]), 0, (yyvsp[-1]));
  }
#line 12479 "parser.c" /* yacc.c:1646  */
    break;

  case 917:
#line 7064 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  }
#line 12487 "parser.c" /* yacc.c:1646  */
    break;

  case 918:
#line 7068 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  }
#line 12495 "parser.c" /* yacc.c:1646  */
    break;

  case 919:
#line 7078 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
#line 12504 "parser.c" /* yacc.c:1646  */
    break;

  case 920:
#line 7089 "parser.y" /* yacc.c:1646  */
    {
	size_t	save_unreached;

	/* Do not check unreached for CONTINUE */
	save_unreached = check_unreached;
	check_unreached = 0;
	begin_statement ("CONTINUE", 0);
	cb_emit_continue ();
	check_unreached = (unsigned int) save_unreached;
  }
#line 12519 "parser.c" /* yacc.c:1646  */
    break;

  case 921:
#line 7106 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DELETE", TERM_DELETE);
  }
#line 12527 "parser.c" /* yacc.c:1646  */
    break;

  case 923:
#line 7115 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_delete ((yyvsp[-2]));
  }
#line 12535 "parser.c" /* yacc.c:1646  */
    break;

  case 925:
#line 7123 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 12544 "parser.c" /* yacc.c:1646  */
    break;

  case 926:
#line 7128 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 12553 "parser.c" /* yacc.c:1646  */
    break;

  case 927:
#line 7136 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  }
#line 12561 "parser.c" /* yacc.c:1646  */
    break;

  case 928:
#line 7140 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  }
#line 12569 "parser.c" /* yacc.c:1646  */
    break;

  case 929:
#line 7150 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
  }
#line 12578 "parser.c" /* yacc.c:1646  */
    break;

  case 931:
#line 7160 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_name ((yyvsp[-2]));
  }
#line 12586 "parser.c" /* yacc.c:1646  */
    break;

  case 932:
#line 7164 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_value ((yyvsp[-2]));
  }
#line 12594 "parser.c" /* yacc.c:1646  */
    break;

  case 933:
#line 7168 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arg_number ((yyvsp[-2]));
  }
#line 12602 "parser.c" /* yacc.c:1646  */
    break;

  case 934:
#line 7172 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_command_line ((yyvsp[-2]));
  }
#line 12610 "parser.c" /* yacc.c:1646  */
    break;

  case 936:
#line 7181 "parser.y" /* yacc.c:1646  */
    {
	  emit_default_displays_for_x_list ((struct cb_list *) (yyvsp[0]));
  }
#line 12618 "parser.c" /* yacc.c:1646  */
    break;

  case 937:
#line 7185 "parser.y" /* yacc.c:1646  */
    {
	  emit_default_displays_for_x_list ((struct cb_list *) (yyvsp[0]));
  }
#line 12626 "parser.c" /* yacc.c:1646  */
    break;

  case 940:
#line 7197 "parser.y" /* yacc.c:1646  */
    {
	check_duplicate = 0;
	check_line_col_duplicate = 0;
  	advancing_value = cb_int1;
	upon_value = NULL;
	line_column = NULL;
  }
#line 12638 "parser.c" /* yacc.c:1646  */
    break;

  case 941:
#line 7205 "parser.y" /* yacc.c:1646  */
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

	/*
	  This should be placed after the display_list in the second case
	  of display_list, but that causes a shift/reduce error.
	*/
	begin_implicit_statement ();
  }
#line 12696 "parser.c" /* yacc.c:1646  */
    break;

  case 942:
#line 7262 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12704 "parser.c" /* yacc.c:1646  */
    break;

  case 943:
#line 7266 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("DISPLAY OMITTED");
	(yyval) = cb_null;
  }
#line 12713 "parser.c" /* yacc.c:1646  */
    break;

  case 946:
#line 7279 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("UPON", SYN_CLAUSE_1, &check_duplicate);
  }
#line 12721 "parser.c" /* yacc.c:1646  */
    break;

  case 947:
#line 7283 "parser.y" /* yacc.c:1646  */
    {
 	check_repeated ("NO ADVANCING", SYN_CLAUSE_2, &check_duplicate);
	advancing_value = cb_int0;
  }
#line 12730 "parser.c" /* yacc.c:1646  */
    break;

  case 948:
#line 7288 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("MODE IS BLOCK", SYN_CLAUSE_3, &check_duplicate);
  }
#line 12738 "parser.c" /* yacc.c:1646  */
    break;

  case 951:
#line 7297 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_build_display_mnemonic ((yyvsp[0]));
  }
#line 12746 "parser.c" /* yacc.c:1646  */
    break;

  case 952:
#line 7301 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_build_display_name ((yyvsp[0]));
  }
#line 12754 "parser.c" /* yacc.c:1646  */
    break;

  case 953:
#line 7305 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_int0;
  }
#line 12762 "parser.c" /* yacc.c:1646  */
    break;

  case 957:
#line 7318 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
#line 12770 "parser.c" /* yacc.c:1646  */
    break;

  case 958:
#line 7322 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "BLANK LINE", COB_SCREEN_BLANK_LINE,
				     "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
#line 12780 "parser.c" /* yacc.c:1646  */
    break;

  case 959:
#line 7328 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN,
				     "BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
#line 12790 "parser.c" /* yacc.c:1646  */
    break;

  case 960:
#line 7334 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
#line 12798 "parser.c" /* yacc.c:1646  */
    break;

  case 961:
#line 7338 "parser.y" /* yacc.c:1646  */
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
#line 12806 "parser.c" /* yacc.c:1646  */
    break;

  case 962:
#line 7342 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "ERASE EOL", COB_SCREEN_ERASE_EOL,
				     "ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
#line 12816 "parser.c" /* yacc.c:1646  */
    break;

  case 963:
#line 7348 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "ERASE EOS", COB_SCREEN_ERASE_EOS,
				     "ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
#line 12826 "parser.c" /* yacc.c:1646  */
    break;

  case 964:
#line 7354 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 12836 "parser.c" /* yacc.c:1646  */
    break;

  case 965:
#line 7360 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 12846 "parser.c" /* yacc.c:1646  */
    break;

  case 966:
#line 7366 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
#line 12854 "parser.c" /* yacc.c:1646  */
    break;

  case 967:
#line 7370 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
#line 12862 "parser.c" /* yacc.c:1646  */
    break;

  case 968:
#line 7374 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 12870 "parser.c" /* yacc.c:1646  */
    break;

  case 969:
#line 7378 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
#line 12878 "parser.c" /* yacc.c:1646  */
    break;

  case 970:
#line 7382 "parser.y" /* yacc.c:1646  */
    {
	check_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, NULL, 0);
  }
#line 12886 "parser.c" /* yacc.c:1646  */
    break;

  case 971:
#line 7386 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 12894 "parser.c" /* yacc.c:1646  */
    break;

  case 972:
#line 7390 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, 0);
  }
#line 12902 "parser.c" /* yacc.c:1646  */
    break;

  case 973:
#line 7394 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
#line 12910 "parser.c" /* yacc.c:1646  */
    break;

  case 974:
#line 7401 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  }
#line 12918 "parser.c" /* yacc.c:1646  */
    break;

  case 975:
#line 7405 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  }
#line 12926 "parser.c" /* yacc.c:1646  */
    break;

  case 976:
#line 7415 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
#line 12934 "parser.c" /* yacc.c:1646  */
    break;

  case 978:
#line 7424 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '/', (yyvsp[-3]));
  }
#line 12942 "parser.c" /* yacc.c:1646  */
    break;

  case 979:
#line 7428 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-3]), '/', (yyvsp[-5])));
  }
#line 12950 "parser.c" /* yacc.c:1646  */
    break;

  case 980:
#line 7432 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '/', (yyvsp[-3])));
  }
#line 12958 "parser.c" /* yacc.c:1646  */
    break;

  case 981:
#line 7436 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-5]), (yyvsp[-7]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 12966 "parser.c" /* yacc.c:1646  */
    break;

  case 982:
#line 7440 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-7]), (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 12974 "parser.c" /* yacc.c:1646  */
    break;

  case 983:
#line 7447 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  }
#line 12982 "parser.c" /* yacc.c:1646  */
    break;

  case 984:
#line 7451 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  }
#line 12990 "parser.c" /* yacc.c:1646  */
    break;

  case 985:
#line 7461 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
  }
#line 12999 "parser.c" /* yacc.c:1646  */
    break;

  case 987:
#line 7470 "parser.y" /* yacc.c:1646  */
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
#line 13015 "parser.c" /* yacc.c:1646  */
    break;

  case 988:
#line 7488 "parser.y" /* yacc.c:1646  */
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
#line 13038 "parser.c" /* yacc.c:1646  */
    break;

  case 990:
#line 7512 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_evaluate ((yyvsp[-1]), (yyvsp[0]));
	eval_level--;
  }
#line 13047 "parser.c" /* yacc.c:1646  */
    break;

  case 991:
#line 7519 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13053 "parser.c" /* yacc.c:1646  */
    break;

  case 992:
#line 7521 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 13059 "parser.c" /* yacc.c:1646  */
    break;

  case 993:
#line 7526 "parser.y" /* yacc.c:1646  */
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
#line 13074 "parser.c" /* yacc.c:1646  */
    break;

  case 994:
#line 7537 "parser.y" /* yacc.c:1646  */
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
#line 13089 "parser.c" /* yacc.c:1646  */
    break;

  case 995:
#line 7548 "parser.y" /* yacc.c:1646  */
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
#line 13104 "parser.c" /* yacc.c:1646  */
    break;

  case 996:
#line 7562 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 13112 "parser.c" /* yacc.c:1646  */
    break;

  case 997:
#line 7566 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13120 "parser.c" /* yacc.c:1646  */
    break;

  case 998:
#line 7572 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13126 "parser.c" /* yacc.c:1646  */
    break;

  case 999:
#line 7574 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 13132 "parser.c" /* yacc.c:1646  */
    break;

  case 1000:
#line 7580 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), (yyvsp[-1]));
	eval_inc2 = 0;
  }
#line 13141 "parser.c" /* yacc.c:1646  */
    break;

  case 1001:
#line 7589 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), NULL);
	eval_inc2 = 0;
  }
#line 13150 "parser.c" /* yacc.c:1646  */
    break;

  case 1002:
#line 7597 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
	eval_inc2 = 0;
  }
#line 13159 "parser.c" /* yacc.c:1646  */
    break;

  case 1003:
#line 7603 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
	eval_inc2 = 0;
  }
#line 13168 "parser.c" /* yacc.c:1646  */
    break;

  case 1004:
#line 7610 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13174 "parser.c" /* yacc.c:1646  */
    break;

  case 1005:
#line 7612 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 13180 "parser.c" /* yacc.c:1646  */
    break;

  case 1006:
#line 7617 "parser.y" /* yacc.c:1646  */
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
#line 13246 "parser.c" /* yacc.c:1646  */
    break;

  case 1007:
#line 7678 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_any; eval_inc2++; }
#line 13252 "parser.c" /* yacc.c:1646  */
    break;

  case 1008:
#line 7679 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; eval_inc2++; }
#line 13258 "parser.c" /* yacc.c:1646  */
    break;

  case 1009:
#line 7680 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_false; eval_inc2++; }
#line 13264 "parser.c" /* yacc.c:1646  */
    break;

  case 1010:
#line 7684 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13270 "parser.c" /* yacc.c:1646  */
    break;

  case 1011:
#line 7685 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13276 "parser.c" /* yacc.c:1646  */
    break;

  case 1012:
#line 7690 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  }
#line 13284 "parser.c" /* yacc.c:1646  */
    break;

  case 1013:
#line 7694 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  }
#line 13292 "parser.c" /* yacc.c:1646  */
    break;

  case 1014:
#line 7704 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
#line 13301 "parser.c" /* yacc.c:1646  */
    break;

  case 1015:
#line 7709 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 13309 "parser.c" /* yacc.c:1646  */
    break;

  case 1017:
#line 7717 "parser.y" /* yacc.c:1646  */
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
#line 13334 "parser.c" /* yacc.c:1646  */
    break;

  case 1018:
#line 7738 "parser.y" /* yacc.c:1646  */
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
#line 13352 "parser.c" /* yacc.c:1646  */
    break;

  case 1019:
#line 7752 "parser.y" /* yacc.c:1646  */
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
#line 13378 "parser.c" /* yacc.c:1646  */
    break;

  case 1020:
#line 7774 "parser.y" /* yacc.c:1646  */
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
#line 13404 "parser.c" /* yacc.c:1646  */
    break;

  case 1021:
#line 7796 "parser.y" /* yacc.c:1646  */
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
#line 13428 "parser.c" /* yacc.c:1646  */
    break;

  case 1022:
#line 7816 "parser.y" /* yacc.c:1646  */
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
#line 13452 "parser.c" /* yacc.c:1646  */
    break;

  case 1023:
#line 7838 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13458 "parser.c" /* yacc.c:1646  */
    break;

  case 1024:
#line 7839 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13464 "parser.c" /* yacc.c:1646  */
    break;

  case 1025:
#line 7847 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
#line 13473 "parser.c" /* yacc.c:1646  */
    break;

  case 1027:
#line 7856 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_free ((yyvsp[0]));
  }
#line 13481 "parser.c" /* yacc.c:1646  */
    break;

  case 1028:
#line 7866 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GENERATE", 0);
	PENDING("GENERATE");
  }
#line 13490 "parser.c" /* yacc.c:1646  */
    break;

  case 1031:
#line 7882 "parser.y" /* yacc.c:1646  */
    {
	if (!current_paragraph->flag_statement) {
		current_paragraph->flag_first_is_goto = 1;
	}
	begin_statement ("GO TO", 0);
	save_debug = start_debug;
	start_debug = 0;
  }
#line 13503 "parser.c" /* yacc.c:1646  */
    break;

  case 1033:
#line 7895 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_goto ((yyvsp[-1]), (yyvsp[0]));
	start_debug = save_debug;
  }
#line 13512 "parser.c" /* yacc.c:1646  */
    break;

  case 1034:
#line 7903 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 1;
	(yyval) = NULL;
  }
#line 13521 "parser.c" /* yacc.c:1646  */
    break;

  case 1035:
#line 7908 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	(yyval) = (yyvsp[0]);
  }
#line 13530 "parser.c" /* yacc.c:1646  */
    break;

  case 1036:
#line 7919 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GOBACK", 0);
	check_unreached = 1;
	if ((yyvsp[0]) != NULL) {
		cb_emit_move ((yyvsp[0]), CB_LIST_INIT (current_program->cb_return_code));
	}
	cb_emit_exit (1U);
  }
#line 13543 "parser.c" /* yacc.c:1646  */
    break;

  case 1037:
#line 7934 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("IF", TERM_IF);
  }
#line 13551 "parser.c" /* yacc.c:1646  */
    break;

  case 1039:
#line 7943 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 13559 "parser.c" /* yacc.c:1646  */
    break;

  case 1040:
#line 7947 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[0]));
  }
#line 13567 "parser.c" /* yacc.c:1646  */
    break;

  case 1041:
#line 7951 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[0]), NULL);
  }
#line 13575 "parser.c" /* yacc.c:1646  */
    break;

  case 1042:
#line 7958 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  }
#line 13583 "parser.c" /* yacc.c:1646  */
    break;

  case 1043:
#line 7962 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  }
#line 13591 "parser.c" /* yacc.c:1646  */
    break;

  case 1044:
#line 7972 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIALIZE", 0);
  }
#line 13599 "parser.c" /* yacc.c:1646  */
    break;

  case 1046:
#line 7981 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_initialize ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 13607 "parser.c" /* yacc.c:1646  */
    break;

  case 1047:
#line 7987 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13613 "parser.c" /* yacc.c:1646  */
    break;

  case 1048:
#line 7988 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 13619 "parser.c" /* yacc.c:1646  */
    break;

  case 1049:
#line 7992 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13625 "parser.c" /* yacc.c:1646  */
    break;

  case 1050:
#line 7993 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 13631 "parser.c" /* yacc.c:1646  */
    break;

  case 1051:
#line 7994 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); }
#line 13637 "parser.c" /* yacc.c:1646  */
    break;

  case 1052:
#line 7999 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13645 "parser.c" /* yacc.c:1646  */
    break;

  case 1053:
#line 8003 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13653 "parser.c" /* yacc.c:1646  */
    break;

  case 1054:
#line 8010 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13661 "parser.c" /* yacc.c:1646  */
    break;

  case 1055:
#line 8015 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
  }
#line 13669 "parser.c" /* yacc.c:1646  */
    break;

  case 1056:
#line 8022 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[0]));
  }
#line 13677 "parser.c" /* yacc.c:1646  */
    break;

  case 1057:
#line 8028 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); }
#line 13683 "parser.c" /* yacc.c:1646  */
    break;

  case 1058:
#line 8029 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); }
#line 13689 "parser.c" /* yacc.c:1646  */
    break;

  case 1059:
#line 8030 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); }
#line 13695 "parser.c" /* yacc.c:1646  */
    break;

  case 1060:
#line 8031 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
#line 13701 "parser.c" /* yacc.c:1646  */
    break;

  case 1061:
#line 8032 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
#line 13707 "parser.c" /* yacc.c:1646  */
    break;

  case 1062:
#line 8033 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); }
#line 13713 "parser.c" /* yacc.c:1646  */
    break;

  case 1063:
#line 8034 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
#line 13719 "parser.c" /* yacc.c:1646  */
    break;

  case 1064:
#line 8039 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13727 "parser.c" /* yacc.c:1646  */
    break;

  case 1065:
#line 8043 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_true;
  }
#line 13735 "parser.c" /* yacc.c:1646  */
    break;

  case 1066:
#line 8052 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIATE", 0);
	PENDING("INITIATE");
  }
#line 13744 "parser.c" /* yacc.c:1646  */
    break;

  case 1068:
#line 8061 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 13754 "parser.c" /* yacc.c:1646  */
    break;

  case 1069:
#line 8067 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 13764 "parser.c" /* yacc.c:1646  */
    break;

  case 1070:
#line 8078 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
#line 13773 "parser.c" /* yacc.c:1646  */
    break;

  case 1073:
#line 8091 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13781 "parser.c" /* yacc.c:1646  */
    break;

  case 1074:
#line 8095 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13789 "parser.c" /* yacc.c:1646  */
    break;

  case 1075:
#line 8099 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13797 "parser.c" /* yacc.c:1646  */
    break;

  case 1080:
#line 8115 "parser.y" /* yacc.c:1646  */
    {
	cb_init_tallying ();
  }
#line 13805 "parser.c" /* yacc.c:1646  */
    break;

  case 1081:
#line 8119 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_inspect ((yyvsp[-3]), (yyvsp[0]), cb_int0, 0);
	(yyval) = (yyvsp[-3]);
  }
#line 13814 "parser.c" /* yacc.c:1646  */
    break;

  case 1082:
#line 8129 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_inspect ((yyvsp[-2]), (yyvsp[0]), cb_int1, 1);
	inspect_keyword = 0;
  }
#line 13823 "parser.c" /* yacc.c:1646  */
    break;

  case 1083:
#line 8139 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
	cb_emit_inspect ((yyvsp[-5]), x, cb_int0, 2);
  }
#line 13833 "parser.c" /* yacc.c:1646  */
    break;

  case 1084:
#line 8147 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13839 "parser.c" /* yacc.c:1646  */
    break;

  case 1085:
#line 8148 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 13845 "parser.c" /* yacc.c:1646  */
    break;

  case 1086:
#line 8152 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_data ((yyvsp[-1])); }
#line 13851 "parser.c" /* yacc.c:1646  */
    break;

  case 1087:
#line 8153 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_characters ((yyvsp[0])); }
#line 13857 "parser.c" /* yacc.c:1646  */
    break;

  case 1088:
#line 8154 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_all (); }
#line 13863 "parser.c" /* yacc.c:1646  */
    break;

  case 1089:
#line 8155 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_leading (); }
#line 13869 "parser.c" /* yacc.c:1646  */
    break;

  case 1090:
#line 8156 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_trailing (); }
#line 13875 "parser.c" /* yacc.c:1646  */
    break;

  case 1091:
#line 8157 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_value ((yyvsp[-1]), (yyvsp[0])); }
#line 13881 "parser.c" /* yacc.c:1646  */
    break;

  case 1092:
#line 8161 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13887 "parser.c" /* yacc.c:1646  */
    break;

  case 1093:
#line 8162 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 13893 "parser.c" /* yacc.c:1646  */
    break;

  case 1094:
#line 8167 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[-1]), (yyvsp[0]));
	inspect_keyword = 0;
  }
#line 13902 "parser.c" /* yacc.c:1646  */
    break;

  case 1095:
#line 8172 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13910 "parser.c" /* yacc.c:1646  */
    break;

  case 1096:
#line 8178 "parser.y" /* yacc.c:1646  */
    { /* Nothing */ }
#line 13916 "parser.c" /* yacc.c:1646  */
    break;

  case 1097:
#line 8179 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 1; }
#line 13922 "parser.c" /* yacc.c:1646  */
    break;

  case 1098:
#line 8180 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 2; }
#line 13928 "parser.c" /* yacc.c:1646  */
    break;

  case 1099:
#line 8181 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 3; }
#line 13934 "parser.c" /* yacc.c:1646  */
    break;

  case 1100:
#line 8182 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 4; }
#line 13940 "parser.c" /* yacc.c:1646  */
    break;

  case 1101:
#line 8187 "parser.y" /* yacc.c:1646  */
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
				    _("INSPECT missing a keyword"));
			(yyval) = cb_build_replacing_all ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
			break;
	}
  }
#line 13966 "parser.c" /* yacc.c:1646  */
    break;

  case 1102:
#line 8214 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_inspect_region_start ();
  }
#line 13974 "parser.c" /* yacc.c:1646  */
    break;

  case 1103:
#line 8218 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13982 "parser.c" /* yacc.c:1646  */
    break;

  case 1104:
#line 8225 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-3]), CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[0])));
  }
#line 13990 "parser.c" /* yacc.c:1646  */
    break;

  case 1105:
#line 8229 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-3]), CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[0])));
  }
#line 13998 "parser.c" /* yacc.c:1646  */
    break;

  case 1106:
#line 8238 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
#line 14007 "parser.c" /* yacc.c:1646  */
    break;

  case 1108:
#line 8250 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MOVE", 0);
  }
#line 14015 "parser.c" /* yacc.c:1646  */
    break;

  case 1110:
#line 8258 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14023 "parser.c" /* yacc.c:1646  */
    break;

  case 1111:
#line 8262 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move_corresponding ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14031 "parser.c" /* yacc.c:1646  */
    break;

  case 1112:
#line 8272 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
#line 14039 "parser.c" /* yacc.c:1646  */
    break;

  case 1114:
#line 8281 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '*', (yyvsp[-3]));
  }
#line 14047 "parser.c" /* yacc.c:1646  */
    break;

  case 1115:
#line 8285 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '*', (yyvsp[-3])));
  }
#line 14055 "parser.c" /* yacc.c:1646  */
    break;

  case 1116:
#line 8292 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  }
#line 14063 "parser.c" /* yacc.c:1646  */
    break;

  case 1117:
#line 8296 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  }
#line 14071 "parser.c" /* yacc.c:1646  */
    break;

  case 1118:
#line 8306 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("OPEN", 0);
  }
#line 14079 "parser.c" /* yacc.c:1646  */
    break;

  case 1120:
#line 8314 "parser.y" /* yacc.c:1646  */
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
#line 14104 "parser.c" /* yacc.c:1646  */
    break;

  case 1121:
#line 8335 "parser.y" /* yacc.c:1646  */
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
#line 14129 "parser.c" /* yacc.c:1646  */
    break;

  case 1122:
#line 8358 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_INPUT); }
#line 14135 "parser.c" /* yacc.c:1646  */
    break;

  case 1123:
#line 8359 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_OUTPUT); }
#line 14141 "parser.c" /* yacc.c:1646  */
    break;

  case 1124:
#line 8360 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_I_O); }
#line 14147 "parser.c" /* yacc.c:1646  */
    break;

  case 1125:
#line 8361 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_EXTEND); }
#line 14153 "parser.c" /* yacc.c:1646  */
    break;

  case 1126:
#line 8365 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14159 "parser.c" /* yacc.c:1646  */
    break;

  case 1127:
#line 8366 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14165 "parser.c" /* yacc.c:1646  */
    break;

  case 1128:
#line 8370 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14171 "parser.c" /* yacc.c:1646  */
    break;

  case 1129:
#line 8371 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14177 "parser.c" /* yacc.c:1646  */
    break;

  case 1130:
#line 8372 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 14183 "parser.c" /* yacc.c:1646  */
    break;

  case 1131:
#line 8374 "parser.y" /* yacc.c:1646  */
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  }
#line 14192 "parser.c" /* yacc.c:1646  */
    break;

  case 1132:
#line 8385 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 14203 "parser.c" /* yacc.c:1646  */
    break;

  case 1134:
#line 8396 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[0]), (yyvsp[-1]));
	start_debug = save_debug;
  }
#line 14212 "parser.c" /* yacc.c:1646  */
    break;

  case 1135:
#line 8401 "parser.y" /* yacc.c:1646  */
    {
	CB_ADD_TO_CHAIN ((yyvsp[0]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
  }
#line 14222 "parser.c" /* yacc.c:1646  */
    break;

  case 1136:
#line 8407 "parser.y" /* yacc.c:1646  */
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 14231 "parser.c" /* yacc.c:1646  */
    break;

  case 1137:
#line 8412 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[-1]), NULL);
	start_debug = save_debug;
  }
#line 14240 "parser.c" /* yacc.c:1646  */
    break;

  case 1138:
#line 8420 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-4) - (0)]), PERFORM);
	}
  }
#line 14252 "parser.c" /* yacc.c:1646  */
    break;

  case 1139:
#line 8428 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  }
#line 14260 "parser.c" /* yacc.c:1646  */
    break;

  case 1140:
#line 8435 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  }
#line 14268 "parser.c" /* yacc.c:1646  */
    break;

  case 1141:
#line 8439 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-2) - (1)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-2) - (1)]), PERFORM);
	}
	/* Put the dot token back into the stack for reparse */
	cb_unput_dot ();
  }
#line 14282 "parser.c" /* yacc.c:1646  */
    break;

  case 1142:
#line 8452 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[0]));
  }
#line 14293 "parser.c" /* yacc.c:1646  */
    break;

  case 1143:
#line 8459 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $3 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[-2]))->flag_decl_ok = 1;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14305 "parser.c" /* yacc.c:1646  */
    break;

  case 1144:
#line 8470 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_once (NULL);
  }
#line 14313 "parser.c" /* yacc.c:1646  */
    break;

  case 1145:
#line 8474 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_times ((yyvsp[-1]));
	current_program->loop_counter++;
  }
#line 14322 "parser.c" /* yacc.c:1646  */
    break;

  case 1146:
#line 8479 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_forever (NULL);
  }
#line 14330 "parser.c" /* yacc.c:1646  */
    break;

  case 1147:
#line 8483 "parser.y" /* yacc.c:1646  */
    {
	cb_tree varying;

	if (!(yyvsp[0])) {
		(yyval) = cb_build_perform_forever (NULL);
	} else {
		varying = CB_LIST_INIT (cb_build_perform_varying (NULL, NULL, NULL, (yyvsp[0])));
		(yyval) = cb_build_perform_until ((yyvsp[-2]), varying);
	}
  }
#line 14345 "parser.c" /* yacc.c:1646  */
    break;

  case 1148:
#line 8494 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_until ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14353 "parser.c" /* yacc.c:1646  */
    break;

  case 1149:
#line 8500 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 14359 "parser.c" /* yacc.c:1646  */
    break;

  case 1150:
#line 8501 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14365 "parser.c" /* yacc.c:1646  */
    break;

  case 1151:
#line 8505 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14371 "parser.c" /* yacc.c:1646  */
    break;

  case 1152:
#line 8506 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14377 "parser.c" /* yacc.c:1646  */
    break;

  case 1153:
#line 8509 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 14383 "parser.c" /* yacc.c:1646  */
    break;

  case 1154:
#line 8511 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 14389 "parser.c" /* yacc.c:1646  */
    break;

  case 1155:
#line 8516 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_varying ((yyvsp[-6]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 14397 "parser.c" /* yacc.c:1646  */
    break;

  case 1156:
#line 8526 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READ", TERM_READ);
  }
#line 14405 "parser.c" /* yacc.c:1646  */
    break;

  case 1158:
#line 8535 "parser.y" /* yacc.c:1646  */
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
		} else if (current_statement->handler_id == COB_EC_I_O_INVALID_KEY &&
			   (cf->organization != COB_ORG_RELATIVE &&
			    cf->organization != COB_ORG_INDEXED)) {
			cb_error_x (CB_TREE (current_statement),
				    _("INVALID KEY clause invalid with this file type"));
		} else {
			cb_emit_read ((yyvsp[-6]), (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]), (yyvsp[-2]));
		}
	}
  }
#line 14433 "parser.c" /* yacc.c:1646  */
    break;

  case 1159:
#line 8561 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14439 "parser.c" /* yacc.c:1646  */
    break;

  case 1160:
#line 8562 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14445 "parser.c" /* yacc.c:1646  */
    break;

  case 1161:
#line 8567 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14453 "parser.c" /* yacc.c:1646  */
    break;

  case 1162:
#line 8571 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int3;
  }
#line 14461 "parser.c" /* yacc.c:1646  */
    break;

  case 1163:
#line 8575 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 14469 "parser.c" /* yacc.c:1646  */
    break;

  case 1164:
#line 8579 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 14477 "parser.c" /* yacc.c:1646  */
    break;

  case 1165:
#line 8583 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 14485 "parser.c" /* yacc.c:1646  */
    break;

  case 1166:
#line 8587 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int3;
  }
#line 14493 "parser.c" /* yacc.c:1646  */
    break;

  case 1167:
#line 8591 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int4;
  }
#line 14501 "parser.c" /* yacc.c:1646  */
    break;

  case 1168:
#line 8597 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14507 "parser.c" /* yacc.c:1646  */
    break;

  case 1169:
#line 8598 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14513 "parser.c" /* yacc.c:1646  */
    break;

  case 1172:
#line 8608 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  }
#line 14521 "parser.c" /* yacc.c:1646  */
    break;

  case 1173:
#line 8612 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  }
#line 14529 "parser.c" /* yacc.c:1646  */
    break;

  case 1174:
#line 8622 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
#line 14538 "parser.c" /* yacc.c:1646  */
    break;

  case 1175:
#line 8632 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RELEASE", 0);
  }
#line 14546 "parser.c" /* yacc.c:1646  */
    break;

  case 1177:
#line 8640 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_release ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14554 "parser.c" /* yacc.c:1646  */
    break;

  case 1178:
#line 8650 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
#line 14563 "parser.c" /* yacc.c:1646  */
    break;

  case 1179:
#line 8660 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RETURN", TERM_RETURN);
  }
#line 14571 "parser.c" /* yacc.c:1646  */
    break;

  case 1181:
#line 8669 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_return ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 14579 "parser.c" /* yacc.c:1646  */
    break;

  case 1182:
#line 8676 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  }
#line 14587 "parser.c" /* yacc.c:1646  */
    break;

  case 1183:
#line 8680 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  }
#line 14595 "parser.c" /* yacc.c:1646  */
    break;

  case 1184:
#line 8690 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 14606 "parser.c" /* yacc.c:1646  */
    break;

  case 1186:
#line 8702 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_rewrite ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
	start_debug = save_debug;
  }
#line 14615 "parser.c" /* yacc.c:1646  */
    break;

  case 1187:
#line 8710 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14623 "parser.c" /* yacc.c:1646  */
    break;

  case 1188:
#line 8714 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 14631 "parser.c" /* yacc.c:1646  */
    break;

  case 1189:
#line 8718 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 14639 "parser.c" /* yacc.c:1646  */
    break;

  case 1190:
#line 8725 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  }
#line 14647 "parser.c" /* yacc.c:1646  */
    break;

  case 1191:
#line 8729 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  }
#line 14655 "parser.c" /* yacc.c:1646  */
    break;

  case 1192:
#line 8739 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
#line 14664 "parser.c" /* yacc.c:1646  */
    break;

  case 1193:
#line 8750 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
#line 14672 "parser.c" /* yacc.c:1646  */
    break;

  case 1195:
#line 8759 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_search ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 14680 "parser.c" /* yacc.c:1646  */
    break;

  case 1196:
#line 8764 "parser.y" /* yacc.c:1646  */
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 14689 "parser.c" /* yacc.c:1646  */
    break;

  case 1197:
#line 8771 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14695 "parser.c" /* yacc.c:1646  */
    break;

  case 1198:
#line 8772 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14701 "parser.c" /* yacc.c:1646  */
    break;

  case 1199:
#line 8777 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14709 "parser.c" /* yacc.c:1646  */
    break;

  case 1200:
#line 8782 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14717 "parser.c" /* yacc.c:1646  */
    break;

  case 1201:
#line 8789 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 14725 "parser.c" /* yacc.c:1646  */
    break;

  case 1202:
#line 8793 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), (yyvsp[-1]));
  }
#line 14733 "parser.c" /* yacc.c:1646  */
    break;

  case 1203:
#line 8801 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_if_check_break ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14741 "parser.c" /* yacc.c:1646  */
    break;

  case 1204:
#line 8808 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  }
#line 14749 "parser.c" /* yacc.c:1646  */
    break;

  case 1205:
#line 8812 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  }
#line 14757 "parser.c" /* yacc.c:1646  */
    break;

  case 1206:
#line 8822 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SET", 0);
	setattr_val_on = 0;
	setattr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
#line 14768 "parser.c" /* yacc.c:1646  */
    break;

  case 1207:
#line 8829 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 14776 "parser.c" /* yacc.c:1646  */
    break;

  case 1215:
#line 8845 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 14782 "parser.c" /* yacc.c:1646  */
    break;

  case 1216:
#line 8846 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 14788 "parser.c" /* yacc.c:1646  */
    break;

  case 1217:
#line 8850 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 14794 "parser.c" /* yacc.c:1646  */
    break;

  case 1218:
#line 8851 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 14800 "parser.c" /* yacc.c:1646  */
    break;

  case 1219:
#line 8858 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_setenv ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14808 "parser.c" /* yacc.c:1646  */
    break;

  case 1220:
#line 8867 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_attribute ((yyvsp[-2]), setattr_val_on, setattr_val_off);
  }
#line 14816 "parser.c" /* yacc.c:1646  */
    break;

  case 1223:
#line 8879 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BELL);
  }
#line 14824 "parser.c" /* yacc.c:1646  */
    break;

  case 1224:
#line 8883 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BLINK);
  }
#line 14832 "parser.c" /* yacc.c:1646  */
    break;

  case 1225:
#line 8887 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_HIGHLIGHT);
	check_not_highlight_and_lowlight (setattr_val_on | setattr_val_off,
					  COB_SCREEN_HIGHLIGHT);
  }
#line 14842 "parser.c" /* yacc.c:1646  */
    break;

  case 1226:
#line 8893 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LOWLIGHT);
	check_not_highlight_and_lowlight (setattr_val_on | setattr_val_off,
					  COB_SCREEN_LOWLIGHT);
  }
#line 14852 "parser.c" /* yacc.c:1646  */
    break;

  case 1227:
#line 8899 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_REVERSE);
  }
#line 14860 "parser.c" /* yacc.c:1646  */
    break;

  case 1228:
#line 8903 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_UNDERLINE);
  }
#line 14868 "parser.c" /* yacc.c:1646  */
    break;

  case 1229:
#line 8907 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LEFTLINE);
  }
#line 14876 "parser.c" /* yacc.c:1646  */
    break;

  case 1230:
#line 8911 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_OVERLINE);
  }
#line 14884 "parser.c" /* yacc.c:1646  */
    break;

  case 1231:
#line 8920 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-3]), cb_build_ppointer ((yyvsp[0])));
  }
#line 14892 "parser.c" /* yacc.c:1646  */
    break;

  case 1232:
#line 8924 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14900 "parser.c" /* yacc.c:1646  */
    break;

  case 1233:
#line 8933 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_up_down ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 14908 "parser.c" /* yacc.c:1646  */
    break;

  case 1236:
#line 8947 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_on_off ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14916 "parser.c" /* yacc.c:1646  */
    break;

  case 1239:
#line 8961 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_true ((yyvsp[-2]));
  }
#line 14924 "parser.c" /* yacc.c:1646  */
    break;

  case 1240:
#line 8965 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_false ((yyvsp[-2]));
  }
#line 14932 "parser.c" /* yacc.c:1646  */
    break;

  case 1241:
#line 8974 "parser.y" /* yacc.c:1646  */
    {
	  cb_emit_set_last_exception_to_off ();
  }
#line 14940 "parser.c" /* yacc.c:1646  */
    break;

  case 1242:
#line 8983 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SORT", 0);
  }
#line 14948 "parser.c" /* yacc.c:1646  */
    break;

  case 1244:
#line 8991 "parser.y" /* yacc.c:1646  */
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
#line 14973 "parser.c" /* yacc.c:1646  */
    break;

  case 1245:
#line 9012 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2]) && CB_VALID_TREE ((yyvsp[-6]))) {
		cb_emit_sort_finish ((yyvsp[-6]));
	}
  }
#line 14983 "parser.c" /* yacc.c:1646  */
    break;

  case 1246:
#line 9021 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14991 "parser.c" /* yacc.c:1646  */
    break;

  case 1247:
#line 9026 "parser.y" /* yacc.c:1646  */
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
#line 15011 "parser.c" /* yacc.c:1646  */
    break;

  case 1248:
#line 9044 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15017 "parser.c" /* yacc.c:1646  */
    break;

  case 1249:
#line 9045 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 15023 "parser.c" /* yacc.c:1646  */
    break;

  case 1251:
#line 9050 "parser.y" /* yacc.c:1646  */
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  }
#line 15032 "parser.c" /* yacc.c:1646  */
    break;

  case 1252:
#line 9057 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 15038 "parser.c" /* yacc.c:1646  */
    break;

  case 1253:
#line 9058 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_ref ((yyvsp[0])); }
#line 15044 "parser.c" /* yacc.c:1646  */
    break;

  case 1254:
#line 9063 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) && CB_FILE_P (cb_ref ((yyvsp[0])))) {
		cb_error (_("File sort requires USING or INPUT PROCEDURE"));
	}
  }
#line 15054 "parser.c" /* yacc.c:1646  */
    break;

  case 1255:
#line 9069 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[-2])))) {
			cb_error (_("USING invalid with table SORT"));
		} else {
			cb_emit_sort_using ((yyvsp[-2]), (yyvsp[0]));
		}
	}
  }
#line 15068 "parser.c" /* yacc.c:1646  */
    break;

  case 1256:
#line 9079 "parser.y" /* yacc.c:1646  */
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
#line 15084 "parser.c" /* yacc.c:1646  */
    break;

  case 1257:
#line 9094 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("File sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
#line 15094 "parser.c" /* yacc.c:1646  */
    break;

  case 1258:
#line 9100 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (2)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (2)])))) {
			cb_error (_("GIVING invalid with table SORT"));
		} else {
			cb_emit_sort_giving ((yyvsp[(-1) - (2)]), (yyvsp[0]));
		}
	}
  }
#line 15108 "parser.c" /* yacc.c:1646  */
    break;

  case 1259:
#line 9110 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (4)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (4)])))) {
			cb_error (_("OUTPUT PROCEDURE invalid with table SORT"));
		} else {
			cb_emit_sort_output ((yyvsp[0]));
		}
	}
  }
#line 15122 "parser.c" /* yacc.c:1646  */
    break;

  case 1260:
#line 9126 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
#line 15131 "parser.c" /* yacc.c:1646  */
    break;

  case 1262:
#line 9136 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-1]) && !(yyvsp[-2])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SIZE/LENGTH invalid here"));
	} else {
		cb_emit_start ((yyvsp[-3]), start_tree, (yyvsp[-2]), (yyvsp[-1]));
	}
  }
#line 15144 "parser.c" /* yacc.c:1646  */
    break;

  case 1263:
#line 9148 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15152 "parser.c" /* yacc.c:1646  */
    break;

  case 1264:
#line 9152 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15160 "parser.c" /* yacc.c:1646  */
    break;

  case 1265:
#line 9159 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15168 "parser.c" /* yacc.c:1646  */
    break;

  case 1266:
#line 9163 "parser.y" /* yacc.c:1646  */
    {
	start_tree = (yyvsp[-1]);
	(yyval) = (yyvsp[0]);
  }
#line 15177 "parser.c" /* yacc.c:1646  */
    break;

  case 1267:
#line 9168 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  }
#line 15186 "parser.c" /* yacc.c:1646  */
    break;

  case 1268:
#line 9173 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  }
#line 15195 "parser.c" /* yacc.c:1646  */
    break;

  case 1269:
#line 9180 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_EQ); }
#line 15201 "parser.c" /* yacc.c:1646  */
    break;

  case 1270:
#line 9181 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LE : COB_GT); }
#line 15207 "parser.c" /* yacc.c:1646  */
    break;

  case 1271:
#line 9182 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GE : COB_LT); }
#line 15213 "parser.c" /* yacc.c:1646  */
    break;

  case 1272:
#line 9183 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LT : COB_GE); }
#line 15219 "parser.c" /* yacc.c:1646  */
    break;

  case 1273:
#line 9184 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GT : COB_LE); }
#line 15225 "parser.c" /* yacc.c:1646  */
    break;

  case 1274:
#line 9185 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_NE); }
#line 15231 "parser.c" /* yacc.c:1646  */
    break;

  case 1275:
#line 9190 "parser.y" /* yacc.c:1646  */
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition disallowed on START statement"));
  }
#line 15240 "parser.c" /* yacc.c:1646  */
    break;

  case 1278:
#line 9203 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  }
#line 15248 "parser.c" /* yacc.c:1646  */
    break;

  case 1279:
#line 9207 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  }
#line 15256 "parser.c" /* yacc.c:1646  */
    break;

  case 1280:
#line 9217 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP RUN", 0);
  }
#line 15264 "parser.c" /* yacc.c:1646  */
    break;

  case 1281:
#line 9221 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_stop_run ((yyvsp[0]));
	check_unreached = 1;
	cobc_cs_check = 0;
  }
#line 15274 "parser.c" /* yacc.c:1646  */
    break;

  case 1282:
#line 9227 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP", 0);
	cb_verify (cb_stop_literal_statement, "STOP literal");
	cb_emit_display (CB_LIST_INIT ((yyvsp[0])), cb_int0, cb_int1, NULL,
			 NULL);
	cb_emit_accept (cb_null, NULL, NULL);
	cobc_cs_check = 0;
  }
#line 15287 "parser.c" /* yacc.c:1646  */
    break;

  case 1283:
#line 9239 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->cb_return_code;
  }
#line 15295 "parser.c" /* yacc.c:1646  */
    break;

  case 1284:
#line 9243 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15303 "parser.c" /* yacc.c:1646  */
    break;

  case 1285:
#line 9247 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int1;
	}
  }
#line 15315 "parser.c" /* yacc.c:1646  */
    break;

  case 1286:
#line 9255 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int0;
	}
  }
#line 15327 "parser.c" /* yacc.c:1646  */
    break;

  case 1287:
#line 9266 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15335 "parser.c" /* yacc.c:1646  */
    break;

  case 1288:
#line 9270 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15343 "parser.c" /* yacc.c:1646  */
    break;

  case 1289:
#line 9276 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15349 "parser.c" /* yacc.c:1646  */
    break;

  case 1290:
#line 9277 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 15355 "parser.c" /* yacc.c:1646  */
    break;

  case 1291:
#line 9278 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 15361 "parser.c" /* yacc.c:1646  */
    break;

  case 1292:
#line 9279 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 15367 "parser.c" /* yacc.c:1646  */
    break;

  case 1293:
#line 9286 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STRING", TERM_STRING);
  }
#line 15375 "parser.c" /* yacc.c:1646  */
    break;

  case 1295:
#line 9295 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_string ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[-1]));
  }
#line 15383 "parser.c" /* yacc.c:1646  */
    break;

  case 1296:
#line 9301 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 15389 "parser.c" /* yacc.c:1646  */
    break;

  case 1297:
#line 9302 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 15395 "parser.c" /* yacc.c:1646  */
    break;

  case 1298:
#line 9306 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15401 "parser.c" /* yacc.c:1646  */
    break;

  case 1299:
#line 9307 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); }
#line 15407 "parser.c" /* yacc.c:1646  */
    break;

  case 1300:
#line 9308 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[0]), NULL); }
#line 15413 "parser.c" /* yacc.c:1646  */
    break;

  case 1301:
#line 9312 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15419 "parser.c" /* yacc.c:1646  */
    break;

  case 1302:
#line 9313 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15425 "parser.c" /* yacc.c:1646  */
    break;

  case 1303:
#line 9318 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  }
#line 15433 "parser.c" /* yacc.c:1646  */
    break;

  case 1304:
#line 9322 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  }
#line 15441 "parser.c" /* yacc.c:1646  */
    break;

  case 1305:
#line 9332 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
#line 15449 "parser.c" /* yacc.c:1646  */
    break;

  case 1307:
#line 9341 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '-', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 15457 "parser.c" /* yacc.c:1646  */
    break;

  case 1308:
#line 9345 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[-3]), (yyvsp[-5])), '-'));
  }
#line 15465 "parser.c" /* yacc.c:1646  */
    break;

  case 1309:
#line 9349 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 15473 "parser.c" /* yacc.c:1646  */
    break;

  case 1310:
#line 9356 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  }
#line 15481 "parser.c" /* yacc.c:1646  */
    break;

  case 1311:
#line 9360 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  }
#line 15489 "parser.c" /* yacc.c:1646  */
    break;

  case 1312:
#line 9370 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUPPRESS", 0);
	if (!in_declaratives) {
		cb_error_x (CB_TREE (current_statement),
			    _("SUPPRESS statement must be within DECLARATIVES"));
	}
	PENDING("SUPPRESS");
  }
#line 15502 "parser.c" /* yacc.c:1646  */
    break;

  case 1315:
#line 9388 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TERMINATE", 0);
	PENDING("TERMINATE");
  }
#line 15511 "parser.c" /* yacc.c:1646  */
    break;

  case 1317:
#line 9397 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 15521 "parser.c" /* yacc.c:1646  */
    break;

  case 1318:
#line 9403 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 15531 "parser.c" /* yacc.c:1646  */
    break;

  case 1319:
#line 9414 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TRANSFORM", 0);
  }
#line 15539 "parser.c" /* yacc.c:1646  */
    break;

  case 1321:
#line 9422 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[-2]), (yyvsp[0]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[-4]), x, cb_int0, 2);
  }
#line 15550 "parser.c" /* yacc.c:1646  */
    break;

  case 1322:
#line 9435 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNLOCK", 0);
  }
#line 15558 "parser.c" /* yacc.c:1646  */
    break;

  case 1324:
#line 9443 "parser.y" /* yacc.c:1646  */
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
#line 15573 "parser.c" /* yacc.c:1646  */
    break;

  case 1325:
#line 9459 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
#line 15581 "parser.c" /* yacc.c:1646  */
    break;

  case 1327:
#line 9469 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_unstring ((yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
  }
#line 15589 "parser.c" /* yacc.c:1646  */
    break;

  case 1328:
#line 9475 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15595 "parser.c" /* yacc.c:1646  */
    break;

  case 1329:
#line 9477 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15601 "parser.c" /* yacc.c:1646  */
    break;

  case 1330:
#line 9481 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 15607 "parser.c" /* yacc.c:1646  */
    break;

  case 1331:
#line 9483 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 15613 "parser.c" /* yacc.c:1646  */
    break;

  case 1332:
#line 9488 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[-1]), (yyvsp[0]));
  }
#line 15621 "parser.c" /* yacc.c:1646  */
    break;

  case 1333:
#line 9494 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 15627 "parser.c" /* yacc.c:1646  */
    break;

  case 1334:
#line 9496 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 15633 "parser.c" /* yacc.c:1646  */
    break;

  case 1335:
#line 9501 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_into ((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 15641 "parser.c" /* yacc.c:1646  */
    break;

  case 1336:
#line 9507 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15647 "parser.c" /* yacc.c:1646  */
    break;

  case 1337:
#line 9508 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15653 "parser.c" /* yacc.c:1646  */
    break;

  case 1338:
#line 9512 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15659 "parser.c" /* yacc.c:1646  */
    break;

  case 1339:
#line 9513 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15665 "parser.c" /* yacc.c:1646  */
    break;

  case 1340:
#line 9517 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15671 "parser.c" /* yacc.c:1646  */
    break;

  case 1341:
#line 9518 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15677 "parser.c" /* yacc.c:1646  */
    break;

  case 1342:
#line 9523 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  }
#line 15685 "parser.c" /* yacc.c:1646  */
    break;

  case 1343:
#line 9527 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  }
#line 15693 "parser.c" /* yacc.c:1646  */
    break;

  case 1344:
#line 9537 "parser.y" /* yacc.c:1646  */
    {
	skip_statements = 0;
	in_debugging = 0;
  }
#line 15702 "parser.c" /* yacc.c:1646  */
    break;

  case 1351:
#line 9555 "parser.y" /* yacc.c:1646  */
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
#line 15728 "parser.c" /* yacc.c:1646  */
    break;

  case 1352:
#line 9580 "parser.y" /* yacc.c:1646  */
    {
	use_global_ind = 0;
  }
#line 15736 "parser.c" /* yacc.c:1646  */
    break;

  case 1353:
#line 9584 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else {
		use_global_ind = 1;
		current_program->flag_global_use = 1;
	}
  }
#line 15749 "parser.c" /* yacc.c:1646  */
    break;

  case 1354:
#line 9596 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		l;

	for (l = (yyvsp[0]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			set_up_use_file (CB_FILE (cb_ref (CB_VALUE (l))));
		}
	}
  }
#line 15763 "parser.c" /* yacc.c:1646  */
    break;

  case 1355:
#line 9606 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
#line 15772 "parser.c" /* yacc.c:1646  */
    break;

  case 1356:
#line 9611 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
#line 15781 "parser.c" /* yacc.c:1646  */
    break;

  case 1357:
#line 9616 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
#line 15790 "parser.c" /* yacc.c:1646  */
    break;

  case 1358:
#line 9621 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
#line 15799 "parser.c" /* yacc.c:1646  */
    break;

  case 1359:
#line 9629 "parser.y" /* yacc.c:1646  */
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
#line 15838 "parser.c" /* yacc.c:1646  */
    break;

  case 1362:
#line 9672 "parser.y" /* yacc.c:1646  */
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
#line 15882 "parser.c" /* yacc.c:1646  */
    break;

  case 1363:
#line 9712 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_debugging) {
		if (current_program->all_procedure) {
			cb_error (_("Duplicate USE DEBUGGING ON ALL PROCEDURES"));
		} else {
			current_program->all_procedure = current_section;
		}
	}
  }
#line 15896 "parser.c" /* yacc.c:1646  */
    break;

  case 1364:
#line 9722 "parser.y" /* yacc.c:1646  */
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
#line 15921 "parser.c" /* yacc.c:1646  */
    break;

  case 1369:
#line 9752 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "USE AT");
	}
  }
#line 15931 "parser.c" /* yacc.c:1646  */
    break;

  case 1370:
#line 9761 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	/* emit_entry ("_START", 0, NULL); */
	PENDING ("USE AT PROGRAM START");
  }
#line 15941 "parser.c" /* yacc.c:1646  */
    break;

  case 1371:
#line 9767 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	/* emit_entry ("_END", 0, NULL); */
	PENDING ("USE AT PROGRAM END");
  }
#line 15951 "parser.c" /* yacc.c:1646  */
    break;

  case 1372:
#line 9777 "parser.y" /* yacc.c:1646  */
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE BEFORE REPORTING"));
	PENDING ("USE BEFORE REPORTING");
  }
#line 15961 "parser.c" /* yacc.c:1646  */
    break;

  case 1373:
#line 9786 "parser.y" /* yacc.c:1646  */
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	PENDING ("USE AFTER EXCEPTION CONDITION");
  }
#line 15971 "parser.c" /* yacc.c:1646  */
    break;

  case 1376:
#line 9802 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 15982 "parser.c" /* yacc.c:1646  */
    break;

  case 1378:
#line 9814 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE ((yyvsp[-4]))) {
		cb_emit_write ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
	}
	start_debug = save_debug;
  }
#line 15993 "parser.c" /* yacc.c:1646  */
    break;

  case 1379:
#line 9823 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15999 "parser.c" /* yacc.c:1646  */
    break;

  case 1380:
#line 9824 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16005 "parser.c" /* yacc.c:1646  */
    break;

  case 1381:
#line 9829 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 16013 "parser.c" /* yacc.c:1646  */
    break;

  case 1382:
#line 9833 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 16021 "parser.c" /* yacc.c:1646  */
    break;

  case 1383:
#line 9837 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 16029 "parser.c" /* yacc.c:1646  */
    break;

  case 1384:
#line 9841 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[-2]));
  }
#line 16037 "parser.c" /* yacc.c:1646  */
    break;

  case 1385:
#line 9847 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 16043 "parser.c" /* yacc.c:1646  */
    break;

  case 1386:
#line 9848 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_AFTER; }
#line 16049 "parser.c" /* yacc.c:1646  */
    break;

  case 1389:
#line 9858 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  }
#line 16057 "parser.c" /* yacc.c:1646  */
    break;

  case 1390:
#line 9862 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  }
#line 16065 "parser.c" /* yacc.c:1646  */
    break;

  case 1393:
#line 9879 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16074 "parser.c" /* yacc.c:1646  */
    break;

  case 1397:
#line 9894 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16083 "parser.c" /* yacc.c:1646  */
    break;

  case 1402:
#line 9912 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16092 "parser.c" /* yacc.c:1646  */
    break;

  case 1404:
#line 9922 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16101 "parser.c" /* yacc.c:1646  */
    break;

  case 1407:
#line 9937 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16110 "parser.c" /* yacc.c:1646  */
    break;

  case 1409:
#line 9947 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16119 "parser.c" /* yacc.c:1646  */
    break;

  case 1412:
#line 9964 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16128 "parser.c" /* yacc.c:1646  */
    break;

  case 1414:
#line 9975 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16137 "parser.c" /* yacc.c:1646  */
    break;

  case 1420:
#line 9998 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16146 "parser.c" /* yacc.c:1646  */
    break;

  case 1421:
#line 10007 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16155 "parser.c" /* yacc.c:1646  */
    break;

  case 1425:
#line 10024 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16164 "parser.c" /* yacc.c:1646  */
    break;

  case 1426:
#line 10033 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16173 "parser.c" /* yacc.c:1646  */
    break;

  case 1429:
#line 10050 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16182 "parser.c" /* yacc.c:1646  */
    break;

  case 1431:
#line 10060 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16191 "parser.c" /* yacc.c:1646  */
    break;

  case 1432:
#line 10070 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_one;
  }
#line 16199 "parser.c" /* yacc.c:1646  */
    break;

  case 1433:
#line 10074 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 16207 "parser.c" /* yacc.c:1646  */
    break;

  case 1434:
#line 10084 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_cond ((yyvsp[0]));
  }
#line 16215 "parser.c" /* yacc.c:1646  */
    break;

  case 1435:
#line 10091 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_expr ((yyvsp[0]));
  }
#line 16223 "parser.c" /* yacc.c:1646  */
    break;

  case 1436:
#line 10097 "parser.y" /* yacc.c:1646  */
    {
	current_expr = NULL;
	cb_exp_line = cb_source_line;
  }
#line 16232 "parser.c" /* yacc.c:1646  */
    break;

  case 1437:
#line 10102 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_expr);
  }
#line 16240 "parser.c" /* yacc.c:1646  */
    break;

  case 1441:
#line 10115 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE_P ((yyvsp[0])) && CB_CLASS_NAME_P (cb_ref ((yyvsp[0])))) {
		push_expr ('C', (yyvsp[0]));
	} else {
		push_expr ('x', (yyvsp[0]));
	}
  }
#line 16252 "parser.c" /* yacc.c:1646  */
    break;

  case 1442:
#line 10123 "parser.y" /* yacc.c:1646  */
    { push_expr ('(', NULL); }
#line 16258 "parser.c" /* yacc.c:1646  */
    break;

  case 1443:
#line 10124 "parser.y" /* yacc.c:1646  */
    { push_expr (')', NULL); }
#line 16264 "parser.c" /* yacc.c:1646  */
    break;

  case 1444:
#line 10126 "parser.y" /* yacc.c:1646  */
    { push_expr ('+', NULL); }
#line 16270 "parser.c" /* yacc.c:1646  */
    break;

  case 1445:
#line 10127 "parser.y" /* yacc.c:1646  */
    { push_expr ('-', NULL); }
#line 16276 "parser.c" /* yacc.c:1646  */
    break;

  case 1446:
#line 10128 "parser.y" /* yacc.c:1646  */
    { push_expr ('*', NULL); }
#line 16282 "parser.c" /* yacc.c:1646  */
    break;

  case 1447:
#line 10129 "parser.y" /* yacc.c:1646  */
    { push_expr ('/', NULL); }
#line 16288 "parser.c" /* yacc.c:1646  */
    break;

  case 1448:
#line 10130 "parser.y" /* yacc.c:1646  */
    { push_expr ('^', NULL); }
#line 16294 "parser.c" /* yacc.c:1646  */
    break;

  case 1449:
#line 10132 "parser.y" /* yacc.c:1646  */
    { push_expr ('=', NULL); }
#line 16300 "parser.c" /* yacc.c:1646  */
    break;

  case 1450:
#line 10133 "parser.y" /* yacc.c:1646  */
    { push_expr ('>', NULL); }
#line 16306 "parser.c" /* yacc.c:1646  */
    break;

  case 1451:
#line 10134 "parser.y" /* yacc.c:1646  */
    { push_expr ('<', NULL); }
#line 16312 "parser.c" /* yacc.c:1646  */
    break;

  case 1452:
#line 10135 "parser.y" /* yacc.c:1646  */
    { push_expr (']', NULL); }
#line 16318 "parser.c" /* yacc.c:1646  */
    break;

  case 1453:
#line 10136 "parser.y" /* yacc.c:1646  */
    { push_expr ('[', NULL); }
#line 16324 "parser.c" /* yacc.c:1646  */
    break;

  case 1454:
#line 10137 "parser.y" /* yacc.c:1646  */
    { push_expr ('~', NULL); }
#line 16330 "parser.c" /* yacc.c:1646  */
    break;

  case 1455:
#line 10139 "parser.y" /* yacc.c:1646  */
    { push_expr ('!', NULL); }
#line 16336 "parser.c" /* yacc.c:1646  */
    break;

  case 1456:
#line 10140 "parser.y" /* yacc.c:1646  */
    { push_expr ('&', NULL); }
#line 16342 "parser.c" /* yacc.c:1646  */
    break;

  case 1457:
#line 10141 "parser.y" /* yacc.c:1646  */
    { push_expr ('|', NULL); }
#line 16348 "parser.c" /* yacc.c:1646  */
    break;

  case 1458:
#line 10143 "parser.y" /* yacc.c:1646  */
    { push_expr ('O', NULL); }
#line 16354 "parser.c" /* yacc.c:1646  */
    break;

  case 1459:
#line 10144 "parser.y" /* yacc.c:1646  */
    { push_expr ('9', NULL); }
#line 16360 "parser.c" /* yacc.c:1646  */
    break;

  case 1460:
#line 10145 "parser.y" /* yacc.c:1646  */
    { push_expr ('A', NULL); }
#line 16366 "parser.c" /* yacc.c:1646  */
    break;

  case 1461:
#line 10146 "parser.y" /* yacc.c:1646  */
    { push_expr ('L', NULL); }
#line 16372 "parser.c" /* yacc.c:1646  */
    break;

  case 1462:
#line 10147 "parser.y" /* yacc.c:1646  */
    { push_expr ('U', NULL); }
#line 16378 "parser.c" /* yacc.c:1646  */
    break;

  case 1463:
#line 10150 "parser.y" /* yacc.c:1646  */
    { push_expr ('P', NULL); }
#line 16384 "parser.c" /* yacc.c:1646  */
    break;

  case 1464:
#line 10151 "parser.y" /* yacc.c:1646  */
    { push_expr ('N', NULL); }
#line 16390 "parser.c" /* yacc.c:1646  */
    break;

  case 1473:
#line 10181 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16398 "parser.c" /* yacc.c:1646  */
    break;

  case 1474:
#line 10185 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 16406 "parser.c" /* yacc.c:1646  */
    break;

  case 1478:
#line 10196 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '+', (yyvsp[0])); }
#line 16412 "parser.c" /* yacc.c:1646  */
    break;

  case 1479:
#line 10197 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '-', (yyvsp[0])); }
#line 16418 "parser.c" /* yacc.c:1646  */
    break;

  case 1480:
#line 10198 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16424 "parser.c" /* yacc.c:1646  */
    break;

  case 1481:
#line 10202 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '*', (yyvsp[0])); }
#line 16430 "parser.c" /* yacc.c:1646  */
    break;

  case 1482:
#line 10203 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '/', (yyvsp[0])); }
#line 16436 "parser.c" /* yacc.c:1646  */
    break;

  case 1483:
#line 10204 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16442 "parser.c" /* yacc.c:1646  */
    break;

  case 1484:
#line 10209 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_binary_op ((yyvsp[-2]), '^', (yyvsp[0]));
  }
#line 16450 "parser.c" /* yacc.c:1646  */
    break;

  case 1485:
#line 10212 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16456 "parser.c" /* yacc.c:1646  */
    break;

  case 1486:
#line 10216 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16462 "parser.c" /* yacc.c:1646  */
    break;

  case 1487:
#line 10217 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[0])); }
#line 16468 "parser.c" /* yacc.c:1646  */
    break;

  case 1488:
#line 10218 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16474 "parser.c" /* yacc.c:1646  */
    break;

  case 1489:
#line 10221 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 16480 "parser.c" /* yacc.c:1646  */
    break;

  case 1490:
#line 10222 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16486 "parser.c" /* yacc.c:1646  */
    break;

  case 1491:
#line 10233 "parser.y" /* yacc.c:1646  */
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
#line 16502 "parser.c" /* yacc.c:1646  */
    break;

  case 1492:
#line 10245 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_FILE (cb_ref ((yyvsp[0])))->linage_ctr;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16515 "parser.c" /* yacc.c:1646  */
    break;

  case 1493:
#line 10254 "parser.y" /* yacc.c:1646  */
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
#line 16531 "parser.c" /* yacc.c:1646  */
    break;

  case 1494:
#line 10266 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->line_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16544 "parser.c" /* yacc.c:1646  */
    break;

  case 1495:
#line 10275 "parser.y" /* yacc.c:1646  */
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
#line 16560 "parser.c" /* yacc.c:1646  */
    break;

  case 1496:
#line 10287 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->page_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16573 "parser.c" /* yacc.c:1646  */
    break;

  case 1497:
#line 10301 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16579 "parser.c" /* yacc.c:1646  */
    break;

  case 1498:
#line 10303 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 16585 "parser.c" /* yacc.c:1646  */
    break;

  case 1499:
#line 10308 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-1]));
  }
#line 16593 "parser.c" /* yacc.c:1646  */
    break;

  case 1500:
#line 10316 "parser.y" /* yacc.c:1646  */
    { cb_build_identifier ((yyvsp[0]), 0); }
#line 16599 "parser.c" /* yacc.c:1646  */
    break;

  case 1501:
#line 10323 "parser.y" /* yacc.c:1646  */
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
#line 16618 "parser.c" /* yacc.c:1646  */
    break;

  case 1502:
#line 10343 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16626 "parser.c" /* yacc.c:1646  */
    break;

  case 1503:
#line 10347 "parser.y" /* yacc.c:1646  */
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
#line 16648 "parser.c" /* yacc.c:1646  */
    break;

  case 1504:
#line 10368 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16661 "parser.c" /* yacc.c:1646  */
    break;

  case 1505:
#line 10409 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16674 "parser.c" /* yacc.c:1646  */
    break;

  case 1506:
#line 10422 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 16680 "parser.c" /* yacc.c:1646  */
    break;

  case 1507:
#line 10424 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 16686 "parser.c" /* yacc.c:1646  */
    break;

  case 1508:
#line 10428 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16692 "parser.c" /* yacc.c:1646  */
    break;

  case 1509:
#line 10434 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16698 "parser.c" /* yacc.c:1646  */
    break;

  case 1510:
#line 10436 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 16704 "parser.c" /* yacc.c:1646  */
    break;

  case 1511:
#line 10441 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE ((yyval))->offset = CB_TREE (current_section);
	CB_REFERENCE ((yyval))->flag_in_decl = !!in_declaratives;
	CB_REFERENCE ((yyval))->section = current_section;
	CB_REFERENCE ((yyval))->paragraph = current_paragraph;
	CB_ADD_TO_CHAIN ((yyval), current_program->label_list);
  }
#line 16717 "parser.c" /* yacc.c:1646  */
    break;

  case 1514:
#line 10455 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 16725 "parser.c" /* yacc.c:1646  */
    break;

  case 1515:
#line 10462 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[0]))->data));
	(yyval)->source_file = (yyvsp[0])->source_file;
	(yyval)->source_line = (yyvsp[0])->source_line;
  }
#line 16735 "parser.c" /* yacc.c:1646  */
    break;

  case 1516:
#line 10472 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 16741 "parser.c" /* yacc.c:1646  */
    break;

  case 1517:
#line 10473 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 16747 "parser.c" /* yacc.c:1646  */
    break;

  case 1518:
#line 10478 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 16756 "parser.c" /* yacc.c:1646  */
    break;

  case 1519:
#line 10486 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 16765 "parser.c" /* yacc.c:1646  */
    break;

  case 1520:
#line 10494 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16773 "parser.c" /* yacc.c:1646  */
    break;

  case 1521:
#line 10498 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16781 "parser.c" /* yacc.c:1646  */
    break;

  case 1522:
#line 10505 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 16791 "parser.c" /* yacc.c:1646  */
    break;

  case 1525:
#line 10521 "parser.y" /* yacc.c:1646  */
    {
	if (CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[0]);
	}
  }
#line 16804 "parser.c" /* yacc.c:1646  */
    break;

  case 1526:
#line 10530 "parser.y" /* yacc.c:1646  */
    {
	  yyclearin;
	  yyerrok;
	  (yyval) = cb_error_node;
  }
#line 16814 "parser.c" /* yacc.c:1646  */
    break;

  case 1527:
#line 10541 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE ((yyvsp[0]))->flag_duped || CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = NULL;
	} else {
		CB_WORD_COUNT ((yyvsp[0]))++;
		(yyval) = (yyvsp[0]);
	}
  }
#line 16828 "parser.c" /* yacc.c:1646  */
    break;

  case 1528:
#line 10558 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16836 "parser.c" /* yacc.c:1646  */
    break;

  case 1529:
#line 10562 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16844 "parser.c" /* yacc.c:1646  */
    break;

  case 1532:
#line 10571 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 16852 "parser.c" /* yacc.c:1646  */
    break;

  case 1533:
#line 10577 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16858 "parser.c" /* yacc.c:1646  */
    break;

  case 1534:
#line 10578 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16864 "parser.c" /* yacc.c:1646  */
    break;

  case 1535:
#line 10583 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16872 "parser.c" /* yacc.c:1646  */
    break;

  case 1536:
#line 10587 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16880 "parser.c" /* yacc.c:1646  */
    break;

  case 1541:
#line 10598 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16888 "parser.c" /* yacc.c:1646  */
    break;

  case 1542:
#line 10602 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16896 "parser.c" /* yacc.c:1646  */
    break;

  case 1543:
#line 10606 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16904 "parser.c" /* yacc.c:1646  */
    break;

  case 1544:
#line 10610 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_ppointer ((yyvsp[0]));
  }
#line 16912 "parser.c" /* yacc.c:1646  */
    break;

  case 1545:
#line 10614 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 16920 "parser.c" /* yacc.c:1646  */
    break;

  case 1546:
#line 10618 "parser.y" /* yacc.c:1646  */
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
#line 16942 "parser.c" /* yacc.c:1646  */
    break;

  case 1547:
#line 10639 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16950 "parser.c" /* yacc.c:1646  */
    break;

  case 1548:
#line 10643 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16958 "parser.c" /* yacc.c:1646  */
    break;

  case 1556:
#line 10660 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16966 "parser.c" /* yacc.c:1646  */
    break;

  case 1557:
#line 10664 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16974 "parser.c" /* yacc.c:1646  */
    break;

  case 1558:
#line 10668 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16982 "parser.c" /* yacc.c:1646  */
    break;

  case 1567:
#line 10702 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 16990 "parser.c" /* yacc.c:1646  */
    break;

  case 1569:
#line 10710 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 16998 "parser.c" /* yacc.c:1646  */
    break;

  case 1572:
#line 10719 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17006 "parser.c" /* yacc.c:1646  */
    break;

  case 1574:
#line 10724 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_zero;
  }
#line 17014 "parser.c" /* yacc.c:1646  */
    break;

  case 1575:
#line 10731 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17022 "parser.c" /* yacc.c:1646  */
    break;

  case 1577:
#line 10739 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17030 "parser.c" /* yacc.c:1646  */
    break;

  case 1579:
#line 10747 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17038 "parser.c" /* yacc.c:1646  */
    break;

  case 1582:
#line 10757 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 0); }
#line 17044 "parser.c" /* yacc.c:1646  */
    break;

  case 1583:
#line 10761 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 1); }
#line 17050 "parser.c" /* yacc.c:1646  */
    break;

  case 1584:
#line 10765 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17056 "parser.c" /* yacc.c:1646  */
    break;

  case 1585:
#line 10766 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 17062 "parser.c" /* yacc.c:1646  */
    break;

  case 1586:
#line 10770 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 0); }
#line 17068 "parser.c" /* yacc.c:1646  */
    break;

  case 1587:
#line 10775 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 17079 "parser.c" /* yacc.c:1646  */
    break;

  case 1588:
#line 10782 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 17090 "parser.c" /* yacc.c:1646  */
    break;

  case 1589:
#line 10789 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 17101 "parser.c" /* yacc.c:1646  */
    break;

  case 1590:
#line 10796 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 17112 "parser.c" /* yacc.c:1646  */
    break;

  case 1591:
#line 10806 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_identifier ((yyvsp[0]), 0);
  }
#line 17120 "parser.c" /* yacc.c:1646  */
    break;

  case 1592:
#line 10813 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (CB_REFERENCE_P ((yyvsp[-2]))) {
		CB_REFERENCE ((yyvsp[-2]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 17134 "parser.c" /* yacc.c:1646  */
    break;

  case 1593:
#line 10823 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 17148 "parser.c" /* yacc.c:1646  */
    break;

  case 1594:
#line 10833 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 17162 "parser.c" /* yacc.c:1646  */
    break;

  case 1595:
#line 10843 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (CB_REFERENCE_P ((yyvsp[0]))) {
		CB_REFERENCE ((yyvsp[0]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 17176 "parser.c" /* yacc.c:1646  */
    break;

  case 1596:
#line 10856 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17184 "parser.c" /* yacc.c:1646  */
    break;

  case 1597:
#line 10860 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 17193 "parser.c" /* yacc.c:1646  */
    break;

  case 1598:
#line 10868 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-3]))->subs = cb_list_reverse ((yyvsp[-1]));
  }
#line 17202 "parser.c" /* yacc.c:1646  */
    break;

  case 1599:
#line 10876 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-4]))->offset = (yyvsp[-2]);
  }
#line 17210 "parser.c" /* yacc.c:1646  */
    break;

  case 1600:
#line 10880 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-5]))->offset = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-5]))->length = (yyvsp[-1]);
  }
#line 17219 "parser.c" /* yacc.c:1646  */
    break;

  case 1601:
#line 10890 "parser.y" /* yacc.c:1646  */
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
#line 17234 "parser.c" /* yacc.c:1646  */
    break;

  case 1602:
#line 10904 "parser.y" /* yacc.c:1646  */
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
#line 17258 "parser.c" /* yacc.c:1646  */
    break;

  case 1603:
#line 10927 "parser.y" /* yacc.c:1646  */
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
#line 17281 "parser.c" /* yacc.c:1646  */
    break;

  case 1604:
#line 10949 "parser.y" /* yacc.c:1646  */
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
#line 17301 "parser.c" /* yacc.c:1646  */
    break;

  case 1605:
#line 10964 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 17307 "parser.c" /* yacc.c:1646  */
    break;

  case 1606:
#line 10965 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 17313 "parser.c" /* yacc.c:1646  */
    break;

  case 1607:
#line 10966 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 17319 "parser.c" /* yacc.c:1646  */
    break;

  case 1608:
#line 10967 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 17325 "parser.c" /* yacc.c:1646  */
    break;

  case 1609:
#line 10968 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 17331 "parser.c" /* yacc.c:1646  */
    break;

  case 1610:
#line 10969 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 17337 "parser.c" /* yacc.c:1646  */
    break;

  case 1611:
#line 10974 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17345 "parser.c" /* yacc.c:1646  */
    break;

  case 1612:
#line 10978 "parser.y" /* yacc.c:1646  */
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
#line 17363 "parser.c" /* yacc.c:1646  */
    break;

  case 1613:
#line 10995 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17371 "parser.c" /* yacc.c:1646  */
    break;

  case 1614:
#line 10999 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_concat_literals ((yyvsp[-2]), (yyvsp[0]));
  }
#line 17379 "parser.c" /* yacc.c:1646  */
    break;

  case 1615:
#line 11005 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17385 "parser.c" /* yacc.c:1646  */
    break;

  case 1616:
#line 11006 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 17391 "parser.c" /* yacc.c:1646  */
    break;

  case 1617:
#line 11007 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 17397 "parser.c" /* yacc.c:1646  */
    break;

  case 1618:
#line 11008 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 17403 "parser.c" /* yacc.c:1646  */
    break;

  case 1619:
#line 11009 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 17409 "parser.c" /* yacc.c:1646  */
    break;

  case 1620:
#line 11010 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 17415 "parser.c" /* yacc.c:1646  */
    break;

  case 1621:
#line 11011 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 17421 "parser.c" /* yacc.c:1646  */
    break;

  case 1622:
#line 11018 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), NULL, (yyvsp[0]), 0);
  }
#line 17429 "parser.c" /* yacc.c:1646  */
    break;

  case 1623:
#line 11022 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), CB_LIST_INIT ((yyvsp[-2])), (yyvsp[0]), 0);
  }
#line 17437 "parser.c" /* yacc.c:1646  */
    break;

  case 1624:
#line 11026 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17445 "parser.c" /* yacc.c:1646  */
    break;

  case 1625:
#line 11030 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17453 "parser.c" /* yacc.c:1646  */
    break;

  case 1626:
#line 11034 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-3]), (yyvsp[-1]), NULL, 0);
  }
#line 17461 "parser.c" /* yacc.c:1646  */
    break;

  case 1627:
#line 11038 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17469 "parser.c" /* yacc.c:1646  */
    break;

  case 1628:
#line 11042 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17477 "parser.c" /* yacc.c:1646  */
    break;

  case 1629:
#line 11046 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17485 "parser.c" /* yacc.c:1646  */
    break;

  case 1630:
#line 11050 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17493 "parser.c" /* yacc.c:1646  */
    break;

  case 1631:
#line 11054 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17501 "parser.c" /* yacc.c:1646  */
    break;

  case 1632:
#line 11058 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 0);
  }
#line 17509 "parser.c" /* yacc.c:1646  */
    break;

  case 1633:
#line 11062 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 1);
  }
#line 17517 "parser.c" /* yacc.c:1646  */
    break;

  case 1643:
#line 11087 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17525 "parser.c" /* yacc.c:1646  */
    break;

  case 1644:
#line 11091 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), NULL);
  }
#line 17533 "parser.c" /* yacc.c:1646  */
    break;

  case 1645:
#line 11095 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 17541 "parser.c" /* yacc.c:1646  */
    break;

  case 1646:
#line 11102 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17549 "parser.c" /* yacc.c:1646  */
    break;

  case 1647:
#line 11106 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 17557 "parser.c" /* yacc.c:1646  */
    break;

  case 1648:
#line 11110 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17565 "parser.c" /* yacc.c:1646  */
    break;

  case 1649:
#line 11117 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_int0);
  }
#line 17576 "parser.c" /* yacc.c:1646  */
    break;

  case 1650:
#line 11124 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int1);
  }
#line 17587 "parser.c" /* yacc.c:1646  */
    break;

  case 1651:
#line 11131 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int2);
  }
#line 17598 "parser.c" /* yacc.c:1646  */
    break;

  case 1652:
#line 11141 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 17609 "parser.c" /* yacc.c:1646  */
    break;

  case 1653:
#line 11148 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, (yyvsp[0]));
  }
#line 17620 "parser.c" /* yacc.c:1646  */
    break;

  case 1654:
#line 11158 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 17631 "parser.c" /* yacc.c:1646  */
    break;

  case 1655:
#line 11165 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[0])));
  }
#line 17642 "parser.c" /* yacc.c:1646  */
    break;

  case 1656:
#line 11175 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 17650 "parser.c" /* yacc.c:1646  */
    break;

  case 1657:
#line 11179 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 4) {
		cb_error_x ((yyvsp[-2]), _("Cannot specify offset and SYSTEM-OFFSET at the same time."));
	}

	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 17664 "parser.c" /* yacc.c:1646  */
    break;

  case 1658:
#line 11192 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 17672 "parser.c" /* yacc.c:1646  */
    break;

  case 1659:
#line 11196 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 3) {
		cb_error_x ((yyvsp[-2]), _("Cannot specify offset and SYSTEM-OFFSET at the same time."));
	}

	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 17686 "parser.c" /* yacc.c:1646  */
    break;

  case 1660:
#line 11210 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 1;
  }
#line 17694 "parser.c" /* yacc.c:1646  */
    break;

  case 1661:
#line 11218 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17700 "parser.c" /* yacc.c:1646  */
    break;

  case 1662:
#line 11219 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17706 "parser.c" /* yacc.c:1646  */
    break;

  case 1663:
#line 11223 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17712 "parser.c" /* yacc.c:1646  */
    break;

  case 1664:
#line 11224 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17718 "parser.c" /* yacc.c:1646  */
    break;

  case 1665:
#line 11228 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17724 "parser.c" /* yacc.c:1646  */
    break;

  case 1666:
#line 11229 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17730 "parser.c" /* yacc.c:1646  */
    break;

  case 1667:
#line 11234 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17738 "parser.c" /* yacc.c:1646  */
    break;

  case 1668:
#line 11238 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17746 "parser.c" /* yacc.c:1646  */
    break;

  case 1669:
#line 11245 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17754 "parser.c" /* yacc.c:1646  */
    break;

  case 1670:
#line 11249 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17762 "parser.c" /* yacc.c:1646  */
    break;

  case 1671:
#line 11256 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17768 "parser.c" /* yacc.c:1646  */
    break;

  case 1672:
#line 11257 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17774 "parser.c" /* yacc.c:1646  */
    break;

  case 1673:
#line 11258 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 17780 "parser.c" /* yacc.c:1646  */
    break;

  case 1674:
#line 11262 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17786 "parser.c" /* yacc.c:1646  */
    break;

  case 1675:
#line 11263 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 17792 "parser.c" /* yacc.c:1646  */
    break;

  case 1676:
#line 11267 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (cb_flag_optional_file); }
#line 17798 "parser.c" /* yacc.c:1646  */
    break;

  case 1677:
#line 11268 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17804 "parser.c" /* yacc.c:1646  */
    break;

  case 1678:
#line 11269 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17810 "parser.c" /* yacc.c:1646  */
    break;

  case 1679:
#line 11274 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 17818 "parser.c" /* yacc.c:1646  */
    break;

  case 1680:
#line 11278 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int (COB_STORE_ROUND);
	}
	cobc_cs_check = 0;
  }
#line 17831 "parser.c" /* yacc.c:1646  */
    break;

  case 1681:
#line 11290 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 17840 "parser.c" /* yacc.c:1646  */
    break;

  case 1682:
#line 11295 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	cobc_cs_check = 0;
  }
#line 17849 "parser.c" /* yacc.c:1646  */
    break;

  case 1683:
#line 11303 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
#line 17857 "parser.c" /* yacc.c:1646  */
    break;

  case 1684:
#line 11307 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
#line 17865 "parser.c" /* yacc.c:1646  */
    break;

  case 1685:
#line 11311 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
#line 17873 "parser.c" /* yacc.c:1646  */
    break;

  case 1686:
#line 11315 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
#line 17881 "parser.c" /* yacc.c:1646  */
    break;

  case 1687:
#line 11319 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
#line 17889 "parser.c" /* yacc.c:1646  */
    break;

  case 1688:
#line 11323 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
#line 17897 "parser.c" /* yacc.c:1646  */
    break;

  case 1689:
#line 11327 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
#line 17905 "parser.c" /* yacc.c:1646  */
    break;

  case 1690:
#line 11331 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
#line 17913 "parser.c" /* yacc.c:1646  */
    break;

  case 1691:
#line 11337 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17919 "parser.c" /* yacc.c:1646  */
    break;

  case 1692:
#line 11338 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17925 "parser.c" /* yacc.c:1646  */
    break;


#line 17929 "parser.c" /* yacc.c:1646  */
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
#line 11510 "parser.y" /* yacc.c:1906  */

