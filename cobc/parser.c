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
    TIMEOUT = 709,
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
    SHIFT_PREFER = 778
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

#line 1884 "parser.c" /* yacc.c:358  */

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
#define YYLAST   8680

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  524
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  832
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1942
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  2778

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   778

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
     515,   516,   517,   518,   519,   520,   521,   522,   523
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  1899,  1899,  1899,  1932,  1933,  1937,  1938,  1942,  1943,
    1947,  1947,  1970,  1981,  1987,  1988,  1992,  1993,  1997,  2005,
    2014,  2022,  2023,  2028,  2027,  2040,  2051,  2062,  2066,  2067,
    2071,  2072,  2075,  2076,  2080,  2089,  2098,  2099,  2103,  2107,
    2117,  2122,  2123,  2132,  2139,  2140,  2150,  2151,  2152,  2153,
    2154,  2167,  2166,  2176,  2177,  2180,  2181,  2195,  2194,  2204,
    2205,  2206,  2207,  2211,  2212,  2216,  2217,  2218,  2219,  2223,
    2231,  2238,  2245,  2256,  2260,  2264,  2268,  2275,  2276,  2281,
    2283,  2282,  2293,  2294,  2295,  2302,  2303,  2307,  2311,  2317,
    2322,  2325,  2332,  2337,  2347,  2348,  2360,  2361,  2365,  2366,
    2370,  2371,  2375,  2376,  2377,  2378,  2379,  2380,  2381,  2382,
    2383,  2384,  2385,  2386,  2394,  2393,  2421,  2431,  2444,  2452,
    2455,  2456,  2460,  2467,  2482,  2503,  2502,  2526,  2532,  2538,
    2544,  2550,  2556,  2566,  2570,  2577,  2581,  2586,  2585,  2596,
    2600,  2607,  2608,  2609,  2610,  2611,  2612,  2616,  2617,  2624,
    2639,  2642,  2649,  2657,  2661,  2672,  2692,  2700,  2711,  2712,
    2718,  2739,  2740,  2744,  2748,  2769,  2792,  2874,  2877,  2886,
    2905,  2921,  2939,  2957,  2974,  2991,  3001,  3002,  3009,  3010,
    3018,  3019,  3029,  3030,  3035,  3034,  3064,  3065,  3069,  3070,
    3071,  3072,  3073,  3074,  3075,  3076,  3077,  3078,  3079,  3080,
    3081,  3088,  3094,  3104,  3117,  3130,  3157,  3158,  3159,  3163,
    3164,  3165,  3166,  3169,  3170,  3176,  3177,  3181,  3185,  3186,
    3191,  3194,  3195,  3202,  3210,  3211,  3212,  3219,  3243,  3245,
    3250,  3260,  3268,  3283,  3290,  3292,  3293,  3299,  3299,  3306,
    3311,  3316,  3323,  3324,  3325,  3329,  3340,  3341,  3345,  3350,
    3355,  3360,  3371,  3382,  3392,  3400,  3401,  3402,  3408,  3419,
    3426,  3427,  3433,  3441,  3442,  3443,  3449,  3450,  3451,  3458,
    3459,  3463,  3464,  3470,  3498,  3499,  3500,  3501,  3508,  3507,
    3523,  3524,  3528,  3531,  3532,  3542,  3539,  3555,  3556,  3564,
    3565,  3573,  3574,  3578,  3599,  3598,  3615,  3622,  3626,  3632,
    3633,  3637,  3647,  3662,  3663,  3664,  3665,  3666,  3667,  3668,
    3669,  3670,  3677,  3684,  3684,  3684,  3690,  3710,  3744,  3775,
    3776,  3783,  3784,  3788,  3789,  3796,  3807,  3812,  3823,  3824,
    3828,  3829,  3835,  3846,  3864,  3865,  3869,  3870,  3871,  3875,
    3882,  3889,  3898,  3907,  3908,  3909,  3910,  3911,  3920,  3921,
    3927,  3962,  3963,  3976,  3991,  3992,  3996,  4006,  4020,  4022,
    4021,  4037,  4040,  4040,  4057,  4058,  4062,  4064,  4063,  4098,
    4111,  4119,  4124,  4130,  4139,  4149,  4152,  4164,  4165,  4166,
    4167,  4171,  4175,  4179,  4183,  4187,  4191,  4195,  4199,  4203,
    4207,  4211,  4215,  4219,  4230,  4231,  4235,  4236,  4240,  4241,
    4242,  4246,  4247,  4251,  4277,  4281,  4290,  4294,  4303,  4304,
    4305,  4306,  4307,  4308,  4309,  4310,  4311,  4312,  4313,  4314,
    4315,  4316,  4323,  4347,  4375,  4378,  4387,  4412,  4423,  4424,
    4428,  4432,  4436,  4440,  4444,  4448,  4452,  4456,  4460,  4464,
    4468,  4472,  4476,  4481,  4486,  4490,  4494,  4502,  4506,  4510,
    4518,  4522,  4526,  4530,  4534,  4538,  4542,  4546,  4550,  4558,
    4566,  4570,  4574,  4578,  4582,  4586,  4594,  4595,  4599,  4600,
    4606,  4612,  4624,  4642,  4643,  4652,  4684,  4714,  4715,  4719,
    4720,  4723,  4724,  4730,  4731,  4738,  4739,  4746,  4770,  4771,
    4788,  4789,  4792,  4793,  4800,  4801,  4806,  4817,  4828,  4839,
    4850,  4879,  4878,  4887,  4888,  4892,  4893,  4896,  4897,  4910,
    4923,  4944,  4953,  4967,  4969,  4968,  4988,  4990,  4989,  5005,
    5007,  5006,  5015,  5016,  5023,  5022,  5035,  5036,  5037,  5044,
    5049,  5053,  5054,  5060,  5067,  5071,  5072,  5078,  5115,  5119,
    5124,  5130,  5131,  5136,  5137,  5138,  5139,  5140,  5144,  5151,
    5158,  5165,  5172,  5178,  5179,  5184,  5183,  5190,  5191,  5195,
    5196,  5197,  5198,  5199,  5200,  5201,  5202,  5203,  5204,  5205,
    5206,  5207,  5208,  5209,  5210,  5214,  5221,  5222,  5223,  5224,
    5225,  5226,  5227,  5230,  5231,  5232,  5235,  5236,  5240,  5247,
    5253,  5254,  5258,  5259,  5263,  5270,  5274,  5281,  5282,  5286,
    5293,  5294,  5298,  5299,  5303,  5304,  5305,  5309,  5310,  5314,
    5315,  5319,  5326,  5333,  5341,  5343,  5342,  5363,  5364,  5368,
    5369,  5373,  5375,  5374,  5445,  5463,  5464,  5468,  5473,  5478,
    5482,  5486,  5491,  5496,  5501,  5506,  5510,  5514,  5519,  5524,
    5529,  5533,  5537,  5541,  5545,  5550,  5554,  5558,  5563,  5568,
    5573,  5578,  5579,  5580,  5581,  5582,  5583,  5584,  5585,  5586,
    5595,  5600,  5611,  5612,  5616,  5617,  5621,  5622,  5626,  5627,
    5632,  5635,  5639,  5647,  5650,  5654,  5662,  5673,  5681,  5683,
    5693,  5682,  5720,  5720,  5753,  5757,  5756,  5770,  5769,  5789,
    5790,  5795,  5817,  5819,  5823,  5834,  5836,  5844,  5852,  5860,
    5889,  5922,  5925,  5938,  5943,  5953,  5984,  5986,  5985,  6022,
    6023,  6027,  6028,  6029,  6046,  6047,  6058,  6057,  6107,  6108,
    6112,  6160,  6173,  6176,  6195,  6200,  6194,  6213,  6213,  6243,
    6250,  6251,  6252,  6253,  6254,  6255,  6256,  6257,  6258,  6259,
    6260,  6261,  6262,  6263,  6264,  6265,  6266,  6267,  6268,  6269,
    6270,  6271,  6272,  6273,  6274,  6275,  6276,  6277,  6278,  6279,
    6280,  6281,  6282,  6283,  6284,  6285,  6286,  6287,  6288,  6289,
    6290,  6291,  6292,  6293,  6294,  6295,  6296,  6297,  6298,  6299,
    6313,  6325,  6324,  6340,  6339,  6350,  6354,  6358,  6363,  6368,
    6373,  6378,  6382,  6386,  6390,  6394,  6399,  6403,  6407,  6411,
    6415,  6419,  6423,  6430,  6431,  6437,  6439,  6443,  6444,  6448,
    6449,  6453,  6457,  6461,  6462,  6466,  6478,  6490,  6501,  6505,
    6506,  6510,  6517,  6521,  6527,  6531,  6535,  6539,  6543,  6549,
    6553,  6557,  6563,  6567,  6571,  6575,  6579,  6583,  6587,  6591,
    6595,  6599,  6603,  6609,  6613,  6617,  6621,  6625,  6629,  6633,
    6640,  6641,  6645,  6649,  6667,  6666,  6675,  6679,  6683,  6689,
    6690,  6697,  6701,  6712,  6711,  6720,  6724,  6736,  6737,  6745,
    6744,  6753,  6754,  6758,  6764,  6764,  6771,  6770,  6781,  6809,
    6813,  6818,  6823,  6844,  6848,  6847,  6864,  6865,  6870,  6878,
    6902,  6904,  6908,  6917,  6930,  6933,  6937,  6941,  6946,  6969,
    6970,  6974,  6975,  6980,  6983,  6988,  6997,  7001,  7009,  7013,
    7024,  7023,  7031,  7035,  7046,  7045,  7053,  7058,  7066,  7067,
    7068,  7069,  7070,  7078,  7077,  7086,  7093,  7097,  7107,  7118,
    7136,  7135,  7144,  7148,  7152,  7157,  7165,  7169,  7180,  7179,
    7189,  7193,  7197,  7201,  7205,  7209,  7214,  7221,  7222,  7227,
    7226,  7291,  7295,  7303,  7304,  7308,  7312,  7317,  7321,  7322,
    7326,  7330,  7334,  7338,  7342,  7343,  7347,  7351,  7357,  7363,
    7367,  7371,  7377,  7383,  7389,  7395,  7399,  7403,  7407,  7411,
    7415,  7419,  7423,  7430,  7434,  7445,  7444,  7453,  7457,  7461,
    7465,  7469,  7476,  7480,  7491,  7490,  7499,  7518,  7517,  7541,
    7549,  7550,  7555,  7566,  7577,  7591,  7595,  7602,  7603,  7608,
    7617,  7626,  7631,  7640,  7641,  7646,  7708,  7709,  7710,  7714,
    7715,  7719,  7723,  7734,  7733,  7745,  7746,  7767,  7781,  7803,
    7825,  7845,  7868,  7869,  7877,  7876,  7885,  7896,  7895,  7905,
    7912,  7911,  7924,  7933,  7937,  7948,  7964,  7963,  7972,  7976,
    7980,  7987,  7991,  8002,  8001,  8009,  8017,  8018,  8022,  8023,
    8024,  8029,  8032,  8039,  8043,  8051,  8058,  8059,  8060,  8061,
    8062,  8063,  8064,  8069,  8072,  8082,  8081,  8090,  8096,  8108,
    8107,  8116,  8120,  8124,  8128,  8135,  8136,  8137,  8138,  8145,
    8144,  8158,  8168,  8177,  8178,  8182,  8183,  8184,  8185,  8186,
    8187,  8191,  8192,  8196,  8201,  8208,  8209,  8210,  8211,  8212,
    8216,  8244,  8247,  8254,  8258,  8268,  8267,  8280,  8279,  8287,
    8291,  8302,  8301,  8310,  8314,  8321,  8325,  8336,  8335,  8343,
    8364,  8388,  8389,  8390,  8391,  8395,  8396,  8400,  8401,  8402,
    8403,  8415,  8414,  8425,  8431,  8430,  8441,  8449,  8457,  8464,
    8468,  8481,  8488,  8500,  8503,  8508,  8512,  8523,  8530,  8531,
    8535,  8536,  8539,  8540,  8545,  8556,  8555,  8564,  8591,  8592,
    8597,  8600,  8604,  8608,  8612,  8616,  8620,  8627,  8628,  8632,
    8633,  8637,  8641,  8651,  8662,  8661,  8669,  8679,  8690,  8689,
    8698,  8705,  8709,  8720,  8719,  8731,  8740,  8743,  8747,  8754,
    8758,  8768,  8780,  8779,  8788,  8792,  8801,  8802,  8807,  8810,
    8818,  8822,  8829,  8837,  8841,  8852,  8851,  8865,  8866,  8867,
    8868,  8869,  8870,  8871,  8875,  8876,  8880,  8881,  8887,  8896,
    8903,  8904,  8908,  8912,  8916,  8922,  8928,  8932,  8936,  8940,
    8949,  8953,  8962,  8971,  8972,  8976,  8985,  8986,  8990,  8994,
    9003,  9013,  9012,  9021,  9020,  9051,  9054,  9074,  9075,  9078,
    9079,  9087,  9088,  9093,  9098,  9108,  9124,  9129,  9139,  9156,
    9155,  9165,  9178,  9181,  9189,  9192,  9197,  9202,  9210,  9211,
    9212,  9213,  9214,  9215,  9219,  9227,  9228,  9232,  9236,  9247,
    9246,  9256,  9269,  9272,  9276,  9280,  9288,  9300,  9303,  9310,
    9311,  9312,  9313,  9320,  9319,  9328,  9335,  9336,  9340,  9341,
    9342,  9346,  9347,  9351,  9355,  9366,  9365,  9374,  9378,  9382,
    9389,  9393,  9403,  9414,  9415,  9422,  9421,  9430,  9436,  9448,
    9447,  9455,  9469,  9468,  9476,  9493,  9492,  9501,  9509,  9510,
    9515,  9516,  9521,  9528,  9529,  9534,  9541,  9542,  9546,  9547,
    9551,  9552,  9556,  9560,  9571,  9570,  9579,  9580,  9581,  9582,
    9583,  9587,  9614,  9617,  9629,  9639,  9644,  9649,  9654,  9662,
    9700,  9701,  9705,  9745,  9755,  9778,  9779,  9780,  9781,  9785,
    9794,  9800,  9810,  9819,  9828,  9829,  9836,  9835,  9847,  9857,
    9858,  9863,  9866,  9870,  9874,  9881,  9882,  9886,  9887,  9891,
    9895,  9907,  9910,  9911,  9920,  9921,  9925,  9926,  9935,  9936,
    9940,  9943,  9944,  9953,  9954,  9965,  9968,  9969,  9978,  9979,
    9991,  9994,  9996, 10006, 10007, 10019, 10020, 10024, 10025, 10026,
   10030, 10039, 10050, 10051, 10052, 10056, 10065, 10076, 10081, 10082,
   10091, 10092, 10103, 10107, 10117, 10124, 10131, 10131, 10142, 10143,
   10144, 10148, 10157, 10158, 10160, 10161, 10162, 10163, 10164, 10166,
   10167, 10168, 10169, 10170, 10171, 10173, 10174, 10175, 10177, 10178,
   10179, 10180, 10181, 10184, 10185, 10189, 10190, 10194, 10195, 10199,
   10200, 10204, 10208, 10214, 10218, 10224, 10225, 10226, 10230, 10231,
   10232, 10236, 10237, 10238, 10242, 10246, 10250, 10251, 10252, 10255,
   10256, 10266, 10278, 10287, 10299, 10308, 10320, 10335, 10336, 10341,
   10350, 10356, 10376, 10380, 10401, 10442, 10456, 10457, 10462, 10468,
   10469, 10474, 10486, 10487, 10488, 10495, 10506, 10507, 10511, 10519,
   10527, 10531, 10538, 10547, 10548, 10554, 10563, 10574, 10591, 10595,
   10602, 10603, 10604, 10611, 10612, 10616, 10620, 10627, 10628, 10629,
   10630, 10631, 10635, 10639, 10643, 10647, 10651, 10672, 10676, 10683,
   10684, 10685, 10689, 10690, 10691, 10692, 10693, 10697, 10701, 10708,
   10709, 10713, 10714, 10718, 10719, 10723, 10724, 10735, 10739, 10743,
   10747, 10748, 10752, 10756, 10757, 10764, 10768, 10772, 10776, 10780,
   10784, 10785, 10791, 10795, 10799, 10800, 10804, 10808, 10815, 10822,
   10829, 10839, 10846, 10856, 10866, 10876, 10889, 10893, 10901, 10909,
   10913, 10923, 10937, 10960, 10982, 10998, 10999, 11000, 11001, 11002,
   11003, 11007, 11011, 11028, 11032, 11039, 11040, 11041, 11042, 11043,
   11044, 11045, 11051, 11055, 11059, 11063, 11067, 11071, 11075, 11079,
   11083, 11087, 11091, 11095, 11102, 11103, 11107, 11108, 11109, 11113,
   11114, 11115, 11116, 11120, 11124, 11128, 11135, 11139, 11143, 11150,
   11157, 11164, 11174, 11181, 11191, 11198, 11208, 11212, 11225, 11229,
   11244, 11252, 11253, 11257, 11258, 11262, 11263, 11268, 11271, 11279,
   11282, 11289, 11291, 11292, 11296, 11297, 11301, 11302, 11303, 11308,
   11311, 11324, 11328, 11336, 11340, 11344, 11348, 11352, 11356, 11360,
   11364, 11371, 11372, 11378, 11379, 11380, 11381, 11382, 11383, 11384,
   11385, 11386, 11387, 11388, 11389, 11390, 11391, 11392, 11393, 11394,
   11395, 11396, 11397, 11398, 11399, 11400, 11401, 11402, 11403, 11404,
   11405, 11406, 11407, 11408, 11409, 11410, 11411, 11412, 11413, 11414,
   11415, 11416, 11417, 11418, 11419, 11420, 11421, 11422, 11423, 11424,
   11425, 11426, 11427, 11428, 11429, 11430, 11431, 11432, 11433, 11434,
   11435, 11436, 11437, 11438, 11439, 11440, 11441, 11442, 11443, 11444,
   11445, 11446, 11447, 11454, 11454, 11455, 11455, 11456, 11456, 11457,
   11457, 11458, 11458, 11459, 11459, 11460, 11460, 11461, 11461, 11462,
   11462, 11463, 11463, 11464, 11464, 11465, 11465, 11466, 11466, 11467,
   11467, 11468, 11468, 11469, 11469, 11470, 11470, 11471, 11471, 11472,
   11472, 11472, 11473, 11473, 11474, 11474, 11475, 11475, 11476, 11476,
   11477, 11477, 11477, 11478, 11478, 11479, 11479, 11479, 11480, 11480,
   11480, 11481, 11481, 11481, 11482, 11482, 11483, 11483, 11484, 11484,
   11485, 11485, 11485, 11486, 11486, 11487, 11487, 11488, 11488, 11488,
   11488, 11489, 11489, 11490, 11490, 11491, 11491, 11492, 11492, 11493,
   11493, 11493, 11494, 11494, 11495, 11495, 11496, 11496, 11497, 11497,
   11497, 11498, 11498, 11499, 11499, 11500, 11500, 11501, 11501, 11502,
   11502, 11503, 11503, 11504, 11504, 11505, 11505, 11505, 11506, 11506,
   11507, 11507, 11508, 11508, 11512, 11512, 11513, 11513, 11514, 11514,
   11515, 11515, 11516, 11516, 11517, 11517, 11518, 11518, 11519, 11519,
   11520, 11520, 11521, 11521, 11522, 11522, 11523, 11523, 11524, 11524,
   11525, 11525, 11526, 11526, 11529, 11530, 11531, 11535, 11535, 11536,
   11536, 11537, 11537, 11538, 11538, 11539, 11539, 11540, 11540, 11541,
   11541, 11542, 11542
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
  "TIME", "TIMEOUT", "TIMES", "TO", "\"&\"", "\")\"", "\":\"", "\"/\"",
  "\".\"", "\"=\"", "\"FALSE\"", "\"FILE\"", "\">\"", "\"INITIAL\"",
  "\"<\"", "\"-\"", "\"*\"", "\"NULL\"", "\"OVERFLOW\"", "\"(\"", "\"+\"",
  "\"TRUE\"", "TOP", "\"TOWARD-GREATER\"", "\"TOWARD-LESSER\"", "TRAILING",
  "TRANSFORM", "\"FUNCTION TRIM\"", "TRUNCATION", "TYPE", "U", "UNDERLINE",
  "UNIT", "UNLOCK", "UNSIGNED", "\"UNSIGNED-INT\"", "\"UNSIGNED-LONG\"",
  "\"UNSIGNED-SHORT\"", "UNSTRING", "UNTIL", "UP", "UPDATE", "UPON",
  "\"UPON ARGUMENT-NUMBER\"", "\"UPON COMMAND-LINE\"",
  "\"UPON ENVIRONMENT-NAME\"", "\"UPON ENVIRONMENT-VALUE\"", "UPPER",
  "\"FUNCTION UPPER-CASE\"", "USAGE", "USE", "USER", "\"USER-DEFAULT\"",
  "\"User function name\"", "USING", "V", "VALUE", "VARIABLE", "VARYING",
  "WAIT", "WHEN", "\"FUNCTION WHEN-COMPILED\"", "WITH", "\"Identifier\"",
  "WORDS", "\"WORKING-STORAGE\"", "WRITE", "YYYYDDD", "YYYYMMDD", "ZERO",
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
     765,   766,   767,   768,   769,   770,   771,   772,   773,   774,
     775,   776,   777,   778
};
# endif

#define YYPACT_NINF -2392

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-2392)))

#define YYTABLE_NINF -1893

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -2392,   733,   -18, -2392,   542, -2392,   146, -2392, -2392,   585,
   -2392, -2392,     2,   314, -2392,   941, -2392,   685,   801,   687,
     819,   585,   585, -2392,   912,  1046,   861,   939,   913,  1120,
     358,   -68,   -68,  1273,  1290, -2392,   981,  1309, -2392, -2392,
    1054, -2392,  1012,  1074, -2392,  1307,  1030,  1037,  1077,  1209,
    1109, -2392, -2392,  1511,  1511,   -47, -2392,  1273, -2392,   -47,
   -2392, -2392,     6,  2899,  3572,  1090,   -15, -2392,  1112,  1115,
   -2392, -2392, -2392,  1116,  1529, -2392, -2392,  1321,  1122, -2392,
   -2392, -2392,  1130, -2392,  1131, -2392, -2392,  1214,  3897, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,   581, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392,  1191, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
     658, -2392, -2392,  1258, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392,  1100, -2392,  1086,    47, -2392, -2392,
     -60,   725,  1105, -2392,    54,    54,  1185,  1212,  1392,  1392,
    1392,    54,  1220,  1392,  1574, -2392,  1259,  1529,  1329, -2392,
   -2392, -2392, -2392,  1416, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392,   -85, -2392, -2392,    89,    89,
    -156,  1178, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392,  -152,  5030,  8021,    -2,   705,    10,  1124,
     443,  -215,  5294,  6180,  1382,  -207,   798,   443,  1127,  1189,
   -2392, -2392,  6180, -2392, -2392,   443,  1134,  2114,  1127,  5382,
    6180, -2392,     9,  2682,  1124,  1127,  1124,  1127,    57,   182,
    1127,  1124, -2392, -2392, -2392, -2392, -2392, -2392,  5509,  5628,
   -2392, -2392,  1134,   116,  1127,  1124,  1127,  1127,  1247,  1389,
   -2392, -2392,  1195, -2392, -2392,  1197,  1007,   480, -2392, -2392,
    1252,  1253,  1601,  1392, -2392, -2392, -2392,   322, -2392, -2392,
   -2392, -2392, -2392,   710,  1606,  1392, -2392,   -31, -2392, -2392,
   -2392,  1392,  1392, -2392,  1392, -2392,  1127,  1598,  1127,  1392,
    1392,  1127, -2392,  1156,   851,  1215, -2392,  1545, -2392, -2392,
    1174, -2392,  1231,   302, -2392,    19, -2392,  -197,  -175,   355,
   -2392, -2392, -2392, -2392,    -4,  1564, -2392,  1498, -2392,  1237,
    1406,  1059, -2392,  1127, -2392, -2392,  1239,  1251,  1254, -2392,
    3205,    -4,    -4, -2392,  1256,  1260,  1263, -2392, -2392, -2392,
    1265,    -4, -2392, -2392, -2392, -2392, -2392, -2392,  1266, -2392,
    1254, -2392, -2392,  1589, -2392,  5651, -2392, -2392, -2392,  1267,
   -2392, -2392,  1279,  1280,  1283,  3205,  2326,  8021,  2326, -2392,
      23,   893, -2392,  1560, -2392, -2392, -2392,   951,  1267, -2392,
   -2392,    -2, -2392,  1289, -2392,    -4, -2392, -2392, -2392, -2392,
    1625,  3715, -2392,    10, -2392, -2392,  1124,   736,  1406,  1605,
     387, -2392,  1366, -2392, -2392,  1237,  1267,  1124,  1626,  1404,
    1186, -2392,  1629,  1600,  5732, -2392, -2392,  4617,  1217,  1276,
    1631,   115,  1262, -2392, -2392, -2392,  1638,    77, -2392, -2392,
   -2392,  4327, -2392, -2392,  1676,   581, -2392, -2392, -2392,   443,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392,  1328, -2392, -2392,
     438, -2392,  1134, -2392, -2392,     7, -2392, -2392, -2392, -2392,
   -2392, -2392,  1313,  6180, -2392,  1330,  1646,  1745, -2392, -2392,
   -2392, -2392,     9,  1383, -2392,  1342, -2392, -2392,  3369,   -13,
     879,  1349,  1348, -2392,   993, -2392,  1355,  1668,   -41, -2392,
    1615, -2392,  1670,  1404,  1671,  1615,  1127,  1672,  1312, -2392,
    1101,  1654, -2392, -2392, -2392, -2392, -2392, -2392,  1552, -2392,
     443, -2392, -2392,   520, -2392,   551,  1796, -2392,    48, -2392,
    1680,   919,  4751,  1780,  1681,  5059, -2392, -2392,  1127,  1686,
    5968,  1134, -2392, -2392,   276, -2392, -2392, -2392, -2392,  3322,
   -2392,  1639, -2392,   -95,  1687,  1726,  1688,  1615,  1380,  1440,
    1591,  1336,  1395,  6883, -2392,  1346, -2392, -2392, -2392,  1541,
   -2392,    54, -2392,   885, -2392,   144, -2392, -2392, -2392, -2392,
    1392,  1455,  1607, -2392, -2392, -2392, -2392,   745,  1392,  1352,
    1410,  1764,  1392,  1190,  1127,  1614, -2392, -2392, -2392, -2392,
    1616,  1396, -2392, -2392,  1156, -2392,    25, -2392, -2392, -2392,
   -2392, -2392, -2392,   744,   505,  1392,    39, -2392, -2392, -2392,
   -2392,   360, -2392, -2392, -2392,  1531, -2392, -2392,  1392,  1458,
    1562, -2392, -2392,  1771, -2392, -2392,  1127, -2392, -2392,  7120,
    1694,  8021,  1411, -2392, -2392,   -21, -2392,  1426,  8021,  8021,
    7412, -2392, -2392,  1267, -2392,  1369,  1370,  8021,  8021,  8021,
    3205,  1372,  3205, -2392, -2392, -2392,  6261,  1682, -2392,  1059,
    8021, -2392,  3205,  8021, -2392,  1267, -2392, -2392, -2392,  1017,
   -2392,  1663,  8021,  8021,  8021,  8021,  8021, -2392,  1507, -2392,
    1546,  1632, -2392, -2392, -2392,  1262, -2392,   736, -2392, -2392,
   -2392,   -17,    12,  1127, -2392, -2392, -2392, -2392, -2392,  8021,
    1618, -2392,  1411, -2392,  1124, -2392, -2392, -2392, -2392,  1660,
   -2392, -2392, -2392, -2392,  1604, -2392, -2392,  4617,   255,  1600,
    1600,  1600,  1600, -2392, -2392,  6180,  6261, -2392, -2392, -2392,
   -2392,  -207,    38, -2392,  1386, -2392,  1391, -2392, -2392, -2392,
   -2392,  1189, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392,  3984, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392,   -76, -2392,  1777,  1246,  1731, -2392,
    1101,    60, -2392, -2392,  1536, -2392, -2392,    81,  8021, -2392,
    1454,   443, -2392, -2392,  6261,  1383,  1397,  1124, -2392, -2392,
   -2392, -2392, -2392,  1742,  1127,    -2, -2392,  1009, -2392, -2392,
   -2392, -2392,  1404,  2114, -2392, -2392, -2392,  1683, -2392, -2392,
     406,  1783, -2392, -2392,  1127,  1783,  1463, -2392,  1267,  1464,
   -2392, -2392,   473,   744, -2392, -2392,  4895, -2392,  1872,  1128,
      52, -2392, -2392, -2392,  1392, -2392,  -119,  6180, -2392, -2392,
     824,  5944, -2392, -2392,  1127, -2392,  1725, -2392, -2392,  6261,
   -2392,  1607, -2392, -2392,  1101, -2392, -2392, -2392, -2392, -2392,
    1780,  1693, -2392, -2392,  1009, -2392,  1465,  1523,  1554,  1468,
   -2392,  1469, -2392,  1845, -2392,  1847, -2392,  1487, -2392, -2392,
    1470, -2392, -2392, -2392,  1912,  1475, -2392, -2392,  1607, -2392,
   -2392, -2392,   439, -2392, -2392, -2392,  1665,   751, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392,  1190, -2392,  1486, -2392,   328,
   -2392,  1533, -2392, -2392, -2392, -2392,  1685,   505, -2392,  1711,
      54,    54, -2392,   744,  1746, -2392, -2392, -2392,   752,  1392,
   -2392,  1434,  1496, -2392, -2392,   372, -2392,  1392,  1070,  7120,
   -2392, -2392, -2392,   763,  6856, -2392,  1070, -2392, -2392, -2392,
    1437,  1439, -2392,  1101,  1070,  1721,  1534,  1658, -2392, -2392,
    1690, -2392, -2392, -2392, -2392,   271,   649,  8021, -2392, -2392,
   -2392,    11, -2392,  1127,   287,   916,  1508,   295,  1509, -2392,
     342, -2392, -2392,   345,  1513,  1515,  1516,   346, -2392,  1267,
   -2392,  1517, -2392,   348,  1518,  1406,   436, -2392,   -65,   -63,
     443, -2392,   882,  1520,   366, -2392,  1524,  1507,   893,   893,
   -2392, -2392, -2392,   443, -2392,  1525,    -2, -2392,   581, -2392,
   -2392,  1590, -2392,  1609, -2392,   863,  1392, -2392, -2392, -2392,
   -2392, -2392,  1684, -2392, -2392, -2392, -2392,   126, -2392, -2392,
    2157, -2392, -2392,  2079, -2392, -2392, -2392, -2392,  1778,   436,
    1784,    85, -2392, -2392, -2392, -2392,  1965, -2392,  1539,   151,
   -2392, -2392,    38, -2392, -2392, -2392, -2392,  1674, -2392, -2392,
   -2392,  1856,  1852,  1189, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392,  1620,  1189, -2392,  1538, -2392,  1946, -2392, -2392, -2392,
    1141, -2392,  1101,   924, -2392, -2392, -2392,  1873,    46,   923,
     506,   443,   443,   436,  1792,  1124,   108,   786, -2392,  1857,
   -2392, -2392, -2392,  1992, -2392,  1803, -2392, -2392, -2392, -2392,
    1683, -2392, -2392, -2392, -2392,  1127,  1874,  1660,   -14, -2392,
    1489, -2392,  1490,  1101,  1696,  -202, -2392,    11, -2392, -2392,
   -2392,  6180,   744,   744,   744,   744,   744,   744,   744,   744,
    1128, -2392,   -30,  1660,   478, -2392,  1579,  1579, -2392, -2392,
    -148,  1127,   436,  1800,  1550, -2392,  1556,  2005,  1127,   513,
     406,  2008,  1086, -2392,  1555,  1617,  1621, -2392, -2392, -2392,
    1025,  1930,  1392,   920,   920,  1392,   -24,  1747,  1392,  1998,
   -2392,  1710, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392,    54,   871, -2392, -2392,  1576, -2392,  1833, -2392,
      22, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,   708,
   -2392,    53, -2392,  1190, -2392,  1692, -2392, -2392,  1685, -2392,
      54, -2392, -2392, -2392, -2392, -2392,    40, -2392,    88, -2392,
   -2392, -2392, -2392,   147, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392,  1979, -2392, -2392, -2392,   805, -2392, -2392, -2392, -2392,
    1723,  1723, -2392, -2392,  1723, -2392,  1392, -2392, -2392, -2392,
   -2392,  1392, -2392, -2392, -2392, -2392, -2392,   -26, -2392, -2392,
    1971,  1611, -2392, -2392,   -36, -2392,  1392, -2392,  2022, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392,  1070, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392,  8021,  7493,   649, -2392,
   -2392, -2392,  1366,  7627,  1279,  7728,  1279, -2392,  1127,  1279,
    1279,  1279,  3205, -2392,   -90,  1279,   -21, -2392, -2392,  1729,
     -62,  1827,   436,  7827,  1279,  1279,   859, -2392, -2392, -2392,
   -2392, -2392,   -40,    78, -2392, -2392, -2392,   396, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
    1392, -2392,   -53, -2392, -2392,  1065,  1392, -2392, -2392, -2392,
   -2392, -2392,   -23,  1392, -2392, -2392,   443, -2392,   443,  4471,
   -2392,  -135,    16,    38, -2392, -2392, -2392,  1965,  1127, -2392,
   -2392, -2392, -2392,  1528,  1371,   199,  1530,   859,  1101, -2392,
   -2392,  1984, -2392, -2392, -2392, -2392,   924, -2392,  1849, -2392,
    1633, -2392, -2392,  1392, -2392, -2392,  1798,  1722, -2392, -2392,
     443, -2392,   443,   786,  1727,  1727,  1728, -2392, -2392, -2392,
   -2392,   865, -2392, -2392,  1127,  6180,  1390, -2392, -2392, -2392,
    1749, -2392, -2392,  1782, -2392, -2392, -2392, -2392,  1490, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392,    15, -2392,  1127, -2392, -2392, -2392,  1157, -2392,
   -2392, -2392,  8021, -2392,  6180,  6180,  1578,  1715,  1366, -2392,
     443, -2392,   859, -2392,  1733, -2392,  1101, -2392,  1938,  1608,
   -2392,   877, -2392,   682, -2392,  1086, -2392,  1595,  1655, -2392,
    7094,   689,  1853, -2392,  1607,  1542,  1392,  1998,  1544,  -105,
      79,  1607,  1557, -2392,  1392, -2392, -2392, -2392,   -45,  1084,
   -2392, -2392, -2392,  2212, -2392,  1930,  1124, -2392, -2392, -2392,
   -2392, -2392,   708, -2392,  1806, -2392, -2392,  1834, -2392,  2043,
    1034,  1610, -2392, -2392, -2392, -2392, -2392,   218, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392,   372,   372,   372,   372,   372,
   -2392,  1392,  1392,   112,   112,   372, -2392,   400, -2392,   916,
   -2392,  1039,  1651, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392,  1868, -2392, -2392, -2392,  1869,
   -2392, -2392,  1073, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
    1779,  1406, -2392, -2392, -2392, -2392, -2392,  1127, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,  2595,   372,
   -2392, -2392,  1406, -2392, -2392, -2392, -2392,   -48,   372,   112,
     112,   372,   436,  1707,   436,  1708, -2392, -2392,  6180, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,  1371, -2392,
    1976, -2392,  1189, -2392, -2392, -2392,   859,  1235, -2392, -2392,
    1235, -2392,  -108,  1127, -2392, -2392, -2392,   436, -2392, -2392,
   -2392, -2392, -2392, -2392,  1695, -2392,  2034,  1819,  1854,   576,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392,   916, -2392, -2392, -2392, -2392, -2392,  1786,
    1392,  1651,   436,  1582, -2392,  2005, -2392,  1875,  1993,  1875,
    1578, -2392, -2392, -2392, -2392,  1794, -2392, -2392, -2392, -2392,
    1125, -2392,  1086, -2392,  1636,   481, -2392, -2392,  -200,  -170,
     665,   680,   709,  1585, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392,  1709, -2392,   593, -2392, -2392, -2392, -2392,  1127,  1127,
    1864, -2392, -2392, -2392,   554, -2392, -2392, -2392,  1392,   143,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,   985,   -86,
   -2392,  1586, -2392,  1400, -2392,  1645, -2392,  1913, -2392, -2392,
   -2392,  1544, -2392, -2392, -2392, -2392, -2392, -2392,  1846,    32,
    1875,   632,  1392, -2392, -2392,  1392, -2392,  1747,  1404,   373,
   -2392,  1698,  1392,  2049,    56,   -88,   854,  1397, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392,  1678, -2392,  1851,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,  2071,  1392,
    1124,  1124,   708, -2392, -2392, -2392,  1859, -2392, -2392, -2392,
   -2392,   -38, -2392, -2392, -2392, -2392, -2392, -2392,    10,   372,
   -2392,  1138, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,  1127, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,   443,
   -2392,   443, -2392, -2392, -2392,  2062,  2001,  1235,  1235, -2392,
    1649,  1649, -2392,  1776,  1124,   531, -2392,  1127, -2392, -2392,
    6180, -2392,  1392,   802,  1861,  1862, -2392,  1863, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392,  1127, -2392, -2392, -2392, -2392,
    1669, -2392, -2392,  1127,  1875, -2392,  1127, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392,  1599, -2392, -2392,  2076,  1675, -2392,  1689, -2392, -2392,
   -2392, -2392,  3170,   415,  2106, -2392,  1734,  1734, -2392,  1406,
    1519,  1519, -2392, -2392,  1607,    75,  1127, -2392, -2392, -2392,
   -2392,  1607, -2392,  1716, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392,   403,   403,  1392,  1798, -2392, -2392,   110, -2392,
    1102,  1392,  1392,  1392,  1392, -2392,  1912, -2392,   108,  1392,
    1747, -2392,  1735,  1542,  1124, -2392,  1797,  2118, -2392, -2392,
    2027, -2392, -2392, -2392, -2392, -2392, -2392, -2392,  1651,  1651,
    6180, -2392,  1235, -2392,  6180,  6180,  1392,  1124,  1124,  1795,
   -2392, -2392,  1652,  1127, -2392, -2392,  1749, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392,   743, -2392, -2392,  1127, -2392,  1790,
    1336, -2392,  1875,  1950,  1607,  1697,  1127, -2392,   415, -2392,
    1701,  1890, -2392,  2049, -2392, -2392,  1519,  1700, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392,  1127, -2392,     8,  1574, -2392,
     795, -2392, -2392, -2392, -2392,   501,  1392, -2392, -2392,   929,
   -2392, -2392,    79,  1730,  1127,  1127, -2392, -2392,  1127,  1392,
   -2392, -2392, -2392,  1607, -2392,   708,  1702, -2392, -2392, -2392,
   -2392, -2392,    -2,  1124,  1392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392,  1249, -2392, -2392, -2392, -2392, -2392,
    1807,  2042, -2392,  1134, -2392,  6597, -2392, -2392,  1336,  1703,
    1640,  1607,  1675, -2392, -2392,  2047, -2392,   582, -2392,   415,
   -2392, -2392, -2392, -2392, -2392,    79,    79, -2392, -2392, -2392,
   -2392,  1968, -2392, -2392,  1645,  1607, -2392, -2392, -2392, -2392,
    1127, -2392, -2392,   430,   430,  2158, -2392, -2392, -2392, -2392,
   -2392,   430,   430,   452, -2392, -2392, -2392,  -187, -2392, -2392,
     120, -2392, -2392, -2392, -2392,    -2, -2392,  1791,  1743,   175,
    1674, -2392,  1712, -2392,  1713, -2392, -2392, -2392,  1942,  1674,
   -2392,  1759, -2392,  1717, -2392, -2392, -2392,  2142,  1574, -2392,
     -39, -2392, -2392, -2392, -2392,  1470, -2392, -2392, -2392, -2392,
   -2392,  1392,  1127,  1661, -2392,  1661, -2392, -2392,  1127, -2392,
     669, -2392, -2392, -2392,    55,   257, -2392, -2392, -2392, -2392,
   -2392,  1127,  1958,   923,  1737,  1392,    79,  2068,  1744, -2392,
   -2392,  1127,  1127,   683, -2392, -2392, -2392, -2392, -2392,  1842,
     -92,    55, -2392, -2392,  1738,   755,  7448,  1958, -2392,  1780,
   -2392,  1798, -2392,   415, -2392,  1674, -2392,  1677, -2392,  1127,
    1880, -2392, -2392,  1674, -2392, -2392,  1878,  1127, -2392, -2392,
    1392,  1392,  1998,  1216, -2392, -2392, -2392, -2392,  1990,  2023,
   -2392,  1392, -2392,    29, -2392,  1065,  1392,  2114, -2392, -2392,
   -2392, -2392,  1723, -2392,  1607, -2392,  2143, -2392, -2392, -2392,
    1127, -2392, -2392,  1127, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392,  2002,  1723, -2392,  1691,  1392, -2392,  1127,
      58,   728,   458, -2392, -2392,    10, -2392, -2392,  1392,  1998,
    1945,  1336, -2392, -2392, -2392,  1127,   372, -2392, -2392, -2392,
   -2392,   372, -2392,  1392,  1697,  1392, -2392, -2392, -2392,  1392,
   -2392,  1691, -2392,  1127, -2392,  1059, -2392, -2392, -2392,  1103,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,  1124, -2392,
   -2392, -2392, -2392,  1248,   -64, -2392,  1127, -2392, -2392, -2392,
     891, -2392,    10,   891, -2392,  1127, -2392, -2392,  1257, -2392,
   -2392,  1945, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392,   372, -2392, -2392, -2392,   372,  1210,  1392,  1392,  1432,
   -2392, -2392, -2392, -2392, -2392, -2392,  1502, -2392, -2392, -2392,
   -2392, -2392,  1392,  1945,  1945, -2392,  1996,  1392,  1392, -2392,
    1850,  1945, -2392, -2392, -2392,  1945,  1945,  1987,  1219,  1998,
    2003,  1607,  1705,  1392,  1406, -2392,  1392,  1392,  1127, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392,   -43, -2392,   807, -2392, -2392, -2392,  1219,  1998,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392,   143, -2392,  1392,
    1675, -2392,  8158,  8158,  1367,  2093,  2021, -2392,  1607,   -43,
   -2392, -2392,  1607,   807, -2392, -2392,   143, -2392, -2392,   -43,
    1697, -2392,  1366,  8120, -2392, -2392,   930,  1050, -2392, -2392,
    1133, -2392, -2392, -2392, -2392,   -56,   -56, -2392, -2392, -2392,
   -2392, -2392,  8158, -2392, -2392, -2392, -2392, -2392, -2392,  2047,
   -2392,  1674, -2392, -2392, -2392, -2392, -2392, -2392, -2392,  1902,
   -2392,  1902, -2392,  2172,  1799,   -54,  1897, -2392, -2392,  8158,
    1607, -2392, -2392, -2392, -2392, -2392, -2392, -2392
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,    10,     1,     0,     3,    21,     6,     4,    41,
       8,     9,     0,     0,     7,     0,    11,   287,    44,     0,
       0,    41,    41,    22,     0,     0,   682,   289,     0,   176,
      46,     0,     0,    14,     0,    42,     0,     0,    20,   727,
       0,   291,     0,     0,    40,   178,     0,     0,    94,    47,
      48,    27,    26,    30,    30,     0,    12,    15,    16,     0,
      13,   288,   684,     0,     0,     0,   285,    45,     0,     0,
     182,    57,    51,     0,    96,    49,    50,     0,     0,    23,
      29,    28,     0,    17,     0,   687,   685,   703,     0,   781,
     854,   863,   869,   876,   910,   914,   928,   923,   929,   930,
     938,   985,   994,   997,  1023,  1034,  1037,  1040,  1032,  1046,
    1053,  1075,  1079,  1115,  1117,  1121,     0,  1127,  1141,  1165,
    1183,  1184,  1187,  1188,  1193,  1201,  1202,  1215,  1251,  1269,
       0,  1303,  1315,  1323,  1325,   709,  1329,  1332,  1335,  1386,
     729,   730,   731,   732,   733,   734,   735,   736,   738,   737,
     739,   740,   741,   742,   743,   744,   745,   746,   747,   748,
     749,   750,   751,   752,   753,   754,   755,   756,   757,   758,
     759,   760,   761,   762,   763,   764,   765,   766,   767,   768,
     769,   770,   771,   772,   773,   774,   775,   776,   777,   778,
     728,   290,   297,   298,   358,   292,   361,     0,   177,   179,
     180,    59,    53,    95,     0,     0,     0,  1864,  1818,  1818,
    1818,     0,     0,  1818,  1791,   114,    79,    97,     0,   100,
     102,   103,   104,   150,   106,   105,   107,   108,   109,   110,
     111,   112,   113,    31,    25,  1818,    18,    19,   692,   692,
       0,     0,  1704,  1705,  1706,  1707,  1708,  1709,  1710,  1711,
    1712,  1713,  1714,  1715,  1716,  1717,  1753,  1754,  1755,  1756,
    1757,  1758,  1759,  1760,  1761,  1762,  1763,  1764,  1765,  1766,
    1767,  1768,  1769,  1770,  1771,  1772,  1718,  1719,  1720,  1721,
    1722,  1723,  1724,  1725,  1726,  1727,  1728,  1729,  1730,  1731,
    1732,  1733,  1734,  1735,  1736,  1737,  1738,  1739,  1740,  1741,
    1742,  1743,  1744,  1745,  1746,  1747,  1748,  1703,  1749,  1750,
    1751,  1752,   780,     0,     0,     0,     0,   879,     0,     0,
       0,     0,     0,     0,     0,  1446,  1025,     0,     0,  1883,
     900,   899,     0,  1045,  1446,     0,     0,     0,     0,     0,
       0,   779,     0,  1153,     0,     0,     0,     0,     0,     0,
       0,     0,  1299,  1302,  1289,  1300,  1301,  1291,     0,     0,
    1324,  1322,     0,   727,     0,     0,     0,     0,     0,   513,
     293,  1670,     0,  1514,   294,     0,  1686,   266,   183,  1790,
       0,     0,     0,  1818,  1926,    77,    58,  1789,    63,    65,
      66,    67,    68,  1789,     0,  1818,    52,    55,  1536,  1535,
     125,  1818,  1818,  1865,  1818,  1819,     0,     0,     0,  1818,
    1818,     0,  1792,     0,  1818,     0,    43,     0,    98,   101,
       0,   149,     0,     0,  1788,   692,   689,   695,     0,   692,
     704,   705,   679,   804,  1606,   852,   783,   803,  1596,  1600,
    1843,     0,  1649,     0,  1644,  1650,     0,     0,  1656,  1629,
       0,  1501,  1503,  1625,     0,     0,     0,  1647,  1630,  1556,
       0,  1505,  1628,  1648,  1626,  1651,  1652,  1631,     0,  1646,
    1656,  1645,  1627,   861,  1550,   859,  1545,  1547,  1548,  1621,
    1623,  1549,  1653,     0,     0,     0,     0,     0,     0,   864,
       0,  1490,  1493,  1495,  1498,  1565,  1500,  1675,  1563,  1564,
    1525,   870,   871,     0,  1521,  1523,  1522,   882,   880,   881,
     908,     0,  1578,   911,   912,  1577,   915,   918,  1843,   926,
       0,  1507,  1689,  1540,  1601,  1605,  1541,     0,   936,  1857,
    1625,   952,   983,  1411,  1543,   947,   949,   946,     0,  1547,
     992,     0,   883,   995,  1004,  1003,  1021,     0,  1000,  1002,
    1445,     0,  1027,  1031,  1029,  1032,  1030,  1024,  1035,  1036,
    1538,  1038,  1039,  1884,  1041,  1519,  1033,  1879,  1444,  1054,
    1056,  1515,  1076,  1077,  1080,     0,  1082,  1083,  1084,  1116,
    1255,  1593,  1594,     0,  1118,     0,  1125,     0,  1134,  1131,
    1133,  1132,  1128,  1135,  1155,  1525,  1893,  1142,  1153,  1144,
       0,  1151,     0,  1579,  1522,  1581,     0,  1181,  1681,  1185,
    1389,  1510,  1191,  1857,  1199,  1389,     0,  1213,  1206,  1511,
       0,     0,  1518,  1216,  1217,  1218,  1219,  1220,  1221,  1243,
    1222,  1246,  1223,     0,  1516,     0,     0,  1592,  1605,  1252,
    1287,  1274,  1292,  1787,  1313,     0,  1306,  1308,     0,  1320,
       0,  1326,  1327,   715,   721,   710,   711,   712,   714,     0,
    1330,     0,  1333,  1859,  1352,  1338,  1399,  1389,     0,     0,
     516,   363,     0,     0,   366,     0,   296,   299,   181,     0,
    1687,     0,   278,   274,   175,     0,   269,   271,   272,  1925,
    1818,     0,     0,    62,    64,    60,    78,  1789,  1818,     0,
       0,     0,  1818,     0,     0,     0,   171,  1528,   169,   174,
       0,     0,   173,  1537,   152,   153,  1820,   156,  1611,  1225,
    1224,   115,   119,   122,  1847,  1818,     0,    80,    99,   151,
      24,    34,    37,    39,    38,  1855,    36,   690,  1818,     0,
     701,   693,   694,   706,  1904,  1905,     0,   853,   782,   805,
       0,     0,  1598,  1599,  1844,     0,  1622,     0,     0,     0,
       0,  1642,  1551,  1552,  1553,     0,     0,     0,     0,     0,
       0,     0,     0,  1643,   862,   855,     0,     0,  1546,     0,
       0,  1632,     0,     0,  1566,  1567,  1568,  1497,  1562,     0,
    1496,  1677,     0,     0,     0,     0,     0,  1676,   867,   872,
     874,     0,   909,   877,  1580,   883,   913,   918,  1916,  1917,
     916,     0,   919,     0,   927,   924,  1901,  1900,  1508,     0,
    1691,  1509,  1603,  1604,   933,   934,   937,   931,  1858,  1438,
     984,   939,   724,   944,  1413,   948,   945,  1544,  1892,  1411,
    1411,  1411,  1411,   993,   986,     0,     0,   884,   996,  1022,
     998,  1446,  1446,   999,  1006,  1007,   724,  1470,  1471,  1472,
    1466,  1883,  1458,  1478,  1481,  1480,  1482,  1474,  1465,  1464,
    1469,  1468,  1467,  1473,  1453,  1457,  1475,  1477,  1479,  1455,
    1456,  1452,  1454,  1447,  1448,  1459,  1460,  1461,  1462,  1463,
    1451,  1028,  1026,  1539,  1043,  1880,   724,  1058,     0,  1078,
       0,  1105,  1089,  1081,  1086,  1087,  1088,  1259,     0,  1595,
       0,     0,  1126,  1122,     0,  1135,  1892,     0,  1143,  1149,
    1150,   724,  1146,  1446,     0,     0,  1154,     0,  1182,  1166,
    1682,  1683,  1857,     0,  1186,  1192,  1189,  1168,  1200,  1194,
    1196,  1208,  1214,  1203,     0,  1208,     0,  1573,  1574,     0,
    1244,  1247,     0,     0,  1517,  1227,     0,  1226,     0,     0,
    1603,  1288,  1270,  1276,  1818,  1277,  1272,     0,  1290,  1294,
       0,     0,  1314,  1304,     0,  1307,     0,  1321,  1316,     0,
    1328,   722,   720,   713,     0,  1860,  1861,  1334,  1353,  1336,
    1787,     0,  1400,  1387,  1391,   359,     0,     0,   519,     0,
     364,     0,   372,   373,   367,     0,   370,  1818,  1688,   184,
    1799,   275,   276,   277,  1779,     0,   267,   270,     0,  1924,
      71,    61,     0,  1529,    70,    54,     0,     0,  1618,  1614,
    1619,  1617,  1615,  1620,  1616,   160,   161,   163,   172,   167,
     165,     0,   154,  1822,  1821,   157,     0,  1847,  1850,  1849,
       0,     0,   116,   120,    82,    35,  1856,    33,     0,  1818,
     702,     0,     0,   680,  1607,  1784,   810,  1818,  1402,   806,
     807,   809,   811,     0,     0,   799,  1402,  1899,  1898,   796,
     788,   790,   791,     0,  1402,     0,     0,     0,   813,   794,
       0,   802,   785,   801,   786,  1485,  1483,     0,  1597,  1570,
    1569,     0,  1555,     0,  1485,  1483,     0,  1485,     0,  1658,
    1485,  1502,  1504,  1485,     0,     0,     0,  1485,  1559,  1560,
    1561,     0,  1506,  1485,     0,  1843,  1416,   860,  1605,  1541,
       0,  1624,     0,     0,  1485,  1499,  1679,   867,  1489,  1488,
    1492,  1491,  1494,     0,   865,     0,     0,  1524,   894,   917,
     922,     0,  1804,     0,  1542,  1416,  1818,  1690,  1602,   935,
     724,   932,  1440,  1412,   725,   724,  1410,     0,   958,   957,
     950,   953,   955,     0,   942,   943,   940,   941,     0,  1416,
       0,   890,  1001,  1016,  1018,  1017,  1011,  1013,  1019,  1446,
    1008,  1005,  1446,  1009,  1476,  1449,  1450,  1845,  1042,  1520,
     724,  1050,  1051,  1883,  1066,  1067,  1069,  1071,  1072,  1068,
    1070,  1061,  1883,  1057,     0,  1106,     0,  1108,  1107,  1109,
    1091,  1101,     0,     0,  1085,  1923,  1846,     0,  1261,     0,
    1809,     0,  1119,  1416,     0,     0,     0,  1137,  1512,  1147,
    1160,  1156,  1161,  1157,  1162,     0,  1152,  1396,  1395,  1159,
    1168,  1390,  1589,  1590,  1591,     0,     0,  1438,     0,   724,
       0,  1207,     0,     0,     0,     0,  1245,     0,  1249,  1248,
    1241,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1229,  1230,  1684,  1438,     0,  1293,  1875,  1875,  1309,  1310,
    1311,     0,  1416,     0,     0,   723,     0,  1671,     0,  1311,
    1196,  1773,   361,   514,     0,     0,   614,   365,   369,   406,
     375,  1793,  1818,     0,     0,  1818,  1793,  1836,  1818,  1777,
     295,     0,   300,   303,   304,   305,   306,   307,   308,   309,
     310,   311,     0,     0,   186,  1800,  1877,  1780,  1803,   268,
       0,    74,    76,    75,    72,    73,    56,   131,   130,   145,
     141,   146,   127,   144,   142,   128,   129,   143,   126,   132,
     133,   135,   162,     0,   166,     0,   170,  1612,   155,   158,
       0,  1848,   123,   117,   118,   121,     0,    81,     0,    85,
     696,   697,   700,     0,   691,   707,   709,  1584,   817,  1582,
    1583,     0,  1404,  1405,   784,  1406,   724,   808,  1897,  1896,
    1838,  1838,   815,   816,  1838,   822,  1818,   824,   825,   826,
     851,  1818,   827,   828,   829,   830,   831,     0,   832,   833,
     835,     0,   836,   837,     0,   838,  1818,   823,  1775,   841,
     850,   844,   812,   843,   800,   787,   789,  1402,   797,   792,
     793,   814,   795,  1486,  1487,  1608,     0,     0,     0,  1572,
    1554,  1571,  1689,     0,  1653,     0,  1653,  1657,     0,  1653,
    1653,  1653,     0,  1636,     0,  1653,     0,   724,   856,  1418,
    1603,  1604,  1416,     0,  1653,  1653,     0,  1678,   866,   868,
     875,   873,   903,  1816,   921,   920,   925,     0,  1439,   724,
    1437,   727,  1414,   964,   965,   962,   961,   963,   960,   954,
    1818,   966,     0,   969,   970,  1797,  1818,   973,   974,   956,
     975,   976,     0,  1818,   978,   959,     0,   987,     0,   885,
     886,   695,     0,  1446,  1446,  1015,   724,  1012,     0,  1049,
     724,  1052,  1047,     0,     0,  1073,     0,     0,     0,  1102,
    1104,     0,  1097,  1111,  1098,  1099,  1090,  1093,  1111,  1922,
       0,  1895,  1253,  1818,   490,   491,  1823,     0,  1810,  1260,
    1120,  1123,     0,  1137,  1851,  1851,     0,  1136,  1140,  1129,
    1513,     0,  1148,  1145,     0,     0,  1170,  1169,   724,  1190,
    1426,  1195,  1197,     0,  1209,  1446,  1446,  1204,  1210,  1228,
    1250,  1240,  1242,  1232,  1233,  1234,  1238,  1235,  1239,  1236,
    1237,  1231,  1685,  1286,     0,  1283,  1284,  1278,     0,  1271,
    1921,  1920,     0,  1876,  1297,  1297,  1421,     0,  1689,  1317,
       0,   716,     0,  1672,  1339,  1340,     0,  1343,  1346,  1350,
    1344,  1438,  1774,     0,   360,   361,   517,     0,     0,   286,
    1818,  1781,     0,  1794,     0,     0,  1818,  1777,     0,     0,
       0,     0,     0,  1837,  1818,   354,  1778,   355,     0,     0,
     356,   301,   302,  1857,  1878,  1793,     0,  1912,  1913,    69,
     134,   137,     0,   164,     0,   159,   124,     0,    92,    90,
       0,     0,    83,    86,   698,   699,   709,   727,   821,  1408,
    1409,  1401,   724,  1403,  1839,     0,     0,     0,     0,     0,
     842,  1818,  1818,  1442,  1442,     0,  1776,     0,   798,  1484,
    1609,     0,  1416,  1667,  1640,  1669,  1641,  1665,  1637,  1638,
    1639,  1663,  1660,  1661,  1635,  1542,  1417,   724,  1415,  1602,
     857,  1654,     0,  1633,  1634,  1680,  1575,  1576,   724,   724,
     906,  1843,  1817,   897,   902,   901,   896,     0,  1693,  1694,
    1695,  1696,  1697,  1698,  1699,  1700,  1692,  1441,     0,     0,
     967,   968,  1843,   662,   664,   971,   972,     0,     0,  1442,
    1442,     0,  1416,  1507,  1416,  1507,   887,   888,     0,   892,
     891,   893,  1014,  1020,  1010,  1044,  1048,  1059,  1062,  1063,
    1795,  1055,  1883,  1060,  1111,  1111,     0,  1096,  1094,  1095,
    1100,  1894,  1263,     0,  1824,  1257,  1811,  1416,  1130,  1852,
     263,   264,   265,  1139,     0,  1163,     0,     0,  1177,     0,
    1430,   724,  1425,  1198,   724,   724,  1211,  1285,  1275,  1279,
    1280,  1281,  1282,  1273,  1295,  1298,  1296,   724,  1305,  1423,
    1818,  1416,  1416,   718,  1331,  1671,  1342,  1807,  1348,  1807,
    1421,   724,   724,  1388,  1398,  1433,  1434,  1397,  1394,  1393,
    1828,   515,   361,   520,     0,     0,   500,   430,  1866,  1866,
    1866,  1866,  1866,  1888,   431,   466,   468,   434,   435,   436,
     437,   438,   439,   462,   460,   461,   463,   464,   469,   467,
     440,  1862,   465,     0,   441,   427,   442,   443,     0,     0,
    1869,   445,   446,   444,  1825,   448,   449,   447,  1818,  1820,
     407,   408,   409,   410,   411,   412,   428,   432,   433,   413,
     414,   415,   416,   417,   418,   419,   420,   421,     0,     0,
    1782,     0,   403,     0,   376,   323,   232,   351,  1914,  1915,
    1532,   332,  1530,  1907,  1906,   325,  1534,  1533,  1834,  1791,
    1807,     0,  1818,   329,   328,  1818,   357,  1836,  1857,  1885,
     248,     0,  1818,  1789,  1823,   250,     0,  1892,   236,   185,
     235,   187,   188,   189,   190,   191,   192,     0,   193,     0,
     194,   247,   195,   196,   197,   198,   199,   200,  1785,  1818,
       0,   273,     0,   136,   168,    87,     0,    88,    93,    89,
      84,   727,  1407,   818,   820,   819,   846,   845,     0,     0,
     848,     0,  1587,  1588,   847,   840,  1613,   849,  1585,  1586,
    1610,   858,  1419,  1655,   904,   905,   724,   878,     0,   895,
     980,  1798,   663,   665,   979,   982,   981,   977,   989,     0,
     988,     0,   889,  1064,  1796,     0,     0,  1092,  1103,  1111,
    1814,  1814,  1112,     0,     0,  1266,  1262,  1256,  1124,  1138,
       0,  1171,  1818,  1438,     0,     0,  1172,     0,  1176,  1431,
    1205,  1212,  1422,   724,  1420,     0,  1319,  1318,  1354,   717,
       0,  1341,  1808,     0,  1807,  1345,     0,  1337,  1435,  1436,
    1432,  1829,  1830,  1392,   518,   522,   615,   511,   512,  1867,
     459,   458,   451,   450,   457,   456,   455,   454,   453,   452,
    1889,     0,  1863,   497,   483,   477,   422,   509,  1870,  1826,
    1827,   498,     0,     0,   424,   426,  1701,  1701,   405,  1843,
       0,     0,   404,   377,     0,   313,     0,   350,  1531,  1835,
     334,     0,   316,  1871,   343,   345,   349,   348,   344,   346,
     342,   347,     0,     0,  1818,  1823,  1886,  1887,   215,   251,
    1857,  1818,  1818,  1818,  1818,   260,  1779,   261,     0,  1818,
    1836,  1786,     0,     0,   279,   280,   283,   138,   139,    91,
       0,   834,   839,  1918,  1919,  1443,   907,   898,  1416,  1416,
       0,  1074,  1110,  1815,     0,     0,  1818,  1264,     0,     0,
    1254,  1258,     0,     0,  1167,  1180,  1428,  1429,  1179,  1175,
    1173,  1174,  1424,  1312,  1362,   719,  1347,     0,  1351,   521,
     617,   499,  1807,   479,     0,  1881,     0,   429,   501,   503,
     505,     0,   423,  1789,   470,   471,     0,     0,   386,   382,
     385,   384,   383,   398,   394,   396,   397,   399,   395,   400,
     401,   402,   379,   390,   391,   392,   387,   388,   389,   381,
     378,   324,   315,   314,   312,   352,  1526,   333,  1791,  1872,
     321,   330,   327,   331,   326,     0,  1818,   217,   216,   213,
     250,   246,     0,     0,     0,     0,   259,   262,     0,  1818,
     249,   231,   281,     0,   282,     0,     0,   991,   990,  1065,
    1114,  1113,     0,  1267,  1818,  1446,  1178,  1427,  1784,  1385,
    1384,  1363,  1355,  1356,  1775,  1357,  1358,  1359,  1360,  1383,
       0,     0,  1349,     0,   523,     0,   621,   616,   618,     0,
       0,     0,   477,   478,  1882,   481,   510,   507,   504,     0,
     425,  1702,   380,   393,  1527,     0,     0,   335,   336,   337,
     338,     0,   317,  1806,   323,     0,   225,   226,   224,   223,
       0,   209,   210,   220,   220,     0,   208,   206,   207,   212,
     211,   220,   220,     0,   252,   253,   254,   255,   258,   233,
       0,   284,   140,   708,  1265,     0,  1164,     0,  1873,     0,
    1845,   524,     0,   622,     0,   619,   484,   480,   485,  1845,
     488,     0,   502,     0,   506,   341,   340,  1783,  1791,   322,
    1673,   221,   203,   222,   204,  1799,   205,   202,   218,   201,
     219,  1818,     0,   242,   241,   242,   238,  1268,     0,  1874,
       0,  1381,  1380,  1379,     0,     0,   624,   625,   620,   486,
     488,     0,   492,   487,     0,  1818,     0,   319,   228,  1674,
     214,     0,   256,     0,   240,   239,  1382,  1903,  1902,  1853,
    1375,  1369,  1370,  1372,     0,  1818,  1868,   492,   482,  1787,
     475,  1823,  1891,     0,   339,  1845,   318,     0,   227,   257,
       0,   245,  1854,  1845,  1378,  1373,  1376,     0,  1371,   528,
    1818,  1818,  1777,  1831,   553,   527,   531,   532,     0,  1801,
     640,  1818,   629,  1888,   630,  1797,  1818,     0,   643,   638,
     633,   639,  1838,   634,     0,   637,   645,   642,   635,   641,
       0,   646,   636,     0,   657,   651,   655,   654,   652,   656,
     626,   658,   653,     0,  1838,   476,     0,  1818,   508,     0,
       0,     0,     0,  1377,  1374,     0,  1941,  1942,  1818,  1777,
       0,   525,   529,  1802,   533,     0,     0,   627,   628,   631,
     632,     0,   660,  1818,  1881,  1818,   661,   659,   677,  1818,
     496,   493,   494,     0,   320,     0,   147,   148,   230,     0,
    1910,  1911,   243,  1368,  1365,  1367,  1366,  1361,  1364,   530,
    1832,  1833,   541,   538,   371,   554,   534,   535,   650,   649,
     670,   676,     0,   673,   495,   489,   229,   244,   537,  1908,
    1909,   540,   373,   555,   536,   668,   666,   669,   667,   671,
     672,     0,   644,   674,   675,     0,     0,  1818,  1818,     0,
     542,   543,   544,   545,   546,   547,     0,   557,   647,   648,
    1928,  1927,  1818,     0,     0,  1930,     0,  1818,  1818,   539,
    1868,     0,   552,   548,  1929,     0,     0,  1812,  1840,  1777,
       0,     0,     0,  1818,  1843,   556,  1818,  1818,     0,   562,
     564,   573,   565,   567,   570,   558,   559,   560,   569,   571,
     574,   561,     0,   566,     0,   568,   572,   563,  1840,  1777,
     549,   551,   550,  1813,   612,  1841,  1842,  1820,   598,  1818,
     477,  1446,     0,     0,     0,     0,     0,   606,     0,   596,
     602,   605,     0,   599,   607,   610,  1820,   601,   597,     0,
    1881,   594,  1689,   590,  1557,  1932,     0,     0,  1934,  1936,
       0,  1940,  1938,   575,   579,   583,   583,   577,   581,   576,
     582,   613,     0,   604,   603,   609,   608,   600,   588,   481,
     611,  1845,   589,  1558,  1931,  1935,  1933,  1939,  1937,   586,
     578,   586,   580,     0,   473,     0,     0,   585,   584,     0,
       0,   472,   593,   591,   592,   587,   595,   474
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2392, -2392, -2392, -2392, -2392,  2219, -2392, -2392, -2392, -2392,
   -2392, -2392,  2170, -2392,  1521, -2392, -2392, -2392, -2392,  2197,
    2171,  2179, -2392, -2392,  1503, -2392, -2392, -2392, -2392, -2392,
    2185, -2392, -2392, -2392,  2188, -2392, -2392,  1855,  -264, -2392,
   -2392, -2392, -2392, -2392,  2036, -2392, -2392, -2392, -2392,   864,
   -2392, -2392, -2392, -2392, -2392,  2026,   503, -2392, -2392, -2392,
   -2392,  1192, -2392, -2392, -2392, -2392, -2392,   880, -2392, -2392,
   -1627, -2392, -2392, -2392, -2392, -2392,  1537, -2392, -2392, -2392,
   -2392,  1218, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392,  -892, -2392, -2392, -2392,
   -2392, -2392,    71, -2392, -2392, -2392, -2392, -2392,  -178, -2392,
      90, -2392, -2392, -2392,  -106, -2392, -2392, -2392, -2392,    84,
   -2392, -2392,  1570, -2392, -2392, -2392, -2392, -2392,    86, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392,   -96, -2392, -2392, -2392,
     111, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -1265, -2392,
   -2392,  1594, -2392, -2057, -2176, -2392, -2392, -2392, -1921, -2392,
   -2392, -2392, -2392, -2005, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -1854,  -205,   145, -1143, -1098, -1796, -2392, -2392, -2392,
   -2239, -2392,  -481, -2392, -2392,  -174, -2392,  -173,  -194, -2392,
    -297, -1752, -2392, -1720, -2392, -1652, -2392, -2392,    49, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392,  -461,  -482, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -1318, -2392,  -435, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392,   -42, -2392, -2392, -2392,  -225,
    -222,  -315,  -313, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392,  2056,  1092, -2392,   775, -2392, -2392,
   -2392, -2392, -1272, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
     354, -2392, -2392,   -28, -2392,  2234, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392,  1230, -2392,  -736, -2392, -2392,  -727, -2392,
     883, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
    1164, -2392, -2392, -2392,  1801, -2392, -2392, -2392, -2392, -2392,
    1500, -2392, -2392,   784, -2392, -2392,  -567, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392,  1499, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392,  1781, -2392, -2392, -2392,  1142, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392,  1462, -2392, -2392,  1460, -2392, -2392,
    1129,   796, -2392, -2392, -2392, -2392, -2392,  1767, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
     535,  1427, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392,  1421, -2392, -2392,   780, -2392,  1107, -2392,
   -2392, -1470, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392,  1739,  1415,   770, -2392, -2392,
   -2392, -2392, -2392, -2392, -1252,  1736, -2392, -2392, -2392,   762,
   -2392, -2392, -2392,  1087, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
    1038, -2392, -2392, -2392, -2392, -2392, -2392,  1398,   754, -2392,
   -2392, -2392, -2392, -2392,  -514, -2392, -2392, -2392, -2392,  1064,
   -2392, -2392, -2392,  1718, -2392,  1720, -2392, -2392, -2392,  1995,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,   738,
   -2392, -2392, -2392, -2392, -2392,  1706,  1049, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,   510, -2392,
    1058, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392,  -103, -2392, -2392, -2392, -2392, -2392, -2392,
   -2392, -2392, -2392,  -374, -2392,  1368, -2392, -2392,  -978, -2392,
   -2392, -2392, -2392,   942, -2392, -2392, -1064, -2392, -2392,   514,
   -2392, -2392, -2392, -2392,   300, -1347, -2392, -2392,   511, -1230,
   -2392, -2392,  -551,  -913,  -282,  -836, -2392, -2392,  1482, -1157,
     759,   760,   761,   764,   575,   310,  -265,   765,   812, -2392,
    1098,  -159,  -725,  -223,   901,  1754, -1220,  -184,  -359, -2392,
    -602, -2392,  -281, -1258,  1573, -1339,  -388,  1357, -2392,   444,
   -1285,  -181,  1673,  -289,  -262, -2392,   485,   888, -2392,  -738,
   -1187, -2392,  1117,  -546, -1393,  -317,  1876, -1465, -2392, -2392,
    -121,  -335, -2392,   971,  -261,  -444, -2392, -2392,  1161,  -483,
    -487,  -392,  1020, -1671,  1027,  -330,  -208,  -439,   132, -2392,
   -2392, -2392,   214,  1921, -2392, -2392,   779, -2392, -2392, -2392,
   -2392, -2392, -2392, -2392, -2392, -2392, -2392, -2392, -1433, -2392,
   -2392,   268, -2392, -2392,    82, -1618,   231, -2392, -1560, -2392,
    -635, -1824, -1891, -1207, -2392, -2392,   -16, -2392, -1321, -2392,
   -1655, -2392, -2392,   347, -2392,  -209, -1876, -1893, -2392, -2392,
   -2392, -2392, -1781, -1376,  -288,  -509, -1176,  1354,   838, -2392,
   -2392,  -517, -2392, -2392, -2392,   -61, -2392, -2392, -2392,  1118,
   -2392,   873, -1763,  -829, -2392, -2392, -2392,  -231,   747, -1647,
   -1401, -2392, -2392,   947, -2392, -2392,  -168, -2392,  1099, -2392,
   -2392, -2392,     4, -2392, -2391,  -298, -2392, -2392, -2392, -2392,
   -2392, -2392
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,     6,     7,     8,     9,    10,    11,
      56,    57,    58,    60,    16,    12,    21,   235,    22,    53,
      82,    78,   422,   735,   736,    17,    18,    29,    30,    48,
      49,   202,   396,   700,    50,   201,   386,   387,   388,   389,
     390,   391,   392,  1344,   393,   416,  1054,  1377,  1378,  1379,
    1997,  1680,    74,   216,   217,   218,   219,   220,   414,   721,
    1374,   722,   723,   221,   702,  1358,  1359,  1360,  1992,  2177,
    1361,  2578,   222,   421,   223,   714,   715,   716,  1368,   224,
    1035,  1036,   225,   226,  1364,   227,   228,   229,   230,   231,
     232,    44,    45,    70,   377,   200,   378,  1334,  1663,  1971,
    1972,  2371,  2372,  2373,  2279,  2419,  2412,  1973,  2359,  1974,
    2478,  1975,  1937,  1976,  1977,  1978,  1979,  2426,  2454,  1980,
    1981,  1982,  1983,  1984,  2376,  1985,  1986,  2166,  1987,  1567,
     684,   685,   686,   687,  1014,   688,  1010,  2174,  2175,  2294,
      26,   194,    27,    41,    66,   195,   196,   677,   197,  1007,
    1322,  1323,  2264,  1324,  2476,  2354,  2135,  1325,  1326,  1955,
    2272,  1327,  1328,  2267,  2347,  2348,  2349,  2350,  1329,  2150,
    2151,  1330,  2137,  1331,  1332,  1659,   369,  1302,   370,   371,
     671,   672,  1309,   673,  1004,  1005,  1641,  2132,  2252,  2253,
    2254,  2255,  2256,   674,  1932,  1640,  1910,  1911,  1912,  2232,
    1913,  1914,  1915,  1916,  1917,  1918,  1919,  2671,  2771,  1920,
    2225,  2332,  2400,  2223,  2440,  2442,  2443,  1556,  2470,  2571,
    2572,  1921,  1922,  1923,  1924,  1925,  2337,  2228,  2229,  2402,
    1926,  1927,   670,  1635,   998,  1862,  1306,  2095,  2219,  2324,
    2435,  2465,  2495,  2496,  2554,  2596,  2497,  2592,  2608,  2630,
    2631,  2632,  2633,  2634,  2635,  2551,  2595,  2637,  2650,  2675,
    2676,  2733,  2760,  2767,  2677,  2678,  2752,  2773,  2679,  2680,
    2681,  2682,  2683,  2684,  2709,  2710,  2713,  2714,  2685,  2686,
    2687,  1639,  2220,  2327,  2328,  2329,  2437,  2466,  2530,  1765,
    1766,  2619,  2620,  2621,  2625,  2531,  2532,    38,   743,  1386,
      39,    87,   239,   238,   425,   426,   427,   740,  1061,   241,
    1063,  1686,   363,   655,   656,  1843,  2079,   657,   658,  1294,
    1163,  1164,  1491,   659,    64,   140,   141,   313,   435,   749,
     436,  1068,  1069,  1070,  1092,  1071,  1402,  1403,  1072,  1432,
    1433,   748,   142,   314,   473,   777,   775,   143,   315,   489,
    1144,   144,   316,   501,   502,  1146,   145,   317,   510,   511,
     848,  1181,  1519,  1520,  1521,  1482,   332,  1746,  1740,  2027,
     803,   146,   318,   513,   147,   319,   516,   810,   148,   320,
     519,   815,   149,   150,   151,   321,   528,   824,   827,   152,
     322,   532,   533,   534,   535,   838,   536,  1170,  1171,  1172,
    1497,  1515,   831,   153,   323,   540,   844,   154,   324,   543,
     155,   325,   546,   547,   548,   853,   854,   855,  1191,   856,
    1186,  1187,  1525,   850,   156,   326,   557,   333,   157,   327,
     558,   158,   328,   561,   159,   329,   564,  1198,   160,   161,
     334,  1202,  1532,   162,   335,   569,   897,  1211,  1535,  1788,
    1789,  1790,  1791,   163,   336,   572,   164,   337,   574,   575,
     903,   904,  1223,   905,   906,  1546,  1547,  1220,  1221,  1222,
    1540,  1797,  2052,   165,   338,   166,   339,   584,   167,   340,
     586,   913,   168,   342,   592,   593,   917,  1569,   169,   343,
     597,   921,  1573,   922,   598,   599,   600,  1241,  1243,  1244,
     170,   344,   607,  1256,  1818,  2063,  2204,   929,   171,   172,
     345,   609,   173,   174,   346,   612,   936,   175,   347,   614,
    1257,   939,   176,   177,   348,   617,   945,  1260,  1587,  1588,
     943,   178,   349,   623,   724,   958,   624,   625,  1280,  1281,
     626,   627,   628,   629,   630,   631,   632,   179,   350,   579,
    1802,   907,  2057,  1228,  1552,  2055,  2200,   180,   351,   640,
    1283,   966,  1604,  1605,  1606,   962,   181,   642,   968,  1834,
     357,   182,   358,   644,   645,   646,  1616,   973,   183,   359,
     649,   978,   184,   361,   185,   362,   651,   186,   364,   660,
     187,   365,   662,   188,   366,   664,   991,  1624,  1625,  1299,
    1627,  1848,  2085,  1850,   989,  2080,  2214,  2312,  2313,  2314,
    2587,  2315,  2461,  2462,  2487,  2316,  2433,  2317,  2318,  2319,
     189,   367,   666,   934,  1300,  1249,  1853,   993,  1394,  1395,
    1396,  1691,  1692,   833,   834,  1166,  1468,  1469,  1728,  1838,
    1839,  2074,  1579,  2205,  1580,  1822,  1854,  1855,  1856,  1161,
    1162,  1490,  2010,   567,   568,   550,   551,   883,   884,   885,
     886,   887,   888,   889,  1095,  1446,  1105,   491,   492,   493,
     494,   474,   520,   818,   610,   618,  1237,  1238,   573,   633,
     634,   894,   601,   504,   505,  2265,  1947,  1024,  1941,  1942,
    1948,   400,   717,   559,   522,   836,   475,   476,  2723,  1117,
     496,  1101,  1450,  1548,  1735,   514,   602,  1388,  2017,  2011,
    1251,  1389,   580,   637,   477,   438,   523,   524,   439,   752,
     753,  1390,  1369,  2711,  1037,   478,   479,   480,   481,   482,
     483,   484,   781,   761,  1124,  1121,  1114,  1106,  1108,   675,
    1626,  2448,   798,  1137,  1477,   932,  1608,   681,   821,  1157,
    1756,  2234,   312,  1633,  1707,  1657,  1338,  1933,  1073,  2172,
     428,   394,   413,  1644,  2045,  1767,  1336,  2555,  1153,  2355,
    2083,  1559,  2694,  2194,  1747,   406,  1046,  1805,  2121,  2093,
    2550,  2140,  1654,  1695,  2697,   755,  1229,  1050,  1810,  2483,
    1057,  1988,   987,  2113,   404,  2101,  1929,  2270,  2430,  1614,
    1665,   896,  2335,   565,  2158,  2111,  2403,   606,  1553,  1404,
    1094,   819,  2459,   746,  1945,  2611,  2582,  1669,  1648,   812,
    2185,  1612,  1230,   395,  2642,  2648,  2736,  2737,  2738,  2739,
    2740,  2499
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     407,   408,   756,   652,   411,   538,   762,   577,   971,   813,
    1242,    63,   829,   374,   636,  1563,  1188,  1666,   706,  1712,
     709,  1528,   725,   712,   401,  1696,   423,  1581,  1697,  1939,
     409,   954,  1194,  2123,  1123,   503,  2019,  1634,   823,  1197,
     398,   784,   822,   549,  1133,  1993,   570,  1043,   372,  1677,
     490,  1126,   437,  1609,   497,   398,  2345,   515,  2142,  1183,
     635,   539,    85,  1643,  2460,   560,   616,  2575,   424,  1215,
    1671,  2163,  2164,   560,   946,   967,   576, -1892,  1800, -1594,
    1667,   791,   603, -1595,  1741,  1410,  1225,   560,  1703,  1681,
     412,  1486,  2180,  2398,   851, -1858,   937,   521,  1434,   909,
     900,  1769,  1168,   661,  1779,   665,  1438,   498, -1845,  1651,
    1550,  1169,   526,  1002,  1687,  1517,  -683,  1564,  1216,   526,
    2053,  1179,  2759,   694,  2772,  1607,  1738,   526, -1892,   919,
     861,  1952,  1099,  2262,   424,   517,  1052,   529,   424,  2161,
   -1600,   526, -1621, -1598,  1794,  1015,    -5, -1823,  1093,  2393,
     405,   823,  1804,  2423,  1722,   960,   495,   430,  2126,   192,
     608,   433,   613,  2325,   845,  1043,   701,   641,  1860,  1561,
    2162,  1953,  1183, -1787,   692,   861,  2154,   375,  1777,  1684,
     588,   663,   757,   500,   -21,  1841,   699, -1892,   518,  1233,
     741,    51,   703,   704,  2086,   705,   806, -1845, -1892,     4,
     710,   711,  1760,  1152,    19,   726,  1225,  2032,  1943,  1047,
    2260,   405,    80,   899,  2099,  2326,  2016,   744,  -681,  2484,
     503,   738,   789,  1493,  1494,   788,   788,   788,  1619,  1844,
    2003,  2004,  2005,  2006,  2007,  2421,  2277,   589,  2647,  1217,
    2015,   940,   763,  1678,  2099,   590,  2707,   930,  1150,   527,
     603,  1582,   515,  2485,  1292,  -683,   544,   500,  2464,  -683,
    1044,  1268,  2276,  1602,   985,  1098,   986,   545,  1603,   512,
    1449,  2325,  1269,  1151,  2486,  2422,  1583,   785,   498,   498,
     498,    52,  2278,   738,  2557,  1065,   811,  2100,  2424,  1376,
     739,  2708,   980,   994,  2030,  2143,  1804,   893,   931, -1892,
    1020,   373,    81,  2034,  1218,  2431,  2037,   745,   893,  1742,
   -1879,  1102,   526,  2734,   500,  2342,  1038,  2102,  -683,  -526,
   -1783,  1944, -1783,  2326,  2047,  2048,  1100,   495,   495,   495,
     -21,   591,   807,  -683,   742,  1158,   620,   603,  1946,   898,
    1131,   952,  1443,   825,  1761,   376,   846,  -526,  -526,  2033,
      20,   526,   739,  1188,  1214,  1297,  1188,  -681,  1443,   947,
     431,  -681,   526,     4,   434,  2178,  1443,   596,   560,  1154,
    1861,   718,  1743,   893,  1533,   731,   -32,  2352,  1044,   379,
     901,  1780, -1803,  1536, -1787,   193,   380,   976,  1723,  2289,
    2425,  1744,  2127,   518,   779,  1226,   596,   449,  1565,  2054,
     622,  1857,  -688,  2049,   424,  1472,   718,   751,  1730,  2341,
    1097,   970,   948,  1443,  2001,  1250,  1443,  1443,  2613,  1443,
    -681,   682,   526,   653,   441,   621,  2558,   526, -1823,  2217,
    1748,  1739,   876,   694,  1168,  -681,  2263,  1443,  1296,  1266,
     434,   453,   518,  1169,   518,  1827,  1991,   499,   920,   518,
   -1787,   458,  2612,   902, -1787,  1551,   622,  1704,  1990,  1708,
     434,  2720,   434,  -526,  -683,  1566, -1858,  1495,  1430,   578,
    1770,  1954,  1526,  1158,   732,   605,  1227,   876,   654,   518,
    -688,  1018,  2576,  2346,   596,   696,  1096, -1818,  2141,  1022,
     788,   792,  -526,  1027,  2594,   434,   793,   788,   788,   788,
    1009,  1184,  1113,  1113,  1113,  1672,   788,   788,   788,  1118,
   -1783,  1118,  1185,    86,   434,  1132,  1051,  2447,  1074,   788,
     751,  1118,   788,   596,  1097,  1781,   434,   434, -1787,  1058,
    1067,   788,   788,   788,   788,   788,   462,  1437,  1219,  1668,
     683,   713,  2110,   498,  2182,  1053,  1522,   816,  1745,  1682,
     498,   498,   498,   521,  1155,   399,  1679,   518,   788,   498,
     498,   498,  1119,   373,  1119,  1498,  -681,  2330,  1129,   549,
     399,   434,   498,   434,  1119,   498,   811,   653,  2537,  2192,
    2577,  1483,   764,  -526,   498,   498,   498,   498,   498,  1295,
     852, -1783,   495,   381, -1787,   434,  1227,  2094, -1787,   495,
     495,   495,   449,  1253,  2432,  1016,   464,  1173,   495,   495,
     495,   498,  2524,  1199,  1184, -1892,  1466,   786,   499,   499,
     499,   495,  1232,   521,   495,  1185,  1340,  2356,   434,  2583,
     449,   718,   654,   495,   495,   495,   495,   495,  1129,   947,
    1159,  1471,  1496,   605,  1246,  1470,   453,   788,  2021,   560,
     895,   449,   467,   449,  2320, -1879,   458,  1451,   449,  2016,
     495, -1892,  2271,  1245,   733,    13,  1382,    46,  2382,   382,
    2526, -1892,  1252,  1825,   453,   955,  1541,  1444,   981,   653,
    1749,  1750,  1751,  1261,   458,  1236,  2584,  1188,   449,  2411,
     893,   521,   948,  1444,  2585,   453, -1892,   453,   434,  1341,
     498,  1444,   453,   526,   472,   458,  1129,   458,  2038,  1258,
    2040,  2418,   458,  1290,  2527,  1930,  2207,  1589,  -526,  2114,
   -1787,   419,   733,   947,  1721,  1610,   383,  1557,  2097,  1445,
     605,   384,   453,     3,   654,  1284,  2198,   982,  -686,    15,
    1048,   462,   458,  2058,   526, -1666,  2528,  1752,  1444,   495,
    1167,  1444,  1444, -1668,  1444,  1282,   521,   682,  1593,  1594,
    1595,  1596,  1597,  1598,  1599,  1600,   449,   379,   734,   462,
     596,  1129,  1444,  2308,   380,    23,   948,  2076,  2077,  1347,
    2586,    47,   379,   693,  1380, -1789,   330,  2098,    25,   380,
     462,  1772,   462,  1774,   622,  2064,  2669,   462,  1333,  2119,
    1457,  2601,   379, -1664, -1662,  2144, -1659,   537,  1365,   380,
     453,   464,  2145,   792,  2529,  2065,  -686,  2490,   793,  2534,
     458,  2718,   947,  1451,  1475,  1558,   734,   462,  1398,  2156,
    1399,  2457,  1448,  2208,  2197,  2458,   788,  1807,  1074,   464,
    2747,  2066,  1452,   596,   650,  2491,  2492,  2446, -1892,   817,
    1383, -1803,   718,  2199,  2670,  1467,  2357,   467,  1391,  2307,
     464,  -678,   464,  1381, -1787,  1481,  2067,   464,   441,  1372,
    1373,  2309,  1753,  1754,  2547,   948,   683,  1755,  1348,  2593,
    2157,  1479,  1342,   499,  1522,   467,    28,  1931,   434,   498,
     499,   499,   499,  2321,  1387,  1842,  1611,   464,  2672,   499,
     499,   499,  1120,   434,  1120,   462,   467,   521,   467,   472,
    2310,  2358,   499,   467,  1120,   499,   434,   352,   526,   434,
     419,   596,   526,  1349,   499,   499,   499,   499,   499,  1265,
    2673,  2591,  1578,  1542,  1152,   526,  1049,   472,   495,  1173,
    2636,   718,  1560,   467,  1343,  2120,   434,  1487,  2480,  2311,
    1554,   499,   434,   596,   434,  1023,   622,  2749,   472,   434,
     472,   947,   947,  2046,   331,   472,  1349,  1350,   434,   560,
     893,   526,  2652,  2653,   373,   464,   953,  1351,  2303,   507,
    2690,   381,  1543,  1729,  2691,  2692,  1286,  2257,  2257,   434,
     405,  1685,  1795,  2353,  1577,   472,   381,  2374,  2674,   552,
    -678, -1892,   947,  2688,  -678,  2579,  1571,   956,  1858, -1562,
    1350,   718,   353,  2715,   948,   948,   381,  1247,  1400,   837,
    1351,   467,  1725,   526,   526,   526, -1892,  2146,   596,   434,
    1618,  1859,  2258,  2258,  1352,  1851,  1160,  1628,  1628,  1555,
     499,  2698,  2715,  1661,   957, -1890,  1248,  2361,  2362,  2363,
    2384, -1892,   354,  1570, -1805,   948,   719,   382,   720,  1617,
    2405,  2406,  1353,  -678,    24,  1254,  2016,   434,  1617,  1258,
    1717,  2717,   382,   472,   449,  2481, -1892,  1662,  -678,  2099,
    1846,  2493,   355,  2452,   526,   398,   405,  2580,  2068,  2581,
   -1783,  2598,   382,  2257,  2099,  2401,  2599,  1821,   963,  1401,
     808,  1642,  1689,  1645,  1690,  1353,  1650,  1652,  1447,  1655,
     718,  1160,  2479,   718,   383,  2147,  1287,   792,   453,   384,
    2754, -1562,   793,  2099,  2297,  2298,   553,   554,   458,   383,
    1813,  -353,  1354,  2427,   384,   508,  2563,   509,  2258,   449,
    2148,  2712,  2149,  2654,  2165,   555,  1737,  -353,    31,   383,
    1215,  1660,  2104,  2014,   384,  1814,  2638,  2124,  2569,   964,
    2639,  2474,   965,   719,  2615,   720,  1272,  2106,  1544,    36,
    2364,   695,  1568,  1852,  1273,  1354,  2463,   797,  1355,  1356,
     356,  1709,  1711,   453,  2365,   788,   788,  -353,  1709,  1676,
    1709,  2125,   788,   458,   788,  1762,  2108,  1698,   434,  1216,
     556,  1118,  1699,  2463,  1387,    37,  1021,  1737,  1732,  -678,
    1193,   541,   788,   462,  2434,  1736,  2494,  1705,  2035,  2036,
     566,   809,  1763,  2441,  1764,  2616,   696,   585,   587,   499,
    1357, -1818,  2028,  1392,  2605,  2649,  1393,  1998,   498,   498,
    2755,   385,  1783,  2050,  1011,   498,   647,   498,   615,  2689,
    1201,   596,  1935,  2031,  1119,  1203,  -353,  1706,  1204,  1949,
     405,  1205,  1206,  2756,   526,   498,  1999,  1785,   667,  2366,
    2367,  2368,  2051,  1357,   449,  1239,  1736,   947,   462,  1646,
      32,  1647,  1467,   464,  2369,   947,  2387,   495,   495,  2750,
    -353,  1759,  1737,  1773,   495,  1775,   495,  1768,   893,  2539,
     679,   596,   373,  1824,  1771,  1012,  1013,  2542,   526,   581,
     526,  2013,  2013,  1245,   495,    42,   449,  2640,   453,  -353,
    1217,   581,  2588,  2757,   680,  1960,  -353,  2641,   458,   467,
     948,   792,  1571,  1104,  1107,  1110,   793,  -353,   948,   521,
     204,  1473,  1274,  1828,  1803,  1819,  2758,  1833,   464,    43,
     792,   788,   526,   794,   526,   793, -1105,  1961,  1134,  2617,
     453,  1736,   795,   778,  2618,   947,   863,   864,  2012,  2012,
     458,   923,  2018,    35,  1275,   434,  2370,  2013,  2013,  1570,
    2091,   472,  2092,  1204,   792,  1218,  1205,  1206,   205,   793,
     924,  2744,  2386,  2183,   467,  2184,  1276,   521,   765,   766,
   -1105,  2748,  1545,    40,   498,  1028,   865,   866,   771,   441,
   -1105, -1562,   526,   462,  1453,  2056,    55,  1455,   948, -1562,
   -1562,  2725,  2645,  1458, -1562,   778,   206,  1462,   207,    59,
     208,  1928,    62,  1464,  2012,  2012,  2626,  1938,   209,   890,
     434,  2155,    61,  -353,  -353,  1951,   472,  2627, -1600,  1029,
    2129,  1277,   801,   495,  2116,   462,    65,  2726,  -353,  1030,
    -353,   828,  2580,  1758,  2581,   751,  1737,  2548,  2549,  2280,
    2628,   910,  2414,    67,  2640,  1135,    68,   506,  1956,  2416,
    2417,   525,    69,   464,  2641,   792,  2029,  2645,   525,   562,
     793,    71,  2008,  2009,   210, -1105,   525,  2020,    72,   582,
    2629,  2115,    73,  2609,   604,  2610,   611,   792,   611,   619,
     638,   582,   793,  1278,  1488,  2722,  2724,   737,    46,  1492,
    2237,   737,  2646,  2695,  2696,   464,  1207,  1208,   611,   467,
     969,  2023,    47,   647,  1311,  1736,  2753,    77,   778,  2640,
     204,   792,    33,    34,  1031,  -353,   793,  1115,  1116,  2641,
    1312,   191,  1209,  1210,  1529,  2763,   204,  1138,  1139,  2238,
    2239,  2240,  2241,  2242,   526, -1105,   526,   707,  1077,   707,
    1078,   467,   707,   198,  2167,  2765,   199,   203,   499,   499,
     233,   472,  2776,   234,   787,   499,   790,   499,   205,   211,
    1313,   236,   237,  -353,  1120,  1875,  1876,   240,   341,   526,
     399,   360,  -362,  2133,   205,   499,  1140,  1141,  1142, -1892,
    1817, -1105,  1279,  1584,  1032,   449,   402,   434,   368,  1219,
    2236,   385,   877,   472,   878,   403,   206,   405,   207, -1892,
     208,  2075,   412,   410,   526,   212,   415,   420,   209,   432,
     373,   542,   206,   434,   207,   563,   208,  2130,  2131,   668,
     571,  1207,  1208,   669,   209, -1892,   676, -1105,   678,   453,
    1033,   689,   506, -1105,  1127,   691,   698,   708,  1714,   458,
    1716,   690,   713,  1718,  1719,  1720,   727,  1209,  1210,  1724,
   -1892,   525, -1578, -1578, -1578, -1578,  2259,  2259,  1733,  1734,
     729,  2181,   730,  2727,   210,   747,   750,  2728,  2729,  2122,
    2243,  2244,  2245,  2246,  2247,  2248,  2249,  1888,  1889,   751,
     210,   758,  1034,   839,   840,   841,   842,   754,  1075,  1076,
     525,   774,   405,   759,   779,   778,   760,   213,   767,  1314,
     796,   525,   768,  1178,  1180,   769,  2168,   770,   772,   814,
    1315,  2730,  2261,  2152,   499,   800,  2153,   515,  2266,  2268,
    1693,   780,   782,  2160,   462,   783,  2731,  2732,   802,   820,
    1077,   826,  1078,   828,  1079,   830,   832,  2187,   843,   847,
     214,   890, -1577, -1577, -1577, -1577,   849,   619,   891,   895,
    2173,  1174,  1175,  1176,  1177,   908,   911,   912,  2721,   211,
     418,   525,  2259,  2230,   914,   916,   525, -1580,  1080,  1081,
    1082,   925,  1234,   926,   927,   211,  2176,  1570,  2103,  2105,
    2107,  2109,   928,   933,  2213,   935,  2188,   938,  2189,   942,
     949,  1726,  2216,   944,   464,  2218,   622,   959,   961,   424,
     972,   526,  2333,   526,  2536,   212,   977,   984,   988,   990,
     992,   995,   996,  1757,  1270,   215,  1316,  1317,  1083,   997,
    1084,   212, -1670,  2203,  2250,  1285,  1000,  1085,  1008,  1289,
    1086,  1318,  1006,  1319,  1019,   707,   718,  1293,  1023,  2251,
     467,  1025,  1026,  1039,  1041,  1040,  1059,  2344,  1056,  1060,
    1784,  1062,  1103,  1097,  1786,  1111,  1112,  1130,  1122,  1136,
    1143,   500,  1145,  1156,  1160,  1873,  2377,  2378,  2230,  1189,
    2379,  2381, -1892,  1165,  1192,   596,  1200,  1064,  1213,   901,
    1231,  1240,   596,  1259,  1255,  1398,  1077,  1399,  1078,  1263,
    1264,  1271,   472,  1291,  1298,  1304,  1303,   213,  1305,  1307,
    1308,  -374,  1820,  1310,  1335,  1337,  1339,  1128,  1363,  2397,
    1346,  1366,  2306,   213,  1367,  2275,  1371,  1376,  1320,  1087,
    1384,  1088,  2282,  2283,  2284,  2285,  2322,  1385,  1435,  1436,
    2288,  1439,  1441,  2409,  2391,  1440,  1454,  1456,   622,  1442,
     214,  1459,  2377,  1460,  1461,  1463,  1465,  1484,  1474,  1485,
    1476,  1480,  1523,  1516,  1489,  1530,   214,  2302,  1226,  1518,
    2176,  1524,  1531,  1534,  1537,  1538,  1321,  1562,  1549,  1572,
    1574,  1575,  1585,  1586,  1578,  1620,   728,  1128,  1590,  2404,
    1613,  1621,  1622,  1570,  1623,  1632,  1636,  1643,  1638,  1637,
    1656,  1658,  1653,  1664,  1152,  1674,  1688,  1694,  1701,  1702,
    1706,  1727, -1599,  1796,  2266,   434,  2351,  1787,  1804,  1793,
    1799,  1806,  1801,  1812,  1821,   215,  2002,  1823,  1809,  1837,
    1840,  1845,  1847,  2468,  1849,   506,  1863,  1864,  1936,  1934,
    1940,   215,  2657,  2266,  2344,  1994,  1995,  2360,  1950,  1996,
    1467,  2000,   525, -1555, -1597,  1128,  2039,  2041,  2026,  2044,
    2380,  2022,  2059,  2060,  2061,  2078,   506,  2073,  1891,  2084,
    1852,  2344,  2024,  2025,  2062,  2385,  2082,  2096,  2110,  2118,
    2112,  2134,  2128,  2139,  2136,  2658,   379,  2659,  2159,  2169,
    2171,  2190,  2191,   525,  1500,  2193,  2170,  1501,  2179,  1570,
    2196,  2221,  2564,   441,  1502,  1503,  2209,  2210,  2211,  2222,
    2215,  2224,  2231,  2293,  2269,  2295,  2606,  2296,  2660,  2304,
    1128,  2226,  2233,  2538,  2305,  2290,  2323,  1089,  2331,  2340,
    2390,  2574,  2334,  2339,  2389,  2703,  2396,  2375,  2407,  1592,
    2661,  2343,  2399,  2383,  2395,  2415,  2428,  2456,  2439,  2429,
    2444,  1504,  2308,  2436,  2438,  2069,  2453,  1253,  2070,  2071,
    2445,  2469,  1895,  2475,  2477,  2266,  2482,  1065,  2662,  2543,
    2540,  2072, -1892,  2472,  2541, -1892,  2552,   442,  1090,  2489,
    2565,  2553, -1892, -1892,  2016,  2088,  2089,  2570,  2568,  2654,
    1091,  2693,  2451,  2741,   444,  2699,  1957,  2344,  2701,  2742,
    2766,  2769, -1783,  2775, -1783,    14,   582,    83,  2589,    54,
      84,  1958,  2770,    79,  1055,    76,  2473,    75,   397,  1670,
    1505,  1959,  1683,   417,  2291,  1375,  1252,  2455,   697, -1892,
    2281,  1042,  2287,  1362,  2410,  1017,  2498,  2533,  2408,  2566,
    2292,  2525,  2567,  1900,  2274,   999,  2467,  2227,  2764,  2700,
    2471,  1506,  2663,  2535,  2604,  2762,  1550,  2338,  2746,  2768,
    2559,  2545,  2546,  2560,   515,  2622,  2394,   525,  2623,  2664,
    2624,   525,  2556,  1507,  2597,   429,  1778,  2561,   190,  1397,
    1700,  1478,   799,  1776,   525,  1148,  1149,   506,   445,   446,
     447,  2665,  1499,  1182,  1190,   835,  2743,   448, -1892,  1782,
    2745,  1527,   892,  2043,  1212,  1224,  1798,  1539,  2573,   449,
    1235,   915,  2666,  1808,   918,  2614,  1815,  1576,  1631,  2590,
     525,   515,  1826,  1262,  1601,   639,   950,  1508,  1629, -1892,
     951,   975,  2667,  1836,  2600,  2081,  2602,  1630,  2488,  1909,
    2603,  2668,  1301,  2206,  2087,  1196,  2090,  1829,  1830,  1831,
     941, -1892,  1832,   453,  1147,   454,   455,   456,  2777,  1345,
    2186,   457,  1509,   458,  1591,  2138,  2562,   805,  1675,  1045,
    1673,   773,   525,   525,   525,  2235,  2388,  2286,  2195,  2450,
    2716,  1370,  1510,  1811,  1570,  1615,  2735,  2706,  1792,   442,
    1989,  2607, -1783,  1649,  2449,     0,     0,     0,  2643,  2644,
       0,     0,   460,     0,     0, -1892,   444,  2212,     0,     0,
       0,     0,  1067,  2651,     0,  1960,     0,     0,  2655,  2656,
       0,   788,   788,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   525,  2702,     0,     0,  2704,  2705,     0,
   -1892,     0,   788,  1816,  1511,     0,     0,  1961,   462,     0,
       0,     0,     0,     0,  2761,  2761,     0,  -237,  1512,     0,
   -1892,   788,     0,     0,     0,     0,     0,     0,     0,     0,
    2719,     0,     0, -1783,   498,   498,     0,  1513,   463,     0,
       0,     0,  1835,  1835,  2774,     0,     0,     0,   788,     0,
       0,     0,     0,     0,     0,   498,     0,     0,     0,     0,
     445,   446,   447,     0,     0,     0,     0,     0,     0,   448,
       0,     0,  1962,     0,   498,     0,     0,  1963,   464,     0,
       0,   449, -1892,   495,   495,     0,     0,     0,     0,     0,
     465,   466,     0,     0,     0,     0, -1892,     0,     0,     0,
       0,   498,     0,  1514,   495,     0,     0,     0,     0,     0,
       0,  1964,     0,     0,   485, -1892,     0,     0,     0,  1965,
     451,     0,   452,   495,   467,   453,     0,   454,   455,   456,
       0,  1966,     0,   457,   468,   458,    88,     0,    89,     0,
      90,     0,     0,     0,     0,    91,     0,     0,     0,     0,
     495,     0,     0,    92,     0,   469,     0,     0,     0,   707,
     470,  1551,     0,     0,  1967,     0,     0,     0,   471,     0,
     434,     0,  1968,   525,   460,     0,   472,     0,     0,  1254,
       0, -1892,     0,  -234,     0,     0,    93,    94,     0,     0,
       0,     0,  1167,   461,     0,     0,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2042,    96,     0,     0,
      97,     0,   596,  1969,     0,     0,  1970,   525,     0,   525,
     462,     0,     0,     0,    98,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    99,     0,     0,
     463,     0,     0,     0,     0,   100,     0,   101,     0,     0,
       0,   525,     0,   525,  -726,     0,  -726,  -726,  -726,  -726,
    -726,  -726,  -726,  -726,     0,  -726,  -726,  -726,     0,  -726,
    -726,  -726,  -726,  -726,  -726,  -726,  -726,  -726,   102,     0,
     464,     0,     0,     0,     0,     0,     0,     0,     0,   103,
       0,     0,   465,   466,   104,   442,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   525,   444,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   105,     0,   582,     0,   467,     0,   487,   106,
       0,     0,   107,   108,     0,     0,   468,     0,     0,     0,
       0,   707,     0,   109,     0,     0,     0,     0,     0,     0,
     110,     0,   111,     0,     0,   112,     0,   469,     0,     0,
       0,     0,   470,     0,   499,   499,     0,     0,     0,     0,
     471,     0,   434,     0,     0,     0,     0,     0,   472,     0,
       0,     0,     0,     0,     0,   499,   582,   582,   582,   582,
     582,     0,     0,     0,   582,   582,   582,   113,   582,     0,
       0,   114,     0,   115,   499,   594,   445,   446,   447,     0,
       0,     0,     0,   116,     0,   448,     0,     0,     0,     0,
    -726,  -726,  -726,     0,  -726,  -726,  -726,  -726,     0,     0,
      88,   499,    89,     0,    90,     0,     0,     0,     0,    91,
       0,   117,     0,     0,     0,     0,     0,    92,     0,     0,
     582,     0,     0,     0,   118,     0,     0,     0,     0,   582,
     582,   582,   582,   525,     0,   525,     0,     0,     0,     0,
       0,   595,     0,   454,   455,   456,     0,     0,  2202,   457,
      93,    94,   119,   120,     0,     0,     0,     0,     0,     0,
      95,     0,     0,   121,   707,     0,     0,     0,   525,     0,
       0,    96,     0,     0,    97,     0,   122,   123,     0,     0,
       0,     0,     0,   124,     0,     0,     0,   125,    98,     0,
     460,     0,     0,     0,     0,     0,   126,     0,     0,     0,
       0,     0,     0,   525,     0,     0,   127,     0,     0,     0,
       0,    99,     0,     0,     0,   128,     0,     0,     0,   100,
       0,   101,     0,     0,   129,     0,     0,     0,     0,   130,
     131,     0,     0,   132,     0,   133,     0,     0,     0,     0,
       0,     0,     0,   134,     0,     0,     0,     0,     0,     0,
       0,     0,   102,     0,     0,     0,  -726,     0,     0,     0,
    2117,     0,     0,   103,     0,     0,   463,     0,   104,     0,
       0,     0,     0,     0,   136,     0,     0,     0,  2299,     0,
       0,   137,  2300,  2301,     0,     0,   138,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   105,     0,     0,     0,
       0,     0,     0,   106,     0,     0,   107,   108,  -726,     0,
       0,     0,     0,     0,   139,     0,     0,   109,   465,   466,
       0,     0,     0,     0,   110,     0,   111,     0,     0,   112,
       0, -1892,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   468,     0,     0,     0,     0,     0,     0,     0,
     582,   113,     0,     0, -1158,   114,     0,   115,     0,     0,
       0,     0,     0,   469,     0,     0,     0,   116,   470,     0,
       0,     0,     0, -1158,     0,     0,   471,   596,   434,     0,
     525,     0,   525,     0,     0,     0,     0,     0,     0,  1867,
    1868,  1869,  1870,  1871,  1872,   117,     0,     0,  2201,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1874,     0,  1875,  1876,  1877,  1878,
    1879,  1880,  1881,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   121,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,   123,     0,     0,     0,     0,     0,   124,   442,     0,
    1882,   125,     0,     0,     0,     0,     0,   707,     0,     0,
     126,     0,     0,     0,     0,   444,     0,     0,     0,     0,
     127,     0,     0,  2273,  2273,     0,     0,     0,     0,   128,
       0,     0,     0,    88,     0,    89,     0,    90,   129,     0,
       0,     0,    91,   130,   131,     0,     0,   132,     0,   133,
      92,     0,     0,     0,     0,     0,     0,   134,     0,     0,
       0,  1883,  1884,  1885,  1886,  1887,     0,     0,  1888,  1889,
     135,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    93,    94,     0,     0,     0,   136,     0,
       0,     0,     0,    95,     0,   137,     0,  2336,     0,     0,
     138,     0,  1890,     0,    96,     0,     0,    97,     0,   445,
     446,   447,     0,     0,     0,     0,     0,     0,   448,     0,
       0,    98,     0,     0,     0,     0,     0,     0,   139,     0,
     449,     0,     0,     0,     0,     0,   707,     0,     0,     0,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
       0,     0,   100,   707,   101,   707,   707,     0,     0,   707,
    1892,     0,   442,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   506,   453,     0,   454,   455,   456,   444,
       0,     0,   457,     0,   458,   102,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   103,     0,     0,     0,
       0,   104,     0,     0,  1894,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1896,   707,   707,     0,     0,
       0,     0,     0,   460,     0,     0,     0,     0,     0,   105,
    1897,   707,     0,     0,  2413,  2413,   106,     0,     0,   107,
     108,     0,  2413,  2413,  2420,     0,     0,     0,     0,     0,
     109,     0,     0,     0,     0,     0,   506,   110,     0,   111,
       0,     0,   112,     0,     0,     0,     0,     0,     0,   462,
       0,     0,   594,   445,   446,   447,     0,     0,     0,     0,
       0,     0,   448,    88,     0,    89,     0,    90,     0,     0,
       0,     0,    91,   707,     0,  1901,  1902,  1903,     0,   463,
      92,     0,     0,     0,   113,   506,     0,     0,   114,     0,
     115,     0,   707,     0,     0,     0,     0,   707,     0,     0,
     116,     0,   707,   707,     0,     0,     0,     0,     0,     0,
       0,     0,   506,    93,    94,     0,     0,     0,   804,   464,
     454,   455,   456,    95,     0,     0,   457,     0,   117,     0,
     707,   465,   466,     0,    96,     0,     0,    97,  2544,     0,
       0,   118,     0,     0,     0,     0,     0,     0,  1905,  1906,
    1907,    98,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   467,     0,   460,     0,   119,
     120,     0,     0,     0,    99,   468,     0,     0,     0,     0,
     121,     0,   100,     0,   101,     0,     0,     0,     0,     0,
     707,     0,     0,   122,   123,     0,   469,     0,     0,     0,
     124,   470,     0,     0,   125,     0,     0,   582,     0,   471,
       0,   434,   582,   126,     0,   102,     0,   472,     0,     0,
       0,     0,     0,   127,   707,     0,   103,     0,     0,     0,
       0,   104,   128,     0,     0,     0,     0,     0,     0,     0,
       0,   129,     0,   463,     0,     0,   130,   131,     0,     0,
     132,     0,   133,     0,     0,     0,   707,     0,     0,   105,
     134,     0,     0,     0,     0,     0,   106,     0,     0,   107,
     108,     0,   582,   983,     0,     0,   582,     0,     0,     0,
     109,     0,     0,     0,     0,     0,     0,   110,   442,   111,
       0,   136,   112,     0,     0,   465,   466,     0,   137,     0,
       0,     0,     0,   138,     0,   444,     0,     0, -1892,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   139,     0,     0,   113,     0,     0,     0,   114,   468,
     115,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     116, -1158,     0,     0,     0,     0,     0,     0,     0,     0,
     469,     0,     0,     0,     0,   470,     0,     0,     0,     0,
   -1158,     0,     0,   471,   596,   434,     0,     0,   117,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     242,   118,   243,     0,     0,     0,     0,   244,     0,   445,
     446,   447,     0,     0,     0,   245,     0,     0,   448,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,     0,     0,     0,     0,     0,     0,     0,   246,   247,
       0,     0,     0,   122,   123,     0,     0,     0,   248,     0,
     124,     0,     0,     0,   125,     0,     0,     0,     0,   249,
       0,     0,   250,   126,   804,     0,   454,   455,   456,     0,
       0,     0,   457,   127,     0,     0,   251,     0,     0,     0,
     440,     0,   128,   441,     0,     0,   857,   858,   859,     0,
       0,   129,     0,     0,   860,     0,   130,   131,     0,   252,
     132,     0,   133,     0,     0,     0,     0,   253,     0,   254,
     134,     0,     0,   460,     0,     0,   255,     0,   256,   257,
     258,   259,   260,   261,   262,   263,     0,   264,   265,   266,
       0,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   136,     0,     0,     0,     0,     0,     0,   137,     0,
       0,   277,     0,   138,     0,     0,   278,   442,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   444,     0,     0,     0,     0,     0,
       0,   139,     0,     0,   279,     0,     0,     0,     0,   463,
       0,   280,     0,     0,   281,   282,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   283,     0,     0,     0,     0,
       0,     0,   284,     0,   285,     0,     0,   286,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   861,     0,     0,     0,     0,     0,
       0,   465,   466,     0,   862,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   287,
       0,     0,     0,   288,     0,   289,     0,     0,   445,   446,
     447,     0,     0,     0,     0,   290,     0,   448,     0,     0,
       0,     0,     0,   863,   864,   468,     0,     0,     0,   449,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   291,     0,     0,   469,     0,     0,  1195,
       0,   470,     0,     0,     0,     0,   292,     0,     0,   471,
       0,   434,   450,   865,   866,     0,     0,     0,   451,     0,
     452,     0,     0,   453,     0,   454,   455,   456,     0,     0,
       0,   457,     0,   458,   293,     0,     0,     0,   459,     0,
       0,     0,     0,     0,     0,   294,     0,     0,     0,     0,
       0,   867,     0,     0,     0,     0,     0,   868,     0,   295,
       0,     0,   869,     0,     0,   296,     0,     0,     0,   297,
     870,     0,   460,     0,     0,     0,     0,   871,   298,     0,
       0,     0,   872,     0,     0,     0,     0,     0,   299,     0,
       0,   461,     0,     0,     0,     0,     0,   300,     0,     0,
       0,   873,     0,     0,     0,     0,   301,     0,     0,     0,
       0,   302,   303,   440,     0,   304,   441,   305,   462,   857,
     858,   859,     0,     0,     0,   306,     0,   860,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   307,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   463,     0,
       0,     0,     0,     0,     0,     0,   308,     0,     0,     0,
       0,     0,     0,   309,     0,     0,     0,     0,   310,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   464,     0,
     442,     0,     0,     0,     0,     0,   311,     0,     0,     0,
     465,   466,     0,     0,     0,     0,     0,   444,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   874,     0,   875,     0,   876,     0,     0,   877,
       0,   878,   879,   880,   467,     0,   881,   882,     0,     0,
       0,     0,     0,     0,   468,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -890,     0,     0,
    -890,     0,     0,     0,     0,   469,     0,   861,     0,     0,
     470,     0,     0,     0,     0,     0,     0,   862,   471,     0,
     434,     0,     0,     0,     0,     0,   472,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     424,   445,   446,   447,     0,     0,     0,     0,     0,     0,
     448,     0,     0,     0,     0,     0,   863,   864,     0,     0,
       0,     0,   449,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -890,     0,     0,     0,     0, -1787,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -890,     0,     0,     0,   450,   865,   866,     0,     0,
       0,   451,     0,   452,     0,     0,   453,     0,   454,   455,
     456,     0,     0,     0,   457,     0,   458,     0,     0,     0,
       0,   459,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   867,     0,     0,     0,     0,     0,
     868,     0,     0,   440,     0,   869,   441,     0,     0,     0,
       0,     0,     0,   870,     0,   460,     0,     0,     0,     0,
     871,     0,     0,     0,     0,   872,     0,  -951,     0,     0,
       0,     0,  -951,     0,   461,  -951,     0,     0,     0,     0,
       0,     0,  -951,  -951,   873,  -890,  -890,  -890,     0,     0,
       0,     0,     0,     0,  -890,     0,     0,     0,     0,     0,
       0,   462,  -951,     0,  -951,     0,  -890,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     442,     0,     0,     0,     0,     0,     0,     0,     0,  -951,
       0,   463,     0,     0,     0,     0,     0,   444,     0,  -890,
       0,     0,     0,     0,     0,  -890,     0,  -890,     0,     0,
    -890,     0,  -890,  -890,  -890,     0,     0,     0,  -890,     0,
    -890,     0,     0,     0,     0,  -890,     0,     0,     0,     0,
       0,   464,     0,     0,     0,     0,     0,   440,     0,     0,
     441,     0,     0,   465,   466,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -951,  -890,
       0,     0,     0,     0,  -890,   874,     0,   875,     0,   876,
       0,     0,   877,     0,   878,   879,   880,   467,  -890,   881,
     882,     0,     0,     0,     0,     0,     0,   468,     0,  -951,
       0,   445,   446,   447,     0,     0,     0,     0,     0,     0,
     448,     0,     0,     0,     0,  -890,     0,     0,   469,     0,
       0,  -951,   449,   470,   442,     0, -1787,     0,     0,     0,
       0,   471,     0,   434,     0,     0,     0,     0,     0,   472,
       0,   444,     0,     0,     0,  -890,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   450,     0,     0,     0,     0,
       0,   451,  -951,   452,     0,     0,   453,     0,   454,   455,
     456,     0,     0,     0,   457,  -951,   458,     0,     0,  -890,
       0,   459,  -951,     0,     0,  -890,     0,     0,     0,     0,
       0,   440,     0,     0,   441,     0,     0,  -890,  -890,     0,
       0,     0,     0, -1892,     0,     0,     0,     0,     0,     0,
    -951,     0,     0,     0,     0,   460,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -951,  -890,     0,     0,   461,   445,   446,   447,     0,     0,
       0,  -890,     0,  -951,   448,     0,   330,     0,  -890,     0,
       0,     0,     0,     0,     0,     0,   449,     0,     0,     0,
       0,   462,  -890,     0,     0,     0,     0,  -890,   442,     0,
   -1787,     0,     0,     0,     0,  -890,     0,  -890,     0,     0,
       0,     0,     0,  -890,     0,   444,     0,     0,     0,   450,
       0,   463,  -951,     0,     0,   451,     0,   452,     0,     0,
     453,     0,   454,   455,   456,     0,  -951,     0,   457,     0,
     458,     0,     0,     0,     0,   459,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -951,   440,     0,     0,   441,
       0,   464,     0, -1892,     0,     0,     0,     0,  1267,     0,
       0,     0,     0,   465,   466,     0,     0,     0,     0,   460,
       0,     0,     0,     0,     0,   440,     0,     0,   441,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   461,     0,
       0,     0,     0,     0,     0,     0,     0,   467,     0,   445,
     446,   447,     0,     0,     0,     0,     0,   468,   448,     0,
       0,  -951,     0,     0,     0,   462,     0,     0,     0,     0,
     449,     0,  -951,   442,     0,     0,     0,     0,   469,     0,
       0,     0,     0,   470,     0,   443,     0,     0,     0,     0,
     444,   471,  -951,   434,   331,   463,     0,     0,     0,   472,
       0,     0,   442,   450,     0,     0,     0,     0,     0,   451,
       0,   452,     0,     0,   453,     0,   454,   455,   456,   444,
       0,     0,   457,     0,   458,     0,     0,     0,     0,   459,
       0,     0,   643,     0,     0,   464,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   465,   466,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   460,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   467,   461,     0,   445,   446,   447,     0,     0,     0,
       0,   468,     0,   448,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   449,     0,     0,     0,   462,
       0,     0,   469,   445,   446,   447,     0,   470,     0,     0,
       0,     0,   448,     0,     0,   471,   596,   434,     0,     0,
       0,     0,     0,   472,   449,     0,     0,     0,   450,   463,
       0,     0,     0,     0,   451,     0,   452,     0,     0,   453,
     974,   454,   455,   456,     0,     0,     0,   457,     0,   458,
     440,     0,     0,   441,   459,     0,     0,   450,     0,     0,
       0,     0,     0,   451,     0,   452,     0,     0,   453,   464,
     454,   455,   456,     0,     0,     0,   457,     0,   458,     0,
       0,   465,   466,   459,     0,     0,     0,     0,   460,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   461,  1268,     0,
       0,     0,     0,     0,     0,   467,     0,   460,     0,  1269,
       0,     0,     0,     0,     0,   468,     0,   442,     0,     0,
       0,     0,     0,     0,   462,     0,   461,     0,   440,     0,
       0,   441,     0,     0,   444,     0,   469,     0,     0,     0,
       0,   470,     0,     0,     0,     0,     0,     0,     0,   471,
       0,   434,     0,   462,   463,     0,     0,   472,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   463,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   464,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   442,   465,   466,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   583,     0,     0,
       0,     0,   444,   464,     0,     0,     0,     0,   445,   446,
     447,     0,     0,     0,     0,   465,   466,   448,     0,     0,
     467,     0,     0,     0,     0,     0,     0,     0,     0,   449,
     468,     0,     0,     0,     0,   440,     0,     0,   441,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   467,
       0,   469,     0,     0,     0,     0,   470,     0,     0,   468,
       0,     0,   450,     0,   471,     0,   434,     0,   451,     0,
     452,     0,   472,   530,     0,   454,   455,   456,     0,     0,
     469,   457,     0,   458,     0,   470,     0,     0,   459,     0,
       0,     0,     0,   471,     0,   434,   445,   446,   447,     0,
       0,   472,     0,     0,     0,   448,     0,     0,     0,     0,
       0,     0,   442,     0,     0,     0,     0,   449,     0,     0,
       0,     0,   460,     0,     0,     0,     0,   531,     0,   444,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   461,   643,     0,     0,     0,     0,     0,     0,     0,
     450,     0,     0,     0,   440,     0,   451,   441,   452,     0,
       0,   453,     0,   454,   455,   456,     0,     0,   462,   457,
       0,   458,     0,     0,     0,     0,   459,   440,     0,     0,
     441,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   463,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     460,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   445,   446,   447,     0,     0,     0,   461,
       0,   442,   448,     0,     0,     0,     0,     0,   464,     0,
       0,     0,     0,   648,   449,     0,     0,     0,   444,     0,
     465,   466,     0,     0,   442,     0,   462,     0,   440,     0,
       0,   441,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   444,     0,     0,     0,     0,     0,   450,     0,     0,
       0,     0,     0,   451,   467,   452,   463,     0,   453,     0,
     454,   455,   456,     0,   468,     0,   457,     0,   458,     0,
       0,     0,     0,   459,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   469,     0,     0,     0,     0,
     470,     0,     0,     0,     0,     0,   464,     0,   471,     0,
     434,     0,     0,     0,     0,   442,   472,   460,   465,   466,
       0,     0,   445,   446,   447,     0,     0,     0,     0,     0,
       0,   448,   444,     0,     0,     0,   461,     0,     0,     0,
       0,     0,     0,   449,     0,   445,   446,   447,     0,     0,
       0,     0,   467,     0,   448,     0,     0,     0,     0,     0,
       0,     0,   468,   462,     0,     0,   449,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   450,     0,     0,     0,
       0,     0,   451,   469,   452,     0,     0,   453,   470,   454,
     455,   456,     0,   463,     0,   457,   471,   458,   434,   450,
       0,     0,   459,     0,   472,   451,     0,   452,     0,     0,
     453,     0,   454,   455,   456,     0,     0,     0,   457,     0,
     458,     0,     0,     0,     0,   459,   445,   446,   447,     0,
       0,     0,     0,   464,     0,   448,   460,     0,     0,     0,
       0,     0,     0,     0,     0,   465,   466,   449,     0,     0,
     440,     0,     0,   441,     0,   461,     0,     0,     0,   460,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   440,     0,     0,   441,   461,   467,
     450,     0,   462,     0,     0,     0,   451,     0,   452,   468,
       0,   453,     0,   454,   455,   456,     0,     0,     0,   457,
       0,   458,     0,     0,     0,   462,   459,     0,     0,     0,
     469,     0,   463,     0,     0,   470,     0,     0,     0,     0,
       0,     0,     0,   471,     0,   434,     0,   442,     0,     0,
       0,   472,     0,     0,     0,   463,     0,     0,     0,     0,
     460,     0,     0,     0,   444,   531,     0,     0,     0,     0,
       0,   442,   464,     0,     0,     0,     0,     0,     0,   461,
       0,     0,     0,     0,   465,   466,     0,     0,   444,     0,
       0,     0,     0,     0,     0,   464,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   462,   465,   466,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   467,     0,
       0,     0,     0,     0,     0,     0,     0,   776,   468,     0,
       0,     0,     0,     0,     0,     0,   463,     0,     0,     0,
       0,   467,     0,     0,     0,     0,     0,     0,     0,   469,
       0,   468,     0,     0,   470,     0,     0,     0,   445,   446,
     447,     0,   471,     0,   434,     0,     0,   448,     0,     0,
     472,     0,   469,     0,     0,     0,   464,   470,     0,   449,
       0,     0,   445,   446,   447,   471,   979,   434,   465,   466,
       0,   448,     0,   472,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   449,     0,     0,   440,     0,     0,   441,
       0,     0,   450,     0,     0,     0,     0,     0,   451,     0,
     452,     0,   467,   453,     0,   454,   455,   456,     0,     0,
       0,   457,   468,   458,     0,     0,   450,     0,   459,     0,
       0,     0,   451,     0,   452,     0,     0,   453,     0,   454,
     455,   456,     0,   469,     0,   457,     0,   458,   470,     0,
       0,     0,   459,     0,     0,     0,   471,     0,   434,     0,
       0,     0,   460,     0,   472,     0,     0,     0,     0,     0,
       0,     0,     0,   442,     0,     0,     0,  1125,     0,     0,
     441,   461,     0,     0,     0,     0,   460,     0,     0,     0,
     444,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   461,     0,     0,   462,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   462,     0,     0,     0,     0,     0,   463,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   442,     0,     0,     0,     0,     0,
       0,     0,   463,     0,     0,     0,     0,     0,     0,     0,
       0,   444,  1288,     0,     0,     0,     0,     0,   464,     0,
       0,     0,     0,     0,   445,   446,   447,     0,     0,     0,
     465,   466,     0,   448,     0,     0,     0,     0,     0,     0,
       0,     0,   464,     0,     0,   449,     0,     0,     0,     0,
       0,     0,     0,     0,   465,   466,     0,     0,     0,     0,
       0,     0,     0,     0,   467,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   468,     0,     0,     0,   450,     0,
       0,     0,     0,     0,   451,     0,   452,     0,   467,   453,
       0,   454,   455,   456,     0,   469,     0,   457,   468,   458,
     470,     0,     0,     0,   459,   445,   446,   447,   471,     0,
     434,     0,     0,     0,   448,     0,   472,     0,     0,   469,
       0,     0,     0,     0,   470,     0,   449,     0,     0,     0,
       0,     0,   471,     0,   434,     0,     0,     0,   460,     0,
     472,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   461,     0,   450,
       0,     0,     0,     0,     0,   451,     0,   452,     0,     0,
     453,     0,   454,   455,   456,     0,     0,     0,   457,     0,
     458,     0,     0,     0,   462,   459,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   463,     0,     0,     0,     0,   460,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   461,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2392,     0,
       0,     0,     0,     0,   464,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   462,   465,   466,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -371,
       0,     0,  -371,     0,     0,  -371,  -371,  -371,  -371,  -371,
    -371,  -371,  -371,  -371,     0,   463,     0,     0,     0,     0,
     467,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     468,     0,  -371,     0,  -371,     0,     0,     0,     0,     0,
       0,  -371,     0,  -371,  -371,  -371,  -371,  -371,  -371,  -371,
       0,   469,     0,     0,     0,   464,   470,     0,     0,     0,
       0,     0,     0,     0,   471,     0,   434,   465,   466,     0,
       0,     0,   472,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -371,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   467,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   468,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -371,     0,
       0,     0,   469,     0,     0,     0,     0,   470,     0,     0,
       0,     0,     0,     0,  1002,   471,     0,   434,  -371,  -371,
    -371,  -371,  -371,   472,     0,  -371,  -371,     0,     0,  -371,
       0,     0,     0,     0,     0,  -371,     0,  -371,     0,     0,
       0,     0,     0,  -371,     0,     0,     0,     0,  -371,     0,
       0,  -371,     0,     0,     0,     0,     0,     0,     0,  -371,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -371,     0,     0,  -371,     0,     0,     0,     0,
       0,  -371,     0,  -371,     0,     0,     0,     0,     0,     0,
       0,     0,  -371,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -371,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -371,     0,     0,
       0,     0,     0,     0,  1001,     0,     0,     0,  1405,     0,
       0,  1406,     0,     0,  1407,     0,     0,     0,     0,     0,
       0,     0,  1408,     0,  -371,     0,     0,  -371,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -371,
    -371,  -371,  -371,  -371,  -371,  -371,  -371,  -371,  -371,  -371,
       0,     0,  -371,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -371,  1409,  -371,
       0,     0,     0,     0,     0,     0,     0,  -371,     0,  -371,
    -371,  -371,  -371,  -371,  -371,  -371,     0,  1410,     0,     0,
       0,     0,     0,     0,     0,  -371,     0,     0,     0,     0,
       0,     0,  -371,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -371,     0,     0,  -371,     0,     0,     0,     0,     0,     0,
    -371,     0,  -371,  -371,  -371,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1411,     0,
       0,     0,     0,  -371,     0,  -371,  1412,     0,  -371,     0,
    1002,     0,     0,  -371,  -371,  -371,  -371,  -371,  -371,     0,
    1413,  -371,  -371,     0,     0,  -371,     0,     0,     0,     0,
       0,  -371,     0,     0,     0,  -371,  -371,  -371,     0,  -371,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -371,
       0,     0,  1414,     0,  -371,  -371,  -371,     0,     0,     0,
       0,     0,     0,  1003,     0,  1865,     0,     0,  -371,     0,
       0,  -371,  1415,     0,  1416,     0,     0,  -371,     0,     0,
    1866,     0,     0,  1867,  1868,  1869,  1870,  1871,  1872,  1873,
       0,     0,     0,     0,     0,     0,  1417,  1418,     0,     0,
    1065,     0, -1892,     0,     0, -1892,     0,     0, -1892,     0,
       0,     0,     0,  -371,     0,     0, -1892,     0,  1874,     0,
    1875,  1876,  1877,  1878,  1879,  1880,  1881,     0,     0,  1419,
       0,     0,     0,     0,     0, -1783,     0, -1783,     0,     0,
       0,     0,     0,  -371,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -371,  1420,  1421,
       0,     0, -1892,     0,  1882,  -371,     0,     0,  -371,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0, -1892,     0,  -371,  1422,     0,     0,     0,     0,     0,
       0,  1423,     0,     0,     0,     0,  -371,     0,     0,     0,
       0,     0,     0,     0,  -371,  1424,     0,     0,     0,  1425,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1426,  1883,  1884,  1885,  1886,  1887,
       0,     0,  1888,  1889,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -371,     0,  -371,  -371,
    -371,  1427,     0,     0,     0,     0,     0,     0,     0,     0,
    1428,     0, -1892,     0,     0,     0,  1890,     0,     0,  1066,
   -1892,     0,     0,     0,     0,  -371,     0,     0,     0,   405,
       0,     0,  1891,     0, -1892,     0,     0,     0, -1868,     0,
    1429,     0,     0,     0,  -371,     0,     0,     0,     0,     0,
    1430,     0,     0,     0,     0,     0,  1431,     0,     0,     0,
       0,  -371,     0,     0,     0,     0, -1892,     0,     0,     0,
       0,  -371,  -371,  -371,  1892, -1783,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -371, -1892,     0, -1892,     0,
       0,     0,  -371,     0,     0,  1067,     0,     0,     0,  1003,
       0,     0,     0,     0,  1893,     0,     0,     0,     0,     0,
   -1892, -1892,     0,     0,     0,     0,     0,     0,  1894,     0,
       0,     0,     0,     0,     0,     0,  1895,     0,     0,  1896,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0, -1892,  1897,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0, -1783,  1898,     0,     0,
       0,     0,     0,     0,     0,  1899,     0,     0,     0,     0,
       0,     0, -1892, -1892,     0,     0,     0,     0,     0,     0,
    2500,     0,     0,  2501,     0,     0,  2502,  1867,  1868,  1869,
    1870,  1871,  1872,  2503,  2504,   442,     0,     0, -1892,     0,
       0,     0,     0,     0,     0, -1892,     0,  1900,     0,  1901,
    1902,  1903,   444,  1398,     0,  1399,     0,     0,     0, -1892,
       0,     0,  1874, -1892,  1875,  1876,  1877,  1878,  1879,  1880,
    1881,     0,     0,     0,     0,     0,  1904,     0, -1892,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -368,     0,     0,     0,     0,
       0,     0,     0,     0,     0, -1892,     0,     0,  1882,     0,
       0,     0, -1868,     0, -1892,     0,   442,     0,     0,     0,
       0,     0,  1905,  1906,  1907,     0,     0,     0,     0,     0,
       0,     0,     0,   444,     0,     0,  1908,     0,     0,     0,
       0,     0,     0,  1909, -1892,     0,   445,   446,   447,  2505,
       0,     0,     0,     0, -1892,   448,     0,     0,     0,     0,
   -1892,     0,     0,     0,     0,     0,     0,   449,     0,  1883,
    1884,  1885,  1886,  1887,     0,   596,  1888,  1889,     0,     0,
    2506,     0,     0,     0,     0,     0,  2507,     0,  2508,     0,
       0,     0,     0,     0, -1818,     0,     0,     0,     0,  2509,
     485,     0,  2510,     0,     0,     0,   451,     0,   452,     0,
    1890,   453,     0,   454,   455,   456,     0,     0,     0,   457,
       0,   458,     0,   405,     0,     0,  1891,   445,   446,   447,
       0,     0,     0,     0,  2511,     0,   448,     0,     0,     0,
       0,     0,     0,  2512,     0,     0,     0,     0,   449,     0,
     442,     0,     0,     0,     0,     0,  2513,     0,     0,     0,
     460,     0,     0,     0,     0,     0,     0,   444,  1892,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   461,
       0,   485,     0,     0,     0,     0,     0,   451,     0,   452,
       0,     0,   453,     0,   454,   455,   456,     0,  2514,     0,
     457,     0,   458,     0,     0,     0,   462,     0,     0,     0,
       0,  2515,  1894,     0,     0,     0,     0,     0,     0,     0,
    1895,     0,     0,  1896,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   463,     0,  1897,     0,
    2516,   460,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   442,     0,     0,     0,     0,     0,     0,     0,     0,
     461,   445,   446,   447,     0,     0,  2517,     0,   444,     0,
     448,     0,     0,  2518,     0,     0,   464,     0,     0,     0,
       0,     0,   449,     0,     0,     0,     0,   462,   465,   466,
       0,  2519,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1900,     0,  1901,  1902,  1903,     0,     0,     0,     0,
    1109,     0,     0,     0,     0,   485,     0,   463,     0,     0,
     486,   451,   467,   452,   487,   488,   453,     0,   454,   455,
     456,     0,   468,     0,   457,     0,   458,     0,     0,     0,
       0,     0,     0,     0,  2520,     0,     0,     0,     0,  -623,
     442,     0,     0,   469,  2521,     0,     0,   464,   470,     0,
       0,     0,   445,   446,   447,     0,   471,   444,   434,   465,
     466,   448,  2522,     0,   472,   460,  1905,  1906,  1907,     0,
       0,     0,     0,   449,     0,     0,     0,     0,     0,     0,
    1908,  1710,     0,     0,   461,  2523,     0,  1909,     0,     0,
       0,   486,     0,   467,     0,   487,   488,     0,     0,     0,
       0,     0,     0,   468,     0,     0,   485,     0,     0,     0,
       0,   462,   451,     0,   452,     0,     0,   453,     0,   454,
     455,   456,     0,     0,   469,   457,     0,   458,     0,   470,
       0,     0,     0,     0,     0,     0,     0,   471,     0,   434,
       0,   463,     0,     0,     0,   472,     0,     0,     0,     0,
       0,   445,   446,   447,     0,     0,     0,     0,     0,     0,
     448,     0,     0,     0,     0,     0,   460,     0,     0,     0,
       0,     0,   449,     0,     0,     0,     0,     0,     0,     0,
       0,   464,     0,     0,     0,   461,     0,     0,     0,     0,
       0,     0,     0,   465,   466,     0,     0,     0,     0,     0,
       0,  1713,     0,     0,     0,   485,     0,     0,     0,     0,
       0,   451,   462,   452,     0,     0,   453,     0,   454,   455,
     456,     0,     0,     0,   457,   486,   458,   467,     0,   487,
     488,     0,     0,     0,   442,     0,     0,   468,     0,     0,
       0,     0,   463,     0,     0,     0,     0,     0,     0,     0,
       0,   444,     0,     0,     0,     0,     0,     0,   469,     0,
       0,     0,     0,   470,     0,   460,     0,     0,     0,     0,
       0,   471,     0,   434,     0,     0,     0,     0,     0,   472,
       0,     0,   464,     0,   461,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   465,   466,     0,     0,     0,     0,
       0,     0,  1715,     0,     0,     0,     0,     0,     0,     0,
       0,   462,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   486,     0,   467,     0,
     487,   488,     0,   442,     0,     0,     0,     0,   468,     0,
       0,   463,     0,     0,     0,   445,   446,   447,     0,     0,
     444,     0,     0,     0,   448,     0,     0,     0,     0,   469,
       0,     0,     0,     0,   470,     0,   449,     0,     0,     0,
       0,   442,   471,     0,   434,     0,     0,     0,     0,     0,
     472,   464,     0,     0,     0,     0,     0,     0,   444,     0,
       0,     0,     0,   465,   466,     0,     0,     0,     0,   485,
       0,     0,     0,     0,     0,   451,     0,   452,     0,     0,
     453,     0,   454,   455,   456,  1731,     0,     0,   457,     0,
     458,     0,     0,     0,     0,   486,     0,   467,     0,   487,
     488,     0,     0,     0,     0,     0,     0,   468,     0,     0,
       0,     0,     0,     0,   445,   446,   447,     0,     0,     0,
       0,     0,     0,   448,     0,     0,     0,     0,   469,   460,
       0,     0,     0,   470,     0,   449,     0,     0,     0,     0,
       0,   471,     0,   434,     0,     0,     0,     0,   461,   472,
       0,     0,   445,   446,   447,     0,     0,     0,     0,     0,
       0,   448,     0,     0,     0,     0,     0,     0,   485,     0,
       0,     0,     0,   449,   451,   462,   452,     0,     0,   453,
       0,   454,   455,   456,     0,     0,     0,   457,     0,   458,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   463,   485,     0,     0,     0,
       0,     0,   451,     0,   452,     0,     0,   453,     0,   454,
     455,   456,     0,     0,     0,   457,     0,   458,   460,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   464,     0,   461,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   465,   466,     0,
       0,     0,     0,     0,     0,     0,   460,     0,     0,     0,
       0,     0,     0,     0,   462,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   461,     0,     0,     0,   486,
       0,   467,     0,   487,   488,     0,     0,     0,     0,     0,
    2751,   468,     0,     0,   463,     0,     0,     0,     0,     0,
       0,     0,   462,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   469,     0,     0,     0,     0,   470,     0,     0,
       0,     0,     0,     0,     0,   471,     0,   434,     0,     0,
       0,     0,   463,   472,   464,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   465,   466,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   464,     0,     0,     0,     0,     0,     0,     0,
     467,     0,     0,     0,   465,   466,     0,     0,     0,     0,
     468,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   469,     0,     0,     0,     0,   470,     0,   467,     0,
       0,     0,     0,     0,   471,     0,   434,     0,   468,     0,
       0,     0,   472,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   469,
       0,     0,     0,     0,   470,     0,     0,     0,     0,     0,
       0,     0,   471,     0,   434,     0,     0,     0,     0,     0,
     472
};

static const yytype_int16 yycheck[] =
{
     209,   210,   441,   362,   213,   322,   450,   337,   643,   518,
     923,    39,   529,   197,   349,  1235,   852,  1338,   406,  1452,
     408,  1197,   414,   411,   205,  1401,   235,  1257,  1404,  1647,
     211,   633,   861,  1909,   772,   316,  1707,  1302,   525,   115,
       1,   485,   525,   325,   782,  1672,   335,    22,     1,     9,
     315,   776,   313,  1283,   315,     1,    48,   318,  1949,    21,
     349,   322,    56,    87,     9,   327,     9,     9,    49,     9,
      17,  1964,  1965,   335,   620,   642,   337,   108,  1548,    31,
      58,    58,   343,    31,     6,   111,   125,   349,   124,     1,
      58,  1155,   130,  2332,    17,    39,   613,   320,  1076,   582,
      93,   124,   838,   364,    88,   366,  1084,   315,    27,  1316,
      64,   838,   320,   177,  1386,  1179,     0,     9,    58,   327,
     228,   846,   178,   387,   178,  1282,   166,   335,   247,   142,
     160,   176,   153,    58,    49,   319,    97,   321,    49,  1963,
     205,   349,   205,   205,  1537,     1,     0,   235,   750,  2325,
     235,   638,   240,    33,   244,   638,   315,   313,   244,   174,
     344,   313,   346,  2220,    49,    22,   397,   351,  1633,  1233,
     114,   216,    21,    88,   383,   160,  1957,   237,   313,    32,
     171,   365,   443,   259,   202,  1618,   395,   335,     6,   914,
     365,   259,   401,   402,  1849,   404,   513,   116,   190,   217,
     409,   410,   255,   191,   202,   414,   125,   255,   313,   723,
    2131,   235,   259,   572,   414,  2220,   259,   221,     0,   311,
     501,   418,   487,    97,    98,   486,   487,   488,  1292,  1622,
    1695,  1696,  1697,  1698,  1699,   422,   126,   228,  2629,   179,
    1705,   615,   450,   203,   414,   236,   289,   288,   265,   464,
     511,   265,   513,   345,   979,   139,   463,   259,     1,   143,
     235,   463,  2155,   293,   359,   752,   361,   474,   298,   259,
     259,  2328,   474,   290,   366,   462,   290,   485,   486,   487,
     488,   349,   172,   418,   255,    30,   517,   487,   168,   201,
     487,   334,   651,   667,  1759,  1950,   240,   559,   339,   418,
     692,   516,   349,  1768,   244,   130,  1771,   311,   570,   231,
     111,   755,   520,  2704,   259,  2236,   704,   487,   202,    62,
      65,   426,    67,  2328,  1794,  1795,   347,   486,   487,   488,
     348,   322,   516,   217,   509,   822,   154,   598,   259,   570,
     779,   630,    71,   527,   397,   405,   231,    90,    91,   397,
     348,   559,   487,  1189,   900,   990,  1192,   139,    71,   620,
     516,   143,   570,   217,   516,  1992,    71,   515,   630,   813,
    1635,   259,   294,   635,  1203,    73,   461,  2268,   235,    57,
     373,   365,   370,  1212,   365,   400,    64,   648,   478,  2170,
     270,   313,   478,     6,   457,   314,   515,   215,   290,   507,
     274,  1631,   383,  1796,    49,  1130,   259,   472,  1472,  2233,
     472,   642,   620,    71,  1686,   932,    71,    71,  2594,    71,
     202,   277,   630,   461,     9,   243,   397,   635,   516,  2084,
      34,   471,   462,   697,  1170,   217,   361,    71,   984,   953,
     516,   259,     6,  1170,     6,  1602,  1666,   315,   461,     6,
     365,   269,   516,   446,   365,   409,   274,   493,  1665,  1437,
     516,  2700,   516,   206,   348,   357,   410,   341,   494,   337,
     493,   516,   321,   960,   172,   343,   515,   462,   516,     6,
     461,   690,   424,   475,   515,   516,   751,   511,   456,   698,
     751,   468,   235,   702,  2551,   516,   473,   758,   759,   760,
     681,   463,   767,   768,   769,   452,   767,   768,   769,   770,
     255,   772,   474,   507,   516,   780,   725,  2408,   749,   780,
     472,   782,   783,   515,   472,   509,   516,   516,   509,   738,
     275,   792,   793,   794,   795,   796,   354,  1083,   478,   517,
     396,   516,   513,   751,  2009,   726,  1181,   160,   470,   461,
     758,   759,   760,   776,   819,   516,   516,     6,   819,   767,
     768,   769,   770,   516,   772,  1167,   348,  2222,   776,   851,
     516,   516,   780,   516,   782,   783,   807,   461,  2471,  2049,
     522,  1148,   450,   326,   792,   793,   794,   795,   796,   981,
     513,   336,   751,   271,   509,   516,   515,  1862,   509,   758,
     759,   760,   215,   933,   429,   461,   424,   838,   767,   768,
     769,   819,  2466,   894,   463,   177,  1125,   485,   486,   487,
     488,   780,   911,   846,   783,   474,  1018,   126,   516,   171,
     215,   259,   516,   792,   793,   794,   795,   796,   846,   900,
     824,  1128,   516,   511,   925,  1128,   259,   908,  1712,   911,
     451,   215,   470,   215,  2214,   456,   269,  1101,   215,   259,
     819,   333,   259,   924,   362,   123,  1058,   309,  2295,   347,
    2466,   265,   933,  1586,   259,   124,  1222,   406,   402,   461,
     284,   285,   286,   944,   269,   916,   228,  1523,   215,   259,
     952,   914,   900,   406,   236,   259,   290,   259,   516,   260,
     908,   406,   259,   911,   522,   269,   914,   269,  1772,   940,
    1774,   259,   269,   974,  2466,    26,  2063,  1263,   461,   126,
     365,   218,   362,   984,  1462,   247,   404,   221,   247,   458,
     598,   409,   259,     0,   516,   966,   205,   461,   383,   154,
     235,   354,   269,  1807,   952,   458,  2466,   351,   406,   908,
     495,   406,   406,   458,   406,   964,   979,   277,  1272,  1273,
    1274,  1275,  1276,  1277,  1278,  1279,   215,    57,   466,   354,
     515,   979,   406,    30,    64,   461,   984,  1841,  1842,    28,
     322,   423,    57,   461,    32,    60,   205,   306,   103,    64,
     354,  1516,   354,  1518,   274,   219,  2650,   354,  1007,   245,
     458,  2564,    57,   458,   458,   173,   458,   322,  1039,    64,
     259,   424,   180,   468,  2466,   239,   461,    62,   473,  2466,
     269,  2697,  1083,  1267,   458,   319,   466,   354,    65,   456,
      67,   162,  1097,  2063,  2054,   166,  1097,  1562,  1069,   424,
    2716,   265,  1103,   515,   359,    90,    91,  2407,   335,   462,
    1059,   108,   259,   322,  2650,   419,   355,   470,  1067,  2206,
     424,     0,   424,   111,   509,  1146,   290,   424,     9,  1050,
    1051,   128,   476,   477,  2492,  1083,   396,   481,   127,  2550,
     507,  1143,   443,   751,  1519,   470,    85,   198,   516,  1097,
     758,   759,   760,  2214,   522,  1620,   418,   424,  2650,   767,
     768,   769,   770,   516,   772,   354,   470,  1130,   470,   522,
     167,   410,   780,   470,   782,   783,   516,   259,  1126,   516,
     417,   515,  1130,   215,   792,   793,   794,   795,   796,   456,
    2650,  2549,   130,     9,   191,  1143,   431,   522,  1097,  1170,
    2611,   259,  1231,   470,   505,   391,   516,  1156,   265,   206,
      27,   819,   516,   515,   516,   516,   274,  2720,   522,   516,
     522,  1222,  1223,  1792,   383,   522,   215,   259,   516,  1231,
    1232,  1179,  2643,  2644,   516,   424,   456,   269,  2198,   274,
    2651,   271,    58,  1470,  2655,  2656,   162,  2130,  2131,   516,
     235,  1383,  1538,   198,  1255,   522,   271,  2282,  2650,   201,
     139,   265,  1263,  2650,   143,   277,  1237,   456,   326,    58,
     259,   259,   354,  2684,  1222,  1223,   271,     8,   255,   534,
     269,   470,  1466,  1231,  1232,  1233,   290,   395,   515,   516,
    1291,  1633,  2130,  2131,   283,   158,   234,  1298,  1299,   116,
     908,  2659,  2713,   172,   493,   463,    37,   118,   119,   120,
    2302,   265,   394,  1237,   259,  1263,   312,   347,   314,  1290,
    2345,  2346,   354,   202,   123,   933,   259,   516,  1299,  1300,
    1458,  2689,   347,   522,   215,   392,   290,   206,   217,   414,
    1626,   326,   424,  2422,  1292,     1,   235,   359,   512,   361,
     347,  2556,   347,  2236,   414,   513,  2561,   295,   179,   336,
     364,  1310,   297,  1312,   299,   354,  1315,  1316,   459,  1318,
     259,   234,  2451,   259,   404,   483,   292,   468,   259,   409,
     190,   170,   473,   414,  2188,  2189,   328,   329,   269,   404,
     265,    47,   424,  2385,   409,   430,  2512,   432,  2236,   215,
     508,   334,   510,   213,   290,   347,  1476,    63,   461,   404,
       9,  1332,   487,  1704,   409,   290,  2621,   172,  2534,   240,
    2625,  2446,   243,   312,   273,   314,    38,   487,   244,   123,
     241,   461,   386,   296,    46,   424,  2434,   226,   427,   428,
     522,  1446,  1447,   259,   255,  1446,  1447,   103,  1453,  1370,
    1455,   206,  1453,   269,  1455,   130,   487,  1406,   516,    58,
     402,  1462,  1411,  2461,   522,   344,   461,  1537,  1473,   348,
     856,   323,  1473,   354,  2390,  1476,   461,  1426,  1769,  1770,
     332,   485,   157,  2399,   159,   334,   516,   339,   340,  1097,
     522,   206,  1741,   163,  2573,  2636,   166,   203,  1446,  1447,
     190,   516,  1524,     8,   359,  1453,   358,  1455,   347,  2650,
     896,   515,  1644,  1762,  1462,     9,   172,     8,    12,  1651,
     235,    15,    16,   213,  1472,  1473,   232,  1528,   367,   340,
     341,   342,    37,   522,   215,   921,  1537,  1538,   354,   359,
     461,   361,   419,   424,   355,  1546,    37,  1446,  1447,  2722,
     206,  1500,  1622,  1516,  1453,  1518,  1455,  1506,  1560,  2475,
     293,   515,   516,  1585,  1513,   420,   421,  2483,  1516,   338,
    1518,  1703,  1704,  1574,  1473,   402,   215,   107,   259,   235,
     179,   350,  2542,   190,   317,   223,   242,   117,   269,   470,
    1538,   468,  1563,   758,   759,   760,   473,   253,  1546,  1562,
      11,   459,   214,  1604,  1553,  1576,   213,  1612,   424,   229,
     468,  1612,  1560,   460,  1562,   473,   215,   255,   783,   468,
     259,  1622,   469,   475,   473,  1626,   209,   210,  1703,  1704,
     269,   492,  1707,   461,   246,   516,   447,  1769,  1770,  1563,
     255,   522,   257,    12,   468,   244,    15,    16,    59,   473,
     511,  2709,  2305,   255,   470,   257,   268,  1620,   451,   452,
     259,  2719,   478,   464,  1612,   215,   249,   250,   461,     9,
     269,   460,  1620,   354,  1104,  1803,   143,  1107,  1626,   468,
     469,    54,    55,  1113,   473,   537,    97,  1117,    99,   139,
     101,  1640,   123,  1123,  1769,  1770,   179,  1646,   109,   551,
     516,  1958,   461,   359,   360,  1654,   522,   190,   455,   259,
      50,   323,   505,  1612,  1898,   354,   402,    90,   374,   269,
     376,   359,   359,  1491,   361,   472,  1796,   251,   252,   367,
     213,   583,  2364,   461,   107,   458,   402,   316,  1659,  2371,
    2372,   320,   175,   424,   117,   468,  1747,    55,   327,   328,
     473,   461,  1701,  1702,   165,   354,   335,   458,   461,   338,
     243,  1893,   425,   255,   343,   257,   345,   468,   347,   348,
     349,   350,   473,   385,  1160,  2702,  2703,   425,   309,  1165,
       1,   429,    90,   304,   305,   424,   280,   281,   367,   470,
     642,   458,   423,   645,    47,  1796,  2723,    26,   650,   107,
      11,   468,    21,    22,   354,   461,   473,   768,   769,   117,
      63,   461,   306,   307,  1200,  2742,    11,   792,   793,    40,
      41,    42,    43,    44,  1772,   424,  1774,   406,    66,   408,
      68,   470,   411,   461,  1966,  2751,   461,   461,  1446,  1447,
     259,   522,  2769,   461,   486,  1453,   488,  1455,    59,   260,
     103,   461,   461,   509,  1462,    76,    77,   383,   407,  1807,
     516,   343,   516,  1933,    59,  1473,   794,   795,   796,   219,
     220,   470,   484,  1259,   424,   215,   431,   516,   518,   478,
    2129,   516,   465,   522,   467,   413,    97,   235,    99,   239,
     101,  1840,    58,   413,  1842,   306,   377,   221,   109,   461,
     516,   259,    97,   516,    99,   456,   101,   247,   248,   402,
     516,   280,   281,   264,   109,   265,   461,   516,   461,   259,
     470,   409,   501,   522,   776,    64,    60,    69,  1454,   269,
    1456,   418,   516,  1459,  1460,  1461,   461,   306,   307,  1465,
     290,   520,   496,   497,   498,   499,  2130,  2131,  1474,  1475,
     516,  2008,   461,   326,   165,   131,   198,   330,   331,  1908,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   472,
     165,   472,   522,   496,   497,   498,   499,   311,    24,    25,
     559,   132,   235,   472,   457,   837,   472,   398,   472,   242,
     170,   570,   472,   845,   846,   472,  1967,   472,   472,   134,
     253,   374,  2134,  1952,  1612,   456,  1955,  2008,  2136,  2141,
    1396,   472,   472,  1962,   354,   472,   389,   390,   133,   393,
      66,   135,    68,   359,    70,   136,   166,  2028,   137,   507,
     441,   883,   496,   497,   498,   499,   138,   616,   102,   451,
    1989,   839,   840,   841,   842,   472,   456,   141,  2701,   260,
     461,   630,  2236,  2123,    49,   412,   635,   455,   104,   105,
     106,   452,   914,   455,   449,   260,  1990,  1991,  1869,  1870,
    1871,  1872,   144,   198,  2075,   145,  2039,   146,  2041,   147,
     166,  1467,  2083,   511,   424,  2086,   274,    31,   148,    49,
     149,  2039,  2224,  2041,  2469,   306,   150,   198,   151,   113,
     152,   461,   402,  1489,   956,   516,   359,   360,   154,   258,
     156,   306,   516,  2062,   335,   967,   461,   163,   317,   971,
     166,   374,   516,   376,   409,   704,   259,   979,   516,   350,
     470,   461,   108,   259,   478,   259,   418,  2265,   347,   317,
    1526,   110,   456,   472,  1530,   516,   516,   205,   516,   226,
     383,   259,   346,   275,   234,    45,  2284,  2285,  2228,   513,
    2288,  2293,   512,   299,   513,   515,   129,   746,   177,   373,
     456,   169,   515,   130,   231,    65,    66,    67,    68,   456,
     456,    49,   522,   198,   231,   402,   461,   398,   374,   461,
     461,    86,  1578,    86,   464,    23,   461,   776,   452,  2331,
     275,   408,  2203,   398,   259,  2154,   235,   201,   461,   255,
     516,   257,  2161,  2162,  2163,  2164,  2217,   461,   521,   520,
    2169,   240,   304,  2355,  2323,   431,   458,   458,   274,   279,
     441,   458,  2360,   458,   458,   458,   458,   387,   458,   370,
     456,   456,    17,   205,   300,   129,   441,  2196,   314,   205,
    2174,   452,   140,   373,   456,    49,   509,   205,   125,   142,
       8,   198,   513,   513,   130,   205,   461,   846,   312,  2339,
     431,   461,   456,  2197,     9,     7,   461,    87,   397,   402,
      22,   311,   275,   447,   191,   333,    47,   304,    57,   418,
       8,   302,   205,    49,  2422,   516,  2267,   509,   240,   509,
     191,   319,   409,   315,   295,   516,  1692,   265,   321,   471,
     335,   318,   114,  2441,   446,   894,   461,   402,   516,   206,
     516,   516,   212,  2451,  2452,   259,   232,  2276,   511,    26,
     419,   461,   911,   205,   205,   914,   369,   369,   299,   103,
    2289,  1727,   387,    49,   265,   503,   925,   301,   238,    96,
     296,  2479,  1738,  1739,   240,  2304,   221,   461,   513,   235,
     391,   456,   516,   257,   191,   255,    57,   257,   410,   431,
      39,    49,   111,   952,    35,   466,   265,    38,   259,  2303,
     344,   522,  2514,     9,    45,    46,   265,   265,   265,    53,
     461,   456,    26,   336,   418,    17,  2575,   110,   288,   344,
     979,   452,   408,  2473,   492,   410,   356,   453,   198,   259,
     108,  2539,   455,   452,   347,  2664,   516,   427,   190,  1271,
     310,   461,   115,   461,   461,     7,   375,  2428,   226,   426,
     411,    92,    30,   461,   461,  1821,   515,  2507,  1824,  1825,
     463,   223,   332,   115,   440,  2573,   344,    30,   338,   311,
     513,  1837,    35,   456,   314,    38,   206,    83,   504,   461,
      57,   178,    45,    46,   259,  1851,  1852,   516,   206,   213,
     516,   224,  2421,   120,   100,   212,     4,  2605,   513,   198,
     318,    49,    65,   326,    67,     6,  1065,    57,  2545,    32,
      59,    19,   433,    54,   731,    50,  2445,    49,   202,  1359,
     161,    29,  1378,   217,  2173,  1053,  2507,  2425,   393,    92,
    2160,   714,  2168,  1035,  2360,   685,  2465,  2466,  2354,  2520,
    2174,  2466,  2523,   413,  2153,   671,  2440,  2122,  2749,  2661,
    2443,   192,   422,  2467,  2571,  2736,    64,  2228,  2713,  2761,
    2505,  2490,  2491,  2505,  2545,  2602,  2328,  1126,  2603,   439,
    2603,  1130,  2501,   214,  2555,   239,  1521,  2506,    64,  1069,
    1417,  1137,   501,  1519,  1143,   805,   807,  1146,   194,   195,
     196,   461,  1170,   851,   854,   534,  2708,   203,   161,  1523,
    2712,  1192,   555,  1788,   897,   904,  1546,  1220,  2537,   215,
     915,   592,   482,  1563,   598,  2596,  1574,  1250,  1300,  2548,
    1179,  2602,  1588,   945,  1280,   350,   628,   268,  1299,   192,
     630,   645,   502,  1615,  2563,  1845,  2565,  1299,  2461,   509,
    2569,   511,   994,  2063,  1850,   883,  1855,  1608,  1608,  1608,
     616,   214,  1608,   259,   801,   261,   262,   263,  2770,  1022,
    2026,   267,   303,   269,  1267,  1941,  2507,   511,  1368,   716,
    1363,   470,  1231,  1232,  1233,  2127,  2314,  2166,  2051,  2415,
    2688,  1047,   323,  1565,  2588,  1287,  2704,  2668,  1535,    83,
    1663,  2579,   255,  1314,  2410,    -1,    -1,    -1,  2627,  2628,
      -1,    -1,   308,    -1,    -1,   268,   100,  2073,    -1,    -1,
      -1,    -1,   275,  2642,    -1,   223,    -1,    -1,  2647,  2648,
      -1,  2702,  2703,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1292,  2663,    -1,    -1,  2666,  2667,    -1,
     303,    -1,  2723,  1575,   385,    -1,    -1,   255,   354,    -1,
      -1,    -1,    -1,    -1,  2735,  2736,    -1,   265,   399,    -1,
     323,  2742,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2699,    -1,    -1,   336,  2702,  2703,    -1,   418,   384,    -1,
      -1,    -1,  1614,  1615,  2765,    -1,    -1,    -1,  2769,    -1,
      -1,    -1,    -1,    -1,    -1,  2723,    -1,    -1,    -1,    -1,
     194,   195,   196,    -1,    -1,    -1,    -1,    -1,    -1,   203,
      -1,    -1,   320,    -1,  2742,    -1,    -1,   325,   424,    -1,
      -1,   215,   385,  2702,  2703,    -1,    -1,    -1,    -1,    -1,
     436,   437,    -1,    -1,    -1,    -1,   399,    -1,    -1,    -1,
      -1,  2769,    -1,   484,  2723,    -1,    -1,    -1,    -1,    -1,
      -1,   359,    -1,    -1,   248,   418,    -1,    -1,    -1,   367,
     254,    -1,   256,  2742,   470,   259,    -1,   261,   262,   263,
      -1,   379,    -1,   267,   480,   269,     1,    -1,     3,    -1,
       5,    -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,
    2769,    -1,    -1,    18,    -1,   501,    -1,    -1,    -1,  1458,
     506,   409,    -1,    -1,   412,    -1,    -1,    -1,   514,    -1,
     516,    -1,   420,  1472,   308,    -1,   522,    -1,    -1,  2507,
      -1,   484,    -1,   431,    -1,    -1,    51,    52,    -1,    -1,
      -1,    -1,   495,   327,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1778,    72,    -1,    -1,
      75,    -1,   515,   461,    -1,    -1,   464,  1516,    -1,  1518,
     354,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,
     384,    -1,    -1,    -1,    -1,   120,    -1,   122,    -1,    -1,
      -1,  1560,    -1,  1562,   129,    -1,   131,   132,   133,   134,
     135,   136,   137,   138,    -1,   140,   141,   142,    -1,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,    -1,
     424,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,
      -1,    -1,   436,   437,   169,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1620,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   197,    -1,  1633,    -1,   470,    -1,   472,   204,
      -1,    -1,   207,   208,    -1,    -1,   480,    -1,    -1,    -1,
      -1,  1650,    -1,   218,    -1,    -1,    -1,    -1,    -1,    -1,
     225,    -1,   227,    -1,    -1,   230,    -1,   501,    -1,    -1,
      -1,    -1,   506,    -1,  2702,  2703,    -1,    -1,    -1,    -1,
     514,    -1,   516,    -1,    -1,    -1,    -1,    -1,   522,    -1,
      -1,    -1,    -1,    -1,    -1,  2723,  1695,  1696,  1697,  1698,
    1699,    -1,    -1,    -1,  1703,  1704,  1705,   272,  1707,    -1,
      -1,   276,    -1,   278,  2742,   193,   194,   195,   196,    -1,
      -1,    -1,    -1,   288,    -1,   203,    -1,    -1,    -1,    -1,
     295,   296,   297,    -1,   299,   300,   301,   302,    -1,    -1,
       1,  2769,     3,    -1,     5,    -1,    -1,    -1,    -1,    10,
      -1,   316,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,
    1759,    -1,    -1,    -1,   329,    -1,    -1,    -1,    -1,  1768,
    1769,  1770,  1771,  1772,    -1,  1774,    -1,    -1,    -1,    -1,
      -1,   259,    -1,   261,   262,   263,    -1,    -1,  2060,   267,
      51,    52,   357,   358,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    -1,   368,  1803,    -1,    -1,    -1,  1807,    -1,
      -1,    72,    -1,    -1,    75,    -1,   381,   382,    -1,    -1,
      -1,    -1,    -1,   388,    -1,    -1,    -1,   392,    89,    -1,
     308,    -1,    -1,    -1,    -1,    -1,   401,    -1,    -1,    -1,
      -1,    -1,    -1,  1842,    -1,    -1,   411,    -1,    -1,    -1,
      -1,   112,    -1,    -1,    -1,   420,    -1,    -1,    -1,   120,
      -1,   122,    -1,    -1,   429,    -1,    -1,    -1,    -1,   434,
     435,    -1,    -1,   438,    -1,   440,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   448,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,    -1,    -1,    -1,   461,    -1,    -1,    -1,
    1899,    -1,    -1,   164,    -1,    -1,   384,    -1,   169,    -1,
      -1,    -1,    -1,    -1,   479,    -1,    -1,    -1,  2190,    -1,
      -1,   486,  2194,  2195,    -1,    -1,   491,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   197,    -1,    -1,    -1,
      -1,    -1,    -1,   204,    -1,    -1,   207,   208,   513,    -1,
      -1,    -1,    -1,    -1,   519,    -1,    -1,   218,   436,   437,
      -1,    -1,    -1,    -1,   225,    -1,   227,    -1,    -1,   230,
      -1,   449,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   480,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2009,   272,    -1,    -1,   492,   276,    -1,   278,    -1,    -1,
      -1,    -1,    -1,   501,    -1,    -1,    -1,   288,   506,    -1,
      -1,    -1,    -1,   511,    -1,    -1,   514,   515,   516,    -1,
    2039,    -1,  2041,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,    42,    43,    44,   316,    -1,    -1,  2057,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   329,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    76,    77,    78,    79,
      80,    81,    82,    -1,    -1,    -1,   357,   358,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   368,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     381,   382,    -1,    -1,    -1,    -1,    -1,   388,    83,    -1,
     120,   392,    -1,    -1,    -1,    -1,    -1,  2136,    -1,    -1,
     401,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
     411,    -1,    -1,  2152,  2153,    -1,    -1,    -1,    -1,   420,
      -1,    -1,    -1,     1,    -1,     3,    -1,     5,   429,    -1,
      -1,    -1,    10,   434,   435,    -1,    -1,   438,    -1,   440,
      18,    -1,    -1,    -1,    -1,    -1,    -1,   448,    -1,    -1,
      -1,   181,   182,   183,   184,   185,    -1,    -1,   188,   189,
     461,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    52,    -1,    -1,    -1,   479,    -1,
      -1,    -1,    -1,    61,    -1,   486,    -1,  2226,    -1,    -1,
     491,    -1,   222,    -1,    72,    -1,    -1,    75,    -1,   194,
     195,   196,    -1,    -1,    -1,    -1,    -1,    -1,   203,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,   519,    -1,
     215,    -1,    -1,    -1,    -1,    -1,  2265,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   120,  2282,   122,  2284,  2285,    -1,    -1,  2288,
     280,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2302,   259,    -1,   261,   262,   263,   100,
      -1,    -1,   267,    -1,   269,   153,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,    -1,
      -1,   169,    -1,    -1,   324,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   335,  2345,  2346,    -1,    -1,
      -1,    -1,    -1,   308,    -1,    -1,    -1,    -1,    -1,   197,
     350,  2360,    -1,    -1,  2363,  2364,   204,    -1,    -1,   207,
     208,    -1,  2371,  2372,  2373,    -1,    -1,    -1,    -1,    -1,
     218,    -1,    -1,    -1,    -1,    -1,  2385,   225,    -1,   227,
      -1,    -1,   230,    -1,    -1,    -1,    -1,    -1,    -1,   354,
      -1,    -1,   193,   194,   195,   196,    -1,    -1,    -1,    -1,
      -1,    -1,   203,     1,    -1,     3,    -1,     5,    -1,    -1,
      -1,    -1,    10,  2422,    -1,   415,   416,   417,    -1,   384,
      18,    -1,    -1,    -1,   272,  2434,    -1,    -1,   276,    -1,
     278,    -1,  2441,    -1,    -1,    -1,    -1,  2446,    -1,    -1,
     288,    -1,  2451,  2452,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2461,    51,    52,    -1,    -1,    -1,   259,   424,
     261,   262,   263,    61,    -1,    -1,   267,    -1,   316,    -1,
    2479,   436,   437,    -1,    72,    -1,    -1,    75,  2487,    -1,
      -1,   329,    -1,    -1,    -1,    -1,    -1,    -1,   488,   489,
     490,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   470,    -1,   308,    -1,   357,
     358,    -1,    -1,    -1,   112,   480,    -1,    -1,    -1,    -1,
     368,    -1,   120,    -1,   122,    -1,    -1,    -1,    -1,    -1,
    2539,    -1,    -1,   381,   382,    -1,   501,    -1,    -1,    -1,
     388,   506,    -1,    -1,   392,    -1,    -1,  2556,    -1,   514,
      -1,   516,  2561,   401,    -1,   153,    -1,   522,    -1,    -1,
      -1,    -1,    -1,   411,  2573,    -1,   164,    -1,    -1,    -1,
      -1,   169,   420,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   429,    -1,   384,    -1,    -1,   434,   435,    -1,    -1,
     438,    -1,   440,    -1,    -1,    -1,  2605,    -1,    -1,   197,
     448,    -1,    -1,    -1,    -1,    -1,   204,    -1,    -1,   207,
     208,    -1,  2621,   461,    -1,    -1,  2625,    -1,    -1,    -1,
     218,    -1,    -1,    -1,    -1,    -1,    -1,   225,    83,   227,
      -1,   479,   230,    -1,    -1,   436,   437,    -1,   486,    -1,
      -1,    -1,    -1,   491,    -1,   100,    -1,    -1,   449,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   519,    -1,    -1,   272,    -1,    -1,    -1,   276,   480,
     278,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     288,   492,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     501,    -1,    -1,    -1,    -1,   506,    -1,    -1,    -1,    -1,
     511,    -1,    -1,   514,   515,   516,    -1,    -1,   316,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,   329,     5,    -1,    -1,    -1,    -1,    10,    -1,   194,
     195,   196,    -1,    -1,    -1,    18,    -1,    -1,   203,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   357,
     358,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     368,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    -1,    -1,   381,   382,    -1,    -1,    -1,    61,    -1,
     388,    -1,    -1,    -1,   392,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    75,   401,   259,    -1,   261,   262,   263,    -1,
      -1,    -1,   267,   411,    -1,    -1,    89,    -1,    -1,    -1,
       6,    -1,   420,     9,    -1,    -1,    12,    13,    14,    -1,
      -1,   429,    -1,    -1,    20,    -1,   434,   435,    -1,   112,
     438,    -1,   440,    -1,    -1,    -1,    -1,   120,    -1,   122,
     448,    -1,    -1,   308,    -1,    -1,   129,    -1,   131,   132,
     133,   134,   135,   136,   137,   138,    -1,   140,   141,   142,
      -1,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   479,    -1,    -1,    -1,    -1,    -1,    -1,   486,    -1,
      -1,   164,    -1,   491,    -1,    -1,   169,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,
      -1,   519,    -1,    -1,   197,    -1,    -1,    -1,    -1,   384,
      -1,   204,    -1,    -1,   207,   208,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   218,    -1,    -1,    -1,    -1,
      -1,    -1,   225,    -1,   227,    -1,    -1,   230,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,
      -1,   436,   437,    -1,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   272,
      -1,    -1,    -1,   276,    -1,   278,    -1,    -1,   194,   195,
     196,    -1,    -1,    -1,    -1,   288,    -1,   203,    -1,    -1,
      -1,    -1,    -1,   209,   210,   480,    -1,    -1,    -1,   215,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   316,    -1,    -1,   501,    -1,    -1,   235,
      -1,   506,    -1,    -1,    -1,    -1,   329,    -1,    -1,   514,
      -1,   516,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
     256,    -1,    -1,   259,    -1,   261,   262,   263,    -1,    -1,
      -1,   267,    -1,   269,   357,    -1,    -1,    -1,   274,    -1,
      -1,    -1,    -1,    -1,    -1,   368,    -1,    -1,    -1,    -1,
      -1,   287,    -1,    -1,    -1,    -1,    -1,   293,    -1,   382,
      -1,    -1,   298,    -1,    -1,   388,    -1,    -1,    -1,   392,
     306,    -1,   308,    -1,    -1,    -1,    -1,   313,   401,    -1,
      -1,    -1,   318,    -1,    -1,    -1,    -1,    -1,   411,    -1,
      -1,   327,    -1,    -1,    -1,    -1,    -1,   420,    -1,    -1,
      -1,   337,    -1,    -1,    -1,    -1,   429,    -1,    -1,    -1,
      -1,   434,   435,     6,    -1,   438,     9,   440,   354,    12,
      13,    14,    -1,    -1,    -1,   448,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   461,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   384,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   479,    -1,    -1,    -1,
      -1,    -1,    -1,   486,    -1,    -1,    -1,    -1,   491,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   424,    -1,
      83,    -1,    -1,    -1,    -1,    -1,   519,    -1,    -1,    -1,
     436,   437,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   458,    -1,   460,    -1,   462,    -1,    -1,   465,
      -1,   467,   468,   469,   470,    -1,   472,   473,    -1,    -1,
      -1,    -1,    -1,    -1,   480,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,
       9,    -1,    -1,    -1,    -1,   501,    -1,   160,    -1,    -1,
     506,    -1,    -1,    -1,    -1,    -1,    -1,   170,   514,    -1,
     516,    -1,    -1,    -1,    -1,    -1,   522,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,   194,   195,   196,    -1,    -1,    -1,    -1,    -1,    -1,
     203,    -1,    -1,    -1,    -1,    -1,   209,   210,    -1,    -1,
      -1,    -1,   215,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    -1,    -1,    -1,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,   256,    -1,    -1,   259,    -1,   261,   262,
     263,    -1,    -1,    -1,   267,    -1,   269,    -1,    -1,    -1,
      -1,   274,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   287,    -1,    -1,    -1,    -1,    -1,
     293,    -1,    -1,     6,    -1,   298,     9,    -1,    -1,    -1,
      -1,    -1,    -1,   306,    -1,   308,    -1,    -1,    -1,    -1,
     313,    -1,    -1,    -1,    -1,   318,    -1,    30,    -1,    -1,
      -1,    -1,    35,    -1,   327,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,   337,   194,   195,   196,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,
      -1,   354,    65,    -1,    67,    -1,   215,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      -1,   384,    -1,    -1,    -1,    -1,    -1,   100,    -1,   248,
      -1,    -1,    -1,    -1,    -1,   254,    -1,   256,    -1,    -1,
     259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,    -1,
     269,    -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,    -1,
      -1,   424,    -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,
       9,    -1,    -1,   436,   437,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,   308,
      -1,    -1,    -1,    -1,   313,   458,    -1,   460,    -1,   462,
      -1,    -1,   465,    -1,   467,   468,   469,   470,   327,   472,
     473,    -1,    -1,    -1,    -1,    -1,    -1,   480,    -1,   192,
      -1,   194,   195,   196,    -1,    -1,    -1,    -1,    -1,    -1,
     203,    -1,    -1,    -1,    -1,   354,    -1,    -1,   501,    -1,
      -1,   214,   215,   506,    83,    -1,   365,    -1,    -1,    -1,
      -1,   514,    -1,   516,    -1,    -1,    -1,    -1,    -1,   522,
      -1,   100,    -1,    -1,    -1,   384,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   248,    -1,    -1,    -1,    -1,
      -1,   254,   255,   256,    -1,    -1,   259,    -1,   261,   262,
     263,    -1,    -1,    -1,   267,   268,   269,    -1,    -1,   418,
      -1,   274,   275,    -1,    -1,   424,    -1,    -1,    -1,    -1,
      -1,     6,    -1,    -1,     9,    -1,    -1,   436,   437,    -1,
      -1,    -1,    -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,
     303,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     323,   470,    -1,    -1,   327,   194,   195,   196,    -1,    -1,
      -1,   480,    -1,   336,   203,    -1,   205,    -1,   487,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   215,    -1,    -1,    -1,
      -1,   354,   501,    -1,    -1,    -1,    -1,   506,    83,    -1,
     509,    -1,    -1,    -1,    -1,   514,    -1,   516,    -1,    -1,
      -1,    -1,    -1,   522,    -1,   100,    -1,    -1,    -1,   248,
      -1,   384,   385,    -1,    -1,   254,    -1,   256,    -1,    -1,
     259,    -1,   261,   262,   263,    -1,   399,    -1,   267,    -1,
     269,    -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   418,     6,    -1,    -1,     9,
      -1,   424,    -1,   292,    -1,    -1,    -1,    -1,   153,    -1,
      -1,    -1,    -1,   436,   437,    -1,    -1,    -1,    -1,   308,
      -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   470,    -1,   194,
     195,   196,    -1,    -1,    -1,    -1,    -1,   480,   203,    -1,
      -1,   484,    -1,    -1,    -1,   354,    -1,    -1,    -1,    -1,
     215,    -1,   495,    83,    -1,    -1,    -1,    -1,   501,    -1,
      -1,    -1,    -1,   506,    -1,    95,    -1,    -1,    -1,    -1,
     100,   514,   515,   516,   383,   384,    -1,    -1,    -1,   522,
      -1,    -1,    83,   248,    -1,    -1,    -1,    -1,    -1,   254,
      -1,   256,    -1,    -1,   259,    -1,   261,   262,   263,   100,
      -1,    -1,   267,    -1,   269,    -1,    -1,    -1,    -1,   274,
      -1,    -1,   113,    -1,    -1,   424,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   436,   437,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   308,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   470,   327,    -1,   194,   195,   196,    -1,    -1,    -1,
      -1,   480,    -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   215,    -1,    -1,    -1,   354,
      -1,    -1,   501,   194,   195,   196,    -1,   506,    -1,    -1,
      -1,    -1,   203,    -1,    -1,   514,   515,   516,    -1,    -1,
      -1,    -1,    -1,   522,   215,    -1,    -1,    -1,   248,   384,
      -1,    -1,    -1,    -1,   254,    -1,   256,    -1,    -1,   259,
     231,   261,   262,   263,    -1,    -1,    -1,   267,    -1,   269,
       6,    -1,    -1,     9,   274,    -1,    -1,   248,    -1,    -1,
      -1,    -1,    -1,   254,    -1,   256,    -1,    -1,   259,   424,
     261,   262,   263,    -1,    -1,    -1,   267,    -1,   269,    -1,
      -1,   436,   437,   274,    -1,    -1,    -1,    -1,   308,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,   463,    -1,
      -1,    -1,    -1,    -1,    -1,   470,    -1,   308,    -1,   474,
      -1,    -1,    -1,    -1,    -1,   480,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,   354,    -1,   327,    -1,     6,    -1,
      -1,     9,    -1,    -1,   100,    -1,   501,    -1,    -1,    -1,
      -1,   506,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   514,
      -1,   516,    -1,   354,   384,    -1,    -1,   522,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   384,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   424,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,   436,   437,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,
      -1,    -1,   100,   424,    -1,    -1,    -1,    -1,   194,   195,
     196,    -1,    -1,    -1,    -1,   436,   437,   203,    -1,    -1,
     470,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,
     480,    -1,    -1,    -1,    -1,     6,    -1,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   470,
      -1,   501,    -1,    -1,    -1,    -1,   506,    -1,    -1,   480,
      -1,    -1,   248,    -1,   514,    -1,   516,    -1,   254,    -1,
     256,    -1,   522,   259,    -1,   261,   262,   263,    -1,    -1,
     501,   267,    -1,   269,    -1,   506,    -1,    -1,   274,    -1,
      -1,    -1,    -1,   514,    -1,   516,   194,   195,   196,    -1,
      -1,   522,    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    -1,   215,    -1,    -1,
      -1,    -1,   308,    -1,    -1,    -1,    -1,   313,    -1,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   327,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     248,    -1,    -1,    -1,     6,    -1,   254,     9,   256,    -1,
      -1,   259,    -1,   261,   262,   263,    -1,    -1,   354,   267,
      -1,   269,    -1,    -1,    -1,    -1,   274,     6,    -1,    -1,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   384,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     308,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   194,   195,   196,    -1,    -1,    -1,   327,
      -1,    83,   203,    -1,    -1,    -1,    -1,    -1,   424,    -1,
      -1,    -1,    -1,    95,   215,    -1,    -1,    -1,   100,    -1,
     436,   437,    -1,    -1,    83,    -1,   354,    -1,     6,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    -1,    -1,    -1,    -1,    -1,   248,    -1,    -1,
      -1,    -1,    -1,   254,   470,   256,   384,    -1,   259,    -1,
     261,   262,   263,    -1,   480,    -1,   267,    -1,   269,    -1,
      -1,    -1,    -1,   274,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   501,    -1,    -1,    -1,    -1,
     506,    -1,    -1,    -1,    -1,    -1,   424,    -1,   514,    -1,
     516,    -1,    -1,    -1,    -1,    83,   522,   308,   436,   437,
      -1,    -1,   194,   195,   196,    -1,    -1,    -1,    -1,    -1,
      -1,   203,   100,    -1,    -1,    -1,   327,    -1,    -1,    -1,
      -1,    -1,    -1,   215,    -1,   194,   195,   196,    -1,    -1,
      -1,    -1,   470,    -1,   203,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   480,   354,    -1,    -1,   215,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   248,    -1,    -1,    -1,
      -1,    -1,   254,   501,   256,    -1,    -1,   259,   506,   261,
     262,   263,    -1,   384,    -1,   267,   514,   269,   516,   248,
      -1,    -1,   274,    -1,   522,   254,    -1,   256,    -1,    -1,
     259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,    -1,
     269,    -1,    -1,    -1,    -1,   274,   194,   195,   196,    -1,
      -1,    -1,    -1,   424,    -1,   203,   308,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   436,   437,   215,    -1,    -1,
       6,    -1,    -1,     9,    -1,   327,    -1,    -1,    -1,   308,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     6,    -1,    -1,     9,   327,   470,
     248,    -1,   354,    -1,    -1,    -1,   254,    -1,   256,   480,
      -1,   259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,
      -1,   269,    -1,    -1,    -1,   354,   274,    -1,    -1,    -1,
     501,    -1,   384,    -1,    -1,   506,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   514,    -1,   516,    -1,    83,    -1,    -1,
      -1,   522,    -1,    -1,    -1,   384,    -1,    -1,    -1,    -1,
     308,    -1,    -1,    -1,   100,   313,    -1,    -1,    -1,    -1,
      -1,    83,   424,    -1,    -1,    -1,    -1,    -1,    -1,   327,
      -1,    -1,    -1,    -1,   436,   437,    -1,    -1,   100,    -1,
      -1,    -1,    -1,    -1,    -1,   424,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   354,   436,   437,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   470,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   456,   480,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   384,    -1,    -1,    -1,
      -1,   470,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   501,
      -1,   480,    -1,    -1,   506,    -1,    -1,    -1,   194,   195,
     196,    -1,   514,    -1,   516,    -1,    -1,   203,    -1,    -1,
     522,    -1,   501,    -1,    -1,    -1,   424,   506,    -1,   215,
      -1,    -1,   194,   195,   196,   514,   198,   516,   436,   437,
      -1,   203,    -1,   522,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   215,    -1,    -1,     6,    -1,    -1,     9,
      -1,    -1,   248,    -1,    -1,    -1,    -1,    -1,   254,    -1,
     256,    -1,   470,   259,    -1,   261,   262,   263,    -1,    -1,
      -1,   267,   480,   269,    -1,    -1,   248,    -1,   274,    -1,
      -1,    -1,   254,    -1,   256,    -1,    -1,   259,    -1,   261,
     262,   263,    -1,   501,    -1,   267,    -1,   269,   506,    -1,
      -1,    -1,   274,    -1,    -1,    -1,   514,    -1,   516,    -1,
      -1,    -1,   308,    -1,   522,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,     6,    -1,    -1,
       9,   327,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   327,    -1,    -1,   354,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   354,    -1,    -1,    -1,    -1,    -1,   384,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   384,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,   418,    -1,    -1,    -1,    -1,    -1,   424,    -1,
      -1,    -1,    -1,    -1,   194,   195,   196,    -1,    -1,    -1,
     436,   437,    -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   424,    -1,    -1,   215,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   436,   437,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   470,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   480,    -1,    -1,    -1,   248,    -1,
      -1,    -1,    -1,    -1,   254,    -1,   256,    -1,   470,   259,
      -1,   261,   262,   263,    -1,   501,    -1,   267,   480,   269,
     506,    -1,    -1,    -1,   274,   194,   195,   196,   514,    -1,
     516,    -1,    -1,    -1,   203,    -1,   522,    -1,    -1,   501,
      -1,    -1,    -1,    -1,   506,    -1,   215,    -1,    -1,    -1,
      -1,    -1,   514,    -1,   516,    -1,    -1,    -1,   308,    -1,
     522,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,   248,
      -1,    -1,    -1,    -1,    -1,   254,    -1,   256,    -1,    -1,
     259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,    -1,
     269,    -1,    -1,    -1,   354,   274,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   384,    -1,    -1,    -1,    -1,   308,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    -1,    -1,    -1,   424,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   354,   436,   437,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    35,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,   384,    -1,    -1,    -1,    -1,
     470,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     480,    -1,    65,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    76,    77,    78,    79,    80,    81,    82,
      -1,   501,    -1,    -1,    -1,   424,   506,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   514,    -1,   516,   436,   437,    -1,
      -1,    -1,   522,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   470,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   480,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      42,    43,    44,    45,    46,    83,    -1,    -1,   378,    -1,
      -1,    -1,    -1,    -1,    -1,   385,    -1,   413,    -1,   415,
     416,   417,   100,    65,    -1,    67,    -1,    -1,    -1,   399,
      -1,    -1,    74,   403,    76,    77,    78,    79,    80,    81,
      82,    -1,    -1,    -1,    -1,    -1,   442,    -1,   418,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   461,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   445,    -1,    -1,   120,    -1,
      -1,    -1,   478,    -1,   454,    -1,    83,    -1,    -1,    -1,
      -1,    -1,   488,   489,   490,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,    -1,   502,    -1,    -1,    -1,
      -1,    -1,    -1,   509,   484,    -1,   194,   195,   196,   161,
      -1,    -1,    -1,    -1,   494,   203,    -1,    -1,    -1,    -1,
     500,    -1,    -1,    -1,    -1,    -1,    -1,   215,    -1,   181,
     182,   183,   184,   185,    -1,   515,   188,   189,    -1,    -1,
     192,    -1,    -1,    -1,    -1,    -1,   198,    -1,   200,    -1,
      -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,    -1,   211,
     248,    -1,   214,    -1,    -1,    -1,   254,    -1,   256,    -1,
     222,   259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,
      -1,   269,    -1,   235,    -1,    -1,   238,   194,   195,   196,
      -1,    -1,    -1,    -1,   246,    -1,   203,    -1,    -1,    -1,
      -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,   215,    -1,
      83,    -1,    -1,    -1,    -1,    -1,   268,    -1,    -1,    -1,
     308,    -1,    -1,    -1,    -1,    -1,    -1,   100,   280,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,
      -1,   248,    -1,    -1,    -1,    -1,    -1,   254,    -1,   256,
      -1,    -1,   259,    -1,   261,   262,   263,    -1,   310,    -1,
     267,    -1,   269,    -1,    -1,    -1,   354,    -1,    -1,    -1,
      -1,   323,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     332,    -1,    -1,   335,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   384,    -1,   350,    -1,
     352,   308,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     327,   194,   195,   196,    -1,    -1,   378,    -1,   100,    -1,
     203,    -1,    -1,   385,    -1,    -1,   424,    -1,    -1,    -1,
      -1,    -1,   215,    -1,    -1,    -1,    -1,   354,   436,   437,
      -1,   403,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   413,    -1,   415,   416,   417,    -1,    -1,    -1,    -1,
     458,    -1,    -1,    -1,    -1,   248,    -1,   384,    -1,    -1,
     468,   254,   470,   256,   472,   473,   259,    -1,   261,   262,
     263,    -1,   480,    -1,   267,    -1,   269,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   456,    -1,    -1,    -1,    -1,   461,
      83,    -1,    -1,   501,   466,    -1,    -1,   424,   506,    -1,
      -1,    -1,   194,   195,   196,    -1,   514,   100,   516,   436,
     437,   203,   484,    -1,   522,   308,   488,   489,   490,    -1,
      -1,    -1,    -1,   215,    -1,    -1,    -1,    -1,    -1,    -1,
     502,   458,    -1,    -1,   327,   507,    -1,   509,    -1,    -1,
      -1,   468,    -1,   470,    -1,   472,   473,    -1,    -1,    -1,
      -1,    -1,    -1,   480,    -1,    -1,   248,    -1,    -1,    -1,
      -1,   354,   254,    -1,   256,    -1,    -1,   259,    -1,   261,
     262,   263,    -1,    -1,   501,   267,    -1,   269,    -1,   506,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   514,    -1,   516,
      -1,   384,    -1,    -1,    -1,   522,    -1,    -1,    -1,    -1,
      -1,   194,   195,   196,    -1,    -1,    -1,    -1,    -1,    -1,
     203,    -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,
      -1,    -1,   215,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   424,    -1,    -1,    -1,   327,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   436,   437,    -1,    -1,    -1,    -1,    -1,
      -1,   444,    -1,    -1,    -1,   248,    -1,    -1,    -1,    -1,
      -1,   254,   354,   256,    -1,    -1,   259,    -1,   261,   262,
     263,    -1,    -1,    -1,   267,   468,   269,   470,    -1,   472,
     473,    -1,    -1,    -1,    83,    -1,    -1,   480,    -1,    -1,
      -1,    -1,   384,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,   501,    -1,
      -1,    -1,    -1,   506,    -1,   308,    -1,    -1,    -1,    -1,
      -1,   514,    -1,   516,    -1,    -1,    -1,    -1,    -1,   522,
      -1,    -1,   424,    -1,   327,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   436,   437,    -1,    -1,    -1,    -1,
      -1,    -1,   444,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   354,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   468,    -1,   470,    -1,
     472,   473,    -1,    83,    -1,    -1,    -1,    -1,   480,    -1,
      -1,   384,    -1,    -1,    -1,   194,   195,   196,    -1,    -1,
     100,    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,   501,
      -1,    -1,    -1,    -1,   506,    -1,   215,    -1,    -1,    -1,
      -1,    83,   514,    -1,   516,    -1,    -1,    -1,    -1,    -1,
     522,   424,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,
      -1,    -1,    -1,   436,   437,    -1,    -1,    -1,    -1,   248,
      -1,    -1,    -1,    -1,    -1,   254,    -1,   256,    -1,    -1,
     259,    -1,   261,   262,   263,   458,    -1,    -1,   267,    -1,
     269,    -1,    -1,    -1,    -1,   468,    -1,   470,    -1,   472,
     473,    -1,    -1,    -1,    -1,    -1,    -1,   480,    -1,    -1,
      -1,    -1,    -1,    -1,   194,   195,   196,    -1,    -1,    -1,
      -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,   501,   308,
      -1,    -1,    -1,   506,    -1,   215,    -1,    -1,    -1,    -1,
      -1,   514,    -1,   516,    -1,    -1,    -1,    -1,   327,   522,
      -1,    -1,   194,   195,   196,    -1,    -1,    -1,    -1,    -1,
      -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,   248,    -1,
      -1,    -1,    -1,   215,   254,   354,   256,    -1,    -1,   259,
      -1,   261,   262,   263,    -1,    -1,    -1,   267,    -1,   269,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   384,   248,    -1,    -1,    -1,
      -1,    -1,   254,    -1,   256,    -1,    -1,   259,    -1,   261,
     262,   263,    -1,    -1,    -1,   267,    -1,   269,   308,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   424,    -1,   327,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   436,   437,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   354,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   327,    -1,    -1,    -1,   468,
      -1,   470,    -1,   472,   473,    -1,    -1,    -1,    -1,    -1,
     380,   480,    -1,    -1,   384,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   354,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   501,    -1,    -1,    -1,    -1,   506,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   514,    -1,   516,    -1,    -1,
      -1,    -1,   384,   522,   424,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   436,   437,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   424,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     470,    -1,    -1,    -1,   436,   437,    -1,    -1,    -1,    -1,
     480,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   501,    -1,    -1,    -1,    -1,   506,    -1,   470,    -1,
      -1,    -1,    -1,    -1,   514,    -1,   516,    -1,   480,    -1,
      -1,    -1,   522,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   501,
      -1,    -1,    -1,    -1,   506,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   514,    -1,   516,    -1,    -1,    -1,    -1,    -1,
     522
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   525,   526,     0,   217,   527,   528,   529,   530,   531,
     532,   533,   539,   123,   529,   154,   538,   549,   550,   202,
     348,   540,   542,   461,   123,   103,   664,   666,    85,   551,
     552,   461,   461,   538,   538,   461,   123,   344,   821,   824,
     464,   667,   402,   229,   615,   616,   309,   423,   553,   554,
     558,   259,   349,   543,   543,   143,   534,   535,   536,   139,
     537,   461,   123,   847,   848,   402,   668,   461,   402,   175,
     617,   461,   461,   425,   576,   558,   554,    26,   545,   545,
     259,   349,   544,   536,   544,    56,   507,   825,     1,     3,
       5,    10,    18,    51,    52,    61,    72,    75,    89,   112,
     120,   122,   153,   164,   169,   197,   204,   207,   208,   218,
     225,   227,   230,   272,   276,   278,   288,   316,   329,   357,
     358,   368,   381,   382,   388,   392,   401,   411,   420,   429,
     434,   435,   438,   440,   448,   461,   479,   486,   491,   519,
     849,   850,   866,   871,   875,   880,   895,   898,   902,   906,
     907,   908,   913,   927,   931,   934,   948,   952,   955,   958,
     962,   963,   967,   977,   980,   997,   999,  1002,  1006,  1012,
    1024,  1032,  1033,  1036,  1037,  1041,  1046,  1047,  1055,  1071,
    1081,  1090,  1095,  1102,  1106,  1108,  1111,  1114,  1117,  1144,
     849,   461,   174,   400,   665,   669,   670,   672,   461,   461,
     619,   559,   555,   461,    11,    59,    97,    99,   101,   109,
     165,   260,   306,   398,   441,   516,   577,   578,   579,   580,
     581,   587,   596,   598,   603,   606,   607,   609,   610,   611,
     612,   613,   614,   259,   461,   541,   461,   461,   827,   826,
     383,   833,     3,     5,    10,    18,    51,    52,    61,    72,
      75,    89,   112,   120,   122,   129,   131,   132,   133,   134,
     135,   136,   137,   138,   140,   141,   142,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   164,   169,   197,
     204,   207,   208,   218,   225,   227,   230,   272,   276,   278,
     288,   316,   329,   357,   368,   382,   388,   392,   401,   411,
     420,   429,   434,   435,   438,   440,   448,   461,   479,   486,
     491,   519,  1276,   851,   867,   872,   876,   881,   896,   899,
     903,   909,   914,   928,   932,   935,   949,   953,   956,   959,
     205,   383,   890,   951,   964,   968,   978,   981,   998,  1000,
    1003,   407,  1007,  1013,  1025,  1034,  1038,  1042,  1048,  1056,
    1072,  1082,   259,   354,   394,   424,   522,  1094,  1096,  1103,
     343,  1107,  1109,   836,  1112,  1115,  1118,  1145,   518,   700,
     702,   703,     1,   516,  1201,   237,   405,   618,   620,    57,
      64,   271,   347,   404,   409,   516,   560,   561,   562,   563,
     564,   565,   566,   568,  1285,  1347,   556,   568,     1,   516,
    1215,  1215,   431,   413,  1318,   235,  1299,  1299,  1299,  1215,
     413,  1299,    58,  1286,   582,   377,   569,   579,   461,   580,
     221,   597,   546,  1299,    49,   828,   829,   830,  1284,   828,
     313,   516,   461,   313,   516,   852,   854,  1238,  1239,  1242,
       6,     9,    83,    95,   100,   194,   195,   196,   203,   215,
     248,   254,   256,   259,   261,   262,   263,   267,   269,   274,
     308,   327,   354,   384,   424,   436,   437,   470,   480,   501,
     506,   514,   522,   868,  1195,  1220,  1221,  1238,  1249,  1250,
    1251,  1252,  1253,  1254,  1255,   248,   468,   472,   473,   873,
    1190,  1191,  1192,  1193,  1194,  1195,  1224,  1238,  1250,  1252,
     259,   877,   878,  1206,  1207,  1208,  1242,   274,   430,   432,
     882,   883,   259,   897,  1229,  1238,   900,  1201,     6,   904,
    1196,  1197,  1218,  1240,  1241,  1242,  1250,   464,   910,  1201,
     259,   313,   915,   916,   917,   918,   920,  1220,  1229,  1238,
     929,  1221,   259,   933,   463,   474,   936,   937,   938,  1178,
    1179,  1180,   201,   328,   329,   347,   402,   950,   954,  1217,
    1218,   957,  1242,   456,   960,  1327,  1221,  1177,  1178,   969,
    1217,   516,   979,  1202,   982,   983,  1238,  1249,  1252,  1073,
    1236,  1237,  1242,    95,  1001,  1221,  1004,  1221,   171,   228,
     236,   322,  1008,  1009,   193,   259,   515,  1014,  1018,  1019,
    1020,  1206,  1230,  1238,  1242,  1252,  1331,  1026,  1201,  1035,
    1198,  1242,  1039,  1201,  1043,  1198,     9,  1049,  1199,  1242,
     154,   243,   274,  1057,  1060,  1061,  1064,  1065,  1066,  1067,
    1068,  1069,  1070,  1203,  1204,  1217,  1235,  1237,  1242,  1073,
    1083,  1201,  1091,   113,  1097,  1098,  1099,  1221,    95,  1104,
    1220,  1110,  1202,   461,   516,   837,   838,   841,   842,   847,
    1113,  1238,  1116,  1201,  1119,  1238,  1146,  1198,   402,   264,
     756,   704,   705,   707,   717,  1263,   461,   671,   461,   293,
     317,  1271,   277,   396,   654,   655,   656,   657,   659,   409,
     418,    64,  1299,   461,   562,   461,   516,   561,    60,  1299,
     557,  1331,   588,  1299,  1299,  1299,  1210,  1242,    69,  1210,
    1299,  1299,  1210,   516,   599,   600,   601,  1216,   259,   312,
     314,   583,   585,   586,  1058,  1245,  1299,   461,   461,   516,
     461,    73,   172,   362,   466,   547,   548,   829,   418,   487,
     831,   365,   509,   822,   221,   311,  1337,   131,   865,   853,
     198,   472,  1243,  1244,   311,  1309,  1251,  1238,   472,   472,
     472,  1257,  1239,  1250,  1252,  1337,  1337,   472,   472,   472,
     472,  1337,   472,  1257,   132,   870,   456,   869,  1221,   457,
     472,  1256,   472,   472,  1239,  1250,  1252,  1194,  1238,  1190,
    1194,    58,   468,   473,   460,   469,   170,   226,  1266,   878,
     456,  1337,   133,   894,   259,  1230,  1229,  1201,   364,   485,
     901,  1331,  1343,  1309,   134,   905,   160,   462,  1197,  1335,
     393,  1272,  1243,  1244,   911,  1201,   135,   912,   359,  1315,
     136,   926,   166,  1157,  1158,   918,  1219,  1220,   919,   496,
     497,   498,   499,   137,   930,    49,   231,   507,   884,   138,
     947,    17,   513,   939,   940,   941,   943,    12,    13,    14,
      20,   160,   170,   209,   210,   249,   250,   287,   293,   298,
     306,   313,   318,   337,   458,   460,   462,   465,   467,   468,
     469,   472,   473,  1181,  1182,  1183,  1184,  1185,  1186,  1187,
    1221,   102,   951,  1218,  1205,   451,  1325,   970,  1331,  1202,
      93,   373,   446,   984,   985,   987,   988,  1075,   472,  1243,
    1221,   456,   141,  1005,    49,  1009,   412,  1010,  1019,   142,
     461,  1015,  1017,   492,   511,   452,   455,   449,   144,  1031,
     288,   339,  1269,   198,  1147,   145,  1040,  1315,   146,  1045,
    1147,  1199,   147,  1054,   511,  1050,  1227,  1238,  1250,   166,
    1067,  1069,  1217,   456,  1204,   124,   456,   493,  1059,    31,
    1243,   148,  1089,   179,   240,   243,  1085,   890,  1092,  1221,
    1331,  1284,   149,  1101,   231,  1099,  1238,   150,  1105,   198,
    1202,   402,   461,   461,   198,   359,   361,  1316,   151,  1128,
     113,  1120,   152,  1151,  1147,   461,   402,   258,   758,   705,
     461,     1,   177,   516,   708,   709,   516,   673,   317,  1215,
     660,   359,   420,   421,   658,     1,   461,   656,  1299,   409,
    1245,   461,  1299,   516,  1211,   461,   108,  1299,   215,   259,
     269,   354,   424,   470,   522,   604,   605,  1248,  1210,   259,
     259,   478,   600,    22,   235,  1216,  1300,  1058,   235,   431,
    1311,  1299,    97,  1215,   570,   548,   347,  1314,  1299,   418,
     317,   832,   110,   834,  1242,    30,   199,   275,   855,   856,
     857,   859,   862,  1282,  1331,    24,    25,    66,    68,    70,
     104,   105,   106,   154,   156,   163,   166,   255,   257,   453,
     504,   516,   858,  1204,  1334,  1188,  1190,   472,  1244,   153,
     347,  1225,  1239,   456,  1188,  1190,  1261,  1188,  1262,   458,
    1188,   516,   516,  1190,  1260,  1260,  1260,  1223,  1238,  1250,
    1252,  1259,   516,  1223,  1258,     6,  1196,  1221,  1242,  1250,
     205,  1251,  1190,  1223,  1188,   458,   226,  1267,  1191,  1191,
    1192,  1192,  1192,   383,   874,   346,   879,  1208,   884,   901,
     265,   290,   191,  1292,  1239,  1190,   275,  1273,  1244,  1201,
     234,  1173,  1174,   844,   845,   299,  1159,   495,   859,   862,
     921,   922,   923,  1331,  1157,  1157,  1157,  1157,  1221,  1196,
    1221,   885,   938,    21,   463,   474,   944,   945,  1179,   513,
     941,   942,   513,   844,  1327,   235,  1182,   115,   961,  1206,
     129,   844,   965,     9,    12,    15,    16,   280,   281,   306,
     307,   971,   975,   177,  1227,     9,    58,   179,   244,   478,
     991,   992,   993,   986,   987,   125,   314,   515,  1077,  1310,
    1346,   456,  1217,  1196,  1221,  1010,  1331,  1200,  1201,   844,
     169,  1021,  1177,  1022,  1023,  1238,  1206,     8,    37,  1149,
    1315,  1234,  1238,  1249,  1252,   231,  1027,  1044,  1331,   130,
    1051,  1238,  1051,   456,   456,   456,  1058,   153,   463,   474,
    1221,    49,    38,    46,   214,   246,   268,   323,   385,   484,
    1062,  1063,  1299,  1084,  1331,  1221,   162,   292,   418,  1221,
    1238,   198,  1196,  1221,   843,  1245,  1227,  1284,   231,  1123,
    1148,  1149,   701,   461,   402,   374,   760,   461,   461,   706,
      86,    47,    63,   103,   242,   253,   359,   360,   374,   376,
     461,   509,   674,   675,   677,   681,   682,   685,   686,   692,
     695,   697,   698,  1299,   621,   464,  1290,    23,  1280,   461,
    1245,   260,   443,   505,   567,  1211,   275,    28,   127,   215,
     259,   269,   283,   354,   424,   427,   428,   522,   589,   590,
     591,   594,   605,   452,   608,  1331,   408,   259,   602,  1246,
    1311,   235,  1215,  1215,   584,   585,   201,   571,   572,   573,
      32,   111,  1245,  1299,   516,   461,   823,   522,  1231,  1235,
    1245,  1299,   163,   166,  1152,  1153,  1154,   857,    65,    67,
     255,   336,   860,   861,  1333,    32,    35,    38,    46,    92,
     111,   192,   200,   214,   246,   266,   268,   290,   291,   323,
     352,   353,   378,   385,   399,   403,   418,   445,   454,   484,
     494,   500,   863,   864,  1152,   521,   520,  1227,  1152,   240,
     431,   304,   279,    71,   406,   458,  1189,   459,  1190,   259,
    1226,  1239,  1238,  1189,   458,  1189,   458,   458,  1189,   458,
     458,   458,  1189,   458,  1189,   458,  1309,   419,  1160,  1161,
    1243,  1244,  1196,   459,   458,   458,   456,  1268,   874,  1218,
     456,  1206,   889,   890,   387,   370,  1160,  1299,   844,   300,
    1175,   846,   844,    97,    98,   341,   516,   924,  1204,   922,
      35,    38,    45,    46,    92,   161,   192,   214,   268,   303,
     323,   385,   399,   418,   484,   925,   205,  1160,   205,   886,
     887,   888,  1284,    17,   452,   946,   321,   944,  1310,   844,
     129,   140,   966,  1327,   373,   972,  1327,   456,    49,   992,
     994,  1227,     9,    58,   244,   478,   989,   990,  1227,   125,
      64,   409,  1078,  1332,    27,   116,   741,   221,   319,  1295,
    1217,  1160,   205,  1200,     9,   290,   357,   653,   386,  1011,
    1201,  1331,   142,  1016,     8,   198,  1027,  1238,   130,  1166,
    1168,  1173,   265,   290,   844,   513,   513,  1052,  1053,  1227,
     312,  1226,  1221,  1058,  1058,  1058,  1058,  1058,  1058,  1058,
    1058,  1063,   293,   298,  1086,  1087,  1088,  1183,  1270,  1173,
     247,   418,  1345,   431,  1323,  1323,  1100,  1331,  1238,  1160,
     205,   461,   456,     9,  1121,  1122,  1264,  1124,  1238,  1100,
    1124,  1044,     7,  1277,   702,   757,   461,   402,   397,   805,
     719,   710,  1299,    87,  1287,  1299,   359,   361,  1342,  1342,
    1299,  1287,  1299,   275,  1306,  1299,    22,  1279,   311,   699,
    1215,   172,   206,   622,   447,  1324,  1292,    58,   517,  1341,
     591,    17,   452,  1248,   333,  1246,  1215,     9,   203,   516,
     575,     1,   461,   573,    32,  1245,   835,   836,    47,   297,
     299,  1155,  1156,   844,   304,  1307,  1307,  1307,  1299,  1299,
     864,    57,   418,   124,   493,  1299,     8,  1278,  1152,  1190,
     458,  1190,  1272,   444,  1256,   444,  1256,  1210,  1256,  1256,
    1256,  1223,   244,   478,  1256,  1239,   844,   302,  1162,  1244,
    1160,   458,  1190,  1256,  1256,  1228,  1238,  1249,   166,   471,
     892,     6,   231,   294,   313,   470,   891,  1298,    34,   284,
     285,   286,   351,   476,   477,   481,  1274,   844,   847,  1299,
     255,   397,   130,   157,   159,   813,   814,  1289,  1299,   124,
     493,  1299,  1196,  1197,  1196,  1197,   887,   313,   831,    88,
     365,   509,   945,  1178,   844,  1238,   844,   509,   973,   974,
     975,   976,  1325,   509,  1228,  1227,    49,   995,   990,   191,
     995,   409,  1074,  1299,   240,  1301,   319,  1196,  1011,   321,
    1312,  1312,   315,   265,   290,  1023,  1221,   220,  1028,  1331,
     844,   295,  1169,   265,  1178,  1177,  1052,  1183,  1238,  1184,
    1185,  1186,  1187,  1190,  1093,  1221,  1093,   471,  1163,  1164,
     335,  1272,  1196,   839,  1228,   318,  1227,   114,  1125,   446,
    1127,   158,   296,  1150,  1170,  1171,  1172,  1173,   326,  1204,
    1231,   702,   759,   461,   402,    21,    36,    39,    40,    41,
      42,    43,    44,    45,    74,    76,    77,    78,    79,    80,
      81,    82,   120,   181,   182,   183,   184,   185,   188,   189,
     222,   238,   280,   310,   324,   332,   335,   350,   363,   371,
     413,   415,   416,   417,   442,   488,   489,   490,   502,   509,
     720,   721,   722,   724,   725,   726,   727,   728,   729,   730,
     733,   745,   746,   747,   748,   749,   754,   755,  1299,  1320,
      26,   198,   718,  1281,   206,  1245,   516,   636,  1299,  1279,
     516,  1212,  1213,   313,   426,  1338,   259,  1210,  1214,  1245,
     511,  1299,   176,   216,   516,   683,  1215,     4,    19,    29,
     223,   255,   320,   325,   359,   367,   379,   412,   420,   461,
     464,   623,   624,   631,   633,   635,   637,   638,   639,   640,
     643,   644,   645,   646,   647,   649,   650,   652,  1315,  1332,
    1287,  1200,   592,   594,   259,   232,    26,   574,   203,   232,
     461,   836,   844,  1231,  1231,  1231,  1231,  1231,  1299,  1299,
    1176,  1233,  1235,  1245,  1176,  1231,   259,  1232,  1235,  1247,
     458,  1160,   844,   458,   844,   844,   299,   893,  1309,  1238,
    1231,  1309,   255,   397,  1231,  1176,  1176,  1231,  1160,   369,
    1160,   369,  1221,   974,   103,  1288,  1327,   995,   995,  1228,
       8,    37,   996,   228,   507,  1079,  1210,  1076,  1160,   387,
      49,   265,   240,  1029,   219,   239,   265,   290,   512,   844,
     844,   844,   844,   301,  1165,  1299,  1160,  1160,   503,   840,
    1129,  1122,   221,  1294,    96,  1126,  1294,  1163,   844,   844,
    1172,   255,   257,  1303,   702,   761,   461,   247,   306,   414,
     487,  1319,   487,  1319,   487,  1319,   487,  1319,   487,  1319,
     513,  1329,   391,  1317,   126,  1245,  1239,  1242,   235,   245,
     391,  1302,  1299,  1300,   172,   206,   244,   478,   516,    50,
     247,   248,   711,  1249,   456,   680,   191,   696,  1213,   257,
    1305,   456,  1286,  1294,   173,   180,   395,   483,   508,   510,
     693,   694,  1299,  1299,  1306,  1315,   456,   507,  1328,   410,
    1299,  1285,   114,  1301,  1301,   290,   651,  1245,  1331,   431,
     265,    39,  1283,  1299,   661,   662,  1201,   593,   594,   259,
     130,  1229,  1231,   255,   257,  1344,   844,  1238,  1197,  1197,
      49,   111,   995,   466,  1297,  1297,   344,  1200,   205,   322,
    1080,  1242,  1221,  1299,  1030,  1167,  1168,  1169,  1173,   265,
     265,   265,   844,  1238,  1130,   461,  1238,  1294,  1238,   762,
     806,   522,    53,   737,   456,   734,   452,   727,   751,   752,
    1249,    26,   723,   408,  1275,  1275,  1309,     1,    40,    41,
      42,    43,    44,   181,   182,   183,   184,   185,   186,   187,
     335,   350,   712,   713,   714,   715,   716,   728,   729,  1239,
     712,  1245,    58,   361,   676,  1209,  1210,   687,  1245,   418,
    1321,   259,   684,  1242,   684,  1299,  1301,   126,   172,   628,
     367,   644,  1299,  1299,  1299,  1299,  1280,   653,  1299,  1306,
     410,   636,   662,   336,   663,    17,   110,  1160,  1160,  1221,
    1221,  1221,  1299,  1200,   344,   492,  1238,  1169,    30,   128,
     167,   206,  1131,  1132,  1133,  1135,  1139,  1141,  1142,  1143,
    1282,  1292,  1238,   356,   763,   707,   717,   807,   808,   809,
    1294,   198,   735,  1245,   455,  1326,  1242,   750,   752,   452,
     259,  1285,   712,   461,  1210,    48,   475,   688,   689,   690,
     691,  1331,  1286,   198,   679,  1293,   126,   355,   410,   632,
    1299,   118,   119,   120,   241,   255,   340,   341,   342,   355,
     447,   625,   626,   627,  1214,   427,   648,  1210,  1210,  1210,
    1299,  1245,   594,   461,  1018,  1299,  1177,    37,  1278,   347,
     108,  1202,     1,   708,   809,   461,   516,  1245,   734,   115,
     736,   513,   753,  1330,  1249,  1214,  1214,   190,   680,  1245,
     648,   259,   630,  1242,   630,     7,   630,   630,   259,   629,
    1242,   422,   462,    33,   168,   270,   641,  1018,   375,   426,
    1322,   130,   429,  1140,  1310,   764,   461,   810,   461,   226,
     738,  1310,   739,   740,   411,   463,  1282,  1286,  1265,  1346,
    1290,  1299,  1209,   515,   642,   642,  1238,   162,   166,  1336,
       9,  1136,  1137,  1207,     1,   765,   811,   739,  1210,   223,
     742,   741,   456,  1299,  1214,   115,   678,   440,   634,  1209,
     265,   392,   344,  1313,   311,   345,   366,  1138,  1137,   461,
      62,    90,    91,   326,   461,   766,   767,   770,  1299,  1355,
      32,    35,    38,    45,    46,   161,   192,   198,   200,   211,
     214,   246,   255,   268,   310,   323,   352,   378,   385,   403,
     456,   466,   484,   507,   725,   726,   730,   745,   747,   749,
     812,   819,   820,  1299,  1333,   742,  1284,  1301,  1249,  1310,
     513,   314,  1310,   311,  1242,  1299,  1299,  1279,   251,   252,
    1304,   779,   206,   178,   768,  1291,  1299,   255,   397,   813,
     814,  1299,  1234,  1307,  1245,    57,  1238,  1238,   206,  1307,
     516,   743,   744,  1299,  1210,     9,   424,   522,   595,   277,
     359,   361,  1340,   171,   228,   236,   322,  1134,  1200,  1229,
    1299,  1279,   771,  1247,   707,   780,   769,  1238,  1231,  1231,
    1299,  1326,  1299,  1299,   744,  1209,  1251,  1340,   772,   255,
     257,  1339,   516,   708,  1238,   273,   334,   468,   473,   815,
     816,   817,  1229,   815,   816,   818,   179,   190,   213,   243,
     773,   774,   775,   776,   777,   778,  1247,   781,  1231,  1231,
     107,   117,  1348,  1299,  1299,    55,    90,  1348,  1349,  1334,
     782,  1299,  1247,  1247,   213,  1299,  1299,   212,   255,   257,
     288,   310,   338,   422,   439,   461,   482,   502,   511,   725,
     730,   731,   745,   747,   749,   783,   784,   788,   789,   792,
     793,   794,   795,   796,   797,   802,   803,   804,  1333,  1334,
    1247,  1247,  1247,   224,  1296,   304,   305,  1308,  1279,   212,
    1245,   513,  1299,  1309,  1299,  1299,  1238,   289,   334,   798,
     799,  1247,   334,   800,   801,  1247,  1308,  1279,  1300,  1299,
     734,  1177,  1224,  1222,  1224,    54,    90,   326,   330,   331,
     374,   389,   390,   785,  1348,  1349,  1350,  1351,  1352,  1353,
    1354,   120,   198,  1245,   799,  1245,   801,  1300,   799,  1326,
    1272,   380,   790,  1224,   190,   190,   213,   190,   213,   178,
     786,  1238,   786,  1224,   736,  1310,   318,   787,   787,    49,
     433,   732,   178,   791,  1238,   326,  1224,  1245
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   524,   526,   525,   527,   527,   528,   528,   529,   529,
     531,   530,   532,   533,   534,   534,   535,   535,   536,   537,
     538,   539,   539,   541,   540,   542,   543,   543,   544,   544,
     545,   545,   546,   546,   547,   547,   547,   547,   548,   548,
     549,   550,   550,   551,   552,   552,   553,   553,   553,   553,
     553,   555,   554,   556,   556,   557,   557,   559,   558,   560,
     560,   560,   560,   561,   561,   562,   562,   562,   562,   563,
     564,   565,   566,   567,   567,   567,   567,   568,   568,   569,
     570,   569,   571,   571,   571,   572,   572,   573,   573,   573,
     574,   574,   575,   575,   576,   576,   577,   577,   578,   578,
     579,   579,   580,   580,   580,   580,   580,   580,   580,   580,
     580,   580,   580,   580,   582,   581,   583,   583,   583,   583,
     584,   584,   585,   586,   586,   588,   587,   589,   589,   589,
     589,   589,   589,   590,   590,   591,   591,   592,   591,   593,
     593,   594,   594,   594,   594,   594,   594,   595,   595,   596,
     597,   597,   598,   599,   599,   600,   601,   601,   602,   602,
     603,   604,   604,   605,   605,   606,   607,   608,   608,   609,
     610,   611,   612,   613,   614,   615,   616,   616,   617,   617,
     618,   618,   619,   619,   621,   620,   622,   622,   623,   623,
     623,   623,   623,   623,   623,   623,   623,   623,   623,   623,
     623,   624,   624,   624,   624,   624,   625,   625,   625,   626,
     626,   626,   626,   627,   627,   628,   628,   628,   629,   629,
     630,   630,   630,   631,   632,   632,   632,   633,   634,   634,
     634,   635,   636,   637,   638,   638,   638,   640,   639,   641,
     641,   641,   642,   642,   642,   642,   643,   643,   644,   644,
     644,   644,   645,   646,   647,   648,   648,   648,   649,   650,
     651,   651,   652,   653,   653,   653,   654,   654,   654,   655,
     655,   656,   656,   657,   658,   658,   658,   658,   660,   659,
     661,   661,   662,   663,   663,   665,   664,   666,   666,   667,
     667,   668,   668,   669,   671,   670,   670,   672,   672,   673,
     673,   674,   674,   674,   674,   674,   674,   674,   674,   674,
     674,   674,   675,   676,   676,   676,   677,   677,   677,   678,
     678,   679,   679,   680,   680,   681,   682,   682,   683,   683,
     684,   684,   685,   686,   687,   687,   688,   688,   688,   689,
     690,   691,   692,   693,   693,   693,   693,   693,   694,   694,
     695,   696,   696,   697,   698,   698,   699,   699,   700,   701,
     700,   702,   703,   702,   704,   704,   705,   706,   705,   705,
     707,   708,   708,   708,   709,   710,   710,   711,   711,   711,
     711,   712,   712,   712,   712,   712,   712,   712,   712,   712,
     712,   712,   712,   712,   713,   713,   714,   714,   715,   715,
     715,   716,   716,   717,   718,   718,   719,   719,   720,   720,
     720,   720,   720,   720,   720,   720,   720,   720,   720,   720,
     720,   720,   721,   722,   723,   723,   724,   725,   726,   726,
     727,   727,   727,   727,   727,   727,   727,   727,   727,   727,
     727,   727,   727,   727,   727,   727,   727,   727,   727,   727,
     727,   727,   727,   727,   727,   727,   727,   727,   727,   727,
     727,   727,   727,   727,   727,   727,   728,   728,   729,   729,
     730,   730,   731,   732,   732,   733,   733,   734,   734,   735,
     735,   736,   736,   737,   737,   738,   738,   739,   740,   740,
     741,   741,   742,   742,   743,   743,   744,   745,   746,   747,
     748,   750,   749,   751,   751,   752,   752,   753,   753,   754,
     754,   755,   755,   756,   757,   756,   758,   759,   758,   760,
     761,   760,   762,   762,   764,   763,   765,   765,   765,   766,
     766,   766,   766,   767,   768,   769,   769,   770,   771,   771,
     771,   772,   772,   773,   773,   773,   773,   773,   774,   775,
     776,   777,   778,   779,   779,   781,   780,   782,   782,   783,
     783,   783,   783,   783,   783,   783,   783,   783,   783,   783,
     783,   783,   783,   783,   783,   784,   785,   785,   785,   785,
     785,   785,   785,   786,   786,   786,   787,   787,   788,   789,
     790,   790,   791,   791,   792,   793,   794,   795,   795,   796,
     797,   797,   798,   798,   799,   799,   799,   800,   800,   801,
     801,   802,   803,   804,   805,   806,   805,   807,   807,   808,
     808,   809,   810,   809,   809,   811,   811,   812,   812,   812,
     812,   812,   812,   812,   812,   812,   812,   812,   812,   812,
     812,   812,   812,   812,   812,   812,   812,   812,   812,   812,
     812,   812,   812,   812,   812,   812,   812,   812,   812,   812,
     812,   812,   813,   813,   814,   814,   815,   815,   816,   816,
     817,   817,   817,   818,   818,   818,   819,   820,   821,   822,
     823,   821,   824,   821,   825,   826,   825,   827,   825,   828,
     828,   829,   830,   830,   830,   831,   831,   831,   831,   831,
     831,   832,   832,   833,   833,   833,   834,   835,   834,   836,
     836,   837,   837,   837,   837,   837,   839,   838,   840,   840,
     841,   842,   843,   843,   845,   846,   844,   848,   847,   847,
     849,   849,   849,   849,   849,   849,   849,   849,   849,   849,
     849,   849,   849,   849,   849,   849,   849,   849,   849,   849,
     849,   849,   849,   849,   849,   849,   849,   849,   849,   849,
     849,   849,   849,   849,   849,   849,   849,   849,   849,   849,
     849,   849,   849,   849,   849,   849,   849,   849,   849,   849,
     849,   851,   850,   853,   852,   852,   852,   852,   852,   852,
     852,   852,   852,   852,   852,   852,   852,   852,   852,   852,
     852,   852,   852,   854,   854,   855,   855,   856,   856,   857,
     857,   857,   857,   858,   858,   859,   859,   859,   860,   861,
     861,   862,   863,   863,   863,   863,   863,   863,   863,   863,
     863,   863,   863,   863,   863,   863,   863,   863,   863,   863,
     863,   863,   863,   863,   863,   863,   863,   863,   863,   863,
     864,   864,   865,   865,   867,   866,   868,   868,   868,   869,
     869,   870,   870,   872,   871,   873,   873,   874,   874,   876,
     875,   877,   877,   878,   879,   879,   881,   880,   882,   883,
     883,   883,   883,   884,   885,   884,   886,   886,   887,   887,
     888,   888,   888,   888,   889,   889,   889,   889,   889,   890,
     890,   891,   891,   892,   892,   892,   893,   893,   894,   894,
     896,   895,   897,   897,   899,   898,   900,   900,   901,   901,
     901,   901,   901,   903,   902,   904,   905,   905,   906,   907,
     909,   908,   910,   910,   911,   911,   912,   912,   914,   913,
     915,   915,   915,   915,   915,   916,   916,   917,   917,   919,
     918,   920,   920,   921,   921,   922,   922,   922,   922,   922,
     923,   923,   923,   923,   924,   924,   925,   925,   925,   925,
     925,   925,   925,   925,   925,   925,   925,   925,   925,   925,
     925,   925,   925,   926,   926,   928,   927,   929,   929,   929,
     929,   929,   930,   930,   932,   931,   933,   935,   934,   936,
     937,   937,   938,   938,   938,   939,   939,   940,   940,   941,
     942,   943,   943,   944,   944,   945,   945,   945,   945,   946,
     946,   947,   947,   949,   948,   950,   950,   950,   950,   950,
     950,   950,   951,   951,   953,   952,   954,   956,   955,   957,
     959,   958,   960,   961,   961,   962,   964,   963,   965,   965,
     965,   966,   966,   968,   967,   969,   970,   970,   971,   971,
     971,   972,   972,   973,   973,   974,   975,   975,   975,   975,
     975,   975,   975,   976,   976,   978,   977,   979,   979,   981,
     980,   982,   983,   983,   983,   984,   984,   984,   984,   986,
     985,   987,   988,   989,   989,   990,   990,   990,   990,   990,
     990,   991,   991,   992,   992,   993,   993,   993,   993,   993,
     994,   995,   995,   996,   996,   998,   997,  1000,   999,  1001,
    1001,  1003,  1002,  1004,  1004,  1005,  1005,  1007,  1006,  1008,
    1008,  1009,  1009,  1009,  1009,  1010,  1010,  1011,  1011,  1011,
    1011,  1013,  1012,  1014,  1015,  1014,  1014,  1016,  1016,  1017,
    1017,  1018,  1018,  1019,  1019,  1019,  1019,  1019,  1020,  1020,
    1021,  1021,  1022,  1022,  1023,  1025,  1024,  1026,  1027,  1027,
    1028,  1028,  1028,  1028,  1028,  1028,  1028,  1029,  1029,  1030,
    1030,  1031,  1031,  1032,  1034,  1033,  1035,  1036,  1038,  1037,
    1039,  1040,  1040,  1042,  1041,  1043,  1044,  1044,  1044,  1045,
    1045,  1046,  1048,  1047,  1049,  1049,  1050,  1050,  1051,  1051,
    1052,  1052,  1053,  1054,  1054,  1056,  1055,  1057,  1057,  1057,
    1057,  1057,  1057,  1057,  1058,  1058,  1059,  1059,  1060,  1061,
    1062,  1062,  1063,  1063,  1063,  1063,  1063,  1063,  1063,  1063,
    1064,  1064,  1065,  1066,  1066,  1067,  1068,  1068,  1069,  1069,
    1070,  1072,  1071,  1074,  1073,  1075,  1075,  1076,  1076,  1077,
    1077,  1078,  1078,  1079,  1079,  1079,  1080,  1080,  1080,  1082,
    1081,  1083,  1084,  1084,  1085,  1085,  1085,  1085,  1086,  1086,
    1086,  1086,  1086,  1086,  1087,  1088,  1088,  1089,  1089,  1091,
    1090,  1090,  1092,  1092,  1092,  1092,  1092,  1093,  1093,  1094,
    1094,  1094,  1094,  1096,  1095,  1097,  1098,  1098,  1099,  1099,
    1099,  1100,  1100,  1101,  1101,  1103,  1102,  1104,  1104,  1104,
    1105,  1105,  1106,  1107,  1107,  1109,  1108,  1110,  1110,  1112,
    1111,  1113,  1115,  1114,  1116,  1118,  1117,  1119,  1120,  1120,
    1121,  1121,  1122,  1123,  1123,  1124,  1125,  1125,  1126,  1126,
    1127,  1127,  1128,  1128,  1130,  1129,  1131,  1131,  1131,  1131,
    1131,  1132,  1133,  1133,  1134,  1134,  1134,  1134,  1134,  1135,
    1136,  1136,  1137,  1137,  1137,  1138,  1138,  1138,  1138,  1139,
    1140,  1140,  1141,  1142,  1143,  1143,  1145,  1144,  1146,  1147,
    1147,  1148,  1148,  1148,  1148,  1149,  1149,  1150,  1150,  1151,
    1151,  1152,  1153,  1153,  1154,  1154,  1155,  1155,  1156,  1156,
    1157,  1158,  1158,  1159,  1159,  1160,  1161,  1161,  1162,  1162,
    1163,  1164,  1164,  1165,  1165,  1166,  1166,  1167,  1167,  1167,
    1168,  1169,  1170,  1170,  1170,  1171,  1172,  1173,  1174,  1174,
    1175,  1175,  1176,  1176,  1177,  1178,  1180,  1179,  1181,  1181,
    1181,  1182,  1182,  1182,  1182,  1182,  1182,  1182,  1182,  1182,
    1182,  1182,  1182,  1182,  1182,  1182,  1182,  1182,  1182,  1182,
    1182,  1182,  1182,  1182,  1182,  1183,  1183,  1184,  1184,  1185,
    1185,  1186,  1187,  1188,  1188,  1189,  1189,  1189,  1190,  1190,
    1190,  1191,  1191,  1191,  1192,  1192,  1193,  1193,  1193,  1194,
    1194,  1195,  1195,  1195,  1195,  1195,  1195,  1196,  1196,  1197,
    1198,  1199,  1200,  1200,  1201,  1202,  1203,  1203,  1204,  1205,
    1205,  1206,  1207,  1207,  1207,  1208,  1209,  1209,  1210,  1211,
    1212,  1212,  1213,  1214,  1214,  1215,  1215,  1216,  1217,  1217,
    1218,  1218,  1218,  1219,  1219,  1220,  1220,  1221,  1221,  1221,
    1221,  1221,  1221,  1221,  1221,  1221,  1221,  1222,  1222,  1223,
    1223,  1223,  1224,  1224,  1224,  1224,  1224,  1224,  1224,  1225,
    1225,  1226,  1226,  1227,  1227,  1228,  1228,  1229,  1229,  1230,
    1230,  1230,  1231,  1231,  1231,  1232,  1232,  1233,  1233,  1234,
    1234,  1234,  1235,  1236,  1237,  1237,  1238,  1239,  1239,  1239,
    1239,  1240,  1241,  1241,  1241,  1241,  1242,  1242,  1243,  1244,
    1244,  1245,  1246,  1247,  1248,  1248,  1248,  1248,  1248,  1248,
    1248,  1249,  1249,  1250,  1250,  1251,  1251,  1251,  1251,  1251,
    1251,  1251,  1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,
    1252,  1252,  1252,  1252,  1253,  1253,  1254,  1254,  1254,  1255,
    1255,  1255,  1255,  1256,  1256,  1256,  1257,  1257,  1257,  1258,
    1258,  1258,  1259,  1259,  1260,  1260,  1261,  1261,  1262,  1262,
    1263,  1264,  1264,  1265,  1265,  1266,  1266,  1267,  1267,  1268,
    1268,  1269,  1269,  1269,  1270,  1270,  1271,  1271,  1271,  1272,
    1272,  1273,  1273,  1274,  1274,  1274,  1274,  1274,  1274,  1274,
    1274,  1275,  1275,  1276,  1276,  1276,  1276,  1276,  1276,  1276,
    1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,
    1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,
    1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,
    1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,
    1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,
    1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,
    1276,  1276,  1276,  1277,  1277,  1278,  1278,  1279,  1279,  1280,
    1280,  1281,  1281,  1282,  1282,  1283,  1283,  1284,  1284,  1285,
    1285,  1286,  1286,  1287,  1287,  1288,  1288,  1289,  1289,  1290,
    1290,  1291,  1291,  1292,  1292,  1293,  1293,  1294,  1294,  1295,
    1295,  1295,  1296,  1296,  1297,  1297,  1298,  1298,  1299,  1299,
    1300,  1300,  1300,  1301,  1301,  1302,  1302,  1302,  1303,  1303,
    1303,  1304,  1304,  1304,  1305,  1305,  1306,  1306,  1307,  1307,
    1308,  1308,  1308,  1309,  1309,  1310,  1310,  1311,  1311,  1311,
    1311,  1312,  1312,  1313,  1313,  1314,  1314,  1315,  1315,  1316,
    1316,  1316,  1317,  1317,  1318,  1318,  1319,  1319,  1320,  1320,
    1320,  1321,  1321,  1322,  1322,  1323,  1323,  1324,  1324,  1325,
    1325,  1326,  1326,  1327,  1327,  1328,  1328,  1328,  1329,  1329,
    1330,  1330,  1331,  1331,  1332,  1332,  1333,  1333,  1334,  1334,
    1335,  1335,  1336,  1336,  1337,  1337,  1338,  1338,  1339,  1339,
    1340,  1340,  1341,  1341,  1342,  1342,  1343,  1343,  1344,  1344,
    1345,  1345,  1346,  1346,  1347,  1347,  1347,  1348,  1348,  1349,
    1349,  1350,  1350,  1351,  1351,  1352,  1352,  1353,  1353,  1354,
    1354,  1355,  1355
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
       3,     3,     1,     4,     0,     1,     1,     0,     5,     2,
       2,     1,     0,     4,     5,     2,     3,     1,     1,     3,
       1,     2,     4,     4,     4,     1,     3,     4,     4,     3,
       1,     1,     3,     2,     2,     2,     0,     2,     3,     1,
       2,     1,     1,     5,     0,     1,     1,     1,     0,     6,
       1,     2,     2,     0,     2,     0,     9,     0,     3,     0,
       3,     0,     2,     2,     0,     5,     3,     1,     1,     0,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     0,     1,     1,     4,     6,     9,     0,
       3,     0,     2,     0,     2,     3,     5,     5,     1,     1,
       1,     1,     3,     5,     0,     2,     1,     1,     1,     4,
       2,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       4,     0,     2,     2,     2,     2,     1,     2,     0,     0,
       5,     0,     0,     2,     2,     3,     1,     0,     4,     3,
       2,     0,     1,     1,     1,     0,     2,     1,     2,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     2,     2,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     0,     2,     2,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     6,     0,     2,     7,     8,     0,     2,     0,
       2,     0,     3,     0,     3,     0,     1,     1,     0,     5,
       1,     1,     0,     3,     1,     2,     1,     2,     2,     3,
       1,     0,     5,     1,     2,     1,     3,     0,     4,     2,
       4,     2,     2,     0,     0,     5,     0,     0,     5,     0,
       0,     5,     0,     2,     0,     6,     0,     2,     2,     2,
       3,     1,     1,     2,     2,     1,     2,     4,     1,     4,
       2,     0,     2,     1,     1,     1,     1,     1,     3,     4,
       4,     4,     3,     0,     2,     0,     5,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     2,     1,
       2,     1,     1,     0,     2,     2,     0,     2,     4,     4,
       0,     3,     1,     1,     3,     6,     2,     3,     2,     2,
       3,     2,     1,     2,     2,     1,     1,     1,     2,     2,
       1,     4,     2,     3,     0,     0,     5,     0,     1,     2,
       3,     1,     0,     4,     3,     0,     2,     2,     2,     1,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     1,     5,     5,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     1,     2,     1,     2,     1,     1,     1,     1,
       0,     1,     1,     0,     1,     1,     3,     2,     0,     0,
       0,     9,     0,     4,     0,     0,     3,     0,     3,     1,
       2,     4,     0,     2,     2,     0,     3,     3,     4,     4,
       3,     0,     1,     0,     2,     2,     0,     0,     7,     0,
       2,     1,     1,     2,     1,     1,     0,     6,     0,     2,
       2,     1,     0,     1,     0,     0,     3,     0,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     0,     4,     0,     4,     3,     3,     4,     3,     4,
       3,     3,     4,     4,     3,     4,     3,     4,     5,     3,
       4,     3,     3,     1,     1,     0,     1,     1,     2,     1,
       1,     1,     2,     1,     2,     2,     2,     2,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     1,     1,     1,     4,
       3,     1,     2,     1,     1,     3,     3,     3,     3,     3,
       1,     1,     0,     1,     0,     4,     4,     5,     6,     0,
       2,     0,     1,     0,     3,     3,     4,     0,     2,     0,
       3,     1,     2,     4,     0,     2,     0,     4,     6,     0,
       1,     1,     1,     0,     0,     3,     1,     2,     2,     3,
       0,     2,     2,     2,     0,     3,     2,     2,     4,     1,
       1,     1,     1,     0,     2,     2,     0,     2,     0,     1,
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
#line 1899 "parser.y" /* yacc.c:1646  */
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
#line 6698 "parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 1911 "parser.y" /* yacc.c:1646  */
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
#line 6721 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 1947 "parser.y" /* yacc.c:1646  */
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
#line 6745 "parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 1998 "parser.y" /* yacc.c:1646  */
    {
	first_nested_program = 0;
	clean_up_program ((yyvsp[-1]), CB_PROGRAM_TYPE);
  }
#line 6754 "parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 2006 "parser.y" /* yacc.c:1646  */
    {
	  clean_up_program ((yyvsp[-1]), CB_FUNCTION_TYPE);
  }
#line 6762 "parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 2028 "parser.y" /* yacc.c:1646  */
    {
	if (set_up_program ((yyvsp[-1]), (yyvsp[0]), CB_PROGRAM_TYPE)) {
		YYABORT;
	}
  }
#line 6772 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 2034 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 6780 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 2041 "parser.y" /* yacc.c:1646  */
    {
	if (set_up_program ((yyvsp[-2]), (yyvsp[-1]), CB_FUNCTION_TYPE)) {
		YYABORT;
	}
	set_up_func_prototype ((yyvsp[-2]), (yyvsp[-1]), 1);
	cobc_cs_check = 0;
  }
#line 6792 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 2052 "parser.y" /* yacc.c:1646  */
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
#line 6807 "parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 2071 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 6813 "parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 2072 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6819 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 2081 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 6832 "parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 2090 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 6845 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 2104 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_initial = 1;
  }
#line 6853 "parser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 2108 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_recursive = 1;
  }
#line 6861 "parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 2124 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
#line 6869 "parser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 2141 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_CONFIGURATION_SECTION;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "CONFIGURATION SECTION");
	}
  }
#line 6881 "parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 2155 "parser.y" /* yacc.c:1646  */
    {
	if (warningopt && (check_comp_duplicate & SYN_CLAUSE_2)) {
		cb_warning (_("Phrases in non-standard order"));
	}
  }
#line 6891 "parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 2167 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("SOURCE-COMPUTER", SYN_CLAUSE_1, &check_comp_duplicate);
  }
#line 6901 "parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 2182 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_debugging_line, "DEBUGGING MODE");
	current_program->flag_debugging = 1;
	needs_debug_item = 1;
	cobc_cs_check = 0;
	cb_build_debug_item ();
  }
#line 6913 "parser.c" /* yacc.c:1646  */
    break;

  case 57:
#line 2195 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2, &check_comp_duplicate);
  }
#line 6923 "parser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 2224 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
#line 6931 "parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 2232 "parser.y" /* yacc.c:1646  */
    {
	current_program->collating_sequence = (yyvsp[0]);
  }
#line 6939 "parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 2239 "parser.y" /* yacc.c:1646  */
    {
	/* Ignore */
  }
#line 6947 "parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 2246 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->classification) {
		cb_error (_("Duplicate CLASSIFICATION clause"));
	} else {
		current_program->classification = (yyvsp[0]);
	}
  }
#line 6959 "parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 2257 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 6967 "parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 2261 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 6975 "parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 2265 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 6983 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 2269 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 6991 "parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 2283 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  }
#line 7000 "parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 2288 "parser.y" /* yacc.c:1646  */
    {
	cobc_in_repository = 0;
  }
#line 7008 "parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 2296 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 7016 "parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 2308 "parser.y" /* yacc.c:1646  */
    {
	functions_are_all = 1;
  }
#line 7024 "parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 2312 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-1]) != cb_error_node) {
		set_up_func_prototype ((yyvsp[-1]), (yyvsp[0]), 0);
	}
  }
#line 7034 "parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 2322 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7042 "parser.c" /* yacc.c:1646  */
    break;

  case 91:
#line 2326 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7050 "parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 2333 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 7059 "parser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 2338 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 7068 "parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 2349 "parser.y" /* yacc.c:1646  */
    {
	check_duplicate = 0;
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	header_check |= COBC_HD_SPECIAL_NAMES;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	}
  }
#line 7082 "parser.c" /* yacc.c:1646  */
    break;

  case 114:
#line 2394 "parser.y" /* yacc.c:1646  */
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
#line 7110 "parser.c" /* yacc.c:1646  */
    break;

  case 116:
#line 2422 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_DEVICE_CONSOLE) {
			cb_error_x (save_tree, _("Invalid CRT clause"));
		} else {
			current_program->flag_console_is_crt = 1;
		}
	}
  }
#line 7124 "parser.c" /* yacc.c:1646  */
    break;

  case 117:
#line 2432 "parser.y" /* yacc.c:1646  */
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
#line 7141 "parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 2445 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree && CB_VALID_TREE ((yyvsp[-1]))) {
		cb_define ((yyvsp[-1]), save_tree);
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
				(yyvsp[-1]), save_tree);
	}
  }
#line 7153 "parser.c" /* yacc.c:1646  */
    break;

  case 122:
#line 2461 "parser.y" /* yacc.c:1646  */
    {
	  check_on_off_duplicate = 0;
  }
#line 7161 "parser.c" /* yacc.c:1646  */
    break;

  case 123:
#line 2468 "parser.y" /* yacc.c:1646  */
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
#line 7180 "parser.c" /* yacc.c:1646  */
    break;

  case 124:
#line 2483 "parser.y" /* yacc.c:1646  */
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
#line 7199 "parser.c" /* yacc.c:1646  */
    break;

  case 125:
#line 2503 "parser.y" /* yacc.c:1646  */
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
#line 7216 "parser.c" /* yacc.c:1646  */
    break;

  case 126:
#line 2516 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		current_program->alphabet_name_list =
			cb_list_add (current_program->alphabet_name_list, (yyvsp[-2]));
	}
	cobc_cs_check = 0;
  }
#line 7228 "parser.c" /* yacc.c:1646  */
    break;

  case 127:
#line 2527 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
#line 7238 "parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 2533 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 7248 "parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 2539 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 7258 "parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 2545 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
#line 7268 "parser.c" /* yacc.c:1646  */
    break;

  case 131:
#line 2551 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 7278 "parser.c" /* yacc.c:1646  */
    break;

  case 132:
#line 2557 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[0]);
	}
  }
#line 7289 "parser.c" /* yacc.c:1646  */
    break;

  case 133:
#line 2567 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 7297 "parser.c" /* yacc.c:1646  */
    break;

  case 134:
#line 2571 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 7305 "parser.c" /* yacc.c:1646  */
    break;

  case 135:
#line 2578 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7313 "parser.c" /* yacc.c:1646  */
    break;

  case 136:
#line 2582 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 7321 "parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 2586 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[-1]));
  }
#line 7329 "parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 2590 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 7337 "parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 2597 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 7345 "parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 2601 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-3]), (yyvsp[0]));
  }
#line 7353 "parser.c" /* yacc.c:1646  */
    break;

  case 141:
#line 2607 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 7359 "parser.c" /* yacc.c:1646  */
    break;

  case 142:
#line 2608 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 7365 "parser.c" /* yacc.c:1646  */
    break;

  case 143:
#line 2609 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 7371 "parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 2610 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 7377 "parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 2611 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_high; }
#line 7383 "parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 2612 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_low; }
#line 7389 "parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 2616 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 7395 "parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 2617 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 7401 "parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 2625 "parser.y" /* yacc.c:1646  */
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
#line 7416 "parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 2639 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7424 "parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 2643 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7432 "parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 2651 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7440 "parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 2658 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7448 "parser.c" /* yacc.c:1646  */
    break;

  case 154:
#line 2662 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
	} else {
		(yyval) = (yyvsp[-1]);
	}
  }
#line 7460 "parser.c" /* yacc.c:1646  */
    break;

  case 155:
#line 2673 "parser.y" /* yacc.c:1646  */
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
#line 7481 "parser.c" /* yacc.c:1646  */
    break;

  case 156:
#line 2693 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = NULL;
	} else {
		(yyval) = CB_LIST_INIT ((yyvsp[0]));
	}
  }
#line 7493 "parser.c" /* yacc.c:1646  */
    break;

  case 157:
#line 2701 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = (yyvsp[-1]);
	} else {
		(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
	}
  }
#line 7505 "parser.c" /* yacc.c:1646  */
    break;

  case 158:
#line 2711 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 7511 "parser.c" /* yacc.c:1646  */
    break;

  case 159:
#line 2712 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 7517 "parser.c" /* yacc.c:1646  */
    break;

  case 160:
#line 2719 "parser.y" /* yacc.c:1646  */
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
#line 7539 "parser.c" /* yacc.c:1646  */
    break;

  case 161:
#line 2739 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 7545 "parser.c" /* yacc.c:1646  */
    break;

  case 162:
#line 2740 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 7551 "parser.c" /* yacc.c:1646  */
    break;

  case 163:
#line 2745 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7559 "parser.c" /* yacc.c:1646  */
    break;

  case 164:
#line 2749 "parser.y" /* yacc.c:1646  */
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
#line 7579 "parser.c" /* yacc.c:1646  */
    break;

  case 165:
#line 2770 "parser.y" /* yacc.c:1646  */
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
#line 7601 "parser.c" /* yacc.c:1646  */
    break;

  case 166:
#line 2793 "parser.y" /* yacc.c:1646  */
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
#line 7682 "parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 2874 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7690 "parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 2878 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7698 "parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 2887 "parser.y" /* yacc.c:1646  */
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
#line 7715 "parser.c" /* yacc.c:1646  */
    break;

  case 170:
#line 2906 "parser.y" /* yacc.c:1646  */
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
#line 7730 "parser.c" /* yacc.c:1646  */
    break;

  case 171:
#line 2922 "parser.y" /* yacc.c:1646  */
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
#line 7746 "parser.c" /* yacc.c:1646  */
    break;

  case 172:
#line 2940 "parser.y" /* yacc.c:1646  */
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
#line 7762 "parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 2958 "parser.y" /* yacc.c:1646  */
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
#line 7778 "parser.c" /* yacc.c:1646  */
    break;

  case 174:
#line 2975 "parser.y" /* yacc.c:1646  */
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
#line 7794 "parser.c" /* yacc.c:1646  */
    break;

  case 175:
#line 2996 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_environment (current_program);
  }
#line 7802 "parser.c" /* yacc.c:1646  */
    break;

  case 177:
#line 3003 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
#line 7811 "parser.c" /* yacc.c:1646  */
    break;

  case 179:
#line 3011 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
#line 7821 "parser.c" /* yacc.c:1646  */
    break;

  case 181:
#line 3020 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  }
#line 7831 "parser.c" /* yacc.c:1646  */
    break;

  case 184:
#line 3035 "parser.y" /* yacc.c:1646  */
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
#line 7857 "parser.c" /* yacc.c:1646  */
    break;

  case 185:
#line 3057 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE ((yyvsp[-3]))) {
		validate_file (current_file, (yyvsp[-3]));
	}
  }
#line 7867 "parser.c" /* yacc.c:1646  */
    break;

  case 201:
#line 3089 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
  }
#line 7877 "parser.c" /* yacc.c:1646  */
    break;

  case 202:
#line 3095 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	if ((yyvsp[0])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	} else {
		current_file->flag_fileid = 1;
	}
  }
#line 7891 "parser.c" /* yacc.c:1646  */
    break;

  case 203:
#line 3105 "parser.y" /* yacc.c:1646  */
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
#line 7908 "parser.c" /* yacc.c:1646  */
    break;

  case 204:
#line 3118 "parser.y" /* yacc.c:1646  */
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
#line 7925 "parser.c" /* yacc.c:1646  */
    break;

  case 205:
#line 3131 "parser.y" /* yacc.c:1646  */
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
#line 7953 "parser.c" /* yacc.c:1646  */
    break;

  case 206:
#line 3157 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 7959 "parser.c" /* yacc.c:1646  */
    break;

  case 207:
#line 3158 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 7965 "parser.c" /* yacc.c:1646  */
    break;

  case 208:
#line 3159 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int4; }
#line 7971 "parser.c" /* yacc.c:1646  */
    break;

  case 214:
#line 3171 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_line_adv = 1;
  }
#line 7979 "parser.c" /* yacc.c:1646  */
    break;

  case 216:
#line 3178 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_ext_assign = 1;
  }
#line 7987 "parser.c" /* yacc.c:1646  */
    break;

  case 220:
#line 3191 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7995 "parser.c" /* yacc.c:1646  */
    break;

  case 223:
#line 3203 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2, &check_duplicate);
  }
#line 8004 "parser.c" /* yacc.c:1646  */
    break;

  case 224:
#line 3210 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
#line 8010 "parser.c" /* yacc.c:1646  */
    break;

  case 225:
#line 3211 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_DYNAMIC; }
#line 8016 "parser.c" /* yacc.c:1646  */
    break;

  case 226:
#line 3212 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_RANDOM; }
#line 8022 "parser.c" /* yacc.c:1646  */
    break;

  case 227:
#line 3220 "parser.y" /* yacc.c:1646  */
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
#line 8047 "parser.c" /* yacc.c:1646  */
    break;

  case 228:
#line 3243 "parser.y" /* yacc.c:1646  */
    { }
#line 8053 "parser.c" /* yacc.c:1646  */
    break;

  case 229:
#line 3246 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("SUPPRESS WHEN ALL");
  }
#line 8061 "parser.c" /* yacc.c:1646  */
    break;

  case 230:
#line 3251 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("SUPPRESS WHEN SPACE/ZERO");
  }
#line 8069 "parser.c" /* yacc.c:1646  */
    break;

  case 231:
#line 3261 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3, &check_duplicate);
	PENDING ("COLLATING SEQUENCE");
  }
#line 8078 "parser.c" /* yacc.c:1646  */
    break;

  case 232:
#line 3269 "parser.y" /* yacc.c:1646  */
    {
	  if (CB_ALPHABET_NAME_P (cb_ref ((yyvsp[0])))) {
		  (yyval) = (yyvsp[0]);
	  } else {
		  cb_error_x ((yyvsp[0]), _("'%s' is not an alphabet-name"),
			      cb_name ((yyvsp[0])));
		  (yyval) = cb_error_node;
	  }
  }
#line 8092 "parser.c" /* yacc.c:1646  */
    break;

  case 233:
#line 3284 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("STATUS", SYN_CLAUSE_4, &check_duplicate);
	current_file->file_status = (yyvsp[0]);
  }
#line 8101 "parser.c" /* yacc.c:1646  */
    break;

  case 237:
#line 3299 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LOCK", SYN_CLAUSE_5, &check_duplicate);
  }
#line 8109 "parser.c" /* yacc.c:1646  */
    break;

  case 239:
#line 3307 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  }
#line 8118 "parser.c" /* yacc.c:1646  */
    break;

  case 240:
#line 3312 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  }
#line 8127 "parser.c" /* yacc.c:1646  */
    break;

  case 241:
#line 3317 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  }
#line 8136 "parser.c" /* yacc.c:1646  */
    break;

  case 244:
#line 3326 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
#line 8144 "parser.c" /* yacc.c:1646  */
    break;

  case 245:
#line 3330 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
	PENDING ("WITH ROLLBACK");
  }
#line 8153 "parser.c" /* yacc.c:1646  */
    break;

  case 248:
#line 3346 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_INDEXED;
  }
#line 8162 "parser.c" /* yacc.c:1646  */
    break;

  case 249:
#line 3351 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
#line 8171 "parser.c" /* yacc.c:1646  */
    break;

  case 250:
#line 3356 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_RELATIVE;
  }
#line 8180 "parser.c" /* yacc.c:1646  */
    break;

  case 251:
#line 3361 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
#line 8189 "parser.c" /* yacc.c:1646  */
    break;

  case 252:
#line 3372 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PADDING", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
#line 8198 "parser.c" /* yacc.c:1646  */
    break;

  case 253:
#line 3383 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8, &check_duplicate);
  }
#line 8206 "parser.c" /* yacc.c:1646  */
    break;

  case 254:
#line 3393 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9, &check_duplicate);
	current_file->key = (yyvsp[0]);
  }
#line 8215 "parser.c" /* yacc.c:1646  */
    break;

  case 255:
#line 3400 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8221 "parser.c" /* yacc.c:1646  */
    break;

  case 256:
#line 3401 "parser.y" /* yacc.c:1646  */
    { PENDING ("SPLIT KEYS"); }
#line 8227 "parser.c" /* yacc.c:1646  */
    break;

  case 257:
#line 3402 "parser.y" /* yacc.c:1646  */
    { PENDING ("SPLIT KEYS"); }
#line 8233 "parser.c" /* yacc.c:1646  */
    break;

  case 258:
#line 3409 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10, &check_duplicate);
	current_file->key = (yyvsp[0]);
  }
#line 8242 "parser.c" /* yacc.c:1646  */
    break;

  case 259:
#line 3420 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11, &check_duplicate);
  }
#line 8250 "parser.c" /* yacc.c:1646  */
    break;

  case 262:
#line 3434 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SHARING", SYN_CLAUSE_12, &check_duplicate);
	current_file->sharing = (yyvsp[0]);
  }
#line 8259 "parser.c" /* yacc.c:1646  */
    break;

  case 263:
#line 3441 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8265 "parser.c" /* yacc.c:1646  */
    break;

  case 264:
#line 3442 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 8271 "parser.c" /* yacc.c:1646  */
    break;

  case 265:
#line 3443 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8277 "parser.c" /* yacc.c:1646  */
    break;

  case 268:
#line 3452 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 8285 "parser.c" /* yacc.c:1646  */
    break;

  case 273:
#line 3471 "parser.y" /* yacc.c:1646  */
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
#line 8314 "parser.c" /* yacc.c:1646  */
    break;

  case 274:
#line 3498 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 8320 "parser.c" /* yacc.c:1646  */
    break;

  case 275:
#line 3499 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 8326 "parser.c" /* yacc.c:1646  */
    break;

  case 276:
#line 3500 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 8332 "parser.c" /* yacc.c:1646  */
    break;

  case 277:
#line 3501 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 8338 "parser.c" /* yacc.c:1646  */
    break;

  case 278:
#line 3508 "parser.y" /* yacc.c:1646  */
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
#line 8347 "parser.c" /* yacc.c:1646  */
    break;

  case 279:
#line 3513 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	cb_verify (cb_multiple_file_tape_clause, "MULTIPLE FILE TAPE");
	cobc_cs_check = 0;
  }
#line 8359 "parser.c" /* yacc.c:1646  */
    break;

  case 285:
#line 3542 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_WORKING;
  }
#line 8367 "parser.c" /* yacc.c:1646  */
    break;

  case 286:
#line 3550 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_data (current_program);
  }
#line 8375 "parser.c" /* yacc.c:1646  */
    break;

  case 288:
#line 3557 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_DATA_DIVISION;
  }
#line 8383 "parser.c" /* yacc.c:1646  */
    break;

  case 290:
#line 3566 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
#line 8393 "parser.c" /* yacc.c:1646  */
    break;

  case 293:
#line 3580 "parser.y" /* yacc.c:1646  */
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
#line 8411 "parser.c" /* yacc.c:1646  */
    break;

  case 294:
#line 3599 "parser.y" /* yacc.c:1646  */
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
#line 8431 "parser.c" /* yacc.c:1646  */
    break;

  case 296:
#line 3616 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 8439 "parser.c" /* yacc.c:1646  */
    break;

  case 297:
#line 3623 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8447 "parser.c" /* yacc.c:1646  */
    break;

  case 298:
#line 3627 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 8455 "parser.c" /* yacc.c:1646  */
    break;

  case 301:
#line 3638 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("EXTERNAL", SYN_CLAUSE_1, &check_duplicate);
#if	0	/* RXWRXW - Global/External */
	if (current_file->flag_global) {
		cb_error (_("File cannot have both EXTERNAL and GLOBAL clauses"));
	}
#endif
	current_file->flag_external = 1;
  }
#line 8469 "parser.c" /* yacc.c:1646  */
    break;

  case 302:
#line 3648 "parser.y" /* yacc.c:1646  */
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
#line 8488 "parser.c" /* yacc.c:1646  */
    break;

  case 312:
#line 3678 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3, &check_duplicate);
	/* ignore */
  }
#line 8497 "parser.c" /* yacc.c:1646  */
    break;

  case 316:
#line 3691 "parser.y" /* yacc.c:1646  */
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
#line 8521 "parser.c" /* yacc.c:1646  */
    break;

  case 317:
#line 3711 "parser.y" /* yacc.c:1646  */
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
#line 8559 "parser.c" /* yacc.c:1646  */
    break;

  case 318:
#line 3746 "parser.y" /* yacc.c:1646  */
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
#line 8591 "parser.c" /* yacc.c:1646  */
    break;

  case 320:
#line 3777 "parser.y" /* yacc.c:1646  */
    {
	current_file->record_depending = (yyvsp[0]);
  }
#line 8599 "parser.c" /* yacc.c:1646  */
    break;

  case 321:
#line 3783 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8605 "parser.c" /* yacc.c:1646  */
    break;

  case 322:
#line 3784 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8611 "parser.c" /* yacc.c:1646  */
    break;

  case 323:
#line 3788 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8617 "parser.c" /* yacc.c:1646  */
    break;

  case 324:
#line 3789 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8623 "parser.c" /* yacc.c:1646  */
    break;

  case 325:
#line 3797 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LABEL", SYN_CLAUSE_5, &check_duplicate);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
#line 8632 "parser.c" /* yacc.c:1646  */
    break;

  case 326:
#line 3808 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
#line 8641 "parser.c" /* yacc.c:1646  */
    break;

  case 327:
#line 3813 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
	if (!current_file->assign) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	}
  }
#line 8653 "parser.c" /* yacc.c:1646  */
    break;

  case 332:
#line 3836 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("DATA", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
#line 8662 "parser.c" /* yacc.c:1646  */
    break;

  case 333:
#line 3848 "parser.y" /* yacc.c:1646  */
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
#line 8681 "parser.c" /* yacc.c:1646  */
    break;

  case 339:
#line 3876 "parser.y" /* yacc.c:1646  */
    {
	current_file->latfoot = (yyvsp[0]);
  }
#line 8689 "parser.c" /* yacc.c:1646  */
    break;

  case 340:
#line 3883 "parser.y" /* yacc.c:1646  */
    {
	current_file->lattop = (yyvsp[0]);
  }
#line 8697 "parser.c" /* yacc.c:1646  */
    break;

  case 341:
#line 3890 "parser.y" /* yacc.c:1646  */
    {
	current_file->latbot = (yyvsp[0]);
  }
#line 8705 "parser.c" /* yacc.c:1646  */
    break;

  case 342:
#line 3899 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9, &check_duplicate);
	/* ignore */
  }
#line 8715 "parser.c" /* yacc.c:1646  */
    break;

  case 347:
#line 3912 "parser.y" /* yacc.c:1646  */
    {
	if (current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("Can only use U or S mode with RECORD SEQUENTIAL files"));
	}
  }
#line 8725 "parser.c" /* yacc.c:1646  */
    break;

  case 350:
#line 3928 "parser.y" /* yacc.c:1646  */
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
#line 8762 "parser.c" /* yacc.c:1646  */
    break;

  case 352:
#line 3964 "parser.y" /* yacc.c:1646  */
    {
	  if (warningopt) {
		  PENDING ("FOR sub-records clause");
	  }

	  current_file->code_set_items = CB_LIST ((yyvsp[0]));
  }
#line 8774 "parser.c" /* yacc.c:1646  */
    break;

  case 353:
#line 3977 "parser.y" /* yacc.c:1646  */
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
#line 8790 "parser.c" /* yacc.c:1646  */
    break;

  case 356:
#line 3997 "parser.y" /* yacc.c:1646  */
    {
	current_report = build_report ((yyvsp[0]));
	current_report->file = current_file;
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
#line 8804 "parser.c" /* yacc.c:1646  */
    break;

  case 357:
#line 4007 "parser.y" /* yacc.c:1646  */
    {
	current_report = build_report ((yyvsp[0]));
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
#line 8817 "parser.c" /* yacc.c:1646  */
    break;

  case 359:
#line 4022 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
#line 8827 "parser.c" /* yacc.c:1646  */
    break;

  case 360:
#line 4028 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[0])));
	}
  }
#line 8837 "parser.c" /* yacc.c:1646  */
    break;

  case 361:
#line 4037 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8845 "parser.c" /* yacc.c:1646  */
    break;

  case 362:
#line 4040 "parser.y" /* yacc.c:1646  */
    {
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 8855 "parser.c" /* yacc.c:1646  */
    break;

  case 363:
#line 4046 "parser.y" /* yacc.c:1646  */
    {
	struct cb_field *p;

	for (p = description_field; p; p = p->sister) {
		cb_validate_field (p);
	}
	(yyval) = CB_TREE (description_field);
  }
#line 8868 "parser.c" /* yacc.c:1646  */
    break;

  case 367:
#line 4064 "parser.y" /* yacc.c:1646  */
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
#line 8887 "parser.c" /* yacc.c:1646  */
    break;

  case 368:
#line 4079 "parser.y" /* yacc.c:1646  */
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
#line 8911 "parser.c" /* yacc.c:1646  */
    break;

  case 369:
#line 4099 "parser.y" /* yacc.c:1646  */
    {
	/* Free tree assocated with level number */
	cobc_parse_free ((yyvsp[-2]));
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 8925 "parser.c" /* yacc.c:1646  */
    break;

  case 370:
#line 4112 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8933 "parser.c" /* yacc.c:1646  */
    break;

  case 371:
#line 4119 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 8943 "parser.c" /* yacc.c:1646  */
    break;

  case 372:
#line 4125 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 8953 "parser.c" /* yacc.c:1646  */
    break;

  case 373:
#line 4131 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	qualifier = (yyvsp[0]);
	non_const_word = 0;
  }
#line 8963 "parser.c" /* yacc.c:1646  */
    break;

  case 374:
#line 4140 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	qualifier = (yyvsp[0]);
	non_const_word = 0;
  }
#line 8973 "parser.c" /* yacc.c:1646  */
    break;

  case 375:
#line 4149 "parser.y" /* yacc.c:1646  */
    {
	(yyval)= NULL;
  }
#line 8981 "parser.c" /* yacc.c:1646  */
    break;

  case 376:
#line 4153 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
		(yyval)= NULL;
	} else {
		(yyval) = cb_null;
	}
  }
#line 8994 "parser.c" /* yacc.c:1646  */
    break;

  case 377:
#line 4164 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9000 "parser.c" /* yacc.c:1646  */
    break;

  case 378:
#line 4165 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 9006 "parser.c" /* yacc.c:1646  */
    break;

  case 379:
#line 4166 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 9012 "parser.c" /* yacc.c:1646  */
    break;

  case 380:
#line 4167 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 9018 "parser.c" /* yacc.c:1646  */
    break;

  case 381:
#line 4172 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 9026 "parser.c" /* yacc.c:1646  */
    break;

  case 382:
#line 4176 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 9034 "parser.c" /* yacc.c:1646  */
    break;

  case 383:
#line 4180 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 9042 "parser.c" /* yacc.c:1646  */
    break;

  case 384:
#line 4184 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int4;
  }
#line 9050 "parser.c" /* yacc.c:1646  */
    break;

  case 385:
#line 4188 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 9058 "parser.c" /* yacc.c:1646  */
    break;

  case 386:
#line 4192 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(long));
  }
#line 9066 "parser.c" /* yacc.c:1646  */
    break;

  case 387:
#line 4196 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(void *));
  }
#line 9074 "parser.c" /* yacc.c:1646  */
    break;

  case 388:
#line 4200 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(float));
  }
#line 9082 "parser.c" /* yacc.c:1646  */
    break;

  case 389:
#line 4204 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(double));
  }
#line 9090 "parser.c" /* yacc.c:1646  */
    break;

  case 390:
#line 4208 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (4);
  }
#line 9098 "parser.c" /* yacc.c:1646  */
    break;

  case 391:
#line 4212 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 9106 "parser.c" /* yacc.c:1646  */
    break;

  case 392:
#line 4216 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (16);
  }
#line 9114 "parser.c" /* yacc.c:1646  */
    break;

  case 393:
#line 4220 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 9126 "parser.c" /* yacc.c:1646  */
    break;

  case 403:
#line 4252 "parser.y" /* yacc.c:1646  */
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
#line 9153 "parser.c" /* yacc.c:1646  */
    break;

  case 404:
#line 4278 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 9161 "parser.c" /* yacc.c:1646  */
    break;

  case 405:
#line 4282 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("CONSTANT FROM clause");
	(yyval) = NULL;
  }
#line 9170 "parser.c" /* yacc.c:1646  */
    break;

  case 406:
#line 4290 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = NULL;
  }
#line 9179 "parser.c" /* yacc.c:1646  */
    break;

  case 407:
#line 4296 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  }
#line 9188 "parser.c" /* yacc.c:1646  */
    break;

  case 422:
#line 4324 "parser.y" /* yacc.c:1646  */
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
#line 9210 "parser.c" /* yacc.c:1646  */
    break;

  case 423:
#line 4348 "parser.y" /* yacc.c:1646  */
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
#line 9238 "parser.c" /* yacc.c:1646  */
    break;

  case 424:
#line 4375 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname (current_field->name);
  }
#line 9246 "parser.c" /* yacc.c:1646  */
    break;

  case 425:
#line 4379 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[0]))->data);
  }
#line 9254 "parser.c" /* yacc.c:1646  */
    break;

  case 426:
#line 4388 "parser.y" /* yacc.c:1646  */
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
#line 9277 "parser.c" /* yacc.c:1646  */
    break;

  case 427:
#line 4413 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PICTURE", SYN_CLAUSE_4, &check_pic_duplicate);
	current_field->pic = CB_PICTURE ((yyvsp[0]));
  }
#line 9286 "parser.c" /* yacc.c:1646  */
    break;

  case 430:
#line 4429 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 9294 "parser.c" /* yacc.c:1646  */
    break;

  case 431:
#line 4433 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 9302 "parser.c" /* yacc.c:1646  */
    break;

  case 432:
#line 4437 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FLOAT);
  }
#line 9310 "parser.c" /* yacc.c:1646  */
    break;

  case 433:
#line 4441 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_DOUBLE);
  }
#line 9318 "parser.c" /* yacc.c:1646  */
    break;

  case 434:
#line 4445 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PACKED);
  }
#line 9326 "parser.c" /* yacc.c:1646  */
    break;

  case 435:
#line 4449 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 9334 "parser.c" /* yacc.c:1646  */
    break;

  case 436:
#line 4453 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_5);
  }
#line 9342 "parser.c" /* yacc.c:1646  */
    break;

  case 437:
#line 4457 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_6);
  }
#line 9350 "parser.c" /* yacc.c:1646  */
    break;

  case 438:
#line 4461 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_X);
  }
#line 9358 "parser.c" /* yacc.c:1646  */
    break;

  case 439:
#line 4465 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_DISPLAY);
  }
#line 9366 "parser.c" /* yacc.c:1646  */
    break;

  case 440:
#line 4469 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_INDEX);
  }
#line 9374 "parser.c" /* yacc.c:1646  */
    break;

  case 441:
#line 4473 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PACKED);
  }
#line 9382 "parser.c" /* yacc.c:1646  */
    break;

  case 442:
#line 4477 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 9391 "parser.c" /* yacc.c:1646  */
    break;

  case 443:
#line 4482 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 9400 "parser.c" /* yacc.c:1646  */
    break;

  case 444:
#line 4487 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 9408 "parser.c" /* yacc.c:1646  */
    break;

  case 445:
#line 4491 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 9416 "parser.c" /* yacc.c:1646  */
    break;

  case 446:
#line 4495 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
#line 9428 "parser.c" /* yacc.c:1646  */
    break;

  case 447:
#line 4503 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 9436 "parser.c" /* yacc.c:1646  */
    break;

  case 448:
#line 4507 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 9444 "parser.c" /* yacc.c:1646  */
    break;

  case 449:
#line 4511 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
#line 9456 "parser.c" /* yacc.c:1646  */
    break;

  case 450:
#line 4519 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_CHAR);
  }
#line 9464 "parser.c" /* yacc.c:1646  */
    break;

  case 451:
#line 4523 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
#line 9472 "parser.c" /* yacc.c:1646  */
    break;

  case 452:
#line 4527 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 9480 "parser.c" /* yacc.c:1646  */
    break;

  case 453:
#line 4531 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 9488 "parser.c" /* yacc.c:1646  */
    break;

  case 454:
#line 4535 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 9496 "parser.c" /* yacc.c:1646  */
    break;

  case 455:
#line 4539 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 9504 "parser.c" /* yacc.c:1646  */
    break;

  case 456:
#line 4543 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_LONG);
  }
#line 9512 "parser.c" /* yacc.c:1646  */
    break;

  case 457:
#line 4547 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
#line 9520 "parser.c" /* yacc.c:1646  */
    break;

  case 458:
#line 4551 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
#line 9532 "parser.c" /* yacc.c:1646  */
    break;

  case 459:
#line 4559 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
#line 9544 "parser.c" /* yacc.c:1646  */
    break;

  case 460:
#line 4567 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN32);
  }
#line 9552 "parser.c" /* yacc.c:1646  */
    break;

  case 461:
#line 4571 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN64);
  }
#line 9560 "parser.c" /* yacc.c:1646  */
    break;

  case 462:
#line 4575 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN128);
  }
#line 9568 "parser.c" /* yacc.c:1646  */
    break;

  case 463:
#line 4579 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_DEC64);
  }
#line 9576 "parser.c" /* yacc.c:1646  */
    break;

  case 464:
#line 4583 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_DEC128);
  }
#line 9584 "parser.c" /* yacc.c:1646  */
    break;

  case 465:
#line 4587 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("USAGE", SYN_CLAUSE_5, &check_pic_duplicate);
	PENDING ("USAGE NATIONAL");
  }
#line 9593 "parser.c" /* yacc.c:1646  */
    break;

  case 470:
#line 4607 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
#line 9603 "parser.c" /* yacc.c:1646  */
    break;

  case 471:
#line 4613 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
#line 9613 "parser.c" /* yacc.c:1646  */
    break;

  case 472:
#line 4626 "parser.y" /* yacc.c:1646  */
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
#line 9632 "parser.c" /* yacc.c:1646  */
    break;

  case 474:
#line 4644 "parser.y" /* yacc.c:1646  */
    {
	current_field->step_count = cb_get_int ((yyvsp[0]));
  }
#line 9640 "parser.c" /* yacc.c:1646  */
    break;

  case 475:
#line 4654 "parser.y" /* yacc.c:1646  */
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
#line 9675 "parser.c" /* yacc.c:1646  */
    break;

  case 476:
#line 4686 "parser.y" /* yacc.c:1646  */
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
#line 9705 "parser.c" /* yacc.c:1646  */
    break;

  case 477:
#line 4714 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9711 "parser.c" /* yacc.c:1646  */
    break;

  case 478:
#line 4715 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9717 "parser.c" /* yacc.c:1646  */
    break;

  case 479:
#line 4719 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9723 "parser.c" /* yacc.c:1646  */
    break;

  case 480:
#line 4720 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9729 "parser.c" /* yacc.c:1646  */
    break;

  case 482:
#line 4725 "parser.y" /* yacc.c:1646  */
    {
	current_field->depending = (yyvsp[0]);
  }
#line 9737 "parser.c" /* yacc.c:1646  */
    break;

  case 484:
#line 4732 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_zero, 0, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 9746 "parser.c" /* yacc.c:1646  */
    break;

  case 486:
#line 4740 "parser.y" /* yacc.c:1646  */
    {
	/* current_field->initialized = 1; */
  }
#line 9754 "parser.c" /* yacc.c:1646  */
    break;

  case 487:
#line 4747 "parser.y" /* yacc.c:1646  */
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
#line 9779 "parser.c" /* yacc.c:1646  */
    break;

  case 488:
#line 4770 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9785 "parser.c" /* yacc.c:1646  */
    break;

  case 489:
#line 4773 "parser.y" /* yacc.c:1646  */
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
#line 9802 "parser.c" /* yacc.c:1646  */
    break;

  case 490:
#line 4788 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_ASCENDING); }
#line 9808 "parser.c" /* yacc.c:1646  */
    break;

  case 491:
#line 4789 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_DESCENDING); }
#line 9814 "parser.c" /* yacc.c:1646  */
    break;

  case 493:
#line 4794 "parser.y" /* yacc.c:1646  */
    {
	current_field->index_list = (yyvsp[0]);
  }
#line 9822 "parser.c" /* yacc.c:1646  */
    break;

  case 494:
#line 4800 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 9828 "parser.c" /* yacc.c:1646  */
    break;

  case 495:
#line 4802 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 9834 "parser.c" /* yacc.c:1646  */
    break;

  case 496:
#line 4807 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 9843 "parser.c" /* yacc.c:1646  */
    break;

  case 497:
#line 4818 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("JUSTIFIED", SYN_CLAUSE_8, &check_pic_duplicate);
	current_field->flag_justified = 1;
  }
#line 9852 "parser.c" /* yacc.c:1646  */
    break;

  case 498:
#line 4829 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SYNCHRONIZED", SYN_CLAUSE_9, &check_pic_duplicate);
	current_field->flag_synchronized = 1;
  }
#line 9861 "parser.c" /* yacc.c:1646  */
    break;

  case 499:
#line 4840 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLANK", SYN_CLAUSE_10, &check_pic_duplicate);
	current_field->flag_blank_zero = 1;
  }
#line 9870 "parser.c" /* yacc.c:1646  */
    break;

  case 500:
#line 4851 "parser.y" /* yacc.c:1646  */
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
#line 9897 "parser.c" /* yacc.c:1646  */
    break;

  case 501:
#line 4879 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE", SYN_CLAUSE_12, &check_pic_duplicate);
	current_field->values = (yyvsp[0]);
  }
#line 9906 "parser.c" /* yacc.c:1646  */
    break;

  case 503:
#line 4887 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 9912 "parser.c" /* yacc.c:1646  */
    break;

  case 504:
#line 4888 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 9918 "parser.c" /* yacc.c:1646  */
    break;

  case 505:
#line 4892 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9924 "parser.c" /* yacc.c:1646  */
    break;

  case 506:
#line 4893 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0])); }
#line 9930 "parser.c" /* yacc.c:1646  */
    break;

  case 508:
#line 4898 "parser.y" /* yacc.c:1646  */
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[0]));
  }
#line 9941 "parser.c" /* yacc.c:1646  */
    break;

  case 509:
#line 4911 "parser.y" /* yacc.c:1646  */
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
#line 9958 "parser.c" /* yacc.c:1646  */
    break;

  case 510:
#line 4924 "parser.y" /* yacc.c:1646  */
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
#line 9978 "parser.c" /* yacc.c:1646  */
    break;

  case 511:
#line 4945 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY clause");
	} else {
		current_field->flag_any_length = 1;
	}
  }
#line 9991 "parser.c" /* yacc.c:1646  */
    break;

  case 512:
#line 4954 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY clause");
	} else {
		current_field->flag_any_length = 1;
		current_field->flag_any_numeric = 1;
	}
  }
#line 10005 "parser.c" /* yacc.c:1646  */
    break;

  case 514:
#line 4969 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LOCAL_STORAGE_SECTION;
	current_storage = CB_STORAGE_LOCAL;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "LOCAL-STORAGE");
	}
  }
#line 10018 "parser.c" /* yacc.c:1646  */
    break;

  case 515:
#line 4978 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->local_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 10028 "parser.c" /* yacc.c:1646  */
    break;

  case 517:
#line 4990 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
#line 10038 "parser.c" /* yacc.c:1646  */
    break;

  case 518:
#line 4996 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 10048 "parser.c" /* yacc.c:1646  */
    break;

  case 520:
#line 5007 "parser.y" /* yacc.c:1646  */
    {
	PENDING("REPORT SECTION");
	current_storage = CB_STORAGE_REPORT;
	cb_clear_real_field ();
  }
#line 10058 "parser.c" /* yacc.c:1646  */
    break;

  case 524:
#line 5023 "parser.y" /* yacc.c:1646  */
    {
	if (CB_INVALID_TREE ((yyvsp[0]))) {
		YYERROR;
	} else {
		current_report = CB_REPORT (cb_ref ((yyvsp[0])));
	}
	check_duplicate = 0;
  }
#line 10071 "parser.c" /* yacc.c:1646  */
    break;

  case 528:
#line 5038 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 10079 "parser.c" /* yacc.c:1646  */
    break;

  case 529:
#line 5045 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1, &check_duplicate);
	cb_error (_("GLOBAL is not allowed with RD"));
  }
#line 10088 "parser.c" /* yacc.c:1646  */
    break;

  case 530:
#line 5050 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CODE", SYN_CLAUSE_2, &check_duplicate);
  }
#line 10096 "parser.c" /* yacc.c:1646  */
    break;

  case 533:
#line 5061 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3, &check_duplicate);
  }
#line 10104 "parser.c" /* yacc.c:1646  */
    break;

  case 537:
#line 5080 "parser.y" /* yacc.c:1646  */
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
#line 10141 "parser.c" /* yacc.c:1646  */
    break;

  case 538:
#line 5116 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[0]));
  }
#line 10149 "parser.c" /* yacc.c:1646  */
    break;

  case 539:
#line 5120 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[-3]));
	current_report->columns = cb_get_int ((yyvsp[-1]));
  }
#line 10158 "parser.c" /* yacc.c:1646  */
    break;

  case 540:
#line 5125 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[-1]));
  }
#line 10166 "parser.c" /* yacc.c:1646  */
    break;

  case 548:
#line 5145 "parser.y" /* yacc.c:1646  */
    {
	current_report->heading = cb_get_int ((yyvsp[0]));
  }
#line 10174 "parser.c" /* yacc.c:1646  */
    break;

  case 549:
#line 5152 "parser.y" /* yacc.c:1646  */
    {
	current_report->first_detail = cb_get_int ((yyvsp[0]));
  }
#line 10182 "parser.c" /* yacc.c:1646  */
    break;

  case 550:
#line 5159 "parser.y" /* yacc.c:1646  */
    {
	current_report->last_control = cb_get_int ((yyvsp[0]));
  }
#line 10190 "parser.c" /* yacc.c:1646  */
    break;

  case 551:
#line 5166 "parser.y" /* yacc.c:1646  */
    {
	current_report->last_detail = cb_get_int ((yyvsp[0]));
  }
#line 10198 "parser.c" /* yacc.c:1646  */
    break;

  case 552:
#line 5173 "parser.y" /* yacc.c:1646  */
    {
	current_report->footing = cb_get_int ((yyvsp[0]));
  }
#line 10206 "parser.c" /* yacc.c:1646  */
    break;

  case 555:
#line 5184 "parser.y" /* yacc.c:1646  */
    {
	check_pic_duplicate = 0;
  }
#line 10214 "parser.c" /* yacc.c:1646  */
    break;

  case 575:
#line 5215 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("TYPE", SYN_CLAUSE_16, &check_pic_duplicate);
  }
#line 10222 "parser.c" /* yacc.c:1646  */
    break;

  case 588:
#line 5241 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("NEXT GROUP", SYN_CLAUSE_17, &check_pic_duplicate);
  }
#line 10230 "parser.c" /* yacc.c:1646  */
    break;

  case 589:
#line 5248 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SUM", SYN_CLAUSE_19, &check_pic_duplicate);
  }
#line 10238 "parser.c" /* yacc.c:1646  */
    break;

  case 594:
#line 5264 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
  }
#line 10246 "parser.c" /* yacc.c:1646  */
    break;

  case 596:
#line 5275 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINE", SYN_CLAUSE_21, &check_pic_duplicate);
  }
#line 10254 "parser.c" /* yacc.c:1646  */
    break;

  case 599:
#line 5287 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLUMN", SYN_CLAUSE_18, &check_pic_duplicate);
  }
#line 10262 "parser.c" /* yacc.c:1646  */
    break;

  case 611:
#line 5320 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SOURCE", SYN_CLAUSE_22, &check_pic_duplicate);
  }
#line 10270 "parser.c" /* yacc.c:1646  */
    break;

  case 612:
#line 5327 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GROUP", SYN_CLAUSE_23, &check_pic_duplicate);
  }
#line 10278 "parser.c" /* yacc.c:1646  */
    break;

  case 613:
#line 5334 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("USAGE", SYN_CLAUSE_24, &check_pic_duplicate);
  }
#line 10286 "parser.c" /* yacc.c:1646  */
    break;

  case 615:
#line 5343 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 10297 "parser.c" /* yacc.c:1646  */
    break;

  case 616:
#line 5350 "parser.y" /* yacc.c:1646  */
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
#line 10313 "parser.c" /* yacc.c:1646  */
    break;

  case 622:
#line 5375 "parser.y" /* yacc.c:1646  */
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
#line 10337 "parser.c" /* yacc.c:1646  */
    break;

  case 623:
#line 5395 "parser.y" /* yacc.c:1646  */
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
#line 10392 "parser.c" /* yacc.c:1646  */
    break;

  case 624:
#line 5446 "parser.y" /* yacc.c:1646  */
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
#line 10412 "parser.c" /* yacc.c:1646  */
    break;

  case 627:
#line 5469 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("BLANK LINE", COB_SCREEN_BLANK_LINE,
					 "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
#line 10421 "parser.c" /* yacc.c:1646  */
    break;

  case 628:
#line 5474 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN,
					 "BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
#line 10430 "parser.c" /* yacc.c:1646  */
    break;

  case 629:
#line 5479 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BELL", COB_SCREEN_BELL);
  }
#line 10438 "parser.c" /* yacc.c:1646  */
    break;

  case 630:
#line 5483 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
#line 10446 "parser.c" /* yacc.c:1646  */
    break;

  case 631:
#line 5487 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("ERASE EOL", COB_SCREEN_ERASE_EOL,
					 "ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
#line 10455 "parser.c" /* yacc.c:1646  */
    break;

  case 632:
#line 5492 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("ERASE EOS", COB_SCREEN_ERASE_EOS,
					 "ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
#line 10464 "parser.c" /* yacc.c:1646  */
    break;

  case 633:
#line 5497 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
					 "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 10473 "parser.c" /* yacc.c:1646  */
    break;

  case 634:
#line 5502 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("LOWLIGHT", COB_SCREEN_LOWLIGHT,
					 "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 10482 "parser.c" /* yacc.c:1646  */
    break;

  case 635:
#line 5507 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
#line 10490 "parser.c" /* yacc.c:1646  */
    break;

  case 636:
#line 5511 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
#line 10498 "parser.c" /* yacc.c:1646  */
    break;

  case 637:
#line 5515 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
	PENDING ("OVERLINE");
  }
#line 10507 "parser.c" /* yacc.c:1646  */
    break;

  case 638:
#line 5520 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("GRID", COB_SCREEN_GRID);
	PENDING ("GRID");
  }
#line 10516 "parser.c" /* yacc.c:1646  */
    break;

  case 639:
#line 5525 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
	PENDING ("LEFTLINE");
  }
#line 10525 "parser.c" /* yacc.c:1646  */
    break;

  case 640:
#line 5530 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("AUTO", COB_SCREEN_AUTO);
  }
#line 10533 "parser.c" /* yacc.c:1646  */
    break;

  case 641:
#line 5534 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("SECURE", COB_SCREEN_SECURE);
  }
#line 10541 "parser.c" /* yacc.c:1646  */
    break;

  case 642:
#line 5538 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  }
#line 10549 "parser.c" /* yacc.c:1646  */
    break;

  case 643:
#line 5542 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("FULL", COB_SCREEN_FULL);
  }
#line 10557 "parser.c" /* yacc.c:1646  */
    break;

  case 644:
#line 5546 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[0]);
  }
#line 10566 "parser.c" /* yacc.c:1646  */
    break;

  case 645:
#line 5551 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
#line 10574 "parser.c" /* yacc.c:1646  */
    break;

  case 646:
#line 5555 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
#line 10582 "parser.c" /* yacc.c:1646  */
    break;

  case 647:
#line 5559 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINE", SYN_CLAUSE_16, &check_pic_duplicate);
	current_field->screen_line = (yyvsp[0]);
  }
#line 10591 "parser.c" /* yacc.c:1646  */
    break;

  case 648:
#line 5564 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLUMN", SYN_CLAUSE_17, &check_pic_duplicate);
	current_field->screen_column = (yyvsp[0]);
  }
#line 10600 "parser.c" /* yacc.c:1646  */
    break;

  case 649:
#line 5569 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18, &check_pic_duplicate);
	current_field->screen_foreg = (yyvsp[0]);
  }
#line 10609 "parser.c" /* yacc.c:1646  */
    break;

  case 650:
#line 5574 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19, &check_pic_duplicate);
	current_field->screen_backg = (yyvsp[0]);
  }
#line 10618 "parser.c" /* yacc.c:1646  */
    break;

  case 659:
#line 5587 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));

	check_repeated ("USING", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[0]);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 10631 "parser.c" /* yacc.c:1646  */
    break;

  case 660:
#line 5596 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FROM", SYN_CLAUSE_21, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[0]);
  }
#line 10640 "parser.c" /* yacc.c:1646  */
    break;

  case 661:
#line 5601 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));

	check_repeated ("TO", SYN_CLAUSE_22, &check_pic_duplicate);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 10652 "parser.c" /* yacc.c:1646  */
    break;

  case 670:
#line 5632 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 10660 "parser.c" /* yacc.c:1646  */
    break;

  case 671:
#line 5636 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
#line 10668 "parser.c" /* yacc.c:1646  */
    break;

  case 672:
#line 5640 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
#line 10676 "parser.c" /* yacc.c:1646  */
    break;

  case 673:
#line 5647 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 10684 "parser.c" /* yacc.c:1646  */
    break;

  case 674:
#line 5651 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
#line 10692 "parser.c" /* yacc.c:1646  */
    break;

  case 675:
#line 5655 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
#line 10700 "parser.c" /* yacc.c:1646  */
    break;

  case 676:
#line 5663 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("OCCURS", SYN_CLAUSE_23, &check_pic_duplicate);
	current_field->occurs_max = cb_get_int ((yyvsp[-1]));
	current_field->occurs_min = current_field->occurs_max;
	current_field->indexes++;
	current_field->flag_occurs = 1;
  }
#line 10712 "parser.c" /* yacc.c:1646  */
    break;

  case 677:
#line 5674 "parser.y" /* yacc.c:1646  */
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  }
#line 10720 "parser.c" /* yacc.c:1646  */
    break;

  case 679:
#line 5683 "parser.y" /* yacc.c:1646  */
    {
	current_section = NULL;
	current_paragraph = NULL;
	check_pic_duplicate = 0;
	check_duplicate = 0;
	cobc_in_procedure = 1U;
	cb_set_system_names ();
	header_check |= COBC_HD_PROCEDURE_DIVISION;
  }
#line 10734 "parser.c" /* yacc.c:1646  */
    break;

  case 680:
#line 5693 "parser.y" /* yacc.c:1646  */
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
#line 10750 "parser.c" /* yacc.c:1646  */
    break;

  case 681:
#line 5705 "parser.y" /* yacc.c:1646  */
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
#line 10769 "parser.c" /* yacc.c:1646  */
    break;

  case 682:
#line 5720 "parser.y" /* yacc.c:1646  */
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
#line 10802 "parser.c" /* yacc.c:1646  */
    break;

  case 684:
#line 5753 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 10810 "parser.c" /* yacc.c:1646  */
    break;

  case 685:
#line 5757 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 10819 "parser.c" /* yacc.c:1646  */
    break;

  case 686:
#line 5762 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 10831 "parser.c" /* yacc.c:1646  */
    break;

  case 687:
#line 5770 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("CHAINING invalid in user FUNCTION"));
	} else {
		current_program->flag_chained = 1;
	}
  }
#line 10844 "parser.c" /* yacc.c:1646  */
    break;

  case 688:
#line 5779 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 10856 "parser.c" /* yacc.c:1646  */
    break;

  case 689:
#line 5789 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10862 "parser.c" /* yacc.c:1646  */
    break;

  case 690:
#line 5791 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 10868 "parser.c" /* yacc.c:1646  */
    break;

  case 691:
#line 5796 "parser.y" /* yacc.c:1646  */
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
#line 10892 "parser.c" /* yacc.c:1646  */
    break;

  case 693:
#line 5820 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 10900 "parser.c" /* yacc.c:1646  */
    break;

  case 694:
#line 5824 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error (_("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		PENDING (_("BY VALUE parameters"));
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 10913 "parser.c" /* yacc.c:1646  */
    break;

  case 696:
#line 5837 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO;
	}
  }
#line 10925 "parser.c" /* yacc.c:1646  */
    break;

  case 697:
#line 5845 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_4;
	}
  }
#line 10937 "parser.c" /* yacc.c:1646  */
    break;

  case 698:
#line 5853 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO | CB_SIZE_UNSIGNED;
	}
  }
#line 10949 "parser.c" /* yacc.c:1646  */
    break;

  case 699:
#line 5861 "parser.y" /* yacc.c:1646  */
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
#line 10982 "parser.c" /* yacc.c:1646  */
    break;

  case 700:
#line 5890 "parser.y" /* yacc.c:1646  */
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
#line 11015 "parser.c" /* yacc.c:1646  */
    break;

  case 701:
#line 5922 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 11023 "parser.c" /* yacc.c:1646  */
    break;

  case 702:
#line 5926 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
		(yyval) = cb_int0;
	} else {
		(yyval) = cb_int1;
	}
  }
#line 11036 "parser.c" /* yacc.c:1646  */
    break;

  case 703:
#line 5938 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
#line 11046 "parser.c" /* yacc.c:1646  */
    break;

  case 704:
#line 5944 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_main) {
		cb_error (_("RETURNING clause cannot be OMITTED for main program"));
	}
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause cannot be OMITTED for a FUNCTION"));
	}
	current_program->flag_void = 1;
  }
#line 11060 "parser.c" /* yacc.c:1646  */
    break;

  case 705:
#line 5954 "parser.y" /* yacc.c:1646  */
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
#line 11093 "parser.c" /* yacc.c:1646  */
    break;

  case 707:
#line 5986 "parser.y" /* yacc.c:1646  */
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
#line 11102 "parser.c" /* yacc.c:1646  */
    break;

  case 708:
#line 5992 "parser.y" /* yacc.c:1646  */
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
#line 11132 "parser.c" /* yacc.c:1646  */
    break;

  case 713:
#line 6030 "parser.y" /* yacc.c:1646  */
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
#line 11153 "parser.c" /* yacc.c:1646  */
    break;

  case 715:
#line 6048 "parser.y" /* yacc.c:1646  */
    {
	/* check_unreached = 0; */
  }
#line 11161 "parser.c" /* yacc.c:1646  */
    break;

  case 716:
#line 6058 "parser.y" /* yacc.c:1646  */
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
#line 11209 "parser.c" /* yacc.c:1646  */
    break;

  case 717:
#line 6102 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (CB_TREE (current_section));
  }
#line 11217 "parser.c" /* yacc.c:1646  */
    break;

  case 720:
#line 6113 "parser.y" /* yacc.c:1646  */
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
#line 11266 "parser.c" /* yacc.c:1646  */
    break;

  case 721:
#line 6161 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[0]), 0) != cb_error_node) {
		cb_error_x ((yyvsp[0]), _("Unknown statement '%s'"), CB_NAME ((yyvsp[0])));
	}
	YYERROR;
  }
#line 11279 "parser.c" /* yacc.c:1646  */
    break;

  case 722:
#line 6173 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11287 "parser.c" /* yacc.c:1646  */
    break;

  case 723:
#line 6177 "parser.y" /* yacc.c:1646  */
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
#line 11303 "parser.c" /* yacc.c:1646  */
    break;

  case 724:
#line 6195 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
#line 11313 "parser.c" /* yacc.c:1646  */
    break;

  case 725:
#line 6200 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  }
#line 11322 "parser.c" /* yacc.c:1646  */
    break;

  case 726:
#line 6205 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[-2]);
	current_statement = CB_STATEMENT ((yyvsp[-1]));
  }
#line 11332 "parser.c" /* yacc.c:1646  */
    break;

  case 727:
#line 6213 "parser.y" /* yacc.c:1646  */
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
#line 11363 "parser.c" /* yacc.c:1646  */
    break;

  case 728:
#line 6240 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11371 "parser.c" /* yacc.c:1646  */
    break;

  case 729:
#line 6244 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11379 "parser.c" /* yacc.c:1646  */
    break;

  case 779:
#line 6300 "parser.y" /* yacc.c:1646  */
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
#line 11397 "parser.c" /* yacc.c:1646  */
    break;

  case 780:
#line 6314 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cobc_cs_check = 0;
  }
#line 11406 "parser.c" /* yacc.c:1646  */
    break;

  case 781:
#line 6325 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ACCEPT", TERM_ACCEPT);
	if (cb_accept_update) {
		check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
	}
	if (cb_accept_auto) {
		check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
	}
  }
#line 11420 "parser.c" /* yacc.c:1646  */
    break;

  case 783:
#line 6340 "parser.y" /* yacc.c:1646  */
    {
	  check_duplicate = 0;
	  check_line_col_duplicate = 0;
	  line_column = NULL;
  }
#line 11430 "parser.c" /* yacc.c:1646  */
    break;

  case 784:
#line 6346 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept ((yyvsp[-3]), line_column, current_statement->attr_ptr);
  }
#line 11439 "parser.c" /* yacc.c:1646  */
    break;

  case 785:
#line 6351 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 0);
  }
#line 11447 "parser.c" /* yacc.c:1646  */
    break;

  case 786:
#line 6355 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 1);
  }
#line 11455 "parser.c" /* yacc.c:1646  */
    break;

  case 787:
#line 6359 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[-3]));
  }
#line 11464 "parser.c" /* yacc.c:1646  */
    break;

  case 788:
#line 6364 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[-2]));
  }
#line 11473 "parser.c" /* yacc.c:1646  */
    break;

  case 789:
#line 6369 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[-3]));
  }
#line 11482 "parser.c" /* yacc.c:1646  */
    break;

  case 790:
#line 6374 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[-2]));
  }
#line 11491 "parser.c" /* yacc.c:1646  */
    break;

  case 791:
#line 6379 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_day_of_week ((yyvsp[-2]));
  }
#line 11499 "parser.c" /* yacc.c:1646  */
    break;

  case 792:
#line 6383 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_escape_key ((yyvsp[-3]));
  }
#line 11507 "parser.c" /* yacc.c:1646  */
    break;

  case 793:
#line 6387 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_exception_status ((yyvsp[-3]));
  }
#line 11515 "parser.c" /* yacc.c:1646  */
    break;

  case 794:
#line 6391 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_time ((yyvsp[-2]));
  }
#line 11523 "parser.c" /* yacc.c:1646  */
    break;

  case 795:
#line 6395 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[-3]));
  }
#line 11532 "parser.c" /* yacc.c:1646  */
    break;

  case 796:
#line 6400 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_command_line ((yyvsp[-2]));
  }
#line 11540 "parser.c" /* yacc.c:1646  */
    break;

  case 797:
#line 6404 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_environment ((yyvsp[-3]));
  }
#line 11548 "parser.c" /* yacc.c:1646  */
    break;

  case 798:
#line 6408 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_get_environment ((yyvsp[-1]), (yyvsp[-4]));
  }
#line 11556 "parser.c" /* yacc.c:1646  */
    break;

  case 799:
#line 6412 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_number ((yyvsp[-2]));
  }
#line 11564 "parser.c" /* yacc.c:1646  */
    break;

  case 800:
#line 6416 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_value ((yyvsp[-3]));
  }
#line 11572 "parser.c" /* yacc.c:1646  */
    break;

  case 801:
#line 6420 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11580 "parser.c" /* yacc.c:1646  */
    break;

  case 802:
#line 6424 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_name ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11588 "parser.c" /* yacc.c:1646  */
    break;

  case 804:
#line 6432 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 11596 "parser.c" /* yacc.c:1646  */
    break;

  case 810:
#line 6450 "parser.y" /* yacc.c:1646  */
    {
	  check_repeated ("FROM CRT", SYN_CLAUSE_1, &check_duplicate);
  }
#line 11604 "parser.c" /* yacc.c:1646  */
    break;

  case 811:
#line 6454 "parser.y" /* yacc.c:1646  */
    {
	  check_repeated ("MODE IS BLOCK", SYN_CLAUSE_2, &check_duplicate);
  }
#line 11612 "parser.c" /* yacc.c:1646  */
    break;

  case 815:
#line 6467 "parser.y" /* yacc.c:1646  */
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
#line 11628 "parser.c" /* yacc.c:1646  */
    break;

  case 816:
#line 6479 "parser.y" /* yacc.c:1646  */
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
#line 11644 "parser.c" /* yacc.c:1646  */
    break;

  case 817:
#line 6491 "parser.y" /* yacc.c:1646  */
    {
	check_attr_with_conflict (_("AT screen-location"), SYN_CLAUSE_3,
				  _("LINE or COLUMN"), SYN_CLAUSE_1 | SYN_CLAUSE_2,
				  &check_line_col_duplicate);

	line_column = (yyvsp[0]);
  }
#line 11656 "parser.c" /* yacc.c:1646  */
    break;

  case 818:
#line 6501 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11662 "parser.c" /* yacc.c:1646  */
    break;

  case 819:
#line 6505 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11668 "parser.c" /* yacc.c:1646  */
    break;

  case 820:
#line 6506 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11674 "parser.c" /* yacc.c:1646  */
    break;

  case 821:
#line 6511 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11682 "parser.c" /* yacc.c:1646  */
    break;

  case 822:
#line 6518 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
  }
#line 11690 "parser.c" /* yacc.c:1646  */
    break;

  case 823:
#line 6522 "parser.y" /* yacc.c:1646  */
    {
	if (cb_accept_auto) {
		remove_attrib (COB_SCREEN_AUTO);
	}
  }
#line 11700 "parser.c" /* yacc.c:1646  */
    break;

  case 824:
#line 6528 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
#line 11708 "parser.c" /* yacc.c:1646  */
    break;

  case 825:
#line 6532 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
#line 11716 "parser.c" /* yacc.c:1646  */
    break;

  case 826:
#line 6536 "parser.y" /* yacc.c:1646  */
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
#line 11724 "parser.c" /* yacc.c:1646  */
    break;

  case 827:
#line 6540 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_FULL);
  }
#line 11732 "parser.c" /* yacc.c:1646  */
    break;

  case 828:
#line 6544 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 11742 "parser.c" /* yacc.c:1646  */
    break;

  case 829:
#line 6550 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LEFTLINE);
  }
#line 11750 "parser.c" /* yacc.c:1646  */
    break;

  case 830:
#line 6554 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWER);
  }
#line 11758 "parser.c" /* yacc.c:1646  */
    break;

  case 831:
#line 6558 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 11768 "parser.c" /* yacc.c:1646  */
    break;

  case 832:
#line 6564 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_NO_ECHO);
  }
#line 11776 "parser.c" /* yacc.c:1646  */
    break;

  case 833:
#line 6568 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
#line 11784 "parser.c" /* yacc.c:1646  */
    break;

  case 834:
#line 6572 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, (yyvsp[0]), NULL, COB_SCREEN_PROMPT);
  }
#line 11792 "parser.c" /* yacc.c:1646  */
    break;

  case 835:
#line 6576 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_PROMPT);
  }
#line 11800 "parser.c" /* yacc.c:1646  */
    break;

  case 836:
#line 6580 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REQUIRED);
  }
#line 11808 "parser.c" /* yacc.c:1646  */
    break;

  case 837:
#line 6584 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
#line 11816 "parser.c" /* yacc.c:1646  */
    break;

  case 838:
#line 6588 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_SECURE);
  }
#line 11824 "parser.c" /* yacc.c:1646  */
    break;

  case 839:
#line 6592 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 11832 "parser.c" /* yacc.c:1646  */
    break;

  case 840:
#line 6596 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 11840 "parser.c" /* yacc.c:1646  */
    break;

  case 841:
#line 6600 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
#line 11848 "parser.c" /* yacc.c:1646  */
    break;

  case 842:
#line 6604 "parser.y" /* yacc.c:1646  */
    {
	if (cb_accept_update) {
		remove_attrib (COB_SCREEN_UPDATE);
	}
  }
#line 11858 "parser.c" /* yacc.c:1646  */
    break;

  case 843:
#line 6610 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
  }
#line 11866 "parser.c" /* yacc.c:1646  */
    break;

  case 844:
#line 6614 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPPER);
  }
#line 11874 "parser.c" /* yacc.c:1646  */
    break;

  case 845:
#line 6618 "parser.y" /* yacc.c:1646  */
    {
	check_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, NULL, 0);
  }
#line 11882 "parser.c" /* yacc.c:1646  */
    break;

  case 846:
#line 6622 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 11890 "parser.c" /* yacc.c:1646  */
    break;

  case 847:
#line 6626 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, 0);
  }
#line 11898 "parser.c" /* yacc.c:1646  */
    break;

  case 848:
#line 6630 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
#line 11906 "parser.c" /* yacc.c:1646  */
    break;

  case 849:
#line 6634 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, (yyvsp[0]), NULL, NULL, 0);
  }
#line 11914 "parser.c" /* yacc.c:1646  */
    break;

  case 852:
#line 6646 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  }
#line 11922 "parser.c" /* yacc.c:1646  */
    break;

  case 853:
#line 6650 "parser.y" /* yacc.c:1646  */
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
#line 11937 "parser.c" /* yacc.c:1646  */
    break;

  case 854:
#line 6667 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ADD", TERM_ADD);
  }
#line 11945 "parser.c" /* yacc.c:1646  */
    break;

  case 856:
#line 6676 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '+', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 11953 "parser.c" /* yacc.c:1646  */
    break;

  case 857:
#line 6680 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list ((yyvsp[-4]), '+'));
  }
#line 11961 "parser.c" /* yacc.c:1646  */
    break;

  case 858:
#line 6684 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 11969 "parser.c" /* yacc.c:1646  */
    break;

  case 860:
#line 6691 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11977 "parser.c" /* yacc.c:1646  */
    break;

  case 861:
#line 6698 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  }
#line 11985 "parser.c" /* yacc.c:1646  */
    break;

  case 862:
#line 6702 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  }
#line 11993 "parser.c" /* yacc.c:1646  */
    break;

  case 863:
#line 6712 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  }
#line 12002 "parser.c" /* yacc.c:1646  */
    break;

  case 865:
#line 6721 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_allocate ((yyvsp[-2]), (yyvsp[0]), NULL, (yyvsp[-1]));
  }
#line 12010 "parser.c" /* yacc.c:1646  */
    break;

  case 866:
#line 6725 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		cb_error_x (CB_TREE (current_statement),
			    _("ALLOCATE CHARACTERS requires RETURNING clause"));
	} else {
		cb_emit_allocate (NULL, (yyvsp[0]), (yyvsp[-3]), (yyvsp[-1]));
	}
  }
#line 12023 "parser.c" /* yacc.c:1646  */
    break;

  case 867:
#line 6736 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 12029 "parser.c" /* yacc.c:1646  */
    break;

  case 868:
#line 6737 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12035 "parser.c" /* yacc.c:1646  */
    break;

  case 869:
#line 6745 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER statement");
  }
#line 12044 "parser.c" /* yacc.c:1646  */
    break;

  case 873:
#line 6759 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_alter ((yyvsp[-3]), (yyvsp[0]));
  }
#line 12052 "parser.c" /* yacc.c:1646  */
    break;

  case 876:
#line 6771 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
	call_nothing = 0;
  }
#line 12062 "parser.c" /* yacc.c:1646  */
    break;

  case 878:
#line 6787 "parser.y" /* yacc.c:1646  */
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
#line 12085 "parser.c" /* yacc.c:1646  */
    break;

  case 879:
#line 6809 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 12094 "parser.c" /* yacc.c:1646  */
    break;

  case 880:
#line 6814 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STATIC_LINK);
	cobc_cs_check = 0;
  }
#line 12103 "parser.c" /* yacc.c:1646  */
    break;

  case 881:
#line 6819 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  }
#line 12112 "parser.c" /* yacc.c:1646  */
    break;

  case 882:
#line 6824 "parser.y" /* yacc.c:1646  */
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
#line 12133 "parser.c" /* yacc.c:1646  */
    break;

  case 883:
#line 6844 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12141 "parser.c" /* yacc.c:1646  */
    break;

  case 884:
#line 6848 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 12150 "parser.c" /* yacc.c:1646  */
    break;

  case 885:
#line 6853 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error_x (CB_TREE (current_statement),
			    _("Number of parameters exceeds maximum %d"),
			    COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 12163 "parser.c" /* yacc.c:1646  */
    break;

  case 886:
#line 6864 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12169 "parser.c" /* yacc.c:1646  */
    break;

  case 887:
#line 6866 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 12175 "parser.c" /* yacc.c:1646  */
    break;

  case 888:
#line 6871 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error_x (CB_TREE (current_statement),
			    _("OMITTED only allowed with BY REFERENCE"));
	}
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_null);
  }
#line 12187 "parser.c" /* yacc.c:1646  */
    break;

  case 889:
#line 6879 "parser.y" /* yacc.c:1646  */
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
#line 12213 "parser.c" /* yacc.c:1646  */
    break;

  case 891:
#line 6905 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 12221 "parser.c" /* yacc.c:1646  */
    break;

  case 892:
#line 6909 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY CONTENT");
	} else {
		call_mode = CB_CALL_BY_CONTENT;
	}
  }
#line 12234 "parser.c" /* yacc.c:1646  */
    break;

  case 893:
#line 6918 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 12247 "parser.c" /* yacc.c:1646  */
    break;

  case 894:
#line 6930 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12255 "parser.c" /* yacc.c:1646  */
    break;

  case 895:
#line 6934 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12263 "parser.c" /* yacc.c:1646  */
    break;

  case 896:
#line 6938 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 12271 "parser.c" /* yacc.c:1646  */
    break;

  case 897:
#line 6942 "parser.y" /* yacc.c:1646  */
    {
	call_nothing = CB_CONV_NO_RET_UPD;
	(yyval) = cb_null;
  }
#line 12280 "parser.c" /* yacc.c:1646  */
    break;

  case 898:
#line 6947 "parser.y" /* yacc.c:1646  */
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
#line 12304 "parser.c" /* yacc.c:1646  */
    break;

  case 903:
#line 6980 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12312 "parser.c" /* yacc.c:1646  */
    break;

  case 904:
#line 6985 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12320 "parser.c" /* yacc.c:1646  */
    break;

  case 905:
#line 6990 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_call_overflow, "ON OVERFLOW clause");
	(yyval) = (yyvsp[0]);
  }
#line 12329 "parser.c" /* yacc.c:1646  */
    break;

  case 906:
#line 6998 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12337 "parser.c" /* yacc.c:1646  */
    break;

  case 907:
#line 7003 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12345 "parser.c" /* yacc.c:1646  */
    break;

  case 908:
#line 7010 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  }
#line 12353 "parser.c" /* yacc.c:1646  */
    break;

  case 909:
#line 7014 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  }
#line 12361 "parser.c" /* yacc.c:1646  */
    break;

  case 910:
#line 7024 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CANCEL", 0);
  }
#line 12369 "parser.c" /* yacc.c:1646  */
    break;

  case 912:
#line 7032 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 12377 "parser.c" /* yacc.c:1646  */
    break;

  case 913:
#line 7036 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 12385 "parser.c" /* yacc.c:1646  */
    break;

  case 914:
#line 7046 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CLOSE", 0);
  }
#line 12393 "parser.c" /* yacc.c:1646  */
    break;

  case 916:
#line 7054 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12402 "parser.c" /* yacc.c:1646  */
    break;

  case 917:
#line 7059 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12411 "parser.c" /* yacc.c:1646  */
    break;

  case 918:
#line 7066 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NORMAL); }
#line 12417 "parser.c" /* yacc.c:1646  */
    break;

  case 919:
#line 7067 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT); }
#line 12423 "parser.c" /* yacc.c:1646  */
    break;

  case 920:
#line 7068 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); }
#line 12429 "parser.c" /* yacc.c:1646  */
    break;

  case 921:
#line 7069 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); }
#line 12435 "parser.c" /* yacc.c:1646  */
    break;

  case 922:
#line 7070 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_LOCK); }
#line 12441 "parser.c" /* yacc.c:1646  */
    break;

  case 923:
#line 7078 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
#line 12449 "parser.c" /* yacc.c:1646  */
    break;

  case 925:
#line 7087 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-3]), 0, (yyvsp[-1]));
  }
#line 12457 "parser.c" /* yacc.c:1646  */
    break;

  case 926:
#line 7094 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  }
#line 12465 "parser.c" /* yacc.c:1646  */
    break;

  case 927:
#line 7098 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  }
#line 12473 "parser.c" /* yacc.c:1646  */
    break;

  case 928:
#line 7108 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
#line 12482 "parser.c" /* yacc.c:1646  */
    break;

  case 929:
#line 7119 "parser.y" /* yacc.c:1646  */
    {
	size_t	save_unreached;

	/* Do not check unreached for CONTINUE */
	save_unreached = check_unreached;
	check_unreached = 0;
	begin_statement ("CONTINUE", 0);
	cb_emit_continue ();
	check_unreached = (unsigned int) save_unreached;
  }
#line 12497 "parser.c" /* yacc.c:1646  */
    break;

  case 930:
#line 7136 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DELETE", TERM_DELETE);
  }
#line 12505 "parser.c" /* yacc.c:1646  */
    break;

  case 932:
#line 7145 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_delete ((yyvsp[-2]));
  }
#line 12513 "parser.c" /* yacc.c:1646  */
    break;

  case 934:
#line 7153 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 12522 "parser.c" /* yacc.c:1646  */
    break;

  case 935:
#line 7158 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 12531 "parser.c" /* yacc.c:1646  */
    break;

  case 936:
#line 7166 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  }
#line 12539 "parser.c" /* yacc.c:1646  */
    break;

  case 937:
#line 7170 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  }
#line 12547 "parser.c" /* yacc.c:1646  */
    break;

  case 938:
#line 7180 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
  }
#line 12556 "parser.c" /* yacc.c:1646  */
    break;

  case 940:
#line 7190 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_name ((yyvsp[-2]));
  }
#line 12564 "parser.c" /* yacc.c:1646  */
    break;

  case 941:
#line 7194 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_value ((yyvsp[-2]));
  }
#line 12572 "parser.c" /* yacc.c:1646  */
    break;

  case 942:
#line 7198 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arg_number ((yyvsp[-2]));
  }
#line 12580 "parser.c" /* yacc.c:1646  */
    break;

  case 943:
#line 7202 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_command_line ((yyvsp[-2]));
  }
#line 12588 "parser.c" /* yacc.c:1646  */
    break;

  case 945:
#line 7211 "parser.y" /* yacc.c:1646  */
    {
	  emit_default_displays_for_x_list ((struct cb_list *) (yyvsp[0]));
  }
#line 12596 "parser.c" /* yacc.c:1646  */
    break;

  case 946:
#line 7215 "parser.y" /* yacc.c:1646  */
    {
	  emit_default_displays_for_x_list ((struct cb_list *) (yyvsp[0]));
  }
#line 12604 "parser.c" /* yacc.c:1646  */
    break;

  case 949:
#line 7227 "parser.y" /* yacc.c:1646  */
    {
	check_duplicate = 0;
	check_line_col_duplicate = 0;
  	advancing_value = cb_int1;
	upon_value = NULL;
	line_column = NULL;
  }
#line 12616 "parser.c" /* yacc.c:1646  */
    break;

  case 950:
#line 7235 "parser.y" /* yacc.c:1646  */
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
#line 12674 "parser.c" /* yacc.c:1646  */
    break;

  case 951:
#line 7292 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12682 "parser.c" /* yacc.c:1646  */
    break;

  case 952:
#line 7296 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("DISPLAY OMITTED");
	(yyval) = cb_null;
  }
#line 12691 "parser.c" /* yacc.c:1646  */
    break;

  case 955:
#line 7309 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("UPON", SYN_CLAUSE_1, &check_duplicate);
  }
#line 12699 "parser.c" /* yacc.c:1646  */
    break;

  case 956:
#line 7313 "parser.y" /* yacc.c:1646  */
    {
 	check_repeated ("NO ADVANCING", SYN_CLAUSE_2, &check_duplicate);
	advancing_value = cb_int0;
  }
#line 12708 "parser.c" /* yacc.c:1646  */
    break;

  case 957:
#line 7318 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("MODE IS BLOCK", SYN_CLAUSE_3, &check_duplicate);
  }
#line 12716 "parser.c" /* yacc.c:1646  */
    break;

  case 960:
#line 7327 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_build_display_mnemonic ((yyvsp[0]));
  }
#line 12724 "parser.c" /* yacc.c:1646  */
    break;

  case 961:
#line 7331 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_build_display_name ((yyvsp[0]));
  }
#line 12732 "parser.c" /* yacc.c:1646  */
    break;

  case 962:
#line 7335 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_int0;
  }
#line 12740 "parser.c" /* yacc.c:1646  */
    break;

  case 966:
#line 7348 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
#line 12748 "parser.c" /* yacc.c:1646  */
    break;

  case 967:
#line 7352 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "BLANK LINE", COB_SCREEN_BLANK_LINE,
				     "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
#line 12758 "parser.c" /* yacc.c:1646  */
    break;

  case 968:
#line 7358 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN,
				     "BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
#line 12768 "parser.c" /* yacc.c:1646  */
    break;

  case 969:
#line 7364 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
#line 12776 "parser.c" /* yacc.c:1646  */
    break;

  case 970:
#line 7368 "parser.y" /* yacc.c:1646  */
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
#line 12784 "parser.c" /* yacc.c:1646  */
    break;

  case 971:
#line 7372 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "ERASE EOL", COB_SCREEN_ERASE_EOL,
				     "ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
#line 12794 "parser.c" /* yacc.c:1646  */
    break;

  case 972:
#line 7378 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "ERASE EOS", COB_SCREEN_ERASE_EOS,
				     "ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
#line 12804 "parser.c" /* yacc.c:1646  */
    break;

  case 973:
#line 7384 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 12814 "parser.c" /* yacc.c:1646  */
    break;

  case 974:
#line 7390 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 12824 "parser.c" /* yacc.c:1646  */
    break;

  case 975:
#line 7396 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
#line 12832 "parser.c" /* yacc.c:1646  */
    break;

  case 976:
#line 7400 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
#line 12840 "parser.c" /* yacc.c:1646  */
    break;

  case 977:
#line 7404 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 12848 "parser.c" /* yacc.c:1646  */
    break;

  case 978:
#line 7408 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
#line 12856 "parser.c" /* yacc.c:1646  */
    break;

  case 979:
#line 7412 "parser.y" /* yacc.c:1646  */
    {
	check_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, NULL, 0);
  }
#line 12864 "parser.c" /* yacc.c:1646  */
    break;

  case 980:
#line 7416 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 12872 "parser.c" /* yacc.c:1646  */
    break;

  case 981:
#line 7420 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, 0);
  }
#line 12880 "parser.c" /* yacc.c:1646  */
    break;

  case 982:
#line 7424 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
#line 12888 "parser.c" /* yacc.c:1646  */
    break;

  case 983:
#line 7431 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  }
#line 12896 "parser.c" /* yacc.c:1646  */
    break;

  case 984:
#line 7435 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  }
#line 12904 "parser.c" /* yacc.c:1646  */
    break;

  case 985:
#line 7445 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
#line 12912 "parser.c" /* yacc.c:1646  */
    break;

  case 987:
#line 7454 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '/', (yyvsp[-3]));
  }
#line 12920 "parser.c" /* yacc.c:1646  */
    break;

  case 988:
#line 7458 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-3]), '/', (yyvsp[-5])));
  }
#line 12928 "parser.c" /* yacc.c:1646  */
    break;

  case 989:
#line 7462 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '/', (yyvsp[-3])));
  }
#line 12936 "parser.c" /* yacc.c:1646  */
    break;

  case 990:
#line 7466 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-5]), (yyvsp[-7]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 12944 "parser.c" /* yacc.c:1646  */
    break;

  case 991:
#line 7470 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-7]), (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 12952 "parser.c" /* yacc.c:1646  */
    break;

  case 992:
#line 7477 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  }
#line 12960 "parser.c" /* yacc.c:1646  */
    break;

  case 993:
#line 7481 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  }
#line 12968 "parser.c" /* yacc.c:1646  */
    break;

  case 994:
#line 7491 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
  }
#line 12977 "parser.c" /* yacc.c:1646  */
    break;

  case 996:
#line 7500 "parser.y" /* yacc.c:1646  */
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
#line 12993 "parser.c" /* yacc.c:1646  */
    break;

  case 997:
#line 7518 "parser.y" /* yacc.c:1646  */
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
#line 13016 "parser.c" /* yacc.c:1646  */
    break;

  case 999:
#line 7542 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_evaluate ((yyvsp[-1]), (yyvsp[0]));
	eval_level--;
  }
#line 13025 "parser.c" /* yacc.c:1646  */
    break;

  case 1000:
#line 7549 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13031 "parser.c" /* yacc.c:1646  */
    break;

  case 1001:
#line 7551 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 13037 "parser.c" /* yacc.c:1646  */
    break;

  case 1002:
#line 7556 "parser.y" /* yacc.c:1646  */
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
#line 13052 "parser.c" /* yacc.c:1646  */
    break;

  case 1003:
#line 7567 "parser.y" /* yacc.c:1646  */
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
#line 13067 "parser.c" /* yacc.c:1646  */
    break;

  case 1004:
#line 7578 "parser.y" /* yacc.c:1646  */
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
#line 13082 "parser.c" /* yacc.c:1646  */
    break;

  case 1005:
#line 7592 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 13090 "parser.c" /* yacc.c:1646  */
    break;

  case 1006:
#line 7596 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13098 "parser.c" /* yacc.c:1646  */
    break;

  case 1007:
#line 7602 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13104 "parser.c" /* yacc.c:1646  */
    break;

  case 1008:
#line 7604 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 13110 "parser.c" /* yacc.c:1646  */
    break;

  case 1009:
#line 7610 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), (yyvsp[-1]));
	eval_inc2 = 0;
  }
#line 13119 "parser.c" /* yacc.c:1646  */
    break;

  case 1010:
#line 7619 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), NULL);
	eval_inc2 = 0;
  }
#line 13128 "parser.c" /* yacc.c:1646  */
    break;

  case 1011:
#line 7627 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
	eval_inc2 = 0;
  }
#line 13137 "parser.c" /* yacc.c:1646  */
    break;

  case 1012:
#line 7633 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
	eval_inc2 = 0;
  }
#line 13146 "parser.c" /* yacc.c:1646  */
    break;

  case 1013:
#line 7640 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13152 "parser.c" /* yacc.c:1646  */
    break;

  case 1014:
#line 7642 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 13158 "parser.c" /* yacc.c:1646  */
    break;

  case 1015:
#line 7647 "parser.y" /* yacc.c:1646  */
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
#line 13224 "parser.c" /* yacc.c:1646  */
    break;

  case 1016:
#line 7708 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_any; eval_inc2++; }
#line 13230 "parser.c" /* yacc.c:1646  */
    break;

  case 1017:
#line 7709 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; eval_inc2++; }
#line 13236 "parser.c" /* yacc.c:1646  */
    break;

  case 1018:
#line 7710 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_false; eval_inc2++; }
#line 13242 "parser.c" /* yacc.c:1646  */
    break;

  case 1019:
#line 7714 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13248 "parser.c" /* yacc.c:1646  */
    break;

  case 1020:
#line 7715 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13254 "parser.c" /* yacc.c:1646  */
    break;

  case 1021:
#line 7720 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  }
#line 13262 "parser.c" /* yacc.c:1646  */
    break;

  case 1022:
#line 7724 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  }
#line 13270 "parser.c" /* yacc.c:1646  */
    break;

  case 1023:
#line 7734 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
#line 13279 "parser.c" /* yacc.c:1646  */
    break;

  case 1024:
#line 7739 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 13287 "parser.c" /* yacc.c:1646  */
    break;

  case 1026:
#line 7747 "parser.y" /* yacc.c:1646  */
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
#line 13312 "parser.c" /* yacc.c:1646  */
    break;

  case 1027:
#line 7768 "parser.y" /* yacc.c:1646  */
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
#line 13330 "parser.c" /* yacc.c:1646  */
    break;

  case 1028:
#line 7782 "parser.y" /* yacc.c:1646  */
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
#line 13356 "parser.c" /* yacc.c:1646  */
    break;

  case 1029:
#line 7804 "parser.y" /* yacc.c:1646  */
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
#line 13382 "parser.c" /* yacc.c:1646  */
    break;

  case 1030:
#line 7826 "parser.y" /* yacc.c:1646  */
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
#line 13406 "parser.c" /* yacc.c:1646  */
    break;

  case 1031:
#line 7846 "parser.y" /* yacc.c:1646  */
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
#line 13430 "parser.c" /* yacc.c:1646  */
    break;

  case 1032:
#line 7868 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13436 "parser.c" /* yacc.c:1646  */
    break;

  case 1033:
#line 7869 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13442 "parser.c" /* yacc.c:1646  */
    break;

  case 1034:
#line 7877 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
#line 13451 "parser.c" /* yacc.c:1646  */
    break;

  case 1036:
#line 7886 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_free ((yyvsp[0]));
  }
#line 13459 "parser.c" /* yacc.c:1646  */
    break;

  case 1037:
#line 7896 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GENERATE", 0);
	PENDING("GENERATE");
  }
#line 13468 "parser.c" /* yacc.c:1646  */
    break;

  case 1040:
#line 7912 "parser.y" /* yacc.c:1646  */
    {
	if (!current_paragraph->flag_statement) {
		current_paragraph->flag_first_is_goto = 1;
	}
	begin_statement ("GO TO", 0);
	save_debug = start_debug;
	start_debug = 0;
  }
#line 13481 "parser.c" /* yacc.c:1646  */
    break;

  case 1042:
#line 7925 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_goto ((yyvsp[-1]), (yyvsp[0]));
	start_debug = save_debug;
  }
#line 13490 "parser.c" /* yacc.c:1646  */
    break;

  case 1043:
#line 7933 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 1;
	(yyval) = NULL;
  }
#line 13499 "parser.c" /* yacc.c:1646  */
    break;

  case 1044:
#line 7938 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	(yyval) = (yyvsp[0]);
  }
#line 13508 "parser.c" /* yacc.c:1646  */
    break;

  case 1045:
#line 7949 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GOBACK", 0);
	check_unreached = 1;
	if ((yyvsp[0]) != NULL) {
		cb_emit_move ((yyvsp[0]), CB_LIST_INIT (current_program->cb_return_code));
	}
	cb_emit_exit (1U);
  }
#line 13521 "parser.c" /* yacc.c:1646  */
    break;

  case 1046:
#line 7964 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("IF", TERM_IF);
  }
#line 13529 "parser.c" /* yacc.c:1646  */
    break;

  case 1048:
#line 7973 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 13537 "parser.c" /* yacc.c:1646  */
    break;

  case 1049:
#line 7977 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[0]));
  }
#line 13545 "parser.c" /* yacc.c:1646  */
    break;

  case 1050:
#line 7981 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[0]), NULL);
  }
#line 13553 "parser.c" /* yacc.c:1646  */
    break;

  case 1051:
#line 7988 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  }
#line 13561 "parser.c" /* yacc.c:1646  */
    break;

  case 1052:
#line 7992 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  }
#line 13569 "parser.c" /* yacc.c:1646  */
    break;

  case 1053:
#line 8002 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIALIZE", 0);
  }
#line 13577 "parser.c" /* yacc.c:1646  */
    break;

  case 1055:
#line 8011 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_initialize ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 13585 "parser.c" /* yacc.c:1646  */
    break;

  case 1056:
#line 8017 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13591 "parser.c" /* yacc.c:1646  */
    break;

  case 1057:
#line 8018 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 13597 "parser.c" /* yacc.c:1646  */
    break;

  case 1058:
#line 8022 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13603 "parser.c" /* yacc.c:1646  */
    break;

  case 1059:
#line 8023 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 13609 "parser.c" /* yacc.c:1646  */
    break;

  case 1060:
#line 8024 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); }
#line 13615 "parser.c" /* yacc.c:1646  */
    break;

  case 1061:
#line 8029 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13623 "parser.c" /* yacc.c:1646  */
    break;

  case 1062:
#line 8033 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13631 "parser.c" /* yacc.c:1646  */
    break;

  case 1063:
#line 8040 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13639 "parser.c" /* yacc.c:1646  */
    break;

  case 1064:
#line 8045 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
  }
#line 13647 "parser.c" /* yacc.c:1646  */
    break;

  case 1065:
#line 8052 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[0]));
  }
#line 13655 "parser.c" /* yacc.c:1646  */
    break;

  case 1066:
#line 8058 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); }
#line 13661 "parser.c" /* yacc.c:1646  */
    break;

  case 1067:
#line 8059 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); }
#line 13667 "parser.c" /* yacc.c:1646  */
    break;

  case 1068:
#line 8060 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); }
#line 13673 "parser.c" /* yacc.c:1646  */
    break;

  case 1069:
#line 8061 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
#line 13679 "parser.c" /* yacc.c:1646  */
    break;

  case 1070:
#line 8062 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
#line 13685 "parser.c" /* yacc.c:1646  */
    break;

  case 1071:
#line 8063 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); }
#line 13691 "parser.c" /* yacc.c:1646  */
    break;

  case 1072:
#line 8064 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
#line 13697 "parser.c" /* yacc.c:1646  */
    break;

  case 1073:
#line 8069 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13705 "parser.c" /* yacc.c:1646  */
    break;

  case 1074:
#line 8073 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_true;
  }
#line 13713 "parser.c" /* yacc.c:1646  */
    break;

  case 1075:
#line 8082 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIATE", 0);
	PENDING("INITIATE");
  }
#line 13722 "parser.c" /* yacc.c:1646  */
    break;

  case 1077:
#line 8091 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 13732 "parser.c" /* yacc.c:1646  */
    break;

  case 1078:
#line 8097 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 13742 "parser.c" /* yacc.c:1646  */
    break;

  case 1079:
#line 8108 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
#line 13751 "parser.c" /* yacc.c:1646  */
    break;

  case 1082:
#line 8121 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13759 "parser.c" /* yacc.c:1646  */
    break;

  case 1083:
#line 8125 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13767 "parser.c" /* yacc.c:1646  */
    break;

  case 1084:
#line 8129 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13775 "parser.c" /* yacc.c:1646  */
    break;

  case 1089:
#line 8145 "parser.y" /* yacc.c:1646  */
    {
	cb_init_tallying ();
  }
#line 13783 "parser.c" /* yacc.c:1646  */
    break;

  case 1090:
#line 8149 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_inspect ((yyvsp[-3]), (yyvsp[0]), cb_int0, 0);
	(yyval) = (yyvsp[-3]);
  }
#line 13792 "parser.c" /* yacc.c:1646  */
    break;

  case 1091:
#line 8159 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_inspect ((yyvsp[-2]), (yyvsp[0]), cb_int1, 1);
	inspect_keyword = 0;
  }
#line 13801 "parser.c" /* yacc.c:1646  */
    break;

  case 1092:
#line 8169 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
	cb_emit_inspect ((yyvsp[-5]), x, cb_int0, 2);
  }
#line 13811 "parser.c" /* yacc.c:1646  */
    break;

  case 1093:
#line 8177 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13817 "parser.c" /* yacc.c:1646  */
    break;

  case 1094:
#line 8178 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 13823 "parser.c" /* yacc.c:1646  */
    break;

  case 1095:
#line 8182 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_data ((yyvsp[-1])); }
#line 13829 "parser.c" /* yacc.c:1646  */
    break;

  case 1096:
#line 8183 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_characters ((yyvsp[0])); }
#line 13835 "parser.c" /* yacc.c:1646  */
    break;

  case 1097:
#line 8184 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_all (); }
#line 13841 "parser.c" /* yacc.c:1646  */
    break;

  case 1098:
#line 8185 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_leading (); }
#line 13847 "parser.c" /* yacc.c:1646  */
    break;

  case 1099:
#line 8186 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_trailing (); }
#line 13853 "parser.c" /* yacc.c:1646  */
    break;

  case 1100:
#line 8187 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_value ((yyvsp[-1]), (yyvsp[0])); }
#line 13859 "parser.c" /* yacc.c:1646  */
    break;

  case 1101:
#line 8191 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13865 "parser.c" /* yacc.c:1646  */
    break;

  case 1102:
#line 8192 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 13871 "parser.c" /* yacc.c:1646  */
    break;

  case 1103:
#line 8197 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[-1]), (yyvsp[0]));
	inspect_keyword = 0;
  }
#line 13880 "parser.c" /* yacc.c:1646  */
    break;

  case 1104:
#line 8202 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13888 "parser.c" /* yacc.c:1646  */
    break;

  case 1105:
#line 8208 "parser.y" /* yacc.c:1646  */
    { /* Nothing */ }
#line 13894 "parser.c" /* yacc.c:1646  */
    break;

  case 1106:
#line 8209 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 1; }
#line 13900 "parser.c" /* yacc.c:1646  */
    break;

  case 1107:
#line 8210 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 2; }
#line 13906 "parser.c" /* yacc.c:1646  */
    break;

  case 1108:
#line 8211 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 3; }
#line 13912 "parser.c" /* yacc.c:1646  */
    break;

  case 1109:
#line 8212 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 4; }
#line 13918 "parser.c" /* yacc.c:1646  */
    break;

  case 1110:
#line 8217 "parser.y" /* yacc.c:1646  */
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
#line 13944 "parser.c" /* yacc.c:1646  */
    break;

  case 1111:
#line 8244 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_inspect_region_start ();
  }
#line 13952 "parser.c" /* yacc.c:1646  */
    break;

  case 1112:
#line 8248 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13960 "parser.c" /* yacc.c:1646  */
    break;

  case 1113:
#line 8255 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-3]), CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[0])));
  }
#line 13968 "parser.c" /* yacc.c:1646  */
    break;

  case 1114:
#line 8259 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-3]), CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[0])));
  }
#line 13976 "parser.c" /* yacc.c:1646  */
    break;

  case 1115:
#line 8268 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
#line 13985 "parser.c" /* yacc.c:1646  */
    break;

  case 1117:
#line 8280 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MOVE", 0);
  }
#line 13993 "parser.c" /* yacc.c:1646  */
    break;

  case 1119:
#line 8288 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14001 "parser.c" /* yacc.c:1646  */
    break;

  case 1120:
#line 8292 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move_corresponding ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14009 "parser.c" /* yacc.c:1646  */
    break;

  case 1121:
#line 8302 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
#line 14017 "parser.c" /* yacc.c:1646  */
    break;

  case 1123:
#line 8311 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '*', (yyvsp[-3]));
  }
#line 14025 "parser.c" /* yacc.c:1646  */
    break;

  case 1124:
#line 8315 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '*', (yyvsp[-3])));
  }
#line 14033 "parser.c" /* yacc.c:1646  */
    break;

  case 1125:
#line 8322 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  }
#line 14041 "parser.c" /* yacc.c:1646  */
    break;

  case 1126:
#line 8326 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  }
#line 14049 "parser.c" /* yacc.c:1646  */
    break;

  case 1127:
#line 8336 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("OPEN", 0);
  }
#line 14057 "parser.c" /* yacc.c:1646  */
    break;

  case 1129:
#line 8344 "parser.y" /* yacc.c:1646  */
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
#line 14082 "parser.c" /* yacc.c:1646  */
    break;

  case 1130:
#line 8365 "parser.y" /* yacc.c:1646  */
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
#line 14107 "parser.c" /* yacc.c:1646  */
    break;

  case 1131:
#line 8388 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_INPUT); }
#line 14113 "parser.c" /* yacc.c:1646  */
    break;

  case 1132:
#line 8389 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_OUTPUT); }
#line 14119 "parser.c" /* yacc.c:1646  */
    break;

  case 1133:
#line 8390 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_I_O); }
#line 14125 "parser.c" /* yacc.c:1646  */
    break;

  case 1134:
#line 8391 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_EXTEND); }
#line 14131 "parser.c" /* yacc.c:1646  */
    break;

  case 1135:
#line 8395 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14137 "parser.c" /* yacc.c:1646  */
    break;

  case 1136:
#line 8396 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14143 "parser.c" /* yacc.c:1646  */
    break;

  case 1137:
#line 8400 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14149 "parser.c" /* yacc.c:1646  */
    break;

  case 1138:
#line 8401 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14155 "parser.c" /* yacc.c:1646  */
    break;

  case 1139:
#line 8402 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 14161 "parser.c" /* yacc.c:1646  */
    break;

  case 1140:
#line 8404 "parser.y" /* yacc.c:1646  */
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  }
#line 14170 "parser.c" /* yacc.c:1646  */
    break;

  case 1141:
#line 8415 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 14181 "parser.c" /* yacc.c:1646  */
    break;

  case 1143:
#line 8426 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[0]), (yyvsp[-1]));
	start_debug = save_debug;
  }
#line 14190 "parser.c" /* yacc.c:1646  */
    break;

  case 1144:
#line 8431 "parser.y" /* yacc.c:1646  */
    {
	CB_ADD_TO_CHAIN ((yyvsp[0]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
  }
#line 14200 "parser.c" /* yacc.c:1646  */
    break;

  case 1145:
#line 8437 "parser.y" /* yacc.c:1646  */
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 14209 "parser.c" /* yacc.c:1646  */
    break;

  case 1146:
#line 8442 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[-1]), NULL);
	start_debug = save_debug;
  }
#line 14218 "parser.c" /* yacc.c:1646  */
    break;

  case 1147:
#line 8450 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-4) - (0)]), PERFORM);
	}
  }
#line 14230 "parser.c" /* yacc.c:1646  */
    break;

  case 1148:
#line 8458 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  }
#line 14238 "parser.c" /* yacc.c:1646  */
    break;

  case 1149:
#line 8465 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  }
#line 14246 "parser.c" /* yacc.c:1646  */
    break;

  case 1150:
#line 8469 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-2) - (1)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-2) - (1)]), PERFORM);
	}
	/* Put the dot token back into the stack for reparse */
	cb_unput_dot ();
  }
#line 14260 "parser.c" /* yacc.c:1646  */
    break;

  case 1151:
#line 8482 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[0]));
  }
#line 14271 "parser.c" /* yacc.c:1646  */
    break;

  case 1152:
#line 8489 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $3 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[-2]))->flag_decl_ok = 1;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14283 "parser.c" /* yacc.c:1646  */
    break;

  case 1153:
#line 8500 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_once (NULL);
  }
#line 14291 "parser.c" /* yacc.c:1646  */
    break;

  case 1154:
#line 8504 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_times ((yyvsp[-1]));
	current_program->loop_counter++;
  }
#line 14300 "parser.c" /* yacc.c:1646  */
    break;

  case 1155:
#line 8509 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_forever (NULL);
  }
#line 14308 "parser.c" /* yacc.c:1646  */
    break;

  case 1156:
#line 8513 "parser.y" /* yacc.c:1646  */
    {
	cb_tree varying;

	if (!(yyvsp[0])) {
		(yyval) = cb_build_perform_forever (NULL);
	} else {
		varying = CB_LIST_INIT (cb_build_perform_varying (NULL, NULL, NULL, (yyvsp[0])));
		(yyval) = cb_build_perform_until ((yyvsp[-2]), varying);
	}
  }
#line 14323 "parser.c" /* yacc.c:1646  */
    break;

  case 1157:
#line 8524 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_until ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14331 "parser.c" /* yacc.c:1646  */
    break;

  case 1158:
#line 8530 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 14337 "parser.c" /* yacc.c:1646  */
    break;

  case 1159:
#line 8531 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14343 "parser.c" /* yacc.c:1646  */
    break;

  case 1160:
#line 8535 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14349 "parser.c" /* yacc.c:1646  */
    break;

  case 1161:
#line 8536 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14355 "parser.c" /* yacc.c:1646  */
    break;

  case 1162:
#line 8539 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 14361 "parser.c" /* yacc.c:1646  */
    break;

  case 1163:
#line 8541 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 14367 "parser.c" /* yacc.c:1646  */
    break;

  case 1164:
#line 8546 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_varying ((yyvsp[-6]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 14375 "parser.c" /* yacc.c:1646  */
    break;

  case 1165:
#line 8556 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READ", TERM_READ);
  }
#line 14383 "parser.c" /* yacc.c:1646  */
    break;

  case 1167:
#line 8565 "parser.y" /* yacc.c:1646  */
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
#line 14411 "parser.c" /* yacc.c:1646  */
    break;

  case 1168:
#line 8591 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14417 "parser.c" /* yacc.c:1646  */
    break;

  case 1169:
#line 8592 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14423 "parser.c" /* yacc.c:1646  */
    break;

  case 1170:
#line 8597 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14431 "parser.c" /* yacc.c:1646  */
    break;

  case 1171:
#line 8601 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int3;
  }
#line 14439 "parser.c" /* yacc.c:1646  */
    break;

  case 1172:
#line 8605 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 14447 "parser.c" /* yacc.c:1646  */
    break;

  case 1173:
#line 8609 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 14455 "parser.c" /* yacc.c:1646  */
    break;

  case 1174:
#line 8613 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 14463 "parser.c" /* yacc.c:1646  */
    break;

  case 1175:
#line 8617 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int3;
  }
#line 14471 "parser.c" /* yacc.c:1646  */
    break;

  case 1176:
#line 8621 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int4;
  }
#line 14479 "parser.c" /* yacc.c:1646  */
    break;

  case 1177:
#line 8627 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14485 "parser.c" /* yacc.c:1646  */
    break;

  case 1178:
#line 8628 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14491 "parser.c" /* yacc.c:1646  */
    break;

  case 1181:
#line 8638 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  }
#line 14499 "parser.c" /* yacc.c:1646  */
    break;

  case 1182:
#line 8642 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  }
#line 14507 "parser.c" /* yacc.c:1646  */
    break;

  case 1183:
#line 8652 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
#line 14516 "parser.c" /* yacc.c:1646  */
    break;

  case 1184:
#line 8662 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RELEASE", 0);
  }
#line 14524 "parser.c" /* yacc.c:1646  */
    break;

  case 1186:
#line 8670 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_release ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14532 "parser.c" /* yacc.c:1646  */
    break;

  case 1187:
#line 8680 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
#line 14541 "parser.c" /* yacc.c:1646  */
    break;

  case 1188:
#line 8690 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RETURN", TERM_RETURN);
  }
#line 14549 "parser.c" /* yacc.c:1646  */
    break;

  case 1190:
#line 8699 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_return ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 14557 "parser.c" /* yacc.c:1646  */
    break;

  case 1191:
#line 8706 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  }
#line 14565 "parser.c" /* yacc.c:1646  */
    break;

  case 1192:
#line 8710 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  }
#line 14573 "parser.c" /* yacc.c:1646  */
    break;

  case 1193:
#line 8720 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 14584 "parser.c" /* yacc.c:1646  */
    break;

  case 1195:
#line 8732 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_rewrite ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
	start_debug = save_debug;
  }
#line 14593 "parser.c" /* yacc.c:1646  */
    break;

  case 1196:
#line 8740 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14601 "parser.c" /* yacc.c:1646  */
    break;

  case 1197:
#line 8744 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 14609 "parser.c" /* yacc.c:1646  */
    break;

  case 1198:
#line 8748 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 14617 "parser.c" /* yacc.c:1646  */
    break;

  case 1199:
#line 8755 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  }
#line 14625 "parser.c" /* yacc.c:1646  */
    break;

  case 1200:
#line 8759 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  }
#line 14633 "parser.c" /* yacc.c:1646  */
    break;

  case 1201:
#line 8769 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
#line 14642 "parser.c" /* yacc.c:1646  */
    break;

  case 1202:
#line 8780 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
#line 14650 "parser.c" /* yacc.c:1646  */
    break;

  case 1204:
#line 8789 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_search ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 14658 "parser.c" /* yacc.c:1646  */
    break;

  case 1205:
#line 8794 "parser.y" /* yacc.c:1646  */
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 14667 "parser.c" /* yacc.c:1646  */
    break;

  case 1206:
#line 8801 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14673 "parser.c" /* yacc.c:1646  */
    break;

  case 1207:
#line 8802 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14679 "parser.c" /* yacc.c:1646  */
    break;

  case 1208:
#line 8807 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14687 "parser.c" /* yacc.c:1646  */
    break;

  case 1209:
#line 8812 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14695 "parser.c" /* yacc.c:1646  */
    break;

  case 1210:
#line 8819 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 14703 "parser.c" /* yacc.c:1646  */
    break;

  case 1211:
#line 8823 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), (yyvsp[-1]));
  }
#line 14711 "parser.c" /* yacc.c:1646  */
    break;

  case 1212:
#line 8831 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_if_check_break ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14719 "parser.c" /* yacc.c:1646  */
    break;

  case 1213:
#line 8838 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  }
#line 14727 "parser.c" /* yacc.c:1646  */
    break;

  case 1214:
#line 8842 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  }
#line 14735 "parser.c" /* yacc.c:1646  */
    break;

  case 1215:
#line 8852 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SET", 0);
	setattr_val_on = 0;
	setattr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
#line 14746 "parser.c" /* yacc.c:1646  */
    break;

  case 1216:
#line 8859 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 14754 "parser.c" /* yacc.c:1646  */
    break;

  case 1224:
#line 8875 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 14760 "parser.c" /* yacc.c:1646  */
    break;

  case 1225:
#line 8876 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 14766 "parser.c" /* yacc.c:1646  */
    break;

  case 1226:
#line 8880 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 14772 "parser.c" /* yacc.c:1646  */
    break;

  case 1227:
#line 8881 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 14778 "parser.c" /* yacc.c:1646  */
    break;

  case 1228:
#line 8888 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_setenv ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14786 "parser.c" /* yacc.c:1646  */
    break;

  case 1229:
#line 8897 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_attribute ((yyvsp[-2]), setattr_val_on, setattr_val_off);
  }
#line 14794 "parser.c" /* yacc.c:1646  */
    break;

  case 1232:
#line 8909 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BELL);
  }
#line 14802 "parser.c" /* yacc.c:1646  */
    break;

  case 1233:
#line 8913 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BLINK);
  }
#line 14810 "parser.c" /* yacc.c:1646  */
    break;

  case 1234:
#line 8917 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_HIGHLIGHT);
	check_not_highlight_and_lowlight (setattr_val_on | setattr_val_off,
					  COB_SCREEN_HIGHLIGHT);
  }
#line 14820 "parser.c" /* yacc.c:1646  */
    break;

  case 1235:
#line 8923 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LOWLIGHT);
	check_not_highlight_and_lowlight (setattr_val_on | setattr_val_off,
					  COB_SCREEN_LOWLIGHT);
  }
#line 14830 "parser.c" /* yacc.c:1646  */
    break;

  case 1236:
#line 8929 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_REVERSE);
  }
#line 14838 "parser.c" /* yacc.c:1646  */
    break;

  case 1237:
#line 8933 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_UNDERLINE);
  }
#line 14846 "parser.c" /* yacc.c:1646  */
    break;

  case 1238:
#line 8937 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LEFTLINE);
  }
#line 14854 "parser.c" /* yacc.c:1646  */
    break;

  case 1239:
#line 8941 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_OVERLINE);
  }
#line 14862 "parser.c" /* yacc.c:1646  */
    break;

  case 1240:
#line 8950 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-3]), cb_build_ppointer ((yyvsp[0])));
  }
#line 14870 "parser.c" /* yacc.c:1646  */
    break;

  case 1241:
#line 8954 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14878 "parser.c" /* yacc.c:1646  */
    break;

  case 1242:
#line 8963 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_up_down ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 14886 "parser.c" /* yacc.c:1646  */
    break;

  case 1245:
#line 8977 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_on_off ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14894 "parser.c" /* yacc.c:1646  */
    break;

  case 1248:
#line 8991 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_true ((yyvsp[-2]));
  }
#line 14902 "parser.c" /* yacc.c:1646  */
    break;

  case 1249:
#line 8995 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_false ((yyvsp[-2]));
  }
#line 14910 "parser.c" /* yacc.c:1646  */
    break;

  case 1250:
#line 9004 "parser.y" /* yacc.c:1646  */
    {
	  cb_emit_set_last_exception_to_off ();
  }
#line 14918 "parser.c" /* yacc.c:1646  */
    break;

  case 1251:
#line 9013 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SORT", 0);
  }
#line 14926 "parser.c" /* yacc.c:1646  */
    break;

  case 1253:
#line 9021 "parser.y" /* yacc.c:1646  */
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
#line 14951 "parser.c" /* yacc.c:1646  */
    break;

  case 1254:
#line 9042 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2]) && CB_VALID_TREE ((yyvsp[-6]))) {
		cb_emit_sort_finish ((yyvsp[-6]));
	}
  }
#line 14961 "parser.c" /* yacc.c:1646  */
    break;

  case 1255:
#line 9051 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14969 "parser.c" /* yacc.c:1646  */
    break;

  case 1256:
#line 9056 "parser.y" /* yacc.c:1646  */
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
#line 14989 "parser.c" /* yacc.c:1646  */
    break;

  case 1257:
#line 9074 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14995 "parser.c" /* yacc.c:1646  */
    break;

  case 1258:
#line 9075 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 15001 "parser.c" /* yacc.c:1646  */
    break;

  case 1260:
#line 9080 "parser.y" /* yacc.c:1646  */
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  }
#line 15010 "parser.c" /* yacc.c:1646  */
    break;

  case 1261:
#line 9087 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 15016 "parser.c" /* yacc.c:1646  */
    break;

  case 1262:
#line 9088 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_ref ((yyvsp[0])); }
#line 15022 "parser.c" /* yacc.c:1646  */
    break;

  case 1263:
#line 9093 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) && CB_FILE_P (cb_ref ((yyvsp[0])))) {
		cb_error (_("File sort requires USING or INPUT PROCEDURE"));
	}
  }
#line 15032 "parser.c" /* yacc.c:1646  */
    break;

  case 1264:
#line 9099 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[-2])))) {
			cb_error (_("USING invalid with table SORT"));
		} else {
			cb_emit_sort_using ((yyvsp[-2]), (yyvsp[0]));
		}
	}
  }
#line 15046 "parser.c" /* yacc.c:1646  */
    break;

  case 1265:
#line 9109 "parser.y" /* yacc.c:1646  */
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
#line 15062 "parser.c" /* yacc.c:1646  */
    break;

  case 1266:
#line 9124 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("File sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
#line 15072 "parser.c" /* yacc.c:1646  */
    break;

  case 1267:
#line 9130 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (2)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (2)])))) {
			cb_error (_("GIVING invalid with table SORT"));
		} else {
			cb_emit_sort_giving ((yyvsp[(-1) - (2)]), (yyvsp[0]));
		}
	}
  }
#line 15086 "parser.c" /* yacc.c:1646  */
    break;

  case 1268:
#line 9140 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (4)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (4)])))) {
			cb_error (_("OUTPUT PROCEDURE invalid with table SORT"));
		} else {
			cb_emit_sort_output ((yyvsp[0]));
		}
	}
  }
#line 15100 "parser.c" /* yacc.c:1646  */
    break;

  case 1269:
#line 9156 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
#line 15109 "parser.c" /* yacc.c:1646  */
    break;

  case 1271:
#line 9166 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-1]) && !(yyvsp[-2])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SIZE/LENGTH invalid here"));
	} else {
		cb_emit_start ((yyvsp[-3]), start_tree, (yyvsp[-2]), (yyvsp[-1]));
	}
  }
#line 15122 "parser.c" /* yacc.c:1646  */
    break;

  case 1272:
#line 9178 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15130 "parser.c" /* yacc.c:1646  */
    break;

  case 1273:
#line 9182 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15138 "parser.c" /* yacc.c:1646  */
    break;

  case 1274:
#line 9189 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15146 "parser.c" /* yacc.c:1646  */
    break;

  case 1275:
#line 9193 "parser.y" /* yacc.c:1646  */
    {
	start_tree = (yyvsp[-1]);
	(yyval) = (yyvsp[0]);
  }
#line 15155 "parser.c" /* yacc.c:1646  */
    break;

  case 1276:
#line 9198 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  }
#line 15164 "parser.c" /* yacc.c:1646  */
    break;

  case 1277:
#line 9203 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  }
#line 15173 "parser.c" /* yacc.c:1646  */
    break;

  case 1278:
#line 9210 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_EQ); }
#line 15179 "parser.c" /* yacc.c:1646  */
    break;

  case 1279:
#line 9211 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LE : COB_GT); }
#line 15185 "parser.c" /* yacc.c:1646  */
    break;

  case 1280:
#line 9212 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GE : COB_LT); }
#line 15191 "parser.c" /* yacc.c:1646  */
    break;

  case 1281:
#line 9213 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LT : COB_GE); }
#line 15197 "parser.c" /* yacc.c:1646  */
    break;

  case 1282:
#line 9214 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GT : COB_LE); }
#line 15203 "parser.c" /* yacc.c:1646  */
    break;

  case 1283:
#line 9215 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_NE); }
#line 15209 "parser.c" /* yacc.c:1646  */
    break;

  case 1284:
#line 9220 "parser.y" /* yacc.c:1646  */
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition disallowed on START statement"));
  }
#line 15218 "parser.c" /* yacc.c:1646  */
    break;

  case 1287:
#line 9233 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  }
#line 15226 "parser.c" /* yacc.c:1646  */
    break;

  case 1288:
#line 9237 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  }
#line 15234 "parser.c" /* yacc.c:1646  */
    break;

  case 1289:
#line 9247 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP RUN", 0);
  }
#line 15242 "parser.c" /* yacc.c:1646  */
    break;

  case 1290:
#line 9251 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_stop_run ((yyvsp[0]));
	check_unreached = 1;
	cobc_cs_check = 0;
  }
#line 15252 "parser.c" /* yacc.c:1646  */
    break;

  case 1291:
#line 9257 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP", 0);
	cb_verify (cb_stop_literal_statement, "STOP literal");
	cb_emit_display (CB_LIST_INIT ((yyvsp[0])), cb_int0, cb_int1, NULL,
			 NULL);
	cb_emit_accept (cb_null, NULL, NULL);
	cobc_cs_check = 0;
  }
#line 15265 "parser.c" /* yacc.c:1646  */
    break;

  case 1292:
#line 9269 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->cb_return_code;
  }
#line 15273 "parser.c" /* yacc.c:1646  */
    break;

  case 1293:
#line 9273 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15281 "parser.c" /* yacc.c:1646  */
    break;

  case 1294:
#line 9277 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15289 "parser.c" /* yacc.c:1646  */
    break;

  case 1295:
#line 9281 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int1;
	}
  }
#line 15301 "parser.c" /* yacc.c:1646  */
    break;

  case 1296:
#line 9289 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int0;
	}
  }
#line 15313 "parser.c" /* yacc.c:1646  */
    break;

  case 1297:
#line 9300 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15321 "parser.c" /* yacc.c:1646  */
    break;

  case 1298:
#line 9304 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15329 "parser.c" /* yacc.c:1646  */
    break;

  case 1299:
#line 9310 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15335 "parser.c" /* yacc.c:1646  */
    break;

  case 1300:
#line 9311 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 15341 "parser.c" /* yacc.c:1646  */
    break;

  case 1301:
#line 9312 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 15347 "parser.c" /* yacc.c:1646  */
    break;

  case 1302:
#line 9313 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 15353 "parser.c" /* yacc.c:1646  */
    break;

  case 1303:
#line 9320 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STRING", TERM_STRING);
  }
#line 15361 "parser.c" /* yacc.c:1646  */
    break;

  case 1305:
#line 9329 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_string ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[-1]));
  }
#line 15369 "parser.c" /* yacc.c:1646  */
    break;

  case 1306:
#line 9335 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 15375 "parser.c" /* yacc.c:1646  */
    break;

  case 1307:
#line 9336 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 15381 "parser.c" /* yacc.c:1646  */
    break;

  case 1308:
#line 9340 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15387 "parser.c" /* yacc.c:1646  */
    break;

  case 1309:
#line 9341 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); }
#line 15393 "parser.c" /* yacc.c:1646  */
    break;

  case 1310:
#line 9342 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[0]), NULL); }
#line 15399 "parser.c" /* yacc.c:1646  */
    break;

  case 1311:
#line 9346 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15405 "parser.c" /* yacc.c:1646  */
    break;

  case 1312:
#line 9347 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15411 "parser.c" /* yacc.c:1646  */
    break;

  case 1313:
#line 9352 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  }
#line 15419 "parser.c" /* yacc.c:1646  */
    break;

  case 1314:
#line 9356 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  }
#line 15427 "parser.c" /* yacc.c:1646  */
    break;

  case 1315:
#line 9366 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
#line 15435 "parser.c" /* yacc.c:1646  */
    break;

  case 1317:
#line 9375 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '-', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 15443 "parser.c" /* yacc.c:1646  */
    break;

  case 1318:
#line 9379 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[-3]), (yyvsp[-5])), '-'));
  }
#line 15451 "parser.c" /* yacc.c:1646  */
    break;

  case 1319:
#line 9383 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 15459 "parser.c" /* yacc.c:1646  */
    break;

  case 1320:
#line 9390 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  }
#line 15467 "parser.c" /* yacc.c:1646  */
    break;

  case 1321:
#line 9394 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  }
#line 15475 "parser.c" /* yacc.c:1646  */
    break;

  case 1322:
#line 9404 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUPPRESS", 0);
	if (!in_declaratives) {
		cb_error_x (CB_TREE (current_statement),
			    _("SUPPRESS statement must be within DECLARATIVES"));
	}
	PENDING("SUPPRESS");
  }
#line 15488 "parser.c" /* yacc.c:1646  */
    break;

  case 1325:
#line 9422 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TERMINATE", 0);
	PENDING("TERMINATE");
  }
#line 15497 "parser.c" /* yacc.c:1646  */
    break;

  case 1327:
#line 9431 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 15507 "parser.c" /* yacc.c:1646  */
    break;

  case 1328:
#line 9437 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 15517 "parser.c" /* yacc.c:1646  */
    break;

  case 1329:
#line 9448 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TRANSFORM", 0);
  }
#line 15525 "parser.c" /* yacc.c:1646  */
    break;

  case 1331:
#line 9456 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[-2]), (yyvsp[0]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[-4]), x, cb_int0, 2);
  }
#line 15536 "parser.c" /* yacc.c:1646  */
    break;

  case 1332:
#line 9469 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNLOCK", 0);
  }
#line 15544 "parser.c" /* yacc.c:1646  */
    break;

  case 1334:
#line 9477 "parser.y" /* yacc.c:1646  */
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
#line 15559 "parser.c" /* yacc.c:1646  */
    break;

  case 1335:
#line 9493 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
#line 15567 "parser.c" /* yacc.c:1646  */
    break;

  case 1337:
#line 9503 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_unstring ((yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
  }
#line 15575 "parser.c" /* yacc.c:1646  */
    break;

  case 1338:
#line 9509 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15581 "parser.c" /* yacc.c:1646  */
    break;

  case 1339:
#line 9511 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15587 "parser.c" /* yacc.c:1646  */
    break;

  case 1340:
#line 9515 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 15593 "parser.c" /* yacc.c:1646  */
    break;

  case 1341:
#line 9517 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 15599 "parser.c" /* yacc.c:1646  */
    break;

  case 1342:
#line 9522 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[-1]), (yyvsp[0]));
  }
#line 15607 "parser.c" /* yacc.c:1646  */
    break;

  case 1343:
#line 9528 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 15613 "parser.c" /* yacc.c:1646  */
    break;

  case 1344:
#line 9530 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 15619 "parser.c" /* yacc.c:1646  */
    break;

  case 1345:
#line 9535 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_into ((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 15627 "parser.c" /* yacc.c:1646  */
    break;

  case 1346:
#line 9541 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15633 "parser.c" /* yacc.c:1646  */
    break;

  case 1347:
#line 9542 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15639 "parser.c" /* yacc.c:1646  */
    break;

  case 1348:
#line 9546 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15645 "parser.c" /* yacc.c:1646  */
    break;

  case 1349:
#line 9547 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15651 "parser.c" /* yacc.c:1646  */
    break;

  case 1350:
#line 9551 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15657 "parser.c" /* yacc.c:1646  */
    break;

  case 1351:
#line 9552 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15663 "parser.c" /* yacc.c:1646  */
    break;

  case 1352:
#line 9557 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  }
#line 15671 "parser.c" /* yacc.c:1646  */
    break;

  case 1353:
#line 9561 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  }
#line 15679 "parser.c" /* yacc.c:1646  */
    break;

  case 1354:
#line 9571 "parser.y" /* yacc.c:1646  */
    {
	skip_statements = 0;
	in_debugging = 0;
  }
#line 15688 "parser.c" /* yacc.c:1646  */
    break;

  case 1361:
#line 9589 "parser.y" /* yacc.c:1646  */
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
#line 15714 "parser.c" /* yacc.c:1646  */
    break;

  case 1362:
#line 9614 "parser.y" /* yacc.c:1646  */
    {
	use_global_ind = 0;
  }
#line 15722 "parser.c" /* yacc.c:1646  */
    break;

  case 1363:
#line 9618 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else {
		use_global_ind = 1;
		current_program->flag_global_use = 1;
	}
  }
#line 15735 "parser.c" /* yacc.c:1646  */
    break;

  case 1364:
#line 9630 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		l;

	for (l = (yyvsp[0]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			set_up_use_file (CB_FILE (cb_ref (CB_VALUE (l))));
		}
	}
  }
#line 15749 "parser.c" /* yacc.c:1646  */
    break;

  case 1365:
#line 9640 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
#line 15758 "parser.c" /* yacc.c:1646  */
    break;

  case 1366:
#line 9645 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
#line 15767 "parser.c" /* yacc.c:1646  */
    break;

  case 1367:
#line 9650 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
#line 15776 "parser.c" /* yacc.c:1646  */
    break;

  case 1368:
#line 9655 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
#line 15785 "parser.c" /* yacc.c:1646  */
    break;

  case 1369:
#line 9663 "parser.y" /* yacc.c:1646  */
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
#line 15824 "parser.c" /* yacc.c:1646  */
    break;

  case 1372:
#line 9706 "parser.y" /* yacc.c:1646  */
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
#line 15868 "parser.c" /* yacc.c:1646  */
    break;

  case 1373:
#line 9746 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_debugging) {
		if (current_program->all_procedure) {
			cb_error (_("Duplicate USE DEBUGGING ON ALL PROCEDURES"));
		} else {
			current_program->all_procedure = current_section;
		}
	}
  }
#line 15882 "parser.c" /* yacc.c:1646  */
    break;

  case 1374:
#line 9756 "parser.y" /* yacc.c:1646  */
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
#line 15907 "parser.c" /* yacc.c:1646  */
    break;

  case 1379:
#line 9786 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "USE AT");
	}
  }
#line 15917 "parser.c" /* yacc.c:1646  */
    break;

  case 1380:
#line 9795 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	/* emit_entry ("_START", 0, NULL); */
	PENDING ("USE AT PROGRAM START");
  }
#line 15927 "parser.c" /* yacc.c:1646  */
    break;

  case 1381:
#line 9801 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	/* emit_entry ("_END", 0, NULL); */
	PENDING ("USE AT PROGRAM END");
  }
#line 15937 "parser.c" /* yacc.c:1646  */
    break;

  case 1382:
#line 9811 "parser.y" /* yacc.c:1646  */
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE BEFORE REPORTING"));
	PENDING ("USE BEFORE REPORTING");
  }
#line 15947 "parser.c" /* yacc.c:1646  */
    break;

  case 1383:
#line 9820 "parser.y" /* yacc.c:1646  */
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	PENDING ("USE AFTER EXCEPTION CONDITION");
  }
#line 15957 "parser.c" /* yacc.c:1646  */
    break;

  case 1386:
#line 9836 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 15968 "parser.c" /* yacc.c:1646  */
    break;

  case 1388:
#line 9848 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE ((yyvsp[-4]))) {
		cb_emit_write ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
	}
	start_debug = save_debug;
  }
#line 15979 "parser.c" /* yacc.c:1646  */
    break;

  case 1389:
#line 9857 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15985 "parser.c" /* yacc.c:1646  */
    break;

  case 1390:
#line 9858 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15991 "parser.c" /* yacc.c:1646  */
    break;

  case 1391:
#line 9863 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 15999 "parser.c" /* yacc.c:1646  */
    break;

  case 1392:
#line 9867 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 16007 "parser.c" /* yacc.c:1646  */
    break;

  case 1393:
#line 9871 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 16015 "parser.c" /* yacc.c:1646  */
    break;

  case 1394:
#line 9875 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[-2]));
  }
#line 16023 "parser.c" /* yacc.c:1646  */
    break;

  case 1395:
#line 9881 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 16029 "parser.c" /* yacc.c:1646  */
    break;

  case 1396:
#line 9882 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_AFTER; }
#line 16035 "parser.c" /* yacc.c:1646  */
    break;

  case 1399:
#line 9892 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  }
#line 16043 "parser.c" /* yacc.c:1646  */
    break;

  case 1400:
#line 9896 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  }
#line 16051 "parser.c" /* yacc.c:1646  */
    break;

  case 1403:
#line 9913 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16060 "parser.c" /* yacc.c:1646  */
    break;

  case 1407:
#line 9928 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16069 "parser.c" /* yacc.c:1646  */
    break;

  case 1412:
#line 9946 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16078 "parser.c" /* yacc.c:1646  */
    break;

  case 1414:
#line 9956 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16087 "parser.c" /* yacc.c:1646  */
    break;

  case 1417:
#line 9971 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16096 "parser.c" /* yacc.c:1646  */
    break;

  case 1419:
#line 9981 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16105 "parser.c" /* yacc.c:1646  */
    break;

  case 1422:
#line 9998 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16114 "parser.c" /* yacc.c:1646  */
    break;

  case 1424:
#line 10009 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16123 "parser.c" /* yacc.c:1646  */
    break;

  case 1430:
#line 10032 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16132 "parser.c" /* yacc.c:1646  */
    break;

  case 1431:
#line 10041 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16141 "parser.c" /* yacc.c:1646  */
    break;

  case 1435:
#line 10058 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16150 "parser.c" /* yacc.c:1646  */
    break;

  case 1436:
#line 10067 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16159 "parser.c" /* yacc.c:1646  */
    break;

  case 1439:
#line 10084 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16168 "parser.c" /* yacc.c:1646  */
    break;

  case 1441:
#line 10094 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16177 "parser.c" /* yacc.c:1646  */
    break;

  case 1442:
#line 10104 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_one;
  }
#line 16185 "parser.c" /* yacc.c:1646  */
    break;

  case 1443:
#line 10108 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 16193 "parser.c" /* yacc.c:1646  */
    break;

  case 1444:
#line 10118 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_cond ((yyvsp[0]));
  }
#line 16201 "parser.c" /* yacc.c:1646  */
    break;

  case 1445:
#line 10125 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_expr ((yyvsp[0]));
  }
#line 16209 "parser.c" /* yacc.c:1646  */
    break;

  case 1446:
#line 10131 "parser.y" /* yacc.c:1646  */
    {
	current_expr = NULL;
	cb_exp_line = cb_source_line;
  }
#line 16218 "parser.c" /* yacc.c:1646  */
    break;

  case 1447:
#line 10136 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_expr);
  }
#line 16226 "parser.c" /* yacc.c:1646  */
    break;

  case 1451:
#line 10149 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE_P ((yyvsp[0])) && CB_CLASS_NAME_P (cb_ref ((yyvsp[0])))) {
		push_expr ('C', (yyvsp[0]));
	} else {
		push_expr ('x', (yyvsp[0]));
	}
  }
#line 16238 "parser.c" /* yacc.c:1646  */
    break;

  case 1452:
#line 10157 "parser.y" /* yacc.c:1646  */
    { push_expr ('(', NULL); }
#line 16244 "parser.c" /* yacc.c:1646  */
    break;

  case 1453:
#line 10158 "parser.y" /* yacc.c:1646  */
    { push_expr (')', NULL); }
#line 16250 "parser.c" /* yacc.c:1646  */
    break;

  case 1454:
#line 10160 "parser.y" /* yacc.c:1646  */
    { push_expr ('+', NULL); }
#line 16256 "parser.c" /* yacc.c:1646  */
    break;

  case 1455:
#line 10161 "parser.y" /* yacc.c:1646  */
    { push_expr ('-', NULL); }
#line 16262 "parser.c" /* yacc.c:1646  */
    break;

  case 1456:
#line 10162 "parser.y" /* yacc.c:1646  */
    { push_expr ('*', NULL); }
#line 16268 "parser.c" /* yacc.c:1646  */
    break;

  case 1457:
#line 10163 "parser.y" /* yacc.c:1646  */
    { push_expr ('/', NULL); }
#line 16274 "parser.c" /* yacc.c:1646  */
    break;

  case 1458:
#line 10164 "parser.y" /* yacc.c:1646  */
    { push_expr ('^', NULL); }
#line 16280 "parser.c" /* yacc.c:1646  */
    break;

  case 1459:
#line 10166 "parser.y" /* yacc.c:1646  */
    { push_expr ('=', NULL); }
#line 16286 "parser.c" /* yacc.c:1646  */
    break;

  case 1460:
#line 10167 "parser.y" /* yacc.c:1646  */
    { push_expr ('>', NULL); }
#line 16292 "parser.c" /* yacc.c:1646  */
    break;

  case 1461:
#line 10168 "parser.y" /* yacc.c:1646  */
    { push_expr ('<', NULL); }
#line 16298 "parser.c" /* yacc.c:1646  */
    break;

  case 1462:
#line 10169 "parser.y" /* yacc.c:1646  */
    { push_expr (']', NULL); }
#line 16304 "parser.c" /* yacc.c:1646  */
    break;

  case 1463:
#line 10170 "parser.y" /* yacc.c:1646  */
    { push_expr ('[', NULL); }
#line 16310 "parser.c" /* yacc.c:1646  */
    break;

  case 1464:
#line 10171 "parser.y" /* yacc.c:1646  */
    { push_expr ('~', NULL); }
#line 16316 "parser.c" /* yacc.c:1646  */
    break;

  case 1465:
#line 10173 "parser.y" /* yacc.c:1646  */
    { push_expr ('!', NULL); }
#line 16322 "parser.c" /* yacc.c:1646  */
    break;

  case 1466:
#line 10174 "parser.y" /* yacc.c:1646  */
    { push_expr ('&', NULL); }
#line 16328 "parser.c" /* yacc.c:1646  */
    break;

  case 1467:
#line 10175 "parser.y" /* yacc.c:1646  */
    { push_expr ('|', NULL); }
#line 16334 "parser.c" /* yacc.c:1646  */
    break;

  case 1468:
#line 10177 "parser.y" /* yacc.c:1646  */
    { push_expr ('O', NULL); }
#line 16340 "parser.c" /* yacc.c:1646  */
    break;

  case 1469:
#line 10178 "parser.y" /* yacc.c:1646  */
    { push_expr ('9', NULL); }
#line 16346 "parser.c" /* yacc.c:1646  */
    break;

  case 1470:
#line 10179 "parser.y" /* yacc.c:1646  */
    { push_expr ('A', NULL); }
#line 16352 "parser.c" /* yacc.c:1646  */
    break;

  case 1471:
#line 10180 "parser.y" /* yacc.c:1646  */
    { push_expr ('L', NULL); }
#line 16358 "parser.c" /* yacc.c:1646  */
    break;

  case 1472:
#line 10181 "parser.y" /* yacc.c:1646  */
    { push_expr ('U', NULL); }
#line 16364 "parser.c" /* yacc.c:1646  */
    break;

  case 1473:
#line 10184 "parser.y" /* yacc.c:1646  */
    { push_expr ('P', NULL); }
#line 16370 "parser.c" /* yacc.c:1646  */
    break;

  case 1474:
#line 10185 "parser.y" /* yacc.c:1646  */
    { push_expr ('N', NULL); }
#line 16376 "parser.c" /* yacc.c:1646  */
    break;

  case 1483:
#line 10215 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16384 "parser.c" /* yacc.c:1646  */
    break;

  case 1484:
#line 10219 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 16392 "parser.c" /* yacc.c:1646  */
    break;

  case 1488:
#line 10230 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '+', (yyvsp[0])); }
#line 16398 "parser.c" /* yacc.c:1646  */
    break;

  case 1489:
#line 10231 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '-', (yyvsp[0])); }
#line 16404 "parser.c" /* yacc.c:1646  */
    break;

  case 1490:
#line 10232 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16410 "parser.c" /* yacc.c:1646  */
    break;

  case 1491:
#line 10236 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '*', (yyvsp[0])); }
#line 16416 "parser.c" /* yacc.c:1646  */
    break;

  case 1492:
#line 10237 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '/', (yyvsp[0])); }
#line 16422 "parser.c" /* yacc.c:1646  */
    break;

  case 1493:
#line 10238 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16428 "parser.c" /* yacc.c:1646  */
    break;

  case 1494:
#line 10243 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_binary_op ((yyvsp[-2]), '^', (yyvsp[0]));
  }
#line 16436 "parser.c" /* yacc.c:1646  */
    break;

  case 1495:
#line 10246 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16442 "parser.c" /* yacc.c:1646  */
    break;

  case 1496:
#line 10250 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16448 "parser.c" /* yacc.c:1646  */
    break;

  case 1497:
#line 10251 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[0])); }
#line 16454 "parser.c" /* yacc.c:1646  */
    break;

  case 1498:
#line 10252 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16460 "parser.c" /* yacc.c:1646  */
    break;

  case 1499:
#line 10255 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 16466 "parser.c" /* yacc.c:1646  */
    break;

  case 1500:
#line 10256 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16472 "parser.c" /* yacc.c:1646  */
    break;

  case 1501:
#line 10267 "parser.y" /* yacc.c:1646  */
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
#line 16488 "parser.c" /* yacc.c:1646  */
    break;

  case 1502:
#line 10279 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_FILE (cb_ref ((yyvsp[0])))->linage_ctr;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16501 "parser.c" /* yacc.c:1646  */
    break;

  case 1503:
#line 10288 "parser.y" /* yacc.c:1646  */
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
#line 16517 "parser.c" /* yacc.c:1646  */
    break;

  case 1504:
#line 10300 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->line_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16530 "parser.c" /* yacc.c:1646  */
    break;

  case 1505:
#line 10309 "parser.y" /* yacc.c:1646  */
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
#line 16546 "parser.c" /* yacc.c:1646  */
    break;

  case 1506:
#line 10321 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->page_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16559 "parser.c" /* yacc.c:1646  */
    break;

  case 1507:
#line 10335 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16565 "parser.c" /* yacc.c:1646  */
    break;

  case 1508:
#line 10337 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 16571 "parser.c" /* yacc.c:1646  */
    break;

  case 1509:
#line 10342 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-1]));
  }
#line 16579 "parser.c" /* yacc.c:1646  */
    break;

  case 1510:
#line 10350 "parser.y" /* yacc.c:1646  */
    { cb_build_identifier ((yyvsp[0]), 0); }
#line 16585 "parser.c" /* yacc.c:1646  */
    break;

  case 1511:
#line 10357 "parser.y" /* yacc.c:1646  */
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
#line 16604 "parser.c" /* yacc.c:1646  */
    break;

  case 1512:
#line 10377 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16612 "parser.c" /* yacc.c:1646  */
    break;

  case 1513:
#line 10381 "parser.y" /* yacc.c:1646  */
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
#line 16634 "parser.c" /* yacc.c:1646  */
    break;

  case 1514:
#line 10402 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16647 "parser.c" /* yacc.c:1646  */
    break;

  case 1515:
#line 10443 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16660 "parser.c" /* yacc.c:1646  */
    break;

  case 1516:
#line 10456 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 16666 "parser.c" /* yacc.c:1646  */
    break;

  case 1517:
#line 10458 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 16672 "parser.c" /* yacc.c:1646  */
    break;

  case 1518:
#line 10462 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16678 "parser.c" /* yacc.c:1646  */
    break;

  case 1519:
#line 10468 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16684 "parser.c" /* yacc.c:1646  */
    break;

  case 1520:
#line 10470 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 16690 "parser.c" /* yacc.c:1646  */
    break;

  case 1521:
#line 10475 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE ((yyval))->offset = CB_TREE (current_section);
	CB_REFERENCE ((yyval))->flag_in_decl = !!in_declaratives;
	CB_REFERENCE ((yyval))->section = current_section;
	CB_REFERENCE ((yyval))->paragraph = current_paragraph;
	CB_ADD_TO_CHAIN ((yyval), current_program->label_list);
  }
#line 16703 "parser.c" /* yacc.c:1646  */
    break;

  case 1524:
#line 10489 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 16711 "parser.c" /* yacc.c:1646  */
    break;

  case 1525:
#line 10496 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[0]))->data));
	(yyval)->source_file = (yyvsp[0])->source_file;
	(yyval)->source_line = (yyvsp[0])->source_line;
  }
#line 16721 "parser.c" /* yacc.c:1646  */
    break;

  case 1526:
#line 10506 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 16727 "parser.c" /* yacc.c:1646  */
    break;

  case 1527:
#line 10507 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 16733 "parser.c" /* yacc.c:1646  */
    break;

  case 1528:
#line 10512 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 16742 "parser.c" /* yacc.c:1646  */
    break;

  case 1529:
#line 10520 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 16751 "parser.c" /* yacc.c:1646  */
    break;

  case 1530:
#line 10528 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16759 "parser.c" /* yacc.c:1646  */
    break;

  case 1531:
#line 10532 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16767 "parser.c" /* yacc.c:1646  */
    break;

  case 1532:
#line 10539 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 16777 "parser.c" /* yacc.c:1646  */
    break;

  case 1535:
#line 10555 "parser.y" /* yacc.c:1646  */
    {
	if (CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[0]);
	}
  }
#line 16790 "parser.c" /* yacc.c:1646  */
    break;

  case 1536:
#line 10564 "parser.y" /* yacc.c:1646  */
    {
	  yyclearin;
	  yyerrok;
	  (yyval) = cb_error_node;
  }
#line 16800 "parser.c" /* yacc.c:1646  */
    break;

  case 1537:
#line 10575 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE ((yyvsp[0]))->flag_duped || CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = NULL;
	} else {
		CB_WORD_COUNT ((yyvsp[0]))++;
		(yyval) = (yyvsp[0]);
	}
  }
#line 16814 "parser.c" /* yacc.c:1646  */
    break;

  case 1538:
#line 10592 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16822 "parser.c" /* yacc.c:1646  */
    break;

  case 1539:
#line 10596 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16830 "parser.c" /* yacc.c:1646  */
    break;

  case 1542:
#line 10605 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 16838 "parser.c" /* yacc.c:1646  */
    break;

  case 1543:
#line 10611 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16844 "parser.c" /* yacc.c:1646  */
    break;

  case 1544:
#line 10612 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16850 "parser.c" /* yacc.c:1646  */
    break;

  case 1545:
#line 10617 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16858 "parser.c" /* yacc.c:1646  */
    break;

  case 1546:
#line 10621 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16866 "parser.c" /* yacc.c:1646  */
    break;

  case 1551:
#line 10632 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16874 "parser.c" /* yacc.c:1646  */
    break;

  case 1552:
#line 10636 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16882 "parser.c" /* yacc.c:1646  */
    break;

  case 1553:
#line 10640 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16890 "parser.c" /* yacc.c:1646  */
    break;

  case 1554:
#line 10644 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_ppointer ((yyvsp[0]));
  }
#line 16898 "parser.c" /* yacc.c:1646  */
    break;

  case 1555:
#line 10648 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 16906 "parser.c" /* yacc.c:1646  */
    break;

  case 1556:
#line 10652 "parser.y" /* yacc.c:1646  */
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
#line 16928 "parser.c" /* yacc.c:1646  */
    break;

  case 1557:
#line 10673 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16936 "parser.c" /* yacc.c:1646  */
    break;

  case 1558:
#line 10677 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16944 "parser.c" /* yacc.c:1646  */
    break;

  case 1566:
#line 10694 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16952 "parser.c" /* yacc.c:1646  */
    break;

  case 1567:
#line 10698 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16960 "parser.c" /* yacc.c:1646  */
    break;

  case 1568:
#line 10702 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16968 "parser.c" /* yacc.c:1646  */
    break;

  case 1577:
#line 10736 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 16976 "parser.c" /* yacc.c:1646  */
    break;

  case 1579:
#line 10744 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 16984 "parser.c" /* yacc.c:1646  */
    break;

  case 1582:
#line 10753 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 16992 "parser.c" /* yacc.c:1646  */
    break;

  case 1584:
#line 10758 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_zero;
  }
#line 17000 "parser.c" /* yacc.c:1646  */
    break;

  case 1585:
#line 10765 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17008 "parser.c" /* yacc.c:1646  */
    break;

  case 1587:
#line 10773 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17016 "parser.c" /* yacc.c:1646  */
    break;

  case 1589:
#line 10781 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 17024 "parser.c" /* yacc.c:1646  */
    break;

  case 1592:
#line 10791 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 0); }
#line 17030 "parser.c" /* yacc.c:1646  */
    break;

  case 1593:
#line 10795 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 1); }
#line 17036 "parser.c" /* yacc.c:1646  */
    break;

  case 1594:
#line 10799 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17042 "parser.c" /* yacc.c:1646  */
    break;

  case 1595:
#line 10800 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 17048 "parser.c" /* yacc.c:1646  */
    break;

  case 1596:
#line 10804 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 0); }
#line 17054 "parser.c" /* yacc.c:1646  */
    break;

  case 1597:
#line 10809 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 17065 "parser.c" /* yacc.c:1646  */
    break;

  case 1598:
#line 10816 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 17076 "parser.c" /* yacc.c:1646  */
    break;

  case 1599:
#line 10823 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 17087 "parser.c" /* yacc.c:1646  */
    break;

  case 1600:
#line 10830 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 17098 "parser.c" /* yacc.c:1646  */
    break;

  case 1601:
#line 10840 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_identifier ((yyvsp[0]), 0);
  }
#line 17106 "parser.c" /* yacc.c:1646  */
    break;

  case 1602:
#line 10847 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (CB_REFERENCE_P ((yyvsp[-2]))) {
		CB_REFERENCE ((yyvsp[-2]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 17120 "parser.c" /* yacc.c:1646  */
    break;

  case 1603:
#line 10857 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 17134 "parser.c" /* yacc.c:1646  */
    break;

  case 1604:
#line 10867 "parser.y" /* yacc.c:1646  */
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

  case 1605:
#line 10877 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (CB_REFERENCE_P ((yyvsp[0]))) {
		CB_REFERENCE ((yyvsp[0]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 17162 "parser.c" /* yacc.c:1646  */
    break;

  case 1606:
#line 10890 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17170 "parser.c" /* yacc.c:1646  */
    break;

  case 1607:
#line 10894 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 17179 "parser.c" /* yacc.c:1646  */
    break;

  case 1608:
#line 10902 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-3]))->subs = cb_list_reverse ((yyvsp[-1]));
  }
#line 17188 "parser.c" /* yacc.c:1646  */
    break;

  case 1609:
#line 10910 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-4]))->offset = (yyvsp[-2]);
  }
#line 17196 "parser.c" /* yacc.c:1646  */
    break;

  case 1610:
#line 10914 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-5]))->offset = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-5]))->length = (yyvsp[-1]);
  }
#line 17205 "parser.c" /* yacc.c:1646  */
    break;

  case 1611:
#line 10924 "parser.y" /* yacc.c:1646  */
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
#line 17220 "parser.c" /* yacc.c:1646  */
    break;

  case 1612:
#line 10938 "parser.y" /* yacc.c:1646  */
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
#line 17244 "parser.c" /* yacc.c:1646  */
    break;

  case 1613:
#line 10961 "parser.y" /* yacc.c:1646  */
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
#line 17267 "parser.c" /* yacc.c:1646  */
    break;

  case 1614:
#line 10983 "parser.y" /* yacc.c:1646  */
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
#line 17287 "parser.c" /* yacc.c:1646  */
    break;

  case 1615:
#line 10998 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 17293 "parser.c" /* yacc.c:1646  */
    break;

  case 1616:
#line 10999 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 17299 "parser.c" /* yacc.c:1646  */
    break;

  case 1617:
#line 11000 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 17305 "parser.c" /* yacc.c:1646  */
    break;

  case 1618:
#line 11001 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 17311 "parser.c" /* yacc.c:1646  */
    break;

  case 1619:
#line 11002 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 17317 "parser.c" /* yacc.c:1646  */
    break;

  case 1620:
#line 11003 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 17323 "parser.c" /* yacc.c:1646  */
    break;

  case 1621:
#line 11008 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17331 "parser.c" /* yacc.c:1646  */
    break;

  case 1622:
#line 11012 "parser.y" /* yacc.c:1646  */
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
#line 17349 "parser.c" /* yacc.c:1646  */
    break;

  case 1623:
#line 11029 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17357 "parser.c" /* yacc.c:1646  */
    break;

  case 1624:
#line 11033 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_concat_literals ((yyvsp[-2]), (yyvsp[0]));
  }
#line 17365 "parser.c" /* yacc.c:1646  */
    break;

  case 1625:
#line 11039 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17371 "parser.c" /* yacc.c:1646  */
    break;

  case 1626:
#line 11040 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 17377 "parser.c" /* yacc.c:1646  */
    break;

  case 1627:
#line 11041 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 17383 "parser.c" /* yacc.c:1646  */
    break;

  case 1628:
#line 11042 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 17389 "parser.c" /* yacc.c:1646  */
    break;

  case 1629:
#line 11043 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 17395 "parser.c" /* yacc.c:1646  */
    break;

  case 1630:
#line 11044 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 17401 "parser.c" /* yacc.c:1646  */
    break;

  case 1631:
#line 11045 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 17407 "parser.c" /* yacc.c:1646  */
    break;

  case 1632:
#line 11052 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), NULL, (yyvsp[0]), 0);
  }
#line 17415 "parser.c" /* yacc.c:1646  */
    break;

  case 1633:
#line 11056 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), CB_LIST_INIT ((yyvsp[-2])), (yyvsp[0]), 0);
  }
#line 17423 "parser.c" /* yacc.c:1646  */
    break;

  case 1634:
#line 11060 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17431 "parser.c" /* yacc.c:1646  */
    break;

  case 1635:
#line 11064 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17439 "parser.c" /* yacc.c:1646  */
    break;

  case 1636:
#line 11068 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-3]), (yyvsp[-1]), NULL, 0);
  }
#line 17447 "parser.c" /* yacc.c:1646  */
    break;

  case 1637:
#line 11072 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17455 "parser.c" /* yacc.c:1646  */
    break;

  case 1638:
#line 11076 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17463 "parser.c" /* yacc.c:1646  */
    break;

  case 1639:
#line 11080 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17471 "parser.c" /* yacc.c:1646  */
    break;

  case 1640:
#line 11084 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17479 "parser.c" /* yacc.c:1646  */
    break;

  case 1641:
#line 11088 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17487 "parser.c" /* yacc.c:1646  */
    break;

  case 1642:
#line 11092 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 0);
  }
#line 17495 "parser.c" /* yacc.c:1646  */
    break;

  case 1643:
#line 11096 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 1);
  }
#line 17503 "parser.c" /* yacc.c:1646  */
    break;

  case 1653:
#line 11121 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17511 "parser.c" /* yacc.c:1646  */
    break;

  case 1654:
#line 11125 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), NULL);
  }
#line 17519 "parser.c" /* yacc.c:1646  */
    break;

  case 1655:
#line 11129 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 17527 "parser.c" /* yacc.c:1646  */
    break;

  case 1656:
#line 11136 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17535 "parser.c" /* yacc.c:1646  */
    break;

  case 1657:
#line 11140 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 17543 "parser.c" /* yacc.c:1646  */
    break;

  case 1658:
#line 11144 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17551 "parser.c" /* yacc.c:1646  */
    break;

  case 1659:
#line 11151 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_int0);
  }
#line 17562 "parser.c" /* yacc.c:1646  */
    break;

  case 1660:
#line 11158 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int1);
  }
#line 17573 "parser.c" /* yacc.c:1646  */
    break;

  case 1661:
#line 11165 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int2);
  }
#line 17584 "parser.c" /* yacc.c:1646  */
    break;

  case 1662:
#line 11175 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 17595 "parser.c" /* yacc.c:1646  */
    break;

  case 1663:
#line 11182 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, (yyvsp[0]));
  }
#line 17606 "parser.c" /* yacc.c:1646  */
    break;

  case 1664:
#line 11192 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 17617 "parser.c" /* yacc.c:1646  */
    break;

  case 1665:
#line 11199 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[0])));
  }
#line 17628 "parser.c" /* yacc.c:1646  */
    break;

  case 1666:
#line 11209 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 17636 "parser.c" /* yacc.c:1646  */
    break;

  case 1667:
#line 11213 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 4) {
		cb_error_x ((yyvsp[-2]), _("Cannot specify offset and SYSTEM-OFFSET at the same time."));
	}

	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 17650 "parser.c" /* yacc.c:1646  */
    break;

  case 1668:
#line 11226 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 17658 "parser.c" /* yacc.c:1646  */
    break;

  case 1669:
#line 11230 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 3) {
		cb_error_x ((yyvsp[-2]), _("Cannot specify offset and SYSTEM-OFFSET at the same time."));
	}

	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 17672 "parser.c" /* yacc.c:1646  */
    break;

  case 1670:
#line 11244 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 1;
  }
#line 17680 "parser.c" /* yacc.c:1646  */
    break;

  case 1671:
#line 11252 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17686 "parser.c" /* yacc.c:1646  */
    break;

  case 1672:
#line 11253 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17692 "parser.c" /* yacc.c:1646  */
    break;

  case 1673:
#line 11257 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17698 "parser.c" /* yacc.c:1646  */
    break;

  case 1674:
#line 11258 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17704 "parser.c" /* yacc.c:1646  */
    break;

  case 1675:
#line 11262 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17710 "parser.c" /* yacc.c:1646  */
    break;

  case 1676:
#line 11263 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17716 "parser.c" /* yacc.c:1646  */
    break;

  case 1677:
#line 11268 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17724 "parser.c" /* yacc.c:1646  */
    break;

  case 1678:
#line 11272 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17732 "parser.c" /* yacc.c:1646  */
    break;

  case 1679:
#line 11279 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17740 "parser.c" /* yacc.c:1646  */
    break;

  case 1680:
#line 11283 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17748 "parser.c" /* yacc.c:1646  */
    break;

  case 1681:
#line 11290 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17754 "parser.c" /* yacc.c:1646  */
    break;

  case 1682:
#line 11291 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17760 "parser.c" /* yacc.c:1646  */
    break;

  case 1683:
#line 11292 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 17766 "parser.c" /* yacc.c:1646  */
    break;

  case 1684:
#line 11296 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17772 "parser.c" /* yacc.c:1646  */
    break;

  case 1685:
#line 11297 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 17778 "parser.c" /* yacc.c:1646  */
    break;

  case 1686:
#line 11301 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (cb_flag_optional_file); }
#line 17784 "parser.c" /* yacc.c:1646  */
    break;

  case 1687:
#line 11302 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17790 "parser.c" /* yacc.c:1646  */
    break;

  case 1688:
#line 11303 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17796 "parser.c" /* yacc.c:1646  */
    break;

  case 1689:
#line 11308 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 17804 "parser.c" /* yacc.c:1646  */
    break;

  case 1690:
#line 11312 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int (COB_STORE_ROUND);
	}
	cobc_cs_check = 0;
  }
#line 17817 "parser.c" /* yacc.c:1646  */
    break;

  case 1691:
#line 11324 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 17826 "parser.c" /* yacc.c:1646  */
    break;

  case 1692:
#line 11329 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	cobc_cs_check = 0;
  }
#line 17835 "parser.c" /* yacc.c:1646  */
    break;

  case 1693:
#line 11337 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
#line 17843 "parser.c" /* yacc.c:1646  */
    break;

  case 1694:
#line 11341 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
#line 17851 "parser.c" /* yacc.c:1646  */
    break;

  case 1695:
#line 11345 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
#line 17859 "parser.c" /* yacc.c:1646  */
    break;

  case 1696:
#line 11349 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
#line 17867 "parser.c" /* yacc.c:1646  */
    break;

  case 1697:
#line 11353 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
#line 17875 "parser.c" /* yacc.c:1646  */
    break;

  case 1698:
#line 11357 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
#line 17883 "parser.c" /* yacc.c:1646  */
    break;

  case 1699:
#line 11361 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
#line 17891 "parser.c" /* yacc.c:1646  */
    break;

  case 1700:
#line 11365 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
#line 17899 "parser.c" /* yacc.c:1646  */
    break;

  case 1701:
#line 11371 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17905 "parser.c" /* yacc.c:1646  */
    break;

  case 1702:
#line 11372 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17911 "parser.c" /* yacc.c:1646  */
    break;


#line 17915 "parser.c" /* yacc.c:1646  */
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
#line 11544 "parser.y" /* yacc.c:1906  */

