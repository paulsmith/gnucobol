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
check_prototype_redefines_current_func (const cb_tree prototype_name)
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
	if (cb_relaxed_syntax_check) {
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
	if (cb_relaxed_syntax_check) {
		cb_warning (_("cannot specify both %s and %s, %s ignored"),
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


/* Line 371 of yacc.c  */
#line 1449 "parser.c"

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
#line 2043 "parser.c"

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
#define YYLAST   8568

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  528
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  861
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1993
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2839

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   782

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
     525,   526,   527
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
     241,   243,   246,   250,   254,   258,   259,   262,   264,   267,
     268,   271,   272,   274,   277,   281,   283,   286,   288,   290,
     292,   294,   296,   298,   300,   302,   304,   306,   308,   310,
     311,   315,   318,   322,   326,   328,   329,   331,   333,   337,
     342,   343,   349,   351,   353,   355,   357,   359,   361,   363,
     366,   368,   372,   373,   378,   380,   384,   386,   388,   390,
     392,   394,   396,   398,   400,   403,   404,   407,   411,   413,
     416,   420,   422,   425,   427,   430,   435,   437,   440,   442,
     446,   451,   457,   458,   462,   466,   472,   476,   481,   485,
     489,   495,   496,   500,   501,   504,   505,   508,   509,   512,
     513,   520,   521,   524,   526,   528,   530,   532,   534,   536,
     538,   540,   542,   544,   546,   548,   550,   556,   562,   568,
     574,   580,   582,   584,   586,   588,   590,   592,   594,   595,
     599,   600,   602,   604,   606,   608,   609,   611,   613,   618,
     620,   622,   624,   632,   633,   638,   642,   646,   648,   653,
     654,   656,   658,   659,   665,   668,   671,   673,   674,   679,
     685,   688,   692,   694,   696,   700,   702,   705,   710,   715,
     720,   722,   726,   731,   736,   740,   742,   744,   748,   751,
     754,   757,   758,   761,   765,   767,   770,   772,   774,   780,
     781,   783,   785,   787,   788,   795,   797,   800,   803,   804,
     807,   808,   818,   819,   823,   824,   828,   829,   832,   835,
     836,   842,   846,   848,   850,   851,   854,   857,   860,   862,
     864,   866,   868,   870,   872,   874,   876,   878,   884,   885,
     887,   889,   894,   901,   911,   912,   916,   917,   920,   921,
     924,   928,   934,   940,   942,   944,   946,   948,   952,   958,
     959,   962,   964,   966,   968,   973,   976,   979,   984,   986,
     988,   990,   992,   994,   996,   998,  1003,  1004,  1007,  1010,
    1013,  1016,  1018,  1021,  1022,  1023,  1029,  1030,  1031,  1034,
    1037,  1041,  1043,  1045,  1047,  1048,  1053,  1057,  1060,  1061,
    1063,  1065,  1067,  1068,  1071,  1073,  1076,  1079,  1083,  1085,
    1087,  1089,  1091,  1093,  1095,  1097,  1099,  1101,  1103,  1105,
    1107,  1110,  1112,  1114,  1116,  1118,  1120,  1122,  1124,  1126,
    1128,  1134,  1135,  1138,  1139,  1144,  1150,  1151,  1157,  1160,
    1163,  1164,  1167,  1169,  1171,  1173,  1175,  1177,  1179,  1181,
    1183,  1185,  1187,  1189,  1191,  1193,  1196,  1200,  1201,  1204,
    1205,  1207,  1210,  1212,  1214,  1218,  1220,  1222,  1224,  1226,
    1228,  1230,  1232,  1234,  1236,  1238,  1240,  1242,  1244,  1246,
    1248,  1250,  1252,  1254,  1256,  1258,  1261,  1264,  1267,  1270,
    1273,  1276,  1279,  1282,  1285,  1288,  1290,  1292,  1294,  1296,
    1298,  1300,  1302,  1304,  1306,  1308,  1312,  1316,  1323,  1324,
    1327,  1335,  1344,  1345,  1348,  1349,  1352,  1353,  1357,  1358,
    1362,  1363,  1365,  1367,  1368,  1374,  1376,  1378,  1379,  1383,
    1385,  1388,  1390,  1393,  1396,  1400,  1402,  1403,  1409,  1411,
    1414,  1416,  1420,  1421,  1426,  1429,  1432,  1433,  1434,  1440,
    1441,  1442,  1448,  1449,  1450,  1456,  1457,  1460,  1461,  1468,
    1469,  1472,  1475,  1478,  1482,  1484,  1486,  1489,  1492,  1494,
    1497,  1502,  1504,  1509,  1512,  1513,  1516,  1518,  1520,  1522,
    1524,  1526,  1530,  1535,  1540,  1545,  1549,  1550,  1553,  1554,
    1560,  1561,  1564,  1566,  1568,  1570,  1572,  1574,  1576,  1578,
    1580,  1582,  1584,  1586,  1588,  1590,  1592,  1594,  1596,  1600,
    1602,  1604,  1607,  1609,  1612,  1614,  1616,  1617,  1620,  1623,
    1624,  1627,  1632,  1637,  1638,  1642,  1644,  1646,  1650,  1657,
    1660,  1664,  1667,  1670,  1674,  1677,  1679,  1682,  1685,  1687,
    1689,  1691,  1694,  1697,  1699,  1704,  1707,  1711,  1712,  1713,
    1719,  1720,  1722,  1725,  1729,  1731,  1732,  1737,  1741,  1742,
    1745,  1748,  1751,  1753,  1755,  1758,  1761,  1763,  1765,  1767,
    1769,  1771,  1773,  1775,  1777,  1779,  1781,  1783,  1788,  1790,
    1792,  1798,  1804,  1808,  1812,  1814,  1816,  1818,  1820,  1822,
    1824,  1826,  1828,  1831,  1834,  1837,  1839,  1842,  1844,  1847,
    1849,  1851,  1853,  1855,  1856,  1858,  1860,  1861,  1863,  1865,
    1869,  1872,  1873,  1874,  1875,  1885,  1886,  1891,  1892,  1893,
    1897,  1898,  1902,  1904,  1907,  1912,  1913,  1916,  1919,  1920,
    1924,  1928,  1933,  1938,  1942,  1943,  1945,  1946,  1949,  1952,
    1953,  1954,  1962,  1963,  1966,  1968,  1970,  1973,  1975,  1977,
    1978,  1985,  1986,  1989,  1992,  1994,  1995,  1997,  1998,  1999,
    2003,  2004,  2007,  2010,  2012,  2014,  2016,  2018,  2020,  2022,
    2024,  2026,  2028,  2030,  2032,  2034,  2036,  2038,  2040,  2042,
    2044,  2046,  2048,  2050,  2052,  2054,  2056,  2058,  2060,  2062,
    2064,  2066,  2068,  2070,  2072,  2074,  2076,  2078,  2080,  2082,
    2084,  2086,  2088,  2090,  2092,  2094,  2096,  2098,  2100,  2102,
    2104,  2106,  2108,  2111,  2114,  2115,  2120,  2121,  2126,  2130,
    2134,  2139,  2143,  2148,  2152,  2156,  2161,  2166,  2170,  2175,
    2179,  2184,  2190,  2194,  2199,  2203,  2207,  2209,  2211,  2212,
    2214,  2216,  2219,  2221,  2223,  2225,  2228,  2230,  2233,  2236,
    2239,  2242,  2246,  2250,  2254,  2258,  2260,  2262,  2264,  2266,
    2268,  2270,  2272,  2274,  2276,  2278,  2280,  2282,  2287,  2289,
    2291,  2293,  2295,  2300,  2304,  2306,  2309,  2311,  2313,  2317,
    2321,  2325,  2329,  2333,  2335,  2337,  2338,  2340,  2341,  2346,
    2351,  2357,  2364,  2365,  2368,  2369,  2371,  2372,  2376,  2380,
    2385,  2386,  2389,  2390,  2394,  2396,  2399,  2404,  2405,  2408,
    2409,  2414,  2420,  2421,  2423,  2425,  2427,  2428,  2429,  2433,
    2435,  2438,  2441,  2445,  2446,  2449,  2452,  2455,  2456,  2460,
    2463,  2466,  2471,  2473,  2475,  2477,  2479,  2480,  2483,  2486,
    2487,  2489,  2492,  2495,  2496,  2498,  2501,  2502,  2504,  2505,
    2509,  2511,  2514,  2515,  2519,  2522,  2526,  2527,  2529,  2533,
    2537,  2540,  2541,  2546,  2551,  2552,  2554,  2556,  2558,  2559,
    2564,  2568,  2571,  2573,  2576,  2577,  2579,  2580,  2585,  2589,
    2593,  2597,  2601,  2604,  2607,  2609,  2611,  2614,  2615,  2619,
    2621,  2623,  2625,  2628,  2630,  2633,  2635,  2637,  2640,  2643,
    2646,  2649,  2652,  2654,  2656,  2658,  2661,  2664,  2666,  2668,
    2671,  2674,  2676,  2678,  2680,  2682,  2686,  2688,  2692,  2696,
    2700,  2704,  2705,  2707,  2708,  2713,  2718,  2725,  2732,  2741,
    2750,  2751,  2753,  2754,  2758,  2761,  2762,  2767,  2770,  2772,
    2776,  2778,  2780,  2782,  2785,  2787,  2789,  2792,  2795,  2799,
    2802,  2806,  2808,  2812,  2815,  2817,  2819,  2821,  2822,  2825,
    2826,  2828,  2829,  2833,  2834,  2837,  2839,  2842,  2844,  2846,
    2848,  2849,  2852,  2853,  2857,  2859,  2860,  2864,  2866,  2867,
    2871,  2875,  2876,  2880,  2883,  2884,  2891,  2895,  2898,  2900,
    2901,  2903,  2904,  2908,  2914,  2915,  2918,  2919,  2923,  2927,
    2928,  2931,  2933,  2936,  2941,  2943,  2945,  2947,  2949,  2951,
    2953,  2955,  2956,  2960,  2961,  2965,  2967,  2970,  2971,  2975,
    2978,  2980,  2982,  2984,  2987,  2989,  2991,  2993,  2994,  2998,
    3001,  3007,  3009,  3012,  3015,  3018,  3020,  3022,  3024,  3027,
    3029,  3032,  3037,  3040,  3041,  3043,  3045,  3047,  3049,  3054,
    3055,  3057,  3059,  3062,  3065,  3069,  3073,  3074,  3078,  3079,
    3083,  3087,  3092,  3093,  3098,  3103,  3110,  3111,  3113,  3114,
    3118,  3123,  3129,  3131,  3133,  3135,  3137,  3138,  3142,  3143,
    3147,  3150,  3152,  3153,  3157,  3160,  3161,  3166,  3169,  3170,
    3172,  3174,  3176,  3178,  3182,  3183,  3186,  3188,  3192,  3196,
    3197,  3201,  3203,  3205,  3207,  3211,  3219,  3220,  3225,  3233,
    3234,  3237,  3238,  3241,  3244,  3248,  3252,  3256,  3259,  3260,
    3264,  3266,  3268,  3269,  3271,  3273,  3274,  3278,  3281,  3283,
    3284,  3289,  3294,  3295,  3297,  3298,  3303,  3308,  3309,  3312,
    3316,  3317,  3319,  3321,  3322,  3327,  3332,  3339,  3340,  3343,
    3344,  3347,  3349,  3352,  3356,  3357,  3359,  3360,  3364,  3366,
    3368,  3370,  3372,  3374,  3376,  3378,  3380,  3382,  3384,  3386,
    3391,  3395,  3397,  3400,  3403,  3406,  3409,  3412,  3415,  3418,
    3421,  3424,  3429,  3433,  3438,  3440,  3443,  3447,  3449,  3452,
    3456,  3460,  3465,  3466,  3470,  3471,  3479,  3480,  3486,  3487,
    3490,  3491,  3494,  3495,  3499,  3500,  3503,  3508,  3509,  3512,
    3517,  3518,  3523,  3528,  3529,  3533,  3534,  3539,  3541,  3543,
    3545,  3548,  3551,  3554,  3557,  3559,  3561,  3564,  3566,  3567,
    3569,  3570,  3575,  3578,  3579,  3582,  3584,  3589,  3594,  3595,
    3597,  3599,  3601,  3603,  3605,  3606,  3611,  3617,  3619,  3622,
    3625,  3626,  3630,  3632,  3634,  3635,  3640,  3641,  3643,  3644,
    3649,  3654,  3661,  3668,  3669,  3671,  3674,  3675,  3677,  3678,
    3682,  3684,  3687,  3688,  3692,  3698,  3699,  3703,  3706,  3707,
    3712,  3719,  3720,  3724,  3726,  3730,  3733,  3736,  3739,  3743,
    3744,  3748,  3749,  3753,  3754,  3758,  3759,  3761,  3762,  3766,
    3768,  3770,  3772,  3774,  3776,  3784,  3785,  3787,  3789,  3791,
    3793,  3795,  3797,  3802,  3804,  3807,  3809,  3812,  3816,  3817,
    3819,  3822,  3824,  3828,  3830,  3832,  3837,  3839,  3841,  3843,
    3844,  3849,  3855,  3856,  3859,  3860,  3865,  3869,  3873,  3875,
    3877,  3878,  3880,  3882,  3883,  3885,  3886,  3889,  3892,  3893,
    3895,  3898,  3900,  3902,  3903,  3905,  3908,  3910,  3912,  3913,
    3916,  3919,  3920,  3922,  3925,  3926,  3928,  3931,  3932,  3935,
    3938,  3939,  3941,  3944,  3945,  3947,  3950,  3951,  3954,  3957,
    3958,  3960,  3963,  3964,  3966,  3969,  3972,  3975,  3978,  3981,
    3982,  3984,  3987,  3988,  3990,  3993,  3996,  3999,  4000,  4002,
    4005,  4006,  4008,  4011,  4012,  4014,  4017,  4020,  4021,  4023,
    4026,  4027,  4029,  4032,  4033,  4036,  4038,  4040,  4041,  4044,
    4046,  4049,  4052,  4054,  4056,  4058,  4060,  4062,  4064,  4066,
    4068,  4070,  4072,  4074,  4076,  4078,  4080,  4082,  4084,  4086,
    4088,  4090,  4092,  4094,  4096,  4098,  4100,  4102,  4105,  4107,
    4109,  4111,  4113,  4115,  4117,  4119,  4123,  4124,  4126,  4128,
    4132,  4136,  4138,  4142,  4146,  4148,  4152,  4154,  4157,  4160,
    4162,  4166,  4168,  4170,  4174,  4176,  4180,  4182,  4186,  4188,
    4191,  4194,  4196,  4198,  4200,  4203,  4205,  4207,  4209,  4212,
    4214,  4215,  4218,  4220,  4222,  4224,  4228,  4230,  4232,  4235,
    4237,  4239,  4241,  4244,  4246,  4248,  4250,  4252,  4254,  4256,
    4258,  4261,  4263,  4265,  4269,  4270,  4272,  4274,  4277,  4279,
    4281,  4283,  4285,  4288,  4291,  4294,  4299,  4303,  4305,  4307,
    4310,  4312,  4314,  4316,  4318,  4320,  4322,  4324,  4327,  4330,
    4333,  4335,  4337,  4339,  4341,  4343,  4345,  4347,  4349,  4351,
    4353,  4355,  4357,  4359,  4361,  4363,  4365,  4367,  4369,  4371,
    4373,  4375,  4377,  4379,  4381,  4383,  4385,  4388,  4390,  4394,
    4397,  4400,  4402,  4404,  4408,  4411,  4414,  4416,  4418,  4422,
    4426,  4431,  4437,  4439,  4441,  4443,  4445,  4447,  4449,  4451,
    4453,  4455,  4457,  4459,  4462,  4464,  4468,  4470,  4472,  4474,
    4476,  4478,  4480,  4482,  4485,  4491,  4497,  4503,  4508,  4514,
    4520,  4526,  4532,  4538,  4541,  4544,  4546,  4548,  4550,  4552,
    4554,  4556,  4558,  4560,  4562,  4563,  4568,  4574,  4575,  4579,
    4582,  4584,  4588,  4592,  4594,  4598,  4600,  4604,  4606,  4610,
    4612,  4616,  4617,  4618,  4620,  4621,  4623,  4624,  4626,  4627,
    4630,  4631,  4634,  4635,  4637,  4639,  4640,  4642,  4643,  4645,
    4648,  4649,  4652,  4653,  4657,  4659,  4661,  4663,  4665,  4667,
    4669,  4671,  4673,  4674,  4677,  4679,  4681,  4683,  4685,  4687,
    4689,  4691,  4693,  4695,  4697,  4699,  4701,  4703,  4705,  4707,
    4709,  4711,  4713,  4715,  4717,  4719,  4721,  4723,  4725,  4727,
    4729,  4731,  4733,  4735,  4737,  4739,  4741,  4743,  4745,  4747,
    4749,  4751,  4753,  4755,  4757,  4759,  4761,  4763,  4765,  4767,
    4769,  4771,  4773,  4775,  4777,  4779,  4781,  4783,  4785,  4787,
    4789,  4791,  4793,  4795,  4797,  4799,  4801,  4803,  4805,  4807,
    4809,  4811,  4813,  4815,  4817,  4818,  4820,  4821,  4823,  4824,
    4826,  4827,  4829,  4830,  4832,  4833,  4835,  4836,  4838,  4839,
    4841,  4842,  4844,  4845,  4847,  4848,  4850,  4851,  4853,  4854,
    4857,  4858,  4860,  4861,  4863,  4864,  4866,  4867,  4869,  4870,
    4872,  4873,  4875,  4878,  4879,  4881,  4882,  4884,  4885,  4887,
    4888,  4890,  4891,  4893,  4895,  4896,  4898,  4899,  4901,  4903,
    4904,  4906,  4908,  4909,  4912,  4915,  4916,  4918,  4919,  4921,
    4922,  4924,  4925,  4927,  4929,  4930,  4932,  4933,  4935,  4936,
    4939,  4941,  4943,  4944,  4946,  4947,  4949,  4950,  4952,  4953,
    4955,  4956,  4958,  4960,  4961,  4963,  4964,  4966,  4967,  4969,
    4970,  4972,  4975,  4976,  4978,  4979,  4981,  4982,  4984,  4985,
    4987,  4988,  4990,  4991,  4993,  4994,  4996,  4997,  4999,  5001,
    5002,  5004,  5005,  5009,  5010,  5012,  5015,  5017,  5019,  5021,
    5023,  5025,  5027,  5029,  5031,  5033,  5035,  5037,  5039,  5041,
    5043,  5045,  5047,  5049,  5051,  5053,  5056,  5059,  5061,  5063,
    5065,  5067,  5069,  5071,  5074,  5076,  5080,  5083,  5085,  5087,
    5089,  5092,  5094,  5097,  5099,  5102,  5104,  5107,  5109,  5112,
    5114,  5117,  5119,  5122
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     529,     0,    -1,    -1,   530,   531,    -1,   534,    -1,   532,
      -1,   533,    -1,   532,   533,    -1,   536,    -1,   537,    -1,
      -1,   535,   542,    -1,   543,   544,   542,   538,    -1,   543,
     547,   542,   541,    -1,    -1,   539,    -1,   540,    -1,   539,
     540,    -1,   144,   550,   464,    -1,   140,   550,   464,    -1,
     556,   671,   833,    -1,    -1,   218,   123,   464,    -1,   217,
     123,   464,    -1,    -1,    -1,   349,   545,   464,   549,   551,
     546,   552,   464,    -1,    -1,   203,   548,   464,   549,   551,
     464,    -1,   350,    -1,   260,    -1,   350,    -1,   260,    -1,
      -1,    26,   260,    -1,    -1,  1332,   553,  1347,    -1,    73,
      -1,   554,    -1,   555,    -1,   173,    -1,   555,    73,    -1,
      73,   555,    -1,   469,    -1,   363,    -1,   557,   558,   622,
      -1,    -1,   155,   123,   464,    -1,   559,   560,   583,   584,
     576,    -1,    -1,    85,   403,   464,    -1,    -1,   561,    -1,
     565,    -1,   561,   565,    -1,   565,   561,    -1,    -1,   426,
     464,   562,   563,    -1,    -1,   575,   564,   464,    -1,    -1,
    1364,   108,   276,    -1,    -1,   310,   464,   566,   567,    -1,
      -1,   575,   464,    -1,   575,   568,   464,    -1,   568,   464,
      -1,   569,    -1,   568,   569,    -1,   570,    -1,   571,    -1,
     572,    -1,   573,    -1,   272,   421,  1332,  1278,  1374,    -1,
    1380,  1332,  1244,    -1,   405,  1332,  1278,    -1,  1318,    60,
    1332,   574,    -1,  1244,    -1,   261,    -1,   508,    -1,   446,
      -1,   519,    -1,   575,   519,    -1,    -1,    -1,   378,   464,
     577,   578,    -1,    -1,   579,   464,    -1,   579,     1,   464,
      -1,   580,    -1,   579,   580,    -1,   202,     9,   233,    -1,
     202,   519,   581,    -1,   202,   582,   233,    -1,    -1,    26,
     260,    -1,   204,    -1,   582,   204,    -1,    -1,   428,   464,
      -1,    -1,   585,    -1,   586,   464,    -1,   585,   586,   464,
      -1,   587,    -1,   586,   587,    -1,   588,    -1,   594,    -1,
     603,    -1,   613,    -1,   610,    -1,   614,    -1,   616,    -1,
     617,    -1,   618,    -1,   619,    -1,   620,    -1,   621,    -1,
      -1,   519,   589,   590,    -1,  1332,    97,    -1,  1278,  1332,
    1248,    -1,  1332,  1248,   591,    -1,   592,    -1,    -1,   592,
      -1,   593,    -1,  1074,  1344,  1248,    -1,   593,  1074,  1344,
    1248,    -1,    -1,    11,  1248,   595,  1332,   596,    -1,   284,
      -1,   430,    -1,   431,    -1,   127,    -1,    28,    -1,   597,
      -1,   598,    -1,   597,   598,    -1,   601,    -1,   601,   455,
     601,    -1,    -1,   601,    17,   599,   600,    -1,   601,    -1,
     600,    17,   601,    -1,   260,    -1,   427,    -1,   525,    -1,
     355,    -1,   216,    -1,   270,    -1,   427,    -1,   525,    -1,
     605,   604,    -1,    -1,   222,   519,    -1,   444,  1319,   606,
      -1,   607,    -1,   606,   607,    -1,   608,  1333,   609,    -1,
    1249,    -1,   608,  1249,    -1,  1279,    -1,   609,  1279,    -1,
      59,  1248,  1332,   611,    -1,   612,    -1,   611,   612,    -1,
    1281,    -1,  1281,   455,  1281,    -1,   261,  1248,  1332,   260,
      -1,    99,  1351,  1332,   260,   615,    -1,    -1,  1364,   334,
     260,    -1,   109,  1332,    69,    -1,   307,   415,  1332,   481,
     409,    -1,   101,  1332,  1243,    -1,    97,   434,  1332,  1243,
      -1,   399,  1332,  1243,    -1,   166,  1332,  1243,    -1,   623,
     624,   626,   625,   661,    -1,    -1,   230,   403,   464,    -1,
      -1,   176,   464,    -1,    -1,   238,   464,    -1,    -1,   626,
     627,    -1,    -1,   406,  1304,  1248,   628,   629,   464,    -1,
      -1,   629,   630,    -1,   631,    -1,   638,    -1,   640,    -1,
     642,    -1,   644,    -1,   646,    -1,   650,    -1,   652,    -1,
     653,    -1,   654,    -1,   656,    -1,   657,    -1,   659,    -1,
      29,  1361,   635,   634,   636,    -1,    29,  1361,   635,   633,
     637,    -1,    29,  1361,   635,   120,   637,    -1,    29,  1361,
     635,   242,   637,    -1,    29,  1361,   635,   632,   637,    -1,
     342,    -1,   343,    -1,   341,    -1,   118,    -1,   119,    -1,
     450,    -1,   356,    -1,    -1,   256,     7,  1323,    -1,    -1,
     173,    -1,   126,    -1,   260,    -1,  1275,    -1,    -1,   260,
      -1,  1275,    -1,     4,  1339,  1332,   639,    -1,   411,    -1,
     126,    -1,   356,    -1,    19,  1348,  1334,  1332,   655,  1298,
     641,    -1,    -1,   443,   516,     9,  1284,    -1,   443,   516,
     602,    -1,  1365,  1332,   643,    -1,   519,    -1,   645,   434,
    1332,  1243,    -1,    -1,   467,    -1,   423,    -1,    -1,   647,
     266,  1339,  1332,   648,    -1,   271,   649,    -1,    33,   649,
      -1,   169,    -1,    -1,   518,   266,   315,  1373,    -1,   518,
     266,   315,   278,  1373,    -1,   518,   393,    -1,   321,  1332,
     651,    -1,   651,    -1,   224,    -1,  1348,  1316,   411,    -1,
     368,    -1,   256,   411,    -1,   326,  1318,  1332,  1247,    -1,
     360,   114,  1332,   430,    -1,   360,  1334,  1332,   655,    -1,
    1243,    -1,  1243,   465,  1242,    -1,  1243,   425,  1332,  1242,
      -1,   368,  1334,  1332,  1243,    -1,   380,   658,  1313,    -1,
     291,    -1,  1278,    -1,   414,  1364,   660,    -1,     9,  1345,
      -1,   291,  1345,    -1,   358,   316,    -1,    -1,   662,   464,
      -1,   662,     1,   464,    -1,   663,    -1,   662,   663,    -1,
     664,    -1,   666,    -1,   397,   665,  1313,  1325,  1233,    -1,
      -1,   360,    -1,   423,    -1,   424,    -1,    -1,   278,   667,
    1323,  1357,  1320,   668,    -1,   669,    -1,   668,   669,    -1,
    1234,   670,    -1,    -1,   337,  1278,    -1,    -1,   673,   674,
     675,   672,   707,   768,   770,   772,   817,    -1,    -1,   103,
     123,   464,    -1,    -1,   467,   403,   464,    -1,    -1,   675,
     676,    -1,   677,   709,    -1,    -1,   679,  1234,   678,   680,
     464,    -1,   679,     1,   464,    -1,   175,    -1,   401,    -1,
      -1,   680,   681,    -1,  1332,   173,    -1,  1332,   207,    -1,
     682,    -1,   684,    -1,   688,    -1,   689,    -1,   692,    -1,
     693,    -1,   699,    -1,   702,    -1,   704,    -1,    47,  1320,
    1278,   687,   683,    -1,    -1,   362,    -1,    58,    -1,   360,
    1320,  1278,  1319,    -1,   360,  1320,  1278,   459,  1278,  1319,
      -1,   360,  1332,   514,  1327,  1354,   686,   687,  1319,   685,
      -1,    -1,   115,  1343,  1243,    -1,    -1,  1326,  1278,    -1,
      -1,   459,  1278,    -1,   243,  1375,  1371,    -1,   512,   312,
     690,  1332,   691,    -1,   512,   312,   177,  1332,   691,    -1,
     519,    -1,   217,    -1,   260,    -1,  1275,    -1,   103,  1375,
    1245,    -1,   254,  1332,  1247,  1338,   694,    -1,    -1,   694,
     695,    -1,   696,    -1,   697,    -1,   698,    -1,  1364,   191,
    1315,  1247,    -1,   478,  1247,    -1,    48,  1247,    -1,   361,
    1339,  1332,   700,    -1,   174,    -1,   511,    -1,   181,    -1,
     513,    -1,   701,    -1,   486,    -1,   396,    -1,    63,  1332,
     643,   703,    -1,    -1,   192,  1242,    -1,   705,   706,    -1,
     375,  1332,    -1,   377,  1312,    -1,  1248,    -1,   706,  1248,
      -1,    -1,    -1,   521,   403,   464,   708,   709,    -1,    -1,
      -1,   710,   711,    -1,   712,   464,    -1,   711,   712,   464,
      -1,   728,    -1,   724,    -1,   726,    -1,    -1,   714,   715,
     713,   731,    -1,   714,     1,   464,    -1,  1296,   519,    -1,
      -1,   178,    -1,   716,    -1,   519,    -1,    -1,  1332,   207,
      -1,  1282,    -1,   249,   719,    -1,   248,   719,    -1,    50,
    1342,   719,    -1,  1272,    -1,    41,    -1,    44,    -1,    43,
      -1,    42,    -1,    40,    -1,   723,    -1,   741,    -1,   742,
      -1,   720,    -1,   721,    -1,   722,    -1,     1,   464,    -1,
     183,    -1,   187,    -1,   184,    -1,   185,    -1,   182,    -1,
     186,    -1,   188,    -1,   336,    -1,   351,    -1,   420,   716,
     372,  1275,   725,    -1,    -1,   455,  1275,    -1,    -1,   129,
     716,   727,   762,    -1,   714,   716,    86,   717,   730,    -1,
      -1,   413,   716,   729,   736,   762,    -1,  1314,   718,    -1,
     199,   519,    -1,    -1,   731,   732,    -1,   733,    -1,   734,
      -1,   737,    -1,   738,    -1,   739,    -1,   743,    -1,   746,
      -1,   758,    -1,   759,    -1,   760,    -1,   761,    -1,   762,
      -1,   767,    -1,   364,  1272,    -1,  1332,   173,   735,    -1,
      -1,    26,   260,    -1,    -1,   737,    -1,  1332,   207,    -1,
     333,    -1,   740,    -1,   505,  1332,   740,    -1,    39,    -1,
      74,    -1,   741,    -1,   742,    -1,    78,    -1,    79,    -1,
      80,    -1,    81,    -1,    82,    -1,   120,    -1,   223,    -1,
     325,    -1,   336,    -1,   351,    -1,   419,    -1,   417,    -1,
     418,    -1,   493,    -1,   491,    -1,   492,    -1,    41,  1352,
      -1,    41,   490,    -1,    44,  1352,    -1,    44,   490,    -1,
      43,  1352,    -1,    43,   490,    -1,    42,  1352,    -1,    42,
     490,    -1,    40,  1352,    -1,    40,   490,    -1,   183,    -1,
     184,    -1,   182,    -1,   185,    -1,   186,    -1,   281,    -1,
      76,    -1,   190,    -1,    77,    -1,   189,    -1,  1353,   245,
    1308,    -1,  1353,   481,  1308,    -1,   311,  1278,   747,  1359,
     749,   745,    -1,    -1,   436,  1278,    -1,   311,  1278,   747,
    1359,   749,   752,   755,    -1,   311,   126,   750,   748,   747,
     751,   752,   755,    -1,    -1,   459,  1278,    -1,    -1,   199,
    1278,    -1,    -1,   115,  1343,  1243,    -1,    -1,    53,  1327,
     519,    -1,    -1,   227,    -1,   753,    -1,    -1,   753,   754,
    1334,  1332,  1242,    -1,    27,    -1,   116,    -1,    -1,   224,
    1317,   756,    -1,   757,    -1,   756,   757,    -1,   519,    -1,
     239,  1350,    -1,   445,  1335,    -1,    45,  1362,   525,    -1,
      36,    -1,    -1,   512,  1333,   764,   763,   766,    -1,   765,
      -1,   764,   765,    -1,  1282,    -1,  1282,   455,  1282,    -1,
      -1,  1363,   466,  1332,  1282,    -1,    21,   248,    -1,    21,
     307,    -1,    -1,    -1,   265,   403,   464,   769,   709,    -1,
      -1,    -1,   259,   403,   464,   771,   709,    -1,    -1,    -1,
     375,   403,   464,   773,   774,    -1,    -1,   774,   775,    -1,
      -1,   357,  1235,   776,   777,   464,   791,    -1,    -1,   777,
     778,    -1,     1,   464,    -1,  1332,   207,    -1,    62,  1332,
    1262,    -1,   779,    -1,   782,    -1,  1388,   780,    -1,  1324,
     781,    -1,  1271,    -1,   781,  1271,    -1,   327,  1337,   783,
     784,    -1,  1280,    -1,  1280,  1372,  1280,  1367,    -1,  1280,
    1372,    -1,    -1,   784,   785,    -1,   786,    -1,   787,    -1,
     788,    -1,   789,    -1,   790,    -1,   214,  1332,  1280,    -1,
     180,  1381,  1332,  1280,    -1,   244,  1382,  1332,  1280,    -1,
     244,  1381,  1332,  1280,    -1,   191,  1332,  1280,    -1,    -1,
     791,   792,    -1,    -1,   714,   715,   793,   794,   464,    -1,
      -1,   794,   795,    -1,   796,    -1,   800,    -1,   806,    -1,
     738,    -1,   816,    -1,   743,    -1,   758,    -1,   808,    -1,
     760,    -1,   814,    -1,   801,    -1,   762,    -1,   804,    -1,
     815,    -1,   744,    -1,   805,    -1,   485,  1332,   797,    -1,
    1386,    -1,  1384,    -1,  1382,   798,    -1,  1381,    -1,  1383,
     798,    -1,  1385,    -1,  1387,    -1,    -1,  1271,   799,    -1,
     179,   799,    -1,    -1,   319,   327,    -1,   289,   213,  1332,
     811,    -1,   442,  1342,  1255,   802,    -1,    -1,   381,  1343,
     803,    -1,  1271,    -1,   179,    -1,   339,   516,  1210,    -1,
     514,  1271,   199,  1257,    49,  1257,    -1,   807,   810,    -1,
     256,  1341,  1333,    -1,   258,  1312,    -1,   809,   812,    -1,
    1366,  1341,  1333,    -1,  1367,  1312,    -1,   811,    -1,   810,
     811,    -1,   335,  1278,    -1,  1280,    -1,   290,    -1,   813,
      -1,   812,   813,    -1,   335,  1278,    -1,  1280,    -1,   425,
    1332,  1257,  1305,    -1,   213,  1329,    -1,   505,  1332,   120,
      -1,    -1,    -1,   398,   403,   464,   818,   819,    -1,    -1,
     820,    -1,   821,   464,    -1,   820,   821,   464,    -1,   728,
      -1,    -1,   714,   715,   822,   823,    -1,   714,     1,   464,
      -1,    -1,   823,   824,    -1,    45,   256,    -1,    45,   398,
      -1,    38,    -1,    46,    -1,   162,   825,    -1,   162,   826,
      -1,   215,    -1,   269,    -1,   386,    -1,   487,    -1,   324,
      -1,   212,    -1,   247,    -1,    32,    -1,   404,    -1,   379,
      -1,   201,    -1,   353,    57,  1332,  1262,    -1,   353,    -1,
     469,    -1,   256,  1340,  1332,   829,  1264,    -1,  1366,  1340,
    1332,   830,  1264,    -1,   193,  1332,  1264,    -1,    35,  1332,
    1264,    -1,   739,    -1,   760,    -1,   832,    -1,   758,    -1,
     743,    -1,   762,    -1,   738,    -1,   831,    -1,   510,  1271,
      -1,   199,  1267,    -1,   459,  1271,    -1,   158,    -1,  1322,
     256,    -1,   160,    -1,  1322,   398,    -1,   335,    -1,   476,
      -1,   274,    -1,   471,    -1,    -1,   827,    -1,   828,    -1,
      -1,   827,    -1,   828,    -1,   311,  1278,  1359,    -1,  1332,
     207,    -1,    -1,    -1,    -1,   345,   123,   837,   845,   464,
     834,   846,   835,   848,    -1,    -1,   836,   859,   464,   848,
      -1,    -1,    -1,   510,   838,   840,    -1,    -1,    56,   839,
     840,    -1,   841,    -1,   840,   841,    -1,   842,   843,   844,
     519,    -1,    -1,  1317,   366,    -1,  1317,   512,    -1,    -1,
     421,  1332,    32,    -1,   421,  1332,   111,    -1,   490,   421,
    1332,    32,    -1,   490,   421,  1332,  1278,    -1,   421,  1332,
    1278,    -1,    -1,   318,    -1,    -1,   384,   314,    -1,   384,
     519,    -1,    -1,    -1,   110,   464,   847,   848,   131,   110,
     464,    -1,    -1,   848,   849,    -1,   850,    -1,   853,    -1,
     859,   464,    -1,   854,    -1,   464,    -1,    -1,   519,   403,
     855,   464,   851,   852,    -1,    -1,  1147,   464,    -1,   519,
     464,    -1,   519,    -1,    -1,  1278,    -1,    -1,    -1,   857,
     858,   859,    -1,    -1,   860,   861,    -1,   859,   861,    -1,
     862,    -1,   878,    -1,   883,    -1,   887,    -1,   892,    -1,
     910,    -1,   913,    -1,   921,    -1,   917,    -1,   922,    -1,
     923,    -1,   928,    -1,   942,    -1,   946,    -1,   949,    -1,
     963,    -1,   967,    -1,   970,    -1,   973,    -1,   977,    -1,
     978,    -1,   982,    -1,   992,    -1,   995,    -1,  1013,    -1,
    1015,    -1,  1018,    -1,  1022,    -1,  1028,    -1,  1040,    -1,
    1048,    -1,  1049,    -1,  1052,    -1,  1053,    -1,  1057,    -1,
    1062,    -1,  1063,    -1,  1071,    -1,  1087,    -1,  1097,    -1,
    1106,    -1,  1111,    -1,  1120,    -1,  1124,    -1,  1126,    -1,
    1129,    -1,  1132,    -1,  1135,    -1,  1162,    -1,   289,   408,
      -1,     1,  1309,    -1,    -1,     3,   863,   864,   877,    -1,
      -1,   866,   865,   867,  1170,    -1,  1271,   199,   870,    -1,
    1271,   199,  1367,    -1,  1271,   199,   104,   524,    -1,  1271,
     199,   104,    -1,  1271,   199,   105,   523,    -1,  1271,   199,
     105,    -1,  1271,   199,   106,    -1,  1271,   199,   164,   241,
      -1,  1271,   199,   167,   434,    -1,  1271,   199,   456,    -1,
    1271,   199,   507,   280,    -1,  1271,   199,    70,    -1,  1271,
     199,   157,  1170,    -1,  1271,   199,   155,  1260,  1170,    -1,
    1271,   199,    24,    -1,  1271,   199,    25,  1170,    -1,  1271,
     199,  1237,    -1,  1271,   199,   519,    -1,  1271,    -1,   314,
      -1,    -1,   868,    -1,   869,    -1,   868,   869,    -1,   871,
      -1,   200,    -1,   874,    -1,  1364,   875,    -1,   258,    -1,
     256,   305,    -1,  1315,   872,    -1,  1315,   873,    -1,    30,
    1264,    -1,   256,  1340,  1264,    -1,  1366,  1340,  1264,    -1,
     337,  1340,  1264,    -1,   276,  1332,    47,    -1,    32,    -1,
     448,    -1,    38,    -1,    46,    -1,    92,    -1,   201,    -1,
     215,    -1,   247,    -1,   267,    -1,   269,    -1,   292,    -1,
     324,    -1,   353,    57,  1332,  1262,    -1,   353,    -1,   379,
      -1,   386,    -1,   404,    -1,   354,   421,  1332,  1264,    -1,
     421,  1332,  1264,    -1,   487,    -1,   291,   876,    -1,   876,
      -1,   503,    -1,   193,  1332,  1264,    -1,    35,  1332,  1264,
      -1,   400,   496,  1209,    -1,   400,   124,  1209,    -1,   457,
    1311,  1265,    -1,   497,    -1,   111,    -1,    -1,   132,    -1,
      -1,     5,   879,   880,   882,    -1,  1253,   459,  1229,  1182,
      -1,  1253,   881,   206,  1229,  1182,    -1,    95,  1271,   459,
    1271,  1305,  1182,    -1,    -1,   459,  1254,    -1,    -1,   133,
      -1,    -1,    10,   884,   885,    -1,  1271,  1299,   886,    -1,
    1223,    58,  1300,   886,    -1,    -1,   384,  1251,    -1,    -1,
      18,   888,   889,    -1,   890,    -1,   889,   890,    -1,  1239,
     459,   891,  1239,    -1,    -1,   347,   459,    -1,    -1,    51,
     893,   894,   909,    -1,   895,  1263,   896,   901,   904,    -1,
      -1,   433,    -1,   435,    -1,   275,    -1,    -1,    -1,   510,
     897,   898,    -1,   899,    -1,   898,   899,    -1,   900,   314,
      -1,   900,   843,  1254,    -1,    -1,  1317,   366,    -1,  1317,
      88,    -1,  1317,   512,    -1,    -1,   902,  1331,  1271,    -1,
     902,   903,    -1,   902,   295,    -1,   902,     6,  1342,  1271,
      -1,   384,    -1,   206,    -1,   473,    -1,   314,    -1,    -1,
     906,   907,    -1,   908,   905,    -1,    -1,   906,    -1,   167,
     856,    -1,   474,   856,    -1,    -1,   908,    -1,   300,   856,
      -1,    -1,   134,    -1,    -1,    52,   911,   912,    -1,  1262,
      -1,   912,  1262,    -1,    -1,    61,   914,   915,    -1,  1234,
     916,    -1,   915,  1234,   916,    -1,    -1,  1376,    -1,  1376,
    1325,   371,    -1,  1364,   291,   388,    -1,  1364,   266,    -1,
      -1,    75,   918,   919,   920,    -1,  1229,  1368,  1223,  1182,
      -1,    -1,   135,    -1,    72,    -1,    89,    -1,    -1,   112,
     924,   925,   927,    -1,  1234,  1348,  1203,    -1,   467,   926,
      -1,  1234,    -1,   926,  1234,    -1,    -1,   136,    -1,    -1,
     120,   929,   930,   941,    -1,  1262,   501,  1177,    -1,  1262,
     502,  1177,    -1,  1262,   499,  1177,    -1,  1262,   500,  1177,
      -1,   931,  1177,    -1,   932,  1252,    -1,  1253,    -1,   933,
      -1,   932,   933,    -1,    -1,   935,   934,   936,    -1,  1253,
      -1,   314,    -1,   937,    -1,   936,   937,    -1,   938,    -1,
    1364,   304,    -1,   874,    -1,   871,    -1,  1364,   940,    -1,
     498,  1237,    -1,   498,   519,    -1,   498,   342,    -1,   498,
     939,    -1,    97,    -1,    98,    -1,    38,    -1,    45,   256,
      -1,    45,   398,    -1,    46,    -1,    92,    -1,   162,   825,
      -1,   162,   826,    -1,   215,    -1,   269,    -1,   324,    -1,
     386,    -1,   421,  1332,  1264,    -1,   487,    -1,   193,  1332,
    1264,    -1,    35,  1332,  1264,    -1,   400,   496,  1209,    -1,
     400,   124,  1209,    -1,    -1,   137,    -1,    -1,   122,   943,
     944,   945,    -1,  1254,   232,  1229,  1182,    -1,  1254,   232,
    1254,   206,  1229,  1182,    -1,  1254,    49,  1254,   206,  1229,
    1182,    -1,  1254,   232,  1254,   206,  1230,   370,  1230,  1182,
      -1,  1254,    49,  1254,   206,  1230,   370,  1230,  1182,    -1,
      -1,   138,    -1,    -1,   154,   947,   948,    -1,   260,   896,
      -1,    -1,   165,   950,   951,   962,    -1,   952,   954,    -1,
     953,    -1,   952,    17,   953,    -1,  1211,    -1,   477,    -1,
     466,    -1,   955,   957,    -1,   955,    -1,   956,    -1,   955,
     956,    -1,   958,   856,    -1,   516,   322,   856,    -1,   516,
     959,    -1,   958,   516,   959,    -1,   960,    -1,   959,    17,
     960,    -1,  1212,   961,    -1,    21,    -1,   477,    -1,   466,
      -1,    -1,   455,  1211,    -1,    -1,   139,    -1,    -1,   170,
     964,   965,    -1,    -1,   348,   966,    -1,   202,    -1,   330,
     102,    -1,   330,    -1,   403,    -1,   329,    -1,    -1,   902,
    1254,    -1,    -1,   198,   968,   969,    -1,  1250,    -1,    -1,
     205,   971,   972,    -1,  1275,    -1,    -1,   208,   974,   975,
      -1,  1360,  1238,   976,    -1,    -1,   115,  1343,  1271,    -1,
     209,   966,    -1,    -1,   219,   979,  1210,  1358,   980,   981,
      -1,   856,   130,   856,    -1,   130,   856,    -1,   856,    -1,
      -1,   141,    -1,    -1,   226,   983,   984,    -1,  1250,   985,
     986,   987,   991,    -1,    -1,  1364,   178,    -1,    -1,     9,
    1360,   512,    -1,   990,  1360,   512,    -1,    -1,   374,   988,
      -1,   989,    -1,   988,   989,    -1,   990,  1321,    49,  1254,
      -1,    12,    -1,    15,    -1,   307,    -1,    16,    -1,   308,
      -1,   281,    -1,   282,    -1,    -1,  1358,  1360,   111,    -1,
      -1,   228,   993,   994,    -1,  1235,    -1,   994,  1235,    -1,
      -1,   231,   996,   997,    -1,   998,   999,    -1,  1271,    -1,
    1282,    -1,  1285,    -1,  1000,  1002,    -1,  1000,    -1,  1002,
      -1,  1003,    -1,    -1,   449,  1001,  1004,    -1,   374,  1006,
      -1,    93,  1260,   459,  1261,  1010,    -1,  1005,    -1,  1004,
    1005,    -1,  1260,   192,    -1,    58,  1010,    -1,     9,    -1,
     245,    -1,   481,    -1,  1260,  1010,    -1,  1007,    -1,  1006,
    1007,    -1,    58,    49,  1260,  1010,    -1,  1008,  1009,    -1,
      -1,     9,    -1,   245,    -1,   180,    -1,   481,    -1,  1260,
      49,  1261,  1010,    -1,    -1,  1011,    -1,  1012,    -1,  1011,
    1012,    -1,  1012,  1011,    -1,    37,  1330,  1254,    -1,     8,
    1330,  1254,    -1,    -1,   273,  1014,  1089,    -1,    -1,   277,
    1016,  1017,    -1,  1254,   459,  1250,    -1,    95,  1254,   459,
    1250,    -1,    -1,   279,  1019,  1020,  1021,    -1,  1254,    49,
    1229,  1182,    -1,  1254,    49,  1254,   206,  1229,  1182,    -1,
      -1,   142,    -1,    -1,   317,  1023,  1024,    -1,  1025,  1026,
    1233,  1027,    -1,  1024,  1025,  1026,  1233,  1027,    -1,   229,
      -1,   323,    -1,   237,    -1,   172,    -1,    -1,   414,  1364,
     660,    -1,    -1,  1364,   291,   388,    -1,  1364,   266,    -1,
     387,    -1,    -1,   330,  1029,  1030,    -1,  1034,  1035,    -1,
      -1,  1035,  1031,   856,  1032,    -1,  1035,  1033,    -1,    -1,
     143,    -1,   143,    -1,   464,    -1,  1239,    -1,  1239,   455,
    1239,    -1,    -1,  1263,   458,    -1,   194,    -1,  1036,   495,
    1037,    -1,  1036,   514,  1038,    -1,    -1,  1364,   452,  1167,
      -1,   170,    -1,  1210,    -1,  1039,    -1,  1038,     8,  1039,
      -1,  1271,   199,  1254,    49,  1254,   495,  1210,    -1,    -1,
     358,  1041,  1042,  1047,    -1,  1234,  1302,  1348,  1043,  1044,
    1045,  1046,    -1,    -1,   232,  1271,    -1,    -1,   221,   266,
      -1,  1364,   266,    -1,  1364,   240,   266,    -1,  1364,   291,
     266,    -1,  1364,   220,   266,    -1,  1364,   515,    -1,    -1,
     241,  1332,  1271,    -1,  1203,    -1,  1193,    -1,    -1,   145,
      -1,   359,    -1,    -1,   369,  1050,  1051,    -1,  1231,  1165,
      -1,   382,    -1,    -1,   383,  1054,  1055,  1056,    -1,  1234,
    1348,  1043,  1192,    -1,    -1,   146,    -1,    -1,   389,  1058,
    1059,  1061,    -1,  1231,  1165,  1060,  1203,    -1,    -1,  1364,
     266,    -1,  1364,   291,   266,    -1,    -1,   147,    -1,   393,
      -1,    -1,   402,  1064,  1065,  1070,    -1,  1232,  1066,  1067,
    1068,    -1,     9,  1232,  1067,   516,  1211,   856,    -1,    -1,
     514,  1271,    -1,    -1,   131,   856,    -1,  1069,    -1,  1069,
    1068,    -1,   516,  1210,   856,    -1,    -1,   148,    -1,    -1,
     412,  1072,  1073,    -1,  1076,    -1,  1077,    -1,  1080,    -1,
    1081,    -1,  1082,    -1,  1084,    -1,  1086,    -1,   315,    -1,
     313,    -1,   496,    -1,   124,    -1,   155,  1260,   459,  1260,
      -1,  1268,    31,  1078,    -1,  1079,    -1,  1078,  1079,    -1,
      38,  1074,    -1,    46,  1074,    -1,   215,  1074,    -1,   269,
    1074,    -1,   386,  1074,    -1,   487,  1074,    -1,   247,  1074,
      -1,   324,  1074,    -1,  1250,   459,   154,  1259,    -1,  1250,
     459,  1254,    -1,  1250,  1075,    49,  1254,    -1,  1083,    -1,
    1082,  1083,    -1,  1236,   459,  1074,    -1,  1085,    -1,  1084,
    1085,    -1,  1250,   459,   477,    -1,  1250,   459,   466,    -1,
     244,   167,   459,   313,    -1,    -1,   423,  1088,  1089,    -1,
      -1,  1269,  1091,  1093,  1094,  1090,  1095,  1096,    -1,    -1,
    1091,  1343,   754,  1334,  1092,    -1,    -1,  1092,  1275,    -1,
      -1,  1379,  1328,    -1,    -1,  1365,  1332,  1243,    -1,    -1,
     510,  1233,    -1,   229,   345,  1332,  1034,    -1,    -1,   206,
    1233,    -1,   323,   345,  1332,  1034,    -1,    -1,   432,  1098,
    1099,  1105,    -1,  1234,  1101,  1100,  1203,    -1,    -1,  1364,
    1378,  1223,    -1,    -1,   241,  1332,  1102,  1271,    -1,   180,
      -1,   244,    -1,  1216,    -1,  1303,  1217,    -1,  1303,  1218,
      -1,  1303,  1219,    -1,  1303,  1220,    -1,  1103,    -1,  1104,
      -1,   294,  1216,    -1,   299,    -1,    -1,   149,    -1,    -1,
     437,   395,  1107,  1108,    -1,   437,  1110,    -1,    -1,   902,
    1254,    -1,  1254,    -1,  1364,   163,  1356,  1109,    -1,  1364,
     293,  1356,  1109,    -1,    -1,  1254,    -1,   260,    -1,   427,
      -1,   525,    -1,   355,    -1,    -1,   438,  1112,  1113,  1119,
      -1,  1114,   232,  1271,  1118,  1187,    -1,  1115,    -1,  1114,
    1115,    -1,  1254,  1116,    -1,    -1,   113,  1317,  1117,    -1,
     421,    -1,  1254,    -1,    -1,  1364,   336,  1332,  1271,    -1,
      -1,   150,    -1,    -1,   441,  1121,  1122,  1123,    -1,  1253,
     199,  1229,  1182,    -1,  1253,   199,  1254,   206,  1229,  1182,
      -1,    95,  1271,   199,  1271,  1305,  1182,    -1,    -1,   151,
      -1,   443,  1125,    -1,    -1,   344,    -1,    -1,   451,  1127,
    1128,    -1,  1235,    -1,  1128,  1235,    -1,    -1,   482,  1130,
    1131,    -1,  1271,   199,  1260,   459,  1261,    -1,    -1,   489,
    1133,  1134,    -1,  1234,  1349,    -1,    -1,   494,  1136,  1137,
    1146,    -1,  1271,  1138,  1141,  1118,  1145,  1187,    -1,    -1,
     113,  1317,  1139,    -1,  1140,    -1,  1139,   319,  1140,    -1,
    1297,  1260,    -1,   232,  1142,    -1,  1141,  1142,    -1,  1271,
    1143,  1144,    -1,    -1,   114,  1327,  1271,    -1,    -1,    96,
    1327,  1271,    -1,    -1,   449,  1327,  1271,    -1,    -1,   152,
      -1,    -1,   506,  1148,  1149,    -1,  1150,    -1,  1153,    -1,
    1157,    -1,  1159,    -1,  1160,    -1,  1151,  1311,  1355,  1369,
    1346,  1343,  1152,    -1,    -1,   207,    -1,  1233,    -1,   229,
      -1,   323,    -1,   237,    -1,   172,    -1,  1325,   108,  1343,
    1154,    -1,  1155,    -1,  1154,  1155,    -1,  1240,    -1,     9,
     346,    -1,     9,  1156,  1275,    -1,    -1,   367,    -1,   367,
     312,    -1,   312,    -1,  1315,   348,  1158,    -1,   432,    -1,
     131,    -1,  1151,    37,   376,  1271,    -1,  1161,    -1,   168,
      -1,   128,    -1,    -1,   522,  1163,  1164,  1169,    -1,  1231,
    1165,  1166,  1060,  1168,    -1,    -1,   199,  1267,    -1,    -1,
    1167,  1310,  1264,  1336,    -1,  1167,  1310,  1237,    -1,  1167,
    1310,   327,    -1,    37,    -1,     8,    -1,    -1,  1204,    -1,
    1198,    -1,    -1,   153,    -1,    -1,  1172,  1174,    -1,  1175,
    1171,    -1,    -1,  1172,    -1,  1173,   856,    -1,   164,    -1,
     167,    -1,    -1,  1175,    -1,  1176,   856,    -1,   298,    -1,
     300,    -1,    -1,  1179,  1180,    -1,  1181,  1178,    -1,    -1,
    1179,    -1,   167,   856,    -1,    -1,  1181,    -1,   300,   856,
      -1,    -1,  1184,  1185,    -1,  1186,  1183,    -1,    -1,  1184,
      -1,   422,   856,    -1,    -1,  1186,    -1,   303,   856,    -1,
      -1,  1189,  1190,    -1,  1191,  1188,    -1,    -1,  1189,    -1,
     474,   856,    -1,    -1,  1191,    -1,   302,   856,    -1,  1195,
    1196,    -1,  1197,  1195,    -1,  1195,  1196,    -1,  1197,  1194,
      -1,    -1,  1195,    -1,   131,   856,    -1,    -1,  1197,    -1,
     296,   856,    -1,  1200,  1201,    -1,  1202,  1199,    -1,    -1,
    1200,    -1,   159,   856,    -1,    -1,  1202,    -1,   297,   856,
      -1,    -1,  1204,    -1,  1206,  1207,    -1,  1208,  1205,    -1,
      -1,  1206,    -1,   235,   856,    -1,    -1,  1208,    -1,   301,
     856,    -1,    -1,  1266,  1377,    -1,  1211,    -1,  1212,    -1,
      -1,  1213,  1214,    -1,  1215,    -1,  1214,   236,    -1,  1214,
    1215,    -1,  1254,    -1,   475,    -1,   461,    -1,   476,    -1,
     471,    -1,   472,    -1,   463,    -1,   171,    -1,  1216,    -1,
    1217,    -1,  1218,    -1,  1219,    -1,  1220,    -1,   299,    -1,
     294,    -1,    20,    -1,   319,    -1,   314,    -1,   307,    -1,
      12,    -1,    13,    -1,    14,    -1,   338,    -1,   288,    -1,
     465,    -1,   161,  1360,    -1,   468,    -1,   210,    -1,   470,
      -1,   250,    -1,   211,    -1,   251,    -1,  1223,    -1,  1221,
    1222,  1223,    -1,    -1,    71,    -1,   407,    -1,  1223,   476,
    1224,    -1,  1223,   471,  1224,    -1,  1224,    -1,  1224,   472,
    1225,    -1,  1224,   463,  1225,    -1,  1225,    -1,  1226,   171,
    1225,    -1,  1226,    -1,   476,  1227,    -1,   471,  1227,    -1,
    1227,    -1,   475,  1223,   461,    -1,  1257,    -1,   255,    -1,
     255,  1370,   519,    -1,   257,    -1,   257,  1370,   519,    -1,
     328,    -1,   328,  1370,   519,    -1,  1230,    -1,  1229,  1230,
      -1,  1251,  1305,    -1,  1275,    -1,  1275,    -1,  1234,    -1,
    1233,  1234,    -1,   519,    -1,   519,    -1,  1237,    -1,  1236,
    1237,    -1,   275,    -1,    -1,  1238,  1239,    -1,  1240,    -1,
    1275,    -1,  1241,    -1,  1241,  1370,  1241,    -1,   260,    -1,
    1243,    -1,  1242,  1243,    -1,  1275,    -1,   519,    -1,  1246,
      -1,  1245,  1246,    -1,   519,    -1,  1243,    -1,   260,    -1,
     519,    -1,     1,    -1,   519,    -1,  1251,    -1,  1250,  1251,
      -1,  1273,    -1,  1283,    -1,     6,  1342,  1272,    -1,    -1,
    1253,    -1,  1254,    -1,  1253,  1254,    -1,  1271,    -1,  1282,
      -1,  1285,    -1,  1228,    -1,   249,  1272,    -1,   249,  1283,
      -1,   249,  1285,    -1,     6,  1342,  1258,  1259,    -1,     6,
    1342,  1272,    -1,   275,    -1,  1257,    -1,  1255,  1257,    -1,
    1271,    -1,  1283,    -1,  1285,    -1,  1271,    -1,  1283,    -1,
    1285,    -1,  1228,    -1,   249,  1272,    -1,   249,  1283,    -1,
     249,  1285,    -1,   348,    -1,   154,    -1,  1272,    -1,   260,
      -1,  1271,    -1,  1283,    -1,  1271,    -1,  1282,    -1,  1271,
      -1,   260,    -1,  1271,    -1,   260,    -1,  1285,    -1,  1268,
      -1,  1278,    -1,   525,    -1,  1268,    -1,  1280,    -1,  1268,
      -1,  1278,    -1,  1271,    -1,  1282,    -1,  1285,    -1,  1270,
      -1,  1270,    -1,  1275,    -1,  1275,  1276,    -1,  1272,    -1,
    1275,  1276,  1277,    -1,  1275,  1276,    -1,  1275,  1277,    -1,
    1275,    -1,  1274,    -1,  1275,  1276,  1277,    -1,  1275,  1276,
      -1,  1275,  1277,    -1,  1275,    -1,   519,    -1,   519,  1370,
    1275,    -1,   475,  1221,   461,    -1,   475,  1223,   462,   461,
      -1,   475,  1223,   462,  1223,   461,    -1,   260,    -1,   260,
      -1,   260,    -1,   260,    -1,   427,    -1,   525,    -1,   355,
      -1,   216,    -1,   270,    -1,   473,    -1,  1283,    -1,     9,
    1284,    -1,  1284,    -1,  1283,   460,  1284,    -1,   260,    -1,
     427,    -1,   525,    -1,   355,    -1,   216,    -1,   270,    -1,
     473,    -1,  1286,  1289,    -1,  1287,   475,  1256,   461,  1289,
      -1,  1288,   475,  1221,   461,  1289,    -1,   483,   475,  1291,
     461,  1289,    -1,   309,   475,  1292,   461,    -1,   262,   475,
    1293,   461,  1289,    -1,   263,   475,  1293,   461,  1289,    -1,
     264,   475,  1293,   461,  1289,    -1,   196,   475,  1294,   461,
    1289,    -1,   197,   475,  1295,   461,  1289,    -1,   204,  1290,
      -1,   509,  1290,    -1,   100,    -1,   517,    -1,   504,    -1,
     268,    -1,   385,    -1,    83,    -1,   195,    -1,   439,    -1,
     440,    -1,    -1,   475,  1223,   462,   461,    -1,   475,  1223,
     462,  1223,   461,    -1,    -1,   475,  1221,   461,    -1,   475,
     461,    -1,  1256,    -1,  1256,  1222,   245,    -1,  1256,  1222,
     481,    -1,  1256,    -1,  1256,  1222,  1256,    -1,  1223,    -1,
    1223,  1222,  1243,    -1,  1221,    -1,  1221,  1222,   447,    -1,
    1221,    -1,  1221,  1222,   447,    -1,    -1,    -1,     9,    -1,
      -1,  1379,    -1,    -1,   227,    -1,    -1,   227,  1301,    -1,
      -1,   459,  1261,    -1,    -1,   289,    -1,   340,    -1,    -1,
     294,    -1,    -1,   318,    -1,   294,   318,    -1,    -1,   394,
    1306,    -1,    -1,   276,  1332,  1307,    -1,    34,    -1,   285,
      -1,   286,    -1,   287,    -1,   352,    -1,   479,    -1,   480,
      -1,   484,    -1,    -1,   409,  1318,    -1,   464,    -1,     3,
      -1,     5,    -1,    10,    -1,    18,    -1,    51,    -1,    52,
      -1,    61,    -1,    72,    -1,    75,    -1,    89,    -1,   112,
      -1,   120,    -1,   122,    -1,   130,    -1,   154,    -1,   165,
      -1,   170,    -1,   198,    -1,   205,    -1,   208,    -1,   209,
      -1,   219,    -1,   226,    -1,   228,    -1,   231,    -1,   273,
      -1,   277,    -1,   279,    -1,   289,    -1,   317,    -1,   330,
      -1,   358,    -1,   369,    -1,   383,    -1,   389,    -1,   393,
      -1,   402,    -1,   412,    -1,   423,    -1,   432,    -1,   437,
      -1,   438,    -1,   441,    -1,   443,    -1,   451,    -1,   482,
      -1,   489,    -1,   494,    -1,   522,    -1,   132,    -1,   133,
      -1,   134,    -1,   135,    -1,   136,    -1,   137,    -1,   138,
      -1,   139,    -1,   141,    -1,   142,    -1,   143,    -1,   145,
      -1,   146,    -1,   147,    -1,   148,    -1,   149,    -1,   150,
      -1,   151,    -1,   152,    -1,   153,    -1,    -1,     7,    -1,
      -1,     8,    -1,    -1,    22,    -1,    -1,    23,    -1,    -1,
      26,    -1,    -1,    30,    -1,    -1,    39,    -1,    -1,    49,
      -1,    -1,    57,    -1,    -1,    58,    -1,    -1,    87,    -1,
      -1,   103,    -1,    -1,   131,  1342,    -1,    -1,   467,    -1,
      -1,   179,    -1,    -1,   192,    -1,    -1,   199,    -1,    -1,
     222,    -1,    -1,   320,    -1,   222,   320,    -1,    -1,   225,
      -1,    -1,   469,    -1,    -1,   232,    -1,    -1,   236,    -1,
      -1,   236,    -1,    22,    -1,    -1,   241,    -1,    -1,   246,
      -1,   392,    -1,    -1,   256,    -1,   258,    -1,    -1,   252,
    1332,    -1,   253,  1312,    -1,    -1,   258,    -1,    -1,   276,
      -1,    -1,   305,    -1,    -1,   305,    -1,   306,    -1,    -1,
     312,    -1,    -1,   315,    -1,    -1,   434,   236,    -1,   434,
      -1,   236,    -1,    -1,   322,    -1,    -1,   345,    -1,    -1,
     348,    -1,    -1,   360,    -1,    -1,   360,    -1,   362,    -1,
      -1,   392,    -1,    -1,   415,    -1,    -1,   416,    -1,    -1,
     415,    -1,   415,   236,    -1,    -1,   421,    -1,    -1,   429,
      -1,    -1,   434,    -1,    -1,   450,    -1,    -1,   454,    -1,
      -1,   458,    -1,    -1,   459,    -1,    -1,   459,    -1,   510,
      -1,    -1,   516,    -1,    -1,   516,   412,   459,    -1,    -1,
     518,    -1,    64,   410,    -1,   410,    -1,    67,    -1,    65,
      -1,    68,    -1,    66,    -1,   465,    -1,   161,    -1,   167,
      -1,   163,    -1,   222,    -1,   312,    -1,   429,    -1,   314,
      -1,   256,    -1,   258,    -1,   360,    -1,   362,    -1,    58,
      -1,   520,    -1,   360,  1332,    -1,   362,  1312,    -1,   365,
      -1,   488,    -1,   256,    -1,   258,    -1,   421,    -1,   248,
      -1,   518,   125,    -1,   125,    -1,   348,    64,   410,    -1,
      64,   410,    -1,   410,    -1,   117,    -1,   107,    -1,    90,
     214,    -1,    55,    -1,    90,   191,    -1,    54,    -1,   327,
     214,    -1,   331,    -1,   327,   191,    -1,   332,    -1,   375,
     214,    -1,   391,    -1,   375,   191,    -1,   390,    -1,    90,
    1332,    -1,    91,  1312,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  2040,  2040,  2040,  2073,  2074,  2078,  2079,  2083,  2084,
    2088,  2088,  2111,  2122,  2128,  2129,  2133,  2134,  2138,  2146,
    2155,  2163,  2164,  2165,  2170,  2174,  2169,  2188,  2187,  2203,
    2214,  2218,  2219,  2223,  2224,  2227,  2228,  2232,  2241,  2250,
    2251,  2258,  2259,  2263,  2267,  2277,  2282,  2283,  2292,  2299,
    2300,  2310,  2311,  2312,  2313,  2314,  2327,  2326,  2336,  2337,
    2340,  2341,  2355,  2354,  2364,  2365,  2366,  2367,  2371,  2372,
    2376,  2377,  2378,  2379,  2383,  2391,  2398,  2405,  2416,  2420,
    2424,  2428,  2435,  2436,  2441,  2443,  2442,  2453,  2454,  2455,
    2462,  2463,  2467,  2471,  2477,  2482,  2485,  2492,  2497,  2507,
    2508,  2520,  2521,  2525,  2526,  2530,  2531,  2535,  2536,  2537,
    2538,  2539,  2540,  2541,  2542,  2543,  2544,  2545,  2546,  2554,
    2553,  2581,  2591,  2604,  2612,  2615,  2616,  2620,  2627,  2642,
    2663,  2662,  2686,  2692,  2698,  2704,  2710,  2716,  2726,  2730,
    2737,  2741,  2746,  2745,  2756,  2760,  2767,  2768,  2769,  2770,
    2771,  2772,  2776,  2777,  2784,  2799,  2802,  2809,  2817,  2821,
    2832,  2852,  2860,  2871,  2872,  2878,  2899,  2900,  2904,  2908,
    2929,  2952,  3034,  3037,  3046,  3065,  3081,  3099,  3117,  3134,
    3151,  3161,  3162,  3169,  3170,  3178,  3179,  3189,  3190,  3195,
    3194,  3224,  3225,  3229,  3230,  3231,  3232,  3233,  3234,  3235,
    3236,  3237,  3238,  3239,  3240,  3241,  3248,  3254,  3264,  3277,
    3290,  3317,  3318,  3319,  3323,  3324,  3325,  3326,  3329,  3330,
    3336,  3337,  3341,  3345,  3346,  3351,  3354,  3355,  3362,  3370,
    3371,  3372,  3379,  3403,  3405,  3410,  3420,  3428,  3443,  3450,
    3452,  3453,  3459,  3459,  3466,  3471,  3476,  3483,  3484,  3485,
    3489,  3500,  3501,  3505,  3510,  3515,  3520,  3531,  3542,  3552,
    3560,  3561,  3562,  3568,  3579,  3586,  3587,  3593,  3601,  3602,
    3603,  3609,  3610,  3611,  3618,  3619,  3623,  3624,  3630,  3658,
    3659,  3660,  3661,  3668,  3667,  3683,  3684,  3688,  3691,  3692,
    3702,  3699,  3715,  3716,  3724,  3725,  3733,  3734,  3738,  3759,
    3758,  3775,  3782,  3786,  3792,  3793,  3797,  3807,  3822,  3823,
    3824,  3825,  3826,  3827,  3828,  3829,  3830,  3837,  3844,  3844,
    3844,  3850,  3870,  3904,  3935,  3936,  3943,  3944,  3948,  3949,
    3956,  3967,  3972,  3983,  3984,  3988,  3989,  3995,  4006,  4024,
    4025,  4029,  4030,  4031,  4035,  4042,  4049,  4058,  4067,  4068,
    4069,  4070,  4071,  4080,  4081,  4087,  4122,  4123,  4136,  4151,
    4152,  4156,  4166,  4180,  4182,  4181,  4197,  4200,  4200,  4217,
    4218,  4222,  4223,  4224,  4226,  4225,  4240,  4253,  4261,  4266,
    4272,  4276,  4286,  4289,  4301,  4302,  4303,  4304,  4308,  4312,
    4316,  4320,  4324,  4328,  4332,  4336,  4340,  4344,  4348,  4352,
    4356,  4367,  4368,  4372,  4373,  4377,  4378,  4379,  4383,  4384,
    4388,  4413,  4416,  4424,  4423,  4436,  4460,  4459,  4473,  4477,
    4486,  4490,  4499,  4500,  4501,  4502,  4503,  4504,  4505,  4506,
    4507,  4508,  4509,  4510,  4511,  4518,  4542,  4570,  4573,  4581,
    4582,  4586,  4611,  4622,  4623,  4627,  4631,  4635,  4639,  4643,
    4647,  4651,  4655,  4659,  4663,  4667,  4671,  4675,  4680,  4685,
    4689,  4693,  4701,  4705,  4709,  4717,  4721,  4725,  4729,  4733,
    4737,  4741,  4745,  4749,  4757,  4765,  4769,  4773,  4777,  4781,
    4785,  4793,  4794,  4798,  4799,  4805,  4811,  4823,  4841,  4842,
    4851,  4883,  4913,  4914,  4918,  4919,  4922,  4923,  4929,  4930,
    4937,  4938,  4945,  4969,  4970,  4987,  4988,  4991,  4992,  4999,
    5000,  5005,  5016,  5027,  5038,  5049,  5078,  5077,  5086,  5087,
    5091,  5092,  5095,  5096,  5108,  5117,  5131,  5133,  5132,  5152,
    5154,  5153,  5169,  5171,  5170,  5179,  5180,  5187,  5186,  5199,
    5200,  5201,  5208,  5213,  5217,  5218,  5224,  5231,  5235,  5236,
    5242,  5279,  5283,  5288,  5294,  5295,  5300,  5301,  5302,  5303,
    5304,  5308,  5315,  5322,  5329,  5336,  5342,  5343,  5348,  5347,
    5354,  5355,  5359,  5360,  5361,  5362,  5363,  5364,  5365,  5366,
    5367,  5368,  5369,  5370,  5371,  5372,  5373,  5374,  5378,  5385,
    5386,  5387,  5388,  5389,  5390,  5391,  5394,  5395,  5396,  5399,
    5400,  5404,  5411,  5417,  5418,  5422,  5423,  5427,  5434,  5438,
    5445,  5446,  5450,  5457,  5458,  5462,  5463,  5467,  5468,  5469,
    5473,  5474,  5478,  5479,  5483,  5490,  5497,  5505,  5507,  5506,
    5527,  5528,  5532,  5533,  5537,  5539,  5538,  5598,  5616,  5617,
    5621,  5626,  5631,  5635,  5639,  5644,  5649,  5654,  5659,  5663,
    5667,  5672,  5677,  5682,  5686,  5690,  5694,  5698,  5703,  5707,
    5711,  5716,  5721,  5726,  5731,  5732,  5733,  5734,  5735,  5736,
    5737,  5738,  5739,  5748,  5753,  5764,  5765,  5769,  5770,  5774,
    5775,  5779,  5780,  5785,  5788,  5792,  5800,  5803,  5807,  5815,
    5826,  5834,  5836,  5846,  5835,  5873,  5873,  5906,  5910,  5909,
    5923,  5922,  5942,  5943,  5948,  5970,  5972,  5976,  5987,  5989,
    5997,  6005,  6013,  6042,  6075,  6078,  6091,  6096,  6106,  6137,
    6139,  6138,  6175,  6176,  6180,  6181,  6182,  6199,  6200,  6211,
    6210,  6260,  6261,  6265,  6313,  6333,  6336,  6355,  6360,  6354,
    6373,  6373,  6403,  6410,  6411,  6412,  6413,  6414,  6415,  6416,
    6417,  6418,  6419,  6420,  6421,  6422,  6423,  6424,  6425,  6426,
    6427,  6428,  6429,  6430,  6431,  6432,  6433,  6434,  6435,  6436,
    6437,  6438,  6439,  6440,  6441,  6442,  6443,  6444,  6445,  6446,
    6447,  6448,  6449,  6450,  6451,  6452,  6453,  6454,  6455,  6456,
    6457,  6458,  6459,  6473,  6485,  6484,  6501,  6500,  6518,  6522,
    6526,  6531,  6536,  6541,  6546,  6550,  6554,  6558,  6562,  6567,
    6571,  6575,  6579,  6583,  6587,  6591,  6598,  6599,  6605,  6607,
    6611,  6612,  6616,  6617,  6621,  6625,  6629,  6630,  6634,  6650,
    6666,  6679,  6683,  6684,  6688,  6695,  6699,  6705,  6709,  6713,
    6717,  6721,  6727,  6731,  6735,  6741,  6745,  6749,  6753,  6757,
    6761,  6765,  6769,  6773,  6777,  6781,  6787,  6791,  6795,  6799,
    6803,  6807,  6811,  6818,  6819,  6823,  6827,  6845,  6844,  6853,
    6857,  6861,  6867,  6868,  6875,  6879,  6890,  6889,  6898,  6902,
    6914,  6915,  6923,  6922,  6931,  6932,  6936,  6942,  6942,  6949,
    6948,  6959,  6986,  6990,  6995,  7000,  7021,  7025,  7024,  7041,
    7042,  7047,  7055,  7079,  7081,  7085,  7094,  7107,  7110,  7114,
    7118,  7123,  7146,  7147,  7151,  7152,  7156,  7160,  7164,  7175,
    7179,  7186,  7190,  7198,  7202,  7209,  7216,  7220,  7231,  7230,
    7238,  7242,  7253,  7252,  7260,  7265,  7273,  7274,  7275,  7276,
    7277,  7285,  7284,  7293,  7300,  7304,  7314,  7325,  7343,  7342,
    7351,  7355,  7359,  7364,  7372,  7376,  7387,  7386,  7398,  7402,
    7406,  7410,  7414,  7418,  7426,  7435,  7436,  7441,  7440,  7485,
    7489,  7497,  7498,  7502,  7506,  7511,  7515,  7516,  7520,  7524,
    7528,  7532,  7539,  7540,  7544,  7548,  7554,  7560,  7564,  7568,
    7574,  7580,  7586,  7592,  7596,  7600,  7604,  7608,  7612,  7616,
    7620,  7627,  7631,  7642,  7641,  7650,  7654,  7658,  7662,  7666,
    7673,  7677,  7688,  7687,  7696,  7715,  7714,  7738,  7746,  7747,
    7752,  7763,  7774,  7788,  7792,  7799,  7800,  7805,  7814,  7823,
    7828,  7837,  7838,  7843,  7905,  7906,  7907,  7911,  7912,  7916,
    7920,  7931,  7930,  7942,  7943,  7964,  7978,  8000,  8022,  8042,
    8065,  8066,  8074,  8073,  8082,  8093,  8092,  8102,  8109,  8108,
    8121,  8130,  8134,  8145,  8161,  8160,  8169,  8173,  8177,  8184,
    8188,  8199,  8198,  8206,  8214,  8215,  8219,  8220,  8221,  8226,
    8229,  8236,  8240,  8248,  8255,  8256,  8257,  8258,  8259,  8260,
    8261,  8266,  8269,  8279,  8278,  8287,  8293,  8305,  8304,  8313,
    8317,  8321,  8325,  8332,  8333,  8334,  8335,  8342,  8341,  8362,
    8372,  8381,  8385,  8392,  8397,  8402,  8407,  8412,  8417,  8425,
    8426,  8430,  8435,  8441,  8443,  8444,  8445,  8446,  8450,  8478,
    8481,  8485,  8489,  8493,  8500,  8507,  8517,  8516,  8529,  8528,
    8536,  8540,  8551,  8550,  8559,  8563,  8570,  8574,  8585,  8584,
    8592,  8613,  8637,  8638,  8639,  8640,  8644,  8645,  8649,  8650,
    8651,  8652,  8664,  8663,  8674,  8680,  8679,  8690,  8698,  8706,
    8713,  8717,  8730,  8737,  8749,  8752,  8757,  8761,  8772,  8779,
    8780,  8784,  8785,  8788,  8789,  8794,  8805,  8804,  8813,  8840,
    8841,  8846,  8849,  8853,  8857,  8861,  8865,  8869,  8876,  8877,
    8881,  8882,  8886,  8890,  8900,  8911,  8910,  8918,  8928,  8939,
    8938,  8947,  8954,  8958,  8969,  8968,  8980,  8989,  8992,  8996,
    9003,  9007,  9017,  9029,  9028,  9037,  9041,  9050,  9051,  9056,
    9059,  9067,  9071,  9078,  9086,  9090,  9101,  9100,  9114,  9115,
    9116,  9117,  9118,  9119,  9120,  9124,  9125,  9129,  9130,  9136,
    9145,  9152,  9153,  9157,  9161,  9165,  9171,  9177,  9181,  9185,
    9189,  9198,  9202,  9211,  9220,  9221,  9225,  9234,  9235,  9239,
    9243,  9252,  9262,  9261,  9270,  9269,  9301,  9304,  9324,  9325,
    9328,  9329,  9337,  9338,  9343,  9348,  9358,  9374,  9379,  9389,
    9406,  9405,  9415,  9428,  9431,  9439,  9442,  9447,  9452,  9460,
    9461,  9462,  9463,  9464,  9465,  9469,  9477,  9478,  9482,  9486,
    9497,  9496,  9506,  9519,  9522,  9526,  9530,  9538,  9550,  9553,
    9560,  9561,  9562,  9563,  9570,  9569,  9579,  9586,  9587,  9591,
    9606,  9607,  9612,  9613,  9617,  9618,  9622,  9626,  9637,  9636,
    9645,  9649,  9653,  9660,  9664,  9674,  9685,  9686,  9693,  9692,
    9701,  9707,  9719,  9718,  9726,  9740,  9739,  9747,  9764,  9763,
    9772,  9780,  9781,  9786,  9787,  9792,  9799,  9800,  9805,  9812,
    9813,  9817,  9818,  9822,  9823,  9827,  9831,  9842,  9841,  9850,
    9851,  9852,  9853,  9854,  9858,  9885,  9888,  9900,  9910,  9915,
    9920,  9925,  9933,  9971,  9972,  9976, 10016, 10026, 10049, 10050,
   10051, 10052, 10056, 10065, 10071, 10081, 10090, 10099, 10100, 10107,
   10106, 10118, 10128, 10129, 10134, 10137, 10141, 10145, 10152, 10153,
   10157, 10158, 10159, 10163, 10167, 10179, 10180, 10181, 10191, 10195,
   10202, 10210, 10211, 10215, 10216, 10220, 10228, 10229, 10234, 10235,
   10236, 10246, 10250, 10257, 10265, 10266, 10270, 10280, 10281, 10282,
   10292, 10296, 10303, 10311, 10312, 10316, 10326, 10327, 10328, 10338,
   10342, 10349, 10357, 10358, 10362, 10373, 10374, 10381, 10383, 10392,
   10396, 10403, 10411, 10412, 10416, 10426, 10427, 10437, 10441, 10448,
   10456, 10457, 10461, 10471, 10472, 10476, 10477, 10487, 10491, 10498,
   10506, 10507, 10511, 10521, 10525, 10535, 10542, 10549, 10549, 10560,
   10561, 10562, 10566, 10575, 10576, 10578, 10579, 10580, 10581, 10582,
   10584, 10585, 10586, 10587, 10588, 10589, 10591, 10592, 10593, 10595,
   10596, 10597, 10598, 10599, 10602, 10603, 10607, 10608, 10612, 10613,
   10617, 10618, 10622, 10626, 10632, 10636, 10642, 10643, 10644, 10648,
   10649, 10650, 10654, 10655, 10656, 10660, 10664, 10668, 10669, 10670,
   10673, 10674, 10684, 10696, 10705, 10717, 10726, 10738, 10753, 10754,
   10759, 10768, 10774, 10794, 10798, 10819, 10860, 10874, 10875, 10880,
   10886, 10887, 10892, 10904, 10905, 10906, 10913, 10924, 10925, 10929,
   10937, 10945, 10949, 10956, 10965, 10966, 10972, 10981, 10992, 11009,
   11013, 11020, 11021, 11022, 11029, 11030, 11034, 11038, 11045, 11046,
   11047, 11048, 11049, 11053, 11057, 11061, 11065, 11069, 11090, 11094,
   11101, 11102, 11103, 11107, 11108, 11109, 11110, 11111, 11115, 11119,
   11126, 11127, 11131, 11132, 11136, 11137, 11141, 11142, 11153, 11157,
   11161, 11165, 11166, 11170, 11174, 11175, 11182, 11186, 11190, 11194,
   11198, 11202, 11203, 11209, 11213, 11217, 11218, 11222, 11226, 11233,
   11240, 11247, 11257, 11264, 11274, 11284, 11294, 11307, 11311, 11319,
   11327, 11331, 11341, 11355, 11378, 11400, 11416, 11417, 11418, 11419,
   11420, 11421, 11425, 11429, 11446, 11450, 11457, 11458, 11459, 11460,
   11461, 11462, 11463, 11469, 11473, 11477, 11481, 11485, 11489, 11493,
   11497, 11501, 11505, 11509, 11513, 11520, 11521, 11525, 11526, 11527,
   11531, 11532, 11533, 11534, 11538, 11542, 11546, 11553, 11557, 11561,
   11568, 11575, 11582, 11592, 11599, 11609, 11616, 11626, 11630, 11643,
   11647, 11662, 11670, 11671, 11675, 11676, 11680, 11681, 11686, 11689,
   11697, 11700, 11707, 11709, 11710, 11714, 11715, 11719, 11720, 11721,
   11726, 11729, 11742, 11746, 11754, 11758, 11762, 11766, 11770, 11774,
   11778, 11782, 11789, 11790, 11796, 11797, 11798, 11799, 11800, 11801,
   11802, 11803, 11804, 11805, 11806, 11807, 11808, 11809, 11810, 11811,
   11812, 11813, 11814, 11815, 11816, 11817, 11818, 11819, 11820, 11821,
   11822, 11823, 11824, 11825, 11826, 11827, 11828, 11829, 11830, 11831,
   11832, 11833, 11834, 11835, 11836, 11837, 11838, 11839, 11840, 11841,
   11842, 11843, 11844, 11845, 11846, 11847, 11848, 11849, 11850, 11851,
   11852, 11853, 11854, 11855, 11856, 11857, 11858, 11859, 11860, 11861,
   11862, 11863, 11864, 11865, 11872, 11872, 11873, 11873, 11874, 11874,
   11875, 11875, 11876, 11876, 11877, 11877, 11878, 11878, 11879, 11879,
   11880, 11880, 11881, 11881, 11882, 11882, 11883, 11883, 11884, 11884,
   11885, 11885, 11886, 11886, 11887, 11887, 11888, 11888, 11889, 11889,
   11890, 11890, 11890, 11891, 11891, 11892, 11892, 11893, 11893, 11894,
   11894, 11895, 11895, 11895, 11896, 11896, 11897, 11897, 11897, 11898,
   11898, 11898, 11899, 11899, 11899, 11900, 11900, 11901, 11901, 11902,
   11902, 11903, 11903, 11903, 11904, 11904, 11905, 11905, 11906, 11906,
   11906, 11906, 11907, 11907, 11908, 11908, 11909, 11909, 11910, 11910,
   11911, 11911, 11911, 11912, 11912, 11913, 11913, 11914, 11914, 11915,
   11915, 11915, 11916, 11916, 11917, 11917, 11918, 11918, 11919, 11919,
   11920, 11920, 11921, 11921, 11922, 11922, 11923, 11923, 11923, 11924,
   11924, 11925, 11925, 11926, 11926, 11930, 11930, 11931, 11931, 11932,
   11932, 11933, 11933, 11934, 11934, 11935, 11935, 11936, 11936, 11937,
   11937, 11938, 11938, 11939, 11939, 11940, 11940, 11941, 11941, 11942,
   11942, 11943, 11943, 11944, 11944, 11947, 11948, 11949, 11953, 11953,
   11954, 11954, 11955, 11955, 11956, 11956, 11957, 11957, 11958, 11958,
   11959, 11959, 11960, 11960
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
  "call_body", "mnemonic_conv", "call_using", "$@46", "call_param_list",
  "call_param", "call_type", "call_returning", "return_give",
  "null_or_omitted", "call_exception_phrases", "_call_on_exception",
  "call_on_exception", "_call_not_on_exception", "call_not_on_exception",
  "end_call", "cancel_statement", "$@47", "cancel_body", "close_statement",
  "$@48", "close_body", "close_option", "compute_statement", "$@49",
  "compute_body", "end_compute", "commit_statement", "continue_statement",
  "delete_statement", "$@50", "delete_body", "delete_file_list",
  "end_delete", "display_statement", "$@51", "display_body",
  "screen_or_device_display", "display_list", "display_atom", "$@52",
  "disp_list", "display_clauses", "display_clause", "display_upon",
  "crt_under", "disp_attr", "end_display", "divide_statement", "$@53",
  "divide_body", "end_divide", "entry_statement", "$@54", "entry_body",
  "evaluate_statement", "$@55", "evaluate_body", "evaluate_subject_list",
  "evaluate_subject", "evaluate_condition_list", "evaluate_case_list",
  "evaluate_case", "evaluate_other", "evaluate_when_list",
  "evaluate_object_list", "evaluate_object", "_evaluate_thru_expr",
  "end_evaluate", "exit_statement", "$@56", "exit_body",
  "exit_program_returning", "free_statement", "$@57", "free_body",
  "generate_statement", "$@58", "generate_body", "goto_statement", "$@59",
  "go_body", "goto_depending", "goback_statement", "if_statement", "$@60",
  "if_else_statements", "end_if", "initialize_statement", "$@61",
  "initialize_body", "initialize_filler", "initialize_value",
  "initialize_replacing", "initialize_replacing_list",
  "initialize_replacing_item", "initialize_category", "initialize_default",
  "initiate_statement", "$@62", "initiate_body", "inspect_statement",
  "$@63", "inspect_body", "send_identifier", "inspect_list",
  "inspect_tallying", "$@64", "inspect_replacing", "inspect_converting",
  "tallying_list", "tallying_item", "replacing_list", "replacing_item",
  "rep_keyword", "replacing_region", "inspect_region", "inspect_before",
  "inspect_after", "merge_statement", "$@65", "move_statement", "$@66",
  "move_body", "multiply_statement", "$@67", "multiply_body",
  "end_multiply", "open_statement", "$@68", "open_body", "open_mode",
  "open_sharing", "open_option", "perform_statement", "$@69",
  "perform_body", "$@70", "end_perform", "term_or_dot",
  "perform_procedure", "perform_option", "perform_test", "cond_or_exit",
  "perform_varying_list", "perform_varying", "read_statement", "$@71",
  "read_body", "read_into", "with_lock", "read_key", "read_handler",
  "end_read", "ready_statement", "release_statement", "$@72",
  "release_body", "reset_statement", "return_statement", "$@73",
  "return_body", "end_return", "rewrite_statement", "$@74", "rewrite_body",
  "write_lock", "end_rewrite", "rollback_statement", "search_statement",
  "$@75", "search_body", "search_varying", "search_at_end", "search_whens",
  "search_when", "end_search", "set_statement", "$@76", "set_body",
  "on_or_off", "up_or_down", "set_environment", "set_attr",
  "set_attr_clause", "set_attr_one", "set_to", "set_up_down",
  "set_to_on_off_sequence", "set_to_on_off", "set_to_true_false_sequence",
  "set_to_true_false", "set_last_exception_to_off", "sort_statement",
  "$@77", "sort_body", "@78", "sort_key_list", "_key_list",
  "_sort_duplicates", "sort_collating", "sort_input", "sort_output",
  "start_statement", "$@79", "start_body", "sizelen_clause", "start_key",
  "start_op", "disallowed_op", "not_equal_op", "end_start",
  "stop_statement", "$@80", "stop_returning", "_status_x", "stop_literal",
  "string_statement", "$@81", "string_body", "string_item_list",
  "string_item", "_string_delimited", "string_delimiter", "_with_pointer",
  "end_string", "subtract_statement", "$@82", "subtract_body",
  "end_subtract", "suppress_statement", "_printing", "terminate_statement",
  "$@83", "terminate_body", "transform_statement", "$@84",
  "transform_body", "unlock_statement", "$@85", "unlock_body",
  "unstring_statement", "$@86", "unstring_body", "_unstring_delimited",
  "unstring_delimited_list", "unstring_delimited_item", "unstring_into",
  "unstring_into_item", "_unstring_into_delimiter", "_unstring_into_count",
  "_unstring_tallying", "end_unstring", "use_statement", "$@87",
  "use_phrase", "use_file_exception", "use_global",
  "use_file_exception_target", "use_debugging", "debugging_list",
  "debugging_target", "_all_refs", "use_start_end", "program_start_end",
  "use_reporting", "use_exception", "use_ex_keyw", "write_statement",
  "$@88", "write_body", "from_option", "write_option", "before_or_after",
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
  "condition", "expr", "partial_expr", "$@89", "expr_tokens", "expr_token",
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
     775,   776,   777,   778,   779,   780,   781,   782
};
# endif

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
     579,   579,   580,   580,   580,   581,   581,   582,   582,   583,
     583,   584,   584,   585,   585,   586,   586,   587,   587,   587,
     587,   587,   587,   587,   587,   587,   587,   587,   587,   589,
     588,   590,   590,   590,   590,   591,   591,   592,   593,   593,
     595,   594,   596,   596,   596,   596,   596,   596,   597,   597,
     598,   598,   599,   598,   600,   600,   601,   601,   601,   601,
     601,   601,   602,   602,   603,   604,   604,   605,   606,   606,
     607,   608,   608,   609,   609,   610,   611,   611,   612,   612,
     613,   614,   615,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   623,   624,   624,   625,   625,   626,   626,   628,
     627,   629,   629,   630,   630,   630,   630,   630,   630,   630,
     630,   630,   630,   630,   630,   630,   631,   631,   631,   631,
     631,   632,   632,   632,   633,   633,   633,   633,   634,   634,
     635,   635,   635,   636,   636,   637,   637,   637,   638,   639,
     639,   639,   640,   641,   641,   641,   642,   643,   644,   645,
     645,   645,   647,   646,   648,   648,   648,   649,   649,   649,
     649,   650,   650,   651,   651,   651,   651,   652,   653,   654,
     655,   655,   655,   656,   657,   658,   658,   659,   660,   660,
     660,   661,   661,   661,   662,   662,   663,   663,   664,   665,
     665,   665,   665,   667,   666,   668,   668,   669,   670,   670,
     672,   671,   673,   673,   674,   674,   675,   675,   676,   678,
     677,   677,   679,   679,   680,   680,   681,   681,   681,   681,
     681,   681,   681,   681,   681,   681,   681,   682,   683,   683,
     683,   684,   684,   684,   685,   685,   686,   686,   687,   687,
     688,   689,   689,   690,   690,   691,   691,   692,   693,   694,
     694,   695,   695,   695,   696,   697,   698,   699,   700,   700,
     700,   700,   700,   701,   701,   702,   703,   703,   704,   705,
     705,   706,   706,   707,   708,   707,   709,   710,   709,   711,
     711,   712,   712,   712,   713,   712,   712,   714,   715,   715,
     715,   716,   717,   717,   718,   718,   718,   718,   719,   719,
     719,   719,   719,   719,   719,   719,   719,   719,   719,   719,
     719,   720,   720,   721,   721,   722,   722,   722,   723,   723,
     724,   725,   725,   727,   726,   728,   729,   728,   730,   730,
     731,   731,   732,   732,   732,   732,   732,   732,   732,   732,
     732,   732,   732,   732,   732,   733,   734,   735,   735,   736,
     736,   737,   738,   739,   739,   740,   740,   740,   740,   740,
     740,   740,   740,   740,   740,   740,   740,   740,   740,   740,
     740,   740,   740,   740,   740,   740,   740,   740,   740,   740,
     740,   740,   740,   740,   740,   740,   740,   740,   740,   740,
     740,   741,   741,   742,   742,   743,   743,   744,   745,   745,
     746,   746,   747,   747,   748,   748,   749,   749,   750,   750,
     751,   751,   752,   753,   753,   754,   754,   755,   755,   756,
     756,   757,   758,   759,   760,   761,   763,   762,   764,   764,
     765,   765,   766,   766,   767,   767,   768,   769,   768,   770,
     771,   770,   772,   773,   772,   774,   774,   776,   775,   777,
     777,   777,   778,   778,   778,   778,   779,   780,   781,   781,
     782,   783,   783,   783,   784,   784,   785,   785,   785,   785,
     785,   786,   787,   788,   789,   790,   791,   791,   793,   792,
     794,   794,   795,   795,   795,   795,   795,   795,   795,   795,
     795,   795,   795,   795,   795,   795,   795,   795,   796,   797,
     797,   797,   797,   797,   797,   797,   798,   798,   798,   799,
     799,   800,   801,   802,   802,   803,   803,   804,   805,   806,
     807,   807,   808,   809,   809,   810,   810,   811,   811,   811,
     812,   812,   813,   813,   814,   815,   816,   817,   818,   817,
     819,   819,   820,   820,   821,   822,   821,   821,   823,   823,
     824,   824,   824,   824,   824,   824,   824,   824,   824,   824,
     824,   824,   824,   824,   824,   824,   824,   824,   824,   824,
     824,   824,   824,   824,   824,   824,   824,   824,   824,   824,
     824,   824,   824,   824,   824,   825,   825,   826,   826,   827,
     827,   828,   828,   829,   829,   829,   830,   830,   830,   831,
     832,   833,   834,   835,   833,   836,   833,   837,   838,   837,
     839,   837,   840,   840,   841,   842,   842,   842,   843,   843,
     843,   843,   843,   843,   844,   844,   845,   845,   845,   846,
     847,   846,   848,   848,   849,   849,   849,   849,   849,   851,
     850,   852,   852,   853,   854,   855,   855,   857,   858,   856,
     860,   859,   859,   861,   861,   861,   861,   861,   861,   861,
     861,   861,   861,   861,   861,   861,   861,   861,   861,   861,
     861,   861,   861,   861,   861,   861,   861,   861,   861,   861,
     861,   861,   861,   861,   861,   861,   861,   861,   861,   861,
     861,   861,   861,   861,   861,   861,   861,   861,   861,   861,
     861,   861,   861,   861,   863,   862,   865,   864,   864,   864,
     864,   864,   864,   864,   864,   864,   864,   864,   864,   864,
     864,   864,   864,   864,   864,   864,   866,   866,   867,   867,
     868,   868,   869,   869,   869,   869,   870,   870,   871,   871,
     871,   872,   873,   873,   874,   875,   875,   875,   875,   875,
     875,   875,   875,   875,   875,   875,   875,   875,   875,   875,
     875,   875,   875,   875,   875,   875,   875,   875,   875,   875,
     875,   875,   875,   876,   876,   877,   877,   879,   878,   880,
     880,   880,   881,   881,   882,   882,   884,   883,   885,   885,
     886,   886,   888,   887,   889,   889,   890,   891,   891,   893,
     892,   894,   895,   895,   895,   895,   896,   897,   896,   898,
     898,   899,   899,   900,   900,   900,   900,   901,   901,   901,
     901,   901,   902,   902,   903,   903,   904,   904,   904,   905,
     905,   906,   906,   907,   907,   908,   909,   909,   911,   910,
     912,   912,   914,   913,   915,   915,   916,   916,   916,   916,
     916,   918,   917,   919,   920,   920,   921,   922,   924,   923,
     925,   925,   926,   926,   927,   927,   929,   928,   930,   930,
     930,   930,   930,   931,   931,   932,   932,   934,   933,   935,
     935,   936,   936,   937,   937,   937,   937,   937,   938,   938,
     938,   938,   939,   939,   940,   940,   940,   940,   940,   940,
     940,   940,   940,   940,   940,   940,   940,   940,   940,   940,
     940,   941,   941,   943,   942,   944,   944,   944,   944,   944,
     945,   945,   947,   946,   948,   950,   949,   951,   952,   952,
     953,   953,   953,   954,   954,   955,   955,   956,   957,   958,
     958,   959,   959,   960,   960,   960,   960,   961,   961,   962,
     962,   964,   963,   965,   965,   965,   965,   965,   965,   965,
     966,   966,   968,   967,   969,   971,   970,   972,   974,   973,
     975,   976,   976,   977,   979,   978,   980,   980,   980,   981,
     981,   983,   982,   984,   985,   985,   986,   986,   986,   987,
     987,   988,   988,   989,   990,   990,   990,   990,   990,   990,
     990,   991,   991,   993,   992,   994,   994,   996,   995,   997,
     998,   998,   998,   999,   999,   999,   999,  1001,  1000,  1002,
    1003,  1004,  1004,  1005,  1005,  1005,  1005,  1005,  1005,  1006,
    1006,  1007,  1007,  1008,  1008,  1008,  1008,  1008,  1009,  1010,
    1010,  1010,  1010,  1010,  1011,  1012,  1014,  1013,  1016,  1015,
    1017,  1017,  1019,  1018,  1020,  1020,  1021,  1021,  1023,  1022,
    1024,  1024,  1025,  1025,  1025,  1025,  1026,  1026,  1027,  1027,
    1027,  1027,  1029,  1028,  1030,  1031,  1030,  1030,  1032,  1032,
    1033,  1033,  1034,  1034,  1035,  1035,  1035,  1035,  1035,  1036,
    1036,  1037,  1037,  1038,  1038,  1039,  1041,  1040,  1042,  1043,
    1043,  1044,  1044,  1044,  1044,  1044,  1044,  1044,  1045,  1045,
    1046,  1046,  1047,  1047,  1048,  1050,  1049,  1051,  1052,  1054,
    1053,  1055,  1056,  1056,  1058,  1057,  1059,  1060,  1060,  1060,
    1061,  1061,  1062,  1064,  1063,  1065,  1065,  1066,  1066,  1067,
    1067,  1068,  1068,  1069,  1070,  1070,  1072,  1071,  1073,  1073,
    1073,  1073,  1073,  1073,  1073,  1074,  1074,  1075,  1075,  1076,
    1077,  1078,  1078,  1079,  1079,  1079,  1079,  1079,  1079,  1079,
    1079,  1080,  1080,  1081,  1082,  1082,  1083,  1084,  1084,  1085,
    1085,  1086,  1088,  1087,  1090,  1089,  1091,  1091,  1092,  1092,
    1093,  1093,  1094,  1094,  1095,  1095,  1095,  1096,  1096,  1096,
    1098,  1097,  1099,  1100,  1100,  1101,  1101,  1101,  1101,  1102,
    1102,  1102,  1102,  1102,  1102,  1103,  1104,  1104,  1105,  1105,
    1107,  1106,  1106,  1108,  1108,  1108,  1108,  1108,  1109,  1109,
    1110,  1110,  1110,  1110,  1112,  1111,  1113,  1114,  1114,  1115,
    1116,  1116,  1117,  1117,  1118,  1118,  1119,  1119,  1121,  1120,
    1122,  1122,  1122,  1123,  1123,  1124,  1125,  1125,  1127,  1126,
    1128,  1128,  1130,  1129,  1131,  1133,  1132,  1134,  1136,  1135,
    1137,  1138,  1138,  1139,  1139,  1140,  1141,  1141,  1142,  1143,
    1143,  1144,  1144,  1145,  1145,  1146,  1146,  1148,  1147,  1149,
    1149,  1149,  1149,  1149,  1150,  1151,  1151,  1152,  1152,  1152,
    1152,  1152,  1153,  1154,  1154,  1155,  1155,  1155,  1156,  1156,
    1156,  1156,  1157,  1158,  1158,  1159,  1160,  1161,  1161,  1163,
    1162,  1164,  1165,  1165,  1166,  1166,  1166,  1166,  1167,  1167,
    1168,  1168,  1168,  1169,  1169,  1170,  1170,  1170,  1171,  1171,
    1172,  1173,  1173,  1174,  1174,  1175,  1176,  1176,  1177,  1177,
    1177,  1178,  1178,  1179,  1180,  1180,  1181,  1182,  1182,  1182,
    1183,  1183,  1184,  1185,  1185,  1186,  1187,  1187,  1187,  1188,
    1188,  1189,  1190,  1190,  1191,  1192,  1192,  1193,  1193,  1194,
    1194,  1195,  1196,  1196,  1197,  1198,  1198,  1199,  1199,  1200,
    1201,  1201,  1202,  1203,  1203,  1204,  1204,  1205,  1205,  1206,
    1207,  1207,  1208,  1209,  1209,  1210,  1211,  1213,  1212,  1214,
    1214,  1214,  1215,  1215,  1215,  1215,  1215,  1215,  1215,  1215,
    1215,  1215,  1215,  1215,  1215,  1215,  1215,  1215,  1215,  1215,
    1215,  1215,  1215,  1215,  1215,  1215,  1216,  1216,  1217,  1217,
    1218,  1218,  1219,  1220,  1221,  1221,  1222,  1222,  1222,  1223,
    1223,  1223,  1224,  1224,  1224,  1225,  1225,  1226,  1226,  1226,
    1227,  1227,  1228,  1228,  1228,  1228,  1228,  1228,  1229,  1229,
    1230,  1231,  1232,  1233,  1233,  1234,  1235,  1236,  1236,  1237,
    1238,  1238,  1239,  1240,  1240,  1240,  1241,  1242,  1242,  1243,
    1244,  1245,  1245,  1246,  1247,  1247,  1248,  1248,  1249,  1250,
    1250,  1251,  1251,  1251,  1252,  1252,  1253,  1253,  1254,  1254,
    1254,  1254,  1254,  1254,  1254,  1254,  1254,  1254,  1255,  1255,
    1256,  1256,  1256,  1257,  1257,  1257,  1257,  1257,  1257,  1257,
    1258,  1258,  1259,  1259,  1260,  1260,  1261,  1261,  1262,  1262,
    1263,  1263,  1263,  1264,  1264,  1264,  1265,  1265,  1266,  1266,
    1267,  1267,  1267,  1268,  1269,  1270,  1270,  1271,  1272,  1272,
    1272,  1272,  1273,  1274,  1274,  1274,  1274,  1275,  1275,  1276,
    1277,  1277,  1278,  1279,  1280,  1281,  1281,  1281,  1281,  1281,
    1281,  1281,  1282,  1282,  1283,  1283,  1284,  1284,  1284,  1284,
    1284,  1284,  1284,  1285,  1285,  1285,  1285,  1285,  1285,  1285,
    1285,  1285,  1285,  1285,  1285,  1286,  1286,  1287,  1287,  1287,
    1288,  1288,  1288,  1288,  1289,  1289,  1289,  1290,  1290,  1290,
    1291,  1291,  1291,  1292,  1292,  1293,  1293,  1294,  1294,  1295,
    1295,  1296,  1297,  1297,  1298,  1298,  1299,  1299,  1300,  1300,
    1301,  1301,  1302,  1302,  1302,  1303,  1303,  1304,  1304,  1304,
    1305,  1305,  1306,  1306,  1307,  1307,  1307,  1307,  1307,  1307,
    1307,  1307,  1308,  1308,  1309,  1309,  1309,  1309,  1309,  1309,
    1309,  1309,  1309,  1309,  1309,  1309,  1309,  1309,  1309,  1309,
    1309,  1309,  1309,  1309,  1309,  1309,  1309,  1309,  1309,  1309,
    1309,  1309,  1309,  1309,  1309,  1309,  1309,  1309,  1309,  1309,
    1309,  1309,  1309,  1309,  1309,  1309,  1309,  1309,  1309,  1309,
    1309,  1309,  1309,  1309,  1309,  1309,  1309,  1309,  1309,  1309,
    1309,  1309,  1309,  1309,  1309,  1309,  1309,  1309,  1309,  1309,
    1309,  1309,  1309,  1309,  1310,  1310,  1311,  1311,  1312,  1312,
    1313,  1313,  1314,  1314,  1315,  1315,  1316,  1316,  1317,  1317,
    1318,  1318,  1319,  1319,  1320,  1320,  1321,  1321,  1322,  1322,
    1323,  1323,  1324,  1324,  1325,  1325,  1326,  1326,  1327,  1327,
    1328,  1328,  1328,  1329,  1329,  1330,  1330,  1331,  1331,  1332,
    1332,  1333,  1333,  1333,  1334,  1334,  1335,  1335,  1335,  1336,
    1336,  1336,  1337,  1337,  1337,  1338,  1338,  1339,  1339,  1340,
    1340,  1341,  1341,  1341,  1342,  1342,  1343,  1343,  1344,  1344,
    1344,  1344,  1345,  1345,  1346,  1346,  1347,  1347,  1348,  1348,
    1349,  1349,  1349,  1350,  1350,  1351,  1351,  1352,  1352,  1353,
    1353,  1353,  1354,  1354,  1355,  1355,  1356,  1356,  1357,  1357,
    1358,  1358,  1359,  1359,  1360,  1360,  1361,  1361,  1361,  1362,
    1362,  1363,  1363,  1364,  1364,  1365,  1365,  1366,  1366,  1367,
    1367,  1368,  1368,  1369,  1369,  1370,  1370,  1371,  1371,  1372,
    1372,  1373,  1373,  1374,  1374,  1375,  1375,  1376,  1376,  1377,
    1377,  1378,  1378,  1379,  1379,  1380,  1380,  1380,  1381,  1381,
    1382,  1382,  1383,  1383,  1384,  1384,  1385,  1385,  1386,  1386,
    1387,  1387,  1388,  1388
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
       3,     1,     1,     1,     0,     4,     3,     2,     0,     1,
       1,     1,     0,     2,     1,     2,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     0,     2,     0,     4,     5,     0,     5,     2,     2,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     0,     2,     0,
       1,     2,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     6,     0,     2,
       7,     8,     0,     2,     0,     2,     0,     3,     0,     3,
       0,     1,     1,     0,     5,     1,     1,     0,     3,     1,
       2,     1,     2,     2,     3,     1,     0,     5,     1,     2,
       1,     3,     0,     4,     2,     2,     0,     0,     5,     0,
       0,     5,     0,     0,     5,     0,     2,     0,     6,     0,
       2,     2,     2,     3,     1,     1,     2,     2,     1,     2,
       4,     1,     4,     2,     0,     2,     1,     1,     1,     1,
       1,     3,     4,     4,     4,     3,     0,     2,     0,     5,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     2,     1,     2,     1,     1,     0,     2,     2,     0,
       2,     4,     4,     0,     3,     1,     1,     3,     6,     2,
       3,     2,     2,     3,     2,     1,     2,     2,     1,     1,
       1,     2,     2,     1,     4,     2,     3,     0,     0,     5,
       0,     1,     2,     3,     1,     0,     4,     3,     0,     2,
       2,     2,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     1,
       5,     5,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     1,     2,     1,     2,     1,
       1,     1,     1,     0,     1,     1,     0,     1,     1,     3,
       2,     0,     0,     0,     9,     0,     4,     0,     0,     3,
       0,     3,     1,     2,     4,     0,     2,     2,     0,     3,
       3,     4,     4,     3,     0,     1,     0,     2,     2,     0,
       0,     7,     0,     2,     1,     1,     2,     1,     1,     0,
       6,     0,     2,     2,     1,     0,     1,     0,     0,     3,
       0,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     0,     4,     0,     4,     3,     3,
       4,     3,     4,     3,     3,     4,     4,     3,     4,     3,
       4,     5,     3,     4,     3,     3,     1,     1,     0,     1,
       1,     2,     1,     1,     1,     2,     1,     2,     2,     2,
       2,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     1,
       1,     1,     4,     3,     1,     2,     1,     1,     3,     3,
       3,     3,     3,     1,     1,     0,     1,     0,     4,     4,
       5,     6,     0,     2,     0,     1,     0,     3,     3,     4,
       0,     2,     0,     3,     1,     2,     4,     0,     2,     0,
       4,     5,     0,     1,     1,     1,     0,     0,     3,     1,
       2,     2,     3,     0,     2,     2,     2,     0,     3,     2,
       2,     4,     1,     1,     1,     1,     0,     2,     2,     0,
       1,     2,     2,     0,     1,     2,     0,     1,     0,     3,
       1,     2,     0,     3,     2,     3,     0,     1,     3,     3,
       2,     0,     4,     4,     0,     1,     1,     1,     0,     4,
       3,     2,     1,     2,     0,     1,     0,     4,     3,     3,
       3,     3,     2,     2,     1,     1,     2,     0,     3,     1,
       1,     1,     2,     1,     2,     1,     1,     2,     2,     2,
       2,     2,     1,     1,     1,     2,     2,     1,     1,     2,
       2,     1,     1,     1,     1,     3,     1,     3,     3,     3,
       3,     0,     1,     0,     4,     4,     6,     6,     8,     8,
       0,     1,     0,     3,     2,     0,     4,     2,     1,     3,
       1,     1,     1,     2,     1,     1,     2,     2,     3,     2,
       3,     1,     3,     2,     1,     1,     1,     0,     2,     0,
       1,     0,     3,     0,     2,     1,     2,     1,     1,     1,
       0,     2,     0,     3,     1,     0,     3,     1,     0,     3,
       3,     0,     3,     2,     0,     6,     3,     2,     1,     0,
       1,     0,     3,     5,     0,     2,     0,     3,     3,     0,
       2,     1,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     0,     3,     0,     3,     1,     2,     0,     3,     2,
       1,     1,     1,     2,     1,     1,     1,     0,     3,     2,
       5,     1,     2,     2,     2,     1,     1,     1,     2,     1,
       2,     4,     2,     0,     1,     1,     1,     1,     4,     0,
       1,     1,     2,     2,     3,     3,     0,     3,     0,     3,
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
       0,     4,     2,     0,     2,     1,     4,     4,     0,     1,
       1,     1,     1,     1,     0,     4,     5,     1,     2,     2,
       0,     3,     1,     1,     0,     4,     0,     1,     0,     4,
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
       1,     2,     0,     1,     2,     2,     2,     2,     2,     0,
       1,     2,     0,     1,     2,     2,     2,     0,     1,     2,
       0,     1,     2,     0,     1,     2,     2,     0,     1,     2,
       0,     1,     2,     0,     2,     1,     1,     0,     2,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     3,     0,     1,     1,     3,
       3,     1,     3,     3,     1,     3,     1,     2,     2,     1,
       3,     1,     1,     3,     1,     3,     1,     3,     1,     2,
       2,     1,     1,     1,     2,     1,     1,     1,     2,     1,
       0,     2,     1,     1,     1,     3,     1,     1,     2,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     3,     0,     1,     1,     2,     1,     1,
       1,     1,     2,     2,     2,     4,     3,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     3,     2,
       2,     1,     1,     3,     2,     2,     1,     1,     3,     3,
       4,     5,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     2,     5,     5,     5,     4,     5,     5,
       5,     5,     5,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     4,     5,     0,     3,     2,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     0,     0,     1,     0,     1,     0,     1,     0,     2,
       0,     2,     0,     1,     1,     0,     1,     0,     1,     2,
       0,     2,     0,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     2,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     2,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     1,     0,     1,     0,     1,     1,     0,
       1,     1,     0,     2,     2,     0,     1,     0,     1,     0,
       1,     0,     1,     1,     0,     1,     0,     1,     0,     2,
       1,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     2,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     1,     0,
       1,     0,     3,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     2,     1,     3,     2,     1,     1,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,    10,     1,     0,     0,     3,    21,     6,     4,
      46,     8,     9,     0,     0,     0,     7,     0,    11,   292,
      49,    27,    24,    46,    46,    23,    22,     0,     0,   695,
     294,     0,   181,    51,     0,     0,    14,     0,    47,     0,
       0,    20,   740,     0,   296,     0,     0,    45,   183,     0,
       0,    99,    52,    53,     0,     0,     0,    12,    15,    16,
       0,    13,   293,   697,     0,     0,     0,   290,    50,     0,
       0,   187,    62,    56,     0,   101,    54,    55,    30,    29,
      33,    33,    32,    31,     0,    17,     0,   700,   698,   716,
       0,   794,   867,   876,   882,   889,   928,   932,   946,   941,
     947,   948,   956,  1003,  1012,  1015,  1041,  1052,  1055,  1058,
    1050,  1064,  1071,  1093,  1097,  1136,  1138,  1142,     0,  1148,
    1162,  1186,  1204,  1205,  1208,  1209,  1214,  1222,  1223,  1236,
    1272,  1290,     0,  1324,  1338,  1346,  1348,   722,  1352,  1355,
    1358,  1409,   742,   743,   744,   745,   746,   747,   748,   749,
     751,   750,   752,   753,   754,   755,   756,   757,   758,   759,
     760,   761,   762,   763,   764,   765,   766,   767,   768,   769,
     770,   771,   772,   773,   774,   775,   776,   777,   778,   779,
     780,   781,   782,   783,   784,   785,   786,   787,   788,   789,
     790,   791,   741,   295,   302,   303,   363,   297,   366,     0,
     182,   184,   185,    64,    58,   100,     0,     0,     0,  1915,
    1869,  1869,  1869,     0,     0,  1869,  1842,   119,    84,   102,
       0,   105,   107,   108,   109,   155,   111,   110,   112,   113,
     114,   115,   116,   117,   118,     0,     0,    25,    18,    19,
     705,   705,     0,     0,  1755,  1756,  1757,  1758,  1759,  1760,
    1761,  1762,  1763,  1764,  1765,  1766,  1767,  1768,  1804,  1805,
    1806,  1807,  1808,  1809,  1810,  1811,  1812,  1813,  1814,  1815,
    1816,  1817,  1818,  1819,  1820,  1821,  1822,  1823,  1769,  1770,
    1771,  1772,  1773,  1774,  1775,  1776,  1777,  1778,  1779,  1780,
    1781,  1782,  1783,  1784,  1785,  1786,  1787,  1788,  1789,  1790,
    1791,  1792,  1793,  1794,  1795,  1796,  1797,  1798,  1799,  1754,
    1800,  1801,  1802,  1803,   793,     0,     0,     0,     0,   892,
       0,     0,     0,     0,     0,     0,     0,  1497,  1043,     0,
       0,  1934,   913,   912,     0,  1063,  1497,     0,     0,     0,
       0,     0,     0,   792,     0,  1174,     0,     0,     0,     0,
       0,     0,     0,     0,  1320,  1323,  1310,  1321,  1322,  1312,
       0,     0,  1347,  1345,     0,   740,     0,     0,     0,     0,
       0,   526,   298,  1721,     0,  1565,   299,     0,  1737,   271,
     188,  1841,     0,     0,     0,  1869,  1977,    82,    63,  1840,
      68,    70,    71,    72,    73,  1840,     0,  1869,    57,    60,
    1587,  1586,   130,  1869,  1869,  1916,  1869,  1870,     0,     0,
       0,  1869,  1869,     0,  1843,     0,  1869,     0,    48,     0,
     103,   106,     0,   154,    34,    28,  1869,  1839,   705,   702,
     708,     0,   705,   717,   718,   692,   817,  1657,   865,   796,
     816,  1647,  1651,  1894,     0,  1700,     0,  1695,  1701,     0,
       0,  1707,  1680,     0,  1552,  1554,  1676,     0,     0,     0,
    1698,  1681,  1607,     0,  1556,  1679,  1699,  1677,  1702,  1703,
    1682,     0,  1697,  1707,  1696,  1678,   874,  1601,   872,  1596,
    1598,  1599,  1672,  1674,  1600,  1704,     0,     0,     0,     0,
       0,     0,   877,     0,  1541,  1544,  1546,  1549,  1616,  1551,
    1726,  1614,  1615,  1576,   883,   884,     0,  1572,  1574,  1573,
     895,   893,   894,   926,     0,  1629,   929,   930,  1628,   933,
     936,  1894,   944,     0,  1558,  1740,  1591,  1652,  1656,  1592,
       0,   954,  1908,  1676,   970,  1001,  1438,  1594,   965,   967,
     964,     0,  1598,  1010,     0,   896,  1013,  1022,  1021,  1039,
       0,  1018,  1020,  1496,     0,  1045,  1049,  1047,  1050,  1048,
    1042,  1053,  1054,  1589,  1056,  1057,  1935,  1059,  1570,  1051,
    1930,  1495,  1072,  1074,  1566,  1094,  1095,  1098,     0,  1100,
    1101,  1102,  1137,  1276,  1644,  1645,     0,  1139,     0,  1146,
       0,  1155,  1152,  1154,  1153,  1149,  1156,  1176,  1576,  1944,
    1163,  1174,  1165,     0,  1172,     0,  1630,  1573,  1632,     0,
    1202,  1732,  1206,  1412,  1561,  1212,  1908,  1220,  1412,     0,
    1234,  1227,  1562,     0,     0,  1569,  1237,  1238,  1239,  1240,
    1241,  1242,  1264,  1243,  1267,  1244,     0,  1567,     0,     0,
    1643,  1656,  1273,  1308,  1295,  1313,  1336,     0,  1327,  1330,
       0,  1343,     0,  1349,  1350,   728,   734,   723,   724,   725,
     727,     0,  1353,     0,  1356,  1910,  1375,  1361,  1423,  1412,
       0,     0,   529,     0,     0,     0,   368,     0,     0,   372,
     373,   371,     0,   301,   304,   186,     0,  1738,     0,   283,
     279,   180,     0,   274,   276,   277,  1976,  1869,     0,     0,
      67,    69,    65,    83,  1840,  1869,     0,     0,     0,  1869,
       0,     0,     0,   176,  1579,   174,   179,     0,     0,   178,
    1588,   157,   158,  1871,   161,  1662,  1246,  1245,   120,   124,
     127,  1898,  1869,     0,    85,   104,   156,     0,     0,   703,
    1869,     0,   714,   706,   707,   719,  1955,  1956,     0,   866,
     795,   818,     0,     0,  1649,  1650,  1895,     0,  1673,     0,
       0,     0,     0,  1693,  1602,  1603,  1604,     0,     0,     0,
       0,     0,     0,     0,     0,  1694,   875,   868,     0,     0,
    1597,     0,     0,  1683,     0,     0,  1617,  1618,  1619,  1548,
    1613,     0,  1547,  1728,     0,     0,     0,     0,     0,  1727,
     880,   885,   887,     0,   927,   890,  1631,   896,   931,   936,
    1967,  1968,   934,     0,   937,     0,   945,   942,  1952,  1951,
    1559,     0,  1742,  1560,  1654,  1655,   951,   952,   955,   949,
    1909,  1483,  1002,   957,   737,   737,   962,  1444,  1441,   966,
     963,  1595,  1943,  1438,  1438,  1438,  1438,  1011,  1004,     0,
       0,   897,  1014,  1040,  1016,  1497,  1497,  1017,  1024,  1025,
     737,  1521,  1522,  1523,  1517,  1934,  1509,  1529,  1532,  1531,
    1533,  1525,  1516,  1515,  1520,  1519,  1518,  1524,  1504,  1508,
    1526,  1528,  1530,  1506,  1507,  1503,  1505,  1498,  1499,  1510,
    1511,  1512,  1513,  1514,  1502,  1046,  1044,  1590,  1061,  1931,
     737,  1076,     0,  1096,     0,  1123,  1107,  1099,  1104,  1105,
    1106,  1280,     0,  1646,     0,     0,  1147,  1143,     0,  1156,
    1943,     0,  1164,  1170,  1171,   737,  1167,  1497,     0,     0,
    1175,     0,  1203,  1187,  1733,  1734,  1908,     0,  1207,  1213,
    1210,  1189,  1221,  1215,  1217,  1229,  1235,  1224,     0,  1229,
       0,  1624,  1625,     0,  1265,  1268,     0,     0,  1568,  1248,
       0,  1247,     0,     0,  1654,  1309,  1291,  1297,  1869,  1298,
    1293,     0,  1311,  1315,     0,  1337,  1325,     0,  1328,  1838,
    1329,     0,  1344,  1339,     0,  1351,   735,   733,   726,     0,
    1911,  1912,  1357,  1376,  1359,  1838,     0,  1424,  1410,  1414,
     364,     0,     0,   532,   381,   413,   416,     0,     0,   369,
       0,   379,   374,   380,   377,  1869,  1739,   189,  1850,   280,
     281,   282,  1830,     0,   272,   275,     0,  1975,    76,    66,
       0,  1580,    75,    59,     0,     0,  1669,  1665,  1670,  1668,
    1666,  1671,  1667,   165,   166,   168,   177,   172,   170,     0,
     159,  1873,  1872,   162,     0,  1898,  1901,  1900,     0,     0,
     121,   125,    87,    26,    37,    40,    44,    43,  1906,    38,
      39,     0,  1869,   715,     0,     0,   693,  1658,  1835,   823,
    1869,  1425,   819,   820,   822,   824,     0,     0,   812,  1425,
    1950,  1949,   809,   801,   803,   804,     0,  1425,     0,     0,
       0,   826,   807,     0,   815,   798,   814,   799,  1536,  1534,
       0,  1648,  1621,  1620,     0,  1606,     0,  1536,  1534,     0,
    1536,     0,  1709,  1536,  1553,  1555,  1536,     0,     0,     0,
    1536,  1610,  1611,  1612,     0,  1557,  1536,     0,  1894,  1447,
     873,  1656,  1592,     0,  1675,     0,     0,  1536,  1550,  1730,
     880,  1540,  1539,  1543,  1542,  1545,     0,   878,     0,     0,
    1575,   907,   935,   940,     0,  1855,     0,  1593,  1447,  1869,
    1741,  1653,   953,   737,   737,   950,  1484,  1490,  1487,  1443,
     738,  1446,  1439,  1445,  1440,  1442,     0,   976,   975,   968,
     971,   973,     0,   960,   961,   958,   959,     0,  1447,     0,
     903,  1019,  1034,  1036,  1035,  1029,  1031,  1037,  1497,  1026,
    1023,  1497,  1027,  1527,  1500,  1501,  1896,  1060,  1571,   737,
    1068,  1069,  1934,  1084,  1085,  1087,  1089,  1090,  1086,  1088,
    1079,  1934,  1075,     0,  1124,     0,  1126,  1125,  1127,  1109,
    1119,     0,     0,  1103,  1974,  1897,     0,  1282,     0,  1860,
       0,  1140,  1447,     0,     0,     0,  1158,  1563,  1168,  1181,
    1177,  1182,  1178,  1183,     0,  1173,  1419,  1418,  1180,  1189,
    1413,  1640,  1641,  1642,     0,     0,  1483,     0,   737,     0,
    1228,     0,     0,     0,     0,  1266,     0,  1270,  1269,  1262,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1250,
    1251,  1735,  1483,     0,  1314,  1926,  1926,  1334,     0,     0,
    1447,     0,     0,   736,     0,  1722,     0,  1334,  1217,  1824,
     366,   527,     0,     0,   627,     0,   439,     0,   370,   376,
     420,   382,  1844,  1869,     0,     0,  1869,  1844,  1887,  1869,
    1828,   300,     0,   305,   308,   309,   310,   311,   312,   313,
     314,   315,   316,     0,     0,   191,  1851,  1928,  1831,  1854,
     273,     0,    79,    81,    80,    77,    78,    61,   136,   135,
     150,   146,   151,   132,   149,   147,   133,   134,   148,   131,
     137,   138,   140,   167,     0,   171,     0,   175,  1663,   160,
     163,     0,  1899,   128,   122,   123,   126,     0,    86,     0,
      90,    42,  1907,    36,    41,   709,   710,   713,     0,   704,
     720,   722,  1635,   830,  1633,  1634,     0,  1431,  1432,  1436,
    1437,   797,  1433,   737,  1428,   737,   821,  1948,  1947,  1889,
    1889,   828,   829,  1889,   835,  1869,   837,   838,   839,   864,
    1869,   840,   841,   842,   843,   844,     0,   845,   846,   848,
       0,   849,   850,     0,   851,  1869,   836,  1826,   854,   863,
     857,   825,   856,   813,   800,   802,  1425,   810,   805,   806,
     827,   808,  1537,  1538,  1659,     0,     0,     0,  1623,  1605,
    1622,  1740,     0,  1704,     0,  1704,  1708,     0,  1704,  1704,
    1704,     0,  1687,     0,  1704,     0,   737,   737,   869,  1453,
    1450,  1654,  1655,  1447,     0,  1704,  1704,     0,  1729,   879,
     881,   888,   886,   916,  1867,   939,   938,   943,     0,  1489,
    1492,  1485,  1491,  1486,  1488,   740,   982,   983,   980,   979,
     981,   978,   972,  1869,   984,     0,   987,   988,  1848,  1869,
     991,   992,   974,   993,   994,     0,  1869,   996,   977,     0,
    1005,     0,   898,   899,   708,     0,  1497,  1497,  1033,   737,
    1030,     0,  1067,   737,  1070,  1065,     0,     0,  1091,     0,
       0,     0,  1120,  1122,     0,  1115,  1129,  1116,  1117,  1108,
    1111,  1129,  1973,     0,  1946,  1274,  1869,   505,   506,  1874,
       0,  1861,  1281,  1141,  1144,     0,  1158,  1902,  1902,     0,
    1157,  1161,  1150,  1564,     0,  1169,  1166,     0,     0,  1191,
    1190,   737,   737,  1211,  1472,     0,  1216,  1218,     0,  1230,
    1497,  1497,  1225,  1231,  1249,  1271,  1261,  1263,  1253,  1254,
    1255,  1259,  1256,  1260,  1257,  1258,  1252,  1736,  1307,     0,
    1304,  1305,  1299,     0,  1292,  1972,  1971,     0,  1927,  1318,
    1318,  1456,     0,  1332,  1331,  1333,  1740,  1340,     0,   729,
       0,  1723,  1362,  1363,     0,  1366,  1369,  1373,  1367,  1420,
    1825,     0,   365,   366,   530,     0,     0,   291,  1871,   414,
       0,   440,     0,   411,  1869,  1832,     0,  1845,     0,     0,
    1869,  1828,     0,     0,     0,     0,     0,  1888,  1869,   359,
    1829,   360,     0,     0,   361,   306,   307,  1908,  1929,  1844,
       0,  1963,  1964,    74,   139,   142,     0,   169,     0,   164,
     129,     0,    97,    95,     0,     0,    88,    91,   711,   712,
     722,   740,   834,  1426,  1434,  1430,  1427,  1429,  1435,  1890,
       0,     0,     0,     0,     0,   855,  1869,  1869,  1493,  1493,
       0,  1827,     0,   811,  1535,  1660,     0,  1447,  1718,  1691,
    1720,  1692,  1716,  1688,  1689,  1690,  1714,  1711,  1712,  1686,
    1593,  1455,  1452,  1448,  1454,  1449,  1451,  1653,   870,  1705,
       0,  1684,  1685,  1731,  1626,  1627,   737,   737,   737,   891,
     923,   919,  1894,  1868,   910,   915,   914,   909,     0,  1744,
    1745,  1746,  1747,  1748,  1749,  1750,  1751,  1743,     0,     0,
     985,   986,  1894,   675,   677,   989,   990,     0,     0,  1493,
    1493,     0,  1447,  1558,  1447,  1558,   900,   901,     0,   905,
     904,   906,  1032,  1038,  1028,  1062,  1066,  1077,  1080,  1081,
    1846,  1073,  1934,  1078,  1129,  1129,     0,  1865,  1865,  1114,
    1130,  1131,  1112,  1113,  1118,  1945,  1284,     0,  1875,  1278,
    1862,  1447,  1151,  1903,   268,   269,   270,  1160,     0,  1184,
       0,     0,  1198,     0,  1471,  1474,  1465,  1473,  1466,  1219,
     737,   737,  1232,  1306,  1296,  1300,  1301,  1302,  1303,  1294,
    1316,  1319,  1317,   737,   737,  1326,  1462,  1459,  1869,  1447,
    1447,   731,  1354,  1722,  1365,  1858,  1371,  1858,  1456,   737,
     737,  1411,  1422,  1480,  1477,  1421,  1417,  1416,  1879,   528,
     366,   533,     0,     0,   417,   441,     0,   410,     0,   515,
     445,  1917,  1917,  1917,  1917,  1917,  1939,   446,   481,   483,
     449,   450,   451,   452,   453,   454,   477,   475,   476,   478,
     479,   484,   482,   455,  1913,   480,     0,   456,   442,   457,
     458,     0,  1920,   460,   461,   459,  1876,   463,   464,   462,
    1869,   421,   422,   423,   424,   425,   426,   443,   447,   448,
     427,   428,   429,   430,   431,   432,   433,   434,     0,     0,
    1833,     0,   415,     0,   383,   328,   237,   356,  1965,  1966,
    1583,   337,  1581,  1958,  1957,   330,  1585,  1584,  1885,  1842,
    1858,     0,  1869,   334,   333,  1869,   362,  1887,  1908,  1936,
     253,     0,  1869,  1840,  1874,   255,     0,  1943,   241,   190,
     240,   192,   193,   194,   195,   196,   197,     0,   198,     0,
     199,   252,   200,   201,   202,   203,   204,   205,  1836,  1869,
       0,   278,     0,   141,   173,    92,     0,    93,    98,    94,
      89,   740,   831,   833,   832,   859,   858,     0,     0,   861,
       0,  1638,  1639,   860,   853,  1664,   862,  1636,  1637,  1661,
     871,  1706,   921,   925,   922,   917,   924,   918,   920,     0,
     908,   998,  1849,   676,   678,   997,  1000,   999,   995,  1007,
       0,  1006,     0,   902,  1082,  1847,     0,     0,  1110,  1121,
    1129,  1866,     0,     0,  1132,  1133,     0,     0,  1287,  1283,
    1277,  1145,  1159,     0,  1192,  1869,  1483,     0,     0,  1193,
       0,  1197,  1226,  1233,  1464,  1461,  1457,  1463,  1458,  1460,
       0,  1342,  1341,  1377,   730,     0,  1364,  1859,     0,  1858,
    1368,     0,  1360,  1479,  1482,  1475,  1481,  1476,  1478,  1880,
    1881,  1415,   531,   535,   628,   516,   518,   520,   412,   524,
     525,  1918,   474,   473,   466,   465,   472,   471,   470,   469,
     468,   467,  1940,     0,  1914,   512,   498,   492,   435,  1921,
    1877,  1878,   513,     0,   437,  1752,  1752,   419,  1894,     0,
       0,   418,   384,     0,   318,     0,   355,  1582,  1886,   339,
       0,   321,  1922,   348,   350,   354,   353,   349,   351,   347,
     352,     0,     0,  1869,  1874,  1937,  1938,   220,   256,  1908,
    1869,  1869,  1869,  1869,   265,  1830,   266,     0,  1869,  1887,
    1837,     0,     0,   284,   285,   288,   143,   144,    96,     0,
     847,   852,  1969,  1970,  1494,   911,  1447,  1447,     0,  1092,
    1128,  1135,  1134,  1869,  1285,     0,     0,  1275,  1279,     0,
       0,  1188,  1201,  1472,  1469,  1200,  1196,  1194,  1195,  1335,
    1385,   732,  1370,     0,  1374,   534,   630,   522,   519,     0,
     514,  1858,   494,     0,  1932,   444,     0,   436,  1840,   485,
     486,     0,     0,   393,   389,   392,   391,   390,   405,   401,
     403,   404,   406,   402,   407,   408,   409,   386,   397,   398,
     399,   394,   395,   396,   388,   385,   329,   320,   319,   317,
     357,  1577,   338,  1842,  1923,   326,   335,   332,   336,   331,
       0,  1869,   222,   221,   218,   255,   251,     0,     0,     0,
       0,   264,   267,     0,  1869,   254,   236,   286,     0,   287,
       0,     0,  1009,  1008,  1083,     0,  1288,  1869,  1497,  1199,
    1467,  1468,  1470,  1835,  1408,  1407,  1386,  1378,  1379,  1826,
    1380,  1381,  1382,  1383,  1406,     0,     0,  1372,     0,   536,
       0,   634,   629,   631,     0,     0,   517,     0,   521,     0,
       0,   492,   493,  1933,   496,   438,  1753,   387,   400,  1578,
       0,     0,   340,   341,   342,   343,     0,   322,  1857,   328,
       0,   230,   231,   229,   228,     0,   214,   215,   225,   225,
       0,   213,   211,   212,   217,   216,   225,   225,     0,   257,
     258,   259,   260,   263,   238,     0,   289,   145,   721,  1286,
       0,  1185,     0,  1924,     0,  1896,   537,     0,   635,     0,
     632,     0,  1869,   499,   495,   500,  1896,   503,   346,   345,
    1834,  1842,   327,  1724,   226,   208,   227,   209,  1850,   210,
     207,   223,   206,   224,  1869,     0,   247,   246,   247,   243,
    1289,     0,  1925,     0,  1404,  1403,  1402,     0,     0,   637,
     638,   633,  1942,     0,   501,   503,     0,   507,   502,     0,
     324,   233,  1725,   219,     0,   261,     0,   245,   244,  1405,
    1954,  1953,  1904,  1398,  1392,  1393,  1395,     0,  1869,  1919,
     523,   507,   497,  1838,   490,  1874,   344,  1896,   323,     0,
     232,   262,     0,   250,  1905,  1896,  1401,  1396,  1399,     0,
    1394,   541,  1869,  1869,  1828,  1882,   566,   540,   544,   545,
       0,  1852,   653,  1869,   642,  1939,   643,  1848,  1869,     0,
     656,   651,   646,   652,  1889,   647,     0,   650,   658,   655,
     648,   654,     0,   659,   649,     0,   670,   664,   668,   667,
     665,   669,   639,   671,   666,     0,  1889,   491,     0,  1869,
       0,     0,     0,     0,  1400,  1397,     0,  1992,  1993,  1869,
    1828,     0,   538,   542,  1853,   546,     0,     0,   640,   641,
     644,   645,     0,   673,  1869,  1932,  1869,   674,   672,   690,
    1869,   511,   508,   509,     0,   325,     0,   152,   153,   235,
       0,  1961,  1962,   248,  1391,  1388,  1390,  1389,  1384,  1387,
     543,  1883,  1884,   554,   551,   378,   567,   547,   548,   663,
     662,   683,   689,     0,   686,   510,   504,   234,   249,   550,
    1959,  1960,   553,   568,   380,   549,   681,   679,   682,   680,
     684,   685,     0,   657,   687,   688,     0,     0,  1869,  1869,
       0,   555,   556,   557,   558,   559,   560,     0,   570,   660,
     661,  1979,  1978,  1869,     0,     0,  1981,     0,  1869,  1869,
     552,  1919,     0,   565,   561,  1980,     0,     0,  1863,  1891,
    1828,     0,     0,     0,  1869,  1894,   569,  1869,  1869,     0,
     575,   577,   586,   578,   580,   583,   571,   572,   573,   582,
     584,   587,   574,     0,   579,     0,   581,   585,   576,  1891,
    1828,   562,   564,   563,  1864,   625,  1892,  1893,  1871,   611,
    1869,   492,  1497,     0,     0,     0,     0,     0,   619,     0,
     609,   615,   618,     0,   612,   620,   623,  1871,   614,   610,
       0,  1932,   607,  1740,   603,  1608,  1983,     0,     0,  1985,
    1987,     0,  1991,  1989,   588,   592,   596,   596,   590,   594,
     589,   595,   626,     0,   617,   616,   622,   621,   613,   601,
     496,   624,  1896,   602,  1609,  1982,  1986,  1984,  1990,  1988,
     599,   591,   599,   593,     0,   488,     0,     0,   598,   597,
       0,     0,   487,   606,   604,   605,   600,   608,   489
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,     8,     9,    10,    11,    12,
      57,    58,    59,    61,    18,    13,    23,    35,   426,    24,
      34,    80,    84,   236,   737,  1068,  1069,  1070,    19,    20,
      32,    33,    51,    52,   204,   398,   707,    53,   203,   388,
     389,   390,   391,   392,   393,   394,  1365,   395,   418,  1062,
    1398,  1399,  1400,  2057,  1724,    75,   218,   219,   220,   221,
     222,   416,   728,  1395,   729,   730,   223,   709,  1379,  1380,
    1381,  2052,  2246,  1382,  2639,   224,   423,   225,   721,   722,
     723,  1389,   226,  1043,  1044,   227,   228,  1385,   229,   230,
     231,   232,   233,   234,    47,    48,    71,   379,   202,   380,
    1355,  1707,  2031,  2032,  2436,  2437,  2438,  2344,  2482,  2475,
    2033,  2424,  2034,  2540,  2035,  1997,  2036,  2037,  2038,  2039,
    2489,  2517,  2040,  2041,  2042,  2043,  2044,  2441,  2045,  2046,
    2235,  2047,  1600,   691,   692,   693,   694,  1022,   695,  1018,
    2243,  2244,  2359,    29,   196,    30,    44,    67,   197,   198,
     684,   199,  1015,  1343,  1344,  2329,  1345,  2538,  2419,  2204,
    1346,  1347,  2015,  2337,  1348,  1349,  2332,  2412,  2413,  2414,
    2415,  1350,  2219,  2220,  1351,  2206,  1352,  1353,  1703,   371,
    1320,   372,   373,   676,   677,  1330,   678,  1012,  1013,  1685,
    2201,  2317,  2318,  2319,  2320,  2321,   679,  1927,   680,  1325,
     681,  1326,  1992,  1684,  1971,  1972,  1973,  2297,  1680,  1681,
    1975,  1976,  1977,  1978,  1979,  1980,  2732,  2832,  1981,  2294,
    2401,  2467,  2292,  2505,  2507,  2508,  1589,  2534,  2632,  2633,
    1982,  1983,  1984,  1985,  1679,  2287,  2165,  2166,  2396,  1987,
     672,  1673,  1003,  1920,  1324,  2163,  2285,  2389,  2498,  2528,
    2557,  2558,  2615,  2657,  2559,  2653,  2669,  2691,  2692,  2693,
    2694,  2695,  2696,  2612,  2656,  2698,  2711,  2736,  2737,  2794,
    2821,  2828,  2738,  2739,  2813,  2834,  2740,  2741,  2742,  2743,
    2744,  2745,  2770,  2771,  2774,  2775,  2746,  2747,  2748,  1677,
    2286,  2392,  2393,  2394,  2500,  2529,  2592,  1815,  1816,  2680,
    2681,  2682,  2686,  2593,  2594,    41,   745,  1411,    42,    89,
     241,   240,   428,   429,   430,   742,  1074,   243,  1076,  1730,
     365,   657,   658,  1901,  2144,   659,   660,  1312,  1179,  1180,
    1525,   661,    65,   142,   143,   315,   438,   751,   439,  1081,
    1082,  1083,  1105,  1084,  1431,  1432,  1085,  1461,  1462,   750,
     144,   316,   476,   779,   777,   145,   317,   492,  1157,   146,
     318,   504,   505,  1159,   147,   319,   513,   514,   852,  1200,
    1552,  1553,  1554,  1513,   334,  1797,  1789,  2087,  1790,  2085,
    1791,   805,   148,   320,   516,   149,   321,   519,   812,   150,
     322,   522,   817,   151,   152,   153,   323,   531,   826,   829,
     154,   324,   535,   536,   537,   538,   842,   539,  1189,  1190,
    1191,  1530,  1548,   833,   155,   325,   543,   848,   156,   326,
     546,   157,   327,   549,   550,   551,   857,   858,   859,  1210,
     860,  1205,  1206,  1558,   854,   158,   328,   560,   335,   159,
     329,   561,   160,   330,   564,   161,   331,   567,  1217,   162,
     163,   336,  1221,  1565,   164,   337,   572,   901,  1230,  1568,
    1838,  1839,  1840,  1841,   165,   338,   575,   166,   339,   577,
     578,   907,   908,  1242,   909,   910,  1579,  1580,  1239,  1240,
    1241,  1573,  1849,  1850,  1851,   167,   340,   168,   341,   587,
     169,   342,   589,   917,   170,   344,   595,   596,   921,  1602,
     171,   345,   600,   925,  1606,   926,   601,   602,   603,  1260,
    1262,  1263,   172,   346,   610,  1275,  1872,  2126,  2271,   933,
     173,   174,   347,   612,   175,   176,   348,   615,   940,   177,
     349,   617,  1276,   943,   178,   179,   350,   620,   949,  1279,
    1622,  1623,   947,   180,   351,   626,   731,   962,   627,   628,
    1299,  1300,   629,   630,   631,   632,   633,   634,   635,   181,
     352,   582,  1856,   911,  2120,  1247,  1585,  2118,  2267,   182,
     353,   643,  1302,   970,  1639,  1640,  1641,   966,   183,   645,
     972,  1890,   359,   184,   360,   646,   647,   648,   980,  1654,
    1651,   976,   185,   361,   651,   983,   186,   363,   187,   364,
     653,   188,   366,   662,   189,   367,   664,   190,   368,   666,
     996,  1662,  1663,  1317,  1665,  1906,  2150,  1908,   994,  2145,
    2280,  2377,  2378,  2379,  2648,  2380,  2524,  2525,  2549,  2381,
    2496,  2382,  2383,  2384,   191,   369,   668,   938,  1318,  1268,
    1911,   998,  1421,  1736,  1422,  1423,  1733,  1424,  1425,   836,
    1184,   837,  1182,   838,  1498,  1775,  1499,  1773,  1500,  1895,
    2138,  1896,  2136,  1897,  1613,  2272,  2371,  1614,  1876,  1877,
    1912,  2157,  1913,  2155,  1914,  1175,  1176,  1523,  1177,  1521,
    1178,  2069,   570,   571,   553,   554,   887,   888,   889,   890,
     891,   892,   893,  1108,  1475,  1118,   494,   495,   496,   497,
     477,   523,   820,   613,   621,  1256,  1257,   576,   636,   637,
     898,   604,   507,   508,  2330,  2007,  1032,  2001,  2002,  2008,
     402,   724,   562,   525,   840,   478,   479,  2784,  1130,   499,
    1114,  1479,  1581,  1783,   517,   605,  1413,  2076,  2070,  1270,
    1414,   583,   640,   480,   441,   526,   527,   442,   754,   755,
    1415,  1390,  2772,  1045,   481,   482,   483,   484,   485,   486,
     487,   783,   763,  1137,  1134,  1127,  1119,  1121,   682,  1664,
    2511,   800,  1150,  1508,   936,  1643,   688,   823,  1170,  1807,
    2299,   314,  1671,  1752,  1701,  1359,  1993,  1086,  2241,   431,
     396,   415,  1688,  2106,  1817,  1357,  2616,  1166,  2420,  2148,
    1592,  2755,  2112,  1798,   408,  1054,  1859,  2192,  2161,  2611,
    2209,  1698,  1740,  2758,   757,  1248,  1058,  1864,  2545,  1403,
    2048,   992,  2185,   406,  2173,  1989,  2335,  2493,  1649,  1709,
     900,  2404,   568,  2227,  2183,  2397,   609,  1586,  1433,  1107,
     821,  2522,   748,  2005,  2672,  2643,  1713,  1692,   814,  2254,
    1647,  1249,   397,  2703,  2709,  2797,  2798,  2799,  2800,  2801,
    2561
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2309
static const yytype_int16 yypact[] =
{
   -2309,   690,   661, -2309,   140,   701, -2309,   801, -2309, -2309,
     124, -2309, -2309,   535,   393,   477, -2309,   839, -2309,   880,
    1095, -2309, -2309,   124,   124, -2309, -2309,   582,  1096,   756,
     745,   882,  1103,  -120,   901,   909,  1307,  1341, -2309,  1030,
    1379, -2309, -2309,  1109, -2309,  1042,  1118, -2309,  1372,  1073,
    1099,  1152,  1245,  1158,   -34,   -34,   573, -2309,  1307, -2309,
     573, -2309, -2309,     7,  3000,  3515,  1125,     4, -2309,  1140,
    1143, -2309, -2309, -2309,  1163,  1883, -2309, -2309, -2309, -2309,
    1575,  1575, -2309, -2309,  1167, -2309,  1173, -2309, -2309,  1238,
    3910, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
     483, -2309, -2309, -2309, -2309, -2309, -2309, -2309,  1264, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309,   861, -2309, -2309,  1309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309,  1159, -2309,   -37,    79,
   -2309, -2309,   534,   791,  1166, -2309,    80,    80,  1259,  1283,
    1466,  1466,  1466,    80,  1294,  1466,  1678, -2309,  1375,  1883,
    1474, -2309, -2309, -2309, -2309,  1534, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309,  1497,  1299, -2309, -2309, -2309,
      68,    68,  -152,  1300, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309,   415,  4882,  7660,  -108,  -114,
     371,  1239,   972,  -238,  4842,  5891,  1509,   459,   825,   972,
    1251,  1318, -2309, -2309,  5891, -2309, -2309,   972,  1254,  1895,
    1251,  5173,  5891, -2309,   895,  8001,  1239,  1251,  1239,  1251,
      82,   503,  1251,  1239, -2309, -2309, -2309, -2309, -2309, -2309,
    5891,  5208, -2309, -2309,  1254,   110,  1251,  1239,  1251,  1251,
    1377,  1513, -2309,   275,  1320, -2309, -2309,  1323,   -54,   -96,
   -2309, -2309,  1378,  1364,  1725,  1466, -2309, -2309, -2309,   689,
   -2309, -2309, -2309, -2309, -2309,   785,  1730,  1466, -2309,     0,
   -2309, -2309, -2309,  1466,  1466, -2309,  1466, -2309,  1251,  1722,
    1251,  1466,  1466,  1251, -2309,  1273,  1278,  1329, -2309,  1565,
   -2309, -2309,  1275, -2309, -2309, -2309,   -79, -2309,    70, -2309,
    -179,   472,   317, -2309, -2309, -2309, -2309,   625,  1665, -2309,
    1599, -2309,  1324,  1488,  1222, -2309,  1251, -2309, -2309,  1327,
    1328,  1330, -2309,  7950,   625,   625, -2309,  1333,  1334,  1335,
   -2309, -2309, -2309,  1337,   625, -2309, -2309, -2309, -2309, -2309,
   -2309,  1343, -2309,  1330, -2309, -2309,  1686, -2309,  5310, -2309,
   -2309, -2309,  1360, -2309, -2309,  1348,  1352,  1354,  7950,  7767,
    7660,  7767, -2309,   195,   810, -2309,  1661, -2309, -2309, -2309,
     764,  1360, -2309, -2309,  -108, -2309,  1386, -2309,   625, -2309,
   -2309, -2309, -2309,  1712,  2988, -2309,   371, -2309, -2309,  1239,
    1102,  1488,  1713,   445, -2309,  1455, -2309, -2309,  1324,  1360,
    1239,  1714,  1492,  1116, -2309,  1716,   677,  5483, -2309, -2309,
    4609,  1142,  1177,  1719,   721,  1353, -2309, -2309, -2309,  1720,
      62, -2309, -2309, -2309,  4318, -2309, -2309,  1760,   483, -2309,
   -2309, -2309,   972, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
    1410, -2309, -2309,   490, -2309,  1254, -2309, -2309,   305, -2309,
   -2309, -2309, -2309, -2309, -2309,  1390,  5891, -2309,  1408,  1728,
    1822, -2309, -2309, -2309, -2309,   895,  1462, -2309,  1420, -2309,
   -2309,  8049,    11,  -246,  1424,  1429, -2309,   973, -2309,  1437,
    1748,   655, -2309,  1697, -2309,  1752,  1492,  1756,  1697,  1251,
    1757,  1392, -2309,  1621,  1743, -2309, -2309, -2309, -2309, -2309,
   -2309,  1636, -2309,   972, -2309, -2309,  -111, -2309,   558,  1881,
   -2309,    57, -2309,  1764,  1281,  4471,  1765,  5585, -2309,  1803,
    1251,  1766,  5687,  1254, -2309, -2309,   629, -2309, -2309, -2309,
   -2309,  3333, -2309,  1721, -2309,  1219,  1767,  1808,  1769,  1697,
    1459,  1521,  1666,  1407,  1407,  1407,   311,  1469,  6663, -2309,
   -2309, -2309,  1411, -2309, -2309, -2309,  1613, -2309,    80, -2309,
    1041, -2309,    86, -2309, -2309, -2309, -2309,  1466,  1522,  1676,
   -2309, -2309, -2309, -2309,  1007,  1466,  1418,  1475,  1837,  1466,
    1223,  1251,  1687, -2309, -2309, -2309, -2309,  1689,  1465, -2309,
   -2309,  1273, -2309,    38, -2309, -2309, -2309, -2309, -2309, -2309,
    1321,   -60,  1466,    69, -2309, -2309, -2309,  1487,   200, -2309,
    1466,  1532,  1637, -2309, -2309,  1844, -2309, -2309,  1251, -2309,
   -2309,  2232,  2046,  7660,  1483, -2309, -2309,   289, -2309,  1500,
    7660,  7660,  6293, -2309, -2309,  1360, -2309,  1441,  1444,  7660,
    7660,  7660,  7950,  1446,  7950, -2309, -2309, -2309,  6064,  1761,
   -2309,  1222,  7660, -2309,  7950,  7660, -2309,  1360, -2309, -2309,
   -2309,  1052, -2309,  1739,  7660,  7660,  7660,  7660,  7660, -2309,
    1584, -2309,  1625,  1723, -2309, -2309, -2309,  1353, -2309,  1102,
   -2309, -2309, -2309,   -25,   572,  1251, -2309, -2309, -2309, -2309,
   -2309,  7660,  1698, -2309,  1483, -2309,  1239, -2309, -2309, -2309,
   -2309,   670, -2309, -2309, -2309, -2309, -2309,  1679,  1814, -2309,
   -2309,  4609,   348,   677,   677,   677,   677, -2309, -2309,  5891,
    6064, -2309, -2309, -2309, -2309,   459,   157, -2309,  1471, -2309,
    1472, -2309, -2309, -2309, -2309,  1318, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309,  3982, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,   -48, -2309,
    1855,  1075,  1819, -2309,  1621,    91, -2309, -2309,  1627, -2309,
   -2309,   207,  7660, -2309,  1540,   972, -2309, -2309,  6064,  1462,
    1484,  1239, -2309, -2309, -2309, -2309, -2309,  1833,  1251,  -108,
   -2309,  1066, -2309, -2309, -2309, -2309,  1492,  1895, -2309, -2309,
   -2309,  1774, -2309, -2309,   478,  1876, -2309, -2309,  1251,  1876,
    1549, -2309,  1360,  1551, -2309, -2309,   561,  1321, -2309, -2309,
    4753, -2309,  1962,   156,    58, -2309, -2309, -2309,  1466, -2309,
     578,  5891, -2309, -2309,    25, -2309, -2309,  1251, -2309,  1968,
   -2309,  1824, -2309, -2309,  6064, -2309,  1676, -2309, -2309,  1621,
   -2309, -2309, -2309, -2309, -2309,  1968,  1786, -2309, -2309,  1066,
   -2309,  1564,  1628,  1657, -2309, -2309, -2309,  1662,  1569, -2309,
    1571, -2309, -2309,  1950, -2309,  1525, -2309, -2309,  1572, -2309,
   -2309, -2309,  2015,  1576, -2309, -2309,  1676, -2309, -2309, -2309,
     939, -2309, -2309, -2309,  1768,  1270, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309,  1223, -2309,  1587, -2309,   314, -2309,  1634,
   -2309, -2309, -2309, -2309,  1790,   -60, -2309,  1810,    80,    80,
   -2309,  1321,  1849, -2309,  -149, -2309, -2309, -2309,  1706, -2309,
    1983,   127,  1466, -2309,  1538,  1597, -2309, -2309,   488, -2309,
    1466,  1091,  2232, -2309, -2309, -2309,   742,  7158, -2309,  1091,
   -2309, -2309, -2309,  1539,  1541, -2309,  1621,  1091,  1821,  1631,
    1762, -2309, -2309,  1789, -2309, -2309, -2309, -2309,    34,  1085,
    7660, -2309, -2309, -2309,   461, -2309,  1251,   149,  1098,  1605,
     196,  1611, -2309,   198, -2309, -2309,   364,  1612,  1615,  1616,
     233, -2309,  1360, -2309,  1617, -2309,   255,  1618,  1488,    89,
   -2309,   206,   -59,   972, -2309,  1088,  1619,   279, -2309,  1622,
    1584,   810,   810, -2309, -2309, -2309,   972, -2309,  1623,  -108,
   -2309,   483, -2309, -2309,  1695, -2309,  1717, -2309,   824,  1466,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309,  1784,  1852, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309,    27, -2309, -2309,  3268,
   -2309, -2309,  2196, -2309, -2309, -2309, -2309,  1889,    89,  1890,
      41, -2309, -2309, -2309, -2309,  2072, -2309,  1642,   125, -2309,
   -2309,   157, -2309, -2309, -2309, -2309,  1783, -2309, -2309, -2309,
    1970,  1960,  1318, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
    1732,  1318, -2309,  1643, -2309,  2055, -2309, -2309, -2309,  1165,
   -2309,  1621,  1349, -2309, -2309, -2309,  1988,    40,   984,   543,
     972,   972,    89,  1909,  1239,    97,   648, -2309,  1974, -2309,
   -2309, -2309,  2110, -2309,  1920, -2309, -2309, -2309, -2309,  1774,
   -2309, -2309, -2309, -2309,  1251,   793,   670,   868, -2309,  1604,
   -2309,  1606,  1621,  1812,   803, -2309,   461, -2309, -2309, -2309,
    5891,  1321,  1321,  1321,  1321,  1321,  1321,  1321,  1321,   156,
   -2309,   517,   670,   -83, -2309,  1693,  1693,  -165,  5789,  1251,
      89,  1915,  1667, -2309,  1674,  2127,  1251,   592,   478,  2131,
     -37, -2309,  1677,  1744,  1750,  1630,   969,  1251, -2309, -2309,
   -2309,   969,  2062,  1466,  1285,  1285,  1466,    -1,  1877,  1466,
    2132, -2309,  1856, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309,    80,    78, -2309, -2309,  1724, -2309,  1972,
   -2309,     3, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
     886, -2309,    81, -2309,  1223, -2309,  1835, -2309, -2309,  1790,
   -2309,    80, -2309, -2309, -2309, -2309, -2309,    56, -2309,   122,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,   754, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309,  2124, -2309, -2309, -2309,
   -2309, -2309,  1365, -2309,  1382, -2309, -2309, -2309, -2309,  1867,
    1867, -2309, -2309,  1867, -2309,  1466, -2309, -2309, -2309, -2309,
    1466, -2309, -2309, -2309, -2309, -2309,   -10, -2309, -2309,  2116,
    1754, -2309, -2309,   -22, -2309,  1466, -2309,  2169, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309,  1091, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309,  7660,  7153,  1085, -2309, -2309,
   -2309,  1455,  7236,  1348,  7378,  1348, -2309,  1251,  1348,  1348,
    1348,  7950, -2309,   -97,  1348,   289, -2309, -2309, -2309,  1875,
    1770,   433,  1973,    89,  7519,  1348,  1348,  1089, -2309, -2309,
   -2309, -2309, -2309,   480,    65, -2309, -2309, -2309,   863, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309,  1466, -2309,   -81, -2309, -2309,   101,  1466,
   -2309, -2309, -2309, -2309, -2309,    45,  1466, -2309, -2309,   972,
   -2309,   972,  1620, -2309,   804,    15,   157, -2309, -2309, -2309,
    2072,  1251, -2309, -2309, -2309, -2309,  1671,  1145,   308,  1675,
    1089,  1621, -2309, -2309,  2139, -2309,  1252, -2309, -2309,  1349,
   -2309,   176, -2309,  1779, -2309, -2309,  1466, -2309, -2309,  1952,
    1871, -2309, -2309,   972, -2309,   972,   648,  1872,  1872,  1879,
   -2309, -2309, -2309, -2309,  1137, -2309, -2309,  1251,  5891,   521,
   -2309, -2309, -2309, -2309,  1900,  2066, -2309, -2309,  1934, -2309,
   -2309, -2309, -2309,  1606, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309,    28, -2309,  1251,
   -2309, -2309, -2309,  1205, -2309, -2309, -2309,  7660, -2309,  5891,
    5891,  -122,  1866, -2309, -2309, -2309,  1455, -2309,   972, -2309,
    1089, -2309,  1886, -2309,  1621, -2309,  2092,  1758, -2309,  1153,
   -2309,   726, -2309,   -37, -2309,  1747,  1805, -2309,   146, -2309,
    1630, -2309,  2007,  1763,  6883,   159,  2008, -2309,  1676,  1700,
    1466,  2132,  1702,   527,   468,  1676,  1703, -2309,  1466, -2309,
   -2309, -2309,    39,  1479, -2309, -2309, -2309,  1802, -2309,  2062,
    1239, -2309, -2309, -2309, -2309, -2309,   886, -2309,  1963, -2309,
   -2309,  1989, -2309,  2198,  1201,  1771, -2309, -2309, -2309, -2309,
   -2309,   199, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
     488,   488,   488,   488,   488, -2309,  1466,  1466,   519,   519,
     488, -2309,   524, -2309,  1098, -2309,  1056,  -112, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
    2020, -2309, -2309, -2309, -2309, -2309, -2309,  2021, -2309, -2309,
    1058, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
    1928,   -26,  1488, -2309, -2309, -2309, -2309, -2309,  1251, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,  2664,   488,
   -2309, -2309,  1488, -2309, -2309, -2309, -2309,   -73,   488,   519,
     519,   488,    89,  1860,    89,  1863, -2309, -2309,  5891, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,  1145, -2309,
    2134, -2309,  1318, -2309,  1252,  1252,  1089,  1777,  1777, -2309,
    2230,  2202, -2309, -2309, -2309, -2309,   -86,  1251, -2309, -2309,
   -2309,    89, -2309, -2309, -2309, -2309, -2309, -2309,  1859, -2309,
    2191,  1977,  2011,   636, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,  1098,
   -2309, -2309, -2309, -2309, -2309, -2309,  1946,  1775,  1466,  -112,
      89,  1749, -2309,  2127, -2309,  2031,  2160,  2031,  -122, -2309,
   -2309, -2309, -2309,  1961,  2098, -2309, -2309, -2309,  1425, -2309,
     -37, -2309,  1795,   844, -2309, -2309,  1251, -2309,   -15, -2309,
   -2309,  -208,   586,   605,   652,   703,  1745, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309,  1868, -2309,    55, -2309, -2309, -2309,
   -2309,  1251,  2027, -2309, -2309, -2309,   680, -2309, -2309, -2309,
    1466, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,   940,   -85,
   -2309,  1746, -2309,  1114, -2309,  1809, -2309,  2079, -2309, -2309,
   -2309,  1702, -2309, -2309, -2309, -2309, -2309, -2309,  2014,    26,
    2031,   955,  1466, -2309, -2309,  1466, -2309,  1877,  1492,   653,
   -2309,  1864,  1466,  2217,    96,   -99,   -13,  1484, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309,  1843, -2309,  2013,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,  2242,  1466,
    1239,  1239,   886, -2309, -2309, -2309,  2023, -2309, -2309, -2309,
   -2309,   263, -2309, -2309, -2309, -2309, -2309,   371,   488, -2309,
    1436, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,  1251,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
     972, -2309,   972, -2309, -2309, -2309,  2235,  2174, -2309, -2309,
    1252, -2309,  5891,  5891, -2309, -2309,  1942,  1239,    12, -2309,
    1251, -2309, -2309,  5891, -2309,  1466,   942,  2024,  2025, -2309,
    2028, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
    1251, -2309, -2309, -2309, -2309,  1831, -2309, -2309,  1251,  2031,
   -2309,  1251, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309,   844, -2309,  1841, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309,  1773, -2309, -2309,  2247,  1842, -2309, -2309,
   -2309, -2309, -2309,  2908,  2277,  1896,  1896, -2309,  1488,  1556,
    1556, -2309, -2309,  1676,   173,  1251, -2309, -2309, -2309, -2309,
    1676, -2309,  1885, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309,   542,   542,  1466,  1952, -2309, -2309,   113, -2309,   961,
    1466,  1466,  1466,  1466, -2309,  2015, -2309,    97,  1466,  1877,
   -2309,  1897,  1700,  1239, -2309,  1975,  2290, -2309, -2309,  2199,
   -2309, -2309, -2309, -2309, -2309, -2309,  -112,  -112,  5891, -2309,
   -2309, -2309, -2309,  1466,  1239,  1239,  1965, -2309, -2309,  1816,
    1251, -2309, -2309,  1900,  2066, -2309, -2309, -2309, -2309, -2309,
     783, -2309, -2309,  1251, -2309,  1957,   446,  -220, -2309,   844,
   -2309,  2031,  2117,  1676,  1857, -2309,  2059, -2309,  2217, -2309,
   -2309,  1556,  1861, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
    1251, -2309,    37,  1678, -2309,   953, -2309, -2309, -2309, -2309,
      19,  1466, -2309, -2309,   802, -2309, -2309,   468,  1898,  1251,
    1251, -2309, -2309,  1251,  1466, -2309, -2309, -2309,  1676, -2309,
     886,  1865, -2309, -2309, -2309,  -108,  1239,  1466, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,  1467,
   -2309, -2309, -2309, -2309, -2309,  1982,  2212, -2309,  1254, -2309,
    6402, -2309, -2309,   446,  1869,  1919, -2309,  1870, -2309,  1813,
    1676,  1842, -2309, -2309,  2222, -2309, -2309, -2309, -2309, -2309,
     468,   468, -2309, -2309, -2309, -2309,  2147, -2309, -2309,  1809,
    1676, -2309, -2309, -2309, -2309,  1251, -2309, -2309,   546,   546,
    2332, -2309, -2309, -2309, -2309, -2309,   546,   546,   559, -2309,
   -2309, -2309,   822, -2309, -2309,   106, -2309, -2309, -2309, -2309,
    -108, -2309,  1964,  1916,    -9,  1783, -2309,  1882, -2309,  1884,
   -2309,  1888,  1466, -2309, -2309,  2122,  1783, -2309, -2309, -2309,
    2321,  1678, -2309,   -28, -2309, -2309, -2309, -2309,  1572, -2309,
   -2309, -2309, -2309, -2309,  1466,  1251,  1836, -2309,  1836, -2309,
   -2309,  1251, -2309,   752, -2309, -2309, -2309,   102,   203, -2309,
   -2309, -2309, -2309,   844, -2309, -2309,  1251,  2129,   984,   468,
    2240,  1913, -2309, -2309,  1251,  1251,   539, -2309, -2309, -2309,
   -2309, -2309,  2016,  1172,   102, -2309, -2309,  1899,   790,  7056,
   -2309,  2129, -2309,  1968, -2309,  1952, -2309,  1783, -2309,  1846,
   -2309,  1251,  2044, -2309, -2309,  1783, -2309, -2309,  2053,  1251,
   -2309, -2309,  1466,  1466,  2132,  1314, -2309, -2309, -2309, -2309,
    2159,  2188, -2309,  1466, -2309,   436, -2309,   101,  1466,  1895,
   -2309, -2309, -2309, -2309,  1867, -2309,  1676, -2309,  2312, -2309,
   -2309, -2309,  1251, -2309, -2309,  1251, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309,  2164,  1867, -2309,  1853,  1466,
    1251,    87,   778,   126, -2309, -2309,   371, -2309, -2309,  1466,
    2132,  2114,  1862, -2309, -2309, -2309,  1251,   488, -2309, -2309,
   -2309, -2309,   488, -2309,  1466,  1857,  1466, -2309, -2309, -2309,
    1466, -2309,  1853, -2309,  1251, -2309,  1222, -2309, -2309, -2309,
    1361, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,  1239,
   -2309, -2309, -2309, -2309,  1468,   -58, -2309,  1251, -2309, -2309,
   -2309,   659, -2309,   371,   659, -2309,  1251, -2309, -2309,  1218,
   -2309, -2309,  2114, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309,   488, -2309, -2309, -2309,   488,   975,  1466,  1466,
    1217, -2309, -2309, -2309, -2309, -2309, -2309,  1659, -2309, -2309,
   -2309, -2309, -2309,  1466,  2114,  2114, -2309,  2161,  1466,  1466,
   -2309,  2415,  2114, -2309, -2309, -2309,  2114,  2114,  2151,  1383,
    2132,  2166,  1676,  1874,  1466,  1488, -2309,  1466,  1466,  1251,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309,   974, -2309,   -36, -2309, -2309, -2309,  1383,
    2132, -2309, -2309, -2309, -2309, -2309, -2309, -2309,   146, -2309,
    1466,  1842, -2309,  7893,  7893,  1854,  2260,  2183, -2309,  1676,
     974, -2309, -2309,  1676,   -36, -2309, -2309,   146, -2309, -2309,
     974,  1857, -2309,  1455,  7856, -2309, -2309,  1070,  1127, -2309,
   -2309,  1181, -2309, -2309, -2309, -2309,   -49,   -49, -2309, -2309,
   -2309, -2309, -2309,  7893, -2309, -2309, -2309, -2309, -2309, -2309,
    2222, -2309,  1783, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
    2064, -2309,  2064, -2309,  2335,  1949,    -7,  2060, -2309, -2309,
    7893,  1676, -2309, -2309, -2309, -2309, -2309, -2309, -2309
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2309, -2309, -2309, -2309, -2309,  2379, -2309, -2309, -2309, -2309,
   -2309, -2309,  2334, -2309,  1682, -2309, -2309, -2309, -2309, -2309,
   -2309,  2338,  2336,  2313, -2309, -2309, -2309,  1331, -2309, -2309,
   -2309, -2309, -2309,  2344, -2309, -2309, -2309,  2348, -2309, -2309,
    2006,  -271, -2309, -2309, -2309, -2309, -2309,  2201, -2309, -2309,
   -2309, -2309,  1004, -2309, -2309, -2309, -2309, -2309,  2190,   -65,
   -2309, -2309, -2309, -2309,  1346, -2309, -2309, -2309, -2309, -2309,
    1036, -2309, -2309, -1663, -2309, -2309, -2309, -2309, -2309,  1696,
   -2309, -2309, -2309, -2309,  1367, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,  -834,
   -2309, -2309, -2309, -2309, -2309,   179, -2309, -2309, -2309, -2309,
   -2309,   -70, -2309,   193, -2309, -2309, -2309,    -2, -2309, -2309,
   -2309, -2309,   187, -2309, -2309,  1734, -2309, -2309, -2309, -2309,
   -2309,   184, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,     9,
   -2309, -2309, -2309,   208, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -1264, -2309, -2309,  1753, -2309, -2174, -2256,  -661, -2309,
   -2309, -1989, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2079, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,   747,
   -1744,   -95,   244,  -937,  -880, -1686, -2309, -2309, -2309, -2308,
   -2309,  -372, -2309, -2309,   -66, -2309,   -68,   -90, -2309,  -189,
   -1669, -2309, -1652, -2309, -1636, -2309, -2309,   280, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
    -355,  -378, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -1337, -2309,  -328, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309,    60, -2309, -2309, -2309,  -119,  -118,  -213,
    -210, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309,  2214,  1046, -2309,   902, -2309, -2309, -2309, -2309,
   -1102, -2309, -2309, -2309, -2309, -2309, -2309, -2309,    47, -2309,
   -2309,   -27, -2309,  2392, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309,  1376, -2309,  -743, -2309, -2309,  -716, -2309,  1015, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,  1312, -2309,
   -2309, -2309,  1959, -2309, -2309, -2309, -2309, -2309,  1660, -2309,
   -2309,   912, -2309, -2309,  -595, -2309, -2309, -2309,   675, -2309,
     678, -2309, -2309, -2309, -2309, -2309, -2309, -2309,  1663, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309,  1932, -2309, -2309, -2309,  1284,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309,  1629, -2309, -2309,  1632, -2309,
   -2309,  1263,   919, -2309, -2309, -2309, -2309, -2309,  1918, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309,   647,  1585, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309,  1579, -2309, -2309,   910, -2309,  1255,
   -2309, -2309, -1503,   642,   645, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309,  1901,  1586,   913,
   -2309, -2309, -2309, -2309, -2309, -2309, -1538,  1905, -2309, -2309,
   -2309,   904, -2309, -2309, -2309,  1249, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309,  1194, -2309, -2309, -2309, -2309, -2309, -2309,  1570,
     891, -2309, -2309, -2309, -2309, -2309,  -500, -2309, -2309, -2309,
   -2309,  1226, -2309, -2309, -2309,  1891, -2309,  1893, -2309, -2309,
   -2309,  2175, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309,   871, -2309, -2309, -2309, -2309, -2309,  1887, -2309, -2309,
    1212, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309,   627, -2309,  1214, -2309, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309,     8, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309,   632, -2309,  1536,
   -2309, -2309,  -982, -2309,  1112, -2309, -2309,  1117, -2309,   873,
   -2309,  1704, -2309,  1701, -1085, -2309,  1040, -2309,  1044,   633,
   -2309,   649, -2309,   651, -2309, -2309, -2309, -1561,   271, -1232,
   -2309, -2309,   631, -2309,   635, -1234,   881, -2309,  1374, -2309,
    1380,  -331,  -919,  -304,  -811, -2309, -2309,  1668, -1192,   911,
     915,   916,   917,   739,   531,  -245,   934,   815, -2309,  1243,
    -144,  -712,  -258,   957,  1945, -1213,  -190,  -358, -2309,  -601,
   -2309,  -256, -2240,  1772, -1377,  -380,  1531, -2309,   565,  -951,
    -188,  1845,  -300,  -282, -2309,   369,   -98, -2309,  -725, -1093,
   -2309,  1286,  -483, -1438,  -313,  2056, -1278, -2309, -2309,     2,
    -312, -2309,   -82,  -293,  -450, -2309, -2309,   857,  -471,  -454,
    -396,  1178, -1712,  1189,  -337,  -201,  -437,   -62, -2309, -2309,
   -2309,   277,  2101, -2309, -2309,   981, -2309, -2309, -2309, -2309,
   -2309, -2309, -2309, -2309, -2309, -2309, -2309, -1447, -2309, -2309,
     380, -2309, -2309,   201, -1665,   342, -2309, -2136, -2309,  -963,
   -1633, -1927, -1210, -2309, -2309,   100, -2309, -1323, -2309, -1261,
   -2309, -2309,   731, -2309,  -211, -1661, -1948, -2309, -2309, -2309,
   -2309, -1341, -1412,  -168,  -516, -1158,  1529,   989, -2309, -2309,
    -522, -2309, -2309, -2309,  -221, -2309, -2309, -2309,  1282, -2309,
    1021, -1850,  -836, -2309, -2309, -2309,    59,   883, -1642, -1166,
   -2309, -2309,   714, -2309, -2309,   -47, -2309,  1256, -2309, -2309,
   -2309,   119, -2309, -1836,  -171, -2309, -2309, -2309, -2309, -2309,
   -2309
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1944
static const yytype_int16 yytable[] =
{
     409,   410,   580,   764,   413,   815,   654,   758,  1261,   376,
     831,   541,  1005,  1006,  1007,    64,  1308,  1923,  1741,   403,
     732,  1742,   440,   552,   500,   411,  1999,   518,   713,  1213,
     716,   542,  1315,   719,  1757,   958,  1710,   573,   786,   639,
    2078,  1596,  1616,  1615,  1924,  1207,   579,   563,  1986,  1136,
     971,   638,   606,  2053,  1878,   563,  1672,   824,  1561,  1146,
    1051,  1711,   506,    87,   524,  1721,  1139,  1216,  1644,   563,
     400,  1792,   493,   663,   825,   667,  2232,  2233,  1854,   855,
     374,   400,  2211,  1517,   414,  2410,  1687,  1023, -1645, -1646,
     427,   619,  -367,  2465,   941,   521,  2636,  1244,  1715,  1187,
    1234,  1439,  1748,  1829,  1583,  1472,  1597,  1463, -1943,  1642,
    -696,  2523,  2390,  1550,   913,  1467,   501,   427,   701,   427,
    1011,   529,  2494,  1725,  1526,  1527,  1188,  1695,   529, -1838,
    2820,   520,  1844,   532,  2458, -1909,   529, -1874,  1198,  2486,
     950,  1786,  1858,  2116,  2385,  2421,  1202, -1672,  1767,  1235,
     529,  1106,   503,   759,   923,   421,   611,   407,   616,  1405,
    2195,   510,   433,   644,   625,  1645,  1060,  1594,  1051,  1819,
     964, -1943,  2833,   498,   699,  1810,  1056,   665,  1202,   194,
    1893,  2186,   689,  2093,  1847,  1990,   706,   825,  1305,   865,
      49,  1496,   710,   711,  1291,   712,   790,   790,   790,  -694,
     717,   718,  1292,   808,  2527,   733,  1252,  2391,  2171,  1899,
    2231,  2325,   503,  1848,  1066,   738,  2012,   903,  2265,  2390,
    1472,   606,  1902,   518,  2075,  1657,    78,   544, -1943,   530,
    1055,  2327,  1812,  2169, -1896,   407,   569,  1555,  1406,  2342,
     686,  1163,   740,   588,   590,   791, -1941,   725,   506,   927,
    -696,  1705,   765,   793,  -696,   502,  2013,  2526,   584,  1813,
    1722,  1814,   649,    14,   687,  -539,  1164,  1472,   928,  1472,
     584,  1236,  1310,  1064,  1052,  2487,  2341,   581,  2234,    17,
     897,   375,  2172,   608,  2526,  1706,  2343,   787,   501,   501,
     501,   897,  2170,  -539,  -539,   985,  2395,  1793,  2644,  2773,
    1111,   690,   625,  1028,  1472,   452,    50,  1115,   606,  1731,
    1497,   741,  2407,  -696,  2391,   725,    79,  1811,  1306,   511,
    1067,   512,   529, -1896,  1397,  2094,  1472,  -696,  -696,   809,
     951,  1046,  1244,   956,  2509,  2266,  1237,  1858,  1646,  -694,
     827,  2108,  2109,  -694,  1144,   498,   498,   498,   957,   456,
    1472,   563,  1894,   599,   421,  2645,   897,   981,  1991,   461,
    1794,   529,   503,  2646,   689,  1167,   427,   434,  1853,  1528,
    1171,  1293,   529,  1065,  1057,  2422,  -367,  2488,  1078,  1795,
     780,  1830,  1052,  -367,  1768,   -35,  1566,   725,  1598,  2247,
    2230,   766,  1496,  1918,  2249,  1569,  2196,  1207,   904,  2673,
    1207,   781,  -694,  1294,   673,   195,  2417, -1838,  2110,  1919,
    -539,   437, -1651, -1834,  1269, -1834,  -694,  -694,  1778, -1930,
   -1874,  1233,   952,  2495,  2117,  1295,   788,   502,   502,   502,
    2423,  1503,   529,   701, -1838,  1472, -1838,   529,  2655,  -539,
     673,  1473,   780,  1112,   465,  1883,  1187,  1559,  1788,  2647,
    1584,   521,   608,  2781,  -701,  1599,   894,  1285,   708,  -696,
     790,  1004,  2062,  2063,  2064,  2065,  2066,   790,   790,   790,
     437,   437,  2074,  1188,  1749,   924,   790,   790,   790,  1131,
    1296,  1131,  -367,   690,  1753,  2210,  1026,  1459,   914,   790,
    1246,  1131,   790,   880,  1030,  1474,   521,  2051,  1035,  2050,
    1017,   790,   790,   790,   790,   790,  1314, -1909,  1109,   521,
    1171,  1497,   437, -1869,  2637,  2411,   467,    88,   599,   703,
     524,  1059,  1245,  1712,  1126,  1126,  1126,  1831,   790,  1071,
    -539,  2091,   753,  1110,  -701,  2328,  1716,  1145,  1796,   608,
    2095,  1820,  1297,  2098,  2510,  1061,  1529,   973,  -694,   649,
    1024,   552,   501, -1838,   780,   599,  1473,   720,  2014,   501,
     501,   501,   470,  1066,   521,  2273,  1514,   521,   501,   501,
     501,  1132,  1238,  1132,   655,  1723,  1168,  1142,   856,   813,
   -1838,   501, -1838,  1132,   501,  1531,  1726,  2599,   401,  1555,
    1313,  1203,   524,   501,   501,   501,   501,   501,   375,   401,
    1272,   437,  1204,  1473, -1834,  1473,   818,  2260,   437,   498,
   -1717,   951,  2638,  1466,   475,  1251,   498,   498,   498,   790,
     501,   437,  1495,  1203,  1080,   498,   498,   498,  2061,   656,
    1361,   515,   902,   563,  1204,  1264,  1172,  1113,   498, -1649,
    1473,   498,  1218,  1298,  1271,   375,  2151,  1786, -1943,  1142,
     498,   498,   498,   498,   498,  1280,  2162, -1719,   623,  1486,
     524,   452,  1473,   655,  1480,  2406,   794,  -539, -1943,  1067,
    1501,   795,  2080,  1265,   897,  1407,  2223,   498,   865,   905,
    1140,   753,   959, -1838,  1307, -1834,  1473,  1502,   674,   332,
       3,   502,  2618,   540, -1713,   675,   951,  2447,   502,   502,
     502,  -699,  1881,   952,   974,   456,   452,   502,   502,   502,
    1133,   501,  1133,  2372,   529,   461, -1710,  1142,   656,   452,
     502,  1478,  1133,   502,   674,  1246,   524,   655,  2006,   436,
     652,   675,   502,   502,   502,   502,   502,  2099,    21,  2101,
    1506, -1943,  1871,   780, -1943,  1207,   381,   624,   725,  2212,
     456,  1197,  1199,   382,   906,   529,  -691,  1301,  1574,   502,
     461, -1943,   899,   456,  1165,  1590,  1766, -1930,   498, -1943,
     849,  1473,   377,   461,   452,  2662,  2121,   452,   625,   725,
    1787,  -699,   656,  1142,  2075,  2586,  1728, -1943,   952,   894,
    2251,  1628,  1629,  1630,  1631,  1632,  1633,  1634,  1635,  1624,
     465,    -5,  2336,   951,  1354,  2542,  2474,  1427,   437,  1428,
    1087,  1637, -1943,  2373,  2141,  2142,  1638,   790,   456,  2481,
    1253,   456, -1613,  1481,    15, -1715, -1943,  2449,   461, -1838,
   -1721,   461,   599,    82,  2619,   794,  1480,  1822,   743,  1824,
     795,  2003,   381,  2588,   834,   465,  1186,   746,   381,   382,
     502, -1840,  2552,   444,  2708,   382,  2127,    25,   465,   674,
    2589,  1408,  1289,  1591,   -21,  1477,   599,   333,   813,  1416,
    1393,  1394,   467,  1304,  1510,  1273,  2128,  2590,     4,     5,
    2553,  2554,  1181,  1861,    22,   524,  1311,  2596,  2283,  2608,
     437, -1854,  2275,  2591,  2274,   952,  -691,  1799,  2354,  2654,
    -691,  1192,  2129,  1512,  2264,  1173,   841,  1212,  1110,   501,
     819,  2374,  2490,   465, -1943,  2520,   465,   467,   470,  2521,
    2426,  2427,  2428,    83,  1611,   547,  2190,  2130, -1943,  2795,
     467,  2810,  2543,  2676,   437, -1613,   548,   747,   529, -1943,
     378,    26,   529, -1854,   934,  2652,  1900,  1220,   951,   951,
    1593,  2375,  2182,   850,  1788,   529,  2004,  2386,  1518,  -691,
    2697,   383,    27,   470,   437, -1721,   498,  2730,   563,   897,
     475,  1174,  1258,  -691,  -691,  1165,   470,   835,   521,  1255,
     437,  1610,   880,    28,   744,   467,   725,   437,   467,   951,
    2376,   799,  2713,  2714,  2677,   935,   599,   529,  1429, -1943,
    2751,   625,  2171,  1277,  2752,  2753,  2107,   437,   599,   437,
     -21,  1587,  1729,  1412,   725,   475,  1656,   960,     4,     5,
    1284,  2171,   437,  1666,  1666,  2731,   407,   555,   475,  1303,
    2399,   470,   986,  2776,   470,  1601, -1943,   384,   437,   599,
     952,   952,  2733,   437,  2429,  1770,    38,  1777,   502,   529,
     529,   529,  2366,  1916,   961,  2759,  2640,   383,  2430,  2734,
     452,   437,  2776,   383,   381,   437,  1603,   591,  2171,  2749,
    1917,   382,  2191,  1611,  1266,  2735,  2174,   437,   437,  1430,
     437,   952,  2701,   475,  1222,  2778,   475,  1223,  1845,  1612,
    1224,  1225,  2702,   987,   385,  2176,   599,  2779,   444,   386,
    1588,    40,  1370,  1267,   456,  -691,  1386,  1762,  2515,   529,
     599,   437,  2225,  2194,   461,  1682,  2808,  2555,  1827,  2171,
    1686,   354,  1689,   444,   592,  1694,  1696,  1496,  1699,  2213,
    2678, -1834,   593,   384,  1617,  2679,  2214,  2541,  2641,   384,
    2642,  1087,  2178,  2431,  2432,  2433,  1371,  1925,  1800,  1801,
    1802,  2131,  2418,   700,   556,   557,  1372,  1223,  2434,  1618,
    1224,  1225,  2624,  2226,  2198,  1704,   599,   375,   767,   768,
    1785,  2362,  2363,   558,  1234,   509, -1869,  1173,   773,   528,
      31,  1904,   790,   790,  2630,  2020,   528,   565,   452,   790,
     385,   790,  1627,  2180,   528,   386,   385,   585,  1131,   465,
    1362,   386,   607,  1720,   614,   407,   614,   622,   641,   585,
    1655,   790,    43, -1856,  1784,  1803,   355,  2021,   594,    39,
    1519,  1520,   803,  1235,  1743,   740,   614, -1613,   559,  1744,
    1754,  1756,   456,  1785,  2075, -1613, -1613,  1754,  1612,  1754,
   -1613,  1374,   461,  1174,  1750,   437,  1497,  2484,  1192,   702,
     944,  1412,  2435,  1833,  2556,  1417,   356,  2666,  1418,  1780,
    1847,  2815,  2322,  2322,  2768,   714,  1562,   714,  1835,  1287,
     714,   467,  2706,   796,   501,   501,  2089,  1784,   951,   383,
    1288,   501,   797,   501,  2715,    45,   951,  2485,   357,  1848,
    1132,  1823,  1995,  1825,   741,   794,  2092,  2497,  1368,  2009,
     795,   999,   529,   501,   703,   452,   618,  2707,  2506,  2769,
     387,   897,  1909,  1375,  1264,  1604,  1880,   470,  2816,  2323,
    2323,   830,  1809,  1785,  2701,  1619,   669,   465,  1818,  2345,
     452,   498,   498,    46,  2702,  1821,  2811,   524,   498,  2659,
     498,  2817,  1804,  1805,  2660,  1236,  1884,  1806,   529,   456,
     529,  2215,  2072,  2072,   790,   384,  1226,  1227,  1575,   461,
     498,   509,  2199,  2200,  2322,    54,  1652,  1784, -1943,   475,
     952,   951,  2818,    55,   456,  1857,  1652,  1277,   952,  2600,
     528, -1123,  1228,  1229,   461,  1363,   358,  2603,  1173,  1419,
    2649,  1420,   529, -1943,   529,  2819,  2439,  1369,  2687,   467,
     524,  1019,  1889,  1867,  2699,  2058,  1603,  1576,  2700,  2688,
    1237,  1378,   385,   502,   502,   867,   868,   386,  2073,   528,
     502,  2323,   502,  2072,  2072, -1123,  1226,  1227,  1868,  1133,
     528, -1651,  2689,  2805,  2059, -1123,  2071,  2071,   452,  1036,
    2077,  2216,   502,  2809,   465,   470,   501,  1364,   753,  2451,
    1910,    56,  1228,  1229,  1174,   869,   870,   529,  1031,  2468,
    2469,   967,  2690,   952,  1020,  1021,  2217,   810,  2218,   465,
    1735,  1029,  1738,  1988,   739,  1751,   622,  2119,   739,  1998,
     400,    60,   456,  1037,  2546,   206,  1370,  2011,  2096,  2097,
     528,   437,   461,  1038,    62,   528,  2224,   475,  1808,  1117,
    1120,  1123,    63,   498,  2452,  2090,    68,  2071,  2071,  1785,
    1870,  2188,    66,  1148,   407,  2016,   467,  2079,  2547,  2081,
   -1123,    69,   968,   794,  1147,   969,  -358,   794,   795,   794,
    1371,  2710,   795,   207,   795,  2067,  2068,    72,   725,  2548,
    1372,   467,  -358,  1771,  1772,  2750,  1417,  1476,    70,  1418,
    1504,  1891,  1891,  1784,  1373,    49,   794,  2302,  2536,   794,
    2187,   795,   470,    73,   795,   452,  2609,  2610,   714,   794,
    2598,   208,  1332,   209,   795,   210,   206,   465,  1039,   990,
      74,   991,  -358,   211,    50,   502,  2167,   470,  1333,   193,
     811,   726, -1123,   727,  1577,  2477,  2303,  2304,  2305,  2306,
    2307,   235,  2479,  2480,   200,  1077,  1834,   201,   437,   456,
    1836,  1153,  1154,  1155,   475, -1629, -1629, -1629, -1629,   461,
     599,   529,   242,   529,   207,  1374,  -903,   205,  1334,  -903,
    2236,   238,  1938,  1939,   726,  1141,   727,   239, -1123,   475,
     212,   843,   844,   845,   846,  1690,  1238,  1691,  1482,   467,
    1040,  1484,  -358,   362,  2826,  1604,  2202,  1487,  1874,  1875,
     529,  1491,   208,  1419,   209,  1420,   210,  1493,  1873,   427,
    2783,  2785,   343,   881,   211,   882, -1628, -1628, -1628, -1628,
     370,  2159,  2301,  2160, -1123,   387,  -358,  2140,  2756,  2757,
   -1123,  2814,  2252,   404,  2253,   470,  1041,  1375,   405,   529,
    1376,  1377,   407,  -903,   465,    36,    37,  1141, -1838,   412,
    2824,  2175,  2177,  2179,  2181,  -358,  1193,  1194,  1195,  1196,
    -903,  2641,  -358,  2642,  2670,  1090,  2671,  1091,  1151,  1152,
    2103,   212,   789,  -358,   792,   213,   414,  2837,  2308,  2309,
    2310,  2311,  2312,  2313,  2314,  1951,  1952,   475,  1042,  2324,
    2324,  1128,  1129,   417,  2250,   509,   422,   424,   375,  2193,
    1759,   407,  1761,   425,   435,  1763,  1764,  1765,  1335,   545,
     437,  1769,   528,   574,   518,  1141,   467,   566,   671,  1336,
     670,   214,  1781,  1782,   683,   697,   509,   685,   696,   698,
     705,   715,   720,   734,   736,  1378,  2255,   749,   752,   753,
     756,  2221,   760,   761,  2222,   762,  2017,  2326,   769,   770,
     771,  2229,   772,   528,  2333,  -903,  -903,  -903,   774,   776,
     781,  2018,   470,   782,  -903,  2331,   213,   784,  2167,   785,
    1578,  2019,   798,  2082,  2083,  2084,  -903,   452,  2242,  -358,
    -358,  1141,  2256,  2782,  2257,   802,   804,  2279,   816,   822,
     828,  2324,   830,   832,  -358,  2282,  -358,   847,  2284,   853,
    2245,  1603,   895,   851,   899,   912,  1583,   915,   437,  -903,
     916,   918,   214,   215,   475,  -903,   920,  -903, -1631,   929,
    -903,   456,  -903,  -903,  -903,  1337,  1338,   930,  -903,   931,
    -903,   461,  2315,   932,   206,  -903,   937,  2402,   939,   529,
    1339,   529,  1340,   942,   444,   946,   948,  2316,  2786,  2706,
     953,   625,   963,   965,  2270,   975,   979,   982,   216,   993,
     989,   995,   997,  1000,  1001,  1002,  1004,  2132,  2133,  -903,
    1014,  1016,  1027,  1009,  -903,   585,   725,  1031,   420,  1033,
    2134,  2135,   207,  -358,  2787,  1034,  1049,  1047,  -903,  1048,
    2409,  1063,  2398,  1072,  1075,  1073,  2153,  2154,  1110,  1116,
    1124,  2701,  2446,  1125,   215,  1135,  1149,  1143,  1156,  2442,
    2443,  2702,  1158,  2444,  1169,  -903,   465,  2369,   445,   835,
     208,   834,   209,   503,   210,  1219, -1838,  1208,  1211,  1341,
    2387,  -358,   211,   217,  2674,   447,   528,  1232,   401,  1250,
     528,   905,   599,  1259,  2464,  -903,  1274,  1278,  1282,   216,
    1283,  1290,  2340,   528,  2261,  2262,   509,   427,  1316,  2347,
    2348,  2349,  2350,  1309,  2472,  2269,  2020,  2353,  1321,   735,
    2456,  1322,  1323,  1328,  1327,  1329,  1331,  1342,  1358,  1356,
    1360,  -903,  1384,  1387,  1367,  2442,  1392,  -903,   467,   212,
    1388,  1397,  2365,  2245,  1402,   528,  1404,  1409,  2021,  -903,
    -903,  1410,  1468,  1464,  1465,  1469,  1483,  1470,  -242,  1471,
    1088,  1089,  1485,  1488,  1603,   437,  1489,  1490,  1492,  1494,
    1505,  1507,  1511,  1515,   217,  1174,  2237,  1173,  1516,  1556,
     448,   449,   450,  -903,   470,  1549,  1551,  1557,  1245,   451,
    1563,  1564,  1570,  -903,  1571,  2331,  1567,   528,   528,   528,
    -903,   452,  1090,  1582,  1091,  1595,  1092,  1605,  1607,  1608,
    1620,  1658,  1621,  2022,  -903,  1625,  2532,  1648,  2023,  -903,
    2425,  1659, -1838,  1660,  2331,  2409,  1661,  -903,  1670,  -903,
     437,  1674,  1678,  2445,   213,  -903,   475,  1675,  1676,  1687,
    1093,  1094,  1095,  1697,  1700,   456,  2450,   457,   458,   459,
    2364,  2409,  2024,   460,  1165,   461,  2530,   528,  1702,  1718,
    2025,  1732,  1739,  1746,  1708,  1747,  1603,  1751,  1496, -1650,
    2625,  2788,  2026,  1837,  1683,  2789,  2790,  1843,  1846,  1855,
     214,  1860,  1497,  1858,  1863,  1866,  1612,  1611,  2519,  2667,
    1879,  1096,  1898,  1097,   463,  1903,  1905,  1907,  1922,  2764,
    1098,  1921,  1584,  1099,  1925,  1994,  2027,  2010,  1926,  1996,
    2635,  2000,  2055,  2054,  2056,  2028, -1606, -1648,  1787,  2791,
    2100,  1533,  1272,  2102,  1534,  2060,  -239,  2105,  1847,  1848,
    2123,  1535,  1536,  2124,  2792,  2793,  2111,  2122,  1893,  1894,
     465,  2503,  2125,  2147,  2331,  2143,  2149,  1909,  1910,  2164,
    2184,  2182,  1078,  2189, -1943,  2197,  2029, -1943,  2203,  2030,
   -1943,  2205,  2208,  2514,   381,  2228,  1271,  2238, -1943,  2239,
     466,  2240,   215,  2248,  2258,  2259,  2409,  2263,  1537,  2627,
    2276,  2277,  2628,  2650,  2278,  2281,  2289, -1834,  2290, -1834,
    2291,  2293,  1100,  2296,  1101,  2298,  2334,  2360,  2355,  2361,
    2367,  2368,  2358,   518,  2388,  2403,  2400,  2560,  2595,  2405,
    2455,   625,   467,  2658, -1943,  2408,  2761,   216,  2440,  2448,
    2454,  2461,  2463,  2460,   468,   469,  2462,  2466,  2470,  2478,
    2491,  2606,  2607, -1943,   714,  2492,  2499,  2502,  2501,  2504,
    2683,  2373,  2617,  2533,  2516,  2537,  2539,  2622,  1538,  2602,
     528,  2544,  2601,  2551,  2675,  2604,  2613,  2614,   470,  2626,
     518,  2629,  2631,  2804,  2075,  2715,  2754,  2806,   471,  2760,
    2802, -1721,  2803,  2827,  2830,  2831,    16,  2836,  2634,  1539,
    2762,  2416,    85,    81,   237,  1401,    86,    77,  2651,   472,
      76,   704,   217,  1727,   473,   399,   528,  1396,   528,   419,
    1383,  1540,   474,  2661,   437,  2663,  1714,  1050,  2518,  2664,
     475,  2356,  2346,  2473,  2352, -1943,  1025,  2357,  2471,  1008,
    2339,  1974,  1079, -1943,  2587,  2838,  2767,  2295,  2825,  2531,
    2535,  2597,  2823,  2665,  2829,  2288,  2807, -1943,  2620,  2621,
     528,  2684,   528,  2459,  2685,   432,  1828,   192,  1426,  1603,
    1936,  1745,  1509,   801,  1826,  1541,  2088,  1161,  2086,   839,
     790,   790,  1162,  1532,  1560,  1832,   896,  2704,  2705, -1943,
    1427,  1090,  1428,  1091,  1201,  2104,  1231,  1243, -1834,  1852,
    1209,   790,  2712,  2115,  1572,  2114,   919,  2716,  2717, -1943,
    1542, -1943,  1102,  2822,  2822,  1254,   922,  1273,  1080,  1862,
     790,  1869,  1669,  2763,  1882,   528,  2765,  2766,  1609,  1281,
    1543,  1892,   954, -1943, -1943,  1636,   955,   642,   585,  1667,
    2146,  1668,  2550,  2835,   978,  1319,  1737,   790,  1183,  1734,
    1776,  2152,  1185,  1774,  2370,  2158,  2139,  2137,  2156,  2780,
    1915,   714,  1524,  1103,  1885,  1215, -1943,  1522,  1886,  1887,
    1888,  1366,   501,   501,   945,  1104,  2207,  1719,  1053, -1834,
     807,  2623,  1626,  1717,   775,  1160,  2300,  2351,  2513,  2113,
    2453,  2777,  1544,   501,  1391, -1943, -1943,  1865,  1650,  1842,
    2049,  1693,  2512,  2668,  2796,     0,  1545,   585,   585,   585,
     585,   585,   501,     0,     0,   585,   585,   585,     0,   585,
       0, -1943,     0,     0,     0,     0,     0,  1546, -1943,   498,
     498,     0,     0,     0,     0,     0,     0,     0,  2718,   501,
       0,     0, -1943,     0,     0,     0, -1943,     0,     0,     0,
     498,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0, -1943,  1954,     0,     0,     0,     0,   498,
       0,     0,     0,     0,     0,    90,   585,    91,     0,    92,
       0,  2719,     0,  2720,    93,   585,   585,   585,   585,   528,
   -1943,   528,    94,  1547,     0,     0,   498,     0,     0, -1943,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   502,   502,     0,  2721,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   714,    95,    96,     0,   528, -1943,
       0,     0,   502,     0,     0,    97,  2722,     0,     0, -1943,
       0,     0,     0,     0,     0, -1943,    98,     0,     0,    99,
       0,   502,     0,     0,     0,     0,     0,     0,  1958,     0,
     599,     0,     0,   100,  2723,     0,     0,   528,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   502,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,     0,
       0,     0,     0,  2168,   102,     0,   103,     0,     0,     0,
       0,     0,     0,     0,  -739,  -739,  -739,  -739,  -739,  -739,
    -739,  -739,  -739,  -739,     0,  -739,  -739,  -739,     0,  -739,
    -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,   104,     0,
       0,     0,     0,  -739,     0,     0,     0,     0,  -739,   105,
    1962,  -739,     0,     0,   106,     0,     0,     0,     0,     0,
    2724,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2725,     0,     0,
       0,     0,   107,     0,     0,     0,     0,     0,     0,   108,
       0,     0,   109,   110,     0,     0,     0,     0,     0,  2726,
       0,     0,     0,   111,     0,     0,     0,     0,     0,     0,
     112,     0,   113,     0,     0,   114,     0,     0,     0,  -739,
    2727,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2728,     0,     0,     0,     0,   585,     0,  1678,     0,  2729,
       0,     0,     0,     0,     0,     0,     0,   115,     0,     0,
       0,   116,     0,   117,     0,     0,     0,  1930,  1931,  1932,
    1933,  1934,  1935,   118,     0,     0,     0,   528,     0,   528,
    -739,  -739,  -739,     0,  -739,  -739,  -739,  -739,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2268,     0,     0,
       0,   119,  1937,     0,  1938,  1939,  1940,  1941,  1942,  1943,
    1944,     0,     0,     0,   120,     0,     0,     0,     0,     0,
       0,    90,     0,    91,     0,    92,     0,     0,     0,     0,
      93,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,     0,   121,   122,     0,     0,     0,     0,  1945,     0,
       0,     0,     0,   123,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   124,   125,     0,     0,
       0,    95,    96,   126,     0,     0,     0,   127,     0,     0,
       0,    97,   714,     0,     0,     0,   128,     0,     0,     0,
       0,   445,    98,     0,     0,    99,   129,     0,  2338,  2338,
       0,     0,     0,     0,     0,     0,  -739,   130,   447,   100,
    1946,  1947,  1948,  1949,  1950,     0,   131,  1951,  1952,     0,
       0,   132,   133,     0,     0,   134,     0,   135,     0,     0,
       0,     0,   101,     0,     0,   136,     0,     0,     0,     0,
     102,     0,   103,     0,     0,     0,     0,     0,  -739,     0,
       0,  1953,     0,     0,     0,     0,     0,     0,  -739,     0,
       0,     0,     0,     0,     0,     0,   138,     0,     0,     0,
       0,     0,     0,   139,   104,     0,     0,     0,   140,     0,
       0,     0,     0,     0,     0,   105,     0,     0,     0,     0,
     106,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -739,     0,     0,   448,   449,   450,   141,   714,     0,  1955,
       0,     0,   451,     0,     0,     0,     0,     0,   107,     0,
       0,     0,     0,     0,   714,   108,   714,   714,   109,   110,
     714,     0,     0,     0,     0,     0,     0,     0,     0,   111,
       0,     0,   509,     0,     0,     0,   112,     0,   113,     0,
       0,   114,     0,  1957,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1959,     0,     0,     0,   806,     0,
     457,   458,   459,     0,     0,     0,   460,     0,     0,  1960,
       0,     0,     0,     0,     0,     0,     0,   714,   714,     0,
       0,     0,     0,   115,     0,     0,     0,   116,     0,   117,
       0,     0,   714,     0,     0,  2476,  2476,     0,     0,   118,
       0,     0,     0,  2476,  2476,  2483,     0,   463,  1078,     0,
       0,     0,     0, -1943,     0,     0, -1943,   509,     0,     0,
       0,     0,     0, -1943, -1943,     0,     0,   119,     0,     0,
       0,     0,     0,     0,     0,  1963,  1964,  1965,     0,     0,
     120,     0,     0, -1834,    90, -1834,    91,     0,    92,     0,
       0,     0,   714,    93,     0,     0,     0,     0,     0,     0,
       0,    94,     0,     0,   509,     0,     0,     0,   121,   122,
   -1943,     0,     0,   714,     0,     0,   714,     0,     0,   123,
       0,   714,   714,   466,     0,     0,     0,     0,     0,     0,
       0,   509,   124,   125,    95,    96,     0,     0,     0,   126,
       0,     0,     0,   127,    97,     0,     0,     0,   714,  1967,
    1968,  1969,   128,     0,     0,    98,  2605,     0,    99,     0,
       0,     0,   129,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,   130,     0,     0,     0,   468,   469,     0,
   -1943,     0,   131,     0,     0,     0,     0,   132,   133,     0,
       0,   134,     0,   135,     0,   101,     0,     0,     0,     0,
       0,   136,     0,   102,     0,   103,     0,   714,     0,     0,
       0, -1943,     0,     0,   137,     0,     0,     0,     0,     0,
       0,   471,     0,     0,   585,     0,     0,     0,     0,   585,
       0,     0,   138, -1943,     0,     0,     0,   104,     0,   139,
       0,   714,   472,     0,   140,     0,     0,   473,   105,     0,
       0,     0,     0,   106,     0,   474,     0,   437,     0,     0,
       0,     0,     0,     0,     0,     0,    90,     0,    91,     0,
      92,     0,   141,   714, -1834,    93,     0,     0,     0,     0,
       0,   107,     0,    94,     0,     0,     0, -1943,   108,   585,
       0,   109,   110,   585,  1080,     0,     0,     0,     0,     0,
       0,     0,   111,     0,     0,     0,     0,     0,     0,   112,
       0,   113,     0,     0,   114,     0,    95,    96,     0,     0,
       0,     0, -1943,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,     0,     0,
      99,     0, -1943,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100, -1834,   115,     0,     0,     0,
     116,     0,   117,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   118,     0,     0,     0,     0,   101,     0,     0,
       0,     0,     0,     0,     0,   102,     0,   103,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,     0,     0,     0, -1943,     0,     0,     0,     0,     0,
       0,     0,     0,   120,     0,     0,     0,     0, -1943,   104,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     105,     0,     0,     0,     0,   106,     0,     0,     0, -1943,
       0,   121,   122,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   123,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   107,     0,   124,   125,     0,     0,     0,
     108,     0,   126,   109,   110,     0,   127,     0,     0,     0,
       0,     0,     0,     0,   111,   128,     0,     0,     0,     0,
       0,   112,     0,   113,     0,   129,   114,     0,     0,     0,
       0,     0,     0,     0,     0, -1943,   130,     0,     0,     0,
       0,     0,     0,     0,     0,   131,  1186,     0,     0,     0,
     132,   133,     0,     0,   134,     0,   135,     0,     0,     0,
       0,     0,     0,     0,   136,     0,   599,     0,   115,     0,
       0,     0,   116,     0,   117,     0,     0,   988,     0,     0,
       0,     0,     0,     0,   118,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   138,     0,     0,     0,     0,
       0,     0,   139,     0,     0,     0,     0,   140,     0,     0,
       0,     0,   119,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   120,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   141,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   121,   122,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   123,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   124,   125,     0,
       0,     0,     0,     0,   126,     0,     0,     0,   127,     0,
       0,     0,     0,   244,     0,   245,     0,   128,     0,     0,
     246,     0,     0,     0,     0,     0,     0,   129,   247,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   130,     0,
       0,     0,     0,     0,     0,     0,     0,   131,     0,     0,
       0,     0,   132,   133,     0,     0,   134,     0,   135,     0,
       0,   248,   249,     0,     0,     0,   136,     0,     0,     0,
       0,   250,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   251,     0,     0,   252,     0,     0,   443,     0,
       0,   444,     0,     0,   861,   862,   863,   138,     0,   253,
       0,     0,   864,     0,   139,     0,     0,     0,     0,   140,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   254,     0,     0,     0,     0,     0,     0,     0,
     255,     0,   256,     0,     0,     0,     0,   141,     0,     0,
     257,     0,   258,   259,   260,   261,   262,   263,   264,   265,
       0,   266,   267,   268,     0,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   445,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   279,     0,     0,     0,     0,
     280,     0,   447,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   281,     0,
       0,     0,     0,     0,     0,   282,     0,     0,   283,   284,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   285,
       0,     0,     0,     0,     0,     0,   286,     0,   287,     0,
       0,   288,     0,   865,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   866,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   448,   449,   450,
       0,     0,     0,   289,     0,     0,   451,   290,     0,   291,
       0,     0,   867,   868,     0,     0,     0,     0,   452,   292,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1214,     0,
       0,     0,     0,     0,     0,     0,     0,   293,     0,     0,
       0,   453,   869,   870,     0,     0,     0,   454,     0,   455,
     294,     0,   456,     0,   457,   458,   459,     0,     0,     0,
     460,     0,   461,     0,     0,     0,     0,   462,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   295,     0,
     871,     0,     0,     0,     0,     0,   872,     0,     0,   296,
       0,   873,     0,     0,     0,     0,     0,     0,     0,   874,
       0,   463,     0,   297,     0,     0,   875,     0,     0,   298,
       0,   876,     0,   299,     0,     0,     0,     0,     0,     0,
     464,     0,   300,     0,     0,     0,     0,     0,     0,     0,
     877,     0,   301,     0,   443,     0,     0,   444,     0,     0,
     861,   862,   863,   302,     0,     0,     0,   465,   864,     0,
       0,     0,   303,     0,     0,     0,     0,   304,   305,     0,
       0,   306,     0,   307,     0,     0,     0,     0,     0,     0,
       0,   308,     0,     0,     0,     0,     0,   466,     0,     0,
       0,     0,     0,     0,   309,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   310,     0,     0,     0,     0,     0,     0,   311,
       0,   445,     0,     0,   312,     0,     0,     0,     0,   467,
       0,     0,     0,     0,     0,     0,     0,     0,   447,     0,
       0,   468,   469,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   313,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   878,     0,   879,     0,   880,     0,     0,
     881,     0,   882,   883,   884,   470,     0,   885,   886,     0,
       0,     0,     0,     0,     0,   471,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   443,     0,   865,
     444,     0,     0,     0,     0,     0,   472,     0,     0,   866,
       0,   473,     0,     0,     0,     0,     0,     0,     0,   474,
       0,   437,     0,     0,     0,     0,     0,   475,     0,     0,
       0,     0,     0,   448,   449,   450,     0,     0,     0,     0,
       0,     0,   451,     0,     0,     0,     0,     0,   867,   868,
       0,     0,     0,     0,   452,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   445,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   453,   869,   870,
       0,   447,     0,   454,     0,   455,     0,     0,   456,     0,
     457,   458,   459,     0,     0,     0,   460,     0,   461,     0,
       0,     0,     0,   462,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   871,     0,     0,     0,
       0,     0,   872,     0,     0,   443,     0,   873,   444,     0,
       0,     0,     0,     0,     0,   874,     0,   463,     0,     0,
       0,     0,   875,     0, -1943,     0,     0,   876,     0,  -969,
       0,     0,     0,     0,  -969,     0,   464,  -969,     0,     0,
       0,     0,     0,     0,  -969,  -969,   877,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   448,   449,   450,     0,
       0,     0,     0,   465,  -969,   451,  -969,   332,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   452,     0,     0,
       0,     0,   445,     0,     0,     0,     0,     0,     0,     0,
       0,  -969,     0,   466,     0,     0,     0,     0,     0,   447,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     453,     0,     0,     0,     0,     0,   454,     0,   455,     0,
       0,   456,     0,   457,   458,   459,     0,     0,     0,   460,
       0,   461,     0,     0,     0,   467,   462,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   468,   469,   443,
       0,     0,   444,     0, -1943,     0,     0,     0,     0,     0,
       0,  -969,     0,     0,     0,     0,     0,     0,     0,   878,
     463,   879,     0,   880,     0,     0,   881,     0,   882,   883,
     884,   470,     0,   885,   886,     0,     0,     0,     0,   464,
       0,   471,  -969,     0,   448,   449,   450,     0,     0,     0,
       0,     0,     0,   451,     0,     0,     0,     0,     0,     0,
       0,     0,   472,     0,  -969,   452,   465,   473,     0,     0,
       0,     0,     0,     0,     0,   474,   445,   437,     0,     0,
       0,     0,     0,   475,     0,     0,     0,     0,   443,     0,
       0,   444,     0,   447,     0,   333,   466,     0,   453,     0,
       0,     0,     0,     0,   454,  -969,   455,     0,     0,   456,
       0,   457,   458,   459,     0,     0,     0,   460,  -969,   461,
       0,     0,     0,     0,   462,  -969,     0,     0,   443,     0,
       0,   444,     0,     0,     0,     0,     0,     0,   467,     0,
       0,     0,     0,     0,     0,     0,     0,  1286,     0,     0,
     468,   469,     0,  -969,     0,     0,     0,     0,   463,     0,
       0,     0,     0,     0,     0,   445,     0,     0,     0,     0,
       0,     0,     0,  -969,     0,     0,     0,   464,     0,     0,
       0,     0,   447,     0,   470,     0,  -969,     0,   448,   449,
     450,     0,     0,     0,   471,     0,     0,   451,     0,     0,
       0,     0,     0,     0,   465,   445,     0,     0,     0,   452,
       0,     0,     0,     0,     0,   472,     0,   446,     0,     0,
     473,     0,   447,     0,     0,     0,     0,     0,   474,   599,
     437,     0,     0,     0,   466,  -969,   475,     0,     0,     0,
       0,     0,   453,     0,     0,     0,     0,     0,   454,  -969,
     455,     0,     0,   456,     0,   457,   458,   459,     0,     0,
       0,   460,     0,   461,     0,     0,     0,     0,   462,     0,
    -969,     0,     0,     0,     0,     0,   467,   448,   449,   450,
       0,     0,     0,     0,     0,     0,   451,     0,   468,   469,
       0,     0,     0,     0,     0,     0,     0,     0,   452,     0,
       0,     0,   463,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   448,   449,   450,
       0,   464,   470,     0,     0,     0,   451,     0,     0,     0,
       0,   453,   471,     0,     0,     0,  -969,   454,   452,   455,
       0,     0,   533,     0,   457,   458,   459,  -969,   465,     0,
     460,     0,   461,   472,     0,     0,     0,   462,   473,     0,
       0,     0,     0,     0,     0,     0,   474,  -969,   437,     0,
       0,   453,     0,     0,   475,     0,     0,   454,   466,   455,
       0,     0,   456,     0,   457,   458,   459,     0,     0,     0,
     460,   463,   461,     0,     0,     0,   534,   462,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     464,     0,     0,     0,     0,     0,     0,     0,     0,   443,
     467,     0,   444,     0,     0,     0,     0,     0,     0,     0,
       0,   463,   468,   469,     0,     0,     0,   465,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     464,     0,     0,     0,   443,     0,     0,   444,     0,  1287,
       0,     0,     0,     0,     0,     0,   470,   466,     0,     0,
    1288,     0,     0,     0,     0,     0,   471,   465,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   445,   472,     0,     0,
       0,     0,   473,     0,     0,     0,     0,   466,   586,   467,
     474,     0,   437,   447,     0,     0,     0,     0,   475,     0,
       0,   468,   469,     0,     0,     0,     0,     0,     0,     0,
       0,   445,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   650,     0,     0,     0,     0,   447,   467,
       0,     0,     0,     0,     0,   470,   443,     0,     0,   444,
       0,   468,   469,     0,     0,   471,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   472,     0,     0,     0,
       0,   473,     0,     0,     0,   470,     0,     0,     0,   474,
       0,   437,     0,     0,     0,   471,     0,   475,   448,   449,
     450,     0,     0,     0,     0,     0,     0,   451,     0,     0,
       0,     0,     0,     0,     0,     0,   472,     0,     0,   452,
       0,   473,     0,   445,     0,     0,     0,     0,     0,   474,
       0,   437,     0,   448,   449,   450,     0,   475,     0,     0,
     447,     0,   451,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   453,     0,   452,     0,     0,     0,   454,     0,
     455,     0,     0,   456,     0,   457,   458,   459,     0,     0,
       0,   460,     0,   461,     0,     0,     0,     0,   462,     0,
       0,     0,     0,     0,     0,     0,     0,   453,     0,     0,
       0,     0,     0,   454,     0,   455,     0,     0,   456,     0,
     457,   458,   459,     0,     0,     0,   460,     0,   461,     0,
       0,     0,   463,   462,     0,     0,     0,     0,     0,   443,
       0,     0,   444,     0,     0,     0,     0,     0,     0,     0,
       0,   464,     0,     0,     0,   448,   449,   450,     0,     0,
       0,     0,     0,     0,   451,     0,     0,   463,     0,     0,
       0,     0,     0,     0,     0,     0,   452,     0,   465,     0,
       0,     0,     0,     0,     0,     0,   464,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   466,   453,
       0,     0,     0,   465,     0,   454,   445,   455,     0,     0,
     456,     0,   457,   458,   459,     0,     0,     0,   460,     0,
     461,     0,     0,   447,     0,   462,     0,     0,     0,     0,
       0,   443,     0,   466,   444,     0,     0,     0,     0,     0,
     467,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   468,   469,     0,     0,     0,     0,     0,   463,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   467,     0,     0,   464,     0,
       0,     0,     0,     0,     0,     0,   470,   468,   469,     0,
       0,     0,     0,     0,     0,     0,   471,     0,     0,     0,
       0,     0,     0,     0,     0,   465,     0,     0,   445,     0,
       0,     0,     0,     0,     0,     0,     0,   472,   448,   449,
     450,   470,   473,     0,     0,   447,     0,   451,     0,     0,
     474,   471,   437,   443,     0,   466,   444,     0,   475,   452,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   472,     0,     0,     0,     0,   473,     0,     0,
       0,     0,     0,     0,     0,   474,     0,   437,     0,     0,
       0,     0,   453,   475,     0,     0,     0,   467,   454,     0,
     455,     0,     0,   456,     0,   457,   458,   459,     0,   468,
     469,   460,     0,   461,     0,     0,     0,     0,   462,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   778,
     445,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     448,   449,   450,   470,     0,     0,     0,   447,     0,   451,
       0,     0,   463,   471,     0,   443,     0,   534,   444,     0,
       0,   452,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   464,     0,     0,   472,     0,     0,   977,     0,   473,
       0,     0,     0,     0,     0,     0,     0,   474,     0,   437,
       0,     0,     0,     0,   453,   475,     0,     0,   465,     0,
     454,     0,   455,     0,     0,   456,     0,   457,   458,   459,
       0,     0,     0,   460,     0,   461,     0,     0,     0,     0,
     462,     0,     0,     0,     0,     0,     0,     0,   466,     0,
       0,     0,   445,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   448,   449,   450,     0,   984,     0,     0,   447,
       0,   451,     0,     0,   463,     0,     0,   443,     0,     0,
     444,     0,     0,   452,     0,     0,     0,     0,     0,     0,
     467,     0,     0,   464,     0,     0,     0,     0,     0,     0,
       0,     0,   468,   469,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   453,     0,     0,     0,
     465,     0,   454,     0,   455,     0,     0,   456,     0,   457,
     458,   459,     0,     0,     0,   460,   470,   461,     0,     0,
       0,     0,   462,     0,     0,     0,   471,     0,     0,     0,
     466,     0,     0,     0,   445,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   448,   449,   450,   472,     0,     0,
       0,   447,   473,   451,     0,     0,   463,     0,     0,     0,
     474,     0,   437,     0,     0,   452,     0,     0,   475,     0,
       0,     0,   467,     0,     0,   464,     0,     0,     0,     0,
       0,     0,     0,     0,   468,   469,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   453,     0,
       0,     0,   465,     0,   454,     0,   455,     0,     0,   456,
       0,   457,   458,   459,     0,     0,     0,   460,   470,   461,
       0,     0,     0,     0,   462,     0,     0,     0,   471,     0,
    1138,     0,   466,   444,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   448,   449,   450,   472,
       0,     0,     0,     0,   473,   451,     0,     0,   463,     0,
       0,     0,   474,     0,   437,     0,     0,   452,     0,     0,
     475,     0,     0,     0,   467,     0,     0,   464,     0,     0,
       0,     0,     0,     0,     0,     0,   468,   469,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     453,     0,     0,     0,   465,     0,   454,   445,   455,     0,
       0,   456,     0,   457,   458,   459,     0,     0,     0,   460,
     470,   461,     0,     0,   447,     0,   462,     0,     0,     0,
     471,     0,     0,     0,   466,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   472,     0,     0,     0,     0,   473,     0,     0,     0,
     463,     0,     0,     0,   474,     0,   437,     0,     0,     0,
    1653,     0,   475,     0,     0,     0,   467,     0,     0,   464,
       0,     0,     0,     0,     0,     0,     0,     0,   468,   469,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   465,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   448,
     449,   450,   470,     0,     0,     0,     0,     0,   451,     0,
       0,     0,   471,     0,     0,     0,   466,     0,     0,     0,
     452,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   472,     0,     0,     0,     0,   473,     0,
       0,     0,     0,     0,     0,     0,   474,     0,   437,     0,
       0,     0,     0,   453,   475,     0,     0,     0,   467,   454,
       0,   455,     0,     0,   456,     0,   457,   458,   459,     0,
     468,   469,   460,     0,   461,     0,     0,     0,     0,   462,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   470,     0,     0,     0,     0,     0,
       0,     0,     0,   463,   471,     0,   445,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   464,   447,     0,   472,     0,     0,     0,     0,
     473,     0,     0,  2457,     0,     0,     0,     0,   474,     0,
     437,     0,     0,     0,     0,     0,   475,     0,     0,   465,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -378,     0,     0,  -378,     0,     0,
    -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,   466,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -378,     0,  -378,
       0,     0,     0,     0,     0,     0,  -378,     0,  -378,  -378,
    -378,  -378,  -378,  -378,  -378,     0,     0,     0,   448,   449,
     450,   467,     0,     0,     0,     0,     0,   451,     0,     0,
       0,     0,     0,   468,   469,     0,     0,     0,     0,   452,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -378,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   470,     0,     0,
       0,     0,   488,     0,     0,     0,     0,   471,   454,     0,
     455,     0,     0,   456,     0,   457,   458,   459,     0,     0,
       0,   460,     0,   461,  -378,     0,     0,     0,   472,     0,
       0,     0,     0,   473,     0,     0,     0,     0,     0,     0,
    1011,   474,     0,   437,  -378,  -378,  -378,  -378,  -378,   475,
       0,  -378,  -378,     0,     0,  -378,     0,     0,     0,     0,
       0,  -378,   463,  -378,     0,     0,     0,     0,     0,  -378,
       0,     0,     0,     0,  -378,     0,     0,  -378,     0,     0,
       0,   464,     0,     0,     0,  -378,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -378,     0,
       0,  -378,     0,     0,     0,     0,     0,  -378,   465,  -378,
       0,     0,     0,     0,     0,     0,     0,     0,  -378,     0,
       0,     0,     0,     0,  1010,     0,     0,     0,     0,     0,
       0,  -378,     0,     0,     0,     0,     0,     0,   466,     0,
       0,     0,     0,  -378,  -378,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -378,
       0,     0,  -378,  -378,  -378,  -378,  -378,  -378,  -378,     0,
       0,     0,     0,  -378,     0,     0,     0,     0,     0,     0,
     467,     0,     0,     0,     0,     0,  -378,  -378,     0,     0,
       0,     0,   468,   469,     0,  -378,     0,  -378,  -378,  -378,
    -378,  -378,  -378,  -378,  -378,  -378,     0,     0,     0,     0,
       0,     0,     0,  -378,  1122,  -378,     0,     0,     0,     0,
       0,     0,     0,     0,   489,     0,   470,     0,   490,   491,
       0,     0,     0,     0,     0,     0,   471,     0,     0,     0,
       0,  -378,     0,  -378,     0,     0,     0,     0,  -378,     0,
       0,     0,     0,     0,     0,     0,     0,   472,     0,     0,
       0,     0,   473,     0,     0,     0,  -378,     0,     0,     0,
     474,     0,   437,     0,     0,     0,     0,  -378,   475,  -378,
    -378,  -378,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -378,     0,     0,     0,
       0,  1011,     0,     0,     0,  -378,  -378,  -378,  -378,  -378,
       0,     0,  -378,  -378,     0,     0,     0,     0,     0,     0,
       0,  -378,     0,     0,     0,     0,  -378,     0,     0,     0,
    -378,  -378,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -378,     0,     0,  -378,     0,     0,  -378,
       0,     0,     0,  -378,  -378,  -378,     0,     0,     0,  -378,
       0,     0,  -378,     0,  1928,     0,     0,  -378,  -378,     0,
       0,     0,  -378,     0,  -378,     0,     0,     0,     0,  1929,
       0,  1004,  1930,  1931,  1932,  1933,  1934,  1935,  1936,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -378,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1937,     0,  1938,
    1939,  1940,  1941,  1942,  1943,  1944,     0,     0,     0,     0,
       0,     0,     0,     0,  -378,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -378,     0,
       0,     0,     0,     0,     0,     0,  -378,     0,     0,  -378,
       0,     0,     0,  1945,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -378,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -378,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1946,  1947,  1948,  1949,  1950,
       0,     0,  1951,  1952,     0,     0,     0,     0,  -378,     0,
    -378,  -378,  -378,     0,     0,     0,     0,     0,  2562,     0,
       0,  2563,     0,     0,  2564,  1930,  1931,  1932,  1933,  1934,
    1935,  2565,  2566,     0,     0,     0,  1953,     0,  -378,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   407,
       0,  1427,  1954,  1428,     0,     0,     0,  -378, -1919,     0,
    1937,     0,  1938,  1939,  1940,  1941,  1942,  1943,  1944,     0,
       0,     0,     0,     0,  -378,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -378,  -378,  -378,     0,     0,     0,
       0,     0,     0,     0,  1955,     0,     0,     0,  -378,     0,
       0,     0,     0,     0,     0,  -378,  1945,     0,     0,     0,
       0,     0,  1004,     0,     0,     0,     0,     0,     0,     0,
    1434,     0,     0,  1435,  1956,     0,  1436,     0,     0,     0,
       0,     0,     0,     0,  1437,     0,     0,     0,  1957,     0,
       0,     0,     0,     0,     0,     0,  1958,     0,  2567,  1959,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1960,     0,   445,     0,  1946,  1947,
    1948,  1949,  1950,     0,     0,  1951,  1952,  1961,     0,  2568,
    1438,     0,     0,   447,     0,  2569,     0,  2570,     0,     0,
       0,     0,     0, -1869,     0,     0,     0,     0,  2571,  1439,
       0,  2572,     0,     0,     0,     0,     0,     0,     0,  1953,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   407,     0,     0,  1954,     0,     0,  1962,     0,
    1963,  1964,  1965,  2573,     0,     0,     0,     0,     0,     0,
       0,     0,  2574,     0,     0,     0,     0,     0,     0,   445,
       0,     0,     0,     0,     0,  2575,     0,     0,  1966,     0,
       0,     0,     0,     0,     0,     0,   447,  1955,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -375,   448,   449,
     450,  1440,     0,     0,     0,     0,     0,   451,     0,  1441,
       0,     0,     0,     0, -1919,     0,     0,  2576,     0,   452,
       0,     0,     0,  1442,  1967,  1968,  1969,     0,     0,     0,
    2577,  1957,     0,     0,     0,     0,     0,     0,  1970,  1958,
       0,     0,  1959,     0,     0,  1678,     0,     0,     0,     0,
       0,     0,   488,     0,     0,  1443,     0,  1960,   454,  2578,
     455,     0,     0,   456,     0,   457,   458,   459,     0,     0,
       0,   460,     0,   461,     0,  1444,     0,  1445,     0,     0,
       0,   448,   449,   450,     0,  2579,     0,     0,     0,     0,
     451,     0,  2580,     0,     0,     0,     0,     0,     0,  1446,
    1447,     0,   452,     0,     0,     0,     0,     0,     0,     0,
    2581,   445,   463,     0,     0,     0,     0,     0,     0,     0,
       0,  1962,     0,  1963,  1964,  1965,     0,     0,   447,     0,
       0,   464,  1448,     0,     0,   488,     0,     0,     0,     0,
       0,   454,     0,   455,     0,     0,   456,     0,   457,   458,
     459,     0,     0,     0,   460,     0,   461,     0,   465,     0,
       0,  1449,  1450,     0,     0,  2582,     0,     0,     0,     0,
    -636,     0,     0,     0,     0,  2583,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1451,   466,     0,
       0,     0,     0,  2584,  1452,   463,     0,  1967,  1968,  1969,
       0,     0,     0,     0,     0,     0,     0,     0,  1453,     0,
       0,  1970,  1454,     0,   464,     0,  2585,     0,  1678,     0,
       0,     0,     0,   448,   449,   450,     0,     0,     0,  1455,
     467,     0,   451,     0,     0,     0,     0,     0,     0,     0,
       0,   465,   468,   469,   452,     0,     0,     0,     0,     0,
       0,     0,   445,     0,     0,     0,  1456,     0,     0,     0,
       0,     0,     0,     0,  1755,  1457,     0,     0,     0,   447,
       0,   466,     0,     0,   489,     0,   470,   488,   490,   491,
       0,     0,     0,   454,     0,   455,   471,     0,   456,     0,
     457,   458,   459,     0,     0,  1458,   460,     0,   461,     0,
       0,     0,     0,     0,     0,  1459,     0,   472,     0,     0,
       0,  1460,   473,   467,     0,     0,     0,     0,     0,     0,
     474,     0,   437,     0,     0,   468,   469,     0,   475,     0,
       0,     0,     0,  1758,     0,     0,     0,   463,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   464,   489,     0,   470,
       0,   490,   491,     0,   448,   449,   450,     0,     0,   471,
       0,     0,     0,   451,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   465,     0,   452,     0,     0,     0,     0,
     472,     0,     0,   445,     0,   473,     0,     0,     0,     0,
       0,     0,     0,   474,     0,   437,     0,     0,     0,     0,
     447,   475,     0,   466,     0,     0,     0,     0,   488,     0,
       0,     0,     0,     0,   454,     0,   455,     0,     0,   456,
       0,   457,   458,   459,     0,     0,     0,   460,     0,   461,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   467,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   468,   469,     0,
       0,     0,     0,     0,     0,  1760,     0,     0,   463,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   464,     0,   489,
     445,   470,     0,   490,   491,   448,   449,   450,     0,     0,
       0,   471,     0,     0,   451,     0,     0,   447,     0,     0,
       0,     0,     0,     0,   465,     0,   452,     0,     0,     0,
       0,     0,   472,     0,     0,     0,     0,   473,     0,     0,
       0,     0,     0,     0,     0,   474,     0,   437,     0,     0,
       0,     0,     0,   475,   466,     0,     0,     0,     0,   488,
       0,     0,     0,     0,     0,   454,     0,   455,     0,     0,
     456,     0,   457,   458,   459,     0,     0,     0,   460,     0,
     461,     0,     0,     0,     0,     0,     0,     0,     0,   445,
       0,     0,     0,     0,     0,     0,   467,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   447,     0,   468,   469,
       0,     0,   448,   449,   450,     0,     0,     0,     0,   463,
       0,   451,     0,     0,     0,     0,   445,     0,     0,     0,
    1779,     0,     0,   452,     0,     0,     0,     0,   464,     0,
     489,     0,   470,   447,   490,   491,     0,     0,     0,     0,
       0,     0,   471,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   465,   488,     0,     0,     0,
       0,     0,   454,   472,   455,     0,     0,   456,   473,   457,
     458,   459,     0,   445,     0,   460,   474,   461,   437,     0,
       0,     0,     0,     0,   475,   466,     0,     0,     0,     0,
     447,   448,   449,   450,     0,     0,     0,     0,     0,     0,
     451,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   452,     0,     0,     0,   463,     0,     0,     0,
       0,     0,     0,     0,   445,     0,     0,   467,   448,   449,
     450,     0,     0,     0,     0,   464,     0,   451,     0,   468,
     469,   447,     0,     0,     0,   488,     0,     0,     0,   452,
       0,   454,     0,   455,     0,     0,   456,     0,   457,   458,
     459,     0,   465,     0,   460,     0,   461,     0,     0,     0,
       0,   489,   445,   470,     0,   490,   491,     0,     0,     0,
       0,     0,   488,   471,     0,   448,   449,   450,   454,   447,
     455,     0,   466,   456,   451,   457,   458,   459,     0,     0,
       0,   460,     0,   461,   472,   463,   452,     0,     0,   473,
       0,     0,     0,     0,     0,     0,     0,   474,     0,   437,
       0,     0,     0,     0,   464,   475,     0,     0,     0,     0,
       0,     0,     0,     0,   467,   597,   448,   449,   450,     0,
       0,     0,   463,     0,     0,   451,   468,   469,     0,     0,
     456,   465,   457,   458,   459,     0,     0,     0,   460,     0,
     461,   464,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2812,     0,     0,
     470,   466,   490,   597,   448,   449,   450,     0,   465,     0,
     471,     0,     0,   451,     0,     0,     0,     0,     0,   463,
       0,   598,     0,   457,   458,   459,     0,     0,     0,   460,
       0,   472,     0,     0,     0,     0,   473,     0,   466,     0,
       0,     0,     0,   467,   474,     0,   437,     0,     0,     0,
       0,     0,   475,     0,     0,   468,   469,     0,     0,     0,
       0,     0,     0,     0,     0,   465,     0,     0,     0,   806,
     463,   457,   458,   459,     0,     0,     0,   460,     0,     0,
     467,     0,     0,     0,     0,     0,     0,     0,     0,   470,
       0,     0,   468,   469,     0,   466,     0,     0,     0,   471,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   463,     0,
     472,     0,     0,     0,     0,   473,   470,     0,     0,     0,
       0,     0,     0,   474,     0,   437,   471,   467,     0,     0,
       0,   475,     0,     0,     0,     0,   466,     0,     0,   468,
     469,     0,     0,     0,     0,     0,     0,   472,     0,     0,
       0,     0,   473,     0,     0,     0,     0,     0,     0,     0,
     474,     0,   437,     0,     0,     0,     0,     0,   475,     0,
       0,     0,     0,   470,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   471,   466,     0,     0,     0,     0,     0,
     468,   469,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0, -1943,   472,     0,     0,     0,     0,   473,
       0,     0,     0,     0,     0,     0,     0,   474,     0,   437,
       0,     0,     0,     0,     0,   475,     0,     0,     0,     0,
       0,     0,     0,     0,   471,     0,     0,     0,   468,   469,
       0,     0,     0,     0,     0,     0, -1179,     0,     0,     0,
       0, -1943,     0,     0,     0,   472,     0,     0,     0,     0,
     473,     0,     0,     0,     0, -1179,     0,     0,   474,   599,
     437,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   471,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0, -1179,     0,     0,     0,     0,     0,
       0,     0,     0,   472,     0,     0,     0,     0,   473,     0,
       0,     0,     0, -1179,     0,     0,   474,   599,   437
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-2309)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
     211,   212,   339,   453,   215,   521,   364,   444,   927,   199,
     532,   324,   673,   674,   675,    42,   979,  1678,  1430,   207,
     416,  1433,   315,   327,   317,   213,  1691,   320,   408,   865,
     410,   324,   995,   413,  1481,   636,  1359,   337,   488,   351,
    1752,  1254,  1276,  1275,  1680,   856,   339,   329,  1684,   774,
     645,   351,   345,  1716,  1615,   337,  1320,   528,  1216,   784,
      22,    58,   318,    56,   322,     9,   778,   115,  1302,   351,
       1,     6,   317,   366,   528,   368,  2024,  2025,  1581,    17,
       1,     1,  2009,  1168,    58,    48,    87,     1,    31,    31,
      49,     9,   129,  2401,   616,     6,     9,   125,    17,   842,
       9,   111,   124,    88,    64,    71,     9,  1089,   108,  1301,
       0,     9,  2286,  1198,   585,  1097,   317,    49,   389,    49,
     178,   322,   131,     1,    97,    98,   842,  1337,   329,    88,
     179,   321,  1570,   323,  2390,    39,   337,   236,   850,    33,
     623,   167,   241,   229,  2280,   126,    21,   206,   245,    58,
     351,   752,   260,   446,   143,   220,   346,   236,   348,    32,
     245,   275,   314,   353,   275,   248,    97,  1252,    22,   124,
     641,   336,   179,   317,   385,   256,   236,   367,    21,   175,
     302,   126,   278,   256,     8,    26,   397,   641,   163,   161,
     310,   303,   403,   404,    38,   406,   489,   490,   491,     0,
     411,   412,    46,   516,     1,   416,   918,  2286,   416,  1656,
     114,  2200,   260,    37,   363,   426,   177,   575,   206,  2393,
      71,   514,  1660,   516,   260,  1310,   260,   325,   191,   467,
     730,    58,   131,   248,    27,   236,   334,  1200,   111,   126,
     294,   266,   421,   341,   342,   490,   466,   260,   504,   495,
     140,   173,   453,    58,   144,   317,   217,  2497,   340,   158,
     204,   160,   360,   123,   318,    62,   291,    71,   514,    71,
     352,   180,   984,    73,   236,   169,  2224,   339,   291,   155,
     562,   519,   490,   345,  2524,   207,   173,   488,   489,   490,
     491,   573,   307,    90,    91,   653,   516,   232,   172,   335,
     754,   397,   275,   699,    71,   216,   426,   757,   601,  1411,
     422,   490,  2301,   203,  2393,   260,   350,   398,   293,   433,
     469,   435,   523,   116,   202,   398,    71,   217,   218,   519,
     623,   711,   125,   633,  2470,   323,   245,   241,   421,   140,
     530,  1844,  1845,   144,   781,   489,   490,   491,   459,   260,
      71,   633,   474,   518,   419,   229,   638,   650,   199,   270,
     295,   562,   260,   237,   278,   815,    49,   519,   192,   342,
     824,   215,   573,   173,   434,   356,   413,   271,    30,   314,
     478,   366,   236,   420,   481,   464,  1222,   260,   291,  2052,
    2023,   453,   303,  1671,   131,  1231,   481,  1208,    93,  2655,
    1211,   460,   203,   247,   129,   401,  2333,   366,  1846,  1673,
     207,   519,   206,    65,   936,    67,   217,   218,  1503,   111,
     519,   904,   623,   432,   510,   269,   488,   489,   490,   491,
     411,  1143,   633,   704,   366,    71,   366,   638,  2612,   236,
     129,   407,   540,   154,   355,  1637,  1189,   322,   474,   323,
     410,     6,   514,  2761,   384,   358,   554,   957,   399,   349,
     753,   519,  1740,  1741,  1742,  1743,  1744,   760,   761,   762,
     519,   519,  1750,  1189,   496,   464,   769,   770,   771,   772,
     324,   774,   519,   397,  1466,   459,   697,   497,   586,   782,
     518,   784,   785,   465,   705,   461,     6,  1710,   709,  1709,
     688,   794,   795,   796,   797,   798,   989,   411,   753,     6,
     964,   422,   519,   514,   427,   478,   427,   510,   518,   519,
     778,   732,   315,   520,   769,   770,   771,   512,   821,   740,
     327,  1809,   475,   475,   464,   362,   455,   782,   473,   601,
    1818,   496,   386,  1821,  2471,   733,   519,   645,   349,   647,
     464,   855,   753,   512,   652,   518,   407,   519,   519,   760,
     761,   762,   473,   363,     6,  2126,  1161,     6,   769,   770,
     771,   772,   481,   774,   464,   519,   821,   778,   516,   520,
     512,   782,   512,   784,   785,  1186,   464,  2535,   519,  1552,
     986,   466,   850,   794,   795,   796,   797,   798,   519,   519,
     937,   519,   477,   407,   256,   407,   161,  2110,   519,   753,
     461,   904,   525,  1096,   525,   915,   760,   761,   762,   912,
     821,   519,  1138,   466,   276,   769,   770,   771,  1730,   519,
    1026,   260,   573,   915,   477,   928,   826,   348,   782,   206,
     407,   785,   898,   487,   937,   519,  1907,   167,   334,   850,
     794,   795,   796,   797,   798,   948,  1920,   461,   155,   461,
     918,   216,   407,   464,  1114,  2298,   471,   464,   178,   469,
    1141,   476,  1757,   929,   956,  1071,  2017,   821,   161,   374,
     778,   475,   124,   366,   977,   337,   407,  1141,   413,   206,
       0,   753,   256,   324,   461,   420,   989,  2360,   760,   761,
     762,   384,  1621,   904,   645,   260,   216,   769,   770,   771,
     772,   912,   774,  2274,   915,   270,   461,   918,   519,   216,
     782,   260,   784,   785,   413,   518,   984,   464,   260,   314,
     361,   420,   794,   795,   796,   797,   798,  1822,   203,  1824,
     461,   220,   221,   841,   266,  1556,    57,   244,   260,  2010,
     260,   849,   850,    64,   449,   956,     0,   968,  1241,   821,
     270,   240,   454,   260,   192,   222,  1491,   459,   912,   291,
      49,   407,   238,   270,   216,  2625,  1861,   216,   275,   260,
     300,   464,   519,   984,   260,  2529,    32,   266,   989,   887,
    2068,  1291,  1292,  1293,  1294,  1295,  1296,  1297,  1298,  1282,
     355,     0,   260,  1096,  1015,   266,   260,    65,   519,    67,
     751,   294,   291,    30,  1899,  1900,   299,  1110,   260,   260,
     918,   260,    58,  1116,   123,   461,   248,  2365,   270,   512,
     519,   270,   518,   260,   398,   471,  1286,  1549,   366,  1551,
     476,   314,    57,  2529,   167,   355,   498,   222,    57,    64,
     912,    60,    62,     9,  2690,    64,   220,   464,   355,   413,
    2529,  1072,   960,   320,   203,  1110,   518,   384,   809,  1080,
    1058,  1059,   427,   971,  1156,   937,   240,  2529,   217,   218,
      90,    91,   835,  1595,   349,  1143,   984,  2529,  2149,  2554,
     519,   108,  2126,  2529,  2126,  1096,   140,    34,  2239,  2611,
     144,   842,   266,  1159,  2117,   235,   537,   860,   475,  1110,
     465,   128,  2450,   355,   266,   163,   355,   427,   473,   167,
     118,   119,   120,   350,   131,   466,   246,   291,   336,  2765,
     427,  2781,   393,   274,   519,   171,   477,   312,  1139,   291,
     406,   464,  1143,   371,   289,  2610,  1658,   900,  1241,  1242,
    1250,   168,   516,   232,   474,  1156,   429,  2280,  1169,   203,
    2672,   272,   123,   473,   519,   519,  1110,  2711,  1250,  1251,
     525,   301,   925,   217,   218,   192,   473,   300,     6,   920,
     519,  1274,   465,   103,   512,   427,   260,   519,   427,  1282,
     207,   227,  2704,  2705,   335,   340,   518,  1198,   256,   421,
    2712,   275,   416,   944,  2716,  2717,  1842,   519,   518,   519,
     349,    27,  1408,   525,   260,   525,  1309,   459,   217,   218,
     459,   416,   519,  1316,  1317,  2711,   236,   202,   525,   970,
    2291,   473,   403,  2745,   473,   387,   515,   348,   519,   518,
    1241,  1242,  2711,   519,   242,  1495,   464,  1501,  1110,  1250,
    1251,  1252,  2265,   327,   496,  2720,   278,   272,   256,  2711,
     216,   519,  2774,   272,    57,   519,  1256,   172,   416,  2711,
    1671,    64,   392,   131,     8,  2711,   490,   519,   519,   337,
     519,  1282,   107,   525,     9,  2750,   525,    12,  1571,   296,
      15,    16,   117,   464,   405,   490,   518,  2758,     9,   410,
     116,   345,   216,    37,   260,   349,  1047,  1487,  2485,  1310,
     518,   519,   459,   173,   270,  1326,  2777,   327,   314,   416,
    1331,   260,  1333,     9,   229,  1336,  1337,   303,  1339,   174,
     471,   348,   237,   348,   266,   476,   181,  2514,   360,   348,
     362,  1082,   490,   341,   342,   343,   260,   207,   285,   286,
     287,   515,   199,   464,   329,   330,   270,    12,   356,   291,
      15,    16,  2574,   510,    50,  1353,   518,   519,   454,   455,
    1507,  2256,  2257,   348,     9,   318,   207,   235,   464,   322,
      85,  1664,  1475,  1476,  2596,   224,   329,   330,   216,  1482,
     405,  1484,  1290,   490,   337,   410,   405,   340,  1491,   355,
     261,   410,   345,  1391,   347,   236,   349,   350,   351,   352,
    1308,  1504,   467,   260,  1507,   352,   355,   256,   323,   123,
    1173,  1174,   508,    58,  1435,   421,   369,   463,   403,  1440,
    1475,  1476,   260,  1570,   260,   471,   472,  1482,   296,  1484,
     476,   355,   270,   301,  1455,   519,   422,   425,  1189,   464,
     618,   525,   450,  1557,   464,   164,   395,  2634,   167,  1504,
       8,   191,  2199,  2200,   290,   408,  1219,   410,  1561,   466,
     413,   427,    55,   463,  1475,  1476,  1792,  1570,  1571,   272,
     477,  1482,   472,  1484,   214,   403,  1579,   465,   427,    37,
    1491,  1549,  1688,  1551,   490,   471,  1812,  2455,    28,  1695,
     476,   669,  1503,  1504,   519,   216,   349,    90,  2466,   335,
     519,  1593,   159,   427,  1607,  1256,  1620,   473,   191,  2199,
    2200,   360,  1533,  1660,   107,  1278,   369,   355,  1539,   368,
     216,  1475,  1476,   230,   117,  1546,  2783,  1595,  1482,  2617,
    1484,   214,   479,   480,  2622,   180,  1639,   484,  1549,   260,
    1551,   396,  1748,  1749,  1647,   348,   281,   282,     9,   270,
    1504,   504,   248,   249,  2301,   464,  1307,  1660,   266,   525,
    1571,  1664,   191,   464,   260,  1586,  1317,  1318,  1579,  2537,
     523,   216,   307,   308,   270,   446,   525,  2545,   235,   298,
    2603,   300,  1593,   291,  1595,   214,  2347,   127,   180,   427,
    1658,   360,  1647,   266,  2682,   204,  1596,    58,  2686,   191,
     245,   525,   405,  1475,  1476,   210,   211,   410,  1749,   562,
    1482,  2301,  1484,  1819,  1820,   260,   281,   282,   291,  1491,
     573,   458,   214,  2770,   233,   270,  1748,  1749,   216,   216,
    1752,   486,  1504,  2780,   355,   473,  1647,   508,   475,  2368,
     297,   144,   307,   308,   301,   250,   251,  1658,   519,  2410,
    2411,   180,   244,  1664,   423,   424,   511,   365,   513,   355,
    1423,   464,  1425,  1684,   428,     8,   619,  1857,   432,  1690,
       1,   140,   260,   260,   312,    11,   216,  1698,  1819,  1820,
     633,   519,   270,   270,   464,   638,  2018,   525,  1525,   760,
     761,   762,   123,  1647,    37,  1798,   464,  1819,  1820,  1846,
    1608,  1961,   403,   461,   236,  1703,   427,   461,   346,   461,
     355,   403,   241,   471,   785,   244,    47,   471,   476,   471,
     260,  2697,   476,    59,   476,  1746,  1747,   464,   260,   367,
     270,   427,    63,  1496,  1497,  2711,   164,   462,   176,   167,
     462,  1649,  1650,  1846,   284,   310,   471,     1,  2509,   471,
    1956,   476,   473,   464,   476,   216,   252,   253,   711,   471,
    2533,    97,    47,    99,   476,   101,    11,   355,   355,   360,
     428,   362,   103,   109,   426,  1647,  1923,   473,    63,   464,
     488,   313,   427,   315,   245,  2429,    40,    41,    42,    43,
      44,    26,  2436,  2437,   464,   748,  1559,   464,   519,   260,
    1563,   796,   797,   798,   525,   499,   500,   501,   502,   270,
     518,  1822,   384,  1824,    59,   355,     6,   464,   103,     9,
    2026,   464,    76,    77,   313,   778,   315,   464,   473,   525,
     166,   499,   500,   501,   502,   360,   481,   362,  1117,   427,
     427,  1120,   173,   344,  2812,  1596,  1993,  1126,  1611,  1612,
    1861,  1130,    97,   298,    99,   300,   101,  1136,  1609,    49,
    2763,  2764,   408,   468,   109,   470,   499,   500,   501,   502,
     521,   256,  2198,   258,   519,   519,   207,  1898,   305,   306,
     525,  2784,   256,   434,   258,   473,   473,   427,   415,  1900,
     430,   431,   236,    83,   355,    23,    24,   850,    88,   415,
    2803,  1932,  1933,  1934,  1935,   236,   843,   844,   845,   846,
     100,   360,   243,   362,   256,    66,   258,    68,   794,   795,
    1828,   166,   489,   254,   491,   261,    58,  2830,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   525,   525,  2199,
    2200,   770,   771,   378,  2067,   898,   222,   260,   519,  1970,
    1483,   236,  1485,   464,   464,  1488,  1489,  1490,   243,   260,
     519,  1494,   915,   519,  2067,   918,   427,   459,   265,   254,
     403,   307,  1505,  1506,   464,   421,   929,   464,   410,    64,
      60,    69,   519,   464,   519,   525,  2089,   132,   199,   475,
     312,  2012,   475,   475,  2015,   475,     4,  2203,   475,   475,
     475,  2022,   475,   956,  2210,   195,   196,   197,   475,   133,
     460,    19,   473,   475,   204,  2205,   261,   475,  2165,   475,
     481,    29,   171,  1786,  1787,  1788,   216,   216,  2049,   360,
     361,   984,  2100,  2762,  2102,   459,   134,  2140,   135,   394,
     136,  2301,   360,   137,   375,  2148,   377,   138,  2151,   139,
    2050,  2051,   102,   510,   454,   475,    64,   459,   519,   249,
     142,    49,   307,   399,   525,   255,   414,   257,   458,   455,
     260,   260,   262,   263,   264,   360,   361,   458,   268,   452,
     270,   270,   336,   145,    11,   275,   199,  2293,   146,  2100,
     375,  2102,   377,   147,     9,   148,   514,   351,    54,    55,
     167,   275,    31,   149,  2125,   150,   113,   151,   444,   152,
     199,   113,   153,   464,   403,   259,   519,  1880,  1881,   309,
     519,   318,   410,   464,   314,  1078,   260,   519,   464,   464,
    1893,  1894,    59,   464,    90,   108,   481,   260,   328,   260,
    2330,   464,  2289,   421,   110,   318,  1909,  1910,   475,   459,
     519,   107,  2358,   519,   399,   519,   227,   206,   384,  2349,
    2350,   117,   347,  2353,   276,   355,   355,  2270,    83,   300,
      97,   167,    99,   260,   101,   130,   366,   516,   516,   464,
    2283,   512,   109,   519,  2655,   100,  1139,   178,   519,   459,
    1143,   374,   518,   170,  2400,   385,   232,   131,   459,   444,
     459,    49,  2223,  1156,  2112,  2113,  1159,    49,   232,  2230,
    2231,  2232,  2233,   199,  2420,  2123,   224,  2238,   464,   464,
    2388,   403,   375,   464,   372,   464,    86,   512,    23,   467,
     464,   421,   455,   409,   276,  2425,   236,   427,   427,   166,
     260,   202,  2263,  2243,   348,  1198,    73,   519,   256,   439,
     440,   464,   241,   524,   523,   434,   461,   305,   266,   280,
      24,    25,   461,   461,  2264,   519,   461,   461,   461,   461,
     461,   459,   459,   388,   519,   301,  2027,   235,   371,    17,
     195,   196,   197,   473,   473,   206,   206,   455,   315,   204,
     130,   141,   459,   483,    49,  2485,   374,  1250,  1251,  1252,
     490,   216,    66,   125,    68,   206,    70,   143,     8,   199,
     516,   206,   516,   321,   504,   313,  2506,   434,   326,   509,
    2341,   464,   512,   459,  2514,  2515,     9,   517,     7,   519,
     519,   464,   512,  2354,   261,   525,   525,   403,   398,    87,
     104,   105,   106,   276,    22,   260,  2367,   262,   263,   264,
    2258,  2541,   360,   268,   192,   270,  2503,  1310,   312,   334,
     368,    47,   305,    57,   450,   421,  2366,     8,   303,   206,
    2576,   327,   380,   512,  1327,   331,   332,   512,    49,   410,
     307,   320,   422,   241,   322,   316,   296,   131,  2491,  2636,
     266,   155,   336,   157,   309,   319,   114,   449,   403,  2725,
     164,   464,   410,   167,   207,   207,   414,   514,   455,   519,
    2600,   519,   233,   260,    26,   423,   206,   206,   300,   375,
     370,    35,  2569,   370,    38,   464,   434,   103,     8,    37,
      49,    45,    46,   266,   390,   391,   469,   388,   302,   474,
     355,  2462,   241,   222,  2634,   506,    96,   159,   297,   464,
     392,   516,    30,   236,    32,   519,   464,    35,   459,   467,
      38,   192,   258,  2484,    57,   411,  2569,   434,    46,   266,
     385,    39,   399,   260,    49,   111,  2666,   345,    92,  2582,
     266,   266,  2585,  2606,   266,   464,   455,    65,   525,    67,
      53,   459,   256,    26,   258,   409,   421,    17,   411,   110,
     345,   495,   337,  2606,   357,   458,   199,  2528,  2529,   260,
     108,   275,   427,  2616,    92,   464,  2722,   444,   430,   464,
     348,   412,   519,   464,   439,   440,   466,   115,   191,     7,
     376,  2552,  2553,   111,  1487,   429,   464,   459,   464,   227,
    2663,    30,  2563,   224,   518,   115,   443,  2568,   162,   315,
    1503,   345,   516,   464,  2657,   312,   207,   179,   473,    57,
    2663,   207,   519,  2769,   260,   214,   225,  2773,   483,   213,
     120,   519,   199,   319,    49,   436,     7,   327,  2599,   193,
     516,  2332,    58,    55,    81,  1064,    60,    53,  2609,   504,
      52,   395,   519,  1399,   509,   204,  1549,  1061,  1551,   219,
    1043,   215,   517,  2624,   519,  2626,  1380,   721,  2488,  2630,
     525,  2242,  2229,  2425,  2237,   193,   692,  2243,  2419,   676,
    2222,  1684,   200,   201,  2529,  2831,  2729,  2193,  2810,  2505,
    2508,  2531,  2797,  2632,  2822,  2165,  2774,   215,  2567,  2567,
    1593,  2664,  1595,  2393,  2664,   241,  1554,    65,  1082,  2649,
      45,  1446,  1150,   504,  1552,   269,  1791,   807,  1790,   537,
    2763,  2764,   809,  1189,  1211,  1556,   558,  2688,  2689,   247,
      65,    66,    67,    68,   855,  1838,   901,   908,   256,  1579,
     858,  2784,  2703,  1851,  1239,  1850,   595,  2708,  2709,   267,
     304,   269,   456,  2796,  2797,   919,   601,  2569,   276,  1596,
    2803,  1607,  1318,  2724,  1623,  1658,  2727,  2728,  1269,   949,
     324,  1650,   631,   291,   292,  1299,   633,   352,  1671,  1317,
    1903,  1317,  2524,  2826,   647,   999,  1424,  2830,   837,  1422,
    1500,  1908,   838,  1499,  2273,  1914,  1897,  1896,  1913,  2760,
    1669,  1694,  1178,   507,  1643,   887,   324,  1177,  1643,  1643,
    1643,  1030,  2763,  2764,   619,   519,  2001,  1389,   723,   337,
     514,  2569,  1286,  1384,   473,   803,  2196,  2235,  2478,  1848,
    2379,  2749,   386,  2784,  1055,   353,   354,  1598,  1306,  1568,
    1707,  1335,  2473,  2640,  2765,    -1,   400,  1740,  1741,  1742,
    1743,  1744,  2803,    -1,    -1,  1748,  1749,  1750,    -1,  1752,
      -1,   379,    -1,    -1,    -1,    -1,    -1,   421,   386,  2763,
    2764,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   213,  2830,
      -1,    -1,   400,    -1,    -1,    -1,   404,    -1,    -1,    -1,
    2784,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   421,   239,    -1,    -1,    -1,    -1,  2803,
      -1,    -1,    -1,    -1,    -1,     1,  1809,     3,    -1,     5,
      -1,   256,    -1,   258,    10,  1818,  1819,  1820,  1821,  1822,
     448,  1824,    18,   487,    -1,    -1,  2830,    -1,    -1,   457,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2763,  2764,    -1,   289,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1857,    51,    52,    -1,  1861,   487,
      -1,    -1,  2784,    -1,    -1,    61,   311,    -1,    -1,   497,
      -1,    -1,    -1,    -1,    -1,   503,    72,    -1,    -1,    75,
      -1,  2803,    -1,    -1,    -1,    -1,    -1,    -1,   333,    -1,
     518,    -1,    -1,    89,   339,    -1,    -1,  1900,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2830,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,
      -1,    -1,    -1,  1926,   120,    -1,   122,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,    -1,   141,   142,   143,    -1,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,    -1,
      -1,    -1,    -1,   159,    -1,    -1,    -1,    -1,   164,   165,
     415,   167,    -1,    -1,   170,    -1,    -1,    -1,    -1,    -1,
     425,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   442,    -1,    -1,
      -1,    -1,   198,    -1,    -1,    -1,    -1,    -1,    -1,   205,
      -1,    -1,   208,   209,    -1,    -1,    -1,    -1,    -1,   464,
      -1,    -1,    -1,   219,    -1,    -1,    -1,    -1,    -1,    -1,
     226,    -1,   228,    -1,    -1,   231,    -1,    -1,    -1,   235,
     485,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     505,    -1,    -1,    -1,    -1,  2068,    -1,   512,    -1,   514,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   273,    -1,    -1,
      -1,   277,    -1,   279,    -1,    -1,    -1,    39,    40,    41,
      42,    43,    44,   289,    -1,    -1,    -1,  2100,    -1,  2102,
     296,   297,   298,    -1,   300,   301,   302,   303,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2120,    -1,    -1,
      -1,   317,    74,    -1,    76,    77,    78,    79,    80,    81,
      82,    -1,    -1,    -1,   330,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,    -1,     5,    -1,    -1,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      -1,    -1,   358,   359,    -1,    -1,    -1,    -1,   120,    -1,
      -1,    -1,    -1,   369,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   382,   383,    -1,    -1,
      -1,    51,    52,   389,    -1,    -1,    -1,   393,    -1,    -1,
      -1,    61,  2205,    -1,    -1,    -1,   402,    -1,    -1,    -1,
      -1,    83,    72,    -1,    -1,    75,   412,    -1,  2221,  2222,
      -1,    -1,    -1,    -1,    -1,    -1,   422,   423,   100,    89,
     182,   183,   184,   185,   186,    -1,   432,   189,   190,    -1,
      -1,   437,   438,    -1,    -1,   441,    -1,   443,    -1,    -1,
      -1,    -1,   112,    -1,    -1,   451,    -1,    -1,    -1,    -1,
     120,    -1,   122,    -1,    -1,    -1,    -1,    -1,   464,    -1,
      -1,   223,    -1,    -1,    -1,    -1,    -1,    -1,   474,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   482,    -1,    -1,    -1,
      -1,    -1,    -1,   489,   154,    -1,    -1,    -1,   494,    -1,
      -1,    -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,    -1,
     170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     516,    -1,    -1,   195,   196,   197,   522,  2330,    -1,   281,
      -1,    -1,   204,    -1,    -1,    -1,    -1,    -1,   198,    -1,
      -1,    -1,    -1,    -1,  2347,   205,  2349,  2350,   208,   209,
    2353,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,
      -1,    -1,  2365,    -1,    -1,    -1,   226,    -1,   228,    -1,
      -1,   231,    -1,   325,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   336,    -1,    -1,    -1,   260,    -1,
     262,   263,   264,    -1,    -1,    -1,   268,    -1,    -1,   351,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2410,  2411,    -1,
      -1,    -1,    -1,   273,    -1,    -1,    -1,   277,    -1,   279,
      -1,    -1,  2425,    -1,    -1,  2428,  2429,    -1,    -1,   289,
      -1,    -1,    -1,  2436,  2437,  2438,    -1,   309,    30,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    38,  2450,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,   317,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   417,   418,   419,    -1,    -1,
     330,    -1,    -1,    65,     1,    67,     3,    -1,     5,    -1,
      -1,    -1,  2485,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    -1,  2497,    -1,    -1,    -1,   358,   359,
      92,    -1,    -1,  2506,    -1,    -1,  2509,    -1,    -1,   369,
      -1,  2514,  2515,   385,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2524,   382,   383,    51,    52,    -1,    -1,    -1,   389,
      -1,    -1,    -1,   393,    61,    -1,    -1,    -1,  2541,   491,
     492,   493,   402,    -1,    -1,    72,  2549,    -1,    75,    -1,
      -1,    -1,   412,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,   423,    -1,    -1,    -1,   439,   440,    -1,
     162,    -1,   432,    -1,    -1,    -1,    -1,   437,   438,    -1,
      -1,   441,    -1,   443,    -1,   112,    -1,    -1,    -1,    -1,
      -1,   451,    -1,   120,    -1,   122,    -1,  2600,    -1,    -1,
      -1,   193,    -1,    -1,   464,    -1,    -1,    -1,    -1,    -1,
      -1,   483,    -1,    -1,  2617,    -1,    -1,    -1,    -1,  2622,
      -1,    -1,   482,   215,    -1,    -1,    -1,   154,    -1,   489,
      -1,  2634,   504,    -1,   494,    -1,    -1,   509,   165,    -1,
      -1,    -1,    -1,   170,    -1,   517,    -1,   519,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,    -1,
       5,    -1,   522,  2666,   256,    10,    -1,    -1,    -1,    -1,
      -1,   198,    -1,    18,    -1,    -1,    -1,   269,   205,  2682,
      -1,   208,   209,  2686,   276,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   219,    -1,    -1,    -1,    -1,    -1,    -1,   226,
      -1,   228,    -1,    -1,   231,    -1,    51,    52,    -1,    -1,
      -1,    -1,   304,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      75,    -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,   337,   273,    -1,    -1,    -1,
     277,    -1,   279,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   289,    -1,    -1,    -1,    -1,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   120,    -1,   122,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     317,    -1,    -1,    -1,   386,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   330,    -1,    -1,    -1,    -1,   400,   154,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     165,    -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,   421,
      -1,   358,   359,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   369,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   198,    -1,   382,   383,    -1,    -1,    -1,
     205,    -1,   389,   208,   209,    -1,   393,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   219,   402,    -1,    -1,    -1,    -1,
      -1,   226,    -1,   228,    -1,   412,   231,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   487,   423,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   432,   498,    -1,    -1,    -1,
     437,   438,    -1,    -1,   441,    -1,   443,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   451,    -1,   518,    -1,   273,    -1,
      -1,    -1,   277,    -1,   279,    -1,    -1,   464,    -1,    -1,
      -1,    -1,    -1,    -1,   289,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   482,    -1,    -1,    -1,    -1,
      -1,    -1,   489,    -1,    -1,    -1,    -1,   494,    -1,    -1,
      -1,    -1,   317,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   330,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   522,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   358,   359,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   369,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   382,   383,    -1,
      -1,    -1,    -1,    -1,   389,    -1,    -1,    -1,   393,    -1,
      -1,    -1,    -1,     3,    -1,     5,    -1,   402,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    -1,   412,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   423,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   432,    -1,    -1,
      -1,    -1,   437,   438,    -1,    -1,   441,    -1,   443,    -1,
      -1,    51,    52,    -1,    -1,    -1,   451,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    75,    -1,    -1,     6,    -1,
      -1,     9,    -1,    -1,    12,    13,    14,   482,    -1,    89,
      -1,    -1,    20,    -1,   489,    -1,    -1,    -1,    -1,   494,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     120,    -1,   122,    -1,    -1,    -1,    -1,   522,    -1,    -1,
     130,    -1,   132,   133,   134,   135,   136,   137,   138,   139,
      -1,   141,   142,   143,    -1,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,    -1,
     170,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   198,    -1,
      -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,   208,   209,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,
      -1,    -1,    -1,    -1,    -1,    -1,   226,    -1,   228,    -1,
      -1,   231,    -1,   161,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,   196,   197,
      -1,    -1,    -1,   273,    -1,    -1,   204,   277,    -1,   279,
      -1,    -1,   210,   211,    -1,    -1,    -1,    -1,   216,   289,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   317,    -1,    -1,
      -1,   249,   250,   251,    -1,    -1,    -1,   255,    -1,   257,
     330,    -1,   260,    -1,   262,   263,   264,    -1,    -1,    -1,
     268,    -1,   270,    -1,    -1,    -1,    -1,   275,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   358,    -1,
     288,    -1,    -1,    -1,    -1,    -1,   294,    -1,    -1,   369,
      -1,   299,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   307,
      -1,   309,    -1,   383,    -1,    -1,   314,    -1,    -1,   389,
      -1,   319,    -1,   393,    -1,    -1,    -1,    -1,    -1,    -1,
     328,    -1,   402,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     338,    -1,   412,    -1,     6,    -1,    -1,     9,    -1,    -1,
      12,    13,    14,   423,    -1,    -1,    -1,   355,    20,    -1,
      -1,    -1,   432,    -1,    -1,    -1,    -1,   437,   438,    -1,
      -1,   441,    -1,   443,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   451,    -1,    -1,    -1,    -1,    -1,   385,    -1,    -1,
      -1,    -1,    -1,    -1,   464,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   482,    -1,    -1,    -1,    -1,    -1,    -1,   489,
      -1,    83,    -1,    -1,   494,    -1,    -1,    -1,    -1,   427,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,
      -1,   439,   440,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   522,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   461,    -1,   463,    -1,   465,    -1,    -1,
     468,    -1,   470,   471,   472,   473,    -1,   475,   476,    -1,
      -1,    -1,    -1,    -1,    -1,   483,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,   161,
       9,    -1,    -1,    -1,    -1,    -1,   504,    -1,    -1,   171,
      -1,   509,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   517,
      -1,   519,    -1,    -1,    -1,    -1,    -1,   525,    -1,    -1,
      -1,    -1,    -1,   195,   196,   197,    -1,    -1,    -1,    -1,
      -1,    -1,   204,    -1,    -1,    -1,    -1,    -1,   210,   211,
      -1,    -1,    -1,    -1,   216,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   249,   250,   251,
      -1,   100,    -1,   255,    -1,   257,    -1,    -1,   260,    -1,
     262,   263,   264,    -1,    -1,    -1,   268,    -1,   270,    -1,
      -1,    -1,    -1,   275,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   288,    -1,    -1,    -1,
      -1,    -1,   294,    -1,    -1,     6,    -1,   299,     9,    -1,
      -1,    -1,    -1,    -1,    -1,   307,    -1,   309,    -1,    -1,
      -1,    -1,   314,    -1,   163,    -1,    -1,   319,    -1,    30,
      -1,    -1,    -1,    -1,    35,    -1,   328,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,   338,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   195,   196,   197,    -1,
      -1,    -1,    -1,   355,    65,   204,    67,   206,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   216,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    -1,   385,    -1,    -1,    -1,    -1,    -1,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     249,    -1,    -1,    -1,    -1,    -1,   255,    -1,   257,    -1,
      -1,   260,    -1,   262,   263,   264,    -1,    -1,    -1,   268,
      -1,   270,    -1,    -1,    -1,   427,   275,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   439,   440,     6,
      -1,    -1,     9,    -1,   293,    -1,    -1,    -1,    -1,    -1,
      -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   461,
     309,   463,    -1,   465,    -1,    -1,   468,    -1,   470,   471,
     472,   473,    -1,   475,   476,    -1,    -1,    -1,    -1,   328,
      -1,   483,   193,    -1,   195,   196,   197,    -1,    -1,    -1,
      -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   504,    -1,   215,   216,   355,   509,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   517,    83,   519,    -1,    -1,
      -1,    -1,    -1,   525,    -1,    -1,    -1,    -1,     6,    -1,
      -1,     9,    -1,   100,    -1,   384,   385,    -1,   249,    -1,
      -1,    -1,    -1,    -1,   255,   256,   257,    -1,    -1,   260,
      -1,   262,   263,   264,    -1,    -1,    -1,   268,   269,   270,
      -1,    -1,    -1,    -1,   275,   276,    -1,    -1,     6,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,   427,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,
     439,   440,    -1,   304,    -1,    -1,    -1,    -1,   309,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   324,    -1,    -1,    -1,   328,    -1,    -1,
      -1,    -1,   100,    -1,   473,    -1,   337,    -1,   195,   196,
     197,    -1,    -1,    -1,   483,    -1,    -1,   204,    -1,    -1,
      -1,    -1,    -1,    -1,   355,    83,    -1,    -1,    -1,   216,
      -1,    -1,    -1,    -1,    -1,   504,    -1,    95,    -1,    -1,
     509,    -1,   100,    -1,    -1,    -1,    -1,    -1,   517,   518,
     519,    -1,    -1,    -1,   385,   386,   525,    -1,    -1,    -1,
      -1,    -1,   249,    -1,    -1,    -1,    -1,    -1,   255,   400,
     257,    -1,    -1,   260,    -1,   262,   263,   264,    -1,    -1,
      -1,   268,    -1,   270,    -1,    -1,    -1,    -1,   275,    -1,
     421,    -1,    -1,    -1,    -1,    -1,   427,   195,   196,   197,
      -1,    -1,    -1,    -1,    -1,    -1,   204,    -1,   439,   440,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   216,    -1,
      -1,    -1,   309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,   196,   197,
      -1,   328,   473,    -1,    -1,    -1,   204,    -1,    -1,    -1,
      -1,   249,   483,    -1,    -1,    -1,   487,   255,   216,   257,
      -1,    -1,   260,    -1,   262,   263,   264,   498,   355,    -1,
     268,    -1,   270,   504,    -1,    -1,    -1,   275,   509,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   517,   518,   519,    -1,
      -1,   249,    -1,    -1,   525,    -1,    -1,   255,   385,   257,
      -1,    -1,   260,    -1,   262,   263,   264,    -1,    -1,    -1,
     268,   309,   270,    -1,    -1,    -1,   314,   275,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     328,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,
     427,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   309,   439,   440,    -1,    -1,    -1,   355,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     328,    -1,    -1,    -1,     6,    -1,    -1,     9,    -1,   466,
      -1,    -1,    -1,    -1,    -1,    -1,   473,   385,    -1,    -1,
     477,    -1,    -1,    -1,    -1,    -1,   483,   355,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,   504,    -1,    -1,
      -1,    -1,   509,    -1,    -1,    -1,    -1,   385,    95,   427,
     517,    -1,   519,   100,    -1,    -1,    -1,    -1,   525,    -1,
      -1,   439,   440,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,   100,   427,
      -1,    -1,    -1,    -1,    -1,   473,     6,    -1,    -1,     9,
      -1,   439,   440,    -1,    -1,   483,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   504,    -1,    -1,    -1,
      -1,   509,    -1,    -1,    -1,   473,    -1,    -1,    -1,   517,
      -1,   519,    -1,    -1,    -1,   483,    -1,   525,   195,   196,
     197,    -1,    -1,    -1,    -1,    -1,    -1,   204,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   504,    -1,    -1,   216,
      -1,   509,    -1,    83,    -1,    -1,    -1,    -1,    -1,   517,
      -1,   519,    -1,   195,   196,   197,    -1,   525,    -1,    -1,
     100,    -1,   204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   249,    -1,   216,    -1,    -1,    -1,   255,    -1,
     257,    -1,    -1,   260,    -1,   262,   263,   264,    -1,    -1,
      -1,   268,    -1,   270,    -1,    -1,    -1,    -1,   275,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   249,    -1,    -1,
      -1,    -1,    -1,   255,    -1,   257,    -1,    -1,   260,    -1,
     262,   263,   264,    -1,    -1,    -1,   268,    -1,   270,    -1,
      -1,    -1,   309,   275,    -1,    -1,    -1,    -1,    -1,     6,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   328,    -1,    -1,    -1,   195,   196,   197,    -1,    -1,
      -1,    -1,    -1,    -1,   204,    -1,    -1,   309,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   216,    -1,   355,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   328,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   385,   249,
      -1,    -1,    -1,   355,    -1,   255,    83,   257,    -1,    -1,
     260,    -1,   262,   263,   264,    -1,    -1,    -1,   268,    -1,
     270,    -1,    -1,   100,    -1,   275,    -1,    -1,    -1,    -1,
      -1,     6,    -1,   385,     9,    -1,    -1,    -1,    -1,    -1,
     427,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   439,   440,    -1,    -1,    -1,    -1,    -1,   309,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   427,    -1,    -1,   328,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   473,   439,   440,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   483,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   355,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   504,   195,   196,
     197,   473,   509,    -1,    -1,   100,    -1,   204,    -1,    -1,
     517,   483,   519,     6,    -1,   385,     9,    -1,   525,   216,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   504,    -1,    -1,    -1,    -1,   509,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   517,    -1,   519,    -1,    -1,
      -1,    -1,   249,   525,    -1,    -1,    -1,   427,   255,    -1,
     257,    -1,    -1,   260,    -1,   262,   263,   264,    -1,   439,
     440,   268,    -1,   270,    -1,    -1,    -1,    -1,   275,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   459,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     195,   196,   197,   473,    -1,    -1,    -1,   100,    -1,   204,
      -1,    -1,   309,   483,    -1,     6,    -1,   314,     9,    -1,
      -1,   216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   328,    -1,    -1,   504,    -1,    -1,   232,    -1,   509,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   517,    -1,   519,
      -1,    -1,    -1,    -1,   249,   525,    -1,    -1,   355,    -1,
     255,    -1,   257,    -1,    -1,   260,    -1,   262,   263,   264,
      -1,    -1,    -1,   268,    -1,   270,    -1,    -1,    -1,    -1,
     275,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   385,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   195,   196,   197,    -1,   199,    -1,    -1,   100,
      -1,   204,    -1,    -1,   309,    -1,    -1,     6,    -1,    -1,
       9,    -1,    -1,   216,    -1,    -1,    -1,    -1,    -1,    -1,
     427,    -1,    -1,   328,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   439,   440,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   249,    -1,    -1,    -1,
     355,    -1,   255,    -1,   257,    -1,    -1,   260,    -1,   262,
     263,   264,    -1,    -1,    -1,   268,   473,   270,    -1,    -1,
      -1,    -1,   275,    -1,    -1,    -1,   483,    -1,    -1,    -1,
     385,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   195,   196,   197,   504,    -1,    -1,
      -1,   100,   509,   204,    -1,    -1,   309,    -1,    -1,    -1,
     517,    -1,   519,    -1,    -1,   216,    -1,    -1,   525,    -1,
      -1,    -1,   427,    -1,    -1,   328,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   439,   440,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   249,    -1,
      -1,    -1,   355,    -1,   255,    -1,   257,    -1,    -1,   260,
      -1,   262,   263,   264,    -1,    -1,    -1,   268,   473,   270,
      -1,    -1,    -1,    -1,   275,    -1,    -1,    -1,   483,    -1,
       6,    -1,   385,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   195,   196,   197,   504,
      -1,    -1,    -1,    -1,   509,   204,    -1,    -1,   309,    -1,
      -1,    -1,   517,    -1,   519,    -1,    -1,   216,    -1,    -1,
     525,    -1,    -1,    -1,   427,    -1,    -1,   328,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   439,   440,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     249,    -1,    -1,    -1,   355,    -1,   255,    83,   257,    -1,
      -1,   260,    -1,   262,   263,   264,    -1,    -1,    -1,   268,
     473,   270,    -1,    -1,   100,    -1,   275,    -1,    -1,    -1,
     483,    -1,    -1,    -1,   385,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   504,    -1,    -1,    -1,    -1,   509,    -1,    -1,    -1,
     309,    -1,    -1,    -1,   517,    -1,   519,    -1,    -1,    -1,
     421,    -1,   525,    -1,    -1,    -1,   427,    -1,    -1,   328,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   439,   440,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   355,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,
     196,   197,   473,    -1,    -1,    -1,    -1,    -1,   204,    -1,
      -1,    -1,   483,    -1,    -1,    -1,   385,    -1,    -1,    -1,
     216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   504,    -1,    -1,    -1,    -1,   509,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   517,    -1,   519,    -1,
      -1,    -1,    -1,   249,   525,    -1,    -1,    -1,   427,   255,
      -1,   257,    -1,    -1,   260,    -1,   262,   263,   264,    -1,
     439,   440,   268,    -1,   270,    -1,    -1,    -1,    -1,   275,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   473,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   309,   483,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   328,   100,    -1,   504,    -1,    -1,    -1,    -1,
     509,    -1,    -1,     1,    -1,    -1,    -1,    -1,   517,    -1,
     519,    -1,    -1,    -1,    -1,    -1,   525,    -1,    -1,   355,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    -1,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,   385,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,    77,
      78,    79,    80,    81,    82,    -1,    -1,    -1,   195,   196,
     197,   427,    -1,    -1,    -1,    -1,    -1,   204,    -1,    -1,
      -1,    -1,    -1,   439,   440,    -1,    -1,    -1,    -1,   216,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   473,    -1,    -1,
      -1,    -1,   249,    -1,    -1,    -1,    -1,   483,   255,    -1,
     257,    -1,    -1,   260,    -1,   262,   263,   264,    -1,    -1,
      -1,   268,    -1,   270,   162,    -1,    -1,    -1,   504,    -1,
      -1,    -1,    -1,   509,    -1,    -1,    -1,    -1,    -1,    -1,
     178,   517,    -1,   519,   182,   183,   184,   185,   186,   525,
      -1,   189,   190,    -1,    -1,   193,    -1,    -1,    -1,    -1,
      -1,   199,   309,   201,    -1,    -1,    -1,    -1,    -1,   207,
      -1,    -1,    -1,    -1,   212,    -1,    -1,   215,    -1,    -1,
      -1,   328,    -1,    -1,    -1,   223,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,    -1,
      -1,   239,    -1,    -1,    -1,    -1,    -1,   245,   355,   247,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   256,    -1,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,
      -1,   269,    -1,    -1,    -1,    -1,    -1,    -1,   385,    -1,
      -1,    -1,    -1,   281,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,   311,    -1,    -1,    -1,    -1,    -1,    -1,
     427,    -1,    -1,    -1,    -1,    -1,   324,   325,    -1,    -1,
      -1,    -1,   439,   440,    -1,   333,    -1,    74,   336,    76,
      77,    78,    79,    80,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   351,   461,   353,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   471,    -1,   473,    -1,   475,   476,
      -1,    -1,    -1,    -1,    -1,    -1,   483,    -1,    -1,    -1,
      -1,   379,    -1,   120,    -1,    -1,    -1,    -1,   386,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   504,    -1,    -1,
      -1,    -1,   509,    -1,    -1,    -1,   404,    -1,    -1,    -1,
     517,    -1,   519,    -1,    -1,    -1,    -1,   415,   525,   417,
     418,   419,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,
      -1,   178,    -1,    -1,    -1,   182,   183,   184,   185,   186,
      -1,    -1,   189,   190,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   459,    -1,    -1,    -1,    -1,   464,    -1,    -1,    -1,
     207,   469,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   481,    -1,    -1,   223,    -1,    -1,   487,
      -1,    -1,    -1,   491,   492,   493,    -1,    -1,    -1,   236,
      -1,    -1,   239,    -1,    21,    -1,    -1,   505,   245,    -1,
      -1,    -1,   510,    -1,   512,    -1,    -1,    -1,    -1,    36,
      -1,   519,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   281,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,
      77,    78,    79,    80,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   311,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   325,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   333,    -1,    -1,   336,
      -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   351,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   364,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   182,   183,   184,   185,   186,
      -1,    -1,   189,   190,    -1,    -1,    -1,    -1,   415,    -1,
     417,   418,   419,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    35,    -1,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    -1,    -1,   223,    -1,   445,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,
      -1,    65,   239,    67,    -1,    -1,    -1,   464,   245,    -1,
      74,    -1,    76,    77,    78,    79,    80,    81,    82,    -1,
      -1,    -1,    -1,    -1,   481,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   491,   492,   493,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   281,    -1,    -1,    -1,   505,    -1,
      -1,    -1,    -1,    -1,    -1,   512,   120,    -1,    -1,    -1,
      -1,    -1,   519,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    35,   311,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,   325,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   333,    -1,   162,   336,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   351,    -1,    83,    -1,   182,   183,
     184,   185,   186,    -1,    -1,   189,   190,   364,    -1,   193,
      92,    -1,    -1,   100,    -1,   199,    -1,   201,    -1,    -1,
      -1,    -1,    -1,   207,    -1,    -1,    -1,    -1,   212,   111,
      -1,   215,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   223,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   236,    -1,    -1,   239,    -1,    -1,   415,    -1,
     417,   418,   419,   247,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   256,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    -1,    -1,   269,    -1,    -1,   445,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,   281,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   464,   195,   196,
     197,   193,    -1,    -1,    -1,    -1,    -1,   204,    -1,   201,
      -1,    -1,    -1,    -1,   481,    -1,    -1,   311,    -1,   216,
      -1,    -1,    -1,   215,   491,   492,   493,    -1,    -1,    -1,
     324,   325,    -1,    -1,    -1,    -1,    -1,    -1,   505,   333,
      -1,    -1,   336,    -1,    -1,   512,    -1,    -1,    -1,    -1,
      -1,    -1,   249,    -1,    -1,   247,    -1,   351,   255,   353,
     257,    -1,    -1,   260,    -1,   262,   263,   264,    -1,    -1,
      -1,   268,    -1,   270,    -1,   267,    -1,   269,    -1,    -1,
      -1,   195,   196,   197,    -1,   379,    -1,    -1,    -1,    -1,
     204,    -1,   386,    -1,    -1,    -1,    -1,    -1,    -1,   291,
     292,    -1,   216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     404,    83,   309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   415,    -1,   417,   418,   419,    -1,    -1,   100,    -1,
      -1,   328,   324,    -1,    -1,   249,    -1,    -1,    -1,    -1,
      -1,   255,    -1,   257,    -1,    -1,   260,    -1,   262,   263,
     264,    -1,    -1,    -1,   268,    -1,   270,    -1,   355,    -1,
      -1,   353,   354,    -1,    -1,   459,    -1,    -1,    -1,    -1,
     464,    -1,    -1,    -1,    -1,   469,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   379,   385,    -1,
      -1,    -1,    -1,   487,   386,   309,    -1,   491,   492,   493,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   400,    -1,
      -1,   505,   404,    -1,   328,    -1,   510,    -1,   512,    -1,
      -1,    -1,    -1,   195,   196,   197,    -1,    -1,    -1,   421,
     427,    -1,   204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   355,   439,   440,   216,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    -1,   448,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   461,   457,    -1,    -1,    -1,   100,
      -1,   385,    -1,    -1,   471,    -1,   473,   249,   475,   476,
      -1,    -1,    -1,   255,    -1,   257,   483,    -1,   260,    -1,
     262,   263,   264,    -1,    -1,   487,   268,    -1,   270,    -1,
      -1,    -1,    -1,    -1,    -1,   497,    -1,   504,    -1,    -1,
      -1,   503,   509,   427,    -1,    -1,    -1,    -1,    -1,    -1,
     517,    -1,   519,    -1,    -1,   439,   440,    -1,   525,    -1,
      -1,    -1,    -1,   447,    -1,    -1,    -1,   309,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   328,   471,    -1,   473,
      -1,   475,   476,    -1,   195,   196,   197,    -1,    -1,   483,
      -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   355,    -1,   216,    -1,    -1,    -1,    -1,
     504,    -1,    -1,    83,    -1,   509,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   517,    -1,   519,    -1,    -1,    -1,    -1,
     100,   525,    -1,   385,    -1,    -1,    -1,    -1,   249,    -1,
      -1,    -1,    -1,    -1,   255,    -1,   257,    -1,    -1,   260,
      -1,   262,   263,   264,    -1,    -1,    -1,   268,    -1,   270,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   427,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   439,   440,    -1,
      -1,    -1,    -1,    -1,    -1,   447,    -1,    -1,   309,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   328,    -1,   471,
      83,   473,    -1,   475,   476,   195,   196,   197,    -1,    -1,
      -1,   483,    -1,    -1,   204,    -1,    -1,   100,    -1,    -1,
      -1,    -1,    -1,    -1,   355,    -1,   216,    -1,    -1,    -1,
      -1,    -1,   504,    -1,    -1,    -1,    -1,   509,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   517,    -1,   519,    -1,    -1,
      -1,    -1,    -1,   525,   385,    -1,    -1,    -1,    -1,   249,
      -1,    -1,    -1,    -1,    -1,   255,    -1,   257,    -1,    -1,
     260,    -1,   262,   263,   264,    -1,    -1,    -1,   268,    -1,
     270,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,   427,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,   439,   440,
      -1,    -1,   195,   196,   197,    -1,    -1,    -1,    -1,   309,
      -1,   204,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,
     461,    -1,    -1,   216,    -1,    -1,    -1,    -1,   328,    -1,
     471,    -1,   473,   100,   475,   476,    -1,    -1,    -1,    -1,
      -1,    -1,   483,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   355,   249,    -1,    -1,    -1,
      -1,    -1,   255,   504,   257,    -1,    -1,   260,   509,   262,
     263,   264,    -1,    83,    -1,   268,   517,   270,   519,    -1,
      -1,    -1,    -1,    -1,   525,   385,    -1,    -1,    -1,    -1,
     100,   195,   196,   197,    -1,    -1,    -1,    -1,    -1,    -1,
     204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   216,    -1,    -1,    -1,   309,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    -1,   427,   195,   196,
     197,    -1,    -1,    -1,    -1,   328,    -1,   204,    -1,   439,
     440,   100,    -1,    -1,    -1,   249,    -1,    -1,    -1,   216,
      -1,   255,    -1,   257,    -1,    -1,   260,    -1,   262,   263,
     264,    -1,   355,    -1,   268,    -1,   270,    -1,    -1,    -1,
      -1,   471,    83,   473,    -1,   475,   476,    -1,    -1,    -1,
      -1,    -1,   249,   483,    -1,   195,   196,   197,   255,   100,
     257,    -1,   385,   260,   204,   262,   263,   264,    -1,    -1,
      -1,   268,    -1,   270,   504,   309,   216,    -1,    -1,   509,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   517,    -1,   519,
      -1,    -1,    -1,    -1,   328,   525,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   427,   194,   195,   196,   197,    -1,
      -1,    -1,   309,    -1,    -1,   204,   439,   440,    -1,    -1,
     260,   355,   262,   263,   264,    -1,    -1,    -1,   268,    -1,
     270,   328,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   381,    -1,    -1,
     473,   385,   475,   194,   195,   196,   197,    -1,   355,    -1,
     483,    -1,    -1,   204,    -1,    -1,    -1,    -1,    -1,   309,
      -1,   260,    -1,   262,   263,   264,    -1,    -1,    -1,   268,
      -1,   504,    -1,    -1,    -1,    -1,   509,    -1,   385,    -1,
      -1,    -1,    -1,   427,   517,    -1,   519,    -1,    -1,    -1,
      -1,    -1,   525,    -1,    -1,   439,   440,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   355,    -1,    -1,    -1,   260,
     309,   262,   263,   264,    -1,    -1,    -1,   268,    -1,    -1,
     427,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   473,
      -1,    -1,   439,   440,    -1,   385,    -1,    -1,    -1,   483,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,    -1,
     504,    -1,    -1,    -1,    -1,   509,   473,    -1,    -1,    -1,
      -1,    -1,    -1,   517,    -1,   519,   483,   427,    -1,    -1,
      -1,   525,    -1,    -1,    -1,    -1,   385,    -1,    -1,   439,
     440,    -1,    -1,    -1,    -1,    -1,    -1,   504,    -1,    -1,
      -1,    -1,   509,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     517,    -1,   519,    -1,    -1,    -1,    -1,    -1,   525,    -1,
      -1,    -1,    -1,   473,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   483,   385,    -1,    -1,    -1,    -1,    -1,
     439,   440,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   452,   504,    -1,    -1,    -1,    -1,   509,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   517,    -1,   519,
      -1,    -1,    -1,    -1,    -1,   525,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   483,    -1,    -1,    -1,   439,   440,
      -1,    -1,    -1,    -1,    -1,    -1,   495,    -1,    -1,    -1,
      -1,   452,    -1,    -1,    -1,   504,    -1,    -1,    -1,    -1,
     509,    -1,    -1,    -1,    -1,   514,    -1,    -1,   517,   518,
     519,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   483,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   495,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   504,    -1,    -1,    -1,    -1,   509,    -1,
      -1,    -1,    -1,   514,    -1,    -1,   517,   518,   519
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   529,   530,     0,   217,   218,   531,   532,   533,   534,
     535,   536,   537,   543,   123,   123,   533,   155,   542,   556,
     557,   203,   349,   544,   547,   464,   464,   123,   103,   671,
     673,    85,   558,   559,   548,   545,   542,   542,   464,   123,
     345,   833,   836,   467,   674,   403,   230,   622,   623,   310,
     426,   560,   561,   565,   464,   464,   144,   538,   539,   540,
     140,   541,   464,   123,   859,   860,   403,   675,   464,   403,
     176,   624,   464,   464,   428,   583,   565,   561,   260,   350,
     549,   549,   260,   350,   550,   540,   550,    56,   510,   837,
       1,     3,     5,    10,    18,    51,    52,    61,    72,    75,
      89,   112,   120,   122,   154,   165,   170,   198,   205,   208,
     209,   219,   226,   228,   231,   273,   277,   279,   289,   317,
     330,   358,   359,   369,   382,   383,   389,   393,   402,   412,
     423,   432,   437,   438,   441,   443,   451,   464,   482,   489,
     494,   522,   861,   862,   878,   883,   887,   892,   910,   913,
     917,   921,   922,   923,   928,   942,   946,   949,   963,   967,
     970,   973,   977,   978,   982,   992,   995,  1013,  1015,  1018,
    1022,  1028,  1040,  1048,  1049,  1052,  1053,  1057,  1062,  1063,
    1071,  1087,  1097,  1106,  1111,  1120,  1124,  1126,  1129,  1132,
    1135,  1162,   861,   464,   175,   401,   672,   676,   677,   679,
     464,   464,   626,   566,   562,   464,    11,    59,    97,    99,
     101,   109,   166,   261,   307,   399,   444,   519,   584,   585,
     586,   587,   588,   594,   603,   605,   610,   613,   614,   616,
     617,   618,   619,   620,   621,    26,   551,   551,   464,   464,
     839,   838,   384,   845,     3,     5,    10,    18,    51,    52,
      61,    72,    75,    89,   112,   120,   122,   130,   132,   133,
     134,   135,   136,   137,   138,   139,   141,   142,   143,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   165,
     170,   198,   205,   208,   209,   219,   226,   228,   231,   273,
     277,   279,   289,   317,   330,   358,   369,   383,   389,   393,
     402,   412,   423,   432,   437,   438,   441,   443,   451,   464,
     482,   489,   494,   522,  1309,   863,   879,   884,   888,   893,
     911,   914,   918,   924,   929,   943,   947,   950,   964,   968,
     971,   974,   206,   384,   902,   966,   979,   983,   993,   996,
    1014,  1016,  1019,   408,  1023,  1029,  1041,  1050,  1054,  1058,
    1064,  1072,  1088,  1098,   260,   355,   395,   427,   525,  1110,
    1112,  1121,   344,  1125,  1127,   848,  1130,  1133,  1136,  1163,
     521,   707,   709,   710,     1,   519,  1234,   238,   406,   625,
     627,    57,    64,   272,   348,   405,   410,   519,   567,   568,
     569,   570,   571,   572,   573,   575,  1318,  1380,   563,   575,
       1,   519,  1248,  1248,   434,   415,  1351,   236,  1332,  1332,
    1332,  1248,   415,  1332,    58,  1319,   589,   378,   576,   586,
     464,   587,   222,   604,   260,   464,   546,    49,   840,   841,
     842,  1317,   840,   314,   519,   464,   314,   519,   864,   866,
    1271,  1272,  1275,     6,     9,    83,    95,   100,   195,   196,
     197,   204,   216,   249,   255,   257,   260,   262,   263,   264,
     268,   270,   275,   309,   328,   355,   385,   427,   439,   440,
     473,   483,   504,   509,   517,   525,   880,  1228,  1253,  1254,
    1271,  1282,  1283,  1284,  1285,  1286,  1287,  1288,   249,   471,
     475,   476,   885,  1223,  1224,  1225,  1226,  1227,  1228,  1257,
    1271,  1283,  1285,   260,   889,   890,  1239,  1240,  1241,  1275,
     275,   433,   435,   894,   895,   260,   912,  1262,  1271,   915,
    1234,     6,   919,  1229,  1230,  1251,  1273,  1274,  1275,  1283,
     467,   925,  1234,   260,   314,   930,   931,   932,   933,   935,
    1253,  1262,  1271,   944,  1254,   260,   948,   466,   477,   951,
     952,   953,  1211,  1212,  1213,   202,   329,   330,   348,   403,
     965,   969,  1250,  1251,   972,  1275,   459,   975,  1360,  1254,
    1210,  1211,   984,  1250,   519,   994,  1235,   997,   998,  1271,
    1282,  1285,  1089,  1269,  1270,  1275,    95,  1017,  1254,  1020,
    1254,   172,   229,   237,   323,  1024,  1025,   194,   260,   518,
    1030,  1034,  1035,  1036,  1239,  1263,  1271,  1275,  1285,  1364,
    1042,  1234,  1051,  1231,  1275,  1055,  1234,  1059,  1231,     9,
    1065,  1232,  1275,   155,   244,   275,  1073,  1076,  1077,  1080,
    1081,  1082,  1083,  1084,  1085,  1086,  1236,  1237,  1250,  1268,
    1270,  1275,  1089,  1099,  1234,  1107,  1113,  1114,  1115,  1254,
      95,  1122,  1253,  1128,  1235,   464,   519,   849,   850,   853,
     854,   859,  1131,  1271,  1134,  1234,  1137,  1271,  1164,  1231,
     403,   265,   768,   129,   413,   420,   711,   712,   714,   724,
     726,   728,  1296,   464,   678,   464,   294,   318,  1304,   278,
     397,   661,   662,   663,   664,   666,   410,   421,    64,  1332,
     464,   569,   464,   519,   568,    60,  1332,   564,  1364,   595,
    1332,  1332,  1332,  1243,  1275,    69,  1243,  1332,  1332,  1243,
     519,   606,   607,   608,  1249,   260,   313,   315,   590,   592,
     593,  1074,  1278,  1332,   464,   464,   519,   552,  1332,   841,
     421,   490,   843,   366,   512,   834,   222,   312,  1370,   132,
     877,   865,   199,   475,  1276,  1277,   312,  1342,  1284,  1271,
     475,   475,   475,  1290,  1272,  1283,  1285,  1370,  1370,   475,
     475,   475,   475,  1370,   475,  1290,   133,   882,   459,   881,
    1254,   460,   475,  1289,   475,   475,  1272,  1283,  1285,  1227,
    1271,  1223,  1227,    58,   471,   476,   463,   472,   171,   227,
    1299,   890,   459,  1370,   134,   909,   260,  1263,  1262,  1234,
     365,   488,   916,  1364,  1376,  1342,   135,   920,   161,   465,
    1230,  1368,   394,  1305,  1276,  1277,   926,  1234,   136,   927,
     360,  1348,   137,   941,   167,   300,  1177,  1179,  1181,   933,
    1252,  1253,   934,   499,   500,   501,   502,   138,   945,    49,
     232,   510,   896,   139,   962,    17,   516,   954,   955,   956,
     958,    12,    13,    14,    20,   161,   171,   210,   211,   250,
     251,   288,   294,   299,   307,   314,   319,   338,   461,   463,
     465,   468,   470,   471,   472,   475,   476,  1214,  1215,  1216,
    1217,  1218,  1219,  1220,  1254,   102,   966,  1251,  1238,   454,
    1358,   985,  1364,  1235,    93,   374,   449,   999,  1000,  1002,
    1003,  1091,   475,  1276,  1254,   459,   142,  1021,    49,  1025,
     414,  1026,  1035,   143,   464,  1031,  1033,   495,   514,   455,
     458,   452,   145,  1047,   289,   340,  1302,   199,  1165,   146,
    1056,  1348,   147,  1061,  1165,  1232,   148,  1070,   514,  1066,
    1260,  1271,  1283,   167,  1083,  1085,  1250,   459,  1237,   124,
     459,   496,  1075,    31,  1276,   149,  1105,   180,   241,   244,
    1101,   902,  1108,  1254,  1364,   150,  1119,   232,  1115,   113,
    1116,  1271,   151,  1123,   199,  1235,   403,   464,   464,   199,
     360,   362,  1349,   152,  1146,   113,  1138,   153,  1169,  1165,
     464,   403,   259,   770,   519,   716,   716,   716,   712,   464,
       1,   178,   715,   716,   519,   680,   318,  1248,   667,   360,
     423,   424,   665,     1,   464,   663,  1332,   410,  1278,   464,
    1332,   519,  1244,   464,   108,  1332,   216,   260,   270,   355,
     427,   473,   525,   611,   612,  1281,  1243,   260,   260,   481,
     607,    22,   236,  1249,  1333,  1074,   236,   434,  1344,  1332,
      97,  1248,   577,   464,    73,   173,   363,   469,   553,   554,
     555,  1332,   421,   318,   844,   110,   846,  1275,    30,   200,
     276,   867,   868,   869,   871,   874,  1315,  1364,    24,    25,
      66,    68,    70,   104,   105,   106,   155,   157,   164,   167,
     256,   258,   456,   507,   519,   870,  1237,  1367,  1221,  1223,
     475,  1277,   154,   348,  1258,  1272,   459,  1221,  1223,  1294,
    1221,  1295,   461,  1221,   519,   519,  1223,  1293,  1293,  1293,
    1256,  1271,  1283,  1285,  1292,   519,  1256,  1291,     6,  1229,
    1254,  1275,  1283,   206,  1284,  1223,  1256,  1221,   461,   227,
    1300,  1224,  1224,  1225,  1225,  1225,   384,   886,   347,   891,
    1241,   896,   916,   266,   291,   192,  1325,  1272,  1223,   276,
    1306,  1277,  1234,   235,   301,  1203,  1204,  1206,  1208,   856,
     857,   856,  1180,  1181,  1178,  1179,   498,   871,   874,   936,
     937,   938,  1364,  1177,  1177,  1177,  1177,  1254,  1229,  1254,
     897,   953,    21,   466,   477,   959,   960,  1212,   516,   956,
     957,   516,   856,  1360,   236,  1215,   115,   976,  1239,   130,
     856,   980,     9,    12,    15,    16,   281,   282,   307,   308,
     986,   990,   178,  1260,     9,    58,   180,   245,   481,  1006,
    1007,  1008,  1001,  1002,   125,   315,   518,  1093,  1343,  1379,
     459,  1250,  1229,  1254,  1026,  1364,  1233,  1234,   856,   170,
    1037,  1210,  1038,  1039,  1271,  1239,     8,    37,  1167,  1348,
    1267,  1271,  1282,  1285,   232,  1043,  1060,  1364,   131,  1067,
    1271,  1067,   459,   459,   459,  1074,   154,   466,   477,  1254,
      49,    38,    46,   215,   247,   269,   324,   386,   487,  1078,
    1079,  1332,  1100,  1364,  1254,   163,   293,  1271,  1317,   199,
    1229,  1254,   855,  1278,  1260,  1317,   232,  1141,  1166,  1167,
     708,   464,   403,   375,   772,   727,   729,   372,   464,   464,
     713,    86,    47,    63,   103,   243,   254,   360,   361,   375,
     377,   464,   512,   681,   682,   684,   688,   689,   692,   693,
     699,   702,   704,   705,  1332,   628,   467,  1323,    23,  1313,
     464,  1278,   261,   446,   508,   574,  1244,   276,    28,   127,
     216,   260,   270,   284,   355,   427,   430,   431,   525,   596,
     597,   598,   601,   612,   455,   615,  1364,   409,   260,   609,
    1279,  1344,   236,  1248,  1248,   591,   592,   202,   578,   579,
     580,   555,   348,  1347,    73,    32,   111,  1278,  1332,   519,
     464,   835,   525,  1264,  1268,  1278,  1332,   164,   167,   298,
     300,  1170,  1172,  1173,  1175,  1176,   869,    65,    67,   256,
     337,   872,   873,  1366,    32,    35,    38,    46,    92,   111,
     193,   201,   215,   247,   267,   269,   291,   292,   324,   353,
     354,   379,   386,   400,   404,   421,   448,   457,   487,   497,
     503,   875,   876,  1170,   524,   523,  1260,  1170,   241,   434,
     305,   280,    71,   407,   461,  1222,   462,  1223,   260,  1259,
    1272,  1271,  1222,   461,  1222,   461,   461,  1222,   461,   461,
     461,  1222,   461,  1222,   461,  1342,   303,   422,  1182,  1184,
    1186,  1276,  1277,  1229,   462,   461,   461,   459,  1301,   886,
    1251,   459,  1239,   901,   902,   388,   371,  1182,  1332,   856,
     856,  1207,  1208,  1205,  1206,   858,    97,    98,   342,   519,
     939,  1237,   937,    35,    38,    45,    46,    92,   162,   193,
     215,   269,   304,   324,   386,   400,   421,   487,   940,   206,
    1182,   206,   898,   899,   900,  1317,    17,   455,   961,   322,
     959,  1343,   856,   130,   141,   981,  1360,   374,   987,  1360,
     459,    49,  1007,  1009,  1260,     9,    58,   245,   481,  1004,
    1005,  1260,   125,    64,   410,  1094,  1365,    27,   116,   754,
     222,   320,  1328,  1250,  1182,   206,  1233,     9,   291,   358,
     660,   387,  1027,  1234,  1364,   143,  1032,     8,   199,  1043,
    1271,   131,   296,  1192,  1195,  1197,  1203,   266,   291,   856,
     516,   516,  1068,  1069,  1260,   313,  1259,  1254,  1074,  1074,
    1074,  1074,  1074,  1074,  1074,  1074,  1079,   294,   299,  1102,
    1103,  1104,  1216,  1303,  1203,   248,   421,  1378,   434,  1356,
    1356,  1118,  1364,   421,  1117,  1254,  1271,  1182,   206,   464,
     459,     9,  1139,  1140,  1297,  1142,  1271,  1118,  1142,  1060,
       7,  1310,   709,   769,   464,   403,   398,   817,   512,   762,
     736,   737,  1332,  1275,   731,   717,  1332,    87,  1320,  1332,
     360,   362,  1375,  1375,  1332,  1320,  1332,   276,  1339,  1332,
      22,  1312,   312,   706,  1248,   173,   207,   629,   450,  1357,
    1325,    58,   520,  1374,   598,    17,   455,  1281,   334,  1279,
    1248,     9,   204,   519,   582,     1,   464,   580,    32,  1278,
     847,   848,    47,  1174,  1175,   856,  1171,  1172,   856,   305,
    1340,  1340,  1340,  1332,  1332,   876,    57,   421,   124,   496,
    1332,     8,  1311,  1170,  1223,   461,  1223,  1305,   447,  1289,
     447,  1289,  1243,  1289,  1289,  1289,  1256,   245,   481,  1289,
    1272,   856,   856,  1185,  1186,  1183,  1184,  1277,  1182,   461,
    1223,  1289,  1289,  1261,  1271,  1282,   167,   300,   474,   904,
     906,   908,     6,   232,   295,   314,   473,   903,  1331,    34,
     285,   286,   287,   352,   479,   480,   484,  1307,   859,  1332,
     256,   398,   131,   158,   160,   825,   826,  1322,  1332,   124,
     496,  1332,  1229,  1230,  1229,  1230,   899,   314,   843,    88,
     366,   512,   960,  1211,   856,  1271,   856,   512,   988,   989,
     990,   991,  1358,   512,  1261,  1260,    49,     8,    37,  1010,
    1011,  1012,  1005,   192,  1010,   410,  1090,  1332,   241,  1334,
     320,  1229,  1027,   322,  1345,  1345,   316,   266,   291,  1039,
    1254,   221,  1044,  1364,   856,   856,  1196,  1197,  1195,   266,
    1211,  1210,  1068,  1216,  1271,  1217,  1218,  1219,  1220,  1223,
    1109,  1254,  1109,   302,   474,  1187,  1189,  1191,   336,  1305,
    1229,   851,  1261,   319,  1260,   114,  1143,   449,  1145,   159,
     297,  1168,  1198,  1200,  1202,  1204,   327,  1237,  1264,   709,
     771,   464,   403,  1333,   762,   207,   455,   725,    21,    36,
      39,    40,    41,    42,    43,    44,    45,    74,    76,    77,
      78,    79,    80,    81,    82,   120,   182,   183,   184,   185,
     186,   189,   190,   223,   239,   281,   311,   325,   333,   336,
     351,   364,   415,   417,   418,   419,   445,   491,   492,   493,
     505,   732,   733,   734,   737,   738,   739,   740,   741,   742,
     743,   746,   758,   759,   760,   761,   762,   767,  1332,  1353,
      26,   199,   730,  1314,   207,  1278,   519,   643,  1332,  1312,
     519,  1245,  1246,   314,   429,  1371,   260,  1243,  1247,  1278,
     514,  1332,   177,   217,   519,   690,  1248,     4,    19,    29,
     224,   256,   321,   326,   360,   368,   380,   414,   423,   464,
     467,   630,   631,   638,   640,   642,   644,   645,   646,   647,
     650,   651,   652,   653,   654,   656,   657,   659,  1348,  1365,
    1320,  1233,   599,   601,   260,   233,    26,   581,   204,   233,
     464,   848,  1264,  1264,  1264,  1264,  1264,  1332,  1332,  1209,
    1266,  1268,  1278,  1209,  1264,   260,  1265,  1268,  1280,   461,
    1182,   461,   856,   856,   856,   907,   908,   905,   906,  1342,
    1271,  1264,  1342,   256,   398,  1264,  1209,  1209,  1264,  1182,
     370,  1182,   370,  1254,   989,   103,  1321,  1360,  1010,  1010,
    1261,   469,  1330,  1330,  1012,  1011,   229,   510,  1095,  1243,
    1092,  1182,   388,    49,   266,   241,  1045,   220,   240,   266,
     291,   515,   856,   856,   856,   856,  1190,  1191,  1188,  1189,
    1332,  1182,  1182,   506,   852,  1147,  1140,   222,  1327,    96,
    1144,  1327,  1187,   856,   856,  1201,  1202,  1199,  1200,   256,
     258,  1336,   709,   773,   464,   764,   765,  1282,  1275,   248,
     307,   416,   490,  1352,   490,  1352,   490,  1352,   490,  1352,
     490,  1352,   516,  1362,   392,  1350,   126,  1278,  1272,   236,
     246,   392,  1335,  1332,   173,   245,   481,   519,    50,   248,
     249,   718,  1282,   459,   687,   192,   703,  1246,   258,  1338,
     459,  1319,  1327,   174,   181,   396,   486,   511,   513,   700,
     701,  1332,  1332,  1339,  1348,   459,   510,  1361,   411,  1332,
    1318,   114,  1334,  1334,   291,   658,  1278,  1364,   434,   266,
      39,  1316,  1332,   668,   669,  1234,   600,   601,   260,   131,
    1262,  1264,   256,   258,  1377,  1271,  1230,  1230,    49,   111,
    1010,  1254,  1254,   345,  1233,   206,   323,  1096,  1275,  1254,
    1332,  1046,  1193,  1195,  1197,  1203,   266,   266,   266,  1271,
    1148,   464,  1271,  1327,  1271,   774,   818,   763,   765,   455,
     525,    53,   750,   459,   747,   740,    26,   735,   409,  1308,
    1308,  1342,     1,    40,    41,    42,    43,    44,   182,   183,
     184,   185,   186,   187,   188,   336,   351,   719,   720,   721,
     722,   723,   741,   742,  1272,   719,  1278,    58,   362,   683,
    1242,  1243,   694,  1278,   421,  1354,   260,   691,  1275,   691,
    1332,  1334,   126,   173,   635,   368,   651,  1332,  1332,  1332,
    1332,  1313,   660,  1332,  1339,   411,   643,   669,   337,   670,
      17,   110,  1182,  1182,  1254,  1332,  1233,   345,   495,  1271,
    1196,  1194,  1195,    30,   128,   168,   207,  1149,  1150,  1151,
    1153,  1157,  1159,  1160,  1161,  1315,  1325,  1271,   357,   775,
     714,   728,   819,   820,   821,   516,   766,  1363,  1282,  1327,
     199,   748,  1278,   458,  1359,   260,  1318,   719,   464,  1243,
      48,   478,   695,   696,   697,   698,  1364,  1319,   199,   686,
    1326,   126,   356,   411,   639,  1332,   118,   119,   120,   242,
     256,   341,   342,   343,   356,   450,   632,   633,   634,  1247,
     430,   655,  1243,  1243,  1243,  1332,  1278,   601,   464,  1034,
    1332,  1210,    37,  1311,   348,   108,  1235,     1,   715,   821,
     464,   412,   466,   519,  1278,   747,   115,   749,  1247,  1247,
     191,   687,  1278,   655,   260,   637,  1275,   637,     7,   637,
     637,   260,   636,  1275,   425,   465,    33,   169,   271,   648,
    1034,   376,   429,  1355,   131,   432,  1158,  1343,   776,   464,
     822,   464,   459,  1332,   227,   751,  1343,   752,   753,  1315,
    1319,  1298,  1379,  1323,  1332,  1242,   518,   649,   649,  1271,
     163,   167,  1369,     9,  1154,  1155,  1240,     1,   777,   823,
    1282,   752,  1243,   224,   755,   754,  1247,   115,   685,   443,
     641,  1242,   266,   393,   345,  1346,   312,   346,   367,  1156,
    1155,   464,    62,    90,    91,   327,   464,   778,   779,   782,
    1332,  1388,    32,    35,    38,    45,    46,   162,   193,   199,
     201,   212,   215,   247,   256,   269,   311,   324,   353,   379,
     386,   404,   459,   469,   487,   510,   738,   739,   743,   758,
     760,   762,   824,   831,   832,  1332,  1366,   755,  1317,  1334,
    1343,   516,   315,  1343,   312,  1275,  1332,  1332,  1312,   252,
     253,  1337,   791,   207,   179,   780,  1324,  1332,   256,   398,
     825,   826,  1332,  1267,  1340,  1278,    57,  1271,  1271,   207,
    1340,   519,   756,   757,  1332,  1243,     9,   427,   525,   602,
     278,   360,   362,  1373,   172,   229,   237,   323,  1152,  1233,
    1262,  1332,  1312,   783,  1280,   714,   792,   781,  1271,  1264,
    1264,  1332,  1359,  1332,  1332,   757,  1242,  1284,  1373,   784,
     256,   258,  1372,   715,   716,  1271,   274,   335,   471,   476,
     827,   828,   829,  1262,   827,   828,   830,   180,   191,   214,
     244,   785,   786,   787,   788,   789,   790,  1280,   793,  1264,
    1264,   107,   117,  1381,  1332,  1332,    55,    90,  1381,  1382,
    1367,   794,  1332,  1280,  1280,   214,  1332,  1332,   213,   256,
     258,   289,   311,   339,   425,   442,   464,   485,   505,   514,
     738,   743,   744,   758,   760,   762,   795,   796,   800,   801,
     804,   805,   806,   807,   808,   809,   814,   815,   816,  1366,
    1367,  1280,  1280,  1280,   225,  1329,   305,   306,  1341,  1312,
     213,  1278,   516,  1332,  1342,  1332,  1332,  1271,   290,   335,
     810,   811,  1280,   335,   812,   813,  1280,  1341,  1312,  1333,
    1332,   747,  1210,  1257,  1255,  1257,    54,    90,   327,   331,
     332,   375,   390,   391,   797,  1381,  1382,  1383,  1384,  1385,
    1386,  1387,   120,   199,  1278,   811,  1278,   813,  1333,   811,
    1359,  1305,   381,   802,  1257,   191,   191,   214,   191,   214,
     179,   798,  1271,   798,  1257,   749,  1343,   319,   799,   799,
      49,   436,   745,   179,   803,  1271,   327,  1257,  1278
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
#line 2040 "parser.y"
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
#line 2052 "parser.y"
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
#line 2088 "parser.y"
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
#line 2139 "parser.y"
    {
	first_nested_program = 0;
	clean_up_program ((yyvsp[(2) - (3)]), CB_PROGRAM_TYPE);
  }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 2147 "parser.y"
    {
	  clean_up_program ((yyvsp[(2) - (3)]), CB_FUNCTION_TYPE);
  }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 2170 "parser.y"
    {
	cobc_in_id = 1;
  }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 2174 "parser.y"
    {
	if (set_up_program ((yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]), CB_PROGRAM_TYPE)) {
		YYABORT;
	}
  }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 2180 "parser.y"
    {
	cobc_cs_check = 0;
	cobc_in_id = 0;
  }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 2188 "parser.y"
    {
	cobc_in_id = 1;
  }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 2192 "parser.y"
    {
	if (set_up_program ((yyvsp[(4) - (6)]), (yyvsp[(5) - (6)]), CB_FUNCTION_TYPE)) {
		YYABORT;
	}
	set_up_func_prototype ((yyvsp[(4) - (6)]), (yyvsp[(5) - (6)]), 1);
	cobc_cs_check = 0;
	cobc_in_id = 0;
  }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 2204 "parser.y"
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
#line 2223 "parser.y"
    { (yyval) = NULL; }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 2224 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 2233 "parser.y"
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
#line 2242 "parser.y"
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
#line 2252 "parser.y"
    {
	CB_PENDING (_("CALL prototypes"));
  }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 2264 "parser.y"
    {
	current_program->flag_initial = 1;
  }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 2268 "parser.y"
    {
	current_program->flag_recursive = 1;
  }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 2284 "parser.y"
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 2301 "parser.y"
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
#line 2315 "parser.y"
    {
	if (warningopt && (check_comp_duplicate & SYN_CLAUSE_2)) {
		cb_warning (_("phrases in non-standard order"));
	}
  }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 2327 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("SOURCE-COMPUTER", SYN_CLAUSE_1, &check_comp_duplicate);
  }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 2342 "parser.y"
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
#line 2355 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2, &check_comp_duplicate);
  }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 2384 "parser.y"
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 2392 "parser.y"
    {
	current_program->collating_sequence = (yyvsp[(3) - (3)]);
  }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 2399 "parser.y"
    {
	/* Ignore */
  }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 2406 "parser.y"
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
#line 2417 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 2421 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 2425 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 2429 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 2443 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 2448 "parser.y"
    {
	cobc_in_repository = 0;
  }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 2456 "parser.y"
    {
	yyerrok;
  }
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 2468 "parser.y"
    {
	functions_are_all = 1;
  }
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 2472 "parser.y"
    {
	if ((yyvsp[(2) - (3)]) != cb_error_node) {
		set_up_func_prototype ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]), 0);
	}
  }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 2482 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 2486 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 2493 "parser.y"
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[(1) - (1)]));
  }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 2498 "parser.y"
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[(2) - (2)]));
  }
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 2509 "parser.y"
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

  case 119:
/* Line 1792 of yacc.c  */
#line 2554 "parser.y"
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

  case 121:
/* Line 1792 of yacc.c  */
#line 2582 "parser.y"
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

  case 122:
/* Line 1792 of yacc.c  */
#line 2592 "parser.y"
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

  case 123:
/* Line 1792 of yacc.c  */
#line 2605 "parser.y"
    {
	if (save_tree && CB_VALID_TREE ((yyvsp[(2) - (3)]))) {
		cb_define ((yyvsp[(2) - (3)]), save_tree);
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
				(yyvsp[(2) - (3)]), save_tree);
	}
  }
    break;

  case 127:
/* Line 1792 of yacc.c  */
#line 2621 "parser.y"
    {
	  check_on_off_duplicate = 0;
  }
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 2628 "parser.y"
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

  case 129:
/* Line 1792 of yacc.c  */
#line 2643 "parser.y"
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

  case 130:
/* Line 1792 of yacc.c  */
#line 2663 "parser.y"
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

  case 131:
/* Line 1792 of yacc.c  */
#line 2676 "parser.y"
    {
	if ((yyvsp[(3) - (5)])) {
		current_program->alphabet_name_list =
			cb_list_add (current_program->alphabet_name_list, (yyvsp[(3) - (5)]));
	}
	cobc_cs_check = 0;
  }
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 2687 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 2693 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 2699 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 2705 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 2711 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 2717 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 138:
/* Line 1792 of yacc.c  */
#line 2727 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 2731 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 2738 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 2742 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 2746 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (2)]));
  }
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 2750 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (4)]);
  }
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 2757 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (1)]), (yyvsp[(1) - (1)]));
  }
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 2761 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 2767 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 147:
/* Line 1792 of yacc.c  */
#line 2768 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 148:
/* Line 1792 of yacc.c  */
#line 2769 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 2770 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 150:
/* Line 1792 of yacc.c  */
#line 2771 "parser.y"
    { (yyval) = cb_norm_high; }
    break;

  case 151:
/* Line 1792 of yacc.c  */
#line 2772 "parser.y"
    { (yyval) = cb_norm_low; }
    break;

  case 152:
/* Line 1792 of yacc.c  */
#line 2776 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 2777 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 2785 "parser.y"
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

  case 155:
/* Line 1792 of yacc.c  */
#line 2799 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 156:
/* Line 1792 of yacc.c  */
#line 2803 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 157:
/* Line 1792 of yacc.c  */
#line 2811 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 158:
/* Line 1792 of yacc.c  */
#line 2818 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 159:
/* Line 1792 of yacc.c  */
#line 2822 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		(yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	} else {
		(yyval) = (yyvsp[(1) - (2)]);
	}
  }
    break;

  case 160:
/* Line 1792 of yacc.c  */
#line 2833 "parser.y"
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

  case 161:
/* Line 1792 of yacc.c  */
#line 2853 "parser.y"
    {
	if ((yyvsp[(1) - (1)]) == NULL) {
		(yyval) = NULL;
	} else {
		(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 2861 "parser.y"
    {
	if ((yyvsp[(2) - (2)]) == NULL) {
		(yyval) = (yyvsp[(1) - (2)]);
	} else {
		(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
  }
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 2871 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 164:
/* Line 1792 of yacc.c  */
#line 2872 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 165:
/* Line 1792 of yacc.c  */
#line 2879 "parser.y"
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

  case 166:
/* Line 1792 of yacc.c  */
#line 2899 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 167:
/* Line 1792 of yacc.c  */
#line 2900 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 168:
/* Line 1792 of yacc.c  */
#line 2905 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 169:
/* Line 1792 of yacc.c  */
#line 2909 "parser.y"
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

  case 170:
/* Line 1792 of yacc.c  */
#line 2930 "parser.y"
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

  case 171:
/* Line 1792 of yacc.c  */
#line 2953 "parser.y"
    {
	unsigned char	*s = CB_LITERAL ((yyvsp[(4) - (5)]))->data;
	unsigned int	error_ind = 0;

	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
		error_ind = 1;
	}
	check_repeated ("CURRENCY", SYN_CLAUSE_1, &check_duplicate);
	if ((yyvsp[(5) - (5)])) {
		CB_PENDING ("PICTURE SYMBOL");
	}
	if (CB_LITERAL ((yyvsp[(4) - (5)]))->size != 1) {
		cb_error_x ((yyvsp[(4) - (5)]), _("invalid currency sign '%s'"), (char *)s);
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
		cb_error_x ((yyvsp[(4) - (5)]), _("invalid currency sign '%s'"), (char *)s);
		break;
	default:
		if (!error_ind) {
			current_program->currency_symbol = s[0];
		}
		break;
	}
  }
    break;

  case 172:
/* Line 1792 of yacc.c  */
#line 3034 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 173:
/* Line 1792 of yacc.c  */
#line 3038 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 174:
/* Line 1792 of yacc.c  */
#line 3047 "parser.y"
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

  case 175:
/* Line 1792 of yacc.c  */
#line 3066 "parser.y"
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

  case 176:
/* Line 1792 of yacc.c  */
#line 3082 "parser.y"
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

  case 177:
/* Line 1792 of yacc.c  */
#line 3100 "parser.y"
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

  case 178:
/* Line 1792 of yacc.c  */
#line 3118 "parser.y"
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

  case 179:
/* Line 1792 of yacc.c  */
#line 3135 "parser.y"
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

  case 180:
/* Line 1792 of yacc.c  */
#line 3156 "parser.y"
    {
	cb_validate_program_environment (current_program);
  }
    break;

  case 182:
/* Line 1792 of yacc.c  */
#line 3163 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
    break;

  case 184:
/* Line 1792 of yacc.c  */
#line 3171 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
    break;

  case 186:
/* Line 1792 of yacc.c  */
#line 3180 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  }
    break;

  case 189:
/* Line 1792 of yacc.c  */
#line 3195 "parser.y"
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

  case 190:
/* Line 1792 of yacc.c  */
#line 3217 "parser.y"
    {
	if (CB_VALID_TREE ((yyvsp[(3) - (6)]))) {
		validate_file (current_file, (yyvsp[(3) - (6)]));
	}
  }
    break;

  case 206:
/* Line 1792 of yacc.c  */
#line 3249 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
  }
    break;

  case 207:
/* Line 1792 of yacc.c  */
#line 3255 "parser.y"
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

  case 208:
/* Line 1792 of yacc.c  */
#line 3265 "parser.y"
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

  case 209:
/* Line 1792 of yacc.c  */
#line 3278 "parser.y"
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

  case 210:
/* Line 1792 of yacc.c  */
#line 3291 "parser.y"
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

  case 211:
/* Line 1792 of yacc.c  */
#line 3317 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 212:
/* Line 1792 of yacc.c  */
#line 3318 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 213:
/* Line 1792 of yacc.c  */
#line 3319 "parser.y"
    { (yyval) = cb_int4; }
    break;

  case 219:
/* Line 1792 of yacc.c  */
#line 3331 "parser.y"
    {
	current_file->flag_line_adv = 1;
  }
    break;

  case 221:
/* Line 1792 of yacc.c  */
#line 3338 "parser.y"
    {
	current_file->flag_ext_assign = 1;
  }
    break;

  case 225:
/* Line 1792 of yacc.c  */
#line 3351 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 228:
/* Line 1792 of yacc.c  */
#line 3363 "parser.y"
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2, &check_duplicate);
  }
    break;

  case 229:
/* Line 1792 of yacc.c  */
#line 3370 "parser.y"
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
    break;

  case 230:
/* Line 1792 of yacc.c  */
#line 3371 "parser.y"
    { current_file->access_mode = COB_ACCESS_DYNAMIC; }
    break;

  case 231:
/* Line 1792 of yacc.c  */
#line 3372 "parser.y"
    { current_file->access_mode = COB_ACCESS_RANDOM; }
    break;

  case 232:
/* Line 1792 of yacc.c  */
#line 3380 "parser.y"
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

  case 233:
/* Line 1792 of yacc.c  */
#line 3403 "parser.y"
    { }
    break;

  case 234:
/* Line 1792 of yacc.c  */
#line 3406 "parser.y"
    {
	CB_PENDING ("SUPPRESS WHEN ALL");
  }
    break;

  case 235:
/* Line 1792 of yacc.c  */
#line 3411 "parser.y"
    {
	CB_PENDING ("SUPPRESS WHEN SPACE/ZERO");
  }
    break;

  case 236:
/* Line 1792 of yacc.c  */
#line 3421 "parser.y"
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3, &check_duplicate);
	CB_PENDING ("COLLATING SEQUENCE");
  }
    break;

  case 237:
/* Line 1792 of yacc.c  */
#line 3429 "parser.y"
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

  case 238:
/* Line 1792 of yacc.c  */
#line 3444 "parser.y"
    {
	check_repeated ("STATUS", SYN_CLAUSE_4, &check_duplicate);
	current_file->file_status = (yyvsp[(4) - (4)]);
  }
    break;

  case 242:
/* Line 1792 of yacc.c  */
#line 3459 "parser.y"
    {
	check_repeated ("LOCK", SYN_CLAUSE_5, &check_duplicate);
  }
    break;

  case 244:
/* Line 1792 of yacc.c  */
#line 3467 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  }
    break;

  case 245:
/* Line 1792 of yacc.c  */
#line 3472 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  }
    break;

  case 246:
/* Line 1792 of yacc.c  */
#line 3477 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  }
    break;

  case 249:
/* Line 1792 of yacc.c  */
#line 3486 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
    break;

  case 250:
/* Line 1792 of yacc.c  */
#line 3490 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
	CB_PENDING ("WITH ROLLBACK");
  }
    break;

  case 253:
/* Line 1792 of yacc.c  */
#line 3506 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_INDEXED;
  }
    break;

  case 254:
/* Line 1792 of yacc.c  */
#line 3511 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
    break;

  case 255:
/* Line 1792 of yacc.c  */
#line 3516 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_RELATIVE;
  }
    break;

  case 256:
/* Line 1792 of yacc.c  */
#line 3521 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
    break;

  case 257:
/* Line 1792 of yacc.c  */
#line 3532 "parser.y"
    {
	check_repeated ("PADDING", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
    break;

  case 258:
/* Line 1792 of yacc.c  */
#line 3543 "parser.y"
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8, &check_duplicate);
  }
    break;

  case 259:
/* Line 1792 of yacc.c  */
#line 3553 "parser.y"
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9, &check_duplicate);
	current_file->key = (yyvsp[(4) - (4)]);
  }
    break;

  case 260:
/* Line 1792 of yacc.c  */
#line 3560 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 261:
/* Line 1792 of yacc.c  */
#line 3561 "parser.y"
    { CB_PENDING ("SPLIT KEYS"); }
    break;

  case 262:
/* Line 1792 of yacc.c  */
#line 3562 "parser.y"
    { CB_PENDING ("SPLIT KEYS"); }
    break;

  case 263:
/* Line 1792 of yacc.c  */
#line 3569 "parser.y"
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10, &check_duplicate);
	current_file->key = (yyvsp[(4) - (4)]);
  }
    break;

  case 264:
/* Line 1792 of yacc.c  */
#line 3580 "parser.y"
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11, &check_duplicate);
  }
    break;

  case 267:
/* Line 1792 of yacc.c  */
#line 3594 "parser.y"
    {
	check_repeated ("SHARING", SYN_CLAUSE_12, &check_duplicate);
	current_file->sharing = (yyvsp[(3) - (3)]);
  }
    break;

  case 268:
/* Line 1792 of yacc.c  */
#line 3601 "parser.y"
    { (yyval) = NULL; }
    break;

  case 269:
/* Line 1792 of yacc.c  */
#line 3602 "parser.y"
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
    break;

  case 270:
/* Line 1792 of yacc.c  */
#line 3603 "parser.y"
    { (yyval) = NULL; }
    break;

  case 273:
/* Line 1792 of yacc.c  */
#line 3612 "parser.y"
    {
	yyerrok;
  }
    break;

  case 278:
/* Line 1792 of yacc.c  */
#line 3631 "parser.y"
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
    break;

  case 279:
/* Line 1792 of yacc.c  */
#line 3658 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 280:
/* Line 1792 of yacc.c  */
#line 3659 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 281:
/* Line 1792 of yacc.c  */
#line 3660 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 282:
/* Line 1792 of yacc.c  */
#line 3661 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 283:
/* Line 1792 of yacc.c  */
#line 3668 "parser.y"
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
    break;

  case 284:
/* Line 1792 of yacc.c  */
#line 3673 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	cb_verify (cb_multiple_file_tape_clause, "MULTIPLE FILE TAPE");
	cobc_cs_check = 0;
  }
    break;

  case 290:
/* Line 1792 of yacc.c  */
#line 3702 "parser.y"
    {
	current_storage = CB_STORAGE_WORKING;
  }
    break;

  case 291:
/* Line 1792 of yacc.c  */
#line 3710 "parser.y"
    {
	cb_validate_program_data (current_program);
  }
    break;

  case 293:
/* Line 1792 of yacc.c  */
#line 3717 "parser.y"
    {
	header_check |= COBC_HD_DATA_DIVISION;
  }
    break;

  case 295:
/* Line 1792 of yacc.c  */
#line 3726 "parser.y"
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
    break;

  case 298:
/* Line 1792 of yacc.c  */
#line 3740 "parser.y"
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

  case 299:
/* Line 1792 of yacc.c  */
#line 3759 "parser.y"
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

  case 301:
/* Line 1792 of yacc.c  */
#line 3776 "parser.y"
    {
	yyerrok;
  }
    break;

  case 302:
/* Line 1792 of yacc.c  */
#line 3783 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 303:
/* Line 1792 of yacc.c  */
#line 3787 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 306:
/* Line 1792 of yacc.c  */
#line 3798 "parser.y"
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

  case 307:
/* Line 1792 of yacc.c  */
#line 3808 "parser.y"
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

  case 317:
/* Line 1792 of yacc.c  */
#line 3838 "parser.y"
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3, &check_duplicate);
	/* ignore */
  }
    break;

  case 321:
/* Line 1792 of yacc.c  */
#line 3851 "parser.y"
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

  case 322:
/* Line 1792 of yacc.c  */
#line 3871 "parser.y"
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

  case 323:
/* Line 1792 of yacc.c  */
#line 3906 "parser.y"
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

  case 325:
/* Line 1792 of yacc.c  */
#line 3937 "parser.y"
    {
	current_file->record_depending = (yyvsp[(3) - (3)]);
  }
    break;

  case 326:
/* Line 1792 of yacc.c  */
#line 3943 "parser.y"
    { (yyval) = NULL; }
    break;

  case 327:
/* Line 1792 of yacc.c  */
#line 3944 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 328:
/* Line 1792 of yacc.c  */
#line 3948 "parser.y"
    { (yyval) = NULL; }
    break;

  case 329:
/* Line 1792 of yacc.c  */
#line 3949 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 330:
/* Line 1792 of yacc.c  */
#line 3957 "parser.y"
    {
	check_repeated ("LABEL", SYN_CLAUSE_5, &check_duplicate);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
    break;

  case 331:
/* Line 1792 of yacc.c  */
#line 3968 "parser.y"
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
    break;

  case 332:
/* Line 1792 of yacc.c  */
#line 3973 "parser.y"
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
	if (!current_file->assign) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
	}
  }
    break;

  case 337:
/* Line 1792 of yacc.c  */
#line 3996 "parser.y"
    {
	check_repeated ("DATA", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
    break;

  case 338:
/* Line 1792 of yacc.c  */
#line 4008 "parser.y"
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

  case 344:
/* Line 1792 of yacc.c  */
#line 4036 "parser.y"
    {
	current_file->latfoot = (yyvsp[(4) - (4)]);
  }
    break;

  case 345:
/* Line 1792 of yacc.c  */
#line 4043 "parser.y"
    {
	current_file->lattop = (yyvsp[(2) - (2)]);
  }
    break;

  case 346:
/* Line 1792 of yacc.c  */
#line 4050 "parser.y"
    {
	current_file->latbot = (yyvsp[(2) - (2)]);
  }
    break;

  case 347:
/* Line 1792 of yacc.c  */
#line 4059 "parser.y"
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9, &check_duplicate);
	/* ignore */
  }
    break;

  case 352:
/* Line 1792 of yacc.c  */
#line 4072 "parser.y"
    {
	if (current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("RECORDING MODE U or S can only be used with RECORD SEQUENTIAL files"));
	}
  }
    break;

  case 355:
/* Line 1792 of yacc.c  */
#line 4088 "parser.y"
    {
	struct cb_alphabet_name	*al;

	check_repeated ("CODE SET", SYN_CLAUSE_10, &check_duplicate);

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

	if (current_file->organization != COB_ORG_LINE_SEQUENTIAL &&
	    current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("CODE-SET clause invalid for file type"));
	}

	if (warningopt) {
		CB_PENDING ("CODE-SET");
	}
  }
    break;

  case 357:
/* Line 1792 of yacc.c  */
#line 4124 "parser.y"
    {
	  if (warningopt) {
		  CB_PENDING ("FOR sub-records");
	  }

	  current_file->code_set_items = CB_LIST ((yyvsp[(2) - (2)]));
  }
    break;

  case 358:
/* Line 1792 of yacc.c  */
#line 4137 "parser.y"
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

  case 361:
/* Line 1792 of yacc.c  */
#line 4157 "parser.y"
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

  case 362:
/* Line 1792 of yacc.c  */
#line 4167 "parser.y"
    {
	current_report = build_report ((yyvsp[(2) - (2)]));
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
    break;

  case 364:
/* Line 1792 of yacc.c  */
#line 4182 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
    break;

  case 365:
/* Line 1792 of yacc.c  */
#line 4188 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[(5) - (5)])));
	}
  }
    break;

  case 366:
/* Line 1792 of yacc.c  */
#line 4197 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 367:
/* Line 1792 of yacc.c  */
#line 4200 "parser.y"
    {
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
    break;

  case 368:
/* Line 1792 of yacc.c  */
#line 4206 "parser.y"
    {
	struct cb_field *p;

	for (p = description_field; p; p = p->sister) {
		cb_validate_field (p);
	}
	(yyval) = CB_TREE (description_field);
  }
    break;

  case 374:
/* Line 1792 of yacc.c  */
#line 4226 "parser.y"
    {
	if (set_current_field ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]))) {
		YYERROR;
	}
  }
    break;

  case 375:
/* Line 1792 of yacc.c  */
#line 4232 "parser.y"
    {
	if (!qualifier) {
		current_field->flag_filler = 1;
	}
	if (!description_field) {
		description_field = current_field;
	}
  }
    break;

  case 376:
/* Line 1792 of yacc.c  */
#line 4241 "parser.y"
    {
	/* Free tree assocated with level number */
	cobc_parse_free ((yyvsp[(1) - (3)]));
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
    break;

  case 377:
/* Line 1792 of yacc.c  */
#line 4254 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 378:
/* Line 1792 of yacc.c  */
#line 4261 "parser.y"
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
    break;

  case 379:
/* Line 1792 of yacc.c  */
#line 4267 "parser.y"
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
    break;

  case 381:
/* Line 1792 of yacc.c  */
#line 4277 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	qualifier = (yyvsp[(1) - (1)]);
	non_const_word = 0;
  }
    break;

  case 382:
/* Line 1792 of yacc.c  */
#line 4286 "parser.y"
    {
	(yyval)= NULL;
  }
    break;

  case 383:
/* Line 1792 of yacc.c  */
#line 4290 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
		(yyval)= NULL;
	} else {
		(yyval) = cb_null;
	}
  }
    break;

  case 384:
/* Line 1792 of yacc.c  */
#line 4301 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 385:
/* Line 1792 of yacc.c  */
#line 4302 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(2) - (2)])); }
    break;

  case 386:
/* Line 1792 of yacc.c  */
#line 4303 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(2) - (2)])); }
    break;

  case 387:
/* Line 1792 of yacc.c  */
#line 4304 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(3) - (3)])); }
    break;

  case 388:
/* Line 1792 of yacc.c  */
#line 4309 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 389:
/* Line 1792 of yacc.c  */
#line 4313 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 390:
/* Line 1792 of yacc.c  */
#line 4317 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 391:
/* Line 1792 of yacc.c  */
#line 4321 "parser.y"
    {
	(yyval) = cb_int4;
  }
    break;

  case 392:
/* Line 1792 of yacc.c  */
#line 4325 "parser.y"
    {
	(yyval) = cb_int (8);
  }
    break;

  case 393:
/* Line 1792 of yacc.c  */
#line 4329 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(long));
  }
    break;

  case 394:
/* Line 1792 of yacc.c  */
#line 4333 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(void *));
  }
    break;

  case 395:
/* Line 1792 of yacc.c  */
#line 4337 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(float));
  }
    break;

  case 396:
/* Line 1792 of yacc.c  */
#line 4341 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(double));
  }
    break;

  case 397:
/* Line 1792 of yacc.c  */
#line 4345 "parser.y"
    {
	(yyval) = cb_int (4);
  }
    break;

  case 398:
/* Line 1792 of yacc.c  */
#line 4349 "parser.y"
    {
	(yyval) = cb_int (8);
  }
    break;

  case 399:
/* Line 1792 of yacc.c  */
#line 4353 "parser.y"
    {
	(yyval) = cb_int (16);
  }
    break;

  case 400:
/* Line 1792 of yacc.c  */
#line 4357 "parser.y"
    {
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
    break;

  case 410:
/* Line 1792 of yacc.c  */
#line 4389 "parser.y"
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

  case 411:
/* Line 1792 of yacc.c  */
#line 4413 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 412:
/* Line 1792 of yacc.c  */
#line 4417 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]) == cb_error_node ? NULL : (yyvsp[(2) - (2)]);
  }
    break;

  case 413:
/* Line 1792 of yacc.c  */
#line 4424 "parser.y"
    {
	if (set_current_field ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]))) {
		YYERROR;
	}
  }
    break;

  case 414:
/* Line 1792 of yacc.c  */
#line 4430 "parser.y"
    {
	cb_validate_88_item (current_field);
  }
    break;

  case 415:
/* Line 1792 of yacc.c  */
#line 4437 "parser.y"
    {
	cb_tree x;
	int	level;

	cobc_cs_check = 0;
	level = cb_get_level ((yyvsp[(1) - (5)]));
	/* Free tree assocated with level number */
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

  case 416:
/* Line 1792 of yacc.c  */
#line 4460 "parser.y"
    {
	if (set_current_field ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]))) {
		YYERROR;
	}
  }
    break;

  case 417:
/* Line 1792 of yacc.c  */
#line 4466 "parser.y"
    {
	/* Reset to last non-78 item */
	current_field = cb_validate_78_item (current_field, 0);
  }
    break;

  case 418:
/* Line 1792 of yacc.c  */
#line 4474 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 419:
/* Line 1792 of yacc.c  */
#line 4478 "parser.y"
    {
	CB_PENDING ("CONSTANT FROM");
	(yyval) = NULL;
  }
    break;

  case 420:
/* Line 1792 of yacc.c  */
#line 4486 "parser.y"
    {
	/* Required to check redefines */
	(yyval) = NULL;
  }
    break;

  case 421:
/* Line 1792 of yacc.c  */
#line 4492 "parser.y"
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  }
    break;

  case 435:
/* Line 1792 of yacc.c  */
#line 4519 "parser.y"
    {
	check_repeated ("REDEFINES", SYN_CLAUSE_1, &check_pic_duplicate);
	if ((yyvsp[(0) - (2)]) != NULL) {
		if (cb_relaxed_syntax_check) {
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

  case 436:
/* Line 1792 of yacc.c  */
#line 4543 "parser.y"
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

  case 437:
/* Line 1792 of yacc.c  */
#line 4570 "parser.y"
    {
	current_field->ename = cb_to_cname (current_field->name);
  }
    break;

  case 438:
/* Line 1792 of yacc.c  */
#line 4574 "parser.y"
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[(2) - (2)]))->data);
  }
    break;

  case 441:
/* Line 1792 of yacc.c  */
#line 4587 "parser.y"
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

  case 442:
/* Line 1792 of yacc.c  */
#line 4612 "parser.y"
    {
	check_repeated ("PICTURE", SYN_CLAUSE_4, &check_pic_duplicate);
	current_field->pic = CB_PICTURE ((yyvsp[(1) - (1)]));
  }
    break;

  case 445:
/* Line 1792 of yacc.c  */
#line 4628 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 446:
/* Line 1792 of yacc.c  */
#line 4632 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 447:
/* Line 1792 of yacc.c  */
#line 4636 "parser.y"
    {
	check_set_usage (CB_USAGE_FLOAT);
  }
    break;

  case 448:
/* Line 1792 of yacc.c  */
#line 4640 "parser.y"
    {
	check_set_usage (CB_USAGE_DOUBLE);
  }
    break;

  case 449:
/* Line 1792 of yacc.c  */
#line 4644 "parser.y"
    {
	check_set_usage (CB_USAGE_PACKED);
  }
    break;

  case 450:
/* Line 1792 of yacc.c  */
#line 4648 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 451:
/* Line 1792 of yacc.c  */
#line 4652 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_5);
  }
    break;

  case 452:
/* Line 1792 of yacc.c  */
#line 4656 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_6);
  }
    break;

  case 453:
/* Line 1792 of yacc.c  */
#line 4660 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_X);
  }
    break;

  case 454:
/* Line 1792 of yacc.c  */
#line 4664 "parser.y"
    {
	check_set_usage (CB_USAGE_DISPLAY);
  }
    break;

  case 455:
/* Line 1792 of yacc.c  */
#line 4668 "parser.y"
    {
	check_set_usage (CB_USAGE_INDEX);
  }
    break;

  case 456:
/* Line 1792 of yacc.c  */
#line 4672 "parser.y"
    {
	check_set_usage (CB_USAGE_PACKED);
  }
    break;

  case 457:
/* Line 1792 of yacc.c  */
#line 4676 "parser.y"
    {
	check_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
    break;

  case 458:
/* Line 1792 of yacc.c  */
#line 4681 "parser.y"
    {
	check_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
    break;

  case 459:
/* Line 1792 of yacc.c  */
#line 4686 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
    break;

  case 460:
/* Line 1792 of yacc.c  */
#line 4690 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
    break;

  case 461:
/* Line 1792 of yacc.c  */
#line 4694 "parser.y"
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
    break;

  case 462:
/* Line 1792 of yacc.c  */
#line 4702 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
    break;

  case 463:
/* Line 1792 of yacc.c  */
#line 4706 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
    break;

  case 464:
/* Line 1792 of yacc.c  */
#line 4710 "parser.y"
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
    break;

  case 465:
/* Line 1792 of yacc.c  */
#line 4718 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_CHAR);
  }
    break;

  case 466:
/* Line 1792 of yacc.c  */
#line 4722 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
    break;

  case 467:
/* Line 1792 of yacc.c  */
#line 4726 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
    break;

  case 468:
/* Line 1792 of yacc.c  */
#line 4730 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
    break;

  case 469:
/* Line 1792 of yacc.c  */
#line 4734 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
    break;

  case 470:
/* Line 1792 of yacc.c  */
#line 4738 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
    break;

  case 471:
/* Line 1792 of yacc.c  */
#line 4742 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_LONG);
  }
    break;

  case 472:
/* Line 1792 of yacc.c  */
#line 4746 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
    break;

  case 473:
/* Line 1792 of yacc.c  */
#line 4750 "parser.y"
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
    break;

  case 474:
/* Line 1792 of yacc.c  */
#line 4758 "parser.y"
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
    break;

  case 475:
/* Line 1792 of yacc.c  */
#line 4766 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN32);
  }
    break;

  case 476:
/* Line 1792 of yacc.c  */
#line 4770 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN64);
  }
    break;

  case 477:
/* Line 1792 of yacc.c  */
#line 4774 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN128);
  }
    break;

  case 478:
/* Line 1792 of yacc.c  */
#line 4778 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_DEC64);
  }
    break;

  case 479:
/* Line 1792 of yacc.c  */
#line 4782 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_DEC128);
  }
    break;

  case 480:
/* Line 1792 of yacc.c  */
#line 4786 "parser.y"
    {
	check_repeated ("USAGE", SYN_CLAUSE_5, &check_pic_duplicate);
	CB_PENDING ("USAGE NATIONAL");
  }
    break;

  case 485:
/* Line 1792 of yacc.c  */
#line 4806 "parser.y"
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_separate = ((yyvsp[(3) - (3)]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
    break;

  case 486:
/* Line 1792 of yacc.c  */
#line 4812 "parser.y"
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_separate = ((yyvsp[(3) - (3)]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
    break;

  case 487:
/* Line 1792 of yacc.c  */
#line 4825 "parser.y"
    {
	check_repeated ("OCCURS", SYN_CLAUSE_7, &check_pic_duplicate);
	if (current_field->depending && !((yyvsp[(3) - (6)]))) {
		cb_verify (cb_odo_without_to, _("ODO without TO clause"));
	}
	current_field->occurs_min = (yyvsp[(3) - (6)]) ? cb_get_int ((yyvsp[(2) - (6)])) : 1;
	current_field->occurs_max = (yyvsp[(3) - (6)]) ? cb_get_int ((yyvsp[(3) - (6)])) : cb_get_int ((yyvsp[(2) - (6)]));
	current_field->indexes++;
	if (current_field->indexes > COB_MAX_SUBSCRIPTS) {
		cb_error (_("maximum OCCURS depth exceeded (%d)"),
			  COB_MAX_SUBSCRIPTS);
	}
	current_field->flag_occurs = 1;
  }
    break;

  case 489:
/* Line 1792 of yacc.c  */
#line 4843 "parser.y"
    {
	current_field->step_count = cb_get_int ((yyvsp[(2) - (2)]));
  }
    break;

  case 490:
/* Line 1792 of yacc.c  */
#line 4853 "parser.y"
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
	if ((yyvsp[(3) - (7)])) {
		current_field->occurs_min = cb_get_int ((yyvsp[(2) - (7)]));
		current_field->occurs_max = cb_get_int ((yyvsp[(3) - (7)]));
		if (current_field->depending &&
			current_field->occurs_max > 0 &&
			current_field->occurs_max <= current_field->occurs_min) {
			cb_error (_("OCCURS TO must be greater than OCCURS FROM"));
		}
	} else {
		current_field->occurs_min = 1;
		current_field->occurs_max = cb_get_int ((yyvsp[(2) - (7)]));
		if (current_field->depending) {
			cb_verify (cb_odo_without_to, _("ODO without TO clause"));
		}
	}
	current_field->flag_occurs = 1;
  }
    break;

  case 491:
/* Line 1792 of yacc.c  */
#line 4885 "parser.y"
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
	current_field->flag_occurs = 1;
  }
    break;

  case 492:
/* Line 1792 of yacc.c  */
#line 4913 "parser.y"
    { (yyval) = NULL; }
    break;

  case 493:
/* Line 1792 of yacc.c  */
#line 4914 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 494:
/* Line 1792 of yacc.c  */
#line 4918 "parser.y"
    { (yyval) = NULL; }
    break;

  case 495:
/* Line 1792 of yacc.c  */
#line 4919 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 497:
/* Line 1792 of yacc.c  */
#line 4924 "parser.y"
    {
	current_field->depending = (yyvsp[(3) - (3)]);
  }
    break;

  case 499:
/* Line 1792 of yacc.c  */
#line 4931 "parser.y"
    {
	(yyval) = cb_build_index ((yyvsp[(3) - (3)]), cb_zero, 0, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
    break;

  case 501:
/* Line 1792 of yacc.c  */
#line 4939 "parser.y"
    {
	/* current_field->initialized = 1; */
  }
    break;

  case 502:
/* Line 1792 of yacc.c  */
#line 4946 "parser.y"
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

  case 503:
/* Line 1792 of yacc.c  */
#line 4969 "parser.y"
    { (yyval) = NULL; }
    break;

  case 504:
/* Line 1792 of yacc.c  */
#line 4972 "parser.y"
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

  case 505:
/* Line 1792 of yacc.c  */
#line 4987 "parser.y"
    { (yyval) = cb_int (COB_ASCENDING); }
    break;

  case 506:
/* Line 1792 of yacc.c  */
#line 4988 "parser.y"
    { (yyval) = cb_int (COB_DESCENDING); }
    break;

  case 508:
/* Line 1792 of yacc.c  */
#line 4993 "parser.y"
    {
	current_field->index_list = (yyvsp[(3) - (3)]);
  }
    break;

  case 509:
/* Line 1792 of yacc.c  */
#line 4999 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 510:
/* Line 1792 of yacc.c  */
#line 5001 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 511:
/* Line 1792 of yacc.c  */
#line 5006 "parser.y"
    {
	(yyval) = cb_build_index ((yyvsp[(1) - (1)]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
    break;

  case 512:
/* Line 1792 of yacc.c  */
#line 5017 "parser.y"
    {
	check_repeated ("JUSTIFIED", SYN_CLAUSE_8, &check_pic_duplicate);
	current_field->flag_justified = 1;
  }
    break;

  case 513:
/* Line 1792 of yacc.c  */
#line 5028 "parser.y"
    {
	check_repeated ("SYNCHRONIZED", SYN_CLAUSE_9, &check_pic_duplicate);
	current_field->flag_synchronized = 1;
  }
    break;

  case 514:
/* Line 1792 of yacc.c  */
#line 5039 "parser.y"
    {
	check_repeated ("BLANK", SYN_CLAUSE_10, &check_pic_duplicate);
	current_field->flag_blank_zero = 1;
  }
    break;

  case 515:
/* Line 1792 of yacc.c  */
#line 5050 "parser.y"
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

  case 516:
/* Line 1792 of yacc.c  */
#line 5078 "parser.y"
    {
	check_repeated ("VALUE", SYN_CLAUSE_12, &check_pic_duplicate);
	current_field->values = (yyvsp[(3) - (3)]);
  }
    break;

  case 518:
/* Line 1792 of yacc.c  */
#line 5086 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 519:
/* Line 1792 of yacc.c  */
#line 5087 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 520:
/* Line 1792 of yacc.c  */
#line 5091 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 521:
/* Line 1792 of yacc.c  */
#line 5092 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 523:
/* Line 1792 of yacc.c  */
#line 5097 "parser.y"
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[(4) - (4)]));
  }
    break;

  case 524:
/* Line 1792 of yacc.c  */
#line 5109 "parser.y"
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY LENGTH");
	} else {
		current_field->flag_any_length = 1;
	}
  }
    break;

  case 525:
/* Line 1792 of yacc.c  */
#line 5118 "parser.y"
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

  case 527:
/* Line 1792 of yacc.c  */
#line 5133 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LOCAL_STORAGE_SECTION;
	current_storage = CB_STORAGE_LOCAL;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "LOCAL-STORAGE");
	}
  }
    break;

  case 528:
/* Line 1792 of yacc.c  */
#line 5142 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		current_program->local_storage = CB_FIELD ((yyvsp[(5) - (5)]));
	}
  }
    break;

  case 530:
/* Line 1792 of yacc.c  */
#line 5154 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
    break;

  case 531:
/* Line 1792 of yacc.c  */
#line 5160 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[(5) - (5)]));
	}
  }
    break;

  case 533:
/* Line 1792 of yacc.c  */
#line 5171 "parser.y"
    {
	CB_PENDING("REPORT SECTION");
	current_storage = CB_STORAGE_REPORT;
	cb_clear_real_field ();
  }
    break;

  case 537:
/* Line 1792 of yacc.c  */
#line 5187 "parser.y"
    {
	if (CB_INVALID_TREE ((yyvsp[(2) - (2)]))) {
		YYERROR;
	} else {
		current_report = CB_REPORT (cb_ref ((yyvsp[(2) - (2)])));
	}
	check_duplicate = 0;
  }
    break;

  case 541:
/* Line 1792 of yacc.c  */
#line 5202 "parser.y"
    {
	yyerrok;
  }
    break;

  case 542:
/* Line 1792 of yacc.c  */
#line 5209 "parser.y"
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1, &check_duplicate);
	cb_error (_("GLOBAL is not allowed with RD"));
  }
    break;

  case 543:
/* Line 1792 of yacc.c  */
#line 5214 "parser.y"
    {
	check_repeated ("CODE", SYN_CLAUSE_2, &check_duplicate);
  }
    break;

  case 546:
/* Line 1792 of yacc.c  */
#line 5225 "parser.y"
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3, &check_duplicate);
  }
    break;

  case 550:
/* Line 1792 of yacc.c  */
#line 5244 "parser.y"
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

  case 551:
/* Line 1792 of yacc.c  */
#line 5280 "parser.y"
    {
	current_report->lines = cb_get_int ((yyvsp[(1) - (1)]));
  }
    break;

  case 552:
/* Line 1792 of yacc.c  */
#line 5284 "parser.y"
    {
	current_report->lines = cb_get_int ((yyvsp[(1) - (4)]));
	current_report->columns = cb_get_int ((yyvsp[(3) - (4)]));
  }
    break;

  case 553:
/* Line 1792 of yacc.c  */
#line 5289 "parser.y"
    {
	current_report->lines = cb_get_int ((yyvsp[(1) - (2)]));
  }
    break;

  case 561:
/* Line 1792 of yacc.c  */
#line 5309 "parser.y"
    {
	current_report->heading = cb_get_int ((yyvsp[(3) - (3)]));
  }
    break;

  case 562:
/* Line 1792 of yacc.c  */
#line 5316 "parser.y"
    {
	current_report->first_detail = cb_get_int ((yyvsp[(4) - (4)]));
  }
    break;

  case 563:
/* Line 1792 of yacc.c  */
#line 5323 "parser.y"
    {
	current_report->last_control = cb_get_int ((yyvsp[(4) - (4)]));
  }
    break;

  case 564:
/* Line 1792 of yacc.c  */
#line 5330 "parser.y"
    {
	current_report->last_detail = cb_get_int ((yyvsp[(4) - (4)]));
  }
    break;

  case 565:
/* Line 1792 of yacc.c  */
#line 5337 "parser.y"
    {
	current_report->footing = cb_get_int ((yyvsp[(3) - (3)]));
  }
    break;

  case 568:
/* Line 1792 of yacc.c  */
#line 5348 "parser.y"
    {
	check_pic_duplicate = 0;
  }
    break;

  case 588:
/* Line 1792 of yacc.c  */
#line 5379 "parser.y"
    {
	check_repeated ("TYPE", SYN_CLAUSE_16, &check_pic_duplicate);
  }
    break;

  case 601:
/* Line 1792 of yacc.c  */
#line 5405 "parser.y"
    {
	check_repeated ("NEXT GROUP", SYN_CLAUSE_17, &check_pic_duplicate);
  }
    break;

  case 602:
/* Line 1792 of yacc.c  */
#line 5412 "parser.y"
    {
	check_repeated ("SUM", SYN_CLAUSE_19, &check_pic_duplicate);
  }
    break;

  case 607:
/* Line 1792 of yacc.c  */
#line 5428 "parser.y"
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
  }
    break;

  case 609:
/* Line 1792 of yacc.c  */
#line 5439 "parser.y"
    {
	check_repeated ("LINE", SYN_CLAUSE_21, &check_pic_duplicate);
  }
    break;

  case 612:
/* Line 1792 of yacc.c  */
#line 5451 "parser.y"
    {
	check_repeated ("COLUMN", SYN_CLAUSE_18, &check_pic_duplicate);
  }
    break;

  case 624:
/* Line 1792 of yacc.c  */
#line 5484 "parser.y"
    {
	check_repeated ("SOURCE", SYN_CLAUSE_22, &check_pic_duplicate);
  }
    break;

  case 625:
/* Line 1792 of yacc.c  */
#line 5491 "parser.y"
    {
	check_repeated ("GROUP", SYN_CLAUSE_23, &check_pic_duplicate);
  }
    break;

  case 626:
/* Line 1792 of yacc.c  */
#line 5498 "parser.y"
    {
	check_repeated ("USAGE", SYN_CLAUSE_24, &check_pic_duplicate);
  }
    break;

  case 628:
/* Line 1792 of yacc.c  */
#line 5507 "parser.y"
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
    break;

  case 629:
/* Line 1792 of yacc.c  */
#line 5514 "parser.y"
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

  case 635:
/* Line 1792 of yacc.c  */
#line 5539 "parser.y"
    {
	cb_tree	x;

	x = cb_build_field_tree ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), current_field, current_storage,
				 current_file, 0);
	/* Free tree assocated with level number */
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

  case 636:
/* Line 1792 of yacc.c  */
#line 5559 "parser.y"
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
    break;

  case 637:
/* Line 1792 of yacc.c  */
#line 5599 "parser.y"
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

  case 640:
/* Line 1792 of yacc.c  */
#line 5622 "parser.y"
    {
	check_screen_attr_with_conflict ("BLANK LINE", COB_SCREEN_BLANK_LINE,
					 "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
    break;

  case 641:
/* Line 1792 of yacc.c  */
#line 5627 "parser.y"
    {
	check_screen_attr_with_conflict ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN,
					 "BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
    break;

  case 642:
/* Line 1792 of yacc.c  */
#line 5632 "parser.y"
    {
	check_screen_attr ("BELL", COB_SCREEN_BELL);
  }
    break;

  case 643:
/* Line 1792 of yacc.c  */
#line 5636 "parser.y"
    {
	check_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
    break;

  case 644:
/* Line 1792 of yacc.c  */
#line 5640 "parser.y"
    {
	check_screen_attr_with_conflict ("ERASE EOL", COB_SCREEN_ERASE_EOL,
					 "ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
    break;

  case 645:
/* Line 1792 of yacc.c  */
#line 5645 "parser.y"
    {
	check_screen_attr_with_conflict ("ERASE EOS", COB_SCREEN_ERASE_EOS,
					 "ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
    break;

  case 646:
/* Line 1792 of yacc.c  */
#line 5650 "parser.y"
    {
	check_screen_attr_with_conflict ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
					 "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
    break;

  case 647:
/* Line 1792 of yacc.c  */
#line 5655 "parser.y"
    {
	check_screen_attr_with_conflict ("LOWLIGHT", COB_SCREEN_LOWLIGHT,
					 "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 648:
/* Line 1792 of yacc.c  */
#line 5660 "parser.y"
    {
	check_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
    break;

  case 649:
/* Line 1792 of yacc.c  */
#line 5664 "parser.y"
    {
	check_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
    break;

  case 650:
/* Line 1792 of yacc.c  */
#line 5668 "parser.y"
    {
	check_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
	CB_PENDING ("OVERLINE");
  }
    break;

  case 651:
/* Line 1792 of yacc.c  */
#line 5673 "parser.y"
    {
	check_screen_attr ("GRID", COB_SCREEN_GRID);
	CB_PENDING ("GRID");
  }
    break;

  case 652:
/* Line 1792 of yacc.c  */
#line 5678 "parser.y"
    {
	check_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
	CB_PENDING ("LEFTLINE");
  }
    break;

  case 653:
/* Line 1792 of yacc.c  */
#line 5683 "parser.y"
    {
	check_screen_attr ("AUTO", COB_SCREEN_AUTO);
  }
    break;

  case 654:
/* Line 1792 of yacc.c  */
#line 5687 "parser.y"
    {
	check_screen_attr ("SECURE", COB_SCREEN_SECURE);
  }
    break;

  case 655:
/* Line 1792 of yacc.c  */
#line 5691 "parser.y"
    {
	check_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  }
    break;

  case 656:
/* Line 1792 of yacc.c  */
#line 5695 "parser.y"
    {
	check_screen_attr ("FULL", COB_SCREEN_FULL);
  }
    break;

  case 657:
/* Line 1792 of yacc.c  */
#line 5699 "parser.y"
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[(4) - (4)]);
  }
    break;

  case 658:
/* Line 1792 of yacc.c  */
#line 5704 "parser.y"
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
    break;

  case 659:
/* Line 1792 of yacc.c  */
#line 5708 "parser.y"
    {
	check_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
    break;

  case 660:
/* Line 1792 of yacc.c  */
#line 5712 "parser.y"
    {
	check_repeated ("LINE", SYN_CLAUSE_16, &check_pic_duplicate);
	current_field->screen_line = (yyvsp[(5) - (5)]);
  }
    break;

  case 661:
/* Line 1792 of yacc.c  */
#line 5717 "parser.y"
    {
	check_repeated ("COLUMN", SYN_CLAUSE_17, &check_pic_duplicate);
	current_field->screen_column = (yyvsp[(5) - (5)]);
  }
    break;

  case 662:
/* Line 1792 of yacc.c  */
#line 5722 "parser.y"
    {
	check_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18, &check_pic_duplicate);
	current_field->screen_foreg = (yyvsp[(3) - (3)]);
  }
    break;

  case 663:
/* Line 1792 of yacc.c  */
#line 5727 "parser.y"
    {
	check_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19, &check_pic_duplicate);
	current_field->screen_backg = (yyvsp[(3) - (3)]);
  }
    break;

  case 672:
/* Line 1792 of yacc.c  */
#line 5740 "parser.y"
    {
	check_not_88_level ((yyvsp[(2) - (2)]));

	check_repeated ("USING", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[(2) - (2)]);
	current_field->screen_to = (yyvsp[(2) - (2)]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
    break;

  case 673:
/* Line 1792 of yacc.c  */
#line 5749 "parser.y"
    {
	check_repeated ("FROM", SYN_CLAUSE_21, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[(2) - (2)]);
  }
    break;

  case 674:
/* Line 1792 of yacc.c  */
#line 5754 "parser.y"
    {
	check_not_88_level ((yyvsp[(2) - (2)]));

	check_repeated ("TO", SYN_CLAUSE_22, &check_pic_duplicate);
	current_field->screen_to = (yyvsp[(2) - (2)]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
    break;

  case 683:
/* Line 1792 of yacc.c  */
#line 5785 "parser.y"
    {
	/* Nothing */
  }
    break;

  case 684:
/* Line 1792 of yacc.c  */
#line 5789 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
    break;

  case 685:
/* Line 1792 of yacc.c  */
#line 5793 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
    break;

  case 686:
/* Line 1792 of yacc.c  */
#line 5800 "parser.y"
    {
	/* Nothing */
  }
    break;

  case 687:
/* Line 1792 of yacc.c  */
#line 5804 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
    break;

  case 688:
/* Line 1792 of yacc.c  */
#line 5808 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
    break;

  case 689:
/* Line 1792 of yacc.c  */
#line 5816 "parser.y"
    {
	check_repeated ("OCCURS", SYN_CLAUSE_23, &check_pic_duplicate);
	current_field->occurs_max = cb_get_int ((yyvsp[(2) - (3)]));
	current_field->occurs_min = current_field->occurs_max;
	current_field->indexes++;
	current_field->flag_occurs = 1;
  }
    break;

  case 690:
/* Line 1792 of yacc.c  */
#line 5827 "parser.y"
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  }
    break;

  case 692:
/* Line 1792 of yacc.c  */
#line 5836 "parser.y"
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

  case 693:
/* Line 1792 of yacc.c  */
#line 5846 "parser.y"
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

  case 694:
/* Line 1792 of yacc.c  */
#line 5858 "parser.y"
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

  case 695:
/* Line 1792 of yacc.c  */
#line 5873 "parser.y"
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
    break;

  case 697:
/* Line 1792 of yacc.c  */
#line 5906 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 698:
/* Line 1792 of yacc.c  */
#line 5910 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
    break;

  case 699:
/* Line 1792 of yacc.c  */
#line 5915 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 700:
/* Line 1792 of yacc.c  */
#line 5923 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("CHAINING invalid in user FUNCTION"));
	} else {
		current_program->flag_chained = 1;
	}
  }
    break;

  case 701:
/* Line 1792 of yacc.c  */
#line 5932 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 702:
/* Line 1792 of yacc.c  */
#line 5942 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 703:
/* Line 1792 of yacc.c  */
#line 5944 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 704:
/* Line 1792 of yacc.c  */
#line 5949 "parser.y"
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

  case 706:
/* Line 1792 of yacc.c  */
#line 5973 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
    break;

  case 707:
/* Line 1792 of yacc.c  */
#line 5977 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error (_("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		CB_PENDING (_("parameters passed BY VALUE"));
		call_mode = CB_CALL_BY_VALUE;
	}
  }
    break;

  case 709:
/* Line 1792 of yacc.c  */
#line 5990 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO;
	}
  }
    break;

  case 710:
/* Line 1792 of yacc.c  */
#line 5998 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_4;
	}
  }
    break;

  case 711:
/* Line 1792 of yacc.c  */
#line 6006 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO | CB_SIZE_UNSIGNED;
	}
  }
    break;

  case 712:
/* Line 1792 of yacc.c  */
#line 6014 "parser.y"
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

  case 713:
/* Line 1792 of yacc.c  */
#line 6043 "parser.y"
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

  case 714:
/* Line 1792 of yacc.c  */
#line 6075 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 715:
/* Line 1792 of yacc.c  */
#line 6079 "parser.y"
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
		(yyval) = cb_int0;
	} else {
		(yyval) = cb_int1;
	}
  }
    break;

  case 716:
/* Line 1792 of yacc.c  */
#line 6091 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
    break;

  case 717:
/* Line 1792 of yacc.c  */
#line 6097 "parser.y"
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

  case 718:
/* Line 1792 of yacc.c  */
#line 6107 "parser.y"
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
			current_program->returning = (yyvsp[(2) - (2)]);
		}
	}
  }
    break;

  case 720:
/* Line 1792 of yacc.c  */
#line 6139 "parser.y"
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
    break;

  case 721:
/* Line 1792 of yacc.c  */
#line 6145 "parser.y"
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

  case 726:
/* Line 1792 of yacc.c  */
#line 6183 "parser.y"
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

  case 728:
/* Line 1792 of yacc.c  */
#line 6201 "parser.y"
    {
	/* check_unreached = 0; */
  }
    break;

  case 729:
/* Line 1792 of yacc.c  */
#line 6211 "parser.y"
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

  case 730:
/* Line 1792 of yacc.c  */
#line 6255 "parser.y"
    {
	emit_statement (CB_TREE (current_section));
  }
    break;

  case 733:
/* Line 1792 of yacc.c  */
#line 6266 "parser.y"
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
		CB_TREE (current_section)->source_file = cb_source_file;
		CB_TREE (current_section)->source_line = cb_source_line;
		emit_statement (CB_TREE (current_section));
	}
	current_paragraph = CB_LABEL (cb_build_label ((yyvsp[(1) - (2)]), current_section));
	current_paragraph->flag_declaratives =!! in_declaratives;
	current_paragraph->flag_skip_label = !!skip_statements;
	current_paragraph->flag_real_label = !in_debugging;
	current_paragraph->segment = current_section->segment;
	CB_TREE (current_paragraph)->source_file = cb_source_file;
	CB_TREE (current_paragraph)->source_line = cb_source_line;
	emit_statement (CB_TREE (current_paragraph));
  }
    break;

  case 734:
/* Line 1792 of yacc.c  */
#line 6314 "parser.y"
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

  case 735:
/* Line 1792 of yacc.c  */
#line 6333 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 736:
/* Line 1792 of yacc.c  */
#line 6337 "parser.y"
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

  case 737:
/* Line 1792 of yacc.c  */
#line 6355 "parser.y"
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
    break;

  case 738:
/* Line 1792 of yacc.c  */
#line 6360 "parser.y"
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  }
    break;

  case 739:
/* Line 1792 of yacc.c  */
#line 6365 "parser.y"
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[(1) - (3)]);
	current_statement = CB_STATEMENT ((yyvsp[(2) - (3)]));
  }
    break;

  case 740:
/* Line 1792 of yacc.c  */
#line 6373 "parser.y"
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
    break;

  case 741:
/* Line 1792 of yacc.c  */
#line 6400 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 742:
/* Line 1792 of yacc.c  */
#line 6404 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 792:
/* Line 1792 of yacc.c  */
#line 6460 "parser.y"
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

  case 793:
/* Line 1792 of yacc.c  */
#line 6474 "parser.y"
    {
	yyerrok;
	cobc_cs_check = 0;
  }
    break;

  case 794:
/* Line 1792 of yacc.c  */
#line 6485 "parser.y"
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
    break;

  case 796:
/* Line 1792 of yacc.c  */
#line 6501 "parser.y"
    {
	  check_duplicate = 0;
	  check_line_col_duplicate = 0;
	  line_column = NULL;
  }
    break;

  case 797:
/* Line 1792 of yacc.c  */
#line 6507 "parser.y"
    {
	/* Check for invalid use of screen clauses */
	  if (current_statement->attr_ptr
	      || (!is_screen_field ((yyvsp[(1) - (4)])) && line_column)) {
		  cb_verify_x ((yyvsp[(1) - (4)]), cb_accept_display_extensions,
			       _("non-standard ACCEPT"));
	  }

	cobc_cs_check = 0;
	cb_emit_accept ((yyvsp[(1) - (4)]), line_column, current_statement->attr_ptr);
  }
    break;

  case 798:
/* Line 1792 of yacc.c  */
#line 6519 "parser.y"
    {
	cb_emit_accept_line_or_col ((yyvsp[(1) - (3)]), 0);
  }
    break;

  case 799:
/* Line 1792 of yacc.c  */
#line 6523 "parser.y"
    {
	cb_emit_accept_line_or_col ((yyvsp[(1) - (3)]), 1);
  }
    break;

  case 800:
/* Line 1792 of yacc.c  */
#line 6527 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[(1) - (4)]));
  }
    break;

  case 801:
/* Line 1792 of yacc.c  */
#line 6532 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[(1) - (3)]));
  }
    break;

  case 802:
/* Line 1792 of yacc.c  */
#line 6537 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[(1) - (4)]));
  }
    break;

  case 803:
/* Line 1792 of yacc.c  */
#line 6542 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[(1) - (3)]));
  }
    break;

  case 804:
/* Line 1792 of yacc.c  */
#line 6547 "parser.y"
    {
	cb_emit_accept_day_of_week ((yyvsp[(1) - (3)]));
  }
    break;

  case 805:
/* Line 1792 of yacc.c  */
#line 6551 "parser.y"
    {
	cb_emit_accept_escape_key ((yyvsp[(1) - (4)]));
  }
    break;

  case 806:
/* Line 1792 of yacc.c  */
#line 6555 "parser.y"
    {
	cb_emit_accept_exception_status ((yyvsp[(1) - (4)]));
  }
    break;

  case 807:
/* Line 1792 of yacc.c  */
#line 6559 "parser.y"
    {
	cb_emit_accept_time ((yyvsp[(1) - (3)]));
  }
    break;

  case 808:
/* Line 1792 of yacc.c  */
#line 6563 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[(1) - (4)]));
  }
    break;

  case 809:
/* Line 1792 of yacc.c  */
#line 6568 "parser.y"
    {
	cb_emit_accept_command_line ((yyvsp[(1) - (3)]));
  }
    break;

  case 810:
/* Line 1792 of yacc.c  */
#line 6572 "parser.y"
    {
	cb_emit_accept_environment ((yyvsp[(1) - (4)]));
  }
    break;

  case 811:
/* Line 1792 of yacc.c  */
#line 6576 "parser.y"
    {
	cb_emit_get_environment ((yyvsp[(4) - (5)]), (yyvsp[(1) - (5)]));
  }
    break;

  case 812:
/* Line 1792 of yacc.c  */
#line 6580 "parser.y"
    {
	cb_emit_accept_arg_number ((yyvsp[(1) - (3)]));
  }
    break;

  case 813:
/* Line 1792 of yacc.c  */
#line 6584 "parser.y"
    {
	cb_emit_accept_arg_value ((yyvsp[(1) - (4)]));
  }
    break;

  case 814:
/* Line 1792 of yacc.c  */
#line 6588 "parser.y"
    {
	cb_emit_accept_mnemonic ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 815:
/* Line 1792 of yacc.c  */
#line 6592 "parser.y"
    {
	cb_emit_accept_name ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 817:
/* Line 1792 of yacc.c  */
#line 6600 "parser.y"
    {
	(yyval) = cb_null;
  }
    break;

  case 823:
/* Line 1792 of yacc.c  */
#line 6618 "parser.y"
    {
	  check_repeated ("FROM CRT", SYN_CLAUSE_1, &check_duplicate);
  }
    break;

  case 824:
/* Line 1792 of yacc.c  */
#line 6622 "parser.y"
    {
	  check_repeated ("MODE IS BLOCK", SYN_CLAUSE_2, &check_duplicate);
  }
    break;

  case 828:
/* Line 1792 of yacc.c  */
#line 6635 "parser.y"
    {
	check_attr_with_conflict ("LINE", SYN_CLAUSE_1,
				  _("AT screen-location"), SYN_CLAUSE_3,
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

  case 829:
/* Line 1792 of yacc.c  */
#line 6651 "parser.y"
    {
	check_attr_with_conflict ("COLUMN", SYN_CLAUSE_2,
				  _("AT screen-location"), SYN_CLAUSE_3,
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

  case 830:
/* Line 1792 of yacc.c  */
#line 6667 "parser.y"
    {
	check_attr_with_conflict (_("AT screen-location"), SYN_CLAUSE_3,
				  _("LINE or COLUMN"), SYN_CLAUSE_1 | SYN_CLAUSE_2,
				  &check_line_col_duplicate);

	cb_verify (cb_accept_display_extensions, "AT clause");

	line_column = (yyvsp[(2) - (2)]);
  }
    break;

  case 831:
/* Line 1792 of yacc.c  */
#line 6679 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 832:
/* Line 1792 of yacc.c  */
#line 6683 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 833:
/* Line 1792 of yacc.c  */
#line 6684 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 834:
/* Line 1792 of yacc.c  */
#line 6689 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 835:
/* Line 1792 of yacc.c  */
#line 6696 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
  }
    break;

  case 836:
/* Line 1792 of yacc.c  */
#line 6700 "parser.y"
    {
	if (cb_accept_auto) {
		remove_attrib (COB_SCREEN_AUTO);
	}
  }
    break;

  case 837:
/* Line 1792 of yacc.c  */
#line 6706 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
    break;

  case 838:
/* Line 1792 of yacc.c  */
#line 6710 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
    break;

  case 839:
/* Line 1792 of yacc.c  */
#line 6714 "parser.y"
    {
	CB_PENDING ("ACCEPT CONVERSION");
  }
    break;

  case 840:
/* Line 1792 of yacc.c  */
#line 6718 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_FULL);
  }
    break;

  case 841:
/* Line 1792 of yacc.c  */
#line 6722 "parser.y"
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
    break;

  case 842:
/* Line 1792 of yacc.c  */
#line 6728 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LEFTLINE);
  }
    break;

  case 843:
/* Line 1792 of yacc.c  */
#line 6732 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWER);
  }
    break;

  case 844:
/* Line 1792 of yacc.c  */
#line 6736 "parser.y"
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 845:
/* Line 1792 of yacc.c  */
#line 6742 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_NO_ECHO);
  }
    break;

  case 846:
/* Line 1792 of yacc.c  */
#line 6746 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
    break;

  case 847:
/* Line 1792 of yacc.c  */
#line 6750 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, (yyvsp[(4) - (4)]), NULL, COB_SCREEN_PROMPT);
  }
    break;

  case 848:
/* Line 1792 of yacc.c  */
#line 6754 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_PROMPT);
  }
    break;

  case 849:
/* Line 1792 of yacc.c  */
#line 6758 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REQUIRED);
  }
    break;

  case 850:
/* Line 1792 of yacc.c  */
#line 6762 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
    break;

  case 851:
/* Line 1792 of yacc.c  */
#line 6766 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_SECURE);
  }
    break;

  case 852:
/* Line 1792 of yacc.c  */
#line 6770 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[(4) - (4)]), 0);
  }
    break;

  case 853:
/* Line 1792 of yacc.c  */
#line 6774 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[(3) - (3)]), 0);
  }
    break;

  case 854:
/* Line 1792 of yacc.c  */
#line 6778 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
    break;

  case 855:
/* Line 1792 of yacc.c  */
#line 6782 "parser.y"
    {
	if (cb_accept_update) {
		remove_attrib (COB_SCREEN_UPDATE);
	}
  }
    break;

  case 856:
/* Line 1792 of yacc.c  */
#line 6788 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
  }
    break;

  case 857:
/* Line 1792 of yacc.c  */
#line 6792 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPPER);
  }
    break;

  case 858:
/* Line 1792 of yacc.c  */
#line 6796 "parser.y"
    {
	check_attribs ((yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 859:
/* Line 1792 of yacc.c  */
#line 6800 "parser.y"
    {
	check_attribs (NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 860:
/* Line 1792 of yacc.c  */
#line 6804 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, 0);
  }
    break;

  case 861:
/* Line 1792 of yacc.c  */
#line 6808 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
    break;

  case 862:
/* Line 1792 of yacc.c  */
#line 6812 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, 0);
  }
    break;

  case 865:
/* Line 1792 of yacc.c  */
#line 6824 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  }
    break;

  case 866:
/* Line 1792 of yacc.c  */
#line 6828 "parser.y"
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
    break;

  case 867:
/* Line 1792 of yacc.c  */
#line 6845 "parser.y"
    {
	begin_statement ("ADD", TERM_ADD);
  }
    break;

  case 869:
/* Line 1792 of yacc.c  */
#line 6854 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '+', cb_build_binary_list ((yyvsp[(1) - (4)]), '+'));
  }
    break;

  case 870:
/* Line 1792 of yacc.c  */
#line 6858 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(4) - (5)]), 0, cb_build_binary_list ((yyvsp[(1) - (5)]), '+'));
  }
    break;

  case 871:
/* Line 1792 of yacc.c  */
#line 6862 "parser.y"
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[(4) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 873:
/* Line 1792 of yacc.c  */
#line 6869 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 874:
/* Line 1792 of yacc.c  */
#line 6876 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  }
    break;

  case 875:
/* Line 1792 of yacc.c  */
#line 6880 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  }
    break;

  case 876:
/* Line 1792 of yacc.c  */
#line 6890 "parser.y"
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  }
    break;

  case 878:
/* Line 1792 of yacc.c  */
#line 6899 "parser.y"
    {
	cb_emit_allocate ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), NULL, (yyvsp[(2) - (3)]));
  }
    break;

  case 879:
/* Line 1792 of yacc.c  */
#line 6903 "parser.y"
    {
	if ((yyvsp[(4) - (4)]) == NULL) {
		cb_error_x (CB_TREE (current_statement),
			    _("ALLOCATE CHARACTERS requires RETURNING clause"));
	} else {
		cb_emit_allocate (NULL, (yyvsp[(4) - (4)]), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
	}
  }
    break;

  case 880:
/* Line 1792 of yacc.c  */
#line 6914 "parser.y"
    { (yyval) = NULL; }
    break;

  case 881:
/* Line 1792 of yacc.c  */
#line 6915 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 882:
/* Line 1792 of yacc.c  */
#line 6923 "parser.y"
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER");
  }
    break;

  case 886:
/* Line 1792 of yacc.c  */
#line 6937 "parser.y"
    {
	cb_emit_alter ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 889:
/* Line 1792 of yacc.c  */
#line 6949 "parser.y"
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
	call_nothing = 0;
  }
    break;

  case 891:
/* Line 1792 of yacc.c  */
#line 6964 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(2) - (5)])) &&
	    current_program->prog_type == CB_PROGRAM_TYPE &&
	    !current_program->flag_recursive &&
	    !strcmp ((const char *)(CB_LITERAL((yyvsp[(2) - (5)]))->data), current_program->orig_program_id)) {
		cb_warning_x ((yyvsp[(2) - (5)]), _("recursive program call - assuming RECURSIVE attribute"));
		current_program->flag_recursive = 1;
	}
	/* For CALL ... RETURNING NOTHING, set the call convention bit */
	if (call_nothing) {
		if ((yyvsp[(1) - (5)]) && CB_INTEGER_P ((yyvsp[(1) - (5)]))) {
			(yyvsp[(1) - (5)]) = cb_int ((CB_INTEGER ((yyvsp[(1) - (5)]))->val) | CB_CONV_NO_RET_UPD);
		} else {
			(yyvsp[(1) - (5)]) = cb_int (CB_CONV_NO_RET_UPD);
		}
	}
	cb_emit_call ((yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]), CB_PAIR_X ((yyvsp[(5) - (5)])), CB_PAIR_Y ((yyvsp[(5) - (5)])), (yyvsp[(1) - (5)]));
  }
    break;

  case 892:
/* Line 1792 of yacc.c  */
#line 6986 "parser.y"
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
    break;

  case 893:
/* Line 1792 of yacc.c  */
#line 6991 "parser.y"
    {
	(yyval) = cb_int (CB_CONV_STATIC_LINK);
	cobc_cs_check = 0;
  }
    break;

  case 894:
/* Line 1792 of yacc.c  */
#line 6996 "parser.y"
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  }
    break;

  case 895:
/* Line 1792 of yacc.c  */
#line 7001 "parser.y"
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

  case 896:
/* Line 1792 of yacc.c  */
#line 7021 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 897:
/* Line 1792 of yacc.c  */
#line 7025 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
    break;

  case 898:
/* Line 1792 of yacc.c  */
#line 7030 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > COB_MAX_FIELD_PARAMS) {
		cb_error_x (CB_TREE (current_statement),
			    _("number of parameters exceeds maximum %d"),
			    COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 899:
/* Line 1792 of yacc.c  */
#line 7041 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 900:
/* Line 1792 of yacc.c  */
#line 7043 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 901:
/* Line 1792 of yacc.c  */
#line 7048 "parser.y"
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error_x (CB_TREE (current_statement),
			    _("OMITTED only allowed when parameters are passed BY REFERENCE"));
	}
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_null);
  }
    break;

  case 902:
/* Line 1792 of yacc.c  */
#line 7056 "parser.y"
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

  case 904:
/* Line 1792 of yacc.c  */
#line 7082 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
    break;

  case 905:
/* Line 1792 of yacc.c  */
#line 7086 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY CONTENT");
	} else {
		call_mode = CB_CALL_BY_CONTENT;
	}
  }
    break;

  case 906:
/* Line 1792 of yacc.c  */
#line 7095 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
    break;

  case 907:
/* Line 1792 of yacc.c  */
#line 7107 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 908:
/* Line 1792 of yacc.c  */
#line 7111 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 909:
/* Line 1792 of yacc.c  */
#line 7115 "parser.y"
    {
	(yyval) = cb_null;
  }
    break;

  case 910:
/* Line 1792 of yacc.c  */
#line 7119 "parser.y"
    {
	call_nothing = CB_CONV_NO_RET_UPD;
	(yyval) = cb_null;
  }
    break;

  case 911:
/* Line 1792 of yacc.c  */
#line 7124 "parser.y"
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

  case 916:
/* Line 1792 of yacc.c  */
#line 7157 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR (NULL, NULL);
  }
    break;

  case 917:
/* Line 1792 of yacc.c  */
#line 7161 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 918:
/* Line 1792 of yacc.c  */
#line 7165 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT EXCEPTION before EXCEPTION"));
	}
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 919:
/* Line 1792 of yacc.c  */
#line 7176 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 920:
/* Line 1792 of yacc.c  */
#line 7180 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 921:
/* Line 1792 of yacc.c  */
#line 7187 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 922:
/* Line 1792 of yacc.c  */
#line 7191 "parser.y"
    {
	cb_verify (cb_call_overflow, "ON OVERFLOW");
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 923:
/* Line 1792 of yacc.c  */
#line 7199 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 924:
/* Line 1792 of yacc.c  */
#line 7203 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 925:
/* Line 1792 of yacc.c  */
#line 7210 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 926:
/* Line 1792 of yacc.c  */
#line 7217 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  }
    break;

  case 927:
/* Line 1792 of yacc.c  */
#line 7221 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  }
    break;

  case 928:
/* Line 1792 of yacc.c  */
#line 7231 "parser.y"
    {
	begin_statement ("CANCEL", 0);
  }
    break;

  case 930:
/* Line 1792 of yacc.c  */
#line 7239 "parser.y"
    {
	cb_emit_cancel ((yyvsp[(1) - (1)]));
  }
    break;

  case 931:
/* Line 1792 of yacc.c  */
#line 7243 "parser.y"
    {
	cb_emit_cancel ((yyvsp[(2) - (2)]));
  }
    break;

  case 932:
/* Line 1792 of yacc.c  */
#line 7253 "parser.y"
    {
	begin_statement ("CLOSE", 0);
  }
    break;

  case 934:
/* Line 1792 of yacc.c  */
#line 7261 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 935:
/* Line 1792 of yacc.c  */
#line 7266 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 936:
/* Line 1792 of yacc.c  */
#line 7273 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_NORMAL); }
    break;

  case 937:
/* Line 1792 of yacc.c  */
#line 7274 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_UNIT); }
    break;

  case 938:
/* Line 1792 of yacc.c  */
#line 7275 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); }
    break;

  case 939:
/* Line 1792 of yacc.c  */
#line 7276 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); }
    break;

  case 940:
/* Line 1792 of yacc.c  */
#line 7277 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_LOCK); }
    break;

  case 941:
/* Line 1792 of yacc.c  */
#line 7285 "parser.y"
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
    break;

  case 943:
/* Line 1792 of yacc.c  */
#line 7294 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(1) - (4)]), 0, (yyvsp[(3) - (4)]));
  }
    break;

  case 944:
/* Line 1792 of yacc.c  */
#line 7301 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  }
    break;

  case 945:
/* Line 1792 of yacc.c  */
#line 7305 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  }
    break;

  case 946:
/* Line 1792 of yacc.c  */
#line 7315 "parser.y"
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
    break;

  case 947:
/* Line 1792 of yacc.c  */
#line 7326 "parser.y"
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

  case 948:
/* Line 1792 of yacc.c  */
#line 7343 "parser.y"
    {
	begin_statement ("DELETE", TERM_DELETE);
  }
    break;

  case 950:
/* Line 1792 of yacc.c  */
#line 7352 "parser.y"
    {
	cb_emit_delete ((yyvsp[(1) - (3)]));
  }
    break;

  case 952:
/* Line 1792 of yacc.c  */
#line 7360 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[(1) - (1)]));
  }
    break;

  case 953:
/* Line 1792 of yacc.c  */
#line 7365 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[(2) - (2)]));
  }
    break;

  case 954:
/* Line 1792 of yacc.c  */
#line 7373 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  }
    break;

  case 955:
/* Line 1792 of yacc.c  */
#line 7377 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  }
    break;

  case 956:
/* Line 1792 of yacc.c  */
#line 7387 "parser.y"
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
	display_type = UNKNOWN_DISPLAY;
	is_first_display_item = 1;
  }
    break;

  case 958:
/* Line 1792 of yacc.c  */
#line 7399 "parser.y"
    {
	cb_emit_env_name ((yyvsp[(1) - (3)]));
  }
    break;

  case 959:
/* Line 1792 of yacc.c  */
#line 7403 "parser.y"
    {
	cb_emit_env_value ((yyvsp[(1) - (3)]));
  }
    break;

  case 960:
/* Line 1792 of yacc.c  */
#line 7407 "parser.y"
    {
	cb_emit_arg_number ((yyvsp[(1) - (3)]));
  }
    break;

  case 961:
/* Line 1792 of yacc.c  */
#line 7411 "parser.y"
    {
	cb_emit_command_line ((yyvsp[(1) - (3)]));
  }
    break;

  case 963:
/* Line 1792 of yacc.c  */
#line 7419 "parser.y"
    {
	if ((yyvsp[(2) - (2)]) != NULL) {
		error_if_different_display_type ((yyvsp[(2) - (2)]), NULL, NULL, NULL);
		cb_emit_display ((yyvsp[(2) - (2)]), NULL, cb_int1, NULL, NULL, 0,
				 display_type);
	}
  }
    break;

  case 964:
/* Line 1792 of yacc.c  */
#line 7427 "parser.y"
    {
	set_display_type ((yyvsp[(1) - (1)]), NULL, NULL, NULL);
	cb_emit_display ((yyvsp[(1) - (1)]), NULL, cb_int1, NULL, NULL, 1,
			 display_type);
  }
    break;

  case 967:
/* Line 1792 of yacc.c  */
#line 7441 "parser.y"
    {
	check_duplicate = 0;
	check_line_col_duplicate = 0;
  	advancing_value = cb_int1;
	upon_value = NULL;
	line_column = NULL;
  }
    break;

  case 968:
/* Line 1792 of yacc.c  */
#line 7449 "parser.y"
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

  case 969:
/* Line 1792 of yacc.c  */
#line 7486 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 970:
/* Line 1792 of yacc.c  */
#line 7490 "parser.y"
    {
	CB_PENDING ("DISPLAY OMITTED");
	(yyval) = cb_null;
  }
    break;

  case 973:
/* Line 1792 of yacc.c  */
#line 7503 "parser.y"
    {
	check_repeated ("UPON", SYN_CLAUSE_1, &check_duplicate);
  }
    break;

  case 974:
/* Line 1792 of yacc.c  */
#line 7507 "parser.y"
    {
 	check_repeated ("NO ADVANCING", SYN_CLAUSE_2, &check_duplicate);
	advancing_value = cb_int0;
  }
    break;

  case 975:
/* Line 1792 of yacc.c  */
#line 7512 "parser.y"
    {
	check_repeated ("MODE IS BLOCK", SYN_CLAUSE_3, &check_duplicate);
  }
    break;

  case 978:
/* Line 1792 of yacc.c  */
#line 7521 "parser.y"
    {
	upon_value = cb_build_display_mnemonic ((yyvsp[(2) - (2)]));
  }
    break;

  case 979:
/* Line 1792 of yacc.c  */
#line 7525 "parser.y"
    {
	upon_value = cb_build_display_name ((yyvsp[(2) - (2)]));
  }
    break;

  case 980:
/* Line 1792 of yacc.c  */
#line 7529 "parser.y"
    {
	upon_value = cb_int0;
  }
    break;

  case 981:
/* Line 1792 of yacc.c  */
#line 7533 "parser.y"
    {
	upon_value = cb_null;
  }
    break;

  case 984:
/* Line 1792 of yacc.c  */
#line 7545 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
    break;

  case 985:
/* Line 1792 of yacc.c  */
#line 7549 "parser.y"
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "BLANK LINE", COB_SCREEN_BLANK_LINE,
				     "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
    break;

  case 986:
/* Line 1792 of yacc.c  */
#line 7555 "parser.y"
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN,
				     "BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
    break;

  case 987:
/* Line 1792 of yacc.c  */
#line 7561 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
    break;

  case 988:
/* Line 1792 of yacc.c  */
#line 7565 "parser.y"
    {
	cb_warning (_("ignoring CONVERSION"));
  }
    break;

  case 989:
/* Line 1792 of yacc.c  */
#line 7569 "parser.y"
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "ERASE EOL", COB_SCREEN_ERASE_EOL,
				     "ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
    break;

  case 990:
/* Line 1792 of yacc.c  */
#line 7575 "parser.y"
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "ERASE EOS", COB_SCREEN_ERASE_EOS,
				     "ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
    break;

  case 991:
/* Line 1792 of yacc.c  */
#line 7581 "parser.y"
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
    break;

  case 992:
/* Line 1792 of yacc.c  */
#line 7587 "parser.y"
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 993:
/* Line 1792 of yacc.c  */
#line 7593 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
    break;

  case 994:
/* Line 1792 of yacc.c  */
#line 7597 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
    break;

  case 995:
/* Line 1792 of yacc.c  */
#line 7601 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[(3) - (3)]), 0);
  }
    break;

  case 996:
/* Line 1792 of yacc.c  */
#line 7605 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
    break;

  case 997:
/* Line 1792 of yacc.c  */
#line 7609 "parser.y"
    {
	check_attribs ((yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 998:
/* Line 1792 of yacc.c  */
#line 7613 "parser.y"
    {
	check_attribs (NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 999:
/* Line 1792 of yacc.c  */
#line 7617 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, 0);
  }
    break;

  case 1000:
/* Line 1792 of yacc.c  */
#line 7621 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
    break;

  case 1001:
/* Line 1792 of yacc.c  */
#line 7628 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  }
    break;

  case 1002:
/* Line 1792 of yacc.c  */
#line 7632 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  }
    break;

  case 1003:
/* Line 1792 of yacc.c  */
#line 7642 "parser.y"
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
    break;

  case 1005:
/* Line 1792 of yacc.c  */
#line 7651 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '/', (yyvsp[(1) - (4)]));
  }
    break;

  case 1006:
/* Line 1792 of yacc.c  */
#line 7655 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(3) - (6)]), '/', (yyvsp[(1) - (6)])));
  }
    break;

  case 1007:
/* Line 1792 of yacc.c  */
#line 7659 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(1) - (6)]), '/', (yyvsp[(3) - (6)])));
  }
    break;

  case 1008:
/* Line 1792 of yacc.c  */
#line 7663 "parser.y"
    {
	cb_emit_divide ((yyvsp[(3) - (8)]), (yyvsp[(1) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
  }
    break;

  case 1009:
/* Line 1792 of yacc.c  */
#line 7667 "parser.y"
    {
	cb_emit_divide ((yyvsp[(1) - (8)]), (yyvsp[(3) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
  }
    break;

  case 1010:
/* Line 1792 of yacc.c  */
#line 7674 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  }
    break;

  case 1011:
/* Line 1792 of yacc.c  */
#line 7678 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  }
    break;

  case 1012:
/* Line 1792 of yacc.c  */
#line 7688 "parser.y"
    {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
  }
    break;

  case 1014:
/* Line 1792 of yacc.c  */
#line 7697 "parser.y"
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "ENTRY");
	} else if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "ENTRY");
	} else if (cb_verify (cb_entry_statement, "ENTRY")) {
		if (!cobc_check_valid_name ((char *)(CB_LITERAL ((yyvsp[(1) - (2)]))->data), 1U)) {
			emit_entry ((char *)(CB_LITERAL ((yyvsp[(1) - (2)]))->data), 1, (yyvsp[(2) - (2)]));
		}
	}
  }
    break;

  case 1015:
/* Line 1792 of yacc.c  */
#line 7715 "parser.y"
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

  case 1017:
/* Line 1792 of yacc.c  */
#line 7739 "parser.y"
    {
	cb_emit_evaluate ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	eval_level--;
  }
    break;

  case 1018:
/* Line 1792 of yacc.c  */
#line 7746 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1019:
/* Line 1792 of yacc.c  */
#line 7748 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1020:
/* Line 1792 of yacc.c  */
#line 7753 "parser.y"
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

  case 1021:
/* Line 1792 of yacc.c  */
#line 7764 "parser.y"
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

  case 1022:
/* Line 1792 of yacc.c  */
#line 7775 "parser.y"
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

  case 1023:
/* Line 1792 of yacc.c  */
#line 7789 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1024:
/* Line 1792 of yacc.c  */
#line 7793 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1025:
/* Line 1792 of yacc.c  */
#line 7799 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1026:
/* Line 1792 of yacc.c  */
#line 7801 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1027:
/* Line 1792 of yacc.c  */
#line 7807 "parser.y"
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
	eval_inc2 = 0;
  }
    break;

  case 1028:
/* Line 1792 of yacc.c  */
#line 7816 "parser.y"
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[(3) - (3)]), NULL);
	eval_inc2 = 0;
  }
    break;

  case 1029:
/* Line 1792 of yacc.c  */
#line 7824 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(2) - (2)]));
	eval_inc2 = 0;
  }
    break;

  case 1030:
/* Line 1792 of yacc.c  */
#line 7830 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
	eval_inc2 = 0;
  }
    break;

  case 1031:
/* Line 1792 of yacc.c  */
#line 7837 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1032:
/* Line 1792 of yacc.c  */
#line 7839 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1033:
/* Line 1792 of yacc.c  */
#line 7844 "parser.y"
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

  case 1034:
/* Line 1792 of yacc.c  */
#line 7905 "parser.y"
    { (yyval) = cb_any; eval_inc2++; }
    break;

  case 1035:
/* Line 1792 of yacc.c  */
#line 7906 "parser.y"
    { (yyval) = cb_true; eval_inc2++; }
    break;

  case 1036:
/* Line 1792 of yacc.c  */
#line 7907 "parser.y"
    { (yyval) = cb_false; eval_inc2++; }
    break;

  case 1037:
/* Line 1792 of yacc.c  */
#line 7911 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1038:
/* Line 1792 of yacc.c  */
#line 7912 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1039:
/* Line 1792 of yacc.c  */
#line 7917 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  }
    break;

  case 1040:
/* Line 1792 of yacc.c  */
#line 7921 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  }
    break;

  case 1041:
/* Line 1792 of yacc.c  */
#line 7931 "parser.y"
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
    break;

  case 1042:
/* Line 1792 of yacc.c  */
#line 7936 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 1044:
/* Line 1792 of yacc.c  */
#line 7944 "parser.y"
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

  case 1045:
/* Line 1792 of yacc.c  */
#line 7965 "parser.y"
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

  case 1046:
/* Line 1792 of yacc.c  */
#line 7979 "parser.y"
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

  case 1047:
/* Line 1792 of yacc.c  */
#line 8001 "parser.y"
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

  case 1048:
/* Line 1792 of yacc.c  */
#line 8023 "parser.y"
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

  case 1049:
/* Line 1792 of yacc.c  */
#line 8043 "parser.y"
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

  case 1050:
/* Line 1792 of yacc.c  */
#line 8065 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1051:
/* Line 1792 of yacc.c  */
#line 8066 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1052:
/* Line 1792 of yacc.c  */
#line 8074 "parser.y"
    {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
    break;

  case 1054:
/* Line 1792 of yacc.c  */
#line 8083 "parser.y"
    {
	cb_emit_free ((yyvsp[(1) - (1)]));
  }
    break;

  case 1055:
/* Line 1792 of yacc.c  */
#line 8093 "parser.y"
    {
	begin_statement ("GENERATE", 0);
	CB_PENDING("GENERATE");
  }
    break;

  case 1058:
/* Line 1792 of yacc.c  */
#line 8109 "parser.y"
    {
	if (!current_paragraph->flag_statement) {
		current_paragraph->flag_first_is_goto = 1;
	}
	begin_statement ("GO TO", 0);
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1060:
/* Line 1792 of yacc.c  */
#line 8122 "parser.y"
    {
	cb_emit_goto ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
	start_debug = save_debug;
  }
    break;

  case 1061:
/* Line 1792 of yacc.c  */
#line 8130 "parser.y"
    {
	check_unreached = 1;
	(yyval) = NULL;
  }
    break;

  case 1062:
/* Line 1792 of yacc.c  */
#line 8135 "parser.y"
    {
	check_unreached = 0;
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 1063:
/* Line 1792 of yacc.c  */
#line 8146 "parser.y"
    {
	begin_statement ("GOBACK", 0);
	check_unreached = 1;
	if ((yyvsp[(2) - (2)]) != NULL) {
		cb_emit_move ((yyvsp[(2) - (2)]), CB_LIST_INIT (current_program->cb_return_code));
	}
	cb_emit_exit (1U);
  }
    break;

  case 1064:
/* Line 1792 of yacc.c  */
#line 8161 "parser.y"
    {
	begin_statement ("IF", TERM_IF);
  }
    break;

  case 1066:
/* Line 1792 of yacc.c  */
#line 8170 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1067:
/* Line 1792 of yacc.c  */
#line 8174 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[(2) - (2)]));
  }
    break;

  case 1068:
/* Line 1792 of yacc.c  */
#line 8178 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[(1) - (1)]), NULL);
  }
    break;

  case 1069:
/* Line 1792 of yacc.c  */
#line 8185 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  }
    break;

  case 1070:
/* Line 1792 of yacc.c  */
#line 8189 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  }
    break;

  case 1071:
/* Line 1792 of yacc.c  */
#line 8199 "parser.y"
    {
	begin_statement ("INITIALIZE", 0);
  }
    break;

  case 1073:
/* Line 1792 of yacc.c  */
#line 8208 "parser.y"
    {
	cb_emit_initialize ((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));
  }
    break;

  case 1074:
/* Line 1792 of yacc.c  */
#line 8214 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1075:
/* Line 1792 of yacc.c  */
#line 8215 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1076:
/* Line 1792 of yacc.c  */
#line 8219 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1077:
/* Line 1792 of yacc.c  */
#line 8220 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1078:
/* Line 1792 of yacc.c  */
#line 8221 "parser.y"
    { (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 1079:
/* Line 1792 of yacc.c  */
#line 8226 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1080:
/* Line 1792 of yacc.c  */
#line 8230 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1081:
/* Line 1792 of yacc.c  */
#line 8237 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1082:
/* Line 1792 of yacc.c  */
#line 8242 "parser.y"
    {
	(yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1083:
/* Line 1792 of yacc.c  */
#line 8249 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1084:
/* Line 1792 of yacc.c  */
#line 8255 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); }
    break;

  case 1085:
/* Line 1792 of yacc.c  */
#line 8256 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); }
    break;

  case 1086:
/* Line 1792 of yacc.c  */
#line 8257 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); }
    break;

  case 1087:
/* Line 1792 of yacc.c  */
#line 8258 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
    break;

  case 1088:
/* Line 1792 of yacc.c  */
#line 8259 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
    break;

  case 1089:
/* Line 1792 of yacc.c  */
#line 8260 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); }
    break;

  case 1090:
/* Line 1792 of yacc.c  */
#line 8261 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
    break;

  case 1091:
/* Line 1792 of yacc.c  */
#line 8266 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1092:
/* Line 1792 of yacc.c  */
#line 8270 "parser.y"
    {
	(yyval) = cb_true;
  }
    break;

  case 1093:
/* Line 1792 of yacc.c  */
#line 8279 "parser.y"
    {
	begin_statement ("INITIATE", 0);
	CB_PENDING("INITIATE");
  }
    break;

  case 1095:
/* Line 1792 of yacc.c  */
#line 8288 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
	}
  }
    break;

  case 1096:
/* Line 1792 of yacc.c  */
#line 8294 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(2) - (2)]) != cb_error_node) {
	}
  }
    break;

  case 1097:
/* Line 1792 of yacc.c  */
#line 8305 "parser.y"
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
    break;

  case 1100:
/* Line 1792 of yacc.c  */
#line 8318 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1101:
/* Line 1792 of yacc.c  */
#line 8322 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1102:
/* Line 1792 of yacc.c  */
#line 8326 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1107:
/* Line 1792 of yacc.c  */
#line 8342 "parser.y"
    {
	previous_tallying_phrase = NO_PHRASE;
	cb_init_tallying ();
  }
    break;

  case 1108:
/* Line 1792 of yacc.c  */
#line 8347 "parser.y"
    {
	if (!(previous_tallying_phrase == CHARACTERS_PHRASE
	      || previous_tallying_phrase == VALUE_REGION_PHRASE)) {
		cb_error (_("TALLYING clause is incomplete"));
	} else {
		cb_emit_inspect ((yyvsp[(0) - (3)]), (yyvsp[(3) - (3)]), cb_int0, 0);
	}

	(yyval) = (yyvsp[(0) - (3)]);
  }
    break;

  case 1109:
/* Line 1792 of yacc.c  */
#line 8363 "parser.y"
    {
	cb_emit_inspect ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]), cb_int1, 1);
	inspect_keyword = 0;
  }
    break;

  case 1110:
/* Line 1792 of yacc.c  */
#line 8373 "parser.y"
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));
	cb_emit_inspect ((yyvsp[(0) - (5)]), x, cb_int0, 2);
  }
    break;

  case 1111:
/* Line 1792 of yacc.c  */
#line 8382 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1112:
/* Line 1792 of yacc.c  */
#line 8386 "parser.y"
    {
	(yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1113:
/* Line 1792 of yacc.c  */
#line 8393 "parser.y"
    {
	check_preceding_tallying_phrases (FOR_PHRASE);
	(yyval) = cb_build_tallying_data ((yyvsp[(1) - (2)]));
  }
    break;

  case 1114:
/* Line 1792 of yacc.c  */
#line 8398 "parser.y"
    {
	check_preceding_tallying_phrases (CHARACTERS_PHRASE);
	(yyval) = cb_build_tallying_characters ((yyvsp[(2) - (2)]));
  }
    break;

  case 1115:
/* Line 1792 of yacc.c  */
#line 8403 "parser.y"
    {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	(yyval) = cb_build_tallying_all ();
  }
    break;

  case 1116:
/* Line 1792 of yacc.c  */
#line 8408 "parser.y"
    {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	(yyval) = cb_build_tallying_leading ();
  }
    break;

  case 1117:
/* Line 1792 of yacc.c  */
#line 8413 "parser.y"
    {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	(yyval) = cb_build_tallying_trailing ();
  }
    break;

  case 1118:
/* Line 1792 of yacc.c  */
#line 8418 "parser.y"
    {
	check_preceding_tallying_phrases (VALUE_REGION_PHRASE);
	(yyval) = cb_build_tallying_value ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1119:
/* Line 1792 of yacc.c  */
#line 8425 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1120:
/* Line 1792 of yacc.c  */
#line 8426 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1121:
/* Line 1792 of yacc.c  */
#line 8431 "parser.y"
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
	inspect_keyword = 0;
  }
    break;

  case 1122:
/* Line 1792 of yacc.c  */
#line 8436 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1124:
/* Line 1792 of yacc.c  */
#line 8443 "parser.y"
    { inspect_keyword = 1; }
    break;

  case 1125:
/* Line 1792 of yacc.c  */
#line 8444 "parser.y"
    { inspect_keyword = 2; }
    break;

  case 1126:
/* Line 1792 of yacc.c  */
#line 8445 "parser.y"
    { inspect_keyword = 3; }
    break;

  case 1127:
/* Line 1792 of yacc.c  */
#line 8446 "parser.y"
    { inspect_keyword = 4; }
    break;

  case 1128:
/* Line 1792 of yacc.c  */
#line 8451 "parser.y"
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

  case 1129:
/* Line 1792 of yacc.c  */
#line 8478 "parser.y"
    {
	(yyval) = cb_build_inspect_region_start ();
  }
    break;

  case 1130:
/* Line 1792 of yacc.c  */
#line 8482 "parser.y"
    {
	(yyval) = cb_list_add (cb_build_inspect_region_start (), (yyvsp[(1) - (1)]));
  }
    break;

  case 1131:
/* Line 1792 of yacc.c  */
#line 8486 "parser.y"
    {
	(yyval) = cb_list_add (cb_build_inspect_region_start (), (yyvsp[(1) - (1)]));
  }
    break;

  case 1132:
/* Line 1792 of yacc.c  */
#line 8490 "parser.y"
    {
	(yyval) = cb_list_add (cb_list_add (cb_build_inspect_region_start (), (yyvsp[(1) - (2)])), (yyvsp[(2) - (2)]));
  }
    break;

  case 1133:
/* Line 1792 of yacc.c  */
#line 8494 "parser.y"
    {
	(yyval) = cb_list_add (cb_list_add (cb_build_inspect_region_start (), (yyvsp[(1) - (2)])), (yyvsp[(2) - (2)]));
  }
    break;

  case 1134:
/* Line 1792 of yacc.c  */
#line 8501 "parser.y"
    {
	(yyval) = CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[(3) - (3)]));
  }
    break;

  case 1135:
/* Line 1792 of yacc.c  */
#line 8508 "parser.y"
    {
	(yyval) = CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[(3) - (3)]));
  }
    break;

  case 1136:
/* Line 1792 of yacc.c  */
#line 8517 "parser.y"
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
    break;

  case 1138:
/* Line 1792 of yacc.c  */
#line 8529 "parser.y"
    {
	begin_statement ("MOVE", 0);
  }
    break;

  case 1140:
/* Line 1792 of yacc.c  */
#line 8537 "parser.y"
    {
	cb_emit_move ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1141:
/* Line 1792 of yacc.c  */
#line 8541 "parser.y"
    {
	cb_emit_move_corresponding ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1142:
/* Line 1792 of yacc.c  */
#line 8551 "parser.y"
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
    break;

  case 1144:
/* Line 1792 of yacc.c  */
#line 8560 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '*', (yyvsp[(1) - (4)]));
  }
    break;

  case 1145:
/* Line 1792 of yacc.c  */
#line 8564 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(1) - (6)]), '*', (yyvsp[(3) - (6)])));
  }
    break;

  case 1146:
/* Line 1792 of yacc.c  */
#line 8571 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  }
    break;

  case 1147:
/* Line 1792 of yacc.c  */
#line 8575 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  }
    break;

  case 1148:
/* Line 1792 of yacc.c  */
#line 8585 "parser.y"
    {
	begin_statement ("OPEN", 0);
  }
    break;

  case 1150:
/* Line 1792 of yacc.c  */
#line 8593 "parser.y"
    {
	cb_tree l;
	cb_tree x;

	if ((yyvsp[(2) - (4)]) && (yyvsp[(4) - (4)])) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s and %s are mutually exclusive"), "SHARING", _("LOCK clauses"));
	}
	if ((yyvsp[(4) - (4)])) {
		x = (yyvsp[(4) - (4)]);
	} else {
		x = (yyvsp[(2) - (4)]);
	}
	for (l = (yyvsp[(3) - (4)]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			begin_implicit_statement ();
			cb_emit_open (CB_VALUE (l), (yyvsp[(1) - (4)]), x);
		}
	}
  }
    break;

  case 1151:
/* Line 1792 of yacc.c  */
#line 8614 "parser.y"
    {
	cb_tree l;
	cb_tree x;

	if ((yyvsp[(3) - (5)]) && (yyvsp[(5) - (5)])) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s and %s are mutually exclusive"), "SHARING", _("LOCK clauses"));
	}
	if ((yyvsp[(5) - (5)])) {
		x = (yyvsp[(5) - (5)]);
	} else {
		x = (yyvsp[(3) - (5)]);
	}
	for (l = (yyvsp[(4) - (5)]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			begin_implicit_statement ();
			cb_emit_open (CB_VALUE (l), (yyvsp[(2) - (5)]), x);
		}
	}
  }
    break;

  case 1152:
/* Line 1792 of yacc.c  */
#line 8637 "parser.y"
    { (yyval) = cb_int (COB_OPEN_INPUT); }
    break;

  case 1153:
/* Line 1792 of yacc.c  */
#line 8638 "parser.y"
    { (yyval) = cb_int (COB_OPEN_OUTPUT); }
    break;

  case 1154:
/* Line 1792 of yacc.c  */
#line 8639 "parser.y"
    { (yyval) = cb_int (COB_OPEN_I_O); }
    break;

  case 1155:
/* Line 1792 of yacc.c  */
#line 8640 "parser.y"
    { (yyval) = cb_int (COB_OPEN_EXTEND); }
    break;

  case 1156:
/* Line 1792 of yacc.c  */
#line 8644 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1157:
/* Line 1792 of yacc.c  */
#line 8645 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1158:
/* Line 1792 of yacc.c  */
#line 8649 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1159:
/* Line 1792 of yacc.c  */
#line 8650 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1160:
/* Line 1792 of yacc.c  */
#line 8651 "parser.y"
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
    break;

  case 1161:
/* Line 1792 of yacc.c  */
#line 8653 "parser.y"
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  }
    break;

  case 1162:
/* Line 1792 of yacc.c  */
#line 8664 "parser.y"
    {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1164:
/* Line 1792 of yacc.c  */
#line 8675 "parser.y"
    {
	cb_emit_perform ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
	start_debug = save_debug;
  }
    break;

  case 1165:
/* Line 1792 of yacc.c  */
#line 8680 "parser.y"
    {
	CB_ADD_TO_CHAIN ((yyvsp[(1) - (1)]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
  }
    break;

  case 1166:
/* Line 1792 of yacc.c  */
#line 8686 "parser.y"
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1167:
/* Line 1792 of yacc.c  */
#line 8691 "parser.y"
    {
	cb_emit_perform ((yyvsp[(1) - (2)]), NULL);
	start_debug = save_debug;
  }
    break;

  case 1168:
/* Line 1792 of yacc.c  */
#line 8699 "parser.y"
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-4) - (0)]), PERFORM);
	}
  }
    break;

  case 1169:
/* Line 1792 of yacc.c  */
#line 8707 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  }
    break;

  case 1170:
/* Line 1792 of yacc.c  */
#line 8714 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  }
    break;

  case 1171:
/* Line 1792 of yacc.c  */
#line 8718 "parser.y"
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-2) - (1)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-2) - (1)]), PERFORM);
	}
	/* Put the dot token back into the stack for reparse */
	cb_unput_dot ();
  }
    break;

  case 1172:
/* Line 1792 of yacc.c  */
#line 8731 "parser.y"
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[(1) - (1)]))->length = cb_true;
	CB_REFERENCE ((yyvsp[(1) - (1)]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (1)]), (yyvsp[(1) - (1)]));
  }
    break;

  case 1173:
/* Line 1792 of yacc.c  */
#line 8738 "parser.y"
    {
	/* Return from $3 */
	CB_REFERENCE ((yyvsp[(3) - (3)]))->length = cb_true;
	CB_REFERENCE ((yyvsp[(1) - (3)]))->flag_decl_ok = 1;
	CB_REFERENCE ((yyvsp[(3) - (3)]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1174:
/* Line 1792 of yacc.c  */
#line 8749 "parser.y"
    {
	(yyval) = cb_build_perform_once (NULL);
  }
    break;

  case 1175:
/* Line 1792 of yacc.c  */
#line 8753 "parser.y"
    {
	(yyval) = cb_build_perform_times ((yyvsp[(1) - (2)]));
	current_program->loop_counter++;
  }
    break;

  case 1176:
/* Line 1792 of yacc.c  */
#line 8758 "parser.y"
    {
	(yyval) = cb_build_perform_forever (NULL);
  }
    break;

  case 1177:
/* Line 1792 of yacc.c  */
#line 8762 "parser.y"
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

  case 1178:
/* Line 1792 of yacc.c  */
#line 8773 "parser.y"
    {
	(yyval) = cb_build_perform_until ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1179:
/* Line 1792 of yacc.c  */
#line 8779 "parser.y"
    { (yyval) = CB_BEFORE; }
    break;

  case 1180:
/* Line 1792 of yacc.c  */
#line 8780 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1181:
/* Line 1792 of yacc.c  */
#line 8784 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1182:
/* Line 1792 of yacc.c  */
#line 8785 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1183:
/* Line 1792 of yacc.c  */
#line 8788 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1184:
/* Line 1792 of yacc.c  */
#line 8790 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1185:
/* Line 1792 of yacc.c  */
#line 8795 "parser.y"
    {
	(yyval) = cb_build_perform_varying ((yyvsp[(1) - (7)]), (yyvsp[(3) - (7)]), (yyvsp[(5) - (7)]), (yyvsp[(7) - (7)]));
  }
    break;

  case 1186:
/* Line 1792 of yacc.c  */
#line 8805 "parser.y"
    {
	begin_statement ("READ", TERM_READ);
  }
    break;

  case 1188:
/* Line 1792 of yacc.c  */
#line 8814 "parser.y"
    {
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

  case 1189:
/* Line 1792 of yacc.c  */
#line 8840 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1190:
/* Line 1792 of yacc.c  */
#line 8841 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1191:
/* Line 1792 of yacc.c  */
#line 8846 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1192:
/* Line 1792 of yacc.c  */
#line 8850 "parser.y"
    {
	(yyval) = cb_int3;
  }
    break;

  case 1193:
/* Line 1792 of yacc.c  */
#line 8854 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1194:
/* Line 1792 of yacc.c  */
#line 8858 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1195:
/* Line 1792 of yacc.c  */
#line 8862 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 1196:
/* Line 1792 of yacc.c  */
#line 8866 "parser.y"
    {
	(yyval) = cb_int3;
  }
    break;

  case 1197:
/* Line 1792 of yacc.c  */
#line 8870 "parser.y"
    {
	(yyval) = cb_int4;
  }
    break;

  case 1198:
/* Line 1792 of yacc.c  */
#line 8876 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1199:
/* Line 1792 of yacc.c  */
#line 8877 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1202:
/* Line 1792 of yacc.c  */
#line 8887 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  }
    break;

  case 1203:
/* Line 1792 of yacc.c  */
#line 8891 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  }
    break;

  case 1204:
/* Line 1792 of yacc.c  */
#line 8901 "parser.y"
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
    break;

  case 1205:
/* Line 1792 of yacc.c  */
#line 8911 "parser.y"
    {
	begin_statement ("RELEASE", 0);
  }
    break;

  case 1207:
/* Line 1792 of yacc.c  */
#line 8919 "parser.y"
    {
	cb_emit_release ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1208:
/* Line 1792 of yacc.c  */
#line 8929 "parser.y"
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
    break;

  case 1209:
/* Line 1792 of yacc.c  */
#line 8939 "parser.y"
    {
	begin_statement ("RETURN", TERM_RETURN);
  }
    break;

  case 1211:
/* Line 1792 of yacc.c  */
#line 8948 "parser.y"
    {
	cb_emit_return ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1212:
/* Line 1792 of yacc.c  */
#line 8955 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  }
    break;

  case 1213:
/* Line 1792 of yacc.c  */
#line 8959 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  }
    break;

  case 1214:
/* Line 1792 of yacc.c  */
#line 8969 "parser.y"
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1216:
/* Line 1792 of yacc.c  */
#line 8981 "parser.y"
    {
	cb_emit_rewrite ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]));
	start_debug = save_debug;
  }
    break;

  case 1217:
/* Line 1792 of yacc.c  */
#line 8989 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1218:
/* Line 1792 of yacc.c  */
#line 8993 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1219:
/* Line 1792 of yacc.c  */
#line 8997 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 1220:
/* Line 1792 of yacc.c  */
#line 9004 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  }
    break;

  case 1221:
/* Line 1792 of yacc.c  */
#line 9008 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  }
    break;

  case 1222:
/* Line 1792 of yacc.c  */
#line 9018 "parser.y"
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
    break;

  case 1223:
/* Line 1792 of yacc.c  */
#line 9029 "parser.y"
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
    break;

  case 1225:
/* Line 1792 of yacc.c  */
#line 9038 "parser.y"
    {
	cb_emit_search ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1226:
/* Line 1792 of yacc.c  */
#line 9043 "parser.y"
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]), (yyvsp[(6) - (6)]));
  }
    break;

  case 1227:
/* Line 1792 of yacc.c  */
#line 9050 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1228:
/* Line 1792 of yacc.c  */
#line 9051 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1229:
/* Line 1792 of yacc.c  */
#line 9056 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1230:
/* Line 1792 of yacc.c  */
#line 9061 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1231:
/* Line 1792 of yacc.c  */
#line 9068 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1232:
/* Line 1792 of yacc.c  */
#line 9072 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 1233:
/* Line 1792 of yacc.c  */
#line 9080 "parser.y"
    {
	(yyval) = cb_build_if_check_break ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1234:
/* Line 1792 of yacc.c  */
#line 9087 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  }
    break;

  case 1235:
/* Line 1792 of yacc.c  */
#line 9091 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  }
    break;

  case 1236:
/* Line 1792 of yacc.c  */
#line 9101 "parser.y"
    {
	begin_statement ("SET", 0);
	setattr_val_on = 0;
	setattr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
    break;

  case 1237:
/* Line 1792 of yacc.c  */
#line 9108 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 1245:
/* Line 1792 of yacc.c  */
#line 9124 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1246:
/* Line 1792 of yacc.c  */
#line 9125 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1247:
/* Line 1792 of yacc.c  */
#line 9129 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1248:
/* Line 1792 of yacc.c  */
#line 9130 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1249:
/* Line 1792 of yacc.c  */
#line 9137 "parser.y"
    {
	cb_emit_setenv ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1250:
/* Line 1792 of yacc.c  */
#line 9146 "parser.y"
    {
	cb_emit_set_attribute ((yyvsp[(1) - (3)]), setattr_val_on, setattr_val_off);
  }
    break;

  case 1253:
/* Line 1792 of yacc.c  */
#line 9158 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_BELL);
  }
    break;

  case 1254:
/* Line 1792 of yacc.c  */
#line 9162 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_BLINK);
  }
    break;

  case 1255:
/* Line 1792 of yacc.c  */
#line 9166 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_HIGHLIGHT);
	check_not_highlight_and_lowlight (setattr_val_on | setattr_val_off,
					  COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 1256:
/* Line 1792 of yacc.c  */
#line 9172 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_LOWLIGHT);
	check_not_highlight_and_lowlight (setattr_val_on | setattr_val_off,
					  COB_SCREEN_LOWLIGHT);
  }
    break;

  case 1257:
/* Line 1792 of yacc.c  */
#line 9178 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_REVERSE);
  }
    break;

  case 1258:
/* Line 1792 of yacc.c  */
#line 9182 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_UNDERLINE);
  }
    break;

  case 1259:
/* Line 1792 of yacc.c  */
#line 9186 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_LEFTLINE);
  }
    break;

  case 1260:
/* Line 1792 of yacc.c  */
#line 9190 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_OVERLINE);
  }
    break;

  case 1261:
/* Line 1792 of yacc.c  */
#line 9199 "parser.y"
    {
	cb_emit_set_to ((yyvsp[(1) - (4)]), cb_build_ppointer ((yyvsp[(4) - (4)])));
  }
    break;

  case 1262:
/* Line 1792 of yacc.c  */
#line 9203 "parser.y"
    {
	cb_emit_set_to ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1263:
/* Line 1792 of yacc.c  */
#line 9212 "parser.y"
    {
	cb_emit_set_up_down ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1266:
/* Line 1792 of yacc.c  */
#line 9226 "parser.y"
    {
	cb_emit_set_on_off ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1269:
/* Line 1792 of yacc.c  */
#line 9240 "parser.y"
    {
	cb_emit_set_true ((yyvsp[(1) - (3)]));
  }
    break;

  case 1270:
/* Line 1792 of yacc.c  */
#line 9244 "parser.y"
    {
	cb_emit_set_false ((yyvsp[(1) - (3)]));
  }
    break;

  case 1271:
/* Line 1792 of yacc.c  */
#line 9253 "parser.y"
    {
	  cb_emit_set_last_exception_to_off ();
  }
    break;

  case 1272:
/* Line 1792 of yacc.c  */
#line 9262 "parser.y"
    {
	begin_statement ("SORT", 0);
  }
    break;

  case 1274:
/* Line 1792 of yacc.c  */
#line 9270 "parser.y"
    {
	cb_tree		x;

	x = cb_ref ((yyvsp[(1) - (4)]));
	if (CB_VALID_TREE (x)) {
		if (CB_INVALID_TREE ((yyvsp[(2) - (4)]))) {
			if (CB_FILE_P (x)) {
				cb_error (_("file sort requires KEY phrase"));
			} else {
				/* FIXME: use key definition from OCCURS */
				cb_error (_("table sort without keys not implemented yet"));
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

  case 1275:
/* Line 1792 of yacc.c  */
#line 9292 "parser.y"
    {
	if ((yyvsp[(5) - (7)]) && CB_VALID_TREE ((yyvsp[(1) - (7)]))) {
		cb_emit_sort_finish ((yyvsp[(1) - (7)]));
	}
  }
    break;

  case 1276:
/* Line 1792 of yacc.c  */
#line 9301 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1277:
/* Line 1792 of yacc.c  */
#line 9306 "parser.y"
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

  case 1278:
/* Line 1792 of yacc.c  */
#line 9324 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1279:
/* Line 1792 of yacc.c  */
#line 9325 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1281:
/* Line 1792 of yacc.c  */
#line 9330 "parser.y"
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  }
    break;

  case 1282:
/* Line 1792 of yacc.c  */
#line 9337 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1283:
/* Line 1792 of yacc.c  */
#line 9338 "parser.y"
    { (yyval) = cb_ref ((yyvsp[(3) - (3)])); }
    break;

  case 1284:
/* Line 1792 of yacc.c  */
#line 9343 "parser.y"
    {
	if ((yyvsp[(0) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(0) - (0)])))) {
		cb_error (_("file sort requires USING or INPUT PROCEDURE"));
	}
  }
    break;

  case 1285:
/* Line 1792 of yacc.c  */
#line 9349 "parser.y"
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

  case 1286:
/* Line 1792 of yacc.c  */
#line 9359 "parser.y"
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

  case 1287:
/* Line 1792 of yacc.c  */
#line 9374 "parser.y"
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("file sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
    break;

  case 1288:
/* Line 1792 of yacc.c  */
#line 9380 "parser.y"
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

  case 1289:
/* Line 1792 of yacc.c  */
#line 9390 "parser.y"
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

  case 1290:
/* Line 1792 of yacc.c  */
#line 9406 "parser.y"
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
    break;

  case 1292:
/* Line 1792 of yacc.c  */
#line 9416 "parser.y"
    {
	if ((yyvsp[(3) - (4)]) && !(yyvsp[(2) - (4)])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SIZE/LENGTH invalid here"));
	} else {
		cb_emit_start ((yyvsp[(1) - (4)]), start_tree, (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]));
	}
  }
    break;

  case 1293:
/* Line 1792 of yacc.c  */
#line 9428 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1294:
/* Line 1792 of yacc.c  */
#line 9432 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 1295:
/* Line 1792 of yacc.c  */
#line 9439 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1296:
/* Line 1792 of yacc.c  */
#line 9443 "parser.y"
    {
	start_tree = (yyvsp[(3) - (4)]);
	(yyval) = (yyvsp[(4) - (4)]);
  }
    break;

  case 1297:
/* Line 1792 of yacc.c  */
#line 9448 "parser.y"
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  }
    break;

  case 1298:
/* Line 1792 of yacc.c  */
#line 9453 "parser.y"
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  }
    break;

  case 1299:
/* Line 1792 of yacc.c  */
#line 9460 "parser.y"
    { (yyval) = cb_int (COB_EQ); }
    break;

  case 1300:
/* Line 1792 of yacc.c  */
#line 9461 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_LE : COB_GT); }
    break;

  case 1301:
/* Line 1792 of yacc.c  */
#line 9462 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_GE : COB_LT); }
    break;

  case 1302:
/* Line 1792 of yacc.c  */
#line 9463 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_LT : COB_GE); }
    break;

  case 1303:
/* Line 1792 of yacc.c  */
#line 9464 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_GT : COB_LE); }
    break;

  case 1304:
/* Line 1792 of yacc.c  */
#line 9465 "parser.y"
    { (yyval) = cb_int (COB_NE); }
    break;

  case 1305:
/* Line 1792 of yacc.c  */
#line 9470 "parser.y"
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition not allowed on START statement"));
  }
    break;

  case 1308:
/* Line 1792 of yacc.c  */
#line 9483 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  }
    break;

  case 1309:
/* Line 1792 of yacc.c  */
#line 9487 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  }
    break;

  case 1310:
/* Line 1792 of yacc.c  */
#line 9497 "parser.y"
    {
	begin_statement ("STOP RUN", 0);
  }
    break;

  case 1311:
/* Line 1792 of yacc.c  */
#line 9501 "parser.y"
    {
	cb_emit_stop_run ((yyvsp[(4) - (4)]));
	check_unreached = 1;
	cobc_cs_check = 0;
  }
    break;

  case 1312:
/* Line 1792 of yacc.c  */
#line 9507 "parser.y"
    {
	begin_statement ("STOP", 0);
	cb_verify (cb_stop_literal_statement, "STOP literal");
	cb_emit_display (CB_LIST_INIT ((yyvsp[(2) - (2)])), cb_int0, cb_int1, NULL,
			 NULL, 1, DEVICE_DISPLAY);
	cb_emit_accept (cb_null, NULL, NULL);
	cobc_cs_check = 0;
  }
    break;

  case 1313:
/* Line 1792 of yacc.c  */
#line 9519 "parser.y"
    {
	(yyval) = current_program->cb_return_code;
  }
    break;

  case 1314:
/* Line 1792 of yacc.c  */
#line 9523 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1315:
/* Line 1792 of yacc.c  */
#line 9527 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1316:
/* Line 1792 of yacc.c  */
#line 9531 "parser.y"
    {
	if ((yyvsp[(4) - (4)])) {
		(yyval) = (yyvsp[(4) - (4)]);
	} else {
		(yyval) = cb_int1;
	}
  }
    break;

  case 1317:
/* Line 1792 of yacc.c  */
#line 9539 "parser.y"
    {
	if ((yyvsp[(4) - (4)])) {
		(yyval) = (yyvsp[(4) - (4)]);
	} else {
		(yyval) = cb_int0;
	}
  }
    break;

  case 1318:
/* Line 1792 of yacc.c  */
#line 9550 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1319:
/* Line 1792 of yacc.c  */
#line 9554 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1320:
/* Line 1792 of yacc.c  */
#line 9560 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1321:
/* Line 1792 of yacc.c  */
#line 9561 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1322:
/* Line 1792 of yacc.c  */
#line 9562 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1323:
/* Line 1792 of yacc.c  */
#line 9563 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1324:
/* Line 1792 of yacc.c  */
#line 9570 "parser.y"
    {
	begin_statement ("STRING", TERM_STRING);
	save_tree = NULL;
  }
    break;

  case 1326:
/* Line 1792 of yacc.c  */
#line 9580 "parser.y"
    {
	cb_emit_string (save_tree, (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]));
  }
    break;

  case 1329:
/* Line 1792 of yacc.c  */
#line 9592 "parser.y"
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

  case 1330:
/* Line 1792 of yacc.c  */
#line 9606 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1331:
/* Line 1792 of yacc.c  */
#line 9608 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1332:
/* Line 1792 of yacc.c  */
#line 9612 "parser.y"
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); }
    break;

  case 1333:
/* Line 1792 of yacc.c  */
#line 9613 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (1)]), NULL); }
    break;

  case 1334:
/* Line 1792 of yacc.c  */
#line 9617 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1335:
/* Line 1792 of yacc.c  */
#line 9618 "parser.y"
    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 1336:
/* Line 1792 of yacc.c  */
#line 9623 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  }
    break;

  case 1337:
/* Line 1792 of yacc.c  */
#line 9627 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  }
    break;

  case 1338:
/* Line 1792 of yacc.c  */
#line 9637 "parser.y"
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
    break;

  case 1340:
/* Line 1792 of yacc.c  */
#line 9646 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '-', cb_build_binary_list ((yyvsp[(1) - (4)]), '+'));
  }
    break;

  case 1341:
/* Line 1792 of yacc.c  */
#line 9650 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[(3) - (6)]), (yyvsp[(1) - (6)])), '-'));
  }
    break;

  case 1342:
/* Line 1792 of yacc.c  */
#line 9654 "parser.y"
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[(4) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 1343:
/* Line 1792 of yacc.c  */
#line 9661 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  }
    break;

  case 1344:
/* Line 1792 of yacc.c  */
#line 9665 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  }
    break;

  case 1345:
/* Line 1792 of yacc.c  */
#line 9675 "parser.y"
    {
	begin_statement ("SUPPRESS", 0);
	if (!in_declaratives) {
		cb_error_x (CB_TREE (current_statement),
			    _("SUPPRESS statement must be within DECLARATIVES"));
	}
	CB_PENDING("SUPPRESS");
  }
    break;

  case 1348:
/* Line 1792 of yacc.c  */
#line 9693 "parser.y"
    {
	begin_statement ("TERMINATE", 0);
	CB_PENDING("TERMINATE");
  }
    break;

  case 1350:
/* Line 1792 of yacc.c  */
#line 9702 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
	}
  }
    break;

  case 1351:
/* Line 1792 of yacc.c  */
#line 9708 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(2) - (2)]) != cb_error_node) {
	}
  }
    break;

  case 1352:
/* Line 1792 of yacc.c  */
#line 9719 "parser.y"
    {
	begin_statement ("TRANSFORM", 0);
  }
    break;

  case 1354:
/* Line 1792 of yacc.c  */
#line 9727 "parser.y"
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[(1) - (5)]), x, cb_int0, 2);
  }
    break;

  case 1355:
/* Line 1792 of yacc.c  */
#line 9740 "parser.y"
    {
	begin_statement ("UNLOCK", 0);
  }
    break;

  case 1357:
/* Line 1792 of yacc.c  */
#line 9748 "parser.y"
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

  case 1358:
/* Line 1792 of yacc.c  */
#line 9764 "parser.y"
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
    break;

  case 1360:
/* Line 1792 of yacc.c  */
#line 9774 "parser.y"
    {
	cb_emit_unstring ((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 1361:
/* Line 1792 of yacc.c  */
#line 9780 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1362:
/* Line 1792 of yacc.c  */
#line 9782 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1363:
/* Line 1792 of yacc.c  */
#line 9786 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1364:
/* Line 1792 of yacc.c  */
#line 9788 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1365:
/* Line 1792 of yacc.c  */
#line 9793 "parser.y"
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1366:
/* Line 1792 of yacc.c  */
#line 9799 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(2) - (2)])); }
    break;

  case 1367:
/* Line 1792 of yacc.c  */
#line 9801 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1368:
/* Line 1792 of yacc.c  */
#line 9806 "parser.y"
    {
	(yyval) = cb_build_unstring_into ((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1369:
/* Line 1792 of yacc.c  */
#line 9812 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1370:
/* Line 1792 of yacc.c  */
#line 9813 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1371:
/* Line 1792 of yacc.c  */
#line 9817 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1372:
/* Line 1792 of yacc.c  */
#line 9818 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1373:
/* Line 1792 of yacc.c  */
#line 9822 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1374:
/* Line 1792 of yacc.c  */
#line 9823 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1375:
/* Line 1792 of yacc.c  */
#line 9828 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  }
    break;

  case 1376:
/* Line 1792 of yacc.c  */
#line 9832 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  }
    break;

  case 1377:
/* Line 1792 of yacc.c  */
#line 9842 "parser.y"
    {
	skip_statements = 0;
	in_debugging = 0;
  }
    break;

  case 1384:
/* Line 1792 of yacc.c  */
#line 9860 "parser.y"
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

  case 1385:
/* Line 1792 of yacc.c  */
#line 9885 "parser.y"
    {
	use_global_ind = 0;
  }
    break;

  case 1386:
/* Line 1792 of yacc.c  */
#line 9889 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else {
		use_global_ind = 1;
		current_program->flag_global_use = 1;
	}
  }
    break;

  case 1387:
/* Line 1792 of yacc.c  */
#line 9901 "parser.y"
    {
	cb_tree		l;

	for (l = (yyvsp[(1) - (1)]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			set_up_use_file (CB_FILE (cb_ref (CB_VALUE (l))));
		}
	}
  }
    break;

  case 1388:
/* Line 1792 of yacc.c  */
#line 9911 "parser.y"
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
    break;

  case 1389:
/* Line 1792 of yacc.c  */
#line 9916 "parser.y"
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
    break;

  case 1390:
/* Line 1792 of yacc.c  */
#line 9921 "parser.y"
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
    break;

  case 1391:
/* Line 1792 of yacc.c  */
#line 9926 "parser.y"
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
    break;

  case 1392:
/* Line 1792 of yacc.c  */
#line 9934 "parser.y"
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
    break;

  case 1395:
/* Line 1792 of yacc.c  */
#line 9977 "parser.y"
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
			l = CB_VALUE(CB_WORD_ITEMS ((yyvsp[(1) - (1)])));
			switch (CB_TREE_TAG (l)) {
			case CB_TAG_FILE:
				CB_FILE (l)->debug_section = current_section;
				CB_FILE (l)->flag_fl_debug = 1;
				break;
			case CB_TAG_FIELD:
				{
					x = cb_ref((yyvsp[(1) - (1)]));
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
    break;

  case 1396:
/* Line 1792 of yacc.c  */
#line 10017 "parser.y"
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

  case 1397:
/* Line 1792 of yacc.c  */
#line 10027 "parser.y"
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

  case 1402:
/* Line 1792 of yacc.c  */
#line 10057 "parser.y"
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "USE AT");
	}
  }
    break;

  case 1403:
/* Line 1792 of yacc.c  */
#line 10066 "parser.y"
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	/* emit_entry ("_START", 0, NULL); */
	CB_PENDING ("USE AT PROGRAM START");
  }
    break;

  case 1404:
/* Line 1792 of yacc.c  */
#line 10072 "parser.y"
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	/* emit_entry ("_END", 0, NULL); */
	CB_PENDING ("USE AT PROGRAM END");
  }
    break;

  case 1405:
/* Line 1792 of yacc.c  */
#line 10082 "parser.y"
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE BEFORE REPORTING"));
	CB_PENDING ("USE BEFORE REPORTING");
  }
    break;

  case 1406:
/* Line 1792 of yacc.c  */
#line 10091 "parser.y"
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	CB_PENDING ("USE AFTER EXCEPTION CONDITION");
  }
    break;

  case 1409:
/* Line 1792 of yacc.c  */
#line 10107 "parser.y"
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1411:
/* Line 1792 of yacc.c  */
#line 10119 "parser.y"
    {
	if (CB_VALID_TREE ((yyvsp[(1) - (5)]))) {
		cb_emit_write ((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]));
	}
	start_debug = save_debug;
  }
    break;

  case 1412:
/* Line 1792 of yacc.c  */
#line 10128 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1413:
/* Line 1792 of yacc.c  */
#line 10129 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1414:
/* Line 1792 of yacc.c  */
#line 10134 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1415:
/* Line 1792 of yacc.c  */
#line 10138 "parser.y"
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1416:
/* Line 1792 of yacc.c  */
#line 10142 "parser.y"
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1417:
/* Line 1792 of yacc.c  */
#line 10146 "parser.y"
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[(1) - (3)]));
  }
    break;

  case 1418:
/* Line 1792 of yacc.c  */
#line 10152 "parser.y"
    { (yyval) = CB_BEFORE; }
    break;

  case 1419:
/* Line 1792 of yacc.c  */
#line 10153 "parser.y"
    { (yyval) = CB_AFTER; }
    break;

  case 1423:
/* Line 1792 of yacc.c  */
#line 10164 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  }
    break;

  case 1424:
/* Line 1792 of yacc.c  */
#line 10168 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  }
    break;

  case 1427:
/* Line 1792 of yacc.c  */
#line 10182 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT EXCEPTION before EXCEPTION"));
	}
  }
    break;

  case 1428:
/* Line 1792 of yacc.c  */
#line 10192 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1429:
/* Line 1792 of yacc.c  */
#line 10196 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1430:
/* Line 1792 of yacc.c  */
#line 10203 "parser.y"
    {
	current_statement->handler_type = ACCEPT_HANDLER;
	current_statement->ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1435:
/* Line 1792 of yacc.c  */
#line 10221 "parser.y"
    {
	current_statement->handler_type = ACCEPT_HANDLER;
	current_statement->not_ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1440:
/* Line 1792 of yacc.c  */
#line 10237 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT EXCEPTION before EXCEPTION"));
	}
  }
    break;

  case 1441:
/* Line 1792 of yacc.c  */
#line 10247 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1442:
/* Line 1792 of yacc.c  */
#line 10251 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1443:
/* Line 1792 of yacc.c  */
#line 10258 "parser.y"
    {
	current_statement->handler_type = DISPLAY_HANDLER;
	current_statement->ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1446:
/* Line 1792 of yacc.c  */
#line 10271 "parser.y"
    {
	current_statement->handler_type = DISPLAY_HANDLER;
	current_statement->not_ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1449:
/* Line 1792 of yacc.c  */
#line 10283 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT SIZE ERROR before SIZE ERROR"));
	}
  }
    break;

  case 1450:
/* Line 1792 of yacc.c  */
#line 10293 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1451:
/* Line 1792 of yacc.c  */
#line 10297 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1452:
/* Line 1792 of yacc.c  */
#line 10304 "parser.y"
    {
	current_statement->handler_type = SIZE_ERROR_HANDLER;
	current_statement->ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1455:
/* Line 1792 of yacc.c  */
#line 10317 "parser.y"
    {
	current_statement->handler_type = SIZE_ERROR_HANDLER;
	current_statement->not_ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1458:
/* Line 1792 of yacc.c  */
#line 10329 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT OVERFLOW before OVERFLOW"));
	}
  }
    break;

  case 1459:
/* Line 1792 of yacc.c  */
#line 10339 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1460:
/* Line 1792 of yacc.c  */
#line 10343 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1461:
/* Line 1792 of yacc.c  */
#line 10350 "parser.y"
    {
	current_statement->handler_type = OVERFLOW_HANDLER;
	current_statement->ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1464:
/* Line 1792 of yacc.c  */
#line 10363 "parser.y"
    {
	current_statement->handler_type = OVERFLOW_HANDLER;
	current_statement->not_ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1466:
/* Line 1792 of yacc.c  */
#line 10375 "parser.y"
    {
	cb_verify (cb_not_exception_before_exception, "NOT AT END before AT END");
  }
    break;

  case 1468:
/* Line 1792 of yacc.c  */
#line 10384 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		cb_verify (cb_not_exception_before_exception, "NOT AT END before AT END");
	}
  }
    break;

  case 1469:
/* Line 1792 of yacc.c  */
#line 10393 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1470:
/* Line 1792 of yacc.c  */
#line 10397 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1471:
/* Line 1792 of yacc.c  */
#line 10404 "parser.y"
    {
	current_statement->handler_type = AT_END_HANDLER;
	current_statement->ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1474:
/* Line 1792 of yacc.c  */
#line 10417 "parser.y"
    {
	current_statement->handler_type = AT_END_HANDLER;
	current_statement->not_ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1476:
/* Line 1792 of yacc.c  */
#line 10428 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT AT END-OF-PAGE before AT END-OF-PAGE"));
	}
  }
    break;

  case 1477:
/* Line 1792 of yacc.c  */
#line 10438 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1478:
/* Line 1792 of yacc.c  */
#line 10442 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1479:
/* Line 1792 of yacc.c  */
#line 10449 "parser.y"
    {
	current_statement->handler_type = EOP_HANDLER;
	current_statement->ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1482:
/* Line 1792 of yacc.c  */
#line 10462 "parser.y"
    {
	current_statement->handler_type = EOP_HANDLER;
	current_statement->not_ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1486:
/* Line 1792 of yacc.c  */
#line 10478 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT INVALID KEY before INVALID KEY"));
	}
  }
    break;

  case 1487:
/* Line 1792 of yacc.c  */
#line 10488 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1488:
/* Line 1792 of yacc.c  */
#line 10492 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1489:
/* Line 1792 of yacc.c  */
#line 10499 "parser.y"
    {
	current_statement->handler_type = INVALID_KEY_HANDLER;
	current_statement->ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1492:
/* Line 1792 of yacc.c  */
#line 10512 "parser.y"
    {
	current_statement->handler_type = INVALID_KEY_HANDLER;
	current_statement->not_ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1493:
/* Line 1792 of yacc.c  */
#line 10522 "parser.y"
    {
	(yyval) = cb_one;
  }
    break;

  case 1494:
/* Line 1792 of yacc.c  */
#line 10526 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
  }
    break;

  case 1495:
/* Line 1792 of yacc.c  */
#line 10536 "parser.y"
    {
	(yyval) = cb_build_cond ((yyvsp[(1) - (1)]));
  }
    break;

  case 1496:
/* Line 1792 of yacc.c  */
#line 10543 "parser.y"
    {
	(yyval) = cb_build_expr ((yyvsp[(1) - (1)]));
  }
    break;

  case 1497:
/* Line 1792 of yacc.c  */
#line 10549 "parser.y"
    {
	current_expr = NULL;
	cb_exp_line = cb_source_line;
  }
    break;

  case 1498:
/* Line 1792 of yacc.c  */
#line 10554 "parser.y"
    {
	(yyval) = cb_list_reverse (current_expr);
  }
    break;

  case 1502:
/* Line 1792 of yacc.c  */
#line 10567 "parser.y"
    {
	if (CB_REFERENCE_P ((yyvsp[(1) - (1)])) && CB_CLASS_NAME_P (cb_ref ((yyvsp[(1) - (1)])))) {
		push_expr ('C', (yyvsp[(1) - (1)]));
	} else {
		push_expr ('x', (yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1503:
/* Line 1792 of yacc.c  */
#line 10575 "parser.y"
    { push_expr ('(', NULL); }
    break;

  case 1504:
/* Line 1792 of yacc.c  */
#line 10576 "parser.y"
    { push_expr (')', NULL); }
    break;

  case 1505:
/* Line 1792 of yacc.c  */
#line 10578 "parser.y"
    { push_expr ('+', NULL); }
    break;

  case 1506:
/* Line 1792 of yacc.c  */
#line 10579 "parser.y"
    { push_expr ('-', NULL); }
    break;

  case 1507:
/* Line 1792 of yacc.c  */
#line 10580 "parser.y"
    { push_expr ('*', NULL); }
    break;

  case 1508:
/* Line 1792 of yacc.c  */
#line 10581 "parser.y"
    { push_expr ('/', NULL); }
    break;

  case 1509:
/* Line 1792 of yacc.c  */
#line 10582 "parser.y"
    { push_expr ('^', NULL); }
    break;

  case 1510:
/* Line 1792 of yacc.c  */
#line 10584 "parser.y"
    { push_expr ('=', NULL); }
    break;

  case 1511:
/* Line 1792 of yacc.c  */
#line 10585 "parser.y"
    { push_expr ('>', NULL); }
    break;

  case 1512:
/* Line 1792 of yacc.c  */
#line 10586 "parser.y"
    { push_expr ('<', NULL); }
    break;

  case 1513:
/* Line 1792 of yacc.c  */
#line 10587 "parser.y"
    { push_expr (']', NULL); }
    break;

  case 1514:
/* Line 1792 of yacc.c  */
#line 10588 "parser.y"
    { push_expr ('[', NULL); }
    break;

  case 1515:
/* Line 1792 of yacc.c  */
#line 10589 "parser.y"
    { push_expr ('~', NULL); }
    break;

  case 1516:
/* Line 1792 of yacc.c  */
#line 10591 "parser.y"
    { push_expr ('!', NULL); }
    break;

  case 1517:
/* Line 1792 of yacc.c  */
#line 10592 "parser.y"
    { push_expr ('&', NULL); }
    break;

  case 1518:
/* Line 1792 of yacc.c  */
#line 10593 "parser.y"
    { push_expr ('|', NULL); }
    break;

  case 1519:
/* Line 1792 of yacc.c  */
#line 10595 "parser.y"
    { push_expr ('O', NULL); }
    break;

  case 1520:
/* Line 1792 of yacc.c  */
#line 10596 "parser.y"
    { push_expr ('9', NULL); }
    break;

  case 1521:
/* Line 1792 of yacc.c  */
#line 10597 "parser.y"
    { push_expr ('A', NULL); }
    break;

  case 1522:
/* Line 1792 of yacc.c  */
#line 10598 "parser.y"
    { push_expr ('L', NULL); }
    break;

  case 1523:
/* Line 1792 of yacc.c  */
#line 10599 "parser.y"
    { push_expr ('U', NULL); }
    break;

  case 1524:
/* Line 1792 of yacc.c  */
#line 10602 "parser.y"
    { push_expr ('P', NULL); }
    break;

  case 1525:
/* Line 1792 of yacc.c  */
#line 10603 "parser.y"
    { push_expr ('N', NULL); }
    break;

  case 1534:
/* Line 1792 of yacc.c  */
#line 10633 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1535:
/* Line 1792 of yacc.c  */
#line 10637 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1539:
/* Line 1792 of yacc.c  */
#line 10648 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '+', (yyvsp[(3) - (3)])); }
    break;

  case 1540:
/* Line 1792 of yacc.c  */
#line 10649 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '-', (yyvsp[(3) - (3)])); }
    break;

  case 1541:
/* Line 1792 of yacc.c  */
#line 10650 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1542:
/* Line 1792 of yacc.c  */
#line 10654 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '*', (yyvsp[(3) - (3)])); }
    break;

  case 1543:
/* Line 1792 of yacc.c  */
#line 10655 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '/', (yyvsp[(3) - (3)])); }
    break;

  case 1544:
/* Line 1792 of yacc.c  */
#line 10656 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1545:
/* Line 1792 of yacc.c  */
#line 10661 "parser.y"
    {
	(yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '^', (yyvsp[(3) - (3)]));
  }
    break;

  case 1546:
/* Line 1792 of yacc.c  */
#line 10664 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1547:
/* Line 1792 of yacc.c  */
#line 10668 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1548:
/* Line 1792 of yacc.c  */
#line 10669 "parser.y"
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[(2) - (2)])); }
    break;

  case 1549:
/* Line 1792 of yacc.c  */
#line 10670 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1550:
/* Line 1792 of yacc.c  */
#line 10673 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 1551:
/* Line 1792 of yacc.c  */
#line 10674 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1552:
/* Line 1792 of yacc.c  */
#line 10685 "parser.y"
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

  case 1553:
/* Line 1792 of yacc.c  */
#line 10697 "parser.y"
    {
	if (CB_FILE_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_FILE (cb_ref ((yyvsp[(3) - (3)])))->linage_ctr;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a file name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1554:
/* Line 1792 of yacc.c  */
#line 10706 "parser.y"
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

  case 1555:
/* Line 1792 of yacc.c  */
#line 10718 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[(3) - (3)])))->line_counter;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1556:
/* Line 1792 of yacc.c  */
#line 10727 "parser.y"
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

  case 1557:
/* Line 1792 of yacc.c  */
#line 10739 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[(3) - (3)])))->page_counter;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1558:
/* Line 1792 of yacc.c  */
#line 10753 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1559:
/* Line 1792 of yacc.c  */
#line 10755 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1560:
/* Line 1792 of yacc.c  */
#line 10760 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 1561:
/* Line 1792 of yacc.c  */
#line 10768 "parser.y"
    { cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1562:
/* Line 1792 of yacc.c  */
#line 10775 "parser.y"
    {
	cb_tree x;

	x = cb_ref ((yyvsp[(1) - (1)]));
	if (!CB_FIELD_P (x)) {
		(yyval) = cb_error_node;
	} else if (!CB_FIELD (x)->index_list) {
		cb_error_x ((yyvsp[(1) - (1)]), _("'%s' not indexed"), cb_name ((yyvsp[(1) - (1)])));
		cb_error_x (x, _("'%s' defined here"), cb_name (x));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 1563:
/* Line 1792 of yacc.c  */
#line 10795 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1564:
/* Line 1792 of yacc.c  */
#line 10799 "parser.y"
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

  case 1565:
/* Line 1792 of yacc.c  */
#line 10820 "parser.y"
    {
	if (CB_FILE_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		cb_error_x ((yyvsp[(1) - (1)]), _("'%s' is not a file name"), CB_NAME ((yyvsp[(1) - (1)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1566:
/* Line 1792 of yacc.c  */
#line 10861 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		cb_error_x ((yyvsp[(1) - (1)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(1) - (1)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1567:
/* Line 1792 of yacc.c  */
#line 10874 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1568:
/* Line 1792 of yacc.c  */
#line 10876 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1569:
/* Line 1792 of yacc.c  */
#line 10880 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1570:
/* Line 1792 of yacc.c  */
#line 10886 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1571:
/* Line 1792 of yacc.c  */
#line 10888 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1572:
/* Line 1792 of yacc.c  */
#line 10893 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_REFERENCE ((yyval))->offset = CB_TREE (current_section);
	CB_REFERENCE ((yyval))->flag_in_decl = !!in_declaratives;
	CB_REFERENCE ((yyval))->section = current_section;
	CB_REFERENCE ((yyval))->paragraph = current_paragraph;
	CB_ADD_TO_CHAIN ((yyval), current_program->label_list);
  }
    break;

  case 1575:
/* Line 1792 of yacc.c  */
#line 10907 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  }
    break;

  case 1576:
/* Line 1792 of yacc.c  */
#line 10914 "parser.y"
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[(1) - (1)]))->data));
	(yyval)->source_file = (yyvsp[(1) - (1)])->source_file;
	(yyval)->source_line = (yyvsp[(1) - (1)])->source_line;
  }
    break;

  case 1577:
/* Line 1792 of yacc.c  */
#line 10924 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1578:
/* Line 1792 of yacc.c  */
#line 10925 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1579:
/* Line 1792 of yacc.c  */
#line 10930 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1580:
/* Line 1792 of yacc.c  */
#line 10938 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1581:
/* Line 1792 of yacc.c  */
#line 10946 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1582:
/* Line 1792 of yacc.c  */
#line 10950 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1583:
/* Line 1792 of yacc.c  */
#line 10957 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1586:
/* Line 1792 of yacc.c  */
#line 10973 "parser.y"
    {
	if (CB_WORD_COUNT ((yyvsp[(1) - (1)])) > 0) {
		redefinition_error ((yyvsp[(1) - (1)]));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 1587:
/* Line 1792 of yacc.c  */
#line 10982 "parser.y"
    {
	  yyclearin;
	  yyerrok;
	  (yyval) = cb_error_node;
  }
    break;

  case 1588:
/* Line 1792 of yacc.c  */
#line 10993 "parser.y"
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

  case 1589:
/* Line 1792 of yacc.c  */
#line 11010 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1590:
/* Line 1792 of yacc.c  */
#line 11014 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1593:
/* Line 1792 of yacc.c  */
#line 11023 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  }
    break;

  case 1594:
/* Line 1792 of yacc.c  */
#line 11029 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1595:
/* Line 1792 of yacc.c  */
#line 11030 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1596:
/* Line 1792 of yacc.c  */
#line 11035 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1597:
/* Line 1792 of yacc.c  */
#line 11039 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1602:
/* Line 1792 of yacc.c  */
#line 11050 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1603:
/* Line 1792 of yacc.c  */
#line 11054 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1604:
/* Line 1792 of yacc.c  */
#line 11058 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1605:
/* Line 1792 of yacc.c  */
#line 11062 "parser.y"
    {
	(yyval) = cb_build_ppointer ((yyvsp[(4) - (4)]));
  }
    break;

  case 1606:
/* Line 1792 of yacc.c  */
#line 11066 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  }
    break;

  case 1607:
/* Line 1792 of yacc.c  */
#line 11070 "parser.y"
    {
	cb_tree		x;
	cb_tree		switch_id;

	x = cb_ref ((yyvsp[(1) - (1)]));
	if (CB_VALID_TREE (x)) {
		if (CB_SYSTEM_NAME (x)->category != CB_SWITCH_NAME) {
			cb_error_x (x, _("invalid mnemonic identifier"));
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

  case 1608:
/* Line 1792 of yacc.c  */
#line 11091 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1609:
/* Line 1792 of yacc.c  */
#line 11095 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1617:
/* Line 1792 of yacc.c  */
#line 11112 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1618:
/* Line 1792 of yacc.c  */
#line 11116 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1619:
/* Line 1792 of yacc.c  */
#line 11120 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1628:
/* Line 1792 of yacc.c  */
#line 11154 "parser.y"
    {
	check_not_88_level ((yyvsp[(1) - (1)]));
  }
    break;

  case 1630:
/* Line 1792 of yacc.c  */
#line 11162 "parser.y"
    {
	check_not_88_level ((yyvsp[(1) - (1)]));
  }
    break;

  case 1633:
/* Line 1792 of yacc.c  */
#line 11171 "parser.y"
    {
	check_not_88_level ((yyvsp[(1) - (1)]));
  }
    break;

  case 1635:
/* Line 1792 of yacc.c  */
#line 11176 "parser.y"
    {
	(yyval) = cb_zero;
  }
    break;

  case 1636:
/* Line 1792 of yacc.c  */
#line 11183 "parser.y"
    {
	check_not_88_level ((yyvsp[(1) - (1)]));
  }
    break;

  case 1638:
/* Line 1792 of yacc.c  */
#line 11191 "parser.y"
    {
	check_not_88_level ((yyvsp[(1) - (1)]));
  }
    break;

  case 1640:
/* Line 1792 of yacc.c  */
#line 11199 "parser.y"
    {
	check_not_88_level ((yyvsp[(1) - (1)]));
  }
    break;

  case 1643:
/* Line 1792 of yacc.c  */
#line 11209 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1644:
/* Line 1792 of yacc.c  */
#line 11213 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 1); }
    break;

  case 1645:
/* Line 1792 of yacc.c  */
#line 11217 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1646:
/* Line 1792 of yacc.c  */
#line 11218 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 1647:
/* Line 1792 of yacc.c  */
#line 11222 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1648:
/* Line 1792 of yacc.c  */
#line 11227 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (3)]));
	}
  }
    break;

  case 1649:
/* Line 1792 of yacc.c  */
#line 11234 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1650:
/* Line 1792 of yacc.c  */
#line 11241 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1651:
/* Line 1792 of yacc.c  */
#line 11248 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1652:
/* Line 1792 of yacc.c  */
#line 11258 "parser.y"
    {
	(yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0);
  }
    break;

  case 1653:
/* Line 1792 of yacc.c  */
#line 11265 "parser.y"
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

  case 1654:
/* Line 1792 of yacc.c  */
#line 11275 "parser.y"
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

  case 1655:
/* Line 1792 of yacc.c  */
#line 11285 "parser.y"
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

  case 1656:
/* Line 1792 of yacc.c  */
#line 11295 "parser.y"
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

  case 1657:
/* Line 1792 of yacc.c  */
#line 11308 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1658:
/* Line 1792 of yacc.c  */
#line 11312 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  }
    break;

  case 1659:
/* Line 1792 of yacc.c  */
#line 11320 "parser.y"
    {
	(yyval) = (yyvsp[(0) - (3)]);
	CB_REFERENCE ((yyvsp[(0) - (3)]))->subs = cb_list_reverse ((yyvsp[(2) - (3)]));
  }
    break;

  case 1660:
/* Line 1792 of yacc.c  */
#line 11328 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (4)]))->offset = (yyvsp[(2) - (4)]);
  }
    break;

  case 1661:
/* Line 1792 of yacc.c  */
#line 11332 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (5)]))->offset = (yyvsp[(2) - (5)]);
	CB_REFERENCE ((yyvsp[(0) - (5)]))->length = (yyvsp[(4) - (5)]);
  }
    break;

  case 1662:
/* Line 1792 of yacc.c  */
#line 11342 "parser.y"
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

  case 1663:
/* Line 1792 of yacc.c  */
#line 11356 "parser.y"
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

  case 1664:
/* Line 1792 of yacc.c  */
#line 11379 "parser.y"
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

  case 1665:
/* Line 1792 of yacc.c  */
#line 11401 "parser.y"
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

  case 1666:
/* Line 1792 of yacc.c  */
#line 11416 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1667:
/* Line 1792 of yacc.c  */
#line 11417 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1668:
/* Line 1792 of yacc.c  */
#line 11418 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1669:
/* Line 1792 of yacc.c  */
#line 11419 "parser.y"
    { (yyval) = cb_high; }
    break;

  case 1670:
/* Line 1792 of yacc.c  */
#line 11420 "parser.y"
    { (yyval) = cb_low; }
    break;

  case 1671:
/* Line 1792 of yacc.c  */
#line 11421 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1672:
/* Line 1792 of yacc.c  */
#line 11426 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1673:
/* Line 1792 of yacc.c  */
#line 11430 "parser.y"
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

  case 1674:
/* Line 1792 of yacc.c  */
#line 11447 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1675:
/* Line 1792 of yacc.c  */
#line 11451 "parser.y"
    {
	(yyval) = cb_concat_literals ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1676:
/* Line 1792 of yacc.c  */
#line 11457 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1677:
/* Line 1792 of yacc.c  */
#line 11458 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1678:
/* Line 1792 of yacc.c  */
#line 11459 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1679:
/* Line 1792 of yacc.c  */
#line 11460 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1680:
/* Line 1792 of yacc.c  */
#line 11461 "parser.y"
    { (yyval) = cb_high; }
    break;

  case 1681:
/* Line 1792 of yacc.c  */
#line 11462 "parser.y"
    { (yyval) = cb_low; }
    break;

  case 1682:
/* Line 1792 of yacc.c  */
#line 11463 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1683:
/* Line 1792 of yacc.c  */
#line 11470 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), NULL, (yyvsp[(2) - (2)]), 0);
  }
    break;

  case 1684:
/* Line 1792 of yacc.c  */
#line 11474 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), CB_LIST_INIT ((yyvsp[(3) - (5)])), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1685:
/* Line 1792 of yacc.c  */
#line 11478 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1686:
/* Line 1792 of yacc.c  */
#line 11482 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1687:
/* Line 1792 of yacc.c  */
#line 11486 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), NULL, 0);
  }
    break;

  case 1688:
/* Line 1792 of yacc.c  */
#line 11490 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1689:
/* Line 1792 of yacc.c  */
#line 11494 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1690:
/* Line 1792 of yacc.c  */
#line 11498 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1691:
/* Line 1792 of yacc.c  */
#line 11502 "parser.y"
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1692:
/* Line 1792 of yacc.c  */
#line 11506 "parser.y"
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1693:
/* Line 1792 of yacc.c  */
#line 11510 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 0);
  }
    break;

  case 1694:
/* Line 1792 of yacc.c  */
#line 11514 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 1);
  }
    break;

  case 1704:
/* Line 1792 of yacc.c  */
#line 11539 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1705:
/* Line 1792 of yacc.c  */
#line 11543 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (4)]), NULL);
  }
    break;

  case 1706:
/* Line 1792 of yacc.c  */
#line 11547 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));
  }
    break;

  case 1707:
/* Line 1792 of yacc.c  */
#line 11554 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1708:
/* Line 1792 of yacc.c  */
#line 11558 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (3)]);
  }
    break;

  case 1709:
/* Line 1792 of yacc.c  */
#line 11562 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1710:
/* Line 1792 of yacc.c  */
#line 11569 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_int0);
  }
    break;

  case 1711:
/* Line 1792 of yacc.c  */
#line 11576 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int1);
  }
    break;

  case 1712:
/* Line 1792 of yacc.c  */
#line 11583 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int2);
  }
    break;

  case 1713:
/* Line 1792 of yacc.c  */
#line 11593 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  }
    break;

  case 1714:
/* Line 1792 of yacc.c  */
#line 11600 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, (yyvsp[(3) - (3)]));
  }
    break;

  case 1715:
/* Line 1792 of yacc.c  */
#line 11610 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  }
    break;

  case 1716:
/* Line 1792 of yacc.c  */
#line 11617 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[(3) - (3)])));
  }
    break;

  case 1717:
/* Line 1792 of yacc.c  */
#line 11627 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (1)]), cb_int0);
  }
    break;

  case 1718:
/* Line 1792 of yacc.c  */
#line 11631 "parser.y"
    {
	const int	num_args = cb_list_length ((yyvsp[(1) - (3)]));

	if (num_args == 4) {
		cb_error_x ((yyvsp[(1) - (3)]), _("cannot specify offset and SYSTEM-OFFSET at the same time"));
	}

	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), cb_int1);
  }
    break;

  case 1719:
/* Line 1792 of yacc.c  */
#line 11644 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (1)]), cb_int0);
  }
    break;

  case 1720:
/* Line 1792 of yacc.c  */
#line 11648 "parser.y"
    {
	const int	num_args = cb_list_length ((yyvsp[(1) - (3)]));

	if (num_args == 3) {
		cb_error_x ((yyvsp[(1) - (3)]), _("cannot specify offset and SYSTEM-OFFSET at the same time"));
	}

	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), cb_int1);
  }
    break;

  case 1721:
/* Line 1792 of yacc.c  */
#line 11662 "parser.y"
    {
	non_const_word = 1;
  }
    break;

  case 1722:
/* Line 1792 of yacc.c  */
#line 11670 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1723:
/* Line 1792 of yacc.c  */
#line 11671 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1724:
/* Line 1792 of yacc.c  */
#line 11675 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1725:
/* Line 1792 of yacc.c  */
#line 11676 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1726:
/* Line 1792 of yacc.c  */
#line 11680 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1727:
/* Line 1792 of yacc.c  */
#line 11681 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1728:
/* Line 1792 of yacc.c  */
#line 11686 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1729:
/* Line 1792 of yacc.c  */
#line 11690 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1730:
/* Line 1792 of yacc.c  */
#line 11697 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1731:
/* Line 1792 of yacc.c  */
#line 11701 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1732:
/* Line 1792 of yacc.c  */
#line 11708 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1733:
/* Line 1792 of yacc.c  */
#line 11709 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1734:
/* Line 1792 of yacc.c  */
#line 11710 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 1735:
/* Line 1792 of yacc.c  */
#line 11714 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1736:
/* Line 1792 of yacc.c  */
#line 11715 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1737:
/* Line 1792 of yacc.c  */
#line 11719 "parser.y"
    { (yyval) = cb_int (cb_flag_optional_file); }
    break;

  case 1738:
/* Line 1792 of yacc.c  */
#line 11720 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1739:
/* Line 1792 of yacc.c  */
#line 11721 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1740:
/* Line 1792 of yacc.c  */
#line 11726 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1741:
/* Line 1792 of yacc.c  */
#line 11730 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		(yyval) = (yyvsp[(2) - (2)]);
	} else {
		(yyval) = cb_int (COB_STORE_ROUND);
	}
	cobc_cs_check = 0;
  }
    break;

  case 1742:
/* Line 1792 of yacc.c  */
#line 11742 "parser.y"
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
    break;

  case 1743:
/* Line 1792 of yacc.c  */
#line 11747 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
	cobc_cs_check = 0;
  }
    break;

  case 1744:
/* Line 1792 of yacc.c  */
#line 11755 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
    break;

  case 1745:
/* Line 1792 of yacc.c  */
#line 11759 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
    break;

  case 1746:
/* Line 1792 of yacc.c  */
#line 11763 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
    break;

  case 1747:
/* Line 1792 of yacc.c  */
#line 11767 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
    break;

  case 1748:
/* Line 1792 of yacc.c  */
#line 11771 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
    break;

  case 1749:
/* Line 1792 of yacc.c  */
#line 11775 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
    break;

  case 1750:
/* Line 1792 of yacc.c  */
#line 11779 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
    break;

  case 1751:
/* Line 1792 of yacc.c  */
#line 11783 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
    break;

  case 1752:
/* Line 1792 of yacc.c  */
#line 11789 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1753:
/* Line 1792 of yacc.c  */
#line 11790 "parser.y"
    { (yyval) = cb_int1; }
    break;


/* Line 1792 of yacc.c  */
#line 19269 "parser.c"
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
#line 11962 "parser.y"

