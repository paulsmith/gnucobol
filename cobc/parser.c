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


/* Line 371 of yacc.c  */
#line 1359 "parser.c"

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
#line 1950 "parser.c"

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
#define YYLAST   8908

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  525
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  852
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1980
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2818

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   779

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
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    16,    18,
      20,    21,    24,    29,    34,    35,    37,    39,    42,    46,
      50,    54,    55,    59,    63,    64,    72,    78,    80,    82,
      84,    86,    87,    90,    91,    95,    97,    99,   101,   103,
     106,   109,   111,   113,   117,   118,   122,   128,   129,   133,
     134,   136,   138,   141,   144,   145,   150,   151,   155,   156,
     160,   161,   166,   167,   170,   174,   177,   179,   182,   184,
     186,   188,   190,   196,   200,   204,   209,   211,   213,   215,
     217,   219,   222,   223,   224,   229,   230,   233,   237,   239,
     242,   246,   250,   254,   255,   258,   260,   263,   264,   267,
     268,   270,   273,   277,   279,   282,   284,   286,   288,   290,
     292,   294,   296,   298,   300,   302,   304,   306,   307,   311,
     314,   318,   322,   324,   325,   327,   329,   333,   338,   339,
     345,   347,   349,   351,   353,   355,   357,   359,   362,   364,
     368,   369,   374,   376,   380,   382,   384,   386,   388,   390,
     392,   394,   396,   399,   400,   403,   407,   409,   412,   416,
     418,   421,   423,   426,   431,   433,   436,   438,   442,   447,
     453,   454,   458,   462,   468,   472,   477,   481,   485,   491,
     492,   496,   497,   500,   501,   504,   505,   508,   509,   516,
     517,   520,   522,   524,   526,   528,   530,   532,   534,   536,
     538,   540,   542,   544,   546,   552,   558,   564,   570,   576,
     578,   580,   582,   584,   586,   588,   590,   591,   595,   596,
     598,   600,   602,   604,   605,   607,   609,   614,   616,   618,
     620,   628,   629,   634,   638,   642,   644,   649,   650,   652,
     654,   655,   661,   664,   667,   669,   670,   675,   681,   684,
     688,   690,   692,   696,   698,   701,   706,   711,   716,   718,
     722,   727,   732,   736,   738,   740,   744,   747,   750,   753,
     754,   757,   761,   763,   766,   768,   770,   776,   777,   779,
     781,   783,   784,   791,   793,   796,   799,   800,   803,   804,
     814,   815,   819,   820,   824,   825,   828,   831,   832,   838,
     842,   844,   846,   847,   850,   853,   856,   858,   860,   862,
     864,   866,   868,   870,   872,   874,   880,   881,   883,   885,
     890,   897,   907,   908,   912,   913,   916,   917,   920,   924,
     930,   936,   938,   940,   942,   944,   948,   954,   955,   958,
     960,   962,   964,   969,   972,   975,   980,   982,   984,   986,
     988,   990,   992,   994,   999,  1000,  1003,  1006,  1009,  1012,
    1014,  1017,  1018,  1019,  1025,  1026,  1027,  1030,  1033,  1037,
    1039,  1040,  1045,  1049,  1052,  1053,  1055,  1057,  1059,  1060,
    1063,  1065,  1068,  1071,  1075,  1077,  1079,  1081,  1083,  1085,
    1087,  1089,  1091,  1093,  1095,  1097,  1099,  1102,  1104,  1106,
    1108,  1110,  1112,  1114,  1116,  1118,  1120,  1126,  1129,  1132,
    1133,  1136,  1138,  1140,  1142,  1144,  1146,  1148,  1150,  1152,
    1154,  1156,  1158,  1160,  1162,  1164,  1167,  1171,  1172,  1175,
    1178,  1180,  1182,  1186,  1188,  1190,  1192,  1194,  1196,  1198,
    1200,  1202,  1204,  1206,  1208,  1210,  1212,  1214,  1216,  1218,
    1220,  1222,  1224,  1226,  1229,  1232,  1235,  1238,  1241,  1244,
    1247,  1250,  1253,  1256,  1258,  1260,  1262,  1264,  1266,  1268,
    1270,  1272,  1274,  1276,  1280,  1284,  1291,  1292,  1295,  1303,
    1312,  1313,  1316,  1317,  1320,  1321,  1325,  1326,  1330,  1331,
    1333,  1335,  1336,  1342,  1344,  1346,  1347,  1351,  1353,  1356,
    1358,  1361,  1364,  1368,  1370,  1371,  1377,  1379,  1382,  1384,
    1388,  1389,  1394,  1397,  1402,  1405,  1408,  1409,  1410,  1416,
    1417,  1418,  1424,  1425,  1426,  1432,  1433,  1436,  1437,  1444,
    1445,  1448,  1451,  1454,  1458,  1460,  1462,  1465,  1468,  1470,
    1473,  1478,  1480,  1485,  1488,  1489,  1492,  1494,  1496,  1498,
    1500,  1502,  1506,  1511,  1516,  1521,  1525,  1526,  1529,  1530,
    1536,  1537,  1540,  1542,  1544,  1546,  1548,  1550,  1552,  1554,
    1556,  1558,  1560,  1562,  1564,  1566,  1568,  1570,  1572,  1576,
    1578,  1580,  1583,  1585,  1588,  1590,  1592,  1593,  1596,  1599,
    1600,  1603,  1608,  1613,  1614,  1618,  1620,  1622,  1626,  1633,
    1636,  1640,  1643,  1646,  1650,  1653,  1655,  1658,  1661,  1663,
    1665,  1667,  1670,  1673,  1675,  1680,  1683,  1687,  1688,  1689,
    1695,  1696,  1698,  1701,  1705,  1707,  1708,  1713,  1717,  1718,
    1721,  1724,  1727,  1729,  1731,  1734,  1737,  1739,  1741,  1743,
    1745,  1747,  1749,  1751,  1753,  1755,  1757,  1759,  1764,  1766,
    1768,  1774,  1780,  1784,  1788,  1790,  1792,  1794,  1796,  1798,
    1800,  1802,  1804,  1807,  1810,  1813,  1815,  1818,  1820,  1823,
    1825,  1827,  1829,  1831,  1832,  1834,  1836,  1837,  1839,  1841,
    1845,  1848,  1849,  1850,  1851,  1861,  1862,  1867,  1868,  1869,
    1873,  1874,  1878,  1880,  1883,  1888,  1889,  1892,  1895,  1896,
    1900,  1904,  1909,  1914,  1918,  1919,  1921,  1922,  1925,  1928,
    1929,  1930,  1938,  1939,  1942,  1944,  1946,  1949,  1951,  1953,
    1954,  1961,  1962,  1965,  1968,  1970,  1971,  1973,  1974,  1975,
    1979,  1980,  1983,  1986,  1988,  1990,  1992,  1994,  1996,  1998,
    2000,  2002,  2004,  2006,  2008,  2010,  2012,  2014,  2016,  2018,
    2020,  2022,  2024,  2026,  2028,  2030,  2032,  2034,  2036,  2038,
    2040,  2042,  2044,  2046,  2048,  2050,  2052,  2054,  2056,  2058,
    2060,  2062,  2064,  2066,  2068,  2070,  2072,  2074,  2076,  2078,
    2080,  2082,  2084,  2087,  2090,  2091,  2096,  2097,  2102,  2106,
    2110,  2115,  2119,  2124,  2128,  2132,  2137,  2142,  2146,  2151,
    2155,  2160,  2166,  2170,  2175,  2179,  2183,  2185,  2187,  2188,
    2190,  2192,  2195,  2197,  2199,  2201,  2204,  2206,  2209,  2212,
    2215,  2218,  2222,  2226,  2230,  2234,  2236,  2238,  2240,  2242,
    2244,  2246,  2248,  2250,  2252,  2254,  2256,  2258,  2263,  2265,
    2267,  2269,  2271,  2276,  2280,  2282,  2285,  2287,  2289,  2293,
    2297,  2301,  2305,  2309,  2311,  2313,  2314,  2316,  2317,  2322,
    2327,  2333,  2340,  2341,  2344,  2345,  2347,  2348,  2352,  2356,
    2361,  2362,  2365,  2366,  2370,  2372,  2375,  2380,  2381,  2384,
    2385,  2390,  2396,  2397,  2399,  2401,  2403,  2404,  2405,  2409,
    2411,  2414,  2417,  2421,  2422,  2425,  2428,  2431,  2432,  2436,
    2439,  2442,  2447,  2449,  2451,  2453,  2455,  2456,  2459,  2462,
    2463,  2465,  2468,  2471,  2472,  2474,  2477,  2478,  2480,  2481,
    2485,  2487,  2490,  2491,  2495,  2498,  2502,  2503,  2505,  2509,
    2513,  2516,  2517,  2522,  2527,  2528,  2530,  2532,  2534,  2535,
    2540,  2544,  2547,  2549,  2552,  2553,  2555,  2556,  2561,  2565,
    2569,  2573,  2577,  2580,  2583,  2585,  2587,  2590,  2591,  2595,
    2597,  2599,  2601,  2604,  2606,  2609,  2611,  2613,  2616,  2619,
    2622,  2625,  2628,  2630,  2632,  2634,  2637,  2640,  2642,  2644,
    2647,  2650,  2652,  2654,  2656,  2658,  2662,  2664,  2668,  2672,
    2676,  2680,  2681,  2683,  2684,  2689,  2694,  2701,  2708,  2717,
    2726,  2727,  2729,  2730,  2734,  2737,  2738,  2743,  2746,  2748,
    2752,  2754,  2756,  2758,  2761,  2763,  2765,  2768,  2771,  2775,
    2778,  2782,  2784,  2788,  2791,  2793,  2795,  2797,  2798,  2801,
    2802,  2804,  2805,  2809,  2810,  2813,  2815,  2818,  2820,  2822,
    2824,  2825,  2828,  2829,  2833,  2835,  2836,  2840,  2842,  2843,
    2847,  2851,  2852,  2856,  2859,  2860,  2867,  2871,  2874,  2876,
    2877,  2879,  2880,  2884,  2890,  2891,  2894,  2895,  2899,  2903,
    2904,  2907,  2909,  2912,  2917,  2919,  2921,  2923,  2925,  2927,
    2929,  2931,  2932,  2936,  2937,  2941,  2943,  2946,  2947,  2951,
    2954,  2956,  2958,  2960,  2963,  2965,  2967,  2969,  2970,  2974,
    2977,  2983,  2985,  2988,  2991,  2994,  2996,  2998,  3000,  3003,
    3005,  3008,  3013,  3016,  3017,  3019,  3021,  3023,  3025,  3030,
    3031,  3033,  3035,  3038,  3041,  3045,  3049,  3050,  3054,  3055,
    3059,  3063,  3068,  3069,  3074,  3079,  3086,  3087,  3089,  3090,
    3094,  3099,  3105,  3107,  3109,  3111,  3113,  3114,  3118,  3119,
    3123,  3126,  3128,  3129,  3133,  3136,  3137,  3142,  3145,  3146,
    3148,  3150,  3152,  3154,  3158,  3159,  3162,  3164,  3168,  3172,
    3173,  3177,  3179,  3181,  3183,  3187,  3195,  3196,  3201,  3209,
    3210,  3213,  3214,  3217,  3220,  3224,  3228,  3232,  3235,  3236,
    3240,  3242,  3244,  3245,  3247,  3249,  3250,  3254,  3257,  3259,
    3260,  3265,  3270,  3271,  3273,  3274,  3279,  3284,  3285,  3288,
    3292,  3293,  3295,  3297,  3298,  3303,  3308,  3315,  3316,  3319,
    3320,  3323,  3325,  3328,  3332,  3333,  3335,  3336,  3340,  3342,
    3344,  3346,  3348,  3350,  3352,  3354,  3356,  3358,  3360,  3362,
    3367,  3371,  3373,  3376,  3379,  3382,  3385,  3388,  3391,  3394,
    3397,  3400,  3405,  3409,  3414,  3416,  3419,  3423,  3425,  3428,
    3432,  3436,  3441,  3442,  3446,  3447,  3455,  3456,  3462,  3463,
    3466,  3467,  3470,  3471,  3475,  3476,  3479,  3484,  3485,  3488,
    3493,  3494,  3499,  3504,  3505,  3509,  3510,  3515,  3517,  3519,
    3521,  3524,  3527,  3530,  3533,  3535,  3537,  3540,  3542,  3543,
    3545,  3546,  3551,  3554,  3555,  3558,  3560,  3565,  3570,  3571,
    3573,  3575,  3577,  3579,  3581,  3582,  3587,  3593,  3595,  3598,
    3600,  3604,  3608,  3609,  3614,  3615,  3617,  3618,  3623,  3628,
    3635,  3642,  3643,  3645,  3648,  3649,  3651,  3652,  3656,  3658,
    3661,  3662,  3666,  3672,  3673,  3677,  3680,  3681,  3686,  3693,
    3694,  3698,  3700,  3704,  3707,  3710,  3713,  3717,  3718,  3722,
    3723,  3727,  3728,  3732,  3733,  3735,  3736,  3740,  3742,  3744,
    3746,  3748,  3750,  3758,  3759,  3761,  3763,  3765,  3767,  3769,
    3771,  3776,  3778,  3781,  3783,  3786,  3790,  3791,  3793,  3796,
    3798,  3802,  3804,  3806,  3811,  3813,  3815,  3817,  3818,  3823,
    3829,  3830,  3833,  3834,  3839,  3843,  3847,  3849,  3851,  3852,
    3854,  3856,  3857,  3859,  3860,  3863,  3866,  3867,  3869,  3872,
    3874,  3876,  3877,  3879,  3882,  3884,  3886,  3887,  3890,  3893,
    3894,  3896,  3899,  3900,  3902,  3905,  3906,  3909,  3912,  3913,
    3915,  3918,  3919,  3921,  3924,  3925,  3928,  3931,  3932,  3934,
    3937,  3938,  3940,  3943,  3946,  3949,  3952,  3953,  3955,  3958,
    3959,  3961,  3964,  3967,  3970,  3971,  3973,  3976,  3977,  3979,
    3982,  3983,  3985,  3988,  3991,  3992,  3994,  3997,  3998,  4000,
    4003,  4004,  4007,  4009,  4011,  4012,  4015,  4017,  4020,  4023,
    4025,  4027,  4029,  4031,  4033,  4035,  4037,  4039,  4041,  4043,
    4045,  4047,  4049,  4051,  4053,  4055,  4057,  4059,  4061,  4063,
    4065,  4067,  4069,  4071,  4073,  4076,  4078,  4080,  4082,  4084,
    4086,  4088,  4090,  4094,  4095,  4097,  4099,  4103,  4107,  4109,
    4113,  4117,  4119,  4123,  4125,  4128,  4131,  4133,  4137,  4139,
    4141,  4145,  4147,  4151,  4153,  4157,  4159,  4162,  4165,  4167,
    4169,  4171,  4174,  4176,  4178,  4180,  4183,  4185,  4186,  4189,
    4191,  4193,  4195,  4199,  4201,  4203,  4206,  4208,  4210,  4212,
    4215,  4217,  4219,  4221,  4223,  4225,  4227,  4229,  4232,  4234,
    4236,  4240,  4241,  4243,  4245,  4248,  4250,  4252,  4254,  4256,
    4259,  4262,  4265,  4270,  4274,  4276,  4278,  4281,  4283,  4285,
    4287,  4289,  4291,  4293,  4295,  4298,  4301,  4304,  4306,  4308,
    4310,  4312,  4314,  4316,  4318,  4320,  4322,  4324,  4326,  4328,
    4330,  4332,  4334,  4336,  4338,  4340,  4342,  4344,  4346,  4348,
    4350,  4352,  4354,  4356,  4359,  4361,  4365,  4368,  4371,  4373,
    4375,  4379,  4382,  4385,  4387,  4389,  4393,  4397,  4402,  4408,
    4410,  4412,  4414,  4416,  4418,  4420,  4422,  4424,  4426,  4428,
    4430,  4433,  4435,  4439,  4441,  4443,  4445,  4447,  4449,  4451,
    4453,  4456,  4462,  4468,  4474,  4479,  4485,  4491,  4497,  4503,
    4509,  4512,  4515,  4517,  4519,  4521,  4523,  4525,  4527,  4529,
    4531,  4533,  4534,  4539,  4545,  4546,  4550,  4553,  4555,  4559,
    4563,  4565,  4569,  4571,  4575,  4577,  4581,  4583,  4587,  4588,
    4589,  4591,  4592,  4594,  4595,  4597,  4598,  4601,  4602,  4605,
    4606,  4608,  4610,  4611,  4613,  4614,  4616,  4619,  4620,  4623,
    4624,  4628,  4630,  4632,  4634,  4636,  4638,  4640,  4642,  4644,
    4645,  4648,  4650,  4652,  4654,  4656,  4658,  4660,  4662,  4664,
    4666,  4668,  4670,  4672,  4674,  4676,  4678,  4680,  4682,  4684,
    4686,  4688,  4690,  4692,  4694,  4696,  4698,  4700,  4702,  4704,
    4706,  4708,  4710,  4712,  4714,  4716,  4718,  4720,  4722,  4724,
    4726,  4728,  4730,  4732,  4734,  4736,  4738,  4740,  4742,  4744,
    4746,  4748,  4750,  4752,  4754,  4756,  4758,  4760,  4762,  4764,
    4766,  4768,  4770,  4772,  4774,  4776,  4778,  4780,  4782,  4784,
    4786,  4788,  4789,  4791,  4792,  4794,  4795,  4797,  4798,  4800,
    4801,  4803,  4804,  4806,  4807,  4809,  4810,  4812,  4813,  4815,
    4816,  4818,  4819,  4821,  4822,  4824,  4825,  4828,  4829,  4831,
    4832,  4834,  4835,  4837,  4838,  4840,  4841,  4843,  4844,  4846,
    4849,  4850,  4852,  4853,  4855,  4856,  4858,  4859,  4861,  4862,
    4864,  4866,  4867,  4869,  4870,  4872,  4874,  4875,  4877,  4879,
    4880,  4883,  4886,  4887,  4889,  4890,  4892,  4893,  4895,  4896,
    4898,  4900,  4901,  4903,  4904,  4906,  4907,  4910,  4912,  4914,
    4915,  4917,  4918,  4920,  4921,  4923,  4924,  4926,  4927,  4929,
    4931,  4932,  4934,  4935,  4937,  4938,  4940,  4941,  4943,  4946,
    4947,  4949,  4950,  4952,  4953,  4955,  4956,  4958,  4959,  4961,
    4962,  4964,  4965,  4967,  4968,  4970,  4972,  4973,  4975,  4976,
    4980,  4981,  4983,  4986,  4988,  4990,  4992,  4994,  4996,  4998,
    5000,  5002,  5004,  5006,  5008,  5010,  5012,  5014,  5016,  5018,
    5020,  5022,  5024,  5027,  5030,  5032,  5034,  5036,  5038,  5040,
    5042,  5045,  5047,  5051,  5054,  5056,  5058,  5060,  5063,  5065,
    5068,  5070,  5073,  5075,  5078,  5080,  5083,  5085,  5088,  5090,
    5093
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     526,     0,    -1,    -1,   527,   528,    -1,   531,    -1,   529,
      -1,   530,    -1,   529,   530,    -1,   533,    -1,   534,    -1,
      -1,   532,   539,    -1,   540,   541,   539,   535,    -1,   540,
     543,   539,   538,    -1,    -1,   536,    -1,   537,    -1,   536,
     537,    -1,   143,   545,   461,    -1,   139,   545,   461,    -1,
     551,   666,   823,    -1,    -1,   217,   123,   461,    -1,   216,
     123,   461,    -1,    -1,   348,   461,   544,   546,   542,   547,
     461,    -1,   202,   461,   544,   546,   461,    -1,   349,    -1,
     259,    -1,   349,    -1,   259,    -1,    -1,    26,   259,    -1,
      -1,  1320,   548,  1335,    -1,    73,    -1,   549,    -1,   550,
      -1,   172,    -1,   550,    73,    -1,    73,   550,    -1,   466,
      -1,   362,    -1,   552,   553,   617,    -1,    -1,   154,   123,
     461,    -1,   554,   555,   578,   579,   571,    -1,    -1,    85,
     402,   461,    -1,    -1,   556,    -1,   560,    -1,   556,   560,
      -1,   560,   556,    -1,    -1,   423,   461,   557,   558,    -1,
      -1,   570,   559,   461,    -1,    -1,  1352,   108,   275,    -1,
      -1,   309,   461,   561,   562,    -1,    -1,   570,   461,    -1,
     570,   563,   461,    -1,   563,   461,    -1,   564,    -1,   563,
     564,    -1,   565,    -1,   566,    -1,   567,    -1,   568,    -1,
     271,   418,  1320,  1266,  1362,    -1,  1368,  1320,  1232,    -1,
     404,  1320,  1266,    -1,  1306,    60,  1320,   569,    -1,  1232,
      -1,   260,    -1,   505,    -1,   443,    -1,   516,    -1,   570,
     516,    -1,    -1,    -1,   377,   461,   572,   573,    -1,    -1,
     574,   461,    -1,   574,     1,   461,    -1,   575,    -1,   574,
     575,    -1,   201,     9,   232,    -1,   201,   516,   576,    -1,
     201,   577,   232,    -1,    -1,    26,   259,    -1,   203,    -1,
     577,   203,    -1,    -1,   425,   461,    -1,    -1,   580,    -1,
     581,   461,    -1,   580,   581,   461,    -1,   582,    -1,   581,
     582,    -1,   583,    -1,   589,    -1,   598,    -1,   608,    -1,
     605,    -1,   609,    -1,   611,    -1,   612,    -1,   613,    -1,
     614,    -1,   615,    -1,   616,    -1,    -1,   516,   584,   585,
      -1,  1320,    97,    -1,  1266,  1320,  1236,    -1,  1320,  1236,
     586,    -1,   587,    -1,    -1,   587,    -1,   588,    -1,  1064,
    1332,  1236,    -1,   588,  1064,  1332,  1236,    -1,    -1,    11,
    1236,   590,  1320,   591,    -1,   283,    -1,   427,    -1,   428,
      -1,   127,    -1,    28,    -1,   592,    -1,   593,    -1,   592,
     593,    -1,   596,    -1,   596,   452,   596,    -1,    -1,   596,
      17,   594,   595,    -1,   596,    -1,   595,    17,   596,    -1,
     259,    -1,   424,    -1,   522,    -1,   354,    -1,   215,    -1,
     269,    -1,   424,    -1,   522,    -1,   600,   599,    -1,    -1,
     221,   516,    -1,   441,  1307,   601,    -1,   602,    -1,   601,
     602,    -1,   603,  1321,   604,    -1,  1237,    -1,   603,  1237,
      -1,  1267,    -1,   604,  1267,    -1,    59,  1236,  1320,   606,
      -1,   607,    -1,   606,   607,    -1,  1269,    -1,  1269,   452,
    1269,    -1,   260,  1236,  1320,   259,    -1,    99,  1339,  1320,
     259,   610,    -1,    -1,  1352,   333,   259,    -1,   109,  1320,
      69,    -1,   306,   413,  1320,   478,   408,    -1,   101,  1320,
    1231,    -1,    97,   431,  1320,  1231,    -1,   398,  1320,  1231,
      -1,   165,  1320,  1231,    -1,   618,   619,   621,   620,   656,
      -1,    -1,   229,   402,   461,    -1,    -1,   175,   461,    -1,
      -1,   237,   461,    -1,    -1,   621,   622,    -1,    -1,   405,
    1292,  1236,   623,   624,   461,    -1,    -1,   624,   625,    -1,
     626,    -1,   633,    -1,   635,    -1,   637,    -1,   639,    -1,
     641,    -1,   645,    -1,   647,    -1,   648,    -1,   649,    -1,
     651,    -1,   652,    -1,   654,    -1,    29,  1349,   630,   629,
     631,    -1,    29,  1349,   630,   628,   632,    -1,    29,  1349,
     630,   120,   632,    -1,    29,  1349,   630,   241,   632,    -1,
      29,  1349,   630,   627,   632,    -1,   341,    -1,   342,    -1,
     340,    -1,   118,    -1,   119,    -1,   447,    -1,   355,    -1,
      -1,   255,     7,  1311,    -1,    -1,   172,    -1,   126,    -1,
     259,    -1,  1263,    -1,    -1,   259,    -1,  1263,    -1,     4,
    1327,  1320,   634,    -1,   410,    -1,   126,    -1,   355,    -1,
      19,  1336,  1322,  1320,   650,  1286,   636,    -1,    -1,   440,
     513,     9,  1272,    -1,   440,   513,   597,    -1,  1353,  1320,
     638,    -1,   516,    -1,   640,   431,  1320,  1231,    -1,    -1,
     464,    -1,   420,    -1,    -1,   642,   265,  1327,  1320,   643,
      -1,   270,   644,    -1,    33,   644,    -1,   168,    -1,    -1,
     515,   265,   314,  1361,    -1,   515,   265,   314,   277,  1361,
      -1,   515,   392,    -1,   320,  1320,   646,    -1,   646,    -1,
     223,    -1,  1336,  1304,   410,    -1,   367,    -1,   255,   410,
      -1,   325,  1306,  1320,  1235,    -1,   359,   114,  1320,   427,
      -1,   359,  1322,  1320,   650,    -1,  1231,    -1,  1231,   462,
    1230,    -1,  1231,   422,  1320,  1230,    -1,   367,  1322,  1320,
    1231,    -1,   379,   653,  1301,    -1,   290,    -1,  1266,    -1,
     412,  1352,   655,    -1,     9,  1333,    -1,   290,  1333,    -1,
     357,   315,    -1,    -1,   657,   461,    -1,   657,     1,   461,
      -1,   658,    -1,   657,   658,    -1,   659,    -1,   661,    -1,
     396,   660,  1301,  1313,  1221,    -1,    -1,   359,    -1,   420,
      -1,   421,    -1,    -1,   277,   662,  1311,  1345,  1308,   663,
      -1,   664,    -1,   663,   664,    -1,  1222,   665,    -1,    -1,
     336,  1266,    -1,    -1,   668,   669,   670,   667,   702,   758,
     760,   762,   807,    -1,    -1,   103,   123,   461,    -1,    -1,
     464,   402,   461,    -1,    -1,   670,   671,    -1,   672,   704,
      -1,    -1,   674,  1222,   673,   675,   461,    -1,   674,     1,
     461,    -1,   174,    -1,   400,    -1,    -1,   675,   676,    -1,
    1320,   172,    -1,  1320,   206,    -1,   677,    -1,   679,    -1,
     683,    -1,   684,    -1,   687,    -1,   688,    -1,   694,    -1,
     697,    -1,   699,    -1,    47,  1308,  1266,   682,   678,    -1,
      -1,   361,    -1,    58,    -1,   359,  1308,  1266,  1307,    -1,
     359,  1308,  1266,   456,  1266,  1307,    -1,   359,  1320,   511,
    1315,  1342,   681,   682,  1307,   680,    -1,    -1,   115,  1331,
    1231,    -1,    -1,  1314,  1266,    -1,    -1,   456,  1266,    -1,
     242,  1363,  1359,    -1,   509,   311,   685,  1320,   686,    -1,
     509,   311,   176,  1320,   686,    -1,   516,    -1,   216,    -1,
     259,    -1,  1263,    -1,   103,  1363,  1233,    -1,   253,  1320,
    1235,  1326,   689,    -1,    -1,   689,   690,    -1,   691,    -1,
     692,    -1,   693,    -1,  1352,   190,  1303,  1235,    -1,   475,
    1235,    -1,    48,  1235,    -1,   360,  1327,  1320,   695,    -1,
     173,    -1,   508,    -1,   180,    -1,   510,    -1,   696,    -1,
     483,    -1,   395,    -1,    63,  1320,   638,   698,    -1,    -1,
     191,  1230,    -1,   700,   701,    -1,   374,  1320,    -1,   376,
    1300,    -1,  1236,    -1,   701,  1236,    -1,    -1,    -1,   518,
     402,   461,   703,   704,    -1,    -1,    -1,   705,   706,    -1,
     707,   461,    -1,   706,   707,   461,    -1,   719,    -1,    -1,
     709,   710,   708,   721,    -1,   709,     1,   461,    -1,  1284,
     516,    -1,    -1,   177,    -1,   516,    -1,   516,    -1,    -1,
    1320,   206,    -1,  1270,    -1,   248,   714,    -1,   247,   714,
      -1,    50,  1330,   714,    -1,  1260,    -1,    41,    -1,    44,
      -1,    43,    -1,    42,    -1,    40,    -1,   718,    -1,   730,
      -1,   731,    -1,   715,    -1,   716,    -1,   717,    -1,     1,
     461,    -1,   182,    -1,   186,    -1,   183,    -1,   184,    -1,
     181,    -1,   185,    -1,   187,    -1,   335,    -1,   350,    -1,
     709,   711,    86,   712,   720,    -1,  1302,   713,    -1,   198,
     516,    -1,    -1,   721,   722,    -1,   723,    -1,   724,    -1,
     726,    -1,   727,    -1,   728,    -1,   732,    -1,   735,    -1,
     747,    -1,   748,    -1,   749,    -1,   750,    -1,   751,    -1,
     756,    -1,   757,    -1,   363,  1260,    -1,  1320,   172,   725,
      -1,    -1,    26,   259,    -1,  1320,   206,    -1,   332,    -1,
     729,    -1,   502,  1320,   729,    -1,    39,    -1,    74,    -1,
     730,    -1,   731,    -1,    78,    -1,    79,    -1,    80,    -1,
      81,    -1,    82,    -1,   120,    -1,   222,    -1,   324,    -1,
     335,    -1,   350,    -1,   417,    -1,   415,    -1,   416,    -1,
     490,    -1,   488,    -1,   489,    -1,    41,  1340,    -1,    41,
     487,    -1,    44,  1340,    -1,    44,   487,    -1,    43,  1340,
      -1,    43,   487,    -1,    42,  1340,    -1,    42,   487,    -1,
      40,  1340,    -1,    40,   487,    -1,   182,    -1,   183,    -1,
     181,    -1,   184,    -1,   185,    -1,   280,    -1,    76,    -1,
     189,    -1,    77,    -1,   188,    -1,  1341,   244,  1296,    -1,
    1341,   478,  1296,    -1,   310,  1266,   736,  1347,   738,   734,
      -1,    -1,   433,  1266,    -1,   310,  1266,   736,  1347,   738,
     741,   744,    -1,   310,   126,   739,   737,   736,   740,   741,
     744,    -1,    -1,   456,  1266,    -1,    -1,   198,  1266,    -1,
      -1,   115,  1331,  1231,    -1,    -1,    53,  1315,   516,    -1,
      -1,   226,    -1,   742,    -1,    -1,   742,   743,  1322,  1320,
    1230,    -1,    27,    -1,   116,    -1,    -1,   223,  1305,   745,
      -1,   746,    -1,   745,   746,    -1,   516,    -1,   238,  1338,
      -1,   442,  1323,    -1,    45,  1350,   522,    -1,    36,    -1,
      -1,   509,  1321,   753,   752,   755,    -1,   754,    -1,   753,
     754,    -1,  1270,    -1,  1270,   452,  1270,    -1,    -1,  1351,
     463,  1320,  1270,    -1,   371,  1263,    -1,   371,  1263,   452,
    1263,    -1,    21,   247,    -1,    21,   306,    -1,    -1,    -1,
     264,   402,   461,   759,   704,    -1,    -1,    -1,   258,   402,
     461,   761,   704,    -1,    -1,    -1,   374,   402,   461,   763,
     764,    -1,    -1,   764,   765,    -1,    -1,   356,  1223,   766,
     767,   461,   781,    -1,    -1,   767,   768,    -1,     1,   461,
      -1,  1320,   206,    -1,    62,  1320,  1250,    -1,   769,    -1,
     772,    -1,  1376,   770,    -1,  1312,   771,    -1,  1259,    -1,
     771,  1259,    -1,   326,  1325,   773,   774,    -1,  1268,    -1,
    1268,  1360,  1268,  1355,    -1,  1268,  1360,    -1,    -1,   774,
     775,    -1,   776,    -1,   777,    -1,   778,    -1,   779,    -1,
     780,    -1,   213,  1320,  1268,    -1,   179,  1369,  1320,  1268,
      -1,   243,  1370,  1320,  1268,    -1,   243,  1369,  1320,  1268,
      -1,   190,  1320,  1268,    -1,    -1,   781,   782,    -1,    -1,
     709,   710,   783,   784,   461,    -1,    -1,   784,   785,    -1,
     786,    -1,   790,    -1,   796,    -1,   727,    -1,   806,    -1,
     732,    -1,   747,    -1,   798,    -1,   749,    -1,   804,    -1,
     791,    -1,   751,    -1,   794,    -1,   805,    -1,   733,    -1,
     795,    -1,   482,  1320,   787,    -1,  1374,    -1,  1372,    -1,
    1370,   788,    -1,  1369,    -1,  1371,   788,    -1,  1373,    -1,
    1375,    -1,    -1,  1259,   789,    -1,   178,   789,    -1,    -1,
     318,   326,    -1,   288,   212,  1320,   801,    -1,   439,  1330,
    1243,   792,    -1,    -1,   380,  1331,   793,    -1,  1259,    -1,
     178,    -1,   338,   513,  1198,    -1,   511,  1259,   198,  1245,
      49,  1245,    -1,   797,   800,    -1,   255,  1329,  1321,    -1,
     257,  1300,    -1,   799,   802,    -1,  1354,  1329,  1321,    -1,
    1355,  1300,    -1,   801,    -1,   800,   801,    -1,   334,  1266,
      -1,  1268,    -1,   289,    -1,   803,    -1,   802,   803,    -1,
     334,  1266,    -1,  1268,    -1,   422,  1320,  1245,  1293,    -1,
     212,  1317,    -1,   502,  1320,   120,    -1,    -1,    -1,   397,
     402,   461,   808,   809,    -1,    -1,   810,    -1,   811,   461,
      -1,   810,   811,   461,    -1,   719,    -1,    -1,   709,   710,
     812,   813,    -1,   709,     1,   461,    -1,    -1,   813,   814,
      -1,    45,   255,    -1,    45,   397,    -1,    38,    -1,    46,
      -1,   161,   815,    -1,   161,   816,    -1,   214,    -1,   268,
      -1,   385,    -1,   484,    -1,   323,    -1,   211,    -1,   246,
      -1,    32,    -1,   403,    -1,   378,    -1,   200,    -1,   352,
      57,  1320,  1250,    -1,   352,    -1,   466,    -1,   255,  1328,
    1320,   819,  1252,    -1,  1354,  1328,  1320,   820,  1252,    -1,
     192,  1320,  1252,    -1,    35,  1320,  1252,    -1,   728,    -1,
     749,    -1,   822,    -1,   747,    -1,   732,    -1,   751,    -1,
     727,    -1,   821,    -1,   507,  1259,    -1,   198,  1255,    -1,
     456,  1259,    -1,   157,    -1,  1310,   255,    -1,   159,    -1,
    1310,   397,    -1,   334,    -1,   473,    -1,   273,    -1,   468,
      -1,    -1,   817,    -1,   818,    -1,    -1,   817,    -1,   818,
      -1,   310,  1266,  1347,    -1,  1320,   206,    -1,    -1,    -1,
      -1,   344,   123,   827,   835,   461,   824,   836,   825,   838,
      -1,    -1,   826,   849,   461,   838,    -1,    -1,    -1,   507,
     828,   830,    -1,    -1,    56,   829,   830,    -1,   831,    -1,
     830,   831,    -1,   832,   833,   834,   516,    -1,    -1,  1305,
     365,    -1,  1305,   509,    -1,    -1,   418,  1320,    32,    -1,
     418,  1320,   111,    -1,   487,   418,  1320,    32,    -1,   487,
     418,  1320,  1266,    -1,   418,  1320,  1266,    -1,    -1,   317,
      -1,    -1,   383,   313,    -1,   383,   516,    -1,    -1,    -1,
     110,   461,   837,   838,   130,   110,   461,    -1,    -1,   838,
     839,    -1,   840,    -1,   843,    -1,   849,   461,    -1,   844,
      -1,   461,    -1,    -1,   516,   402,   845,   461,   841,   842,
      -1,    -1,  1135,   461,    -1,   516,   461,    -1,   516,    -1,
      -1,  1266,    -1,    -1,    -1,   847,   848,   849,    -1,    -1,
     850,   851,    -1,   849,   851,    -1,   852,    -1,   868,    -1,
     873,    -1,   877,    -1,   882,    -1,   900,    -1,   903,    -1,
     911,    -1,   907,    -1,   912,    -1,   913,    -1,   918,    -1,
     932,    -1,   936,    -1,   939,    -1,   953,    -1,   957,    -1,
     960,    -1,   963,    -1,   967,    -1,   968,    -1,   972,    -1,
     982,    -1,   985,    -1,  1003,    -1,  1005,    -1,  1008,    -1,
    1012,    -1,  1018,    -1,  1030,    -1,  1038,    -1,  1039,    -1,
    1042,    -1,  1043,    -1,  1047,    -1,  1052,    -1,  1053,    -1,
    1061,    -1,  1077,    -1,  1087,    -1,  1096,    -1,  1101,    -1,
    1108,    -1,  1112,    -1,  1114,    -1,  1117,    -1,  1120,    -1,
    1123,    -1,  1150,    -1,   288,   407,    -1,     1,  1297,    -1,
      -1,     3,   853,   854,   867,    -1,    -1,   856,   855,   857,
    1158,    -1,  1259,   198,   860,    -1,  1259,   198,  1355,    -1,
    1259,   198,   104,   521,    -1,  1259,   198,   104,    -1,  1259,
     198,   105,   520,    -1,  1259,   198,   105,    -1,  1259,   198,
     106,    -1,  1259,   198,   163,   240,    -1,  1259,   198,   166,
     431,    -1,  1259,   198,   453,    -1,  1259,   198,   504,   279,
      -1,  1259,   198,    70,    -1,  1259,   198,   156,  1158,    -1,
    1259,   198,   154,  1248,  1158,    -1,  1259,   198,    24,    -1,
    1259,   198,    25,  1158,    -1,  1259,   198,  1225,    -1,  1259,
     198,   516,    -1,  1259,    -1,   313,    -1,    -1,   858,    -1,
     859,    -1,   858,   859,    -1,   861,    -1,   199,    -1,   864,
      -1,  1352,   865,    -1,   257,    -1,   255,   304,    -1,  1303,
     862,    -1,  1303,   863,    -1,    30,  1252,    -1,   255,  1328,
    1252,    -1,  1354,  1328,  1252,    -1,   336,  1328,  1252,    -1,
     275,  1320,    47,    -1,    32,    -1,   445,    -1,    38,    -1,
      46,    -1,    92,    -1,   200,    -1,   214,    -1,   246,    -1,
     266,    -1,   268,    -1,   291,    -1,   323,    -1,   352,    57,
    1320,  1250,    -1,   352,    -1,   378,    -1,   385,    -1,   403,
      -1,   353,   418,  1320,  1252,    -1,   418,  1320,  1252,    -1,
     484,    -1,   290,   866,    -1,   866,    -1,   500,    -1,   192,
    1320,  1252,    -1,    35,  1320,  1252,    -1,   399,   493,  1197,
      -1,   399,   124,  1197,    -1,   454,  1299,  1253,    -1,   494,
      -1,   111,    -1,    -1,   131,    -1,    -1,     5,   869,   870,
     872,    -1,  1241,   456,  1217,  1170,    -1,  1241,   871,   205,
    1217,  1170,    -1,    95,  1259,   456,  1259,  1293,  1170,    -1,
      -1,   456,  1242,    -1,    -1,   132,    -1,    -1,    10,   874,
     875,    -1,  1259,  1287,   876,    -1,  1211,    58,  1288,   876,
      -1,    -1,   383,  1239,    -1,    -1,    18,   878,   879,    -1,
     880,    -1,   879,   880,    -1,  1227,   456,   881,  1227,    -1,
      -1,   346,   456,    -1,    -1,    51,   883,   884,   899,    -1,
     885,  1251,   886,   891,   894,    -1,    -1,   430,    -1,   432,
      -1,   274,    -1,    -1,    -1,   507,   887,   888,    -1,   889,
      -1,   888,   889,    -1,   890,   313,    -1,   890,   833,  1242,
      -1,    -1,  1305,   365,    -1,  1305,    88,    -1,  1305,   509,
      -1,    -1,   892,  1319,  1259,    -1,   892,   893,    -1,   892,
     294,    -1,   892,     6,  1330,  1259,    -1,   383,    -1,   205,
      -1,   470,    -1,   313,    -1,    -1,   896,   897,    -1,   898,
     895,    -1,    -1,   896,    -1,   166,   846,    -1,   471,   846,
      -1,    -1,   898,    -1,   299,   846,    -1,    -1,   133,    -1,
      -1,    52,   901,   902,    -1,  1250,    -1,   902,  1250,    -1,
      -1,    61,   904,   905,    -1,  1222,   906,    -1,   905,  1222,
     906,    -1,    -1,  1364,    -1,  1364,  1313,   370,    -1,  1352,
     290,   387,    -1,  1352,   265,    -1,    -1,    75,   908,   909,
     910,    -1,  1217,  1356,  1211,  1170,    -1,    -1,   134,    -1,
      72,    -1,    89,    -1,    -1,   112,   914,   915,   917,    -1,
    1222,  1336,  1191,    -1,   464,   916,    -1,  1222,    -1,   916,
    1222,    -1,    -1,   135,    -1,    -1,   120,   919,   920,   931,
      -1,  1250,   498,  1165,    -1,  1250,   499,  1165,    -1,  1250,
     496,  1165,    -1,  1250,   497,  1165,    -1,   921,  1165,    -1,
     922,  1240,    -1,  1241,    -1,   923,    -1,   922,   923,    -1,
      -1,   925,   924,   926,    -1,  1241,    -1,   313,    -1,   927,
      -1,   926,   927,    -1,   928,    -1,  1352,   303,    -1,   864,
      -1,   861,    -1,  1352,   930,    -1,   495,  1225,    -1,   495,
     516,    -1,   495,   341,    -1,   495,   929,    -1,    97,    -1,
      98,    -1,    38,    -1,    45,   255,    -1,    45,   397,    -1,
      46,    -1,    92,    -1,   161,   815,    -1,   161,   816,    -1,
     214,    -1,   268,    -1,   323,    -1,   385,    -1,   418,  1320,
    1252,    -1,   484,    -1,   192,  1320,  1252,    -1,    35,  1320,
    1252,    -1,   399,   493,  1197,    -1,   399,   124,  1197,    -1,
      -1,   136,    -1,    -1,   122,   933,   934,   935,    -1,  1242,
     231,  1217,  1170,    -1,  1242,   231,  1242,   205,  1217,  1170,
      -1,  1242,    49,  1242,   205,  1217,  1170,    -1,  1242,   231,
    1242,   205,  1218,   369,  1218,  1170,    -1,  1242,    49,  1242,
     205,  1218,   369,  1218,  1170,    -1,    -1,   137,    -1,    -1,
     153,   937,   938,    -1,   259,   886,    -1,    -1,   164,   940,
     941,   952,    -1,   942,   944,    -1,   943,    -1,   942,    17,
     943,    -1,  1199,    -1,   474,    -1,   463,    -1,   945,   947,
      -1,   945,    -1,   946,    -1,   945,   946,    -1,   948,   846,
      -1,   513,   321,   846,    -1,   513,   949,    -1,   948,   513,
     949,    -1,   950,    -1,   949,    17,   950,    -1,  1200,   951,
      -1,    21,    -1,   474,    -1,   463,    -1,    -1,   452,  1199,
      -1,    -1,   138,    -1,    -1,   169,   954,   955,    -1,    -1,
     347,   956,    -1,   201,    -1,   329,   102,    -1,   329,    -1,
     402,    -1,   328,    -1,    -1,   892,  1242,    -1,    -1,   197,
     958,   959,    -1,  1238,    -1,    -1,   204,   961,   962,    -1,
    1263,    -1,    -1,   207,   964,   965,    -1,  1348,  1226,   966,
      -1,    -1,   115,  1331,  1259,    -1,   208,   956,    -1,    -1,
     218,   969,  1198,  1346,   970,   971,    -1,   846,   129,   846,
      -1,   129,   846,    -1,   846,    -1,    -1,   140,    -1,    -1,
     225,   973,   974,    -1,  1238,   975,   976,   977,   981,    -1,
      -1,  1352,   177,    -1,    -1,     9,  1348,   509,    -1,   980,
    1348,   509,    -1,    -1,   373,   978,    -1,   979,    -1,   978,
     979,    -1,   980,  1309,    49,  1242,    -1,    12,    -1,    15,
      -1,   306,    -1,    16,    -1,   307,    -1,   280,    -1,   281,
      -1,    -1,  1346,  1348,   111,    -1,    -1,   227,   983,   984,
      -1,  1223,    -1,   984,  1223,    -1,    -1,   230,   986,   987,
      -1,   988,   989,    -1,  1259,    -1,  1270,    -1,  1273,    -1,
     990,   992,    -1,   990,    -1,   992,    -1,   993,    -1,    -1,
     446,   991,   994,    -1,   373,   996,    -1,    93,  1248,   456,
    1249,  1000,    -1,   995,    -1,   994,   995,    -1,  1248,   191,
      -1,    58,  1000,    -1,     9,    -1,   244,    -1,   478,    -1,
    1248,  1000,    -1,   997,    -1,   996,   997,    -1,    58,    49,
    1248,  1000,    -1,   998,   999,    -1,    -1,     9,    -1,   244,
      -1,   179,    -1,   478,    -1,  1248,    49,  1249,  1000,    -1,
      -1,  1001,    -1,  1002,    -1,  1001,  1002,    -1,  1002,  1001,
      -1,    37,  1318,  1242,    -1,     8,  1318,  1242,    -1,    -1,
     272,  1004,  1079,    -1,    -1,   276,  1006,  1007,    -1,  1242,
     456,  1238,    -1,    95,  1242,   456,  1238,    -1,    -1,   278,
    1009,  1010,  1011,    -1,  1242,    49,  1217,  1170,    -1,  1242,
      49,  1242,   205,  1217,  1170,    -1,    -1,   141,    -1,    -1,
     316,  1013,  1014,    -1,  1015,  1016,  1221,  1017,    -1,  1014,
    1015,  1016,  1221,  1017,    -1,   228,    -1,   322,    -1,   236,
      -1,   171,    -1,    -1,   412,  1352,   655,    -1,    -1,  1352,
     290,   387,    -1,  1352,   265,    -1,   386,    -1,    -1,   329,
    1019,  1020,    -1,  1024,  1025,    -1,    -1,  1025,  1021,   846,
    1022,    -1,  1025,  1023,    -1,    -1,   142,    -1,   142,    -1,
     461,    -1,  1227,    -1,  1227,   452,  1227,    -1,    -1,  1251,
     455,    -1,   193,    -1,  1026,   492,  1027,    -1,  1026,   511,
    1028,    -1,    -1,  1352,   449,  1155,    -1,   169,    -1,  1198,
      -1,  1029,    -1,  1028,     8,  1029,    -1,  1259,   198,  1242,
      49,  1242,   492,  1198,    -1,    -1,   357,  1031,  1032,  1037,
      -1,  1222,  1290,  1336,  1033,  1034,  1035,  1036,    -1,    -1,
     231,  1259,    -1,    -1,   220,   265,    -1,  1352,   265,    -1,
    1352,   239,   265,    -1,  1352,   290,   265,    -1,  1352,   219,
     265,    -1,  1352,   512,    -1,    -1,   240,  1320,  1259,    -1,
    1191,    -1,  1181,    -1,    -1,   144,    -1,   358,    -1,    -1,
     368,  1040,  1041,    -1,  1219,  1153,    -1,   381,    -1,    -1,
     382,  1044,  1045,  1046,    -1,  1222,  1336,  1033,  1180,    -1,
      -1,   145,    -1,    -1,   388,  1048,  1049,  1051,    -1,  1219,
    1153,  1050,  1191,    -1,    -1,  1352,   265,    -1,  1352,   290,
     265,    -1,    -1,   146,    -1,   392,    -1,    -1,   401,  1054,
    1055,  1060,    -1,  1220,  1056,  1057,  1058,    -1,     9,  1220,
    1057,   513,  1199,   846,    -1,    -1,   511,  1259,    -1,    -1,
     130,   846,    -1,  1059,    -1,  1059,  1058,    -1,   513,  1198,
     846,    -1,    -1,   147,    -1,    -1,   411,  1062,  1063,    -1,
    1066,    -1,  1067,    -1,  1070,    -1,  1071,    -1,  1072,    -1,
    1074,    -1,  1076,    -1,   314,    -1,   312,    -1,   493,    -1,
     124,    -1,   154,  1248,   456,  1248,    -1,  1256,    31,  1068,
      -1,  1069,    -1,  1068,  1069,    -1,    38,  1064,    -1,    46,
    1064,    -1,   214,  1064,    -1,   268,  1064,    -1,   385,  1064,
      -1,   484,  1064,    -1,   246,  1064,    -1,   323,  1064,    -1,
    1238,   456,   153,  1247,    -1,  1238,   456,  1242,    -1,  1238,
    1065,    49,  1242,    -1,  1073,    -1,  1072,  1073,    -1,  1224,
     456,  1064,    -1,  1075,    -1,  1074,  1075,    -1,  1238,   456,
     474,    -1,  1238,   456,   463,    -1,   243,   166,   456,   312,
      -1,    -1,   420,  1078,  1079,    -1,    -1,  1257,  1081,  1083,
    1084,  1080,  1085,  1086,    -1,    -1,  1081,  1331,   743,  1322,
    1082,    -1,    -1,  1082,  1263,    -1,    -1,  1367,  1316,    -1,
      -1,  1353,  1320,  1231,    -1,    -1,   507,  1221,    -1,   228,
     344,  1320,  1024,    -1,    -1,   205,  1221,    -1,   322,   344,
    1320,  1024,    -1,    -1,   429,  1088,  1089,  1095,    -1,  1222,
    1091,  1090,  1191,    -1,    -1,  1352,  1366,  1211,    -1,    -1,
     240,  1320,  1092,  1259,    -1,   179,    -1,   243,    -1,  1204,
      -1,  1291,  1205,    -1,  1291,  1206,    -1,  1291,  1207,    -1,
    1291,  1208,    -1,  1093,    -1,  1094,    -1,   293,  1204,    -1,
     298,    -1,    -1,   148,    -1,    -1,   434,   394,  1097,  1098,
      -1,   434,  1100,    -1,    -1,   892,  1242,    -1,  1242,    -1,
    1352,   162,  1344,  1099,    -1,  1352,   292,  1344,  1099,    -1,
      -1,  1242,    -1,   259,    -1,   424,    -1,   522,    -1,   354,
      -1,    -1,   435,  1102,  1103,  1107,    -1,  1104,   231,  1259,
    1106,  1175,    -1,  1105,    -1,  1104,  1105,    -1,  1242,    -1,
     113,  1305,   418,    -1,   113,  1305,  1242,    -1,    -1,  1352,
     335,  1320,  1259,    -1,    -1,   149,    -1,    -1,   438,  1109,
    1110,  1111,    -1,  1241,   198,  1217,  1170,    -1,  1241,   198,
    1242,   205,  1217,  1170,    -1,    95,  1259,   198,  1259,  1293,
    1170,    -1,    -1,   150,    -1,   440,  1113,    -1,    -1,   343,
      -1,    -1,   448,  1115,  1116,    -1,  1223,    -1,  1116,  1223,
      -1,    -1,   479,  1118,  1119,    -1,  1259,   198,  1248,   456,
    1249,    -1,    -1,   486,  1121,  1122,    -1,  1222,  1337,    -1,
      -1,   491,  1124,  1125,  1134,    -1,  1259,  1126,  1129,  1106,
    1133,  1175,    -1,    -1,   113,  1305,  1127,    -1,  1128,    -1,
    1127,   318,  1128,    -1,  1285,  1248,    -1,   231,  1130,    -1,
    1129,  1130,    -1,  1259,  1131,  1132,    -1,    -1,   114,  1315,
    1259,    -1,    -1,    96,  1315,  1259,    -1,    -1,   446,  1315,
    1259,    -1,    -1,   151,    -1,    -1,   503,  1136,  1137,    -1,
    1138,    -1,  1141,    -1,  1145,    -1,  1147,    -1,  1148,    -1,
    1139,  1299,  1343,  1357,  1334,  1331,  1140,    -1,    -1,   206,
      -1,  1221,    -1,   228,    -1,   322,    -1,   236,    -1,   171,
      -1,  1313,   108,  1331,  1142,    -1,  1143,    -1,  1142,  1143,
      -1,  1228,    -1,     9,   345,    -1,     9,  1144,  1263,    -1,
      -1,   366,    -1,   366,   311,    -1,   311,    -1,  1303,   347,
    1146,    -1,   429,    -1,   130,    -1,  1139,    37,   375,  1259,
      -1,  1149,    -1,   167,    -1,   128,    -1,    -1,   519,  1151,
    1152,  1157,    -1,  1219,  1153,  1154,  1050,  1156,    -1,    -1,
     198,  1255,    -1,    -1,  1155,  1298,  1252,  1324,    -1,  1155,
    1298,  1225,    -1,  1155,  1298,   326,    -1,    37,    -1,     8,
      -1,    -1,  1192,    -1,  1186,    -1,    -1,   152,    -1,    -1,
    1160,  1162,    -1,  1163,  1159,    -1,    -1,  1160,    -1,  1161,
     846,    -1,   163,    -1,   166,    -1,    -1,  1163,    -1,  1164,
     846,    -1,   297,    -1,   299,    -1,    -1,  1167,  1168,    -1,
    1169,  1166,    -1,    -1,  1167,    -1,   166,   846,    -1,    -1,
    1169,    -1,   299,   846,    -1,    -1,  1172,  1173,    -1,  1174,
    1171,    -1,    -1,  1172,    -1,   419,   846,    -1,    -1,  1174,
      -1,   302,   846,    -1,    -1,  1177,  1178,    -1,  1179,  1176,
      -1,    -1,  1177,    -1,   471,   846,    -1,    -1,  1179,    -1,
     301,   846,    -1,  1183,  1184,    -1,  1183,  1184,    -1,  1185,
    1182,    -1,    -1,  1183,    -1,   130,   846,    -1,    -1,  1185,
      -1,   295,   846,    -1,  1188,  1189,    -1,  1190,  1187,    -1,
      -1,  1188,    -1,   158,   846,    -1,    -1,  1190,    -1,   296,
     846,    -1,    -1,  1192,    -1,  1194,  1195,    -1,  1196,  1193,
      -1,    -1,  1194,    -1,   234,   846,    -1,    -1,  1196,    -1,
     300,   846,    -1,    -1,  1254,  1365,    -1,  1199,    -1,  1200,
      -1,    -1,  1201,  1202,    -1,  1203,    -1,  1202,   235,    -1,
    1202,  1203,    -1,  1242,    -1,   472,    -1,   458,    -1,   473,
      -1,   468,    -1,   469,    -1,   460,    -1,   170,    -1,  1204,
      -1,  1205,    -1,  1206,    -1,  1207,    -1,  1208,    -1,   298,
      -1,   293,    -1,    20,    -1,   318,    -1,   313,    -1,   306,
      -1,    12,    -1,    13,    -1,    14,    -1,   337,    -1,   287,
      -1,   462,    -1,   160,  1348,    -1,   465,    -1,   209,    -1,
     467,    -1,   249,    -1,   210,    -1,   250,    -1,  1211,    -1,
    1209,  1210,  1211,    -1,    -1,    71,    -1,   406,    -1,  1211,
     473,  1212,    -1,  1211,   468,  1212,    -1,  1212,    -1,  1212,
     469,  1213,    -1,  1212,   460,  1213,    -1,  1213,    -1,  1214,
     170,  1213,    -1,  1214,    -1,   473,  1215,    -1,   468,  1215,
      -1,  1215,    -1,   472,  1211,   458,    -1,  1245,    -1,   254,
      -1,   254,  1358,   516,    -1,   256,    -1,   256,  1358,   516,
      -1,   327,    -1,   327,  1358,   516,    -1,  1218,    -1,  1217,
    1218,    -1,  1239,  1293,    -1,  1263,    -1,  1263,    -1,  1222,
      -1,  1221,  1222,    -1,   516,    -1,   516,    -1,  1225,    -1,
    1224,  1225,    -1,   274,    -1,    -1,  1226,  1227,    -1,  1228,
      -1,  1263,    -1,  1229,    -1,  1229,  1358,  1229,    -1,   259,
      -1,  1231,    -1,  1230,  1231,    -1,  1263,    -1,   516,    -1,
    1234,    -1,  1233,  1234,    -1,   516,    -1,  1231,    -1,   259,
      -1,   516,    -1,     1,    -1,   516,    -1,  1239,    -1,  1238,
    1239,    -1,  1261,    -1,  1271,    -1,     6,  1330,  1260,    -1,
      -1,  1241,    -1,  1242,    -1,  1241,  1242,    -1,  1259,    -1,
    1270,    -1,  1273,    -1,  1216,    -1,   248,  1260,    -1,   248,
    1271,    -1,   248,  1273,    -1,     6,  1330,  1246,  1247,    -1,
       6,  1330,  1260,    -1,   274,    -1,  1245,    -1,  1243,  1245,
      -1,  1259,    -1,  1271,    -1,  1273,    -1,  1259,    -1,  1271,
      -1,  1273,    -1,  1216,    -1,   248,  1260,    -1,   248,  1271,
      -1,   248,  1273,    -1,   347,    -1,   153,    -1,  1260,    -1,
     259,    -1,  1259,    -1,  1271,    -1,  1259,    -1,  1270,    -1,
    1259,    -1,   259,    -1,  1259,    -1,   259,    -1,  1273,    -1,
    1256,    -1,  1266,    -1,   522,    -1,  1256,    -1,  1268,    -1,
    1256,    -1,  1266,    -1,  1259,    -1,  1270,    -1,  1273,    -1,
    1258,    -1,  1258,    -1,  1263,    -1,  1263,  1264,    -1,  1260,
      -1,  1263,  1264,  1265,    -1,  1263,  1264,    -1,  1263,  1265,
      -1,  1263,    -1,  1262,    -1,  1263,  1264,  1265,    -1,  1263,
    1264,    -1,  1263,  1265,    -1,  1263,    -1,   516,    -1,   516,
    1358,  1263,    -1,   472,  1209,   458,    -1,   472,  1211,   459,
     458,    -1,   472,  1211,   459,  1211,   458,    -1,   259,    -1,
     259,    -1,   259,    -1,   259,    -1,   424,    -1,   522,    -1,
     354,    -1,   215,    -1,   269,    -1,   470,    -1,  1271,    -1,
       9,  1272,    -1,  1272,    -1,  1271,   457,  1272,    -1,   259,
      -1,   424,    -1,   522,    -1,   354,    -1,   215,    -1,   269,
      -1,   470,    -1,  1274,  1277,    -1,  1275,   472,  1244,   458,
    1277,    -1,  1276,   472,  1209,   458,  1277,    -1,   480,   472,
    1279,   458,  1277,    -1,   308,   472,  1280,   458,    -1,   261,
     472,  1281,   458,  1277,    -1,   262,   472,  1281,   458,  1277,
      -1,   263,   472,  1281,   458,  1277,    -1,   195,   472,  1282,
     458,  1277,    -1,   196,   472,  1283,   458,  1277,    -1,   203,
    1278,    -1,   506,  1278,    -1,   100,    -1,   514,    -1,   501,
      -1,   267,    -1,   384,    -1,    83,    -1,   194,    -1,   436,
      -1,   437,    -1,    -1,   472,  1211,   459,   458,    -1,   472,
    1211,   459,  1211,   458,    -1,    -1,   472,  1209,   458,    -1,
     472,   458,    -1,  1244,    -1,  1244,  1210,   244,    -1,  1244,
    1210,   478,    -1,  1244,    -1,  1244,  1210,  1244,    -1,  1211,
      -1,  1211,  1210,  1231,    -1,  1209,    -1,  1209,  1210,   444,
      -1,  1209,    -1,  1209,  1210,   444,    -1,    -1,    -1,     9,
      -1,    -1,  1367,    -1,    -1,   226,    -1,    -1,   226,  1289,
      -1,    -1,   456,  1249,    -1,    -1,   288,    -1,   339,    -1,
      -1,   293,    -1,    -1,   317,    -1,   293,   317,    -1,    -1,
     393,  1294,    -1,    -1,   275,  1320,  1295,    -1,    34,    -1,
     284,    -1,   285,    -1,   286,    -1,   351,    -1,   476,    -1,
     477,    -1,   481,    -1,    -1,   408,  1306,    -1,   461,    -1,
       3,    -1,     5,    -1,    10,    -1,    18,    -1,    51,    -1,
      52,    -1,    61,    -1,    72,    -1,    75,    -1,    89,    -1,
     112,    -1,   120,    -1,   122,    -1,   129,    -1,   153,    -1,
     164,    -1,   169,    -1,   197,    -1,   204,    -1,   207,    -1,
     208,    -1,   218,    -1,   225,    -1,   227,    -1,   230,    -1,
     272,    -1,   276,    -1,   278,    -1,   288,    -1,   316,    -1,
     329,    -1,   357,    -1,   368,    -1,   382,    -1,   388,    -1,
     392,    -1,   401,    -1,   411,    -1,   420,    -1,   429,    -1,
     434,    -1,   435,    -1,   438,    -1,   440,    -1,   448,    -1,
     479,    -1,   486,    -1,   491,    -1,   519,    -1,   131,    -1,
     132,    -1,   133,    -1,   134,    -1,   135,    -1,   136,    -1,
     137,    -1,   138,    -1,   140,    -1,   141,    -1,   142,    -1,
     144,    -1,   145,    -1,   146,    -1,   147,    -1,   148,    -1,
     149,    -1,   150,    -1,   151,    -1,   152,    -1,    -1,     7,
      -1,    -1,     8,    -1,    -1,    22,    -1,    -1,    23,    -1,
      -1,    26,    -1,    -1,    30,    -1,    -1,    39,    -1,    -1,
      49,    -1,    -1,    57,    -1,    -1,    58,    -1,    -1,    87,
      -1,    -1,   103,    -1,    -1,   130,  1330,    -1,    -1,   464,
      -1,    -1,   178,    -1,    -1,   191,    -1,    -1,   198,    -1,
      -1,   221,    -1,    -1,   319,    -1,   221,   319,    -1,    -1,
     224,    -1,    -1,   466,    -1,    -1,   231,    -1,    -1,   235,
      -1,    -1,   235,    -1,    22,    -1,    -1,   240,    -1,    -1,
     245,    -1,   391,    -1,    -1,   255,    -1,   257,    -1,    -1,
     251,  1320,    -1,   252,  1300,    -1,    -1,   257,    -1,    -1,
     275,    -1,    -1,   304,    -1,    -1,   304,    -1,   305,    -1,
      -1,   311,    -1,    -1,   314,    -1,    -1,   431,   235,    -1,
     431,    -1,   235,    -1,    -1,   321,    -1,    -1,   344,    -1,
      -1,   347,    -1,    -1,   359,    -1,    -1,   359,    -1,   361,
      -1,    -1,   391,    -1,    -1,   413,    -1,    -1,   414,    -1,
      -1,   413,    -1,   413,   235,    -1,    -1,   418,    -1,    -1,
     426,    -1,    -1,   431,    -1,    -1,   447,    -1,    -1,   451,
      -1,    -1,   455,    -1,    -1,   456,    -1,    -1,   456,    -1,
     507,    -1,    -1,   513,    -1,    -1,   513,   411,   456,    -1,
      -1,   515,    -1,    64,   409,    -1,   409,    -1,    67,    -1,
      65,    -1,    68,    -1,    66,    -1,   462,    -1,   160,    -1,
     166,    -1,   162,    -1,   221,    -1,   311,    -1,   426,    -1,
     313,    -1,   255,    -1,   257,    -1,   359,    -1,   361,    -1,
      58,    -1,   517,    -1,   359,  1320,    -1,   361,  1300,    -1,
     364,    -1,   485,    -1,   255,    -1,   257,    -1,   418,    -1,
     247,    -1,   515,   125,    -1,   125,    -1,   347,    64,   409,
      -1,    64,   409,    -1,   409,    -1,   117,    -1,   107,    -1,
      90,   213,    -1,    55,    -1,    90,   190,    -1,    54,    -1,
     326,   213,    -1,   330,    -1,   326,   190,    -1,   331,    -1,
     374,   213,    -1,   390,    -1,   374,   190,    -1,   389,    -1,
      90,  1320,    -1,    91,  1300,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  1947,  1947,  1947,  1980,  1981,  1985,  1986,  1990,  1991,
    1995,  1995,  2018,  2029,  2035,  2036,  2040,  2041,  2045,  2053,
    2062,  2070,  2071,  2072,  2077,  2076,  2089,  2100,  2111,  2115,
    2116,  2120,  2121,  2124,  2125,  2129,  2138,  2147,  2148,  2152,
    2153,  2157,  2161,  2171,  2176,  2177,  2186,  2193,  2194,  2204,
    2205,  2206,  2207,  2208,  2221,  2220,  2230,  2231,  2234,  2235,
    2249,  2248,  2258,  2259,  2260,  2261,  2265,  2266,  2270,  2271,
    2272,  2273,  2277,  2285,  2292,  2299,  2310,  2314,  2318,  2322,
    2329,  2330,  2335,  2337,  2336,  2347,  2348,  2349,  2356,  2357,
    2361,  2365,  2371,  2376,  2379,  2386,  2391,  2401,  2402,  2414,
    2415,  2419,  2420,  2424,  2425,  2429,  2430,  2431,  2432,  2433,
    2434,  2435,  2436,  2437,  2438,  2439,  2440,  2448,  2447,  2475,
    2485,  2498,  2506,  2509,  2510,  2514,  2521,  2536,  2557,  2556,
    2580,  2586,  2592,  2598,  2604,  2610,  2620,  2624,  2631,  2635,
    2640,  2639,  2650,  2654,  2661,  2662,  2663,  2664,  2665,  2666,
    2670,  2671,  2678,  2693,  2696,  2703,  2711,  2715,  2726,  2746,
    2754,  2765,  2766,  2772,  2793,  2794,  2798,  2802,  2823,  2846,
    2928,  2931,  2940,  2959,  2975,  2993,  3011,  3028,  3045,  3055,
    3056,  3063,  3064,  3072,  3073,  3083,  3084,  3089,  3088,  3118,
    3119,  3123,  3124,  3125,  3126,  3127,  3128,  3129,  3130,  3131,
    3132,  3133,  3134,  3135,  3142,  3148,  3158,  3171,  3184,  3211,
    3212,  3213,  3217,  3218,  3219,  3220,  3223,  3224,  3230,  3231,
    3235,  3239,  3240,  3245,  3248,  3249,  3256,  3264,  3265,  3266,
    3273,  3297,  3299,  3304,  3314,  3322,  3337,  3344,  3346,  3347,
    3353,  3353,  3360,  3365,  3370,  3377,  3378,  3379,  3383,  3394,
    3395,  3399,  3404,  3409,  3414,  3425,  3436,  3446,  3454,  3455,
    3456,  3462,  3473,  3480,  3481,  3487,  3495,  3496,  3497,  3503,
    3504,  3505,  3512,  3513,  3517,  3518,  3524,  3552,  3553,  3554,
    3555,  3562,  3561,  3577,  3578,  3582,  3585,  3586,  3596,  3593,
    3609,  3610,  3618,  3619,  3627,  3628,  3632,  3653,  3652,  3669,
    3676,  3680,  3686,  3687,  3691,  3701,  3716,  3717,  3718,  3719,
    3720,  3721,  3722,  3723,  3724,  3731,  3738,  3738,  3738,  3744,
    3764,  3798,  3829,  3830,  3837,  3838,  3842,  3843,  3850,  3861,
    3866,  3877,  3878,  3882,  3883,  3889,  3900,  3918,  3919,  3923,
    3924,  3925,  3929,  3936,  3943,  3952,  3961,  3962,  3963,  3964,
    3965,  3974,  3975,  3981,  4016,  4017,  4030,  4045,  4046,  4050,
    4060,  4074,  4076,  4075,  4091,  4094,  4094,  4111,  4112,  4116,
    4118,  4117,  4152,  4165,  4173,  4178,  4184,  4193,  4203,  4206,
    4218,  4219,  4220,  4221,  4225,  4229,  4233,  4237,  4241,  4245,
    4249,  4253,  4257,  4261,  4265,  4269,  4273,  4284,  4285,  4289,
    4290,  4294,  4295,  4296,  4300,  4301,  4305,  4331,  4335,  4344,
    4348,  4357,  4358,  4359,  4360,  4361,  4362,  4363,  4364,  4365,
    4366,  4367,  4368,  4369,  4370,  4377,  4401,  4429,  4432,  4441,
    4466,  4477,  4478,  4482,  4486,  4490,  4494,  4498,  4502,  4506,
    4510,  4514,  4518,  4522,  4526,  4530,  4535,  4540,  4544,  4548,
    4556,  4560,  4564,  4572,  4576,  4580,  4584,  4588,  4592,  4596,
    4600,  4604,  4612,  4620,  4624,  4628,  4632,  4636,  4640,  4648,
    4649,  4653,  4654,  4660,  4666,  4678,  4696,  4697,  4706,  4738,
    4768,  4769,  4773,  4774,  4777,  4778,  4784,  4785,  4792,  4793,
    4800,  4824,  4825,  4842,  4843,  4846,  4847,  4854,  4855,  4860,
    4871,  4882,  4893,  4904,  4933,  4932,  4941,  4942,  4946,  4947,
    4950,  4951,  4964,  4977,  4998,  5007,  5021,  5023,  5022,  5042,
    5044,  5043,  5059,  5061,  5060,  5069,  5070,  5077,  5076,  5089,
    5090,  5091,  5098,  5103,  5107,  5108,  5114,  5121,  5125,  5126,
    5132,  5169,  5173,  5178,  5184,  5185,  5190,  5191,  5192,  5193,
    5194,  5198,  5205,  5212,  5219,  5226,  5232,  5233,  5238,  5237,
    5244,  5245,  5249,  5250,  5251,  5252,  5253,  5254,  5255,  5256,
    5257,  5258,  5259,  5260,  5261,  5262,  5263,  5264,  5268,  5275,
    5276,  5277,  5278,  5279,  5280,  5281,  5284,  5285,  5286,  5289,
    5290,  5294,  5301,  5307,  5308,  5312,  5313,  5317,  5324,  5328,
    5335,  5336,  5340,  5347,  5348,  5352,  5353,  5357,  5358,  5359,
    5363,  5364,  5368,  5369,  5373,  5380,  5387,  5395,  5397,  5396,
    5417,  5418,  5422,  5423,  5427,  5429,  5428,  5499,  5517,  5518,
    5522,  5527,  5532,  5536,  5540,  5545,  5550,  5555,  5560,  5564,
    5568,  5573,  5578,  5583,  5587,  5591,  5595,  5599,  5604,  5608,
    5612,  5617,  5622,  5627,  5632,  5633,  5634,  5635,  5636,  5637,
    5638,  5639,  5640,  5649,  5654,  5665,  5666,  5670,  5671,  5675,
    5676,  5680,  5681,  5686,  5689,  5693,  5701,  5704,  5708,  5716,
    5727,  5735,  5737,  5747,  5736,  5774,  5774,  5807,  5811,  5810,
    5824,  5823,  5843,  5844,  5849,  5871,  5873,  5877,  5888,  5890,
    5898,  5906,  5914,  5943,  5976,  5979,  5992,  5997,  6007,  6038,
    6040,  6039,  6076,  6077,  6081,  6082,  6083,  6100,  6101,  6112,
    6111,  6161,  6162,  6166,  6214,  6234,  6237,  6256,  6261,  6255,
    6274,  6274,  6304,  6311,  6312,  6313,  6314,  6315,  6316,  6317,
    6318,  6319,  6320,  6321,  6322,  6323,  6324,  6325,  6326,  6327,
    6328,  6329,  6330,  6331,  6332,  6333,  6334,  6335,  6336,  6337,
    6338,  6339,  6340,  6341,  6342,  6343,  6344,  6345,  6346,  6347,
    6348,  6349,  6350,  6351,  6352,  6353,  6354,  6355,  6356,  6357,
    6358,  6359,  6360,  6374,  6386,  6385,  6401,  6400,  6411,  6415,
    6419,  6424,  6429,  6434,  6439,  6443,  6447,  6451,  6455,  6460,
    6464,  6468,  6472,  6476,  6480,  6484,  6491,  6492,  6498,  6500,
    6504,  6505,  6509,  6510,  6514,  6518,  6522,  6523,  6527,  6539,
    6551,  6562,  6566,  6567,  6571,  6578,  6582,  6588,  6592,  6596,
    6600,  6604,  6610,  6614,  6618,  6624,  6628,  6632,  6636,  6640,
    6644,  6648,  6652,  6656,  6660,  6664,  6670,  6674,  6678,  6682,
    6686,  6690,  6694,  6701,  6702,  6706,  6710,  6728,  6727,  6736,
    6740,  6744,  6750,  6751,  6758,  6762,  6773,  6772,  6781,  6785,
    6797,  6798,  6806,  6805,  6814,  6815,  6819,  6825,  6825,  6832,
    6831,  6842,  6869,  6873,  6878,  6883,  6904,  6908,  6907,  6924,
    6925,  6930,  6938,  6962,  6964,  6968,  6977,  6990,  6993,  6997,
    7001,  7006,  7029,  7030,  7034,  7035,  7039,  7043,  7047,  7057,
    7061,  7068,  7072,  7080,  7084,  7091,  7098,  7102,  7113,  7112,
    7120,  7124,  7135,  7134,  7142,  7147,  7155,  7156,  7157,  7158,
    7159,  7167,  7166,  7175,  7182,  7186,  7196,  7207,  7225,  7224,
    7233,  7237,  7241,  7246,  7254,  7258,  7269,  7268,  7278,  7282,
    7286,  7290,  7294,  7298,  7303,  7310,  7311,  7316,  7315,  7374,
    7378,  7386,  7387,  7391,  7395,  7400,  7404,  7405,  7409,  7413,
    7417,  7421,  7425,  7426,  7430,  7434,  7440,  7446,  7450,  7454,
    7460,  7466,  7472,  7478,  7482,  7486,  7490,  7494,  7498,  7502,
    7506,  7513,  7517,  7528,  7527,  7536,  7540,  7544,  7548,  7552,
    7559,  7563,  7574,  7573,  7582,  7601,  7600,  7624,  7632,  7633,
    7638,  7649,  7660,  7674,  7678,  7685,  7686,  7691,  7700,  7709,
    7714,  7723,  7724,  7729,  7791,  7792,  7793,  7797,  7798,  7802,
    7806,  7817,  7816,  7828,  7829,  7850,  7864,  7886,  7908,  7928,
    7951,  7952,  7960,  7959,  7968,  7979,  7978,  7988,  7995,  7994,
    8007,  8016,  8020,  8031,  8047,  8046,  8055,  8059,  8063,  8070,
    8074,  8085,  8084,  8092,  8100,  8101,  8105,  8106,  8107,  8112,
    8115,  8122,  8126,  8134,  8141,  8142,  8143,  8144,  8145,  8146,
    8147,  8152,  8155,  8165,  8164,  8173,  8179,  8191,  8190,  8199,
    8203,  8207,  8211,  8218,  8219,  8220,  8221,  8228,  8227,  8248,
    8258,  8267,  8271,  8278,  8283,  8288,  8293,  8298,  8303,  8311,
    8312,  8316,  8321,  8327,  8329,  8330,  8331,  8332,  8336,  8364,
    8367,  8371,  8375,  8379,  8386,  8393,  8403,  8402,  8415,  8414,
    8422,  8426,  8437,  8436,  8445,  8449,  8456,  8460,  8471,  8470,
    8478,  8499,  8523,  8524,  8525,  8526,  8530,  8531,  8535,  8536,
    8537,  8538,  8550,  8549,  8560,  8566,  8565,  8576,  8584,  8592,
    8599,  8603,  8616,  8623,  8635,  8638,  8643,  8647,  8658,  8665,
    8666,  8670,  8671,  8674,  8675,  8680,  8691,  8690,  8699,  8726,
    8727,  8732,  8735,  8739,  8743,  8747,  8751,  8755,  8762,  8763,
    8767,  8768,  8772,  8776,  8786,  8797,  8796,  8804,  8814,  8825,
    8824,  8833,  8840,  8844,  8855,  8854,  8866,  8875,  8878,  8882,
    8889,  8893,  8903,  8915,  8914,  8923,  8927,  8936,  8937,  8942,
    8945,  8953,  8957,  8964,  8972,  8976,  8987,  8986,  9000,  9001,
    9002,  9003,  9004,  9005,  9006,  9010,  9011,  9015,  9016,  9022,
    9031,  9038,  9039,  9043,  9047,  9051,  9057,  9063,  9067,  9071,
    9075,  9084,  9088,  9097,  9106,  9107,  9111,  9120,  9121,  9125,
    9129,  9138,  9148,  9147,  9156,  9155,  9186,  9189,  9209,  9210,
    9213,  9214,  9222,  9223,  9228,  9233,  9243,  9259,  9264,  9274,
    9291,  9290,  9300,  9313,  9316,  9324,  9327,  9332,  9337,  9345,
    9346,  9347,  9348,  9349,  9350,  9354,  9362,  9363,  9367,  9371,
    9382,  9381,  9391,  9404,  9407,  9411,  9415,  9423,  9435,  9438,
    9445,  9446,  9447,  9448,  9455,  9454,  9463,  9470,  9471,  9475,
    9476,  9477,  9481,  9482,  9486,  9490,  9501,  9500,  9509,  9513,
    9517,  9524,  9528,  9538,  9549,  9550,  9557,  9556,  9565,  9571,
    9583,  9582,  9590,  9604,  9603,  9611,  9628,  9627,  9636,  9644,
    9645,  9650,  9651,  9656,  9663,  9664,  9669,  9676,  9677,  9681,
    9682,  9686,  9687,  9691,  9695,  9706,  9705,  9714,  9715,  9716,
    9717,  9718,  9722,  9749,  9752,  9764,  9774,  9779,  9784,  9789,
    9797,  9835,  9836,  9840,  9880,  9890,  9913,  9914,  9915,  9916,
    9920,  9929,  9935,  9945,  9954,  9963,  9964,  9971,  9970,  9982,
    9992,  9993,  9998, 10001, 10005, 10009, 10016, 10017, 10021, 10022,
   10023, 10027, 10031, 10043, 10044, 10045, 10054, 10056, 10061, 10069,
   10070, 10074, 10075, 10079, 10087, 10088, 10093, 10094, 10095, 10104,
   10106, 10111, 10119, 10120, 10124, 10134, 10135, 10136, 10145, 10147,
   10152, 10160, 10161, 10165, 10175, 10176, 10177, 10186, 10188, 10193,
   10201, 10202, 10206, 10217, 10221, 10223, 10227, 10228, 10232, 10240,
   10241, 10245, 10255, 10256, 10265, 10267, 10272, 10280, 10281, 10285,
   10295, 10296, 10300, 10301, 10310, 10312, 10317, 10325, 10326, 10330,
   10340, 10344, 10354, 10361, 10368, 10368, 10379, 10380, 10381, 10385,
   10394, 10395, 10397, 10398, 10399, 10400, 10401, 10403, 10404, 10405,
   10406, 10407, 10408, 10410, 10411, 10412, 10414, 10415, 10416, 10417,
   10418, 10421, 10422, 10426, 10427, 10431, 10432, 10436, 10437, 10441,
   10445, 10451, 10455, 10461, 10462, 10463, 10467, 10468, 10469, 10473,
   10474, 10475, 10479, 10483, 10487, 10488, 10489, 10492, 10493, 10503,
   10515, 10524, 10536, 10545, 10557, 10572, 10573, 10578, 10587, 10593,
   10613, 10617, 10638, 10679, 10693, 10694, 10699, 10705, 10706, 10711,
   10723, 10724, 10725, 10732, 10743, 10744, 10748, 10756, 10764, 10768,
   10775, 10784, 10785, 10791, 10800, 10811, 10828, 10832, 10839, 10840,
   10841, 10848, 10849, 10853, 10857, 10864, 10865, 10866, 10867, 10868,
   10872, 10876, 10880, 10884, 10888, 10909, 10913, 10920, 10921, 10922,
   10926, 10927, 10928, 10929, 10930, 10934, 10938, 10945, 10946, 10950,
   10951, 10955, 10956, 10960, 10961, 10972, 10976, 10980, 10984, 10985,
   10989, 10993, 10994, 11001, 11005, 11009, 11013, 11017, 11021, 11022,
   11028, 11032, 11036, 11037, 11041, 11045, 11052, 11059, 11066, 11076,
   11083, 11093, 11103, 11113, 11126, 11130, 11138, 11146, 11150, 11160,
   11174, 11197, 11219, 11235, 11236, 11237, 11238, 11239, 11240, 11244,
   11248, 11265, 11269, 11276, 11277, 11278, 11279, 11280, 11281, 11282,
   11288, 11292, 11296, 11300, 11304, 11308, 11312, 11316, 11320, 11324,
   11328, 11332, 11339, 11340, 11344, 11345, 11346, 11350, 11351, 11352,
   11353, 11357, 11361, 11365, 11372, 11376, 11380, 11387, 11394, 11401,
   11411, 11418, 11428, 11435, 11445, 11449, 11462, 11466, 11481, 11489,
   11490, 11494, 11495, 11499, 11500, 11505, 11508, 11516, 11519, 11526,
   11528, 11529, 11533, 11534, 11538, 11539, 11540, 11545, 11548, 11561,
   11565, 11573, 11577, 11581, 11585, 11589, 11593, 11597, 11601, 11608,
   11609, 11615, 11616, 11617, 11618, 11619, 11620, 11621, 11622, 11623,
   11624, 11625, 11626, 11627, 11628, 11629, 11630, 11631, 11632, 11633,
   11634, 11635, 11636, 11637, 11638, 11639, 11640, 11641, 11642, 11643,
   11644, 11645, 11646, 11647, 11648, 11649, 11650, 11651, 11652, 11653,
   11654, 11655, 11656, 11657, 11658, 11659, 11660, 11661, 11662, 11663,
   11664, 11665, 11666, 11667, 11668, 11669, 11670, 11671, 11672, 11673,
   11674, 11675, 11676, 11677, 11678, 11679, 11680, 11681, 11682, 11683,
   11684, 11691, 11691, 11692, 11692, 11693, 11693, 11694, 11694, 11695,
   11695, 11696, 11696, 11697, 11697, 11698, 11698, 11699, 11699, 11700,
   11700, 11701, 11701, 11702, 11702, 11703, 11703, 11704, 11704, 11705,
   11705, 11706, 11706, 11707, 11707, 11708, 11708, 11709, 11709, 11709,
   11710, 11710, 11711, 11711, 11712, 11712, 11713, 11713, 11714, 11714,
   11714, 11715, 11715, 11716, 11716, 11716, 11717, 11717, 11717, 11718,
   11718, 11718, 11719, 11719, 11720, 11720, 11721, 11721, 11722, 11722,
   11722, 11723, 11723, 11724, 11724, 11725, 11725, 11725, 11725, 11726,
   11726, 11727, 11727, 11728, 11728, 11729, 11729, 11730, 11730, 11730,
   11731, 11731, 11732, 11732, 11733, 11733, 11734, 11734, 11734, 11735,
   11735, 11736, 11736, 11737, 11737, 11738, 11738, 11739, 11739, 11740,
   11740, 11741, 11741, 11742, 11742, 11742, 11743, 11743, 11744, 11744,
   11745, 11745, 11749, 11749, 11750, 11750, 11751, 11751, 11752, 11752,
   11753, 11753, 11754, 11754, 11755, 11755, 11756, 11756, 11757, 11757,
   11758, 11758, 11759, 11759, 11760, 11760, 11761, 11761, 11762, 11762,
   11763, 11763, 11766, 11767, 11768, 11772, 11772, 11773, 11773, 11774,
   11774, 11775, 11775, 11776, 11776, 11777, 11777, 11778, 11778, 11779,
   11779
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
     775,   776,   777,   778,   779
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   525,   527,   526,   528,   528,   529,   529,   530,   530,
     532,   531,   533,   534,   535,   535,   536,   536,   537,   538,
     539,   540,   540,   540,   542,   541,   543,   544,   544,   545,
     545,   546,   546,   547,   547,   548,   548,   548,   548,   549,
     549,   550,   550,   551,   552,   552,   553,   554,   554,   555,
     555,   555,   555,   555,   557,   556,   558,   558,   559,   559,
     561,   560,   562,   562,   562,   562,   563,   563,   564,   564,
     564,   564,   565,   566,   567,   568,   569,   569,   569,   569,
     570,   570,   571,   572,   571,   573,   573,   573,   574,   574,
     575,   575,   575,   576,   576,   577,   577,   578,   578,   579,
     579,   580,   580,   581,   581,   582,   582,   582,   582,   582,
     582,   582,   582,   582,   582,   582,   582,   584,   583,   585,
     585,   585,   585,   586,   586,   587,   588,   588,   590,   589,
     591,   591,   591,   591,   591,   591,   592,   592,   593,   593,
     594,   593,   595,   595,   596,   596,   596,   596,   596,   596,
     597,   597,   598,   599,   599,   600,   601,   601,   602,   603,
     603,   604,   604,   605,   606,   606,   607,   607,   608,   609,
     610,   610,   611,   612,   613,   614,   615,   616,   617,   618,
     618,   619,   619,   620,   620,   621,   621,   623,   622,   624,
     624,   625,   625,   625,   625,   625,   625,   625,   625,   625,
     625,   625,   625,   625,   626,   626,   626,   626,   626,   627,
     627,   627,   628,   628,   628,   628,   629,   629,   630,   630,
     630,   631,   631,   632,   632,   632,   633,   634,   634,   634,
     635,   636,   636,   636,   637,   638,   639,   640,   640,   640,
     642,   641,   643,   643,   643,   644,   644,   644,   644,   645,
     645,   646,   646,   646,   646,   647,   648,   649,   650,   650,
     650,   651,   652,   653,   653,   654,   655,   655,   655,   656,
     656,   656,   657,   657,   658,   658,   659,   660,   660,   660,
     660,   662,   661,   663,   663,   664,   665,   665,   667,   666,
     668,   668,   669,   669,   670,   670,   671,   673,   672,   672,
     674,   674,   675,   675,   676,   676,   676,   676,   676,   676,
     676,   676,   676,   676,   676,   677,   678,   678,   678,   679,
     679,   679,   680,   680,   681,   681,   682,   682,   683,   684,
     684,   685,   685,   686,   686,   687,   688,   689,   689,   690,
     690,   690,   691,   692,   693,   694,   695,   695,   695,   695,
     695,   696,   696,   697,   698,   698,   699,   700,   700,   701,
     701,   702,   703,   702,   704,   705,   704,   706,   706,   707,
     708,   707,   707,   709,   710,   710,   710,   711,   712,   712,
     713,   713,   713,   713,   714,   714,   714,   714,   714,   714,
     714,   714,   714,   714,   714,   714,   714,   715,   715,   716,
     716,   717,   717,   717,   718,   718,   719,   720,   720,   721,
     721,   722,   722,   722,   722,   722,   722,   722,   722,   722,
     722,   722,   722,   722,   722,   723,   724,   725,   725,   726,
     727,   728,   728,   729,   729,   729,   729,   729,   729,   729,
     729,   729,   729,   729,   729,   729,   729,   729,   729,   729,
     729,   729,   729,   729,   729,   729,   729,   729,   729,   729,
     729,   729,   729,   729,   729,   729,   729,   729,   729,   730,
     730,   731,   731,   732,   732,   733,   734,   734,   735,   735,
     736,   736,   737,   737,   738,   738,   739,   739,   740,   740,
     741,   742,   742,   743,   743,   744,   744,   745,   745,   746,
     747,   748,   749,   750,   752,   751,   753,   753,   754,   754,
     755,   755,   756,   756,   757,   757,   758,   759,   758,   760,
     761,   760,   762,   763,   762,   764,   764,   766,   765,   767,
     767,   767,   768,   768,   768,   768,   769,   770,   771,   771,
     772,   773,   773,   773,   774,   774,   775,   775,   775,   775,
     775,   776,   777,   778,   779,   780,   781,   781,   783,   782,
     784,   784,   785,   785,   785,   785,   785,   785,   785,   785,
     785,   785,   785,   785,   785,   785,   785,   785,   786,   787,
     787,   787,   787,   787,   787,   787,   788,   788,   788,   789,
     789,   790,   791,   792,   792,   793,   793,   794,   795,   796,
     797,   797,   798,   799,   799,   800,   800,   801,   801,   801,
     802,   802,   803,   803,   804,   805,   806,   807,   808,   807,
     809,   809,   810,   810,   811,   812,   811,   811,   813,   813,
     814,   814,   814,   814,   814,   814,   814,   814,   814,   814,
     814,   814,   814,   814,   814,   814,   814,   814,   814,   814,
     814,   814,   814,   814,   814,   814,   814,   814,   814,   814,
     814,   814,   814,   814,   814,   815,   815,   816,   816,   817,
     817,   818,   818,   819,   819,   819,   820,   820,   820,   821,
     822,   823,   824,   825,   823,   826,   823,   827,   828,   827,
     829,   827,   830,   830,   831,   832,   832,   832,   833,   833,
     833,   833,   833,   833,   834,   834,   835,   835,   835,   836,
     837,   836,   838,   838,   839,   839,   839,   839,   839,   841,
     840,   842,   842,   843,   844,   845,   845,   847,   848,   846,
     850,   849,   849,   851,   851,   851,   851,   851,   851,   851,
     851,   851,   851,   851,   851,   851,   851,   851,   851,   851,
     851,   851,   851,   851,   851,   851,   851,   851,   851,   851,
     851,   851,   851,   851,   851,   851,   851,   851,   851,   851,
     851,   851,   851,   851,   851,   851,   851,   851,   851,   851,
     851,   851,   851,   851,   853,   852,   855,   854,   854,   854,
     854,   854,   854,   854,   854,   854,   854,   854,   854,   854,
     854,   854,   854,   854,   854,   854,   856,   856,   857,   857,
     858,   858,   859,   859,   859,   859,   860,   860,   861,   861,
     861,   862,   863,   863,   864,   865,   865,   865,   865,   865,
     865,   865,   865,   865,   865,   865,   865,   865,   865,   865,
     865,   865,   865,   865,   865,   865,   865,   865,   865,   865,
     865,   865,   865,   866,   866,   867,   867,   869,   868,   870,
     870,   870,   871,   871,   872,   872,   874,   873,   875,   875,
     876,   876,   878,   877,   879,   879,   880,   881,   881,   883,
     882,   884,   885,   885,   885,   885,   886,   887,   886,   888,
     888,   889,   889,   890,   890,   890,   890,   891,   891,   891,
     891,   891,   892,   892,   893,   893,   894,   894,   894,   895,
     895,   896,   896,   897,   897,   898,   899,   899,   901,   900,
     902,   902,   904,   903,   905,   905,   906,   906,   906,   906,
     906,   908,   907,   909,   910,   910,   911,   912,   914,   913,
     915,   915,   916,   916,   917,   917,   919,   918,   920,   920,
     920,   920,   920,   921,   921,   922,   922,   924,   923,   925,
     925,   926,   926,   927,   927,   927,   927,   927,   928,   928,
     928,   928,   929,   929,   930,   930,   930,   930,   930,   930,
     930,   930,   930,   930,   930,   930,   930,   930,   930,   930,
     930,   931,   931,   933,   932,   934,   934,   934,   934,   934,
     935,   935,   937,   936,   938,   940,   939,   941,   942,   942,
     943,   943,   943,   944,   944,   945,   945,   946,   947,   948,
     948,   949,   949,   950,   950,   950,   950,   951,   951,   952,
     952,   954,   953,   955,   955,   955,   955,   955,   955,   955,
     956,   956,   958,   957,   959,   961,   960,   962,   964,   963,
     965,   966,   966,   967,   969,   968,   970,   970,   970,   971,
     971,   973,   972,   974,   975,   975,   976,   976,   976,   977,
     977,   978,   978,   979,   980,   980,   980,   980,   980,   980,
     980,   981,   981,   983,   982,   984,   984,   986,   985,   987,
     988,   988,   988,   989,   989,   989,   989,   991,   990,   992,
     993,   994,   994,   995,   995,   995,   995,   995,   995,   996,
     996,   997,   997,   998,   998,   998,   998,   998,   999,  1000,
    1000,  1000,  1000,  1000,  1001,  1002,  1004,  1003,  1006,  1005,
    1007,  1007,  1009,  1008,  1010,  1010,  1011,  1011,  1013,  1012,
    1014,  1014,  1015,  1015,  1015,  1015,  1016,  1016,  1017,  1017,
    1017,  1017,  1019,  1018,  1020,  1021,  1020,  1020,  1022,  1022,
    1023,  1023,  1024,  1024,  1025,  1025,  1025,  1025,  1025,  1026,
    1026,  1027,  1027,  1028,  1028,  1029,  1031,  1030,  1032,  1033,
    1033,  1034,  1034,  1034,  1034,  1034,  1034,  1034,  1035,  1035,
    1036,  1036,  1037,  1037,  1038,  1040,  1039,  1041,  1042,  1044,
    1043,  1045,  1046,  1046,  1048,  1047,  1049,  1050,  1050,  1050,
    1051,  1051,  1052,  1054,  1053,  1055,  1055,  1056,  1056,  1057,
    1057,  1058,  1058,  1059,  1060,  1060,  1062,  1061,  1063,  1063,
    1063,  1063,  1063,  1063,  1063,  1064,  1064,  1065,  1065,  1066,
    1067,  1068,  1068,  1069,  1069,  1069,  1069,  1069,  1069,  1069,
    1069,  1070,  1070,  1071,  1072,  1072,  1073,  1074,  1074,  1075,
    1075,  1076,  1078,  1077,  1080,  1079,  1081,  1081,  1082,  1082,
    1083,  1083,  1084,  1084,  1085,  1085,  1085,  1086,  1086,  1086,
    1088,  1087,  1089,  1090,  1090,  1091,  1091,  1091,  1091,  1092,
    1092,  1092,  1092,  1092,  1092,  1093,  1094,  1094,  1095,  1095,
    1097,  1096,  1096,  1098,  1098,  1098,  1098,  1098,  1099,  1099,
    1100,  1100,  1100,  1100,  1102,  1101,  1103,  1104,  1104,  1105,
    1105,  1105,  1106,  1106,  1107,  1107,  1109,  1108,  1110,  1110,
    1110,  1111,  1111,  1112,  1113,  1113,  1115,  1114,  1116,  1116,
    1118,  1117,  1119,  1121,  1120,  1122,  1124,  1123,  1125,  1126,
    1126,  1127,  1127,  1128,  1129,  1129,  1130,  1131,  1131,  1132,
    1132,  1133,  1133,  1134,  1134,  1136,  1135,  1137,  1137,  1137,
    1137,  1137,  1138,  1139,  1139,  1140,  1140,  1140,  1140,  1140,
    1141,  1142,  1142,  1143,  1143,  1143,  1144,  1144,  1144,  1144,
    1145,  1146,  1146,  1147,  1148,  1149,  1149,  1151,  1150,  1152,
    1153,  1153,  1154,  1154,  1154,  1154,  1155,  1155,  1156,  1156,
    1156,  1157,  1157,  1158,  1158,  1158,  1159,  1159,  1160,  1161,
    1161,  1162,  1162,  1163,  1164,  1164,  1165,  1165,  1165,  1166,
    1166,  1167,  1168,  1168,  1169,  1170,  1170,  1170,  1171,  1171,
    1172,  1173,  1173,  1174,  1175,  1175,  1175,  1176,  1176,  1177,
    1178,  1178,  1179,  1180,  1181,  1181,  1182,  1182,  1183,  1184,
    1184,  1185,  1186,  1186,  1187,  1187,  1188,  1189,  1189,  1190,
    1191,  1191,  1192,  1192,  1193,  1193,  1194,  1195,  1195,  1196,
    1197,  1197,  1198,  1199,  1201,  1200,  1202,  1202,  1202,  1203,
    1203,  1203,  1203,  1203,  1203,  1203,  1203,  1203,  1203,  1203,
    1203,  1203,  1203,  1203,  1203,  1203,  1203,  1203,  1203,  1203,
    1203,  1203,  1203,  1204,  1204,  1205,  1205,  1206,  1206,  1207,
    1208,  1209,  1209,  1210,  1210,  1210,  1211,  1211,  1211,  1212,
    1212,  1212,  1213,  1213,  1214,  1214,  1214,  1215,  1215,  1216,
    1216,  1216,  1216,  1216,  1216,  1217,  1217,  1218,  1219,  1220,
    1221,  1221,  1222,  1223,  1224,  1224,  1225,  1226,  1226,  1227,
    1228,  1228,  1228,  1229,  1230,  1230,  1231,  1232,  1233,  1233,
    1234,  1235,  1235,  1236,  1236,  1237,  1238,  1238,  1239,  1239,
    1239,  1240,  1240,  1241,  1241,  1242,  1242,  1242,  1242,  1242,
    1242,  1242,  1242,  1242,  1242,  1243,  1243,  1244,  1244,  1244,
    1245,  1245,  1245,  1245,  1245,  1245,  1245,  1246,  1246,  1247,
    1247,  1248,  1248,  1249,  1249,  1250,  1250,  1251,  1251,  1251,
    1252,  1252,  1252,  1253,  1253,  1254,  1254,  1255,  1255,  1255,
    1256,  1257,  1258,  1258,  1259,  1260,  1260,  1260,  1260,  1261,
    1262,  1262,  1262,  1262,  1263,  1263,  1264,  1265,  1265,  1266,
    1267,  1268,  1269,  1269,  1269,  1269,  1269,  1269,  1269,  1270,
    1270,  1271,  1271,  1272,  1272,  1272,  1272,  1272,  1272,  1272,
    1273,  1273,  1273,  1273,  1273,  1273,  1273,  1273,  1273,  1273,
    1273,  1273,  1274,  1274,  1275,  1275,  1275,  1276,  1276,  1276,
    1276,  1277,  1277,  1277,  1278,  1278,  1278,  1279,  1279,  1279,
    1280,  1280,  1281,  1281,  1282,  1282,  1283,  1283,  1284,  1285,
    1285,  1286,  1286,  1287,  1287,  1288,  1288,  1289,  1289,  1290,
    1290,  1290,  1291,  1291,  1292,  1292,  1292,  1293,  1293,  1294,
    1294,  1295,  1295,  1295,  1295,  1295,  1295,  1295,  1295,  1296,
    1296,  1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,
    1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,
    1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,
    1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,
    1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,
    1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,
    1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,  1297,
    1297,  1298,  1298,  1299,  1299,  1300,  1300,  1301,  1301,  1302,
    1302,  1303,  1303,  1304,  1304,  1305,  1305,  1306,  1306,  1307,
    1307,  1308,  1308,  1309,  1309,  1310,  1310,  1311,  1311,  1312,
    1312,  1313,  1313,  1314,  1314,  1315,  1315,  1316,  1316,  1316,
    1317,  1317,  1318,  1318,  1319,  1319,  1320,  1320,  1321,  1321,
    1321,  1322,  1322,  1323,  1323,  1323,  1324,  1324,  1324,  1325,
    1325,  1325,  1326,  1326,  1327,  1327,  1328,  1328,  1329,  1329,
    1329,  1330,  1330,  1331,  1331,  1332,  1332,  1332,  1332,  1333,
    1333,  1334,  1334,  1335,  1335,  1336,  1336,  1337,  1337,  1337,
    1338,  1338,  1339,  1339,  1340,  1340,  1341,  1341,  1341,  1342,
    1342,  1343,  1343,  1344,  1344,  1345,  1345,  1346,  1346,  1347,
    1347,  1348,  1348,  1349,  1349,  1349,  1350,  1350,  1351,  1351,
    1352,  1352,  1353,  1353,  1354,  1354,  1355,  1355,  1356,  1356,
    1357,  1357,  1358,  1358,  1359,  1359,  1360,  1360,  1361,  1361,
    1362,  1362,  1363,  1363,  1364,  1364,  1365,  1365,  1366,  1366,
    1367,  1367,  1368,  1368,  1368,  1369,  1369,  1370,  1370,  1371,
    1371,  1372,  1372,  1373,  1373,  1374,  1374,  1375,  1375,  1376,
    1376
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     2,     1,     1,
       0,     2,     4,     4,     0,     1,     1,     2,     3,     3,
       3,     0,     3,     3,     0,     7,     5,     1,     1,     1,
       1,     0,     2,     0,     3,     1,     1,     1,     1,     2,
       2,     1,     1,     3,     0,     3,     5,     0,     3,     0,
       1,     1,     2,     2,     0,     4,     0,     3,     0,     3,
       0,     4,     0,     2,     3,     2,     1,     2,     1,     1,
       1,     1,     5,     3,     3,     4,     1,     1,     1,     1,
       1,     2,     0,     0,     4,     0,     2,     3,     1,     2,
       3,     3,     3,     0,     2,     1,     2,     0,     2,     0,
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
       1,     1,     1,     1,     5,     5,     5,     5,     5,     1,
       1,     1,     1,     1,     1,     1,     0,     3,     0,     1,
       1,     1,     1,     0,     1,     1,     4,     1,     1,     1,
       7,     0,     4,     3,     3,     1,     4,     0,     1,     1,
       0,     5,     2,     2,     1,     0,     4,     5,     2,     3,
       1,     1,     3,     1,     2,     4,     4,     4,     1,     3,
       4,     4,     3,     1,     1,     3,     2,     2,     2,     0,
       2,     3,     1,     2,     1,     1,     5,     0,     1,     1,
       1,     0,     6,     1,     2,     2,     0,     2,     0,     9,
       0,     3,     0,     3,     0,     2,     2,     0,     5,     3,
       1,     1,     0,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     0,     1,     1,     4,
       6,     9,     0,     3,     0,     2,     0,     2,     3,     5,
       5,     1,     1,     1,     1,     3,     5,     0,     2,     1,
       1,     1,     4,     2,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     4,     0,     2,     2,     2,     2,     1,
       2,     0,     0,     5,     0,     0,     2,     2,     3,     1,
       0,     4,     3,     2,     0,     1,     1,     1,     0,     2,
       1,     2,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     2,     2,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     0,     2,     2,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     6,     0,     2,     7,     8,
       0,     2,     0,     2,     0,     3,     0,     3,     0,     1,
       1,     0,     5,     1,     1,     0,     3,     1,     2,     1,
       2,     2,     3,     1,     0,     5,     1,     2,     1,     3,
       0,     4,     2,     4,     2,     2,     0,     0,     5,     0,
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
       1,     1,     1,     1,     0,     4,     5,     1,     2,     1,
       3,     3,     0,     4,     0,     1,     0,     4,     4,     6,
       6,     0,     1,     2,     0,     1,     0,     3,     1,     2,
       0,     3,     5,     0,     3,     2,     0,     4,     6,     0,
       3,     1,     3,     2,     2,     2,     3,     0,     3,     0,
       3,     0,     3,     0,     1,     0,     3,     1,     1,     1,
       1,     1,     7,     0,     1,     1,     1,     1,     1,     1,
       4,     1,     2,     1,     2,     3,     0,     1,     2,     1,
       3,     1,     1,     4,     1,     1,     1,     0,     4,     5,
       0,     2,     0,     4,     3,     3,     1,     1,     0,     1,
       1,     0,     1,     0,     2,     2,     0,     1,     2,     1,
       1,     0,     1,     2,     1,     1,     0,     2,     2,     0,
       1,     2,     0,     1,     2,     0,     2,     2,     0,     1,
       2,     0,     1,     2,     0,     2,     2,     0,     1,     2,
       0,     1,     2,     2,     2,     2,     0,     1,     2,     0,
       1,     2,     2,     2,     0,     1,     2,     0,     1,     2,
       0,     1,     2,     2,     0,     1,     2,     0,     1,     2,
       0,     2,     1,     1,     0,     2,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     3,     0,     1,     1,     3,     3,     1,     3,
       3,     1,     3,     1,     2,     2,     1,     3,     1,     1,
       3,     1,     3,     1,     3,     1,     2,     2,     1,     1,
       1,     2,     1,     1,     1,     2,     1,     0,     2,     1,
       1,     1,     3,     1,     1,     2,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       3,     0,     1,     1,     2,     1,     1,     1,     1,     2,
       2,     2,     4,     3,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     3,     2,     2,     1,     1,
       3,     2,     2,     1,     1,     3,     3,     4,     5,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       2,     5,     5,     5,     4,     5,     5,     5,     5,     5,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     4,     5,     0,     3,     2,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     0,     0,
       1,     0,     1,     0,     1,     0,     2,     0,     2,     0,
       1,     1,     0,     1,     0,     1,     2,     0,     2,     0,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     2,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     2,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       1,     0,     1,     0,     1,     1,     0,     1,     1,     0,
       2,     2,     0,     1,     0,     1,     0,     1,     0,     1,
       1,     0,     1,     0,     1,     0,     2,     1,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     2,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     1,     0,     1,     0,     3,
       0,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       2,     1,     3,     2,     1,     1,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,    10,     1,     0,     0,     3,    21,     6,     4,
      44,     8,     9,     0,     0,     0,     7,     0,    11,   290,
      47,     0,     0,    44,    44,    23,    22,     0,     0,   685,
     292,     0,   179,    49,     0,     0,    14,     0,    45,     0,
       0,    20,   730,     0,   294,     0,     0,    43,   181,     0,
       0,    97,    50,    51,    28,    27,    31,    31,     0,    12,
      15,    16,     0,    13,   291,   687,     0,     0,     0,   288,
      48,     0,     0,   185,    60,    54,     0,    99,    52,    53,
       0,     0,    24,    30,    29,     0,    17,     0,   690,   688,
     706,     0,   784,   857,   866,   872,   879,   918,   922,   936,
     931,   937,   938,   946,   993,  1002,  1005,  1031,  1042,  1045,
    1048,  1040,  1054,  1061,  1083,  1087,  1126,  1128,  1132,     0,
    1138,  1152,  1176,  1194,  1195,  1198,  1199,  1204,  1212,  1213,
    1226,  1262,  1280,     0,  1314,  1326,  1334,  1336,   712,  1340,
    1343,  1346,  1397,   732,   733,   734,   735,   736,   737,   738,
     739,   741,   740,   742,   743,   744,   745,   746,   747,   748,
     749,   750,   751,   752,   753,   754,   755,   756,   757,   758,
     759,   760,   761,   762,   763,   764,   765,   766,   767,   768,
     769,   770,   771,   772,   773,   774,   775,   776,   777,   778,
     779,   780,   781,   731,   293,   300,   301,   361,   295,   364,
       0,   180,   182,   183,    62,    56,    98,     0,     0,     0,
    1902,  1856,  1856,  1856,     0,     0,  1856,  1829,   117,    82,
     100,     0,   103,   105,   106,   107,   153,   109,   108,   110,
     111,   112,   113,   114,   115,   116,    32,    26,  1856,    18,
      19,   695,   695,     0,     0,  1742,  1743,  1744,  1745,  1746,
    1747,  1748,  1749,  1750,  1751,  1752,  1753,  1754,  1755,  1791,
    1792,  1793,  1794,  1795,  1796,  1797,  1798,  1799,  1800,  1801,
    1802,  1803,  1804,  1805,  1806,  1807,  1808,  1809,  1810,  1756,
    1757,  1758,  1759,  1760,  1761,  1762,  1763,  1764,  1765,  1766,
    1767,  1768,  1769,  1770,  1771,  1772,  1773,  1774,  1775,  1776,
    1777,  1778,  1779,  1780,  1781,  1782,  1783,  1784,  1785,  1786,
    1741,  1787,  1788,  1789,  1790,   783,     0,     0,     0,     0,
     882,     0,     0,     0,     0,     0,     0,     0,  1484,  1033,
       0,     0,  1921,   903,   902,     0,  1053,  1484,     0,     0,
       0,     0,     0,     0,   782,     0,  1164,     0,     0,     0,
       0,     0,     0,     0,     0,  1310,  1313,  1300,  1311,  1312,
    1302,     0,     0,  1335,  1333,     0,   730,     0,     0,     0,
       0,     0,   516,   296,  1708,     0,  1552,   297,     0,  1724,
     269,   186,  1828,     0,     0,     0,  1856,  1964,    80,    61,
    1827,    66,    68,    69,    70,    71,  1827,     0,  1856,    55,
      58,  1574,  1573,   128,  1856,  1856,  1903,  1856,  1857,     0,
       0,     0,  1856,  1856,     0,  1830,     0,  1856,     0,    46,
       0,   101,   104,     0,   152,     0,     0,  1826,   695,   692,
     698,     0,   695,   707,   708,   682,   807,  1644,   855,   786,
     806,  1634,  1638,  1881,     0,  1687,     0,  1682,  1688,     0,
       0,  1694,  1667,     0,  1539,  1541,  1663,     0,     0,     0,
    1685,  1668,  1594,     0,  1543,  1666,  1686,  1664,  1689,  1690,
    1669,     0,  1684,  1694,  1683,  1665,   864,  1588,   862,  1583,
    1585,  1586,  1659,  1661,  1587,  1691,     0,     0,     0,     0,
       0,     0,   867,     0,  1528,  1531,  1533,  1536,  1603,  1538,
    1713,  1601,  1602,  1563,   873,   874,     0,  1559,  1561,  1560,
     885,   883,   884,   916,     0,  1616,   919,   920,  1615,   923,
     926,  1881,   934,     0,  1545,  1727,  1578,  1639,  1643,  1579,
       0,   944,  1895,  1663,   960,   991,  1426,  1581,   955,   957,
     954,     0,  1585,  1000,     0,   886,  1003,  1012,  1011,  1029,
       0,  1008,  1010,  1483,     0,  1035,  1039,  1037,  1040,  1038,
    1032,  1043,  1044,  1576,  1046,  1047,  1922,  1049,  1557,  1041,
    1917,  1482,  1062,  1064,  1553,  1084,  1085,  1088,     0,  1090,
    1091,  1092,  1127,  1266,  1631,  1632,     0,  1129,     0,  1136,
       0,  1145,  1142,  1144,  1143,  1139,  1146,  1166,  1563,  1931,
    1153,  1164,  1155,     0,  1162,     0,  1617,  1560,  1619,     0,
    1192,  1719,  1196,  1400,  1548,  1202,  1895,  1210,  1400,     0,
    1224,  1217,  1549,     0,     0,  1556,  1227,  1228,  1229,  1230,
    1231,  1232,  1254,  1233,  1257,  1234,     0,  1554,     0,     0,
    1630,  1643,  1263,  1298,  1285,  1303,  1825,  1324,     0,  1317,
    1319,     0,  1331,     0,  1337,  1338,   718,   724,   713,   714,
     715,   717,     0,  1341,     0,  1344,  1897,  1363,  1349,  1411,
    1400,     0,     0,   519,   366,     0,     0,   369,     0,   299,
     302,   184,     0,  1725,     0,   281,   277,   178,     0,   272,
     274,   275,  1963,  1856,     0,     0,    65,    67,    63,    81,
    1827,  1856,     0,     0,     0,  1856,     0,     0,     0,   174,
    1566,   172,   177,     0,     0,   176,  1575,   155,   156,  1858,
     159,  1649,  1236,  1235,   118,   122,   125,  1885,  1856,     0,
      83,   102,   154,    25,    35,    38,    42,    41,  1893,    36,
      37,   693,  1856,     0,   704,   696,   697,   709,  1942,  1943,
       0,   856,   785,   808,     0,     0,  1636,  1637,  1882,     0,
    1660,     0,     0,     0,     0,  1680,  1589,  1590,  1591,     0,
       0,     0,     0,     0,     0,     0,     0,  1681,   865,   858,
       0,     0,  1584,     0,     0,  1670,     0,     0,  1604,  1605,
    1606,  1535,  1600,     0,  1534,  1715,     0,     0,     0,     0,
       0,  1714,   870,   875,   877,     0,   917,   880,  1618,   886,
     921,   926,  1954,  1955,   924,     0,   927,     0,   935,   932,
    1939,  1938,  1546,     0,  1729,  1547,  1641,  1642,   941,   942,
     945,   939,  1896,  1470,   992,   947,   727,   727,   952,  1432,
    1429,   956,   953,  1582,  1930,  1426,  1426,  1426,  1426,  1001,
     994,     0,     0,   887,  1004,  1030,  1006,  1484,  1484,  1007,
    1014,  1015,   727,  1508,  1509,  1510,  1504,  1921,  1496,  1516,
    1519,  1518,  1520,  1512,  1503,  1502,  1507,  1506,  1505,  1511,
    1491,  1495,  1513,  1515,  1517,  1493,  1494,  1490,  1492,  1485,
    1486,  1497,  1498,  1499,  1500,  1501,  1489,  1036,  1034,  1577,
    1051,  1918,   727,  1066,     0,  1086,     0,  1113,  1097,  1089,
    1094,  1095,  1096,  1270,     0,  1633,     0,     0,  1137,  1133,
       0,  1146,  1930,     0,  1154,  1160,  1161,   727,  1157,  1484,
       0,     0,  1165,     0,  1193,  1177,  1720,  1721,  1895,     0,
    1197,  1203,  1200,  1179,  1211,  1205,  1207,  1219,  1225,  1214,
       0,  1219,     0,  1611,  1612,     0,  1255,  1258,     0,     0,
    1555,  1238,     0,  1237,     0,     0,  1641,  1299,  1281,  1287,
    1856,  1288,  1283,     0,  1301,  1305,     0,     0,  1325,  1315,
       0,  1318,     0,  1332,  1327,     0,  1339,   725,   723,   716,
       0,  1898,  1899,  1345,  1364,  1347,  1825,     0,  1412,  1398,
    1402,   362,     0,     0,   522,     0,   367,     0,   375,   376,
     370,     0,   373,  1856,  1726,   187,  1837,   278,   279,   280,
    1817,     0,   270,   273,     0,  1962,    74,    64,     0,  1567,
      73,    57,     0,     0,  1656,  1652,  1657,  1655,  1653,  1658,
    1654,   163,   164,   166,   175,   170,   168,     0,   157,  1860,
    1859,   160,     0,  1885,  1888,  1887,     0,     0,   119,   123,
      85,    40,  1894,    34,    39,     0,  1856,   705,     0,     0,
     683,  1645,  1822,   813,  1856,  1413,   809,   810,   812,   814,
       0,     0,   802,  1413,  1937,  1936,   799,   791,   793,   794,
       0,  1413,     0,     0,     0,   816,   797,     0,   805,   788,
     804,   789,  1523,  1521,     0,  1635,  1608,  1607,     0,  1593,
       0,  1523,  1521,     0,  1523,     0,  1696,  1523,  1540,  1542,
    1523,     0,     0,     0,  1523,  1597,  1598,  1599,     0,  1544,
    1523,     0,  1881,  1435,   863,  1643,  1579,     0,  1662,     0,
       0,  1523,  1537,  1717,   870,  1527,  1526,  1530,  1529,  1532,
       0,   868,     0,     0,  1562,   897,   925,   930,     0,  1842,
       0,  1580,  1435,  1856,  1728,  1640,   943,   727,   727,   940,
    1471,  1477,  1474,  1431,   728,  1434,  1427,  1433,  1428,  1430,
       0,   966,   965,   958,   961,   963,     0,   950,   951,   948,
     949,     0,  1435,     0,   893,  1009,  1024,  1026,  1025,  1019,
    1021,  1027,  1484,  1016,  1013,  1484,  1017,  1514,  1487,  1488,
    1883,  1050,  1558,   727,  1058,  1059,  1921,  1074,  1075,  1077,
    1079,  1080,  1076,  1078,  1069,  1921,  1065,     0,  1114,     0,
    1116,  1115,  1117,  1099,  1109,     0,     0,  1093,  1961,  1884,
       0,  1272,     0,  1847,     0,  1130,  1435,     0,     0,     0,
    1148,  1550,  1158,  1171,  1167,  1172,  1168,  1173,     0,  1163,
    1407,  1406,  1170,  1179,  1401,  1627,  1628,  1629,     0,     0,
    1470,     0,   727,     0,  1218,     0,     0,     0,     0,  1256,
       0,  1260,  1259,  1252,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1240,  1241,  1722,  1470,     0,  1304,  1913,
    1913,  1320,  1321,  1322,     0,  1435,     0,     0,   726,     0,
    1709,     0,  1322,  1207,  1811,   364,   517,     0,     0,   617,
     368,   372,   409,   378,  1831,  1856,     0,     0,  1856,  1831,
    1874,  1856,  1815,   298,     0,   303,   306,   307,   308,   309,
     310,   311,   312,   313,   314,     0,     0,   189,  1838,  1915,
    1818,  1841,   271,     0,    77,    79,    78,    75,    76,    59,
     134,   133,   148,   144,   149,   130,   147,   145,   131,   132,
     146,   129,   135,   136,   138,   165,     0,   169,     0,   173,
    1650,   158,   161,     0,  1886,   126,   120,   121,   124,     0,
      84,     0,    88,   699,   700,   703,     0,   694,   710,   712,
    1622,   820,  1620,  1621,     0,  1419,  1420,  1424,  1425,   787,
    1421,   727,  1416,   727,   811,  1935,  1934,  1876,  1876,   818,
     819,  1876,   825,  1856,   827,   828,   829,   854,  1856,   830,
     831,   832,   833,   834,     0,   835,   836,   838,     0,   839,
     840,     0,   841,  1856,   826,  1813,   844,   853,   847,   815,
     846,   803,   790,   792,  1413,   800,   795,   796,   817,   798,
    1524,  1525,  1646,     0,     0,     0,  1610,  1592,  1609,  1727,
       0,  1691,     0,  1691,  1695,     0,  1691,  1691,  1691,     0,
    1674,     0,  1691,     0,   727,   727,   859,  1441,  1438,  1641,
    1642,  1435,     0,  1691,  1691,     0,  1716,   869,   871,   878,
     876,   906,  1854,   929,   928,   933,     0,  1476,  1479,  1472,
    1478,  1473,  1475,   730,   972,   973,   970,   969,   971,   968,
     962,  1856,   974,     0,   977,   978,  1835,  1856,   981,   982,
     964,   983,   984,     0,  1856,   986,   967,     0,   995,     0,
     888,   889,   698,     0,  1484,  1484,  1023,   727,  1020,     0,
    1057,   727,  1060,  1055,     0,     0,  1081,     0,     0,     0,
    1110,  1112,     0,  1105,  1119,  1106,  1107,  1098,  1101,  1119,
    1960,     0,  1933,  1264,  1856,   493,   494,  1861,     0,  1848,
    1271,  1131,  1134,     0,  1148,  1889,  1889,     0,  1147,  1151,
    1140,  1551,     0,  1159,  1156,     0,     0,  1181,  1180,   727,
    1201,  1459,  1206,  1208,     0,  1220,  1484,  1484,  1215,  1221,
    1239,  1261,  1251,  1253,  1243,  1244,  1245,  1249,  1246,  1250,
    1247,  1248,  1242,  1723,  1297,     0,  1294,  1295,  1289,     0,
    1282,  1959,  1958,     0,  1914,  1308,  1308,  1444,     0,  1727,
    1328,     0,   719,     0,  1710,  1350,  1351,     0,  1354,  1357,
    1361,  1355,  1408,  1812,     0,   363,   364,   520,     0,     0,
     289,  1856,  1819,     0,  1832,     0,     0,  1856,  1815,     0,
       0,     0,     0,     0,  1875,  1856,   357,  1816,   358,     0,
       0,   359,   304,   305,  1895,  1916,  1831,     0,  1950,  1951,
      72,   137,   140,     0,   167,     0,   162,   127,     0,    95,
      93,     0,     0,    86,    89,   701,   702,   712,   730,   824,
    1414,  1422,  1418,  1415,  1417,  1423,  1877,     0,     0,     0,
       0,     0,   845,  1856,  1856,  1480,  1480,     0,  1814,     0,
     801,  1522,  1647,     0,  1435,  1705,  1678,  1707,  1679,  1703,
    1675,  1676,  1677,  1701,  1698,  1699,  1673,  1580,  1443,  1440,
    1436,  1442,  1437,  1439,  1640,   860,  1692,     0,  1671,  1672,
    1718,  1613,  1614,   727,   727,   727,   881,   913,   909,  1881,
    1855,   900,   905,   904,   899,     0,  1731,  1732,  1733,  1734,
    1735,  1736,  1737,  1738,  1730,     0,     0,   975,   976,  1881,
     665,   667,   979,   980,     0,     0,  1480,  1480,     0,  1435,
    1545,  1435,  1545,   890,   891,     0,   895,   894,   896,  1022,
    1028,  1018,  1052,  1056,  1067,  1070,  1071,  1833,  1063,  1921,
    1068,  1119,  1119,     0,  1852,  1852,  1104,  1120,  1121,  1102,
    1103,  1108,  1932,  1274,     0,  1862,  1268,  1849,  1435,  1141,
    1890,   266,   267,   268,  1150,     0,  1174,     0,     0,  1188,
       0,  1458,   727,  1453,  1460,  1209,   727,   727,  1222,  1296,
    1286,  1290,  1291,  1292,  1293,  1284,  1306,  1309,  1307,   727,
     727,  1316,  1450,  1447,  1856,  1435,  1435,   721,  1342,  1709,
    1353,  1845,  1359,  1845,  1444,   727,   727,  1399,  1410,  1467,
    1464,  1409,  1405,  1404,  1866,   518,   364,   523,     0,     0,
     503,   433,  1904,  1904,  1904,  1904,  1904,  1926,   434,   469,
     471,   437,   438,   439,   440,   441,   442,   465,   463,   464,
     466,   467,   472,   470,   443,  1900,   468,     0,   444,   430,
     445,   446,     0,     0,  1907,   448,   449,   447,  1863,   451,
     452,   450,  1856,  1858,   410,   411,   412,   413,   414,   415,
     431,   435,   436,   416,   417,   418,   419,   420,   421,   422,
     423,   424,     0,     0,  1820,     0,   406,     0,   379,   326,
     235,   354,  1952,  1953,  1570,   335,  1568,  1945,  1944,   328,
    1572,  1571,  1872,  1829,  1845,     0,  1856,   332,   331,  1856,
     360,  1874,  1895,  1923,   251,     0,  1856,  1827,  1861,   253,
       0,  1930,   239,   188,   238,   190,   191,   192,   193,   194,
     195,     0,   196,     0,   197,   250,   198,   199,   200,   201,
     202,   203,  1823,  1856,     0,   276,     0,   139,   171,    90,
       0,    91,    96,    92,    87,   730,   821,   823,   822,   849,
     848,     0,     0,   851,     0,  1625,  1626,   850,   843,  1651,
     852,  1623,  1624,  1648,   861,  1693,   911,   915,   912,   907,
     914,   908,   910,     0,   898,   988,  1836,   666,   668,   987,
     990,   989,   985,   997,     0,   996,     0,   892,  1072,  1834,
       0,     0,  1100,  1111,  1119,  1853,     0,     0,  1122,  1123,
       0,     0,  1277,  1273,  1267,  1135,  1149,     0,  1182,  1856,
    1470,     0,     0,  1183,     0,  1187,  1461,  1216,  1223,  1452,
    1449,  1445,  1451,  1446,  1448,     0,  1330,  1329,  1365,   720,
       0,  1352,  1846,     0,  1845,  1356,     0,  1348,  1466,  1469,
    1462,  1468,  1463,  1465,  1867,  1868,  1403,   521,   525,   618,
     514,   515,  1905,   462,   461,   454,   453,   460,   459,   458,
     457,   456,   455,  1927,     0,  1901,   500,   486,   480,   425,
     512,  1908,  1864,  1865,   501,     0,     0,   427,   429,  1739,
    1739,   408,  1881,     0,     0,   407,   380,     0,   316,     0,
     353,  1569,  1873,   337,     0,   319,  1909,   346,   348,   352,
     351,   347,   349,   345,   350,     0,     0,  1856,  1861,  1924,
    1925,   218,   254,  1895,  1856,  1856,  1856,  1856,   263,  1817,
     264,     0,  1856,  1874,  1824,     0,     0,   282,   283,   286,
     141,   142,    94,     0,   837,   842,  1956,  1957,  1481,   901,
    1435,  1435,     0,  1082,  1118,  1125,  1124,  1856,  1275,     0,
       0,  1265,  1269,     0,     0,  1178,  1191,  1459,  1456,  1190,
    1186,  1184,  1185,  1323,  1373,   722,  1358,     0,  1362,   524,
     620,   502,  1845,   482,     0,  1919,     0,   432,   504,   506,
     508,     0,   426,  1827,   473,   474,     0,     0,   389,   385,
     388,   387,   386,   401,   397,   399,   400,   402,   398,   403,
     404,   405,   382,   393,   394,   395,   390,   391,   392,   384,
     381,   327,   318,   317,   315,   355,  1564,   336,  1829,  1910,
     324,   333,   330,   334,   329,     0,  1856,   220,   219,   216,
     253,   249,     0,     0,     0,     0,   262,   265,     0,  1856,
     252,   234,   284,     0,   285,     0,     0,   999,   998,  1073,
       0,  1278,  1856,  1484,  1189,  1454,  1455,  1457,  1822,  1396,
    1395,  1374,  1366,  1367,  1813,  1368,  1369,  1370,  1371,  1394,
       0,     0,  1360,     0,   526,     0,   624,   619,   621,     0,
       0,     0,   480,   481,  1920,   484,   513,   510,   507,     0,
     428,  1740,   383,   396,  1565,     0,     0,   338,   339,   340,
     341,     0,   320,  1844,   326,     0,   228,   229,   227,   226,
       0,   212,   213,   223,   223,     0,   211,   209,   210,   215,
     214,   223,   223,     0,   255,   256,   257,   258,   261,   236,
       0,   287,   143,   711,  1276,     0,  1175,     0,  1911,     0,
    1883,   527,     0,   625,     0,   622,   487,   483,   488,  1883,
     491,     0,   505,     0,   509,   344,   343,  1821,  1829,   325,
    1711,   224,   206,   225,   207,  1837,   208,   205,   221,   204,
     222,  1856,     0,   245,   244,   245,   241,  1279,     0,  1912,
       0,  1392,  1391,  1390,     0,     0,   627,   628,   623,   489,
     491,     0,   495,   490,     0,  1856,     0,   322,   231,  1712,
     217,     0,   259,     0,   243,   242,  1393,  1941,  1940,  1891,
    1386,  1380,  1381,  1383,     0,  1856,  1906,   495,   485,  1825,
     478,  1861,  1929,     0,   342,  1883,   321,     0,   230,   260,
       0,   248,  1892,  1883,  1389,  1384,  1387,     0,  1382,   531,
    1856,  1856,  1815,  1869,   556,   530,   534,   535,     0,  1839,
     643,  1856,   632,  1926,   633,  1835,  1856,     0,   646,   641,
     636,   642,  1876,   637,     0,   640,   648,   645,   638,   644,
       0,   649,   639,     0,   660,   654,   658,   657,   655,   659,
     629,   661,   656,     0,  1876,   479,     0,  1856,   511,     0,
       0,     0,     0,  1388,  1385,     0,  1979,  1980,  1856,  1815,
       0,   528,   532,  1840,   536,     0,     0,   630,   631,   634,
     635,     0,   663,  1856,  1919,  1856,   664,   662,   680,  1856,
     499,   496,   497,     0,   323,     0,   150,   151,   233,     0,
    1948,  1949,   246,  1379,  1376,  1378,  1377,  1372,  1375,   533,
    1870,  1871,   544,   541,   374,   557,   537,   538,   653,   652,
     673,   679,     0,   676,   498,   492,   232,   247,   540,  1946,
    1947,   543,   376,   558,   539,   671,   669,   672,   670,   674,
     675,     0,   647,   677,   678,     0,     0,  1856,  1856,     0,
     545,   546,   547,   548,   549,   550,     0,   560,   650,   651,
    1966,  1965,  1856,     0,     0,  1968,     0,  1856,  1856,   542,
    1906,     0,   555,   551,  1967,     0,     0,  1850,  1878,  1815,
       0,     0,     0,  1856,  1881,   559,  1856,  1856,     0,   565,
     567,   576,   568,   570,   573,   561,   562,   563,   572,   574,
     577,   564,     0,   569,     0,   571,   575,   566,  1878,  1815,
     552,   554,   553,  1851,   615,  1879,  1880,  1858,   601,  1856,
     480,  1484,     0,     0,     0,     0,     0,   609,     0,   599,
     605,   608,     0,   602,   610,   613,  1858,   604,   600,     0,
    1919,   597,  1727,   593,  1595,  1970,     0,     0,  1972,  1974,
       0,  1978,  1976,   578,   582,   586,   586,   580,   584,   579,
     585,   616,     0,   607,   606,   612,   611,   603,   591,   484,
     614,  1883,   592,  1596,  1969,  1973,  1971,  1977,  1975,   589,
     581,   589,   583,     0,   476,     0,     0,   588,   587,     0,
       0,   475,   596,   594,   595,   590,   598,   477
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,     8,     9,    10,    11,    12,
      59,    60,    61,    63,    18,    13,    23,   238,    24,    56,
      85,    81,   425,   738,   739,   740,    19,    20,    32,    33,
      51,    52,   205,   399,   703,    53,   204,   389,   390,   391,
     392,   393,   394,   395,  1357,   396,   419,  1060,  1390,  1391,
    1392,  2031,  1701,    77,   219,   220,   221,   222,   223,   417,
     724,  1387,   725,   726,   224,   705,  1371,  1372,  1373,  2026,
    2220,  1374,  2618,   225,   424,   226,   717,   718,   719,  1381,
     227,  1041,  1042,   228,   229,  1377,   230,   231,   232,   233,
     234,   235,    47,    48,    73,   380,   203,   381,  1347,  1684,
    2005,  2006,  2411,  2412,  2413,  2319,  2459,  2452,  2007,  2399,
    2008,  2518,  2009,  1971,  2010,  2011,  2012,  2013,  2466,  2494,
    2014,  2015,  2016,  2017,  2018,  2416,  2019,  2020,  2209,  2021,
    1588,   687,   688,   689,   690,  1020,   691,  1016,  2217,  2218,
    2334,    29,   197,    30,    44,    69,   198,   199,   680,   200,
    1013,  1335,  1336,  2304,  1337,  2516,  2394,  2178,  1338,  1339,
    1989,  2312,  1340,  1341,  2307,  2387,  2388,  2389,  2390,  1342,
    2193,  2194,  1343,  2180,  1344,  1345,  1680,   372,  1315,   373,
     374,   674,   675,  1322,   676,  1010,  1011,  1662,  2175,  2292,
    2293,  2294,  2295,  2296,   677,  1966,  1661,  1944,  1945,  1946,
    2272,  1947,  1948,  1949,  1950,  1951,  1952,  1953,  2711,  2811,
    1954,  2265,  2372,  2440,  2263,  2480,  2482,  2483,  1577,  2510,
    2611,  2612,  1955,  1956,  1957,  1958,  1959,  2377,  2268,  2269,
    2442,  1960,  1961,   673,  1656,  1004,  1896,  1319,  2138,  2259,
    2364,  2475,  2505,  2535,  2536,  2594,  2636,  2537,  2632,  2648,
    2670,  2671,  2672,  2673,  2674,  2675,  2591,  2635,  2677,  2690,
    2715,  2716,  2773,  2800,  2807,  2717,  2718,  2792,  2813,  2719,
    2720,  2721,  2722,  2723,  2724,  2749,  2750,  2753,  2754,  2725,
    2726,  2727,  1660,  2260,  2367,  2368,  2369,  2477,  2506,  2570,
    1792,  1793,  2659,  2660,  2661,  2665,  2571,  2572,    41,   747,
    1399,    42,    90,   242,   241,   428,   429,   430,   744,  1068,
     244,  1070,  1707,   366,   658,   659,  1877,  2119,   660,   661,
    1307,  1173,  1174,  1513,   662,    67,   143,   144,   316,   438,
     753,   439,  1075,  1076,  1077,  1099,  1078,  1419,  1420,  1079,
    1449,  1450,   752,   145,   317,   476,   781,   779,   146,   318,
     492,  1151,   147,   319,   504,   505,  1153,   148,   320,   513,
     514,   854,  1194,  1540,  1541,  1542,  1501,   335,  1774,  1766,
    2061,  1767,  2059,  1768,   807,   149,   321,   516,   150,   322,
     519,   814,   151,   323,   522,   819,   152,   153,   154,   324,
     531,   828,   831,   155,   325,   535,   536,   537,   538,   844,
     539,  1183,  1184,  1185,  1518,  1536,   835,   156,   326,   543,
     850,   157,   327,   546,   158,   328,   549,   550,   551,   859,
     860,   861,  1204,   862,  1199,  1200,  1546,   856,   159,   329,
     560,   336,   160,   330,   561,   161,   331,   564,   162,   332,
     567,  1211,   163,   164,   337,  1215,  1553,   165,   338,   572,
     903,  1224,  1556,  1815,  1816,  1817,  1818,   166,   339,   575,
     167,   340,   577,   578,   909,   910,  1236,   911,   912,  1567,
    1568,  1233,  1234,  1235,  1561,  1826,  1827,  1828,   168,   341,
     169,   342,   587,   170,   343,   589,   919,   171,   345,   595,
     596,   923,  1590,   172,   346,   600,   927,  1594,   928,   601,
     602,   603,  1254,  1256,  1257,   173,   347,   610,  1269,  1849,
    2100,  2245,   935,   174,   175,   348,   612,   176,   177,   349,
     615,   942,   178,   350,   617,  1270,   945,   179,   180,   351,
     620,   951,  1273,  1608,  1609,   949,   181,   352,   626,   727,
     964,   627,   628,  1293,  1294,   629,   630,   631,   632,   633,
     634,   635,   182,   353,   582,  1833,   913,  2094,  1241,  1573,
    2092,  2241,   183,   354,   643,  1296,   972,  1625,  1626,  1627,
     968,   184,   645,   974,  1866,   360,   185,   361,   647,   648,
     649,  1637,   979,   186,   362,   652,   984,   187,   364,   188,
     365,   654,   189,   367,   663,   190,   368,   665,   191,   369,
     667,   997,  1645,  1646,  1312,  1648,  1882,  2125,  1884,   995,
    2120,  2254,  2352,  2353,  2354,  2627,  2355,  2501,  2502,  2527,
    2356,  2473,  2357,  2358,  2359,   192,   370,   669,   940,  1313,
    1262,  1887,   999,  1409,  1713,  1410,  1411,  1710,  1412,  1413,
     838,  1178,   839,  1176,   840,  1486,  1752,  1487,  1750,  1488,
    1871,  2113,  1872,  2111,  1873,  1600,  2246,  2346,  1601,  1853,
    1854,  1888,  2132,  1889,  2130,  1890,  1169,  1170,  1511,  1171,
    1509,  1172,  2043,   570,   571,   553,   554,   889,   890,   891,
     892,   893,   894,   895,  1102,  1463,  1112,   494,   495,   496,
     497,   477,   523,   822,   613,   621,  1250,  1251,   576,   636,
     637,   900,   604,   507,   508,  2305,  1981,  1030,  1975,  1976,
    1982,   403,   720,   562,   525,   842,   478,   479,  2763,  1124,
     499,  1108,  1467,  1569,  1760,   517,   605,  1401,  2050,  2044,
    1264,  1402,   583,   640,   480,   441,   526,   527,   442,   756,
     757,  1403,  1382,  2751,  1043,   481,   482,   483,   484,   485,
     486,   487,   785,   765,  1131,  1128,  1121,  1113,  1115,   678,
    1647,  2488,   802,  1144,  1496,   938,  1629,   684,   825,  1164,
    1784,  2274,   315,  1654,  1729,  1678,  1351,  1967,  1080,  2215,
     431,   397,   416,  1665,  2080,  1794,  1349,  2595,  1160,  2395,
    2123,  1580,  2734,  2086,  1775,   409,  1052,  1836,  2164,  2136,
    2590,  2183,  1675,  1717,  2737,   759,  1242,  1056,  1841,  2523,
    1063,  2022,   993,  2156,   407,  2144,  1963,  2310,  2470,  1635,
    1686,   902,  2375,   568,  2201,  2154,  2443,   609,  1574,  1421,
    1101,   823,  2499,   750,  1979,  2651,  2622,  1690,  1669,   816,
    2228,  1633,  1243,   398,  2682,  2688,  2776,  2777,  2778,  2779,
    2780,  2539
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2424
static const yytype_int16 yypact[] =
{
   -2424,   258,   971, -2424,   153,   651, -2424,   890, -2424, -2424,
    1015, -2424, -2424,   692,   392,   438, -2424,   960, -2424,  1170,
    1252,   886,   908,  1015,  1015, -2424, -2424,   927,  1287,  1389,
     949,  1026,  1221,   -90,   811,   811,  1313,  1326, -2424,  1014,
    1396, -2424, -2424,  1123, -2424,  1086,  1144, -2424,  1376,  1093,
    1112,  1153,  1270,  1173, -2424, -2424,  1567,  1567,   856, -2424,
    1313, -2424,   856, -2424, -2424,    -2,  3044,  3675,  1138,    -9,
   -2424,  1139,  1174, -2424, -2424, -2424,  1182,  1564, -2424, -2424,
    1390,  1199, -2424, -2424, -2424,  1206, -2424,  1207, -2424, -2424,
    1286,  4000, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424,   528, -2424, -2424, -2424, -2424, -2424, -2424, -2424,  1265,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424,   814, -2424, -2424,  1316, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424,  1156, -2424,  1159,
      57, -2424, -2424,   -55,   360,  1160, -2424,    64,    64,  1253,
    1279,  1456,  1456,  1456,    64,  1290,  1456,  1647, -2424,  1338,
    1564,  1485, -2424, -2424, -2424, -2424,  1495, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,   458, -2424,
   -2424,    39,    39,  -147,  1257, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424,  -135,  5089,  8044,  -132,
     549,   128,  1203,   756,   685,  5054,  6084,  1461,  1029,   885,
     756,  1205,  1268, -2424, -2424,  6084, -2424, -2424,   756,  1209,
    3180,  1205,  5289,  6084, -2424,  1027,  3472,  1203,  1205,  1203,
    1205,    62,   300,  1205,  1203, -2424, -2424, -2424, -2424, -2424,
   -2424,  5324,  5524, -2424, -2424,  1209,    70,  1205,  1203,  1205,
    1205,  1324,  1463, -2424, -2424,  1267, -2424, -2424,  1271,  1085,
     -61, -2424, -2424,  1322,  1320,  1677,  1456, -2424, -2424, -2424,
     426, -2424, -2424, -2424, -2424, -2424,   384,  1682,  1456, -2424,
      40, -2424, -2424, -2424,  1456,  1456, -2424,  1456, -2424,  1205,
    1674,  1205,  1456,  1456,  1205, -2424,  1228,  1150,  1285, -2424,
    1530, -2424, -2424,  1232, -2424,  1288,    52, -2424,   299, -2424,
    -187,   479,   305, -2424, -2424, -2424, -2424,   929,  1621, -2424,
    1555, -2424,  1282,  1446,   560, -2424,  1205, -2424, -2424,  1296,
    1298,  1299, -2424,  2876,   929,   929, -2424,  1300,  1309,  1310,
   -2424, -2424, -2424,  1311,   929, -2424, -2424, -2424, -2424, -2424,
   -2424,  1327, -2424,  1299, -2424, -2424,  1626, -2424,  5612, -2424,
   -2424, -2424,  1302, -2424, -2424,  1328,  1329,  1330,  2876,  8186,
    8044,  8186, -2424,    51,   472, -2424,  1594, -2424, -2424, -2424,
     686,  1302, -2424, -2424,  -132, -2424,  1347, -2424,   929, -2424,
   -2424, -2424, -2424,  1652,  3324, -2424,   128, -2424, -2424,  1203,
     662,  1446,  1670,   583, -2424,  1414, -2424, -2424,  1282,  1302,
    1203,  1673,  1450,  1116, -2424,  1676,    41,  5804, -2424, -2424,
    4720,  1149,  1184,  1679,   114,  1303, -2424, -2424, -2424,  1675,
      34, -2424, -2424, -2424,  4430, -2424, -2424,  1716,   528, -2424,
   -2424, -2424,   756, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
    1368, -2424, -2424,   579, -2424,  1209, -2424, -2424,   260, -2424,
   -2424, -2424, -2424, -2424, -2424,  1348,  6084, -2424,  1365,  1681,
    1781, -2424, -2424, -2424, -2424,  1027,  1419, -2424,  1378, -2424,
   -2424,  4369,   197,   628,  1386,  1385, -2424,  -210, -2424,  1392,
    1698,   911, -2424,  1646, -2424,  1700,  1450,  1701,  1646,  1205,
    1699,  1337, -2424,  1580,  1685, -2424, -2424, -2424, -2424, -2424,
   -2424,  1579, -2424,   756, -2424, -2424,   412, -2424,   526,  1823,
   -2424,    37, -2424,  1707,  1005,  4854,  1808,  1710,  4955, -2424,
   -2424,  1205,  1712,  5885,  1209, -2424, -2424,  -166, -2424, -2424,
   -2424, -2424,  3493, -2424,  1668, -2424,   858,  1717,  1760,  1722,
    1646,  1416,  1477,  1624,  1373,  1423,  6743, -2424,  1374, -2424,
   -2424, -2424,  1575, -2424,    64, -2424,   934, -2424,    72, -2424,
   -2424, -2424, -2424,  1456,  1484,  1636, -2424, -2424, -2424, -2424,
     786,  1456,  1381,  1441,  1795,  1456,  1061,  1205,  1645, -2424,
   -2424, -2424, -2424,  1650,  1427, -2424, -2424,  1228, -2424,    30,
   -2424, -2424, -2424, -2424, -2424, -2424,  1260,   -67,  1456,    63,
   -2424, -2424, -2424, -2424,   463, -2424, -2424, -2424,  1559, -2424,
    1838, -2424,  1456,  1494,  1599, -2424, -2424,  1809, -2424, -2424,
    1205, -2424, -2424,  6980,  1965,  8044,  1451, -2424, -2424,   -59,
   -2424,  1466,  8044,  8044,  7494, -2424, -2424,  1302, -2424,  1409,
    1417,  8044,  8044,  8044,  2876,  1421,  2876, -2424, -2424, -2424,
    6121,  1725, -2424,   560,  8044, -2424,  2876,  8044, -2424,  1302,
   -2424, -2424, -2424,   964, -2424,  1706,  8044,  8044,  8044,  8044,
    8044, -2424,  1552, -2424,  1592,  1680, -2424, -2424, -2424,  1303,
   -2424,   662, -2424, -2424, -2424,   -13,   621,  1205, -2424, -2424,
   -2424, -2424, -2424,  8044,  1665, -2424,  1451, -2424,  1203, -2424,
   -2424, -2424, -2424,    -6, -2424, -2424, -2424, -2424, -2424,  1642,
    1777, -2424, -2424,  4720,   110,    41,    41,    41,    41, -2424,
   -2424,  6084,  6121, -2424, -2424, -2424, -2424,  1029,    97, -2424,
    1431, -2424,  1432, -2424, -2424, -2424, -2424,  1268, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,  4087,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
     -38, -2424,  1818,  1255,  1771, -2424,  1580,    48, -2424, -2424,
    1578, -2424, -2424,    83,  8044, -2424,  1497,   756, -2424, -2424,
    6121,  1419,  1439,  1203, -2424, -2424, -2424, -2424, -2424,  1786,
    1205,  -132, -2424,   245, -2424, -2424, -2424, -2424,  1450,  3180,
   -2424, -2424, -2424,  1726, -2424, -2424,  -103,  1828, -2424, -2424,
    1205,  1828,  1503, -2424,  1302,  1504, -2424, -2424,   538,  1260,
   -2424, -2424,  1602, -2424,  1914,   884,    45, -2424, -2424, -2424,
    1456, -2424,   431,  6084, -2424, -2424,   889,  6003, -2424, -2424,
    1205, -2424,  1767, -2424, -2424,  6121, -2424,  1636, -2424, -2424,
    1580, -2424, -2424, -2424, -2424, -2424,  1808,  1736, -2424, -2424,
     245, -2424,  1507,  1568,  1595,  1511, -2424,  1512, -2424,  1889,
   -2424,  1892, -2424,  1590, -2424, -2424,  1515, -2424, -2424, -2424,
    1958,  1521, -2424, -2424,  1636, -2424, -2424, -2424,   619, -2424,
   -2424, -2424,  1708,  1312, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424,  1061, -2424,  1532, -2424,   507, -2424,  1589, -2424, -2424,
   -2424, -2424,  1729,   -67, -2424,  1764,    64,    64, -2424,  1260,
    1801, -2424, -2424, -2424, -2424,   912,  1456, -2424,  1487,  1545,
   -2424, -2424,   386, -2424,  1456,  1198,  6980, -2424, -2424, -2424,
     700,  6716, -2424,  1198, -2424, -2424, -2424,  1486,  1488, -2424,
    1580,  1198,  1770,  1581,  1711, -2424, -2424,  1732, -2424, -2424,
   -2424, -2424,    36,  1031,  8044, -2424, -2424, -2424,   495, -2424,
    1205,   207,   958,  1556,   247,  1558, -2424,   255, -2424, -2424,
     189,  1560,  1562,  1563,   267, -2424,  1302, -2424,  1565, -2424,
     284,  1566,  1446,   605, -2424,   -63,   -74,   756, -2424,  1049,
    1569,   323, -2424,  1561,  1552,   472,   472, -2424, -2424, -2424,
     756, -2424,  1573,  -132, -2424,   528, -2424, -2424,  1643, -2424,
    1662, -2424,  -122,  1456, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424,  1734,  1802, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
     125, -2424, -2424,  2103, -2424, -2424,  2465, -2424, -2424, -2424,
   -2424,  1832,   605,  1839,    33, -2424, -2424, -2424, -2424,  2026,
   -2424,  1597,   158, -2424, -2424,    97, -2424, -2424, -2424, -2424,
    1733, -2424, -2424, -2424,  1924,  1912,  1268, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424,  1683,  1268, -2424,  1598, -2424,  2006,
   -2424, -2424, -2424,  1201, -2424,  1580,  1082, -2424, -2424, -2424,
    1932,    28,   809,   887,   756,   756,   605,  1855,  1203,   531,
     519, -2424,  1919, -2424, -2424, -2424,  2055, -2424,  1866, -2424,
   -2424, -2424, -2424,  1726, -2424, -2424, -2424, -2424,  1205,  1936,
      -6,  1035, -2424,  1570, -2424,  1571,  1580,  1761,  1055, -2424,
     495, -2424, -2424, -2424,  6084,  1260,  1260,  1260,  1260,  1260,
    1260,  1260,  1260,   884, -2424,   623,    -6,   580, -2424,  1644,
    1644, -2424, -2424,   288,  1205,   605,  1869,  1618, -2424,  1625,
    2076,  1205,   356,  -103,  2082,  1159, -2424,  1629,  1689,  1695,
   -2424, -2424, -2424,  1019,  2007,  1456,  1226,  1226,  1456,   -20,
    1820,  1456,  2071, -2424,  1787, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424,    64,   970, -2424, -2424,  1653,
   -2424,  1906, -2424,     8, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424,   724, -2424,    98, -2424,  1061, -2424,  1768, -2424,
   -2424,  1729, -2424,    64, -2424, -2424, -2424, -2424, -2424,    60,
   -2424,    73, -2424, -2424, -2424, -2424,   634, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424,  2058, -2424, -2424, -2424, -2424, -2424,
    1293, -2424,  1231, -2424, -2424, -2424, -2424,  1803,  1803, -2424,
   -2424,  1803, -2424,  1456, -2424, -2424, -2424, -2424,  1456, -2424,
   -2424, -2424, -2424, -2424,   -14, -2424, -2424,  2049,  1691, -2424,
   -2424,   -46, -2424,  1456, -2424,  2102, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424,  1198, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424,  8044,  7629,  1031, -2424, -2424, -2424,  1414,
    7730,  1328,  7829,  1328, -2424,  1205,  1328,  1328,  1328,  2876,
   -2424,   -73,  1328,   -59, -2424, -2424, -2424,  1810,  1692,   170,
    1909,   605,  8020,  1328,  1328,   828, -2424, -2424, -2424, -2424,
   -2424,   -50,   131, -2424, -2424, -2424,   612, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424,  1456, -2424,   -53, -2424, -2424,   111,  1456, -2424, -2424,
   -2424, -2424, -2424,   -37,  1456, -2424, -2424,   756, -2424,   756,
    4574, -2424,   439,     3,    97, -2424, -2424, -2424,  2026,  1205,
   -2424, -2424, -2424, -2424,  1611,  1508,   -11,  1613,   828,  1580,
   -2424, -2424,  2074, -2424,  1258, -2424, -2424,  1082, -2424,   722,
   -2424,  1718, -2424, -2424,  1456, -2424, -2424,  1885,  1807, -2424,
   -2424,   756, -2424,   756,   519,  1811,  1811,  1814, -2424, -2424,
   -2424, -2424,  1048, -2424, -2424,  1205,  6084,   741, -2424, -2424,
   -2424,  1840, -2424, -2424,  1871, -2424, -2424, -2424, -2424,  1571,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424,   -43, -2424,  1205, -2424, -2424, -2424,   537,
   -2424, -2424, -2424,  8044, -2424,  6084,  6084,   478,  1799,  1414,
   -2424,   756, -2424,   828, -2424,  1819, -2424,  1580, -2424,  2025,
    1694, -2424,  1124, -2424,   758, -2424,  1159, -2424,  1684,  1740,
   -2424,  6954,   143,  1938, -2424,  1636,  1631,  1456,  2071,  1634,
    -109,   498,  1636,  1640, -2424,  1456, -2424, -2424, -2424,   -77,
    1391, -2424, -2424, -2424,  1923, -2424,  2007,  1203, -2424, -2424,
   -2424, -2424, -2424,   724, -2424,  1893, -2424, -2424,  1921, -2424,
    2128,   586,  1697, -2424, -2424, -2424, -2424, -2424,   233, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424,   386,   386,   386,
     386,   386, -2424,  1456,  1456,   512,   512,   386, -2424,   521,
   -2424,   958, -2424,  1080,   695, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424,  1950, -2424, -2424,
   -2424, -2424, -2424, -2424,  1951, -2424, -2424,  1091, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424,  1860,   -33,  1446,
   -2424, -2424, -2424, -2424, -2424,  1205, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424,  2740,   386, -2424, -2424,  1446,
   -2424, -2424, -2424, -2424,   481,   386,   512,   512,   386,   605,
    1792,   605,  1794, -2424, -2424,  6084, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424,  1508, -2424,  2061, -2424,  1268,
   -2424,  1258,  1258,   828,  1703,  1703, -2424,  2164,  2136, -2424,
   -2424, -2424, -2424,   -99,  1205, -2424, -2424, -2424,   605, -2424,
   -2424, -2424, -2424, -2424, -2424,  1790, -2424,  2125,  1915,  1941,
     853, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424,   958, -2424, -2424, -2424, -2424,
   -2424, -2424,  1883,  1714,  1456,   695,   605,  1686, -2424,  2076,
   -2424,  1966,  2090,  1966,   478, -2424, -2424, -2424, -2424,  1894,
    2033, -2424, -2424, -2424,  1352, -2424,  1159, -2424,  1731,    -1,
   -2424, -2424,  -188,   551,   737,   775,   790,  1688, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424,  1806, -2424,    77, -2424, -2424,
   -2424, -2424,  1205,  1205,  1959, -2424, -2424, -2424,   750, -2424,
   -2424, -2424,  1456,   145, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424,  1037,   171, -2424,  1687, -2424,   897, -2424,  1737,
   -2424,  2008, -2424, -2424, -2424,  1634, -2424, -2424, -2424, -2424,
   -2424, -2424,  1945,    21,  1966,   626,  1456, -2424, -2424,  1456,
   -2424,  1820,  1450,   646, -2424,  1788,  1456,  2147,    50,  -105,
     -24,  1439, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424,  1774, -2424,  1942, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424,  2167,  1456,  1203,  1203,   724, -2424, -2424, -2424,
    1949, -2424, -2424, -2424, -2424,     6, -2424, -2424, -2424, -2424,
   -2424,   128,   386, -2424,  1363, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424,  1205, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424,   756, -2424,   756, -2424, -2424, -2424,
    2162,  2101, -2424, -2424,  1258, -2424,  6084,  6084, -2424, -2424,
    1870,  1203,    35, -2424,  1205, -2424, -2424,  6084, -2424,  1456,
     996,  1952,  1953, -2424,  1954, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424,  1205, -2424, -2424, -2424, -2424,
    1754, -2424, -2424,  1205,  1966, -2424,  1205, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424,  1702, -2424, -2424,  2163,  1765, -2424,
    1773, -2424, -2424, -2424, -2424,  7492,   705,  2197, -2424,  1821,
    1821, -2424,  1446,  1525,  1525, -2424, -2424,  1636,   276,  1205,
   -2424, -2424, -2424, -2424,  1636, -2424,  1812, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424,   523,   523,  1456,  1885, -2424,
   -2424,   108, -2424,   968,  1456,  1456,  1456,  1456, -2424,  1958,
   -2424,   531,  1456,  1820, -2424,  1816,  1631,  1203, -2424,  1891,
    2211, -2424, -2424,  2121, -2424, -2424, -2424, -2424, -2424, -2424,
     695,   695,  6084, -2424, -2424, -2424, -2424,  1456,  1203,  1203,
    1888, -2424, -2424,  1742,  1205, -2424, -2424,  1840,  1936, -2424,
   -2424, -2424, -2424, -2424,   781, -2424, -2424,  1205, -2424,  1879,
    1373, -2424,  1966,  2039,  1636,  1783,  1205, -2424,   705, -2424,
    1793,  1981, -2424,  2147, -2424, -2424,  1525,  1785, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424,  1205, -2424,   137,  1647, -2424,
    1155, -2424, -2424, -2424, -2424,    -3,  1456, -2424, -2424,  1315,
   -2424, -2424,   498,  1815,  1205,  1205, -2424, -2424,  1205,  1456,
   -2424, -2424, -2424,  1636, -2424,   724,  1789, -2424, -2424, -2424,
    -132,  1203,  1456, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424,  1340, -2424, -2424, -2424, -2424, -2424,
    1897,  2143, -2424,  1209, -2424,  6457, -2424, -2424,  1373,  1791,
    1738,  1636,  1765, -2424, -2424,  2138, -2424,  -224, -2424,   705,
   -2424, -2424, -2424, -2424, -2424,   498,   498, -2424, -2424, -2424,
   -2424,  2065, -2424, -2424,  1737,  1636, -2424, -2424, -2424, -2424,
    1205, -2424, -2424,   558,   558,  2253, -2424, -2424, -2424, -2424,
   -2424,   558,   558,   587, -2424, -2424, -2424,  -179, -2424, -2424,
     699, -2424, -2424, -2424, -2424,  -132, -2424,  1887,  1837,    82,
    1733, -2424,  1813, -2424,  1822, -2424, -2424, -2424,  2041,  1733,
   -2424,  1857, -2424,  1817, -2424, -2424, -2424,  2239,  1647, -2424,
     -23, -2424, -2424, -2424, -2424,  1515, -2424, -2424, -2424, -2424,
   -2424,  1456,  1205,  1755, -2424,  1755, -2424, -2424,  1205, -2424,
     606, -2424, -2424, -2424,    71,  1217, -2424, -2424, -2424, -2424,
   -2424,  1205,  2048,   809,  1829,  1456,   498,  2157,  1835, -2424,
   -2424,  1205,  1205,   745, -2424, -2424, -2424, -2424, -2424,  1933,
     812,    71, -2424, -2424,  1825,   701,  7308,  2048, -2424,  1808,
   -2424,  1885, -2424,   705, -2424,  1733, -2424,  1763, -2424,  1205,
    1970, -2424, -2424,  1733, -2424, -2424,  1968,  1205, -2424, -2424,
    1456,  1456,  2071,  1192, -2424, -2424, -2424, -2424,  2081,  2110,
   -2424,  1456, -2424,   405, -2424,   111,  1456,  3180, -2424, -2424,
   -2424, -2424,  1803, -2424,  1636, -2424,  2232, -2424, -2424, -2424,
    1205, -2424, -2424,  1205, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424,  2085,  1803, -2424,  1776,  1456, -2424,  1205,
      86,   957,   687, -2424, -2424,   128, -2424, -2424,  1456,  2071,
    2037,  1373, -2424, -2424, -2424,  1205,   386, -2424, -2424, -2424,
   -2424,   386, -2424,  1456,  1783,  1456, -2424, -2424, -2424,  1456,
   -2424,  1776, -2424,  1205, -2424,   560, -2424, -2424, -2424,  1263,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,  1203, -2424,
   -2424, -2424, -2424,  1379,   -64, -2424,  1205, -2424, -2424, -2424,
     747, -2424,   128,   747, -2424,  1205, -2424, -2424,  1278, -2424,
   -2424,  2037, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424,   386, -2424, -2424, -2424,   386,   150,  1456,  1456,  1276,
   -2424, -2424, -2424, -2424, -2424, -2424,  1572, -2424, -2424, -2424,
   -2424, -2424,  1456,  2037,  2037, -2424,  2084,  1456,  1456, -2424,
    2191,  2037, -2424, -2424, -2424,  2037,  2037,  2075,   -54,  2071,
    2086,  1636,  1796,  1456,  1446, -2424,  1456,  1456,  1205, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424,   -41, -2424,   -15, -2424, -2424, -2424,   -54,  2071,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424,   145, -2424,  1456,
    1765, -2424,  8386,  8386,  1587,  2180,  2105, -2424,  1636,   -41,
   -2424, -2424,  1636,   -15, -2424, -2424,   145, -2424, -2424,   -41,
    1783, -2424,  1414,  8336, -2424, -2424,  1292,  1294, -2424, -2424,
    1297, -2424, -2424, -2424, -2424,   -82,   -82, -2424, -2424, -2424,
   -2424, -2424,  8386, -2424, -2424, -2424, -2424, -2424, -2424,  2138,
   -2424,  1733, -2424, -2424, -2424, -2424, -2424, -2424, -2424,  1983,
   -2424,  1983, -2424,  2256,  1873,    93,  1982, -2424, -2424,  8386,
    1636, -2424, -2424, -2424, -2424, -2424, -2424, -2424
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2424, -2424, -2424, -2424, -2424,  2300, -2424, -2424, -2424, -2424,
   -2424, -2424,  2250, -2424,  1448, -2424, -2424, -2424, -2424,  2276,
    2251,  2257, -2424, -2424, -2424,  1582, -2424, -2424, -2424, -2424,
   -2424,  2262, -2424, -2424, -2424,  2269, -2424, -2424,  1926,  -268,
   -2424, -2424, -2424, -2424, -2424,  2119, -2424, -2424, -2424, -2424,
     935, -2424, -2424, -2424, -2424, -2424,  2107,   -62, -2424, -2424,
   -2424, -2424,  1272, -2424, -2424, -2424, -2424, -2424,   961, -2424,
   -2424, -1655, -2424, -2424, -2424, -2424, -2424,  1619, -2424, -2424,
   -2424, -2424,  1289, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424,  -854, -2424, -2424,
   -2424, -2424, -2424,   121, -2424, -2424, -2424, -2424, -2424,  -127,
   -2424,   136, -2424, -2424, -2424,   -60, -2424, -2424, -2424, -2424,
     130, -2424, -2424,  1654, -2424, -2424, -2424, -2424, -2424,   127,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424,   -49, -2424, -2424,
   -2424,   151, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -1260,
   -2424, -2424,  1672, -2424, -1935, -2224, -2424, -2424, -2424, -1964,
   -2424, -2424, -2424, -2424, -1464, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2330,  -158,   184,  -871,  -828, -2323, -2424, -2424,
   -2424, -2252, -2424,  -437, -2424, -2424,  -124, -2424,  -130,  -150,
   -2424,  -252, -1808, -2424, -1756, -2424, -1629, -2424, -2424,    94,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424,  -415,  -438, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -1773, -2424,  -389, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424,     0, -2424, -2424, -2424,
    -178,  -176,  -273,  -266, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424,  2124,   672, -2424,   833, -2424,
   -2424, -2424, -2424, -1285, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424,    29, -2424, -2424,   -30, -2424,  2312, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424,  1304, -2424,  -615, -2424, -2424,  -580,
   -2424,   947, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424,  1238, -2424, -2424, -2424,  1881, -2424, -2424, -2424, -2424,
   -2424,  1574, -2424, -2424,   846, -2424, -2424,  -585, -2424, -2424,
   -2424,   620, -2424,   622, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424,  1583, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,  1853, -2424,
   -2424, -2424,  1212, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,  1535, -2424,
   -2424,  1536, -2424, -2424,  1193,   855, -2424, -2424, -2424, -2424,
   -2424,  1842, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424,   589,  1499, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424,  1498, -2424, -2424,
     838, -2424,  1176, -2424, -2424, -1507,   582,   584, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
    1824,  1491,   830, -2424, -2424, -2424, -2424, -2424, -2424, -2123,
    1826, -2424, -2424, -2424,   820, -2424, -2424, -2424,  1154, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424,  1103, -2424, -2424, -2424, -2424,
   -2424, -2424,  1469,   813, -2424, -2424, -2424, -2424, -2424,  -569,
   -2424, -2424, -2424, -2424,  1130, -2424, -2424, -2424,  1797, -2424,
    1798, -2424, -2424, -2424,  2068, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424,   788, -2424, -2424, -2424, -2424, -2424,
    1784,  1113, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424,   555, -2424,  1125, -2424, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,   -66, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424,   618, -2424,
    1436, -2424, -2424,  -979, -2424,  1028, -2424, -2424,  1034, -2424,
     841, -2424,  1601, -2424,  1606, -1099, -2424,   950, -2424,   962,
     563, -2424,   577, -2424,   581, -2424, -2424, -2424, -1397,   204,
     352, -2424, -2424,   564, -2424,   568, -1237,   806, -2424,  1295,
   -2424,  1291,  -936,  -918,  -312,  -816, -2424, -2424,  1576, -1192,
     831,   832,   835,   837,   609,   649,  -270,   719,   702, -2424,
    1163,   -88,  -724,  -298,  1041,  1849, -1226,  -198,  -350, -2424,
    -608, -2424,  -272, -2232,  1666, -1324,  -404,  1444, -2424,   484,
   -1200,  -171,  1758,  -302,  -277, -2424,  -164,   -19, -2424,  -741,
   -1336, -2424,  1194,  -584,  -895,  -319,  1964, -1291, -2424, -2424,
     -58,  -308, -2424,  1088,  -235,  -439, -2424, -2424,  1128,  -487,
    -497,  -397,  1099, -1706,  1107,  -337,  -180,  -436,  -300, -2424,
   -2424, -2424,   689,  2011, -2424, -2424,   761, -2424, -2424, -2424,
   -2424, -2424, -2424, -2424, -2424, -2424, -2424, -2424, -1445, -2424,
   -2424,   315, -2424, -2424,   132, -1649,   278, -2424, -2070, -2424,
    -637, -1878, -1838, -1221, -2424, -2424,    38, -2424, -1319, -2424,
   -1811, -2424, -2424,   665, -2424,  -212, -1909, -1914, -2424, -2424,
   -2424, -2424, -1839, -1391,  -236,  -508, -1181,  1443,   913, -2424,
   -2424,  -515, -2424, -2424, -2424,  -206, -2424, -2424, -2424,  1197,
   -2424,   942, -2423,  -846, -2424, -2424, -2424,  -245,   821, -1611,
   -1295, -2424, -2424,  -217, -2424, -2424,  -115, -2424,  1179, -2424,
   -2424, -2424,    65, -2424, -1579,  -232, -2424, -2424, -2424, -2424,
   -2424, -2424
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1931
static const yytype_int16 yytable[] =
{
     410,   411,   377,   580,   414,   709,   541,   712,   760,   977,
     715,  1255,    66,   817,   766,   655,   552,   833,   502,  1973,
     728,  1207,  1584,  2052,  1734,   524,   426,  1718,   960,  1549,
    1719,   827,  1687,  1602,  2166,  1130,   573,   404,  2027,   952,
     581,   826,  1201,   412,   639,  1140,   608,   506,   493,   788,
     638,   857,  1049,   563,    88,  1655,  1133,  1228,   375,  1630,
     973,   563,  1831,  1505,   401,   401,  1688,  1664, -1632,  1698,
    -686,   619,  2126,  1021,  1702,   563, -1633,  1210,  1725,   415,
    2500,   440,   427,   500,  2206,  2207,   518,  1796,   427, -1896,
     542,  1806,  1571,  1538,  1106,  2615,  2799,  1427,   915,  1986,
   -1917,   943,  1238,  1628,  1451,   579,  1229,  1460,  1672,   795,
   -1883,   606,  1455,  1008,  1708,  1692,  1763,   867,  1196,  2204,
    2438, -1825,   697,  2396,   520,   734,   532,   503,  1192,  2090,
   -1861, -1659,   664,  1763,   668,  1835,  2223,  1769,   501,  1987,
    1072,  2433, -1638,   529,   827,  2185,  1100,  1582, -1930,   611,
     529,   616,  2197,   768,   966,   704,   644,  1053,   529,   422,
    1058,   540, -1930,   851,  2205,   195,   433,  1049,  1054,  1964,
     666,  1744,   529,  2186,   695, -1821,  2564, -1821,   436,  1196,
    1484,  2641,   378,  2566,  2360,  2385,   702, -1930,   790,   502,
     502,   502,   706,   707,  1875,   708,  1246,   810,   653, -1883,
     713,   714,  1787,  2157,  1977,   729,  1640,   836,  1238,  -686,
    2300,   761,  2471,  -686,   608,   408,   685,  2424,  2049,    49,
     793,   503,  1514,  1515,   735,   905,  2142,  1230,  1167,  1181,
     498,   742,   506,  -684,  2317,   721,   987,   769,   770, -1928,
    2239,  1789,  2503,  2461,  2049, -1638,  2140,   775,  2747,  1764,
    2735,  2736,  1157,  1260,   792,   792,   792,  2680,     3,  1105,
    1460,  1305,   755,  1699,  1182,  1050,  2208,  2681,  1790,  2503,
    1791,  2812,  -686,   767,  1389,   815,    14,  1158,  1460,   606,
    2318,   518,  1261,  2462,  2316,   899,  -686,  -686,  1107,  2441,
    1835,   805,  1231,  2748,  1168,   988,   899,  1485,  1026,  2143,
     743,   608,  2467,  1044,   986,  2141,   521,   544,   789,   501,
     501,   501,  2382,  2257,  2082,  2083,   569,  1978,  1460,  2752,
    1109,   811,  1227,   588,   590,  2365,  1460, -1930,   904,  1165,
     503,   958,   829,    50,  2302,   686,   721,  2789,  1460,   925,
     837,  1965,   650,   529,  1788,   852,   796,  1138,   427,   685,
     379,   797,  2397,   906,   427,  1460,   563,  2240,   422,  1310,
    2709,   899,  1770,  1894,  1055, -1821,   606,  2710,  1807,   434,
    1554,  2221,  -684,   843,  2329, -1636,  -684,  2486,  1161,  1557,
    1050,   437,   529,   783,   437,  1074,  1201,   515,   953,  1201,
    1279,   196,  1755,   529,  1460,  2381,  1895,  1239, -1825,   625,
     976,   498,   498,   498, -1825,  1745,  1309,  2398,  2091,   755,
    2653, -1861,   599,  1491,   736,  2169,   982,   382,  -686,   882,
   -1827,  1765,  2035,  1263,   383,  1771,  2036,  2037,  2038,  2039,
    2040,  1859,   697,  2365,   437,  -684,  2048,  1572,  1765,  1988,
     901,   382,  1461,   954,  1772, -1917, -1821,  1726,   383,  -684,
    -684,  2370,  2652,   529,   623,   502,  1797,   437,   529,   782,
   -1896,  2025,   502,   502,   502,  2024,  1516,   656,   686,  1165,
    2392,   502,   502,   502,  1127,  1730,  1127,  2184,   437,  1547,
    1447,  1024,   524,   382,   502,  1103,  1127,   502,  2760,  1028,
     383, -1856,  1240,  1033,  1462,  2065,   502,   502,   502,   502,
     502,  1120,  1120,  1120,  2069,    89,  1454,  2072,  1081,   755,
    2616,  2472,  1808,  1015,  1139,   452,  1057,  1104,   737,   796,
     792,   782,   657,   502,   797,  1689,  1232,   792,   792,   792,
    1065,   656,   521,  1022,  1703,   896,   792,   792,   792,  1125,
    1585,  1125, -1825,   624,   521,   552,   716,   858, -1825,   792,
    1693,  1125,   792,  1162,   524,   599,   699,  1543,  1059,   456,
    1197,   792,   792,   792,   792,   792,   815,   916,  1181,   461,
    1502,  1198,  1519,   376,   625,   501,  1700,  2234,   437,   402,
     402,  -684,   501,   501,   501,   521,   657,   437,   792,   521,
    1308,   501,   501,   501,  1126,  1461,  1126,  2577,  1240,  1186,
    1136,  1773,  1266,  1182,   501,  1180,  1126,   501,  2617,   437,
    2487,   521,  2386,  1461,   502,  1245,   501,   501,   501,   501,
     501,  1197,   524, -1930,  1483,   599,   975,  1353,  1212,   650,
    1166,   384,  1198,   907,   782,  2054,  2137,  2303,  1490,  1267,
     563,  1517,  1104,   501,   437,   721,  1776, -1702,  1489,  2170,
     961,  1562,   599,  1461,   465,   384,  2634,   796,   926,  1259,
    2597,  1461,   797,  1821, -1825, -1704,  1705,   498,  1395,  1468,
   -1825,   953,  1136,  1461,   498,   498,   498,  1249, -1930,   792,
    2422,   899,  -691,   498,   498,   498,   625,   524,  -689,  1857,
    1461, -1930,  1610,   408,   656,  1258,   498,   384,  2567,   498,
    2073,  1271,  2075,  2247,  1265, -1706,   908,   385,   498,   498,
     498,   498,   498,  1474,   444,  1274,  1614,  1615,  1616,  1617,
    1618,  1619,  1620,  1621,   467, -1700,   954,  1297,  1201,  1461,
    1824,   385,  2463,   333,   501,   498,  2067,   529,  1743,  2095,
    1136,   452, -1697,   820, -1600,  1303,   869,   870,  1878,   657,
    2568,  2225,  1804,   452,  1466,   953, -1930,  1980,  1295,  1825,
    -691,  1134,   521,  2530,   386,  1415,  -689,  1416,  2497,   387,
     470,   721,  2498,   385,    15,   452,  2116,  2117,   529,  1869,
    2049,  1494,  2311,   867, -1930,   456,   871,   872,   386,  2032,
    2047,  2531,  2532,   387,   452,   461,  2366,   456,   452,  2187,
    1378,  1346,  2598,   599,   502,  1136,  2188,   461, -1825, -1930,
     954,  2348,  1159,  1799, -1825,  1801,   437,  2451,  2033,   456,
     452,  1586,   475,   510,   782,   736,   498,  1631,  2758,   461,
     386,  1081,  1191,  1193,  1465,   387,  1575,   444,   456,   524,
   -1930,  1468,   456,   382,   745,   698,  2458,  2787,   461, -1930,
     383,  2347,   461,    25,  1396,   953, -1600,   742,  2623,  1838,
    2070,  2071,  1404,  2249,   456,  2238,  1175,  2464,   959,   792,
     896,   599,   437,  1498,   461,  1469,   388,  2569,  2068,  1354,
     465,  1500,  2712,  2587,  2633,  1385,  1386,   696,  1587, -1841,
      -5,  1206,   465,   721,    21,  2574,  1777,  1778,  1779,    26,
     699,  1247,   437,  1543,  2366,  1589,   444,  1484,  1400,  2349,
     954,   334,   801,  1830,   465,  2624,  1623,  1876,  2153,   -33,
     452,  1624,  1285,  2625,   501,  1576,   743, -1930,  2084,   737,
    1286,  1214,   798,   465,  2713,  2361,   408,   465,  1186,  1362,
    2631,   799,  1581,  1283,  1393,  2676,   599,  2172,  2350,  1870,
     467,  1506, -1930,   529,  1298,  1417,  1252,   529,  1302,   465,
   -1930,  1848,   467,  1780,   456,  2142,  1306,   563,   899,  2465,
     529,   452,  1159,  2081,   461,  1822,  2784,  2692,  2693,   511,
   -1930,   512,   962,  1363,   467,  2730,  2788,  2351,   746,  2731,
    2732, -1841,  1754,  1364,  1278,  2162,   470,  1484,  1632,  1706,
     953,   953,   883,   467,   884,  1592, -1930,   467,   470,  2626,
    2520,   437,   529,  2341,   437,   456,   498,   721,  2755,   963,
    2655,  2189,   599,  1394,  1485,   461,   812,  2533,   437,   467,
     470, -1930,   625,  1598,   599,   376,  1418,   437,  2145,   437,
      22,   953,   437,   452,  1747,   821,  1893,  2755,   475,   470,
    2738,  1299,  1591,   470,   437,   954,   954,   384,  1638,   465,
     475,  2714,  1355,  1880,   529,   529,   529,  1638,  1271,  1639,
      54,  1739,  2101,   355,   437,   470,  1649,  1649,  1366,  2728,
    2757,  2656,   475,    27,  1892,   882,   555,   456,  1781,  1782,
    2687,  1563,  2102,  1783,   599,   437,   954,   461,  1287,   437,
     741,   475,  2199,   437,   741,   475,     4,     5,  1578,  2190,
     465,  1663,   452,  1666,  1485,    83,  1671,  1673,  2103,  1676,
     929,   437,  2414,  2524,  1356,   529,  1599,   475, -1821,   467,
    1288,  2337,  2338,   385,  2191,  1029,  2192,  2521,  2492,   930,
    1564,  2163,  1682,  2104,  2173,  2174, -1600,   813,  1367,   530,
     748,  2142,  1289,  2200, -1600, -1600,   456,  2525,  1762, -1600,
      55,  2603,  2534,   502,   502,  2774,   461,  2519,   356,    17,
     502,   721,   502,   -21,  1681,   470,  1683,   599,  2526,  1127,
     467,  1300,   465,  2609,   969,  2445,  2446,     4,     5,  2142,
     386,  1994,   502,  1731,  1733,   387,  1507,  1508,   591,   936,
    1731,   376,  1731,   376,  2142,    84,  1579,  1290,   357,  2167,
    1228,  1720,  1697,   556,   557,  2657,  1721,   991,  2504,   992,
    2658,  1762,  1757,  1995,  2147, -1856,   470,   475,   792,   792,
    1167,  1727,   558,  1810,  2619,   792,   946,   792,   358,  1800,
     749,  1802,  1550,  2168,  1125,   970,  1370,  1027,   971,  2474,
     937,   465,   467, -1930,   408,   592,   599,   792,  2481,  1229,
    1761,  2063,  2149,   593,  1216,  1613,  1824,  1217,  1969,  1291,
    1218,  1219,   437,    28,   437,  1983,  1034,  2151,   475,  -529,
    1400,  2066,  1885,   501,   501,   524,  2514,   559,  1000,  2645,
     501,  1852,   501,  1017,  1856,  1825,  1168,   452,   470,  1126,
    1603,  1605,  2297,  2297,   899,  2638,  1762,  -529,  -529,  1786,
    2639,   529,   501,  1844,  1812,  1795,  2620,  2790,  2621,   -21,
    1035,   467,  1798,  1761,   953,  1604,  1565,   832,  2046,  2046,
    1036,  2685,   953,   502,  2579,  2320,   359,    31,  1845,  1592,
    1360,   456,  2582,   524,   437,  2298,  2298,    34,  1728,   594,
     475,   461,  1850,  2393,  1018,  1019,  2628,   529,  1167,   529,
    1258,  1405,  1834,  1865,  1406,  2105,  2686,   470,  1292,    35,
    2678,  1111,  1114,  1117,  2679,   498,   498,  2427,   682,   954,
    1230,  2689,   498,  2680,   498,   408,  1591,   954,    38,  -681,
    1860,   618,   401,  2681,  1405,  2729,  1141,  1406,   792,  2046,
    2046,   529,   683,   529,   498,  2297,  2762,  2764,  1761,   721,
      39,   670,   953,    43, -1843,  1037, -1113,  2045,  2045,   475,
    1886,  2051,  1142,  -529,  1168,  2426,   796,  2793,    45,   584,
    2093,   797,   796,  2401,  2402,  2403,   465,   797,  -356,  1361,
    1712,   584,  1715,  2588,  2589,  1231,  2803,   509,  2298,  1962,
      46,   528,  -529,   501,  -356,  1972,    58,  2666,   528,   565,
   -1113,   529,   722,  1985,   723,    62,   528,   954,  2667,   585,
   -1113,    36,    37,  2816,   607,    64,   614,  2198,   614,   622,
     641,   585,  2794,  1785,  2795,  1038,  1762,  2797,  2045,  2045,
    1464,  2668,   547,  2159,  -356,  1407,   207,  1408,   614,   796,
    1147,  1148,  1149,   548,   797,  2694,   467,  2796,  1492,  1990,
    2798,  2041,  2042,  1748,  1749,  1145,  1146,   796,  1281,    65,
    1217,  2669,   797,  1218,  1219,    68,  2277,  1362,  -681,  1282,
    2158,  1039,  -681,  1122,  1123,  1220,  1221,   710,  2053,   710,
    2064,   207,   710,  -529,   208,   498,    71,    70,   796,  2055,
    2454,    72,   470,   797,    74, -1113,  2404,  2456,  2457,   796,
    1566,  1222,  1223,  -356,   797,  2278,  2279,  2280,  2281,  2282,
    2405,  1363,   722,    75,   723,   207,  1811,  1847,    76,    49,
    1813,  1364,   209,  1040,   210,  1667,   211,  1668,  1761,   208,
    1407,  -681,  1408,    80,   212,  1365,    50,  -356,   437,   194,
     201,  1909,  1910,  2210,   475,  -681,  -681,  2134,   443,  2135,
    2805,   444, -1616, -1616, -1616, -1616,  1867,  1867,  2226,   529,
    2227,   529,  2620,   208,  2621, -1113,  -356,   209,  1851,   210,
    2176,   211,   509,  -356,  2649,   202,  2650,  1324,  1084,   212,
    1085,  2765,  2685,   206,  -356,   845,   846,   847,   848,   236,
     213,   528,   791,  1325,   794,  2406,  2407,  2408,   529,   363,
     237,   209,  2115,   210,  2276,   211,  1366,   239,   240,   243,
    2409, -1113,   344,   212,   371,  -365,   388,  2766,  -529,  1232,
   -1615, -1615, -1615, -1615,   405,   445,  1187,  1188,  1189,  1190,
     528,   408,   406,  1326,  2680,   213,   529,  2146,  2148,  2150,
    2152,   528,   447,   413,  2681,   415,  2283,  2284,  2285,  2286,
    2287,  2288,  2289,  1922,  1923,   418,   423, -1113,   435,   376,
     545,   437,  2224, -1113,   566,   574,   671,   672,   679,   213,
    2165,   692,   681,    40,  2299,  2299,  1367,  -681,   693,  1368,
    1369,   694,   701,   711,   716,   214,   730,   622,   732,   733,
    -356,  -356,   751,   754,   755,  1280,  2211,   758,   778,   783,
    1470,   528,  2410,  1472,   800,  -356,   528,  -356,   762,  1475,
     763,   764,   771,  1479,  2195,  2306,  2230,  2196,  2231,  1481,
    2301,   772,   773,   774,  2203,   806,  2077,  2308,  1220,  1221,
     214,   215,  2056,  2057,  2058,   452,   448,   449,   450,   776,
     784,   786,   787,   804,   818,   451,   518,   824,   830,   832,
     853,  2216,   834,   855,  1222,  1223,   849,   452,   897,   901,
     914,   917,   918,  2761,   214,   408,  2219,  1591,  2229,  2270,
     920,   922,  1327, -1618,  1370,   710,   215,  2299,   931,   456,
     932,   933,   934,  1328,   939,   941,   948,   944,   950,   461,
     453,   955,  -356,   625,   965,   967,   454,   427,   455,   978,
    2290,   456,   983,   457,   458,   459,   990,  2373,   994,   460,
     215,   461,  2576,   996,   998,  2291,   462,  1001,  1071,  1002,
    2253,  2106,  1003,   216,  1006,  2107,  2108,  2244,  2256, -1708,
    1012,  2258,  1014,  1025,   529,   721,   529,  1029,  2109,  2110,
    -356,  2384,  1031,  1032,  1045,  1047,  1062,   402,  1135,  1046,
     463,  1064,  1066,  2767,  2128,  2129,  1067,  2768,  2769,  1069,
    2417,  2418,  1110,  1104,  2419,  1118,   217,  1991,   216,   464,
    1137,  2270,  1143,  1119,   465,  1150,  2421,  1129,  1152,   503,
    1163,   837,  1992,   836,  1202,  1205,   421,  1213,  1226,  1329,
    1330,   907,  1993,  1244,   599,  1253,   465,  1268,  1272,  1276,
    1277,  2770,   216,  1284,  1331,  1304,  1332,  1311,  1316,  1318,
    1317,   217,  1320,  1321,  2437,  -377,  2771,  2772,  1323,  1348,
    1135,  1350,  1352,  1359,  1376,  2315,   466,  1571,  1380,  1082,
    1083,   731,  2322,  2323,  2324,  2325,  2417,  1379,  2449,  1384,
    2328,   218,  1389,  1397,   467,   217,  1398,  1452,  1453,  2344,
    1456,  1459,  1457,  2431,  1471,  1458,  1473,  1495,  1476,  2219,
    1477,  1478,  2362,  1480,  1482,  2340,   467,  1493,   509,  1499,
    1503,  1084,  1504,  1085,  1168,  1086,  1167,  1537,   468,   469,
    1591,   437,  2444,  1544,  1539,   528,   218,  1239,  1135,  1545,
     470,  1333,  1552,  1551,  1558,  1559,  1555,  1570,  2306,   509,
    1583,  1593,  2391,  1595,  1596,  1281,  1599,  2235,  2236,  1087,
    1088,  1089,   470,  1611,  1641,  1634,  1282,  2508,  2243,  1642,
     218,  1643,   471,  1606,  1607,  1644,   528,  2306,  2384,  1653,
    1657,  1658,  1659,  1677,  1664,  1674,   437,  1159,  1679,  1334,
    1685,  1695,   475,   472,  2400,  1709,  1723,  1716,   473,  1724,
    1728,  1485,  1484,  1135, -1637,  2384,   474,  2420,   437,  1090,
    1814,  1091,  1820,  1823,   475,  1835,  1837,  1832,  1092,  1843,
    2425,  1093,  1840,  1072,  1874,  1852,  1855,  1879, -1930,  1881,
    1883, -1930,  1898,  1591,  1968,  1897,  1994,  1970, -1930, -1930,
    1974,  1984,  2028,  2029,  2030, -1593, -1635,  2604,  2034,  1764,
    1736,  2074,  1738,  2076,  2079,  1740,  1741,  1742, -1821,  2085,
   -1821,  1746,  1824,  1825,  2097,  2614,  2578,  2096,  1995,  2646,
    2098,  2099,  1758,  1759,  1869,  1870,  2124,  2122,  -240,  2118,
    1886,  1885,  2139,  2177,  2161, -1930,  2743,  2155,  2202,  2179,
     585,  2153,  2182,  2171,   382,  2212,  2214,  2213,  2222,  2306,
    1266,  2232,  2233,  2339,  2237,  2255,  2262,  2250,  2251,  2252,
    1094,  2264,  1095,  2271,  2261,  2266,  2330,  2333,  2335,  2273,
    2309,  2336,  2342,  2496,  2343,  2363,  1907,  2371,  2374,   625,
    2380,  2384,  2415,  1996,  2429,  2379,  2383,  1267,  1997,  2491,
    2423,  2430,  2435,  2439,  2436,  2447,  1415,  1084,  1416,  1085,
    2455,   528,  2468,  2469, -1930,   528,  2629,  2479,  2484,  2348,
    2493,  2509,  2515,  2513,  2476,  2517,  2580,  2522,   528,  2583,
    2485,   509,  1998,  2478,  2581,  2512,  2529,  2592,  2593,  2605,
    1999,  2608,  2610,  2538,  2573, -1930,  2049,  2694,  2739,  2733,
    2781,  2806,  2000,  2782,  2740,  2809,  2810,    16,  2815,  2741,
      86,    57,  1265,    87,    82,    79,  1061, -1930,  2585,  2586,
     528,    78,   700,  2662,   400,  2606,  1704,   420,  2607,  2596,
    1375,  1388,  1572,  1691,  2601,  2001,  1048,  2331,  2495,  2321,
    2450,  2327,  1023,  2002,  2332,  2448,  1005,  2314,  2565,  2267,
     518,  2783,  2804,  2511,  -237,  2785,  2507,  2575, -1821,  2644,
    2637,  2802,  2378,  2808,  2786,  2613,   432,  2599,  2434,  2600,
    2663, -1930,   528,   528,   528,  1805,  2630,  2664,  1074,   193,
    1414,  1722,  1497,  1155,  2003,   803,  1803,  2004,  2062,  2060,
     841,  2640,  1195,  2642,  1156,  1520,  1203,  2643,  1548,  1809,
     898,  2654,  1225,  2697,  2078,  1829, -1930,   518,  1237,  1560,
    2089,  2088,  1248,  2817,  1839,  1846,  1652,  1597,  1096,   921,
    1275,   642,  1858,  1622,  1868,  1650, -1930,   924,   956,  1925,
    1591,   957,   981,   528,  2121,  2528,  1314,  1651,  1753, -1821,
    1714,  1179,   502,   502,  1711,  1177,  2698,  2127,  2699,  1751,
    2114,  2345,  2248,  2112,  2133,  2683,  2684,  2131,  1891,  2181,
    1861,  1862,  1510,   502,  1863,  1209,  1864,  1512,   947,  1097,
    2691,  1154,  1358,  2746,  1612,  2695,  2696,  1051,   809,  2700,
    1696,  1098,   502,  1694,   777,  2275,  2428,  2326, -1930,  2602,
    2087,  2742,  2756,  2490,  2744,  2745,  1383,  1636,  1819,  1842,
    1521,  2701, -1930,  1522,  2647,  2023,  1670,   792,   792,   502,
    1523,  1524,  2775,     0,     0,  2489,     0,     0,     0,     0,
       0, -1930,     0,  1929,     0,     0,     0,  2759,   792,  2702,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2801,  2801,     0,     0,     0,     0,     0,   792,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1525,     0,     0,
       0,     0,   501,   501,     0,     0,     0,     0,     0,     0,
    2814,     0,     0,     0,   792,     0,     0,     0,     0,     0,
       0,     0,     0,   501,     0,     0,     0, -1930,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1180,     0,
       0,     0,   501,   710,  1934,     0,     0,     0,     0,     0,
       0,     0,     0,  2703,     0,     0,     0,     0,   599,   528,
       0,     0,     0,     0,     0,     0,  1526,     0,     0,   501,
    2704,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2705,     0,   498,   498,     0,  1527,     0,     0,
       0,     0,     0,     0,     0,   528,     0,   528,     0,     0,
       0,     0,     0,  2706,     0,   498,     0,     0,     0,  1528,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2707,   498,     0,     0,     0,     0,     0,
    1943,     0,  2708,     0,     0,     0,     0,     0,     0,   528,
       0,   528,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   498,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1529,     0,     0,     0,     0,     0,     0,
       0,    91,     0,    92,     0,    93,     0,     0,     0,     0,
      94,     0,     0,     0,     0,     0,     0,     0,    95,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1530,   528,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   585,     0,     0,     0,     0,     0,  1531,     0,
       0,    96,    97,     0,     0,     0,     0,     0,     0,   710,
       0,    98,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    99,     0,     0,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   101,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   585,   585,   585,   585,   585,
    1532,     0,   102,   585,   585,   585,     0,   585,     0,     0,
     103,     0,   104,     0,  1533,     0,     0,     0,     0,  -729,
    -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,     0,
    -729,  -729,  -729,  1534,  -729,  -729,  -729,  -729,  -729,  -729,
    -729,  -729,  -729,   105,     0,     0,     0,     0,  -729,     0,
       0,     0,     0,  -729,   106,     0,  -729,     0,     0,   107,
       0,     0,     0,     0,   585,     0,     0,     0,     0,     0,
       0,     0,     0,   585,   585,   585,   585,   528,     0,   528,
       0,     0,     0,     0,     0,     0,     0,   108,     0,     0,
       0,     0,     0,     0,   109,     0,     0,   110,   111,  1535,
       0,     0,     0,     0,     0,     0,     0,     0,   112,   445,
       0,     0,   710,     0,     0,   113,   528,   114,     0,     0,
     115,     0,     0,     0,  -729,     0,   447,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   528,     0,     0,     0,     0,     0,
       0,     0,   116,     0,     0,     0,   117,     0,   118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,     0,
       0,     0,     0,     0,     0,  -729,  -729,  -729,     0,  -729,
    -729,  -729,  -729,     0,     0,    91,     0,    92,     0,    93,
       0,     0,     0,     0,    94,     0,   120,     0,     0,     0,
       0,  2160,    95,     0,     0,     0,     0,     0,     0,   121,
     448,   449,   450,     0,     0,     0,     0,     0,     0,   451,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   452,     0,     0,     0,    96,    97,   122,   123,     0,
       0,     0,     0,     0,     0,    98,     0,     0,   124,     0,
       0,     0,     0,     0,     0,     0,    99,     0,     0,   100,
       0,   125,   126,     0,     0,     0,     0,     0,   127,     0,
       0,     0,   128,   101,     0,   456,     0,   457,   458,   459,
       0,   129,     0,   460,     0,   461,     0,     0,     0,     0,
       0,   130,     0,     0,     0,     0,   102,     0,     0,  -729,
     131,     0,     0,     0,   103,     0,   104,     0,     0,   132,
     585,     0,     0,     0,   133,   134,     0,     0,   135,     0,
     136,     0,     0,     0,   463,     0,     0,     0,   137,   444,
       0,     0,     0,     0,     0,     0,     0,   105,     0,     0,
       0,  -729,   528,     0,   528,     0,     0,     0,   106,     0,
       0,  -729,     0,   107,     0,     0,     0,     0,     0,   139,
       0,     0,  2242,     0,     0,     0,   140,     0,     0,     0,
     465,   141,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   108,     0,     0,     0,     0,     0,     0,   109,     0,
       0,   110,   111,  -729,     0,     0,     0,     0,     0,   142,
     466,     0,   112,   445,     0,     0,     0,     0,     0,   113,
       0,   114,     0,     0,   115,     0,     0,     0,     0,     0,
     447,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     467,     0,     0,     0,     0,     0,     0,   710,     0,     0,
       0,     0,   468,   469,     0,     0,   116,     0,     0,     0,
     117,     0,   118,  2313,  2313,     0,     0,     0,     0,     0,
       0,     0,   119,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   470,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   471,     0,     0,     0,
     120,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   121,   448,   449,   450,   472,     0,     0,
       0,     0,   473,   451,     0,     0,     0,     0,     0,     0,
     474,     0,   437,     0,  2376,   452,     0,     0,   475,     0,
       0,   122,   123,     0,     0,     0,     0,   445,     0,     0,
       0,     0,   124,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   447,   125,   126,     0,     0,     0,
       0,     0,   127,   710,     0,     0,   128,     0,     0,   456,
       0,   457,   458,   459,     0,   129,     0,   460,     0,   461,
     710,     0,   710,   710,     0,   130,   710,     0,     0,     0,
       0,     0,     0,     0,   131,     0,     0,     0,   509,     0,
       0,     0,     0,   132,     0,     0,     0,     0,   133,   134,
       0,     0,   135,     0,   136,     0,     0,     0,   463,     0,
       0,     0,   137,     0,    91,     0,    92,     0,    93,     0,
       0,     0,     0,    94,     0,   138,     0,     0,     0,     0,
       0,    95,     0,   710,   710,     0,     0,     0,   448,   449,
     450,     0,     0,   139,     0,     0,     0,   451,   710,     0,
     140,  2453,  2453,     0,   465,   141,     0,     0,     0,  2453,
    2453,  2460,     0,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,   509,    98,   445,     0,     0,     0,     0,
       0,     0,     0,   142,   466,    99,     0,     0,   100,     0,
       0,     0,   447,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   101,   808,     0,   457,   458,   459,     0,     0,
     710,   460,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   509,     0,   467,   102,     0,     0,     0,   710,
       0,     0,     0,   103,   710,   104,   468,   469,     0,   710,
     710,     0,     0,     0,     0,     0,     0,     0,     0,   509,
       0,     0,   463,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   105,   710,     0,     0,
     470,     0,     0,     0,     0,  2584,     0,   106,     0,     0,
     471,     0,   107,     0,     0,   597,   448,   449,   450,     0,
       0,     0,     0,     0,     0,   451,    91,     0,    92,     0,
      93,   472,     0,     0,     0,    94,   473,     0,     0,     0,
     108,     0,     0,    95,   474,     0,   437,   109,     0,     0,
     110,   111,   475,     0,     0,     0,     0,   710,   466,     0,
       0,   112,     0,     0,     0,     0,     0,     0,   113,     0,
     114,     0,     0,   115,   585,     0,    96,    97,     0,   585,
       0,   598,     0,   457,   458,   459,    98,     0,     0,   460,
       0,   710,     0,     0,     0,     0,     0,    99,     0,     0,
     100,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     468,   469,     0,     0,   101,   116,     0,     0,     0,   117,
       0,   118,     0,   710,     0,     0,     0,     0,     0,     0,
     463,   119,     0,     0,     0,     0,     0,   102,     0,   585,
       0,     0,     0,   585,     0,   103,     0,   104,     0,     0,
       0,     0,     0,     0,   471,     0,     0,     0,     0,   120,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,     0,     0,   472,     0,     0,   105,     0,
     473,     0,     0,     0,     0,     0,     0,     0,   474,   106,
     437,     0,     0,     0,   107,     0,     0,     0,     0,     0,
     122,   123,     0,     0,     0,     0,   466,     0,     0,     0,
       0,   124,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   108,     0,   125,   126,     0,     0,     0,   109,
       0,   127,   110,   111,     0,   128,     0,     0,     0,     0,
       0,     0,     0,   112,   129,     0,     0,     0,     0,     0,
     113,     0,   114,     0,   130,   115,     0,     0,   468,   469,
       0,     0,     0,   131,     0,     0,     0,     0,     0,     0,
       0, -1930,   132,     0,     0,     0,     0,   133,   134,     0,
       0,   135,     0,   136,     0,     0,     0,     0,     0,     0,
       0,   137,     0,     0,     0,     0,     0,   116,     0,     0,
       0,   117,   471,   118,   989,     0,     0,     0,     0,     0,
       0,     0,     0,   119, -1169,     0,     0,     0,     0,     0,
       0,     0,   139,   472,     0,     0,     0,     0,   473,   140,
       0,     0,     0, -1169,   141,     0,   474,   599,   437,     0,
       0,   120,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   245,   121,   246,     0,     0,     0,     0,
     247,     0,   142,     0,     0,     0,     0,     0,   248,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   122,   123,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   124,     0,     0,     0,     0,     0,     0,
       0,   249,   250,     0,     0,     0,   125,   126,     0,     0,
       0,   251,     0,   127,     0,     0,     0,   128,     0,     0,
       0,     0,   252,     0,     0,   253,   129,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   130,     0,     0,   254,
       0,     0,     0,   443,     0,   131,   444,     0,     0,   863,
     864,   865,     0,     0,   132,     0,     0,   866,     0,   133,
     134,     0,   255,   135,     0,   136,     0,     0,     0,     0,
     256,     0,   257,   137,     0,     0,     0,     0,     0,   258,
       0,   259,   260,   261,   262,   263,   264,   265,   266,     0,
     267,   268,   269,     0,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   139,     0,     0,     0,     0,     0,
       0,   140,     0,     0,   280,     0,   141,     0,     0,   281,
     445,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   447,     0,     0,
       0,     0,     0,     0,   142,     0,     0,   282,     0,     0,
       0,     0,     0,     0,   283,     0,     0,   284,   285,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   286,     0,
       0,     0,     0,     0,     0,   287,     0,   288,     0,     0,
     289,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   867,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   868,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   290,     0,     0,     0,   291,     0,   292,     0,
       0,   448,   449,   450,     0,     0,     0,     0,   293,     0,
     451,     0,     0,     0,     0,     0,   869,   870,     0,     0,
       0,     0,   452,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   294,     0,     0,     0,
       0,     0,  1208,     0,     0,     0,     0,     0,     0,   295,
       0,     0,     0,     0,     0,   453,   871,   872,     0,     0,
       0,   454,     0,   455,     0,     0,   456,     0,   457,   458,
     459,     0,     0,     0,   460,     0,   461,   296,     0,     0,
       0,   462,     0,     0,     0,     0,     0,     0,   297,     0,
       0,     0,     0,     0,   873,     0,     0,     0,     0,     0,
     874,     0,   298,     0,     0,   875,     0,     0,   299,     0,
       0,     0,   300,   876,     0,   463,     0,     0,     0,     0,
     877,   301,     0,     0,     0,   878,     0,     0,     0,     0,
       0,   302,     0,     0,   464,     0,     0,     0,     0,     0,
     303,     0,     0,     0,   879,     0,     0,     0,     0,   304,
       0,     0,     0,     0,   305,   306,   443,     0,   307,   444,
     308,   465,   863,   864,   865,     0,     0,     0,   309,     0,
     866,     0,   445,     0,     0,     0,     0,     0,     0,     0,
       0,   310,     0,     0,     0,     0,     0,     0,     0,   447,
       0,   466,     0,     0,     0,     0,     0,     0,     0,   311,
       0,     0,     0,     0,     0,     0,   312,     0,     0,     0,
       0,   313,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   467,     0,   445,     0,     0,     0,     0,     0,   314,
       0,     0,     0,   468,   469,     0,     0,     0,     0,     0,
     447,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   880,     0,   881,     0,   882,
       0,     0,   883,     0,   884,   885,   886,   470,     0,   887,
     888,     0,   597,   448,   449,   450,     0,   471,     0,     0,
       0,     0,   451,     0,     0,     0,     0,     0,     0,     0,
    -893,     0,     0,  -893,     0,     0,     0,     0,   472,     0,
     867,     0,     0,   473,     0,     0,     0,     0,     0,     0,
     868,   474,     0,   437,     0,     0,     0,     0,     0,   475,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   427,   448,   449,   450,     0,   808,     0,
     457,   458,   459,   451,     0,     0,   460,     0,     0,   869,
     870,     0,     0,     0,     0,   452,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -893,     0,     0,
       0,     0, -1825,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -893,     0,     0,   463,   453,   871,
     872,     0,     0,     0,   454,     0,   455,     0,     0,   456,
       0,   457,   458,   459,     0,     0,     0,   460,     0,   461,
       0,     0,     0,     0,   462,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   873,     0,     0,
       0,     0,     0,   874,     0,     0,   443,     0,   875,   444,
       0,     0,     0,     0,     0,     0,   876,     0,   463,     0,
       0,     0,     0,   877,     0,     0,     0,     0,   878,     0,
    -959,     0,     0,   466,     0,  -959,     0,   464,  -959,     0,
       0,     0,     0,     0,     0,  -959,  -959,   879,  -893,  -893,
    -893,     0,     0,     0,     0,     0,     0,  -893,     0,     0,
       0,     0,     0,     0,   465,  -959,     0,  -959,     0,  -893,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   445,     0,   468,   469,     0,     0,     0,
       0,     0,  -959,     0,   466,     0,     0,     0, -1930,     0,
     447,     0,  -893,     0,     0,     0,     0,     0,  -893,     0,
    -893,     0,     0,  -893,     0,  -893,  -893,  -893,     0,     0,
       0,  -893,     0,  -893,     0,     0,     0,     0,  -893,   471,
       0,     0,     0,     0,   467,     0,     0,     0,     0,     0,
     443, -1169,     0,   444,     0,     0,   468,   469,     0,     0,
     472,     0,     0,     0,     0,   473,     0,     0,     0,     0,
   -1169,  -959,  -893,   474,   599,   437,     0,  -893,   880,     0,
     881,     0,   882,     0,     0,   883,     0,   884,   885,   886,
     470,  -893,   887,   888,     0,     0,     0,     0,     0,     0,
     471,     0,  -959,     0,   448,   449,   450,     0,     0,     0,
       0,     0,     0,   451,     0,     0,     0,     0,  -893,     0,
       0,   472,     0,     0,  -959,   452,   473,   445,     0, -1825,
       0,     0,     0,     0,   474,     0,   437,     0,     0,     0,
       0,     0,   475,     0,   447,     0,     0,     0,  -893,     0,
       0,   443,     0,     0,   444,     0,     0,     0,   453,     0,
       0,     0,     0,     0,   454,  -959,   455,     0,     0,   456,
       0,   457,   458,   459,     0,     0,     0,   460,  -959,   461,
       0,     0,  -893,     0,   462,  -959,     0,     0,  -893,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -893,  -893,     0,     0,     0,     0, -1930,     0,     0,     0,
       0,     0,     0,  -959,     0,     0,     0,     0,   463,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   445,     0,
       0,     0,     0,  -959,  -893,     0,     0,   464,   448,   449,
     450,     0,     0,     0,  -893,   447,  -959,   451,     0,   333,
     443,  -893,     0,   444,     0,     0,     0,     0,   646,   452,
       0,     0,     0,     0,   465,  -893,     0,     0,     0,     0,
    -893,     0,     0, -1825,     0,     0,     0,     0,  -893,     0,
    -893,     0,     0,     0,     0,   443,  -893,     0,   444,     0,
       0,     0,   453,     0,   466,  -959,     0,     0,   454,     0,
     455,     0,     0,   456,     0,   457,   458,   459,     0,  -959,
       0,   460,     0,   461,     0,     0,     0,     0,   462,     0,
       0,     0,     0,     0,     0,     0,     0,   445,  -959,     0,
       0,     0,     0,     0,   467,     0, -1930,     0,     0,   448,
     449,   450,     0,     0,   447,     0,   468,   469,   451,     0,
       0,     0,   463,     0,     0,     0,     0,     0,     0,     0,
     452,     0,   445,     0,     0,     0,     0,     0,     0,     0,
       0,   464,     0,     0,   446,     0,   980,     0,     0,   447,
     470,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     471,     0,     0,   453,  -959,     0,     0,     0,   465,   454,
       0,   455,     0,     0,   456,  -959,   457,   458,   459,     0,
       0,   472,   460,     0,   461,     0,   473,     0,     0,   462,
       0,     0,     0,     0,   474,  -959,   437,   334,   466,     0,
       0,     0,   475,     0,     0,     0,     0,     0,   448,   449,
     450,     0,     0,     0,     0,     0,     0,   451,     0,     0,
       0,     0,     0,   463,     0,     0,     0,     0,     0,   452,
       0,     0,     0,     0,     0,     0,     0,     0,   467,     0,
       0,     0,   464,   448,   449,   450,     0,     0,     0,     0,
     468,   469,   451,     0,     0,   443,     0,     0,   444,     0,
       0,     0,   453,     0,   452,     0,     0,     0,   454,   465,
     455,     0,     0,   533,     0,   457,   458,   459,     0,     0,
       0,   460,     0,   461,   470,     0,     0,     0,   462,     0,
     443,     0,     0,   444,   471,     0,     0,   453,     0,   466,
       0,     0,     0,   454,     0,   455,     0,     0,   456,     0,
     457,   458,   459,     0,     0,   472,   460,     0,   461,     0,
     473,     0,   463,   462,     0,     0,     0,   534,   474,   599,
     437,     0,   445,     0,     0,     0,   475,     0,     0,   467,
       0,   464,     0,     0,   586,     0,     0,     0,     0,   447,
       0,   468,   469,     0,     0,     0,     0,   463,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   445,   465,     0,
       0,     0,     0,     0,     0,     0,   464,     0,     0,     0,
       0,     0,     0,     0,   447,   470,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   471,     0,   646,   466,     0,
       0,     0,     0,   465,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   472,     0,     0,     0,
       0,   473,     0,     0,     0,     0,     0,     0,     0,   474,
       0,   437,     0,   466,     0,     0,     0,   475,   467,     0,
       0,     0,     0,   448,   449,   450,     0,     0,     0,     0,
     468,   469,   451,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   452,     0,     0,     0,     0,     0,
       0,     0,     0,   467,     0,     0,     0,     0,   448,   449,
     450,     0,     0,     0,   470,   468,   469,   451,     0,     0,
     443,     0,     0,   444,   471,     0,     0,   453,     0,   452,
       0,     0,     0,   454,     0,   455,     0,     0,   456,     0,
     457,   458,   459,     0,     0,   472,   460,     0,   461,   470,
     473,     0,     0,   462,     0,     0,     0,     0,   474,   471,
     437,     0,   453,     0,     0,     0,   475,     0,   454,     0,
     455,     0,     0,   456,     0,   457,   458,   459,     0,     0,
     472,   460,     0,   461,     0,   473,     0,   463,   462,     0,
       0,     0,     0,   474,     0,   437,     0,   445,     0,     0,
       0,   475,     0,     0,     0,     0,   464,     0,   443,   651,
       0,   444,     0,     0,   447,     0,     0,     0,     0,     0,
       0,     0,   463,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   465,     0,     0,     0,     0,     0,     0,
       0,   464,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   466,     0,     0,     0,     0,   465,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   445,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   466,     0,
       0,     0,   447,   467,     0,     0,     0,     0,   448,   449,
     450,     0,     0,     0,     0,   468,   469,   451,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   452,
       0,     0,     0,     0,     0,     0,     0,     0,   467,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   470,
     468,   469,     0,     0,     0,     0,     0,     0,     0,   471,
       0,     0,   453,     0,     0,     0,     0,     0,   454,     0,
     455,     0,     0,   456,     0,   457,   458,   459,     0,     0,
     472,   460,     0,   461,   470,   473,     0,     0,   462,     0,
       0,     0,     0,   474,   471,   437,   448,   449,   450,     0,
     443,   475,     0,   444,     0,   451,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   472,     0,   452,     0,     0,
     473,     0,   463,     0,     0,     0,     0,     0,   474,     0,
     437,     0,     0,     0,     0,     0,   475,     0,     0,     0,
       0,   464,     0,     0,     0,     0,     0,     0,     0,     0,
     453,     0,     0,     0,     0,     0,   454,     0,   455,     0,
       0,   456,     0,   457,   458,   459,     0,     0,   465,   460,
       0,   461,     0,     0,     0,     0,   462,   445,     0,     0,
       0,   443,     0,     0,   444,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   447,     0,     0,     0,   466,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     463,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   464,
       0,     0,     0,     0,     0,     0,     0,     0,   467,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     468,   469,     0,     0,     0,     0,   465,     0,   445,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   447,     0,     0,     0,     0,
       0,     0,     0,     0,   470,     0,   466,     0,   448,   449,
     450,     0,     0,     0,   471,     0,     0,   451,     0,   443,
       0,     0,   444,     0,     0,     0,     0,     0,     0,   452,
       0,     0,     0,     0,     0,   472,     0,     0,     0,     0,
     473,     0,     0,     0,     0,     0,   467,     0,   474,     0,
     437,     0,     0,     0,     0,     0,   475,     0,   468,   469,
       0,     0,   453,     0,     0,     0,     0,     0,   454,     0,
     455,     0,     0,   456,     0,   457,   458,   459,   780,     0,
       0,   460,     0,   461,     0,     0,     0,     0,   462,   448,
     449,   450,   470,   985,     0,     0,   445,     0,   451,     0,
     443,     0,   471,   444,     0,     0,     0,     0,     0,     0,
     452,     0,     0,   447,     0,     0,     0,     0,     0,     0,
       0,     0,   463,   472,     0,     0,     0,   534,   473,     0,
       0,     0,     0,     0,     0,     0,   474,  1132,   437,     0,
     444,   464,     0,   453,   475,     0,     0,     0,     0,   454,
       0,   455,     0,     0,   456,     0,   457,   458,   459,     0,
       0,     0,   460,     0,   461,     0,     0,     0,   465,   462,
       0,     0,     0,     0,     0,     0,     0,   445,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   447,     0,     0,     0,   466,     0,
       0,     0,     0,   463,     0,     0,     0,   448,   449,   450,
       0,     0,     0,     0,   445,     0,   451,     0,     0,     0,
       0,     0,   464,     0,     0,     0,     0,     0,   452,     0,
       0,   447,     0,     0,     0,     0,     0,     0,   467,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   465,
     468,   469,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   453,     0,     0,     0,     0,     0,   454,     0,   455,
       0,     0,   456,     0,   457,   458,   459,     0,     0,   466,
     460,     0,   461,     0,   470,     0,     0,   462,   448,   449,
     450,     0,     0,     0,   471,     0,     0,   451,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   452,
       0,     0,     0,     0,     0,   472,     0,     0,     0,   467,
     473,   463,     0,     0,     0,   448,   449,   450,   474,     0,
     437,   468,   469,     0,   451,     0,   475,     0,     0,     0,
     464,     0,   453,     0,     0,     0,   452,     0,   454,     0,
     455,     0,     0,   456,     0,   457,   458,   459,     0,     0,
       0,   460,     0,   461,     0,   470,     0,   465,   462,     0,
       0,     0,     0,     0,     0,   471,     0,     0,     0,   453,
       0,     0,     0,     0,     0,   454,     0,   455,     0,     0,
     456,     0,   457,   458,   459,     0,   472,   466,   460,     0,
     461,   473,   463,     0,     0,   462,     0,     0,     0,   474,
       0,   437,     0,     0,     0,     0,     0,   475,     0,     0,
       0,   464,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1301,     0,     0,     0,     0,     0,   467,     0,   463,
       0,     0,     0,     0,     0,     0,     0,     0,   465,   468,
     469,     0,     0,     0,     0,     0,     0,     0,   464,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2432,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   466,     0,
       0,     0,     0,   470,     0,   465,     0,     0,     0,     0,
       0,     0,     0,   471,     0,     0,     0,     0,     0,  -374,
       0,     0,  -374,     0,     0,  -374,  -374,  -374,  -374,  -374,
    -374,  -374,  -374,  -374,   472,   466,     0,     0,   467,   473,
       0,     0,     0,     0,     0,     0,     0,   474,     0,   437,
     468,   469,  -374,     0,  -374,   475,     0,     0,     0,     0,
       0,  -374,     0,  -374,  -374,  -374,  -374,  -374,  -374,  -374,
       0,     0,     0,     0,     0,   467,     0,     0,     0,     0,
       0,     0,     0,     0,   470,     0,     0,   468,   469,     0,
       0,     0,     0,     0,   471,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -374,     0,     0,
       0,     0,     0,     0,     0,   472,     0,     0,     0,     0,
     473,   470,     0,     0,     0,     0,     0,     0,   474,     0,
     437,   471,     0,     0,     0,     0,   475,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -374,     0,
       0,     0,   472,     0,     0,     0,     0,   473,     0,     0,
       0,     0,     0,     0,  1008,   474,     0,   437,  -374,  -374,
    -374,  -374,  -374,   475,     0,  -374,  -374,     0,     0,  -374,
       0,     0,     0,     0,     0,  -374,     0,  -374,     0,     0,
       0,     0,     0,  -374,     0,     0,     0,     0,  -374,     0,
       0,  -374,     0,     0,     0,     0,     0,     0,     0,  -374,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -374,     0,     0,  -374,     0,     0,     0,     0,
       0,  -374,     0,  -374,     0,     0,     0,     0,     0,     0,
       0,     0,  -374,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -374,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -374,     0,     0,
       0,     0,     0,     0,  1007,     0,     0,     0,  1422,     0,
       0,  1423,     0,     0,  1424,     0,     0,     0,     0,     0,
       0,     0,  1425,     0,  -374,     0,     0,  -374,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -374,
    -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,
       0,     0,  -374,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -374,  1426,  -374,
       0,     0,     0,     0,     0,     0,     0,  -374,     0,  -374,
    -374,  -374,  -374,  -374,  -374,  -374,     0,  1427,     0,     0,
       0,     0,     0,     0,     0,  -374,     0,     0,     0,     0,
       0,     0,  -374,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -374,     0,     0,  -374,     0,     0,     0,     0,     0,     0,
    -374,     0,  -374,  -374,  -374,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1428,     0,
       0,     0,     0,  -374,     0,  -374,  1429,     0,  -374,     0,
    1008,     0,     0,  -374,  -374,  -374,  -374,  -374,  -374,     0,
    1430,  -374,  -374,     0,     0,  -374,     0,     0,     0,     0,
       0,  -374,     0,     0,     0,  -374,  -374,  -374,     0,  -374,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -374,
       0,     0,  1431,     0,  -374,  -374,  -374,     0,     0,     0,
       0,     0,     0,  1009,     0,  1899,     0,     0,  -374,     0,
       0,  -374,  1432,     0,  1433,     0,     0,  -374,     0,     0,
    1900,     0,     0,  1901,  1902,  1903,  1904,  1905,  1906,  1907,
       0,     0,     0,     0,     0,     0,  1434,  1435,     0,     0,
    1072,     0, -1930,     0,     0, -1930,     0,     0, -1930,     0,
       0,     0,     0,  -374,     0,     0, -1930,     0,  1908,     0,
    1909,  1910,  1911,  1912,  1913,  1914,  1915,     0,     0,  1436,
       0,     0,     0,     0,     0, -1821,     0, -1821,     0,     0,
       0,     0,     0,  -374,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -374,  1437,  1438,
       0,     0, -1930,     0,  1916,  -374,     0,     0,  -374,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0, -1930,     0,  -374,  1439,     0,     0,     0,     0,     0,
       0,  1440,     0,     0,     0,     0,  -374,     0,     0,     0,
       0,     0,     0,     0,  -374,  1441,     0,     0,     0,  1442,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1443,  1917,  1918,  1919,  1920,  1921,
       0,     0,  1922,  1923,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -374,     0,  -374,  -374,
    -374,  1444,     0,     0,     0,     0,     0,     0,     0,     0,
    1445,     0, -1930,     0,     0,     0,  1924,     0,     0,  1073,
   -1930,     0,     0,     0,     0,  -374,     0,     0,     0,   408,
       0,     0,  1925,     0, -1930,     0,     0,     0, -1906,     0,
    1446,     0,     0,     0,  -374,     0,     0,     0,     0,     0,
    1447,     0,     0,     0,     0,     0,  1448,     0,     0,     0,
       0,  -374,     0,     0,     0,     0, -1930,     0,     0,     0,
       0,  -374,  -374,  -374,  1926, -1821,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -374, -1930,     0, -1930,     0,
       0,     0,  -374,     0,     0,  1074,     0,     0,     0,  1009,
       0,     0,     0,     0,  1927,     0,     0,     0,     0,     0,
   -1930, -1930,     0,     0,     0,     0,     0,     0,  1928,     0,
       0,     0,     0,     0,     0,     0,  1929,     0,     0,  1930,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0, -1930,  1931,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0, -1821,  1932,     0,     0,
       0,     0,     0,     0,     0,  1933,     0,     0,     0,     0,
       0,     0, -1930, -1930,     0,     0,     0,     0,     0,     0,
    2540,     0,     0,  2541,     0,     0,  2542,  1901,  1902,  1903,
    1904,  1905,  1906,  2543,  2544,     0,     0,     0, -1930,     0,
       0,     0,     0,     0,     0, -1930,     0,  1934,     0,  1935,
    1936,  1937,     0,  1415,     0,  1416,     0,     0,     0, -1930,
       0,     0,  1908, -1930,  1909,  1910,  1911,  1912,  1913,  1914,
    1915,     0,     0,     0,     0,     0,  1938,     0, -1930,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -371,     0,     0,     0,     0,
       0,     0,     0,     0,     0, -1930,     0,     0,  1916,     0,
       0,     0, -1906,     0, -1930,     0,     0,     0,     0,     0,
       0,     0,  1939,  1940,  1941,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1942,     0,     0,     0,
       0,     0,     0,  1943, -1930,     0,     0,     0,     0,  2545,
       0,     0,     0,     0, -1930,     0,     0,     0,     0,     0,
   -1930,     0,     0,     0,     0,     0,     0,     0,     0,  1917,
    1918,  1919,  1920,  1921,     0,   599,  1922,  1923,     0,     0,
    2546,     0,     0,     0,     0,     0,  2547,     0,  2548,     0,
       0,     0,     0,     0, -1856,     0,     0,     0,     0,  2549,
       0,     0,  2550,     0,     0,     0,     0,     0,     0,     0,
    1924,  1901,  1902,  1903,  1904,  1905,  1906,     0,     0,     0,
       0,     0,     0,   408,     0,     0,  1925,     0,     0,     0,
       0,     0,     0,     0,  2551,     0,     0,     0,     0,     0,
       0,     0,     0,  2552,     0,     0,  1908,     0,  1909,  1910,
    1911,  1912,  1913,  1914,  1915,     0,  2553,   445,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1926,     0,
       0,     0,     0,     0,   447,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1916,     0,     0,     0,     0,     0,  2554,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2555,  1928,     0,     0,     0,     0,     0,     0,     0,
    1929,     0,     0,  1930,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1931,     0,
    2556,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1917,  1918,  1919,  1920,  1921,     0,     0,
    1922,  1923,     0,     0,     0,     0,  2557,     0,   448,   449,
     450,     0,     0,  2558,     0,     0,     0,   451,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   452,
       0,  2559,   445,     0,  1924,     0,     0,     0,     0,     0,
       0,  1934,     0,  1935,  1936,  1937,     0,     0,     0,   447,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   488,     0,     0,     0,     0,     0,   454,     0,
     455,     0,     0,   456,     0,   457,   458,   459,     0,     0,
       0,   460,     0,   461,  2560,     0,     0,     0,     0,  -626,
       0,     0,  1926,     0,  2561,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2562,     0,     0,     0,  1939,  1940,  1941,     0,
       0,     0,   463,     0,     0,     0,     0,     0,     0,     0,
    1942,     0,     0,   445,     0,  2563,  1928,  1943,     0,     0,
       0,   464,     0,   448,   449,   450,     0,  1930,     0,     0,
     447,     0,   451,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1931,     0,   452,     0,     0,     0,   465,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   488,   466,     0,
       0,     0,     0,   454,     0,   455,     0,     0,   456,     0,
     457,   458,   459,     0,     0,     0,   460,     0,   461,     0,
       0,     0,     0,     0,     0,     0,     0,  1935,  1936,  1937,
       0,     0,   445,     0,     0,     0,     0,     0,   467,     0,
       0,     0,     0,     0,   448,   449,   450,     0,     0,   447,
     468,   469,     0,   451,     0,     0,     0,   463,     0,     0,
       0,     0,     0,     0,     0,   452,     0,     0,     0,     0,
       0,     0,  1116,     0,     0,     0,   464,     0,     0,     0,
       0,     0,   489,     0,   470,     0,   490,   491,     0,     0,
       0,     0,     0,     0,   471,     0,     0,     0,   488,     0,
    1939,  1940,  1941,   465,   454,     0,   455,     0,     0,   456,
       0,   457,   458,   459,     0,   472,     0,   460,     0,   461,
     473,     0,     0,     0,     0,     0,     0,     0,   474,     0,
     437,     0,     0,   466,     0,     0,   475,     0,     0,     0,
       0,     0,     0,   448,   449,   450,     0,     0,     0,     0,
       0,     0,   451,     0,     0,     0,     0,     0,   463,     0,
       0,     0,     0,     0,   452,     0,     0,     0,     0,     0,
       0,     0,     0,   467,     0,     0,     0,   464,     0,     0,
       0,     0,     0,     0,     0,   468,   469,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   488,     0,     0,
       0,     0,     0,   454,   465,   455,     0,  1732,   456,     0,
     457,   458,   459,     0,     0,     0,   460,   489,   461,   470,
       0,   490,   491,   445,     0,     0,     0,     0,     0,   471,
       0,     0,     0,     0,   466,     0,     0,     0,     0,     0,
     447,     0,     0,     0,     0,     0,     0,   445,     0,     0,
     472,     0,     0,     0,     0,   473,     0,   463,     0,     0,
       0,     0,     0,   474,   447,   437,     0,     0,     0,     0,
       0,   475,     0,     0,   467,     0,   464,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   468,   469,     0,     0,
       0,     0,     0,     0,  1735,     0,     0,     0,     0,     0,
       0,     0,     0,   465,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   489,     0,
     470,     0,   490,   491,     0,     0,     0,     0,     0,     0,
     471,     0,     0,   466,   448,   449,   450,     0,     0,     0,
       0,     0,     0,   451,     0,     0,     0,     0,     0,     0,
       0,   472,     0,     0,     0,   452,   473,     0,   448,   449,
     450,     0,     0,     0,   474,     0,   437,   451,     0,     0,
       0,     0,   475,   467,     0,     0,     0,     0,     0,   452,
       0,     0,     0,     0,     0,   468,   469,     0,   488,   445,
       0,     0,     0,  1737,   454,     0,   455,     0,     0,   456,
       0,   457,   458,   459,     0,     0,   447,   460,     0,   461,
       0,     0,   488,     0,     0,     0,     0,   489,   454,   470,
     455,   490,   491,   456,     0,   457,   458,   459,     0,   471,
       0,   460,     0,   461,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   463,     0,
     472,     0,     0,     0,     0,   473,     0,     0,     0,     0,
       0,     0,     0,   474,     0,   437,     0,   464,     0,     0,
       0,   475,   463,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   464,     0,     0,   465,     0,     0,     0,     0,     0,
     448,   449,   450,     0,     0,     0,     0,     0,     0,   451,
       0,     0,     0,     0,     0,     0,     0,     0,   465,     0,
       0,   452,     0,     0,   466,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   445,
       0,     0,     0,     0,     0,     0,     0,     0,   466,     0,
       0,     0,     0,     0,   488,     0,   447,     0,     0,     0,
     454,     0,   455,     0,   467,   456,     0,   457,   458,   459,
       0,     0,     0,   460,     0,   461,   468,   469,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   467,   445,
       0,     0,     0,     0,     0,     0,     0,     0,  1756,     0,
     468,   469,     0,     0,     0,     0,   447,     0,   489,     0,
     470,     0,   490,   491,   463,     0,     0,     0,     0,     0,
     471,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   489,   464,   470,     0,   490,   491,     0,     0,
       0,   472,     0,     0,   471,     0,   473,     0,     0,     0,
     448,   449,   450,     0,   474,     0,   437,     0,     0,   451,
     465,     0,   475,     0,     0,   472,     0,     0,     0,     0,
     473,   452,     0,     0,     0,     0,     0,     0,   474,     0,
     437,     0,     0,     0,     0,     0,   475,     0,     0,     0,
     466,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     448,   449,   450,     0,   488,     0,     0,     0,     0,   451,
     454,     0,   455,     0,     0,   456,     0,   457,   458,   459,
       0,   452,     0,   460,     0,   461,     0,     0,     0,     0,
     467,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   468,   469,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   488,     0,     0,     0,     0,     0,
     454,     0,   455,     0,   463,   456,     0,   457,   458,   459,
       0,     0,     0,   460,     0,   461,   470,     0,   490,     0,
       0,     0,     0,   464,     0,     0,   471,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   472,     0,     0,
     465,     0,   473,     0,   463,     0,     0,     0,     0,     0,
     474,     0,   437,     0,     0,     0,     0,     0,   475,     0,
       0,     0,     0,   464,     0,     0,  2791,     0,     0,     0,
     466,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     465,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     467,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     466,     0,   468,   469,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   470,     0,     0,     0,
     467,     0,     0,     0,     0,     0,   471,     0,     0,     0,
       0,     0,   468,   469,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   472,     0,     0,
       0,     0,   473,     0,     0,     0,     0,     0,     0,     0,
     474,     0,   437,     0,     0,     0,   470,     0,   475,     0,
       0,     0,     0,     0,     0,     0,   471,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   472,     0,     0,
       0,     0,   473,     0,     0,     0,     0,     0,     0,     0,
     474,     0,   437,     0,     0,     0,     0,     0,   475
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-2424)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
     212,   213,   200,   340,   216,   409,   325,   411,   444,   646,
     414,   929,    42,   521,   453,   365,   328,   532,   318,  1668,
     417,   867,  1248,  1729,  1469,   323,   238,  1418,   636,  1210,
    1421,   528,  1351,  1270,  1943,   776,   338,   208,  1693,   623,
     340,   528,   858,   214,   352,   786,   346,   319,   318,   488,
     352,    17,    22,   330,    56,  1315,   780,     9,     1,  1296,
     645,   338,  1569,  1162,     1,     1,    58,    87,    31,     9,
       0,     9,  1883,     1,     1,   352,    31,   115,   124,    58,
       9,   316,    49,   318,  1998,  1999,   321,   124,    49,    39,
     325,    88,    64,  1192,   153,     9,   178,   111,   585,   176,
     111,   616,   125,  1295,  1083,   340,    58,    71,  1329,    58,
      27,   346,  1091,   177,  1399,    17,   166,   160,    21,  1997,
    2372,    88,   390,   126,   322,    73,   324,   259,   852,   228,
     235,   205,   367,   166,   369,   240,   130,     6,   318,   216,
      30,  2365,   205,   323,   641,  1983,   754,  1246,   108,   347,
     330,   349,  1991,   453,   641,   400,   354,   726,   338,   221,
      97,   325,   265,    49,   114,   174,   313,    22,   235,    26,
     368,   244,   352,  1984,   386,    65,  2506,    67,   313,    21,
     302,  2604,   237,  2506,  2254,    48,   398,   290,   488,   489,
     490,   491,   404,   405,  1639,   407,   920,   516,   362,   116,
     412,   413,   255,   126,   313,   417,  1305,   166,   125,   139,
    2174,   446,   130,   143,   514,   235,   277,  2340,   259,   309,
     490,   259,    97,    98,   172,   575,   414,   179,   234,   844,
     318,   418,   504,     0,   126,   259,   402,   454,   455,   463,
     205,   130,  2474,   422,   259,   455,   247,   464,   289,   299,
     304,   305,   265,     8,   489,   490,   491,   107,     0,   756,
      71,   985,   472,   203,   844,   235,   290,   117,   157,  2501,
     159,   178,   202,   453,   201,   520,   123,   290,    71,   514,
     172,   516,    37,   462,  2198,   562,   216,   217,   347,   513,
     240,   508,   244,   334,   300,   461,   573,   419,   695,   487,
     487,   601,  2425,   707,   654,   306,     6,   326,   488,   489,
     490,   491,  2276,  2124,  1821,  1822,   335,   426,    71,   334,
     759,   519,   906,   342,   343,  2260,    71,   190,   573,   826,
     259,   633,   530,   423,    58,   396,   259,  2760,    71,   142,
     299,   198,   361,   523,   397,   231,   468,   783,    49,   277,
     405,   473,   355,    93,    49,    71,   633,   322,   420,   996,
    2690,   638,   231,  1654,   431,   255,   601,  2690,   365,   516,
    1216,  2026,   139,   537,  2213,   205,   143,  2447,   817,  1225,
     235,   516,   562,   457,   516,   275,  1202,   259,   623,  1205,
     959,   400,  1491,   573,    71,  2273,  1656,   314,   365,   274,
     645,   489,   490,   491,   365,   478,   990,   410,   507,   472,
    2634,   516,   515,  1137,   362,   244,   651,    57,   348,   462,
      60,   471,  1707,   938,    64,   294,  1717,  1718,  1719,  1720,
    1721,  1623,   700,  2368,   516,   202,  1727,   409,   471,   516,
     451,    57,   406,   623,   313,   456,   336,   493,    64,   216,
     217,  2262,   516,   633,   154,   755,   493,   516,   638,   478,
     410,  1687,   762,   763,   764,  1686,   341,   461,   396,   966,
    2308,   771,   772,   773,   774,  1454,   776,   456,   516,   321,
     494,   693,   780,    57,   784,   755,   786,   787,  2740,   701,
      64,   511,   515,   705,   458,  1786,   796,   797,   798,   799,
     800,   771,   772,   773,  1795,   507,  1090,  1798,   753,   472,
     424,   429,   509,   684,   784,   215,   728,   472,   466,   468,
     755,   540,   516,   823,   473,   517,   478,   762,   763,   764,
     742,   461,     6,   461,   461,   554,   771,   772,   773,   774,
       9,   776,   509,   243,     6,   857,   516,   513,   509,   784,
     452,   786,   787,   823,   852,   515,   516,  1194,   729,   259,
     463,   796,   797,   798,   799,   800,   811,   586,  1183,   269,
    1155,   474,  1180,   516,   274,   755,   516,  2084,   516,   516,
     516,   348,   762,   763,   764,     6,   516,   516,   823,     6,
     987,   771,   772,   773,   774,   406,   776,  2511,   515,   844,
     780,   470,   939,  1183,   784,   495,   786,   787,   522,   516,
    2448,     6,   475,   406,   914,   917,   796,   797,   798,   799,
     800,   463,   920,   335,  1132,   515,   645,  1024,   900,   648,
     828,   271,   474,   373,   653,  1734,  1896,   361,  1135,   939,
     917,   516,   472,   823,   516,   259,    34,   458,  1135,   478,
     124,  1235,   515,   406,   354,   271,  2591,   468,   461,   931,
     255,   406,   473,  1558,   365,   458,    32,   755,  1065,  1108,
     365,   906,   852,   406,   762,   763,   764,   922,   247,   914,
    2335,   958,   383,   771,   772,   773,   274,   985,   383,  1607,
     406,   335,  1276,   235,   461,   930,   784,   271,  2506,   787,
    1799,   946,  1801,  2100,   939,   458,   446,   347,   796,   797,
     798,   799,   800,   458,     9,   950,  1285,  1286,  1287,  1288,
    1289,  1290,  1291,  1292,   424,   458,   906,   972,  1544,   406,
       8,   347,    33,   205,   914,   823,   255,   917,  1479,  1838,
     920,   215,   458,   160,    58,   980,   209,   210,  1643,   516,
    2506,  2042,   313,   215,   259,   990,   177,   259,   970,    37,
     461,   780,     6,    62,   404,    65,   461,    67,   162,   409,
     470,   259,   166,   347,   123,   215,  1875,  1876,   958,   301,
     259,   458,   259,   160,   265,   259,   249,   250,   404,   203,
    1726,    90,    91,   409,   215,   269,  2260,   259,   215,   173,
    1045,  1013,   397,   515,  1104,   985,   180,   269,   509,   290,
     990,    30,   191,  1537,   509,  1539,   516,   259,   232,   259,
     215,   290,   522,   274,   843,   362,   914,   247,  2737,   269,
     404,  1076,   851,   852,  1104,   409,    27,     9,   259,  1137,
     333,  1280,   259,    57,   365,   461,   259,  2756,   269,   418,
      64,  2248,   269,   461,  1066,  1090,   170,   418,   171,  1583,
    1796,  1797,  1074,  2100,   259,  2091,   837,   168,   456,  1104,
     889,   515,   516,  1150,   269,  1110,   516,  2506,   397,   260,
     354,  1153,  2690,  2532,  2590,  1056,  1057,   461,   357,   108,
       0,   862,   354,   259,   202,  2506,   284,   285,   286,   461,
     516,   920,   516,  1540,  2368,   386,     9,   302,   522,   128,
    1090,   383,   226,   191,   354,   228,   293,  1641,   513,   461,
     215,   298,    38,   236,  1104,   116,   487,   265,  1823,   466,
      46,   902,   460,   354,  2690,  2254,   235,   354,  1183,   215,
    2589,   469,  1244,   962,    32,  2651,   515,    50,   167,   471,
     424,  1163,   290,  1133,   973,   255,   927,  1137,   977,   354,
     219,   220,   424,   351,   259,   414,   985,  1244,  1245,   270,
    1150,   215,   191,  1819,   269,  1559,  2749,  2683,  2684,   430,
     239,   432,   456,   259,   424,  2691,  2759,   206,   509,  2695,
    2696,   370,  1489,   269,   456,   245,   470,   302,   418,  1396,
    1235,  1236,   465,   424,   467,  1250,   265,   424,   470,   322,
     265,   516,  1192,  2239,   516,   259,  1104,   259,  2724,   493,
     273,   395,   515,   111,   419,   269,   364,   326,   516,   424,
     470,   290,   274,  1268,   515,   516,   336,   516,   487,   516,
     348,  1276,   516,   215,  1483,   462,  1654,  2753,   522,   470,
    2699,   162,  1250,   470,   516,  1235,  1236,   271,  1303,   354,
     522,  2690,   443,  1647,  1244,  1245,  1246,  1312,  1313,  1304,
     259,  1475,   219,   259,   516,   470,  1311,  1312,   354,  2690,
    2729,   334,   522,   123,   326,   462,   201,   259,   476,   477,
    2669,     9,   239,   481,   515,   516,  1276,   269,   214,   516,
     428,   522,   456,   516,   432,   522,   216,   217,   221,   483,
     354,  1323,   215,  1325,   419,   259,  1328,  1329,   265,  1331,
     492,   516,  2322,   311,   505,  1305,   130,   522,   347,   424,
     246,  2230,  2231,   347,   508,   516,   510,   392,  2462,   511,
      58,   391,   172,   290,   247,   248,   460,   485,   424,   464,
     221,   414,   268,   507,   468,   469,   259,   345,  1495,   473,
     349,  2552,   461,  1463,  1464,  2744,   269,  2491,   354,   154,
    1470,   259,  1472,   202,  1345,   470,   206,   515,   366,  1479,
     424,   292,   354,  2574,   179,  2385,  2386,   216,   217,   414,
     404,   223,  1492,  1463,  1464,   409,  1167,  1168,   171,   288,
    1470,   516,  1472,   516,   414,   349,   319,   323,   394,   172,
       9,  1423,  1383,   328,   329,   468,  1428,   359,     1,   361,
     473,  1558,  1492,   255,   487,   206,   470,   522,  1463,  1464,
     234,  1443,   347,  1545,   277,  1470,   618,  1472,   424,  1537,
     311,  1539,  1213,   206,  1479,   240,   522,   461,   243,  2430,
     339,   354,   424,   512,   235,   228,   515,  1492,  2439,    58,
    1495,  1769,   487,   236,     9,  1284,     8,    12,  1665,   385,
      15,    16,   516,   103,   516,  1672,   215,   487,   522,    62,
     522,  1789,   158,  1463,  1464,  1583,  2486,   402,   670,  2613,
    1470,   295,  1472,   359,  1606,    37,   300,   215,   470,  1479,
     265,  1272,  2173,  2174,  1581,  2596,  1643,    90,    91,  1521,
    2601,  1491,  1492,   265,  1549,  1527,   359,  2762,   361,   348,
     259,   424,  1534,  1558,  1559,   290,   244,   359,  1725,  1726,
     269,    55,  1567,  1633,  2515,   367,   522,    85,   290,  1584,
      28,   259,  2523,  1641,   516,  2173,  2174,   461,     8,   322,
     522,   269,  1597,   198,   420,   421,  2582,  1537,   234,  1539,
    1595,   163,  1574,  1633,   166,   512,    90,   470,   484,   461,
    2661,   762,   763,   764,  2665,  1463,  1464,    37,   293,  1559,
     179,  2676,  1470,   107,  1472,   235,  1584,  1567,   461,     0,
    1625,   350,     1,   117,   163,  2690,   787,   166,  1633,  1796,
    1797,  1581,   317,  1583,  1492,  2276,  2742,  2743,  1643,   259,
     123,   370,  1647,   464,   259,   354,   215,  1725,  1726,   522,
     296,  1729,   458,   206,   300,  2343,   468,  2763,   402,   341,
    1834,   473,   468,   118,   119,   120,   354,   473,    47,   127,
    1411,   353,  1413,   251,   252,   244,  2782,   319,  2276,  1661,
     229,   323,   235,  1633,    63,  1667,   143,   179,   330,   331,
     259,  1641,   312,  1675,   314,   139,   338,  1647,   190,   341,
     269,    23,    24,  2809,   346,   461,   348,  1992,   350,   351,
     352,   353,   190,  1513,   190,   424,  1823,   190,  1796,  1797,
     459,   213,   463,  1932,   103,   297,    11,   299,   370,   468,
     798,   799,   800,   474,   473,   213,   424,   213,   459,  1680,
     213,  1723,  1724,  1484,  1485,   796,   797,   468,   463,   123,
      12,   243,   473,    15,    16,   402,     1,   215,   139,   474,
    1927,   470,   143,   772,   773,   280,   281,   409,   458,   411,
    1775,    11,   414,   326,    59,  1633,   402,   461,   468,   458,
    2404,   175,   470,   473,   461,   354,   241,  2411,  2412,   468,
     478,   306,   307,   172,   473,    40,    41,    42,    43,    44,
     255,   259,   312,   461,   314,    11,  1547,  1596,   425,   309,
    1551,   269,    97,   522,    99,   359,   101,   361,  1823,    59,
     297,   202,   299,    26,   109,   283,   423,   206,   516,   461,
     461,    76,    77,  2000,   522,   216,   217,   255,     6,   257,
    2791,     9,   496,   497,   498,   499,  1635,  1636,   255,  1799,
     257,  1801,   359,    59,   361,   424,   235,    97,  1599,    99,
    1967,   101,   504,   242,   255,   461,   257,    47,    66,   109,
      68,    54,    55,   461,   253,   496,   497,   498,   499,   259,
     165,   523,   489,    63,   491,   340,   341,   342,  1838,   343,
     461,    97,  1874,    99,  2172,   101,   354,   461,   461,   383,
     355,   470,   407,   109,   518,   516,   516,    90,   461,   478,
     496,   497,   498,   499,   431,    83,   845,   846,   847,   848,
     562,   235,   413,   103,   107,   165,  1876,  1903,  1904,  1905,
    1906,   573,   100,   413,   117,    58,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   377,   221,   516,   461,   516,
     259,   516,  2041,   522,   456,   516,   402,   264,   461,   165,
    1942,   409,   461,   344,  2173,  2174,   424,   348,   418,   427,
     428,    64,    60,    69,   516,   260,   461,   619,   516,   461,
     359,   360,   131,   198,   472,   153,  2001,   311,   132,   457,
    1111,   633,   447,  1114,   170,   374,   638,   376,   472,  1120,
     472,   472,   472,  1124,  1986,  2179,  2074,  1989,  2076,  1130,
    2177,   472,   472,   472,  1996,   133,  1805,  2184,   280,   281,
     260,   306,  1763,  1764,  1765,   215,   194,   195,   196,   472,
     472,   472,   472,   456,   134,   203,  2041,   393,   135,   359,
     507,  2023,   136,   138,   306,   307,   137,   215,   102,   451,
     472,   456,   141,  2741,   260,   235,  2024,  2025,  2063,  2166,
      49,   412,   242,   455,   522,   707,   306,  2276,   452,   259,
     455,   449,   144,   253,   198,   145,   147,   146,   511,   269,
     248,   166,   461,   274,    31,   148,   254,    49,   256,   149,
     335,   259,   150,   261,   262,   263,   198,  2264,   151,   267,
     306,   269,  2509,   113,   152,   350,   274,   461,   750,   402,
    2115,  1852,   258,   398,   461,  1856,  1857,  2099,  2123,   516,
     516,  2126,   317,   409,  2074,   259,  2076,   516,  1869,  1870,
     509,  2305,   461,   108,   259,   478,   347,   516,   780,   259,
     308,    73,   418,   326,  1885,  1886,   317,   330,   331,   110,
    2324,  2325,   456,   472,  2328,   516,   441,     4,   398,   327,
     205,  2268,   226,   516,   354,   383,  2333,   516,   346,   259,
     275,   299,    19,   166,   513,   513,   461,   129,   177,   359,
     360,   373,    29,   456,   515,   169,   354,   231,   130,   456,
     456,   374,   398,    49,   374,   198,   376,   231,   461,   374,
     402,   441,   461,   461,  2371,    86,   389,   390,    86,   464,
     852,    23,   461,   275,   452,  2197,   384,    64,   259,    24,
      25,   461,  2204,  2205,  2206,  2207,  2400,   408,  2395,   235,
    2212,   516,   201,   516,   424,   441,   461,   521,   520,  2244,
     240,   279,   431,  2363,   458,   304,   458,   456,   458,  2217,
     458,   458,  2257,   458,   458,  2237,   424,   458,   900,   456,
     387,    66,   370,    68,   300,    70,   234,   205,   436,   437,
    2238,   516,  2379,    17,   205,   917,   516,   314,   920,   452,
     470,   461,   140,   129,   456,    49,   373,   125,  2462,   931,
     205,   142,  2307,     8,   198,   463,   130,  2086,  2087,   104,
     105,   106,   470,   312,   205,   431,   474,  2481,  2097,   461,
     516,   456,   480,   513,   513,     9,   958,  2491,  2492,     7,
     461,   402,   397,    22,    87,   275,   516,   191,   311,   509,
     447,   333,   522,   501,  2316,    47,    57,   304,   506,   418,
       8,   419,   302,   985,   205,  2519,   514,  2329,   516,   154,
     509,   156,   509,    49,   522,   240,   319,   409,   163,   315,
    2342,   166,   321,    30,   335,   295,   265,   318,    35,   114,
     446,    38,   402,  2341,   206,   461,   223,   516,    45,    46,
     516,   511,   259,   232,    26,   205,   205,  2554,   461,   299,
    1471,   369,  1473,   369,   103,  1476,  1477,  1478,    65,   466,
      67,  1482,     8,    37,    49,  2579,  2513,   387,   255,  2615,
     265,   240,  1493,  1494,   301,   471,    96,   221,   265,   503,
     296,   158,   461,   456,   235,    92,  2704,   391,   410,   191,
    1072,   513,   257,   516,    57,   431,    39,   265,   259,  2613,
    2547,    49,   111,  2232,   344,   461,    53,   265,   265,   265,
     255,   456,   257,    26,   522,   452,   410,   336,    17,   408,
     418,   110,   344,  2468,   492,   356,    45,   198,   455,   274,
     259,  2645,   427,   320,   347,   452,   461,  2547,   325,  2461,
     461,   108,   461,   115,   516,   190,    65,    66,    67,    68,
       7,  1133,   375,   426,   161,  1137,  2585,   226,   411,    30,
     515,   223,   115,  2485,   461,   440,   513,   344,  1150,   311,
     463,  1153,   359,   461,   314,   456,   461,   206,   178,    57,
     367,   206,   516,  2505,  2506,   192,   259,   213,   212,   224,
     120,   318,   379,   198,  2701,    49,   433,     7,   326,   513,
      60,    35,  2547,    62,    57,    53,   734,   214,  2530,  2531,
    1192,    52,   396,  2642,   205,  2560,  1391,   220,  2563,  2541,
    1041,  1059,   409,  1372,  2546,   412,   717,  2216,  2465,  2203,
    2400,  2211,   688,   420,  2217,  2394,   674,  2196,  2506,  2165,
    2585,  2748,  2789,  2483,   431,  2752,  2480,  2507,   255,  2611,
    2595,  2776,  2268,  2801,  2753,  2577,   242,  2545,  2368,  2545,
    2643,   268,  1244,  1245,  1246,  1542,  2588,  2643,   275,    67,
    1076,  1434,  1144,   809,   461,   504,  1540,   464,  1768,  1767,
     537,  2603,   857,  2605,   811,  1183,   860,  2609,  1205,  1544,
     558,  2636,   903,   212,  1815,  1567,   303,  2642,   910,  1233,
    1828,  1827,   921,  2810,  1584,  1595,  1313,  1263,   453,   595,
     951,   353,  1609,  1293,  1636,  1312,   323,   601,   631,   238,
    2628,   633,   648,  1305,  1879,  2501,  1000,  1312,  1488,   336,
    1412,   840,  2742,  2743,  1410,   839,   255,  1884,   257,  1487,
    1873,  2247,  2100,  1872,  1890,  2667,  2668,  1889,  1652,  1975,
    1629,  1629,  1171,  2763,  1629,   889,  1629,  1172,   619,   504,
    2682,   805,  1028,  2708,  1280,  2687,  2688,   719,   514,   288,
    1381,   516,  2782,  1376,   473,  2170,  2354,  2209,   385,  2547,
    1825,  2703,  2728,  2455,  2706,  2707,  1053,  1300,  1556,  1586,
      35,   310,   399,    38,  2619,  1684,  1327,  2742,  2743,  2809,
      45,    46,  2744,    -1,    -1,  2450,    -1,    -1,    -1,    -1,
      -1,   418,    -1,   332,    -1,    -1,    -1,  2739,  2763,   338,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2775,  2776,    -1,    -1,    -1,    -1,    -1,  2782,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    -1,  2742,  2743,    -1,    -1,    -1,    -1,    -1,    -1,
    2805,    -1,    -1,    -1,  2809,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2763,    -1,    -1,    -1,   484,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   495,    -1,
      -1,    -1,  2782,  1475,   413,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   422,    -1,    -1,    -1,    -1,   515,  1491,
      -1,    -1,    -1,    -1,    -1,    -1,   161,    -1,    -1,  2809,
     439,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   461,    -1,  2742,  2743,    -1,   192,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1537,    -1,  1539,    -1,    -1,
      -1,    -1,    -1,   482,    -1,  2763,    -1,    -1,    -1,   214,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   502,  2782,    -1,    -1,    -1,    -1,    -1,
     509,    -1,   511,    -1,    -1,    -1,    -1,    -1,    -1,  1581,
      -1,  1583,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2809,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   268,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,    -1,     5,    -1,    -1,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   303,  1641,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1654,    -1,    -1,    -1,    -1,    -1,   323,    -1,
      -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,  1671,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1717,  1718,  1719,  1720,  1721,
     385,    -1,   112,  1725,  1726,  1727,    -1,  1729,    -1,    -1,
     120,    -1,   122,    -1,   399,    -1,    -1,    -1,    -1,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,    -1,
     140,   141,   142,   418,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,    -1,    -1,    -1,    -1,   158,    -1,
      -1,    -1,    -1,   163,   164,    -1,   166,    -1,    -1,   169,
      -1,    -1,    -1,    -1,  1786,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1795,  1796,  1797,  1798,  1799,    -1,  1801,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,    -1,    -1,
      -1,    -1,    -1,    -1,   204,    -1,    -1,   207,   208,   484,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   218,    83,
      -1,    -1,  1834,    -1,    -1,   225,  1838,   227,    -1,    -1,
     230,    -1,    -1,    -1,   234,    -1,   100,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1876,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   272,    -1,    -1,    -1,   276,    -1,   278,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   288,    -1,
      -1,    -1,    -1,    -1,    -1,   295,   296,   297,    -1,   299,
     300,   301,   302,    -1,    -1,     1,    -1,     3,    -1,     5,
      -1,    -1,    -1,    -1,    10,    -1,   316,    -1,    -1,    -1,
      -1,  1933,    18,    -1,    -1,    -1,    -1,    -1,    -1,   329,
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
    2042,    -1,    -1,    -1,   434,   435,    -1,    -1,   438,    -1,
     440,    -1,    -1,    -1,   308,    -1,    -1,    -1,   448,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,
      -1,   461,  2074,    -1,  2076,    -1,    -1,    -1,   164,    -1,
      -1,   471,    -1,   169,    -1,    -1,    -1,    -1,    -1,   479,
      -1,    -1,  2094,    -1,    -1,    -1,   486,    -1,    -1,    -1,
     354,   491,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   197,    -1,    -1,    -1,    -1,    -1,    -1,   204,    -1,
      -1,   207,   208,   513,    -1,    -1,    -1,    -1,    -1,   519,
     384,    -1,   218,    83,    -1,    -1,    -1,    -1,    -1,   225,
      -1,   227,    -1,    -1,   230,    -1,    -1,    -1,    -1,    -1,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     424,    -1,    -1,    -1,    -1,    -1,    -1,  2179,    -1,    -1,
      -1,    -1,   436,   437,    -1,    -1,   272,    -1,    -1,    -1,
     276,    -1,   278,  2195,  2196,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   288,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   470,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   480,    -1,    -1,    -1,
     316,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   329,   194,   195,   196,   501,    -1,    -1,
      -1,    -1,   506,   203,    -1,    -1,    -1,    -1,    -1,    -1,
     514,    -1,   516,    -1,  2266,   215,    -1,    -1,   522,    -1,
      -1,   357,   358,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    -1,   368,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,   381,   382,    -1,    -1,    -1,
      -1,    -1,   388,  2305,    -1,    -1,   392,    -1,    -1,   259,
      -1,   261,   262,   263,    -1,   401,    -1,   267,    -1,   269,
    2322,    -1,  2324,  2325,    -1,   411,  2328,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   420,    -1,    -1,    -1,  2340,    -1,
      -1,    -1,    -1,   429,    -1,    -1,    -1,    -1,   434,   435,
      -1,    -1,   438,    -1,   440,    -1,    -1,    -1,   308,    -1,
      -1,    -1,   448,    -1,     1,    -1,     3,    -1,     5,    -1,
      -1,    -1,    -1,    10,    -1,   461,    -1,    -1,    -1,    -1,
      -1,    18,    -1,  2385,  2386,    -1,    -1,    -1,   194,   195,
     196,    -1,    -1,   479,    -1,    -1,    -1,   203,  2400,    -1,
     486,  2403,  2404,    -1,   354,   491,    -1,    -1,    -1,  2411,
    2412,  2413,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2425,    61,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   519,   384,    72,    -1,    -1,    75,    -1,
      -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,   259,    -1,   261,   262,   263,    -1,    -1,
    2462,   267,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2474,    -1,   424,   112,    -1,    -1,    -1,  2481,
      -1,    -1,    -1,   120,  2486,   122,   436,   437,    -1,  2491,
    2492,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2501,
      -1,    -1,   308,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   153,  2519,    -1,    -1,
     470,    -1,    -1,    -1,    -1,  2527,    -1,   164,    -1,    -1,
     480,    -1,   169,    -1,    -1,   193,   194,   195,   196,    -1,
      -1,    -1,    -1,    -1,    -1,   203,     1,    -1,     3,    -1,
       5,   501,    -1,    -1,    -1,    10,   506,    -1,    -1,    -1,
     197,    -1,    -1,    18,   514,    -1,   516,   204,    -1,    -1,
     207,   208,   522,    -1,    -1,    -1,    -1,  2579,   384,    -1,
      -1,   218,    -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,
     227,    -1,    -1,   230,  2596,    -1,    51,    52,    -1,  2601,
      -1,   259,    -1,   261,   262,   263,    61,    -1,    -1,   267,
      -1,  2613,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     436,   437,    -1,    -1,    89,   272,    -1,    -1,    -1,   276,
      -1,   278,    -1,  2645,    -1,    -1,    -1,    -1,    -1,    -1,
     308,   288,    -1,    -1,    -1,    -1,    -1,   112,    -1,  2661,
      -1,    -1,    -1,  2665,    -1,   120,    -1,   122,    -1,    -1,
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
       0,   526,   527,     0,   216,   217,   528,   529,   530,   531,
     532,   533,   534,   540,   123,   123,   530,   154,   539,   551,
     552,   202,   348,   541,   543,   461,   461,   123,   103,   666,
     668,    85,   553,   554,   461,   461,   539,   539,   461,   123,
     344,   823,   826,   464,   669,   402,   229,   617,   618,   309,
     423,   555,   556,   560,   259,   349,   544,   544,   143,   535,
     536,   537,   139,   538,   461,   123,   849,   850,   402,   670,
     461,   402,   175,   619,   461,   461,   425,   578,   560,   556,
      26,   546,   546,   259,   349,   545,   537,   545,    56,   507,
     827,     1,     3,     5,    10,    18,    51,    52,    61,    72,
      75,    89,   112,   120,   122,   153,   164,   169,   197,   204,
     207,   208,   218,   225,   227,   230,   272,   276,   278,   288,
     316,   329,   357,   358,   368,   381,   382,   388,   392,   401,
     411,   420,   429,   434,   435,   438,   440,   448,   461,   479,
     486,   491,   519,   851,   852,   868,   873,   877,   882,   900,
     903,   907,   911,   912,   913,   918,   932,   936,   939,   953,
     957,   960,   963,   967,   968,   972,   982,   985,  1003,  1005,
    1008,  1012,  1018,  1030,  1038,  1039,  1042,  1043,  1047,  1052,
    1053,  1061,  1077,  1087,  1096,  1101,  1108,  1112,  1114,  1117,
    1120,  1123,  1150,   851,   461,   174,   400,   667,   671,   672,
     674,   461,   461,   621,   561,   557,   461,    11,    59,    97,
      99,   101,   109,   165,   260,   306,   398,   441,   516,   579,
     580,   581,   582,   583,   589,   598,   600,   605,   608,   609,
     611,   612,   613,   614,   615,   616,   259,   461,   542,   461,
     461,   829,   828,   383,   835,     3,     5,    10,    18,    51,
      52,    61,    72,    75,    89,   112,   120,   122,   129,   131,
     132,   133,   134,   135,   136,   137,   138,   140,   141,   142,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     164,   169,   197,   204,   207,   208,   218,   225,   227,   230,
     272,   276,   278,   288,   316,   329,   357,   368,   382,   388,
     392,   401,   411,   420,   429,   434,   435,   438,   440,   448,
     461,   479,   486,   491,   519,  1297,   853,   869,   874,   878,
     883,   901,   904,   908,   914,   919,   933,   937,   940,   954,
     958,   961,   964,   205,   383,   892,   956,   969,   973,   983,
     986,  1004,  1006,  1009,   407,  1013,  1019,  1031,  1040,  1044,
    1048,  1054,  1062,  1078,  1088,   259,   354,   394,   424,   522,
    1100,  1102,  1109,   343,  1113,  1115,   838,  1118,  1121,  1124,
    1151,   518,   702,   704,   705,     1,   516,  1222,   237,   405,
     620,   622,    57,    64,   271,   347,   404,   409,   516,   562,
     563,   564,   565,   566,   567,   568,   570,  1306,  1368,   558,
     570,     1,   516,  1236,  1236,   431,   413,  1339,   235,  1320,
    1320,  1320,  1236,   413,  1320,    58,  1307,   584,   377,   571,
     581,   461,   582,   221,   599,   547,  1320,    49,   830,   831,
     832,  1305,   830,   313,   516,   461,   313,   516,   854,   856,
    1259,  1260,  1263,     6,     9,    83,    95,   100,   194,   195,
     196,   203,   215,   248,   254,   256,   259,   261,   262,   263,
     267,   269,   274,   308,   327,   354,   384,   424,   436,   437,
     470,   480,   501,   506,   514,   522,   870,  1216,  1241,  1242,
    1259,  1270,  1271,  1272,  1273,  1274,  1275,  1276,   248,   468,
     472,   473,   875,  1211,  1212,  1213,  1214,  1215,  1216,  1245,
    1259,  1271,  1273,   259,   879,   880,  1227,  1228,  1229,  1263,
     274,   430,   432,   884,   885,   259,   902,  1250,  1259,   905,
    1222,     6,   909,  1217,  1218,  1239,  1261,  1262,  1263,  1271,
     464,   915,  1222,   259,   313,   920,   921,   922,   923,   925,
    1241,  1250,  1259,   934,  1242,   259,   938,   463,   474,   941,
     942,   943,  1199,  1200,  1201,   201,   328,   329,   347,   402,
     955,   959,  1238,  1239,   962,  1263,   456,   965,  1348,  1242,
    1198,  1199,   974,  1238,   516,   984,  1223,   987,   988,  1259,
    1270,  1273,  1079,  1257,  1258,  1263,    95,  1007,  1242,  1010,
    1242,   171,   228,   236,   322,  1014,  1015,   193,   259,   515,
    1020,  1024,  1025,  1026,  1227,  1251,  1259,  1263,  1273,  1352,
    1032,  1222,  1041,  1219,  1263,  1045,  1222,  1049,  1219,     9,
    1055,  1220,  1263,   154,   243,   274,  1063,  1066,  1067,  1070,
    1071,  1072,  1073,  1074,  1075,  1076,  1224,  1225,  1238,  1256,
    1258,  1263,  1079,  1089,  1222,  1097,   113,  1103,  1104,  1105,
    1242,    95,  1110,  1241,  1116,  1223,   461,   516,   839,   840,
     843,   844,   849,  1119,  1259,  1122,  1222,  1125,  1259,  1152,
    1219,   402,   264,   758,   706,   707,   709,   719,  1284,   461,
     673,   461,   293,   317,  1292,   277,   396,   656,   657,   658,
     659,   661,   409,   418,    64,  1320,   461,   564,   461,   516,
     563,    60,  1320,   559,  1352,   590,  1320,  1320,  1320,  1231,
    1263,    69,  1231,  1320,  1320,  1231,   516,   601,   602,   603,
    1237,   259,   312,   314,   585,   587,   588,  1064,  1266,  1320,
     461,   461,   516,   461,    73,   172,   362,   466,   548,   549,
     550,   831,   418,   487,   833,   365,   509,   824,   221,   311,
    1358,   131,   867,   855,   198,   472,  1264,  1265,   311,  1330,
    1272,  1259,   472,   472,   472,  1278,  1260,  1271,  1273,  1358,
    1358,   472,   472,   472,   472,  1358,   472,  1278,   132,   872,
     456,   871,  1242,   457,   472,  1277,   472,   472,  1260,  1271,
    1273,  1215,  1259,  1211,  1215,    58,   468,   473,   460,   469,
     170,   226,  1287,   880,   456,  1358,   133,   899,   259,  1251,
    1250,  1222,   364,   485,   906,  1352,  1364,  1330,   134,   910,
     160,   462,  1218,  1356,   393,  1293,  1264,  1265,   916,  1222,
     135,   917,   359,  1336,   136,   931,   166,   299,  1165,  1167,
    1169,   923,  1240,  1241,   924,   496,   497,   498,   499,   137,
     935,    49,   231,   507,   886,   138,   952,    17,   513,   944,
     945,   946,   948,    12,    13,    14,    20,   160,   170,   209,
     210,   249,   250,   287,   293,   298,   306,   313,   318,   337,
     458,   460,   462,   465,   467,   468,   469,   472,   473,  1202,
    1203,  1204,  1205,  1206,  1207,  1208,  1242,   102,   956,  1239,
    1226,   451,  1346,   975,  1352,  1223,    93,   373,   446,   989,
     990,   992,   993,  1081,   472,  1264,  1242,   456,   141,  1011,
      49,  1015,   412,  1016,  1025,   142,   461,  1021,  1023,   492,
     511,   452,   455,   449,   144,  1037,   288,   339,  1290,   198,
    1153,   145,  1046,  1336,   146,  1051,  1153,  1220,   147,  1060,
     511,  1056,  1248,  1259,  1271,   166,  1073,  1075,  1238,   456,
    1225,   124,   456,   493,  1065,    31,  1264,   148,  1095,   179,
     240,   243,  1091,   892,  1098,  1242,  1352,  1305,   149,  1107,
     231,  1105,  1259,   150,  1111,   198,  1223,   402,   461,   461,
     198,   359,   361,  1337,   151,  1134,   113,  1126,   152,  1157,
    1153,   461,   402,   258,   760,   707,   461,     1,   177,   516,
     710,   711,   516,   675,   317,  1236,   662,   359,   420,   421,
     660,     1,   461,   658,  1320,   409,  1266,   461,  1320,   516,
    1232,   461,   108,  1320,   215,   259,   269,   354,   424,   470,
     522,   606,   607,  1269,  1231,   259,   259,   478,   602,    22,
     235,  1237,  1321,  1064,   235,   431,  1332,  1320,    97,  1236,
     572,   550,   347,  1335,    73,  1320,   418,   317,   834,   110,
     836,  1263,    30,   199,   275,   857,   858,   859,   861,   864,
    1303,  1352,    24,    25,    66,    68,    70,   104,   105,   106,
     154,   156,   163,   166,   255,   257,   453,   504,   516,   860,
    1225,  1355,  1209,  1211,   472,  1265,   153,   347,  1246,  1260,
     456,  1209,  1211,  1282,  1209,  1283,   458,  1209,   516,   516,
    1211,  1281,  1281,  1281,  1244,  1259,  1271,  1273,  1280,   516,
    1244,  1279,     6,  1217,  1242,  1263,  1271,   205,  1272,  1211,
    1244,  1209,   458,   226,  1288,  1212,  1212,  1213,  1213,  1213,
     383,   876,   346,   881,  1229,   886,   906,   265,   290,   191,
    1313,  1260,  1211,   275,  1294,  1265,  1222,   234,   300,  1191,
    1192,  1194,  1196,   846,   847,   846,  1168,  1169,  1166,  1167,
     495,   861,   864,   926,   927,   928,  1352,  1165,  1165,  1165,
    1165,  1242,  1217,  1242,   887,   943,    21,   463,   474,   949,
     950,  1200,   513,   946,   947,   513,   846,  1348,   235,  1203,
     115,   966,  1227,   129,   846,   970,     9,    12,    15,    16,
     280,   281,   306,   307,   976,   980,   177,  1248,     9,    58,
     179,   244,   478,   996,   997,   998,   991,   992,   125,   314,
     515,  1083,  1331,  1367,   456,  1238,  1217,  1242,  1016,  1352,
    1221,  1222,   846,   169,  1027,  1198,  1028,  1029,  1259,  1227,
       8,    37,  1155,  1336,  1255,  1259,  1270,  1273,   231,  1033,
    1050,  1352,   130,  1057,  1259,  1057,   456,   456,   456,  1064,
     153,   463,   474,  1242,    49,    38,    46,   214,   246,   268,
     323,   385,   484,  1068,  1069,  1320,  1090,  1352,  1242,   162,
     292,   418,  1242,  1259,   198,  1217,  1242,   845,  1266,  1248,
    1305,   231,  1129,  1154,  1155,   703,   461,   402,   374,   762,
     461,   461,   708,    86,    47,    63,   103,   242,   253,   359,
     360,   374,   376,   461,   509,   676,   677,   679,   683,   684,
     687,   688,   694,   697,   699,   700,  1320,   623,   464,  1311,
      23,  1301,   461,  1266,   260,   443,   505,   569,  1232,   275,
      28,   127,   215,   259,   269,   283,   354,   424,   427,   428,
     522,   591,   592,   593,   596,   607,   452,   610,  1352,   408,
     259,   604,  1267,  1332,   235,  1236,  1236,   586,   587,   201,
     573,   574,   575,    32,   111,  1266,  1320,   516,   461,   825,
     522,  1252,  1256,  1266,  1320,   163,   166,   297,   299,  1158,
    1160,  1161,  1163,  1164,   859,    65,    67,   255,   336,   862,
     863,  1354,    32,    35,    38,    46,    92,   111,   192,   200,
     214,   246,   266,   268,   290,   291,   323,   352,   353,   378,
     385,   399,   403,   418,   445,   454,   484,   494,   500,   865,
     866,  1158,   521,   520,  1248,  1158,   240,   431,   304,   279,
      71,   406,   458,  1210,   459,  1211,   259,  1247,  1260,  1259,
    1210,   458,  1210,   458,   458,  1210,   458,   458,   458,  1210,
     458,  1210,   458,  1330,   302,   419,  1170,  1172,  1174,  1264,
    1265,  1217,   459,   458,   458,   456,  1289,   876,  1239,   456,
    1227,   891,   892,   387,   370,  1170,  1320,   846,   846,  1195,
    1196,  1193,  1194,   848,    97,    98,   341,   516,   929,  1225,
     927,    35,    38,    45,    46,    92,   161,   192,   214,   268,
     303,   323,   385,   399,   418,   484,   930,   205,  1170,   205,
     888,   889,   890,  1305,    17,   452,   951,   321,   949,  1331,
     846,   129,   140,   971,  1348,   373,   977,  1348,   456,    49,
     997,   999,  1248,     9,    58,   244,   478,   994,   995,  1248,
     125,    64,   409,  1084,  1353,    27,   116,   743,   221,   319,
    1316,  1238,  1170,   205,  1221,     9,   290,   357,   655,   386,
    1017,  1222,  1352,   142,  1022,     8,   198,  1033,  1259,   130,
    1180,  1183,  1191,   265,   290,   846,   513,   513,  1058,  1059,
    1248,   312,  1247,  1242,  1064,  1064,  1064,  1064,  1064,  1064,
    1064,  1064,  1069,   293,   298,  1092,  1093,  1094,  1204,  1291,
    1191,   247,   418,  1366,   431,  1344,  1344,  1106,  1352,  1259,
    1170,   205,   461,   456,     9,  1127,  1128,  1285,  1130,  1259,
    1106,  1130,  1050,     7,  1298,   704,   759,   461,   402,   397,
     807,   721,   712,  1320,    87,  1308,  1320,   359,   361,  1363,
    1363,  1320,  1308,  1320,   275,  1327,  1320,    22,  1300,   311,
     701,  1236,   172,   206,   624,   447,  1345,  1313,    58,   517,
    1362,   593,    17,   452,  1269,   333,  1267,  1236,     9,   203,
     516,   577,     1,   461,   575,    32,  1266,   837,   838,    47,
    1162,  1163,   846,  1159,  1160,   846,   304,  1328,  1328,  1328,
    1320,  1320,   866,    57,   418,   124,   493,  1320,     8,  1299,
    1158,  1211,   458,  1211,  1293,   444,  1277,   444,  1277,  1231,
    1277,  1277,  1277,  1244,   244,   478,  1277,  1260,   846,   846,
    1173,  1174,  1171,  1172,  1265,  1170,   458,  1211,  1277,  1277,
    1249,  1259,  1270,   166,   299,   471,   894,   896,   898,     6,
     231,   294,   313,   470,   893,  1319,    34,   284,   285,   286,
     351,   476,   477,   481,  1295,   849,  1320,   255,   397,   130,
     157,   159,   815,   816,  1310,  1320,   124,   493,  1320,  1217,
    1218,  1217,  1218,   889,   313,   833,    88,   365,   509,   950,
    1199,   846,  1259,   846,   509,   978,   979,   980,   981,  1346,
     509,  1249,  1248,    49,     8,    37,  1000,  1001,  1002,   995,
     191,  1000,   409,  1080,  1320,   240,  1322,   319,  1217,  1017,
     321,  1333,  1333,   315,   265,   290,  1029,  1242,   220,  1034,
    1352,   846,   295,  1184,  1185,   265,  1199,  1198,  1058,  1204,
    1259,  1205,  1206,  1207,  1208,  1211,  1099,  1242,  1099,   301,
     471,  1175,  1177,  1179,   335,  1293,  1217,   841,  1249,   318,
    1248,   114,  1131,   446,  1133,   158,   296,  1156,  1186,  1188,
    1190,  1192,   326,  1225,  1252,   704,   761,   461,   402,    21,
      36,    39,    40,    41,    42,    43,    44,    45,    74,    76,
      77,    78,    79,    80,    81,    82,   120,   181,   182,   183,
     184,   185,   188,   189,   222,   238,   280,   310,   324,   332,
     335,   350,   363,   371,   413,   415,   416,   417,   442,   488,
     489,   490,   502,   509,   722,   723,   724,   726,   727,   728,
     729,   730,   731,   732,   735,   747,   748,   749,   750,   751,
     756,   757,  1320,  1341,    26,   198,   720,  1302,   206,  1266,
     516,   638,  1320,  1300,   516,  1233,  1234,   313,   426,  1359,
     259,  1231,  1235,  1266,   511,  1320,   176,   216,   516,   685,
    1236,     4,    19,    29,   223,   255,   320,   325,   359,   367,
     379,   412,   420,   461,   464,   625,   626,   633,   635,   637,
     639,   640,   641,   642,   645,   646,   647,   648,   649,   651,
     652,   654,  1336,  1353,  1308,  1221,   594,   596,   259,   232,
      26,   576,   203,   232,   461,   838,  1252,  1252,  1252,  1252,
    1252,  1320,  1320,  1197,  1254,  1256,  1266,  1197,  1252,   259,
    1253,  1256,  1268,   458,  1170,   458,   846,   846,   846,   897,
     898,   895,   896,  1330,  1259,  1252,  1330,   255,   397,  1252,
    1197,  1197,  1252,  1170,   369,  1170,   369,  1242,   979,   103,
    1309,  1348,  1000,  1000,  1249,   466,  1318,  1318,  1002,  1001,
     228,   507,  1085,  1231,  1082,  1170,   387,    49,   265,   240,
    1035,   219,   239,   265,   290,   512,   846,   846,   846,   846,
     846,  1178,  1179,  1176,  1177,  1320,  1170,  1170,   503,   842,
    1135,  1128,   221,  1315,    96,  1132,  1315,  1175,   846,   846,
    1189,  1190,  1187,  1188,   255,   257,  1324,   704,   763,   461,
     247,   306,   414,   487,  1340,   487,  1340,   487,  1340,   487,
    1340,   487,  1340,   513,  1350,   391,  1338,   126,  1266,  1260,
    1263,   235,   245,   391,  1323,  1320,  1321,   172,   206,   244,
     478,   516,    50,   247,   248,   713,  1270,   456,   682,   191,
     698,  1234,   257,  1326,   456,  1307,  1315,   173,   180,   395,
     483,   508,   510,   695,   696,  1320,  1320,  1327,  1336,   456,
     507,  1349,   410,  1320,  1306,   114,  1322,  1322,   290,   653,
    1266,  1352,   431,   265,    39,  1304,  1320,   663,   664,  1222,
     595,   596,   259,   130,  1250,  1252,   255,   257,  1365,  1259,
    1218,  1218,    49,   111,  1000,  1242,  1242,   344,  1221,   205,
     322,  1086,  1263,  1242,  1320,  1036,  1181,  1183,  1185,  1191,
     265,   265,   265,  1259,  1136,   461,  1259,  1315,  1259,   764,
     808,   522,    53,   739,   456,   736,   452,   729,   753,   754,
    1270,    26,   725,   408,  1296,  1296,  1330,     1,    40,    41,
      42,    43,    44,   181,   182,   183,   184,   185,   186,   187,
     335,   350,   714,   715,   716,   717,   718,   730,   731,  1260,
     714,  1266,    58,   361,   678,  1230,  1231,   689,  1266,   418,
    1342,   259,   686,  1263,   686,  1320,  1322,   126,   172,   630,
     367,   646,  1320,  1320,  1320,  1320,  1301,   655,  1320,  1327,
     410,   638,   664,   336,   665,    17,   110,  1170,  1170,  1242,
    1320,  1221,   344,   492,  1259,  1184,  1182,  1183,    30,   128,
     167,   206,  1137,  1138,  1139,  1141,  1145,  1147,  1148,  1149,
    1303,  1313,  1259,   356,   765,   709,   719,   809,   810,   811,
    1315,   198,   737,  1266,   455,  1347,  1263,   752,   754,   452,
     259,  1306,   714,   461,  1231,    48,   475,   690,   691,   692,
     693,  1352,  1307,   198,   681,  1314,   126,   355,   410,   634,
    1320,   118,   119,   120,   241,   255,   340,   341,   342,   355,
     447,   627,   628,   629,  1235,   427,   650,  1231,  1231,  1231,
    1320,  1266,   596,   461,  1024,  1320,  1198,    37,  1299,   347,
     108,  1223,     1,   710,   811,   461,   516,  1266,   736,   115,
     738,   513,   755,  1351,  1270,  1235,  1235,   190,   682,  1266,
     650,   259,   632,  1263,   632,     7,   632,   632,   259,   631,
    1263,   422,   462,    33,   168,   270,   643,  1024,   375,   426,
    1343,   130,   429,  1146,  1331,   766,   461,   812,   461,   226,
     740,  1331,   741,   742,   411,   463,  1303,  1307,  1286,  1367,
    1311,  1320,  1230,   515,   644,   644,  1259,   162,   166,  1357,
       9,  1142,  1143,  1228,     1,   767,   813,   741,  1231,   223,
     744,   743,   456,  1320,  1235,   115,   680,   440,   636,  1230,
     265,   392,   344,  1334,   311,   345,   366,  1144,  1143,   461,
      62,    90,    91,   326,   461,   768,   769,   772,  1320,  1376,
      32,    35,    38,    45,    46,   161,   192,   198,   200,   211,
     214,   246,   255,   268,   310,   323,   352,   378,   385,   403,
     456,   466,   484,   507,   727,   728,   732,   747,   749,   751,
     814,   821,   822,  1320,  1354,   744,  1305,  1322,  1270,  1331,
     513,   314,  1331,   311,  1263,  1320,  1320,  1300,   251,   252,
    1325,   781,   206,   178,   770,  1312,  1320,   255,   397,   815,
     816,  1320,  1255,  1328,  1266,    57,  1259,  1259,   206,  1328,
     516,   745,   746,  1320,  1231,     9,   424,   522,   597,   277,
     359,   361,  1361,   171,   228,   236,   322,  1140,  1221,  1250,
    1320,  1300,   773,  1268,   709,   782,   771,  1259,  1252,  1252,
    1320,  1347,  1320,  1320,   746,  1230,  1272,  1361,   774,   255,
     257,  1360,   516,   710,  1259,   273,   334,   468,   473,   817,
     818,   819,  1250,   817,   818,   820,   179,   190,   213,   243,
     775,   776,   777,   778,   779,   780,  1268,   783,  1252,  1252,
     107,   117,  1369,  1320,  1320,    55,    90,  1369,  1370,  1355,
     784,  1320,  1268,  1268,   213,  1320,  1320,   212,   255,   257,
     288,   310,   338,   422,   439,   461,   482,   502,   511,   727,
     732,   733,   747,   749,   751,   785,   786,   790,   791,   794,
     795,   796,   797,   798,   799,   804,   805,   806,  1354,  1355,
    1268,  1268,  1268,   224,  1317,   304,   305,  1329,  1300,   212,
    1266,   513,  1320,  1330,  1320,  1320,  1259,   289,   334,   800,
     801,  1268,   334,   802,   803,  1268,  1329,  1300,  1321,  1320,
     736,  1198,  1245,  1243,  1245,    54,    90,   326,   330,   331,
     374,   389,   390,   787,  1369,  1370,  1371,  1372,  1373,  1374,
    1375,   120,   198,  1266,   801,  1266,   803,  1321,   801,  1347,
    1293,   380,   792,  1245,   190,   190,   213,   190,   213,   178,
     788,  1259,   788,  1245,   738,  1331,   318,   789,   789,    49,
     433,   734,   178,   793,  1259,   326,  1245,  1266
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
#line 1947 "parser.y"
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
#line 1959 "parser.y"
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
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 1995 "parser.y"
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
#line 2046 "parser.y"
    {
	first_nested_program = 0;
	clean_up_program ((yyvsp[(2) - (3)]), CB_PROGRAM_TYPE);
  }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 2054 "parser.y"
    {
	  clean_up_program ((yyvsp[(2) - (3)]), CB_FUNCTION_TYPE);
  }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 2077 "parser.y"
    {
	if (set_up_program ((yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]), CB_PROGRAM_TYPE)) {
		YYABORT;
	}
  }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 2083 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 2090 "parser.y"
    {
	if (set_up_program ((yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]), CB_FUNCTION_TYPE)) {
		YYABORT;
	}
	set_up_func_prototype ((yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]), 1);
	cobc_cs_check = 0;
  }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 2101 "parser.y"
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

  case 31:
/* Line 1792 of yacc.c  */
#line 2120 "parser.y"
    { (yyval) = NULL; }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 2121 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 2130 "parser.y"
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 2139 "parser.y"
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
#line 2158 "parser.y"
    {
	current_program->flag_initial = 1;
  }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 2162 "parser.y"
    {
	current_program->flag_recursive = 1;
  }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 2178 "parser.y"
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 2195 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_CONFIGURATION_SECTION;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "CONFIGURATION SECTION");
	}
  }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 2209 "parser.y"
    {
	if (warningopt && (check_comp_duplicate & SYN_CLAUSE_2)) {
		cb_warning (_("Phrases in non-standard order"));
	}
  }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 2221 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("SOURCE-COMPUTER", SYN_CLAUSE_1, &check_comp_duplicate);
  }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 2236 "parser.y"
    {
	cb_verify (cb_debugging_line, "DEBUGGING MODE");
	current_program->flag_debugging = 1;
	needs_debug_item = 1;
	cobc_cs_check = 0;
	cb_build_debug_item ();
  }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 2249 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2, &check_comp_duplicate);
  }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 2278 "parser.y"
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 2286 "parser.y"
    {
	current_program->collating_sequence = (yyvsp[(3) - (3)]);
  }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 2293 "parser.y"
    {
	/* Ignore */
  }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 2300 "parser.y"
    {
	if (current_program->classification) {
		cb_error (_("Duplicate CLASSIFICATION clause"));
	} else {
		current_program->classification = (yyvsp[(4) - (4)]);
	}
  }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 2311 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 2315 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 2319 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 2323 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 2337 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  }
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 2342 "parser.y"
    {
	cobc_in_repository = 0;
  }
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 2350 "parser.y"
    {
	yyerrok;
  }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 2362 "parser.y"
    {
	functions_are_all = 1;
  }
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 2366 "parser.y"
    {
	if ((yyvsp[(2) - (3)]) != cb_error_node) {
		set_up_func_prototype ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]), 0);
	}
  }
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 2376 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 2380 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 2387 "parser.y"
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[(1) - (1)]));
  }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 2392 "parser.y"
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[(2) - (2)]));
  }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 2403 "parser.y"
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

  case 117:
/* Line 1792 of yacc.c  */
#line 2448 "parser.y"
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
			cb_error_x ((yyvsp[(1) - (1)]), _("Invalid system-name '%s'"), system_name);
		}
	}
  }
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 2476 "parser.y"
    {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_DEVICE_CONSOLE) {
			cb_error_x (save_tree, _("Invalid CRT clause"));
		} else {
			current_program->flag_console_is_crt = 1;
		}
	}
  }
    break;

  case 120:
/* Line 1792 of yacc.c  */
#line 2486 "parser.y"
    {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_FEATURE_CONVENTION) {
			cb_error_x (save_tree, _("Invalid special names clause"));
		} else if (CB_VALID_TREE ((yyvsp[(3) - (3)]))) {
			CB_SYSTEM_NAME(save_tree)->value = (yyvsp[(1) - (3)]);
			cb_define ((yyvsp[(3) - (3)]), save_tree);
			CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
					(yyvsp[(3) - (3)]), save_tree);
		}
	}
  }
    break;

  case 121:
/* Line 1792 of yacc.c  */
#line 2499 "parser.y"
    {
	if (save_tree && CB_VALID_TREE ((yyvsp[(2) - (3)]))) {
		cb_define ((yyvsp[(2) - (3)]), save_tree);
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
				(yyvsp[(2) - (3)]), save_tree);
	}
  }
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 2515 "parser.y"
    {
	  check_on_off_duplicate = 0;
  }
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 2522 "parser.y"
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

  case 127:
/* Line 1792 of yacc.c  */
#line 2537 "parser.y"
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

  case 128:
/* Line 1792 of yacc.c  */
#line 2557 "parser.y"
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

  case 129:
/* Line 1792 of yacc.c  */
#line 2570 "parser.y"
    {
	if ((yyvsp[(3) - (5)])) {
		current_program->alphabet_name_list =
			cb_list_add (current_program->alphabet_name_list, (yyvsp[(3) - (5)]));
	}
	cobc_cs_check = 0;
  }
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 2581 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 2587 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 2593 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 2599 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 2605 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 2611 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 2621 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 2625 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 138:
/* Line 1792 of yacc.c  */
#line 2632 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 2636 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 2640 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (2)]));
  }
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 2644 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (4)]);
  }
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 2651 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (1)]), (yyvsp[(1) - (1)]));
  }
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 2655 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 2661 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 2662 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 2663 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 147:
/* Line 1792 of yacc.c  */
#line 2664 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 148:
/* Line 1792 of yacc.c  */
#line 2665 "parser.y"
    { (yyval) = cb_norm_high; }
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 2666 "parser.y"
    { (yyval) = cb_norm_low; }
    break;

  case 150:
/* Line 1792 of yacc.c  */
#line 2670 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 151:
/* Line 1792 of yacc.c  */
#line 2671 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 152:
/* Line 1792 of yacc.c  */
#line 2679 "parser.y"
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

  case 153:
/* Line 1792 of yacc.c  */
#line 2693 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 2697 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 155:
/* Line 1792 of yacc.c  */
#line 2705 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 156:
/* Line 1792 of yacc.c  */
#line 2712 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 157:
/* Line 1792 of yacc.c  */
#line 2716 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		(yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	} else {
		(yyval) = (yyvsp[(1) - (2)]);
	}
  }
    break;

  case 158:
/* Line 1792 of yacc.c  */
#line 2727 "parser.y"
    {
	cb_tree		l1;
	cb_tree		l2;

	if (cb_list_length ((yyvsp[(1) - (3)])) != cb_list_length ((yyvsp[(3) - (3)]))) {
		cb_error (_("Invalid SYMBOLIC clause"));
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

  case 159:
/* Line 1792 of yacc.c  */
#line 2747 "parser.y"
    {
	if ((yyvsp[(1) - (1)]) == NULL) {
		(yyval) = NULL;
	} else {
		(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 160:
/* Line 1792 of yacc.c  */
#line 2755 "parser.y"
    {
	if ((yyvsp[(2) - (2)]) == NULL) {
		(yyval) = (yyvsp[(1) - (2)]);
	} else {
		(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
  }
    break;

  case 161:
/* Line 1792 of yacc.c  */
#line 2765 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 2766 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 2773 "parser.y"
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

  case 164:
/* Line 1792 of yacc.c  */
#line 2793 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 165:
/* Line 1792 of yacc.c  */
#line 2794 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 166:
/* Line 1792 of yacc.c  */
#line 2799 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 167:
/* Line 1792 of yacc.c  */
#line 2803 "parser.y"
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

  case 168:
/* Line 1792 of yacc.c  */
#line 2824 "parser.y"
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

  case 169:
/* Line 1792 of yacc.c  */
#line 2847 "parser.y"
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
		cb_error_x ((yyvsp[(4) - (5)]), _("Invalid currency sign '%s'"), (char *)s);
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
		cb_error_x ((yyvsp[(4) - (5)]), _("Invalid currency sign '%s'"), (char *)s);
		break;
	default:
		if (!error_ind) {
			current_program->currency_symbol = s[0];
		}
		break;
	}
  }
    break;

  case 170:
/* Line 1792 of yacc.c  */
#line 2928 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 171:
/* Line 1792 of yacc.c  */
#line 2932 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 172:
/* Line 1792 of yacc.c  */
#line 2941 "parser.y"
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

  case 173:
/* Line 1792 of yacc.c  */
#line 2960 "parser.y"
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

  case 174:
/* Line 1792 of yacc.c  */
#line 2976 "parser.y"
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

  case 175:
/* Line 1792 of yacc.c  */
#line 2994 "parser.y"
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

  case 176:
/* Line 1792 of yacc.c  */
#line 3012 "parser.y"
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

  case 177:
/* Line 1792 of yacc.c  */
#line 3029 "parser.y"
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

  case 178:
/* Line 1792 of yacc.c  */
#line 3050 "parser.y"
    {
	cb_validate_program_environment (current_program);
  }
    break;

  case 180:
/* Line 1792 of yacc.c  */
#line 3057 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
    break;

  case 182:
/* Line 1792 of yacc.c  */
#line 3065 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
    break;

  case 184:
/* Line 1792 of yacc.c  */
#line 3074 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  }
    break;

  case 187:
/* Line 1792 of yacc.c  */
#line 3089 "parser.y"
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

  case 188:
/* Line 1792 of yacc.c  */
#line 3111 "parser.y"
    {
	if (CB_VALID_TREE ((yyvsp[(3) - (6)]))) {
		validate_file (current_file, (yyvsp[(3) - (6)]));
	}
  }
    break;

  case 204:
/* Line 1792 of yacc.c  */
#line 3143 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
  }
    break;

  case 205:
/* Line 1792 of yacc.c  */
#line 3149 "parser.y"
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

  case 206:
/* Line 1792 of yacc.c  */
#line 3159 "parser.y"
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

  case 207:
/* Line 1792 of yacc.c  */
#line 3172 "parser.y"
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

  case 208:
/* Line 1792 of yacc.c  */
#line 3185 "parser.y"
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

  case 209:
/* Line 1792 of yacc.c  */
#line 3211 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 210:
/* Line 1792 of yacc.c  */
#line 3212 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 211:
/* Line 1792 of yacc.c  */
#line 3213 "parser.y"
    { (yyval) = cb_int4; }
    break;

  case 217:
/* Line 1792 of yacc.c  */
#line 3225 "parser.y"
    {
	current_file->flag_line_adv = 1;
  }
    break;

  case 219:
/* Line 1792 of yacc.c  */
#line 3232 "parser.y"
    {
	current_file->flag_ext_assign = 1;
  }
    break;

  case 223:
/* Line 1792 of yacc.c  */
#line 3245 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 226:
/* Line 1792 of yacc.c  */
#line 3257 "parser.y"
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2, &check_duplicate);
  }
    break;

  case 227:
/* Line 1792 of yacc.c  */
#line 3264 "parser.y"
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
    break;

  case 228:
/* Line 1792 of yacc.c  */
#line 3265 "parser.y"
    { current_file->access_mode = COB_ACCESS_DYNAMIC; }
    break;

  case 229:
/* Line 1792 of yacc.c  */
#line 3266 "parser.y"
    { current_file->access_mode = COB_ACCESS_RANDOM; }
    break;

  case 230:
/* Line 1792 of yacc.c  */
#line 3274 "parser.y"
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

  case 231:
/* Line 1792 of yacc.c  */
#line 3297 "parser.y"
    { }
    break;

  case 232:
/* Line 1792 of yacc.c  */
#line 3300 "parser.y"
    {
	CB_PENDING ("SUPPRESS WHEN ALL");
  }
    break;

  case 233:
/* Line 1792 of yacc.c  */
#line 3305 "parser.y"
    {
	CB_PENDING ("SUPPRESS WHEN SPACE/ZERO");
  }
    break;

  case 234:
/* Line 1792 of yacc.c  */
#line 3315 "parser.y"
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3, &check_duplicate);
	CB_PENDING ("COLLATING SEQUENCE");
  }
    break;

  case 235:
/* Line 1792 of yacc.c  */
#line 3323 "parser.y"
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

  case 236:
/* Line 1792 of yacc.c  */
#line 3338 "parser.y"
    {
	check_repeated ("STATUS", SYN_CLAUSE_4, &check_duplicate);
	current_file->file_status = (yyvsp[(4) - (4)]);
  }
    break;

  case 240:
/* Line 1792 of yacc.c  */
#line 3353 "parser.y"
    {
	check_repeated ("LOCK", SYN_CLAUSE_5, &check_duplicate);
  }
    break;

  case 242:
/* Line 1792 of yacc.c  */
#line 3361 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  }
    break;

  case 243:
/* Line 1792 of yacc.c  */
#line 3366 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  }
    break;

  case 244:
/* Line 1792 of yacc.c  */
#line 3371 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  }
    break;

  case 247:
/* Line 1792 of yacc.c  */
#line 3380 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
    break;

  case 248:
/* Line 1792 of yacc.c  */
#line 3384 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
	CB_PENDING ("WITH ROLLBACK");
  }
    break;

  case 251:
/* Line 1792 of yacc.c  */
#line 3400 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_INDEXED;
  }
    break;

  case 252:
/* Line 1792 of yacc.c  */
#line 3405 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
    break;

  case 253:
/* Line 1792 of yacc.c  */
#line 3410 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_RELATIVE;
  }
    break;

  case 254:
/* Line 1792 of yacc.c  */
#line 3415 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
    break;

  case 255:
/* Line 1792 of yacc.c  */
#line 3426 "parser.y"
    {
	check_repeated ("PADDING", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
    break;

  case 256:
/* Line 1792 of yacc.c  */
#line 3437 "parser.y"
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8, &check_duplicate);
  }
    break;

  case 257:
/* Line 1792 of yacc.c  */
#line 3447 "parser.y"
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9, &check_duplicate);
	current_file->key = (yyvsp[(4) - (4)]);
  }
    break;

  case 258:
/* Line 1792 of yacc.c  */
#line 3454 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 259:
/* Line 1792 of yacc.c  */
#line 3455 "parser.y"
    { CB_PENDING ("SPLIT KEYS"); }
    break;

  case 260:
/* Line 1792 of yacc.c  */
#line 3456 "parser.y"
    { CB_PENDING ("SPLIT KEYS"); }
    break;

  case 261:
/* Line 1792 of yacc.c  */
#line 3463 "parser.y"
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10, &check_duplicate);
	current_file->key = (yyvsp[(4) - (4)]);
  }
    break;

  case 262:
/* Line 1792 of yacc.c  */
#line 3474 "parser.y"
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11, &check_duplicate);
  }
    break;

  case 265:
/* Line 1792 of yacc.c  */
#line 3488 "parser.y"
    {
	check_repeated ("SHARING", SYN_CLAUSE_12, &check_duplicate);
	current_file->sharing = (yyvsp[(3) - (3)]);
  }
    break;

  case 266:
/* Line 1792 of yacc.c  */
#line 3495 "parser.y"
    { (yyval) = NULL; }
    break;

  case 267:
/* Line 1792 of yacc.c  */
#line 3496 "parser.y"
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
    break;

  case 268:
/* Line 1792 of yacc.c  */
#line 3497 "parser.y"
    { (yyval) = NULL; }
    break;

  case 271:
/* Line 1792 of yacc.c  */
#line 3506 "parser.y"
    {
	yyerrok;
  }
    break;

  case 276:
/* Line 1792 of yacc.c  */
#line 3525 "parser.y"
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

  case 277:
/* Line 1792 of yacc.c  */
#line 3552 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 278:
/* Line 1792 of yacc.c  */
#line 3553 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 279:
/* Line 1792 of yacc.c  */
#line 3554 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 280:
/* Line 1792 of yacc.c  */
#line 3555 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 281:
/* Line 1792 of yacc.c  */
#line 3562 "parser.y"
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
    break;

  case 282:
/* Line 1792 of yacc.c  */
#line 3567 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	cb_verify (cb_multiple_file_tape_clause, "MULTIPLE FILE TAPE");
	cobc_cs_check = 0;
  }
    break;

  case 288:
/* Line 1792 of yacc.c  */
#line 3596 "parser.y"
    {
	current_storage = CB_STORAGE_WORKING;
  }
    break;

  case 289:
/* Line 1792 of yacc.c  */
#line 3604 "parser.y"
    {
	cb_validate_program_data (current_program);
  }
    break;

  case 291:
/* Line 1792 of yacc.c  */
#line 3611 "parser.y"
    {
	header_check |= COBC_HD_DATA_DIVISION;
  }
    break;

  case 293:
/* Line 1792 of yacc.c  */
#line 3620 "parser.y"
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
    break;

  case 296:
/* Line 1792 of yacc.c  */
#line 3634 "parser.y"
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

  case 297:
/* Line 1792 of yacc.c  */
#line 3653 "parser.y"
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

  case 299:
/* Line 1792 of yacc.c  */
#line 3670 "parser.y"
    {
	yyerrok;
  }
    break;

  case 300:
/* Line 1792 of yacc.c  */
#line 3677 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 301:
/* Line 1792 of yacc.c  */
#line 3681 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 304:
/* Line 1792 of yacc.c  */
#line 3692 "parser.y"
    {
	check_repeated ("EXTERNAL", SYN_CLAUSE_1, &check_duplicate);
#if	0	/* RXWRXW - Global/External */
	if (current_file->flag_global) {
		cb_error (_("File cannot have both EXTERNAL and GLOBAL clauses"));
	}
#endif
	current_file->flag_external = 1;
  }
    break;

  case 305:
/* Line 1792 of yacc.c  */
#line 3702 "parser.y"
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
    break;

  case 315:
/* Line 1792 of yacc.c  */
#line 3732 "parser.y"
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3, &check_duplicate);
	/* ignore */
  }
    break;

  case 319:
/* Line 1792 of yacc.c  */
#line 3745 "parser.y"
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

  case 320:
/* Line 1792 of yacc.c  */
#line 3765 "parser.y"
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

  case 321:
/* Line 1792 of yacc.c  */
#line 3800 "parser.y"
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

  case 323:
/* Line 1792 of yacc.c  */
#line 3831 "parser.y"
    {
	current_file->record_depending = (yyvsp[(3) - (3)]);
  }
    break;

  case 324:
/* Line 1792 of yacc.c  */
#line 3837 "parser.y"
    { (yyval) = NULL; }
    break;

  case 325:
/* Line 1792 of yacc.c  */
#line 3838 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 326:
/* Line 1792 of yacc.c  */
#line 3842 "parser.y"
    { (yyval) = NULL; }
    break;

  case 327:
/* Line 1792 of yacc.c  */
#line 3843 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 328:
/* Line 1792 of yacc.c  */
#line 3851 "parser.y"
    {
	check_repeated ("LABEL", SYN_CLAUSE_5, &check_duplicate);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
    break;

  case 329:
/* Line 1792 of yacc.c  */
#line 3862 "parser.y"
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
    break;

  case 330:
/* Line 1792 of yacc.c  */
#line 3867 "parser.y"
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
	if (!current_file->assign) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
	}
  }
    break;

  case 335:
/* Line 1792 of yacc.c  */
#line 3890 "parser.y"
    {
	check_repeated ("DATA", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
    break;

  case 336:
/* Line 1792 of yacc.c  */
#line 3902 "parser.y"
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

  case 342:
/* Line 1792 of yacc.c  */
#line 3930 "parser.y"
    {
	current_file->latfoot = (yyvsp[(4) - (4)]);
  }
    break;

  case 343:
/* Line 1792 of yacc.c  */
#line 3937 "parser.y"
    {
	current_file->lattop = (yyvsp[(2) - (2)]);
  }
    break;

  case 344:
/* Line 1792 of yacc.c  */
#line 3944 "parser.y"
    {
	current_file->latbot = (yyvsp[(2) - (2)]);
  }
    break;

  case 345:
/* Line 1792 of yacc.c  */
#line 3953 "parser.y"
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9, &check_duplicate);
	/* ignore */
  }
    break;

  case 350:
/* Line 1792 of yacc.c  */
#line 3966 "parser.y"
    {
	if (current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("Can only use U or S mode with RECORD SEQUENTIAL files"));
	}
  }
    break;

  case 353:
/* Line 1792 of yacc.c  */
#line 3982 "parser.y"
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
			cb_warning_x ((yyvsp[(3) - (4)]), _("Ignoring CODE-SET '%s'"),
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

  case 355:
/* Line 1792 of yacc.c  */
#line 4018 "parser.y"
    {
	  if (warningopt) {
		  CB_PENDING ("FOR sub-records clause");
	  }

	  current_file->code_set_items = CB_LIST ((yyvsp[(2) - (2)]));
  }
    break;

  case 356:
/* Line 1792 of yacc.c  */
#line 4031 "parser.y"
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

  case 359:
/* Line 1792 of yacc.c  */
#line 4051 "parser.y"
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

  case 360:
/* Line 1792 of yacc.c  */
#line 4061 "parser.y"
    {
	current_report = build_report ((yyvsp[(2) - (2)]));
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
    break;

  case 362:
/* Line 1792 of yacc.c  */
#line 4076 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
    break;

  case 363:
/* Line 1792 of yacc.c  */
#line 4082 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[(5) - (5)])));
	}
  }
    break;

  case 364:
/* Line 1792 of yacc.c  */
#line 4091 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 365:
/* Line 1792 of yacc.c  */
#line 4094 "parser.y"
    {
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
    break;

  case 366:
/* Line 1792 of yacc.c  */
#line 4100 "parser.y"
    {
	struct cb_field *p;

	for (p = description_field; p; p = p->sister) {
		cb_validate_field (p);
	}
	(yyval) = CB_TREE (description_field);
  }
    break;

  case 370:
/* Line 1792 of yacc.c  */
#line 4118 "parser.y"
    {
	cb_tree x;

	x = cb_build_field_tree ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), current_field, current_storage,
				 current_file, 0);
	/* Free tree associated with level number */
	cobc_parse_free ((yyvsp[(1) - (2)]));
	if (CB_INVALID_TREE (x)) {
		YYERROR;
	} else {
		current_field = CB_FIELD (x);
		check_pic_duplicate = 0;
	}
  }
    break;

  case 371:
/* Line 1792 of yacc.c  */
#line 4133 "parser.y"
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
    break;

  case 372:
/* Line 1792 of yacc.c  */
#line 4153 "parser.y"
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

  case 373:
/* Line 1792 of yacc.c  */
#line 4166 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 374:
/* Line 1792 of yacc.c  */
#line 4173 "parser.y"
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
    break;

  case 375:
/* Line 1792 of yacc.c  */
#line 4179 "parser.y"
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
    break;

  case 376:
/* Line 1792 of yacc.c  */
#line 4185 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	qualifier = (yyvsp[(1) - (1)]);
	non_const_word = 0;
  }
    break;

  case 377:
/* Line 1792 of yacc.c  */
#line 4194 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	qualifier = (yyvsp[(1) - (1)]);
	non_const_word = 0;
  }
    break;

  case 378:
/* Line 1792 of yacc.c  */
#line 4203 "parser.y"
    {
	(yyval)= NULL;
  }
    break;

  case 379:
/* Line 1792 of yacc.c  */
#line 4207 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
		(yyval)= NULL;
	} else {
		(yyval) = cb_null;
	}
  }
    break;

  case 380:
/* Line 1792 of yacc.c  */
#line 4218 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 381:
/* Line 1792 of yacc.c  */
#line 4219 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(2) - (2)])); }
    break;

  case 382:
/* Line 1792 of yacc.c  */
#line 4220 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(2) - (2)])); }
    break;

  case 383:
/* Line 1792 of yacc.c  */
#line 4221 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(3) - (3)])); }
    break;

  case 384:
/* Line 1792 of yacc.c  */
#line 4226 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 385:
/* Line 1792 of yacc.c  */
#line 4230 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 386:
/* Line 1792 of yacc.c  */
#line 4234 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 387:
/* Line 1792 of yacc.c  */
#line 4238 "parser.y"
    {
	(yyval) = cb_int4;
  }
    break;

  case 388:
/* Line 1792 of yacc.c  */
#line 4242 "parser.y"
    {
	(yyval) = cb_int (8);
  }
    break;

  case 389:
/* Line 1792 of yacc.c  */
#line 4246 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(long));
  }
    break;

  case 390:
/* Line 1792 of yacc.c  */
#line 4250 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(void *));
  }
    break;

  case 391:
/* Line 1792 of yacc.c  */
#line 4254 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(float));
  }
    break;

  case 392:
/* Line 1792 of yacc.c  */
#line 4258 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(double));
  }
    break;

  case 393:
/* Line 1792 of yacc.c  */
#line 4262 "parser.y"
    {
	(yyval) = cb_int (4);
  }
    break;

  case 394:
/* Line 1792 of yacc.c  */
#line 4266 "parser.y"
    {
	(yyval) = cb_int (8);
  }
    break;

  case 395:
/* Line 1792 of yacc.c  */
#line 4270 "parser.y"
    {
	(yyval) = cb_int (16);
  }
    break;

  case 396:
/* Line 1792 of yacc.c  */
#line 4274 "parser.y"
    {
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
    break;

  case 406:
/* Line 1792 of yacc.c  */
#line 4306 "parser.y"
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

  case 407:
/* Line 1792 of yacc.c  */
#line 4332 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 408:
/* Line 1792 of yacc.c  */
#line 4336 "parser.y"
    {
	CB_PENDING ("CONSTANT FROM clause");
	(yyval) = NULL;
  }
    break;

  case 409:
/* Line 1792 of yacc.c  */
#line 4344 "parser.y"
    {
	/* Required to check redefines */
	(yyval) = NULL;
  }
    break;

  case 410:
/* Line 1792 of yacc.c  */
#line 4350 "parser.y"
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  }
    break;

  case 425:
/* Line 1792 of yacc.c  */
#line 4378 "parser.y"
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

  case 426:
/* Line 1792 of yacc.c  */
#line 4402 "parser.y"
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

  case 427:
/* Line 1792 of yacc.c  */
#line 4429 "parser.y"
    {
	current_field->ename = cb_to_cname (current_field->name);
  }
    break;

  case 428:
/* Line 1792 of yacc.c  */
#line 4433 "parser.y"
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[(2) - (2)]))->data);
  }
    break;

  case 429:
/* Line 1792 of yacc.c  */
#line 4442 "parser.y"
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

  case 430:
/* Line 1792 of yacc.c  */
#line 4467 "parser.y"
    {
	check_repeated ("PICTURE", SYN_CLAUSE_4, &check_pic_duplicate);
	current_field->pic = CB_PICTURE ((yyvsp[(1) - (1)]));
  }
    break;

  case 433:
/* Line 1792 of yacc.c  */
#line 4483 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 434:
/* Line 1792 of yacc.c  */
#line 4487 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 435:
/* Line 1792 of yacc.c  */
#line 4491 "parser.y"
    {
	check_set_usage (CB_USAGE_FLOAT);
  }
    break;

  case 436:
/* Line 1792 of yacc.c  */
#line 4495 "parser.y"
    {
	check_set_usage (CB_USAGE_DOUBLE);
  }
    break;

  case 437:
/* Line 1792 of yacc.c  */
#line 4499 "parser.y"
    {
	check_set_usage (CB_USAGE_PACKED);
  }
    break;

  case 438:
/* Line 1792 of yacc.c  */
#line 4503 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 439:
/* Line 1792 of yacc.c  */
#line 4507 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_5);
  }
    break;

  case 440:
/* Line 1792 of yacc.c  */
#line 4511 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_6);
  }
    break;

  case 441:
/* Line 1792 of yacc.c  */
#line 4515 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_X);
  }
    break;

  case 442:
/* Line 1792 of yacc.c  */
#line 4519 "parser.y"
    {
	check_set_usage (CB_USAGE_DISPLAY);
  }
    break;

  case 443:
/* Line 1792 of yacc.c  */
#line 4523 "parser.y"
    {
	check_set_usage (CB_USAGE_INDEX);
  }
    break;

  case 444:
/* Line 1792 of yacc.c  */
#line 4527 "parser.y"
    {
	check_set_usage (CB_USAGE_PACKED);
  }
    break;

  case 445:
/* Line 1792 of yacc.c  */
#line 4531 "parser.y"
    {
	check_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
    break;

  case 446:
/* Line 1792 of yacc.c  */
#line 4536 "parser.y"
    {
	check_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
    break;

  case 447:
/* Line 1792 of yacc.c  */
#line 4541 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
    break;

  case 448:
/* Line 1792 of yacc.c  */
#line 4545 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
    break;

  case 449:
/* Line 1792 of yacc.c  */
#line 4549 "parser.y"
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
    break;

  case 450:
/* Line 1792 of yacc.c  */
#line 4557 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
    break;

  case 451:
/* Line 1792 of yacc.c  */
#line 4561 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
    break;

  case 452:
/* Line 1792 of yacc.c  */
#line 4565 "parser.y"
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
    break;

  case 453:
/* Line 1792 of yacc.c  */
#line 4573 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_CHAR);
  }
    break;

  case 454:
/* Line 1792 of yacc.c  */
#line 4577 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
    break;

  case 455:
/* Line 1792 of yacc.c  */
#line 4581 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
    break;

  case 456:
/* Line 1792 of yacc.c  */
#line 4585 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
    break;

  case 457:
/* Line 1792 of yacc.c  */
#line 4589 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
    break;

  case 458:
/* Line 1792 of yacc.c  */
#line 4593 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
    break;

  case 459:
/* Line 1792 of yacc.c  */
#line 4597 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_LONG);
  }
    break;

  case 460:
/* Line 1792 of yacc.c  */
#line 4601 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
    break;

  case 461:
/* Line 1792 of yacc.c  */
#line 4605 "parser.y"
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
#line 4613 "parser.y"
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
    break;

  case 463:
/* Line 1792 of yacc.c  */
#line 4621 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN32);
  }
    break;

  case 464:
/* Line 1792 of yacc.c  */
#line 4625 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN64);
  }
    break;

  case 465:
/* Line 1792 of yacc.c  */
#line 4629 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN128);
  }
    break;

  case 466:
/* Line 1792 of yacc.c  */
#line 4633 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_DEC64);
  }
    break;

  case 467:
/* Line 1792 of yacc.c  */
#line 4637 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_DEC128);
  }
    break;

  case 468:
/* Line 1792 of yacc.c  */
#line 4641 "parser.y"
    {
	check_repeated ("USAGE", SYN_CLAUSE_5, &check_pic_duplicate);
	CB_PENDING ("USAGE NATIONAL");
  }
    break;

  case 473:
/* Line 1792 of yacc.c  */
#line 4661 "parser.y"
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_separate = ((yyvsp[(3) - (3)]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
    break;

  case 474:
/* Line 1792 of yacc.c  */
#line 4667 "parser.y"
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_separate = ((yyvsp[(3) - (3)]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
    break;

  case 475:
/* Line 1792 of yacc.c  */
#line 4680 "parser.y"
    {
	check_repeated ("OCCURS", SYN_CLAUSE_7, &check_pic_duplicate);
	if (current_field->depending && !((yyvsp[(3) - (6)]))) {
		cb_verify (cb_odo_without_to, _("ODO without TO clause"));
	}
	current_field->occurs_min = (yyvsp[(3) - (6)]) ? cb_get_int ((yyvsp[(2) - (6)])) : 1;
	current_field->occurs_max = (yyvsp[(3) - (6)]) ? cb_get_int ((yyvsp[(3) - (6)])) : cb_get_int ((yyvsp[(2) - (6)]));
	current_field->indexes++;
	if (current_field->indexes > COB_MAX_SUBSCRIPTS) {
		cb_error (_("Maximum OCCURS depth exceeded (%d)"),
			  COB_MAX_SUBSCRIPTS);
	}
	current_field->flag_occurs = 1;
  }
    break;

  case 477:
/* Line 1792 of yacc.c  */
#line 4698 "parser.y"
    {
	current_field->step_count = cb_get_int ((yyvsp[(2) - (2)]));
  }
    break;

  case 478:
/* Line 1792 of yacc.c  */
#line 4708 "parser.y"
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
	if ((yyvsp[(3) - (7)])) {
		current_field->occurs_min = cb_get_int ((yyvsp[(2) - (7)]));
		current_field->occurs_max = cb_get_int ((yyvsp[(3) - (7)]));
		if (current_field->depending &&
			current_field->occurs_max > 0 &&
			current_field->occurs_max <= current_field->occurs_min) {
			cb_error (_("OCCURS max. must be greater than OCCURS min."));
		}
	} else {
		current_field->occurs_min = 1;
		current_field->occurs_max = cb_get_int ((yyvsp[(2) - (7)]));
		if (current_field->depending) {
			cb_verify (cb_odo_without_to, "ODO without TO clause");
		}
	}
	current_field->flag_occurs = 1;
  }
    break;

  case 479:
/* Line 1792 of yacc.c  */
#line 4740 "parser.y"
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
	current_field->occurs_min = (yyvsp[(4) - (8)]) ? cb_get_int ((yyvsp[(4) - (8)])) : 0;
	if ((yyvsp[(5) - (8)])) {
		current_field->occurs_max = cb_get_int ((yyvsp[(5) - (8)]));
		if (current_field->occurs_max <= current_field->occurs_min) {
			cb_error (_("OCCURS max. must be greater than OCCURS min."));
		}
	} else {
		current_field->occurs_max = 0;
	}
	CB_PENDING("OCCURS with DYNAMIC capacity");
	current_field->flag_occurs = 1;
  }
    break;

  case 480:
/* Line 1792 of yacc.c  */
#line 4768 "parser.y"
    { (yyval) = NULL; }
    break;

  case 481:
/* Line 1792 of yacc.c  */
#line 4769 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 482:
/* Line 1792 of yacc.c  */
#line 4773 "parser.y"
    { (yyval) = NULL; }
    break;

  case 483:
/* Line 1792 of yacc.c  */
#line 4774 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 485:
/* Line 1792 of yacc.c  */
#line 4779 "parser.y"
    {
	current_field->depending = (yyvsp[(3) - (3)]);
  }
    break;

  case 487:
/* Line 1792 of yacc.c  */
#line 4786 "parser.y"
    {
	(yyval) = cb_build_index ((yyvsp[(3) - (3)]), cb_zero, 0, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
    break;

  case 489:
/* Line 1792 of yacc.c  */
#line 4794 "parser.y"
    {
	/* current_field->initialized = 1; */
  }
    break;

  case 490:
/* Line 1792 of yacc.c  */
#line 4801 "parser.y"
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

  case 491:
/* Line 1792 of yacc.c  */
#line 4824 "parser.y"
    { (yyval) = NULL; }
    break;

  case 492:
/* Line 1792 of yacc.c  */
#line 4827 "parser.y"
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

  case 493:
/* Line 1792 of yacc.c  */
#line 4842 "parser.y"
    { (yyval) = cb_int (COB_ASCENDING); }
    break;

  case 494:
/* Line 1792 of yacc.c  */
#line 4843 "parser.y"
    { (yyval) = cb_int (COB_DESCENDING); }
    break;

  case 496:
/* Line 1792 of yacc.c  */
#line 4848 "parser.y"
    {
	current_field->index_list = (yyvsp[(3) - (3)]);
  }
    break;

  case 497:
/* Line 1792 of yacc.c  */
#line 4854 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 498:
/* Line 1792 of yacc.c  */
#line 4856 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 499:
/* Line 1792 of yacc.c  */
#line 4861 "parser.y"
    {
	(yyval) = cb_build_index ((yyvsp[(1) - (1)]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
    break;

  case 500:
/* Line 1792 of yacc.c  */
#line 4872 "parser.y"
    {
	check_repeated ("JUSTIFIED", SYN_CLAUSE_8, &check_pic_duplicate);
	current_field->flag_justified = 1;
  }
    break;

  case 501:
/* Line 1792 of yacc.c  */
#line 4883 "parser.y"
    {
	check_repeated ("SYNCHRONIZED", SYN_CLAUSE_9, &check_pic_duplicate);
	current_field->flag_synchronized = 1;
  }
    break;

  case 502:
/* Line 1792 of yacc.c  */
#line 4894 "parser.y"
    {
	check_repeated ("BLANK", SYN_CLAUSE_10, &check_pic_duplicate);
	current_field->flag_blank_zero = 1;
  }
    break;

  case 503:
/* Line 1792 of yacc.c  */
#line 4905 "parser.y"
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

  case 504:
/* Line 1792 of yacc.c  */
#line 4933 "parser.y"
    {
	check_repeated ("VALUE", SYN_CLAUSE_12, &check_pic_duplicate);
	current_field->values = (yyvsp[(3) - (3)]);
  }
    break;

  case 506:
/* Line 1792 of yacc.c  */
#line 4941 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 507:
/* Line 1792 of yacc.c  */
#line 4942 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 508:
/* Line 1792 of yacc.c  */
#line 4946 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 509:
/* Line 1792 of yacc.c  */
#line 4947 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 511:
/* Line 1792 of yacc.c  */
#line 4952 "parser.y"
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[(4) - (4)]));
  }
    break;

  case 512:
/* Line 1792 of yacc.c  */
#line 4965 "parser.y"
    {
	check_repeated ("RENAMES", SYN_CLAUSE_13, &check_pic_duplicate);
	if (cb_ref ((yyvsp[(2) - (2)])) != cb_error_node) {
		if (CB_FIELD (cb_ref ((yyvsp[(2) - (2)])))->level == 01 ||
		    CB_FIELD (cb_ref ((yyvsp[(2) - (2)])))->level > 50) {
			cb_error (_("RENAMES may not reference a level 01 or > 50"));
		} else {
			current_field->redefines = CB_FIELD (cb_ref ((yyvsp[(2) - (2)])));
			current_field->pic = current_field->redefines->pic;
		}
	}
  }
    break;

  case 513:
/* Line 1792 of yacc.c  */
#line 4978 "parser.y"
    {
	check_repeated ("RENAMES", SYN_CLAUSE_13, &check_pic_duplicate);
	if (cb_ref ((yyvsp[(2) - (4)])) != cb_error_node && cb_ref ((yyvsp[(4) - (4)])) != cb_error_node) {
		if (CB_FIELD (cb_ref ((yyvsp[(2) - (4)])))->level == 01 ||
		    CB_FIELD (cb_ref ((yyvsp[(2) - (4)])))->level > 50) {
			cb_error (_("RENAMES may not reference a level 01 or > 50"));
		} else if (CB_FIELD (cb_ref ((yyvsp[(4) - (4)])))->level == 01 ||
		    CB_FIELD (cb_ref ((yyvsp[(4) - (4)])))->level > 50) {
			cb_error (_("RENAMES may not reference a level 01 or > 50"));
		} else {
			current_field->redefines = CB_FIELD (cb_ref ((yyvsp[(2) - (4)])));
			current_field->rename_thru = CB_FIELD (cb_ref ((yyvsp[(4) - (4)])));
		}
	}
  }
    break;

  case 514:
/* Line 1792 of yacc.c  */
#line 4999 "parser.y"
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY clause");
	} else {
		current_field->flag_any_length = 1;
	}
  }
    break;

  case 515:
/* Line 1792 of yacc.c  */
#line 5008 "parser.y"
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY clause");
	} else {
		current_field->flag_any_length = 1;
		current_field->flag_any_numeric = 1;
	}
  }
    break;

  case 517:
/* Line 1792 of yacc.c  */
#line 5023 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LOCAL_STORAGE_SECTION;
	current_storage = CB_STORAGE_LOCAL;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "LOCAL-STORAGE");
	}
  }
    break;

  case 518:
/* Line 1792 of yacc.c  */
#line 5032 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		current_program->local_storage = CB_FIELD ((yyvsp[(5) - (5)]));
	}
  }
    break;

  case 520:
/* Line 1792 of yacc.c  */
#line 5044 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
    break;

  case 521:
/* Line 1792 of yacc.c  */
#line 5050 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[(5) - (5)]));
	}
  }
    break;

  case 523:
/* Line 1792 of yacc.c  */
#line 5061 "parser.y"
    {
	CB_PENDING("REPORT SECTION");
	current_storage = CB_STORAGE_REPORT;
	cb_clear_real_field ();
  }
    break;

  case 527:
/* Line 1792 of yacc.c  */
#line 5077 "parser.y"
    {
	if (CB_INVALID_TREE ((yyvsp[(2) - (2)]))) {
		YYERROR;
	} else {
		current_report = CB_REPORT (cb_ref ((yyvsp[(2) - (2)])));
	}
	check_duplicate = 0;
  }
    break;

  case 531:
/* Line 1792 of yacc.c  */
#line 5092 "parser.y"
    {
	yyerrok;
  }
    break;

  case 532:
/* Line 1792 of yacc.c  */
#line 5099 "parser.y"
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1, &check_duplicate);
	cb_error (_("GLOBAL is not allowed with RD"));
  }
    break;

  case 533:
/* Line 1792 of yacc.c  */
#line 5104 "parser.y"
    {
	check_repeated ("CODE", SYN_CLAUSE_2, &check_duplicate);
  }
    break;

  case 536:
/* Line 1792 of yacc.c  */
#line 5115 "parser.y"
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3, &check_duplicate);
  }
    break;

  case 540:
/* Line 1792 of yacc.c  */
#line 5134 "parser.y"
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
    break;

  case 541:
/* Line 1792 of yacc.c  */
#line 5170 "parser.y"
    {
	current_report->lines = cb_get_int ((yyvsp[(1) - (1)]));
  }
    break;

  case 542:
/* Line 1792 of yacc.c  */
#line 5174 "parser.y"
    {
	current_report->lines = cb_get_int ((yyvsp[(1) - (4)]));
	current_report->columns = cb_get_int ((yyvsp[(3) - (4)]));
  }
    break;

  case 543:
/* Line 1792 of yacc.c  */
#line 5179 "parser.y"
    {
	current_report->lines = cb_get_int ((yyvsp[(1) - (2)]));
  }
    break;

  case 551:
/* Line 1792 of yacc.c  */
#line 5199 "parser.y"
    {
	current_report->heading = cb_get_int ((yyvsp[(3) - (3)]));
  }
    break;

  case 552:
/* Line 1792 of yacc.c  */
#line 5206 "parser.y"
    {
	current_report->first_detail = cb_get_int ((yyvsp[(4) - (4)]));
  }
    break;

  case 553:
/* Line 1792 of yacc.c  */
#line 5213 "parser.y"
    {
	current_report->last_control = cb_get_int ((yyvsp[(4) - (4)]));
  }
    break;

  case 554:
/* Line 1792 of yacc.c  */
#line 5220 "parser.y"
    {
	current_report->last_detail = cb_get_int ((yyvsp[(4) - (4)]));
  }
    break;

  case 555:
/* Line 1792 of yacc.c  */
#line 5227 "parser.y"
    {
	current_report->footing = cb_get_int ((yyvsp[(3) - (3)]));
  }
    break;

  case 558:
/* Line 1792 of yacc.c  */
#line 5238 "parser.y"
    {
	check_pic_duplicate = 0;
  }
    break;

  case 578:
/* Line 1792 of yacc.c  */
#line 5269 "parser.y"
    {
	check_repeated ("TYPE", SYN_CLAUSE_16, &check_pic_duplicate);
  }
    break;

  case 591:
/* Line 1792 of yacc.c  */
#line 5295 "parser.y"
    {
	check_repeated ("NEXT GROUP", SYN_CLAUSE_17, &check_pic_duplicate);
  }
    break;

  case 592:
/* Line 1792 of yacc.c  */
#line 5302 "parser.y"
    {
	check_repeated ("SUM", SYN_CLAUSE_19, &check_pic_duplicate);
  }
    break;

  case 597:
/* Line 1792 of yacc.c  */
#line 5318 "parser.y"
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
  }
    break;

  case 599:
/* Line 1792 of yacc.c  */
#line 5329 "parser.y"
    {
	check_repeated ("LINE", SYN_CLAUSE_21, &check_pic_duplicate);
  }
    break;

  case 602:
/* Line 1792 of yacc.c  */
#line 5341 "parser.y"
    {
	check_repeated ("COLUMN", SYN_CLAUSE_18, &check_pic_duplicate);
  }
    break;

  case 614:
/* Line 1792 of yacc.c  */
#line 5374 "parser.y"
    {
	check_repeated ("SOURCE", SYN_CLAUSE_22, &check_pic_duplicate);
  }
    break;

  case 615:
/* Line 1792 of yacc.c  */
#line 5381 "parser.y"
    {
	check_repeated ("GROUP", SYN_CLAUSE_23, &check_pic_duplicate);
  }
    break;

  case 616:
/* Line 1792 of yacc.c  */
#line 5388 "parser.y"
    {
	check_repeated ("USAGE", SYN_CLAUSE_24, &check_pic_duplicate);
  }
    break;

  case 618:
/* Line 1792 of yacc.c  */
#line 5397 "parser.y"
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
    break;

  case 619:
/* Line 1792 of yacc.c  */
#line 5404 "parser.y"
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

  case 625:
/* Line 1792 of yacc.c  */
#line 5429 "parser.y"
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

  case 626:
/* Line 1792 of yacc.c  */
#line 5449 "parser.y"
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
    break;

  case 627:
/* Line 1792 of yacc.c  */
#line 5500 "parser.y"
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

  case 630:
/* Line 1792 of yacc.c  */
#line 5523 "parser.y"
    {
	check_screen_attr_with_conflict ("BLANK LINE", COB_SCREEN_BLANK_LINE,
					 "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
    break;

  case 631:
/* Line 1792 of yacc.c  */
#line 5528 "parser.y"
    {
	check_screen_attr_with_conflict ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN,
					 "BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
    break;

  case 632:
/* Line 1792 of yacc.c  */
#line 5533 "parser.y"
    {
	check_screen_attr ("BELL", COB_SCREEN_BELL);
  }
    break;

  case 633:
/* Line 1792 of yacc.c  */
#line 5537 "parser.y"
    {
	check_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
    break;

  case 634:
/* Line 1792 of yacc.c  */
#line 5541 "parser.y"
    {
	check_screen_attr_with_conflict ("ERASE EOL", COB_SCREEN_ERASE_EOL,
					 "ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
    break;

  case 635:
/* Line 1792 of yacc.c  */
#line 5546 "parser.y"
    {
	check_screen_attr_with_conflict ("ERASE EOS", COB_SCREEN_ERASE_EOS,
					 "ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
    break;

  case 636:
/* Line 1792 of yacc.c  */
#line 5551 "parser.y"
    {
	check_screen_attr_with_conflict ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
					 "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
    break;

  case 637:
/* Line 1792 of yacc.c  */
#line 5556 "parser.y"
    {
	check_screen_attr_with_conflict ("LOWLIGHT", COB_SCREEN_LOWLIGHT,
					 "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 638:
/* Line 1792 of yacc.c  */
#line 5561 "parser.y"
    {
	check_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
    break;

  case 639:
/* Line 1792 of yacc.c  */
#line 5565 "parser.y"
    {
	check_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
    break;

  case 640:
/* Line 1792 of yacc.c  */
#line 5569 "parser.y"
    {
	check_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
	CB_PENDING ("OVERLINE");
  }
    break;

  case 641:
/* Line 1792 of yacc.c  */
#line 5574 "parser.y"
    {
	check_screen_attr ("GRID", COB_SCREEN_GRID);
	CB_PENDING ("GRID");
  }
    break;

  case 642:
/* Line 1792 of yacc.c  */
#line 5579 "parser.y"
    {
	check_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
	CB_PENDING ("LEFTLINE");
  }
    break;

  case 643:
/* Line 1792 of yacc.c  */
#line 5584 "parser.y"
    {
	check_screen_attr ("AUTO", COB_SCREEN_AUTO);
  }
    break;

  case 644:
/* Line 1792 of yacc.c  */
#line 5588 "parser.y"
    {
	check_screen_attr ("SECURE", COB_SCREEN_SECURE);
  }
    break;

  case 645:
/* Line 1792 of yacc.c  */
#line 5592 "parser.y"
    {
	check_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  }
    break;

  case 646:
/* Line 1792 of yacc.c  */
#line 5596 "parser.y"
    {
	check_screen_attr ("FULL", COB_SCREEN_FULL);
  }
    break;

  case 647:
/* Line 1792 of yacc.c  */
#line 5600 "parser.y"
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[(4) - (4)]);
  }
    break;

  case 648:
/* Line 1792 of yacc.c  */
#line 5605 "parser.y"
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
    break;

  case 649:
/* Line 1792 of yacc.c  */
#line 5609 "parser.y"
    {
	check_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
    break;

  case 650:
/* Line 1792 of yacc.c  */
#line 5613 "parser.y"
    {
	check_repeated ("LINE", SYN_CLAUSE_16, &check_pic_duplicate);
	current_field->screen_line = (yyvsp[(5) - (5)]);
  }
    break;

  case 651:
/* Line 1792 of yacc.c  */
#line 5618 "parser.y"
    {
	check_repeated ("COLUMN", SYN_CLAUSE_17, &check_pic_duplicate);
	current_field->screen_column = (yyvsp[(5) - (5)]);
  }
    break;

  case 652:
/* Line 1792 of yacc.c  */
#line 5623 "parser.y"
    {
	check_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18, &check_pic_duplicate);
	current_field->screen_foreg = (yyvsp[(3) - (3)]);
  }
    break;

  case 653:
/* Line 1792 of yacc.c  */
#line 5628 "parser.y"
    {
	check_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19, &check_pic_duplicate);
	current_field->screen_backg = (yyvsp[(3) - (3)]);
  }
    break;

  case 662:
/* Line 1792 of yacc.c  */
#line 5641 "parser.y"
    {
	check_not_88_level ((yyvsp[(2) - (2)]));

	check_repeated ("USING", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[(2) - (2)]);
	current_field->screen_to = (yyvsp[(2) - (2)]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
    break;

  case 663:
/* Line 1792 of yacc.c  */
#line 5650 "parser.y"
    {
	check_repeated ("FROM", SYN_CLAUSE_21, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[(2) - (2)]);
  }
    break;

  case 664:
/* Line 1792 of yacc.c  */
#line 5655 "parser.y"
    {
	check_not_88_level ((yyvsp[(2) - (2)]));

	check_repeated ("TO", SYN_CLAUSE_22, &check_pic_duplicate);
	current_field->screen_to = (yyvsp[(2) - (2)]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
    break;

  case 673:
/* Line 1792 of yacc.c  */
#line 5686 "parser.y"
    {
	/* Nothing */
  }
    break;

  case 674:
/* Line 1792 of yacc.c  */
#line 5690 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
    break;

  case 675:
/* Line 1792 of yacc.c  */
#line 5694 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
    break;

  case 676:
/* Line 1792 of yacc.c  */
#line 5701 "parser.y"
    {
	/* Nothing */
  }
    break;

  case 677:
/* Line 1792 of yacc.c  */
#line 5705 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
    break;

  case 678:
/* Line 1792 of yacc.c  */
#line 5709 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
    break;

  case 679:
/* Line 1792 of yacc.c  */
#line 5717 "parser.y"
    {
	check_repeated ("OCCURS", SYN_CLAUSE_23, &check_pic_duplicate);
	current_field->occurs_max = cb_get_int ((yyvsp[(2) - (3)]));
	current_field->occurs_min = current_field->occurs_max;
	current_field->indexes++;
	current_field->flag_occurs = 1;
  }
    break;

  case 680:
/* Line 1792 of yacc.c  */
#line 5728 "parser.y"
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  }
    break;

  case 682:
/* Line 1792 of yacc.c  */
#line 5737 "parser.y"
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

  case 683:
/* Line 1792 of yacc.c  */
#line 5747 "parser.y"
    {
	if (current_program->flag_main && !current_program->flag_chained && (yyvsp[(3) - (7)])) {
		cb_error (_("Executable program requested but PROCEDURE/ENTRY has USING clause"));
	}
	/* Main entry point */
	emit_entry (current_program->program_id, 0, (yyvsp[(3) - (7)]));
	current_program->num_proc_params = cb_list_length ((yyvsp[(3) - (7)]));
	if (current_program->source_name) {
		emit_entry (current_program->source_name, 1, (yyvsp[(3) - (7)]));
	}
  }
    break;

  case 684:
/* Line 1792 of yacc.c  */
#line 5759 "parser.y"
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

  case 685:
/* Line 1792 of yacc.c  */
#line 5774 "parser.y"
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

  case 687:
/* Line 1792 of yacc.c  */
#line 5807 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 688:
/* Line 1792 of yacc.c  */
#line 5811 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
    break;

  case 689:
/* Line 1792 of yacc.c  */
#line 5816 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 690:
/* Line 1792 of yacc.c  */
#line 5824 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("CHAINING invalid in user FUNCTION"));
	} else {
		current_program->flag_chained = 1;
	}
  }
    break;

  case 691:
/* Line 1792 of yacc.c  */
#line 5833 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 692:
/* Line 1792 of yacc.c  */
#line 5843 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 693:
/* Line 1792 of yacc.c  */
#line 5845 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 694:
/* Line 1792 of yacc.c  */
#line 5850 "parser.y"
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

  case 696:
/* Line 1792 of yacc.c  */
#line 5874 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
    break;

  case 697:
/* Line 1792 of yacc.c  */
#line 5878 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error (_("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		CB_PENDING (_("BY VALUE parameters"));
		call_mode = CB_CALL_BY_VALUE;
	}
  }
    break;

  case 699:
/* Line 1792 of yacc.c  */
#line 5891 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO;
	}
  }
    break;

  case 700:
/* Line 1792 of yacc.c  */
#line 5899 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_4;
	}
  }
    break;

  case 701:
/* Line 1792 of yacc.c  */
#line 5907 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO | CB_SIZE_UNSIGNED;
	}
  }
    break;

  case 702:
/* Line 1792 of yacc.c  */
#line 5915 "parser.y"
    {
	unsigned char *s = CB_LITERAL ((yyvsp[(4) - (4)]))->data;

	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else if (CB_LITERAL ((yyvsp[(4) - (4)]))->size != 1) {
		cb_error_x ((yyvsp[(4) - (4)]), _("Invalid value for SIZE"));
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
			cb_error_x ((yyvsp[(4) - (4)]), _("Invalid value for SIZE"));
			break;
		}
	}
  }
    break;

  case 703:
/* Line 1792 of yacc.c  */
#line 5944 "parser.y"
    {
	unsigned char *s = CB_LITERAL ((yyvsp[(3) - (3)]))->data;

	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else if (CB_LITERAL ((yyvsp[(3) - (3)]))->size != 1) {
		cb_error_x ((yyvsp[(3) - (3)]), _("Invalid value for SIZE"));
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
			cb_error_x ((yyvsp[(3) - (3)]), _("Invalid value for SIZE"));
			break;
		}
	}
  }
    break;

  case 704:
/* Line 1792 of yacc.c  */
#line 5976 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 705:
/* Line 1792 of yacc.c  */
#line 5980 "parser.y"
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
		(yyval) = cb_int0;
	} else {
		(yyval) = cb_int1;
	}
  }
    break;

  case 706:
/* Line 1792 of yacc.c  */
#line 5992 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
    break;

  case 707:
/* Line 1792 of yacc.c  */
#line 5998 "parser.y"
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

  case 708:
/* Line 1792 of yacc.c  */
#line 6008 "parser.y"
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
					cb_error (_("Function RETURNING item may not be ANY LENGTH"));
				}

				f->flag_is_returning = 1;
			}
			current_program->returning = (yyvsp[(2) - (2)]);
		}
	}
  }
    break;

  case 710:
/* Line 1792 of yacc.c  */
#line 6040 "parser.y"
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
    break;

  case 711:
/* Line 1792 of yacc.c  */
#line 6046 "parser.y"
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

  case 716:
/* Line 1792 of yacc.c  */
#line 6084 "parser.y"
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

  case 718:
/* Line 1792 of yacc.c  */
#line 6102 "parser.y"
    {
	/* check_unreached = 0; */
  }
    break;

  case 719:
/* Line 1792 of yacc.c  */
#line 6112 "parser.y"
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

  case 720:
/* Line 1792 of yacc.c  */
#line 6156 "parser.y"
    {
	emit_statement (CB_TREE (current_section));
  }
    break;

  case 723:
/* Line 1792 of yacc.c  */
#line 6167 "parser.y"
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

  case 724:
/* Line 1792 of yacc.c  */
#line 6215 "parser.y"
    {
	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[(1) - (1)]), 0) != cb_error_node) {
		if (is_reserved_word (CB_NAME ((yyvsp[(1) - (1)])))) {
			cb_error_x ((yyvsp[(1) - (1)]), _("'%s' is not a statement"), CB_NAME ((yyvsp[(1) - (1)])));
		} else if (is_default_reserved_word (CB_NAME ((yyvsp[(1) - (1)])))) {
			cb_error_x ((yyvsp[(1) - (1)]), _("Unknown statement '%s'; it may exist in another dialect"),
				    CB_NAME ((yyvsp[(1) - (1)])));
		} else {
			cb_error_x ((yyvsp[(1) - (1)]), _("Unknown statement '%s'"), CB_NAME ((yyvsp[(1) - (1)])));
		}
	}
	YYERROR;
  }
    break;

  case 725:
/* Line 1792 of yacc.c  */
#line 6234 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 726:
/* Line 1792 of yacc.c  */
#line 6238 "parser.y"
    {
	if (in_declaratives) {
		cb_error (_("SECTION segment invalid within DECLARATIVE"));
	}
	if (cb_verify (cb_section_segments, "SECTION segment")) {
		current_program->flag_segments = 1;
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		(yyval) = NULL;
	}
  }
    break;

  case 727:
/* Line 1792 of yacc.c  */
#line 6256 "parser.y"
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
    break;

  case 728:
/* Line 1792 of yacc.c  */
#line 6261 "parser.y"
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  }
    break;

  case 729:
/* Line 1792 of yacc.c  */
#line 6266 "parser.y"
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[(1) - (3)]);
	current_statement = CB_STATEMENT ((yyvsp[(2) - (3)]));
  }
    break;

  case 730:
/* Line 1792 of yacc.c  */
#line 6274 "parser.y"
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

  case 731:
/* Line 1792 of yacc.c  */
#line 6301 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 732:
/* Line 1792 of yacc.c  */
#line 6305 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 782:
/* Line 1792 of yacc.c  */
#line 6361 "parser.y"
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

  case 783:
/* Line 1792 of yacc.c  */
#line 6375 "parser.y"
    {
	yyerrok;
	cobc_cs_check = 0;
  }
    break;

  case 784:
/* Line 1792 of yacc.c  */
#line 6386 "parser.y"
    {
	begin_statement ("ACCEPT", TERM_ACCEPT);
	if (cb_accept_update) {
		check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
	}
	if (cb_accept_auto) {
		check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
	}
  }
    break;

  case 786:
/* Line 1792 of yacc.c  */
#line 6401 "parser.y"
    {
	  check_duplicate = 0;
	  check_line_col_duplicate = 0;
	  line_column = NULL;
  }
    break;

  case 787:
/* Line 1792 of yacc.c  */
#line 6407 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept ((yyvsp[(1) - (4)]), line_column, current_statement->attr_ptr);
  }
    break;

  case 788:
/* Line 1792 of yacc.c  */
#line 6412 "parser.y"
    {
	cb_emit_accept_line_or_col ((yyvsp[(1) - (3)]), 0);
  }
    break;

  case 789:
/* Line 1792 of yacc.c  */
#line 6416 "parser.y"
    {
	cb_emit_accept_line_or_col ((yyvsp[(1) - (3)]), 1);
  }
    break;

  case 790:
/* Line 1792 of yacc.c  */
#line 6420 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[(1) - (4)]));
  }
    break;

  case 791:
/* Line 1792 of yacc.c  */
#line 6425 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[(1) - (3)]));
  }
    break;

  case 792:
/* Line 1792 of yacc.c  */
#line 6430 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[(1) - (4)]));
  }
    break;

  case 793:
/* Line 1792 of yacc.c  */
#line 6435 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[(1) - (3)]));
  }
    break;

  case 794:
/* Line 1792 of yacc.c  */
#line 6440 "parser.y"
    {
	cb_emit_accept_day_of_week ((yyvsp[(1) - (3)]));
  }
    break;

  case 795:
/* Line 1792 of yacc.c  */
#line 6444 "parser.y"
    {
	cb_emit_accept_escape_key ((yyvsp[(1) - (4)]));
  }
    break;

  case 796:
/* Line 1792 of yacc.c  */
#line 6448 "parser.y"
    {
	cb_emit_accept_exception_status ((yyvsp[(1) - (4)]));
  }
    break;

  case 797:
/* Line 1792 of yacc.c  */
#line 6452 "parser.y"
    {
	cb_emit_accept_time ((yyvsp[(1) - (3)]));
  }
    break;

  case 798:
/* Line 1792 of yacc.c  */
#line 6456 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[(1) - (4)]));
  }
    break;

  case 799:
/* Line 1792 of yacc.c  */
#line 6461 "parser.y"
    {
	cb_emit_accept_command_line ((yyvsp[(1) - (3)]));
  }
    break;

  case 800:
/* Line 1792 of yacc.c  */
#line 6465 "parser.y"
    {
	cb_emit_accept_environment ((yyvsp[(1) - (4)]));
  }
    break;

  case 801:
/* Line 1792 of yacc.c  */
#line 6469 "parser.y"
    {
	cb_emit_get_environment ((yyvsp[(4) - (5)]), (yyvsp[(1) - (5)]));
  }
    break;

  case 802:
/* Line 1792 of yacc.c  */
#line 6473 "parser.y"
    {
	cb_emit_accept_arg_number ((yyvsp[(1) - (3)]));
  }
    break;

  case 803:
/* Line 1792 of yacc.c  */
#line 6477 "parser.y"
    {
	cb_emit_accept_arg_value ((yyvsp[(1) - (4)]));
  }
    break;

  case 804:
/* Line 1792 of yacc.c  */
#line 6481 "parser.y"
    {
	cb_emit_accept_mnemonic ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 805:
/* Line 1792 of yacc.c  */
#line 6485 "parser.y"
    {
	cb_emit_accept_name ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 807:
/* Line 1792 of yacc.c  */
#line 6493 "parser.y"
    {
	(yyval) = cb_null;
  }
    break;

  case 813:
/* Line 1792 of yacc.c  */
#line 6511 "parser.y"
    {
	  check_repeated ("FROM CRT", SYN_CLAUSE_1, &check_duplicate);
  }
    break;

  case 814:
/* Line 1792 of yacc.c  */
#line 6515 "parser.y"
    {
	  check_repeated ("MODE IS BLOCK", SYN_CLAUSE_2, &check_duplicate);
  }
    break;

  case 818:
/* Line 1792 of yacc.c  */
#line 6528 "parser.y"
    {
	check_attr_with_conflict ("LINE", SYN_CLAUSE_1,
				  _("AT screen-location"), SYN_CLAUSE_3,
				  &check_line_col_duplicate);

	if (!line_column) {
		line_column = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), cb_int0);
	} else {
		CB_PAIR_X (line_column) = (yyvsp[(2) - (2)]);
	}
  }
    break;

  case 819:
/* Line 1792 of yacc.c  */
#line 6540 "parser.y"
    {
	check_attr_with_conflict ("COLUMN", SYN_CLAUSE_2,
				  _("AT screen-location"), SYN_CLAUSE_3,
				  &check_line_col_duplicate);

	if(!line_column) {
		line_column = CB_BUILD_PAIR (cb_int0, (yyvsp[(2) - (2)]));
	} else {
		CB_PAIR_Y (line_column) = (yyvsp[(2) - (2)]);
	}
  }
    break;

  case 820:
/* Line 1792 of yacc.c  */
#line 6552 "parser.y"
    {
	check_attr_with_conflict (_("AT screen-location"), SYN_CLAUSE_3,
				  _("LINE or COLUMN"), SYN_CLAUSE_1 | SYN_CLAUSE_2,
				  &check_line_col_duplicate);

	line_column = (yyvsp[(2) - (2)]);
  }
    break;

  case 821:
/* Line 1792 of yacc.c  */
#line 6562 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 822:
/* Line 1792 of yacc.c  */
#line 6566 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 823:
/* Line 1792 of yacc.c  */
#line 6567 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 824:
/* Line 1792 of yacc.c  */
#line 6572 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 825:
/* Line 1792 of yacc.c  */
#line 6579 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
  }
    break;

  case 826:
/* Line 1792 of yacc.c  */
#line 6583 "parser.y"
    {
	if (cb_accept_auto) {
		remove_attrib (COB_SCREEN_AUTO);
	}
  }
    break;

  case 827:
/* Line 1792 of yacc.c  */
#line 6589 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
    break;

  case 828:
/* Line 1792 of yacc.c  */
#line 6593 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
    break;

  case 829:
/* Line 1792 of yacc.c  */
#line 6597 "parser.y"
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
    break;

  case 830:
/* Line 1792 of yacc.c  */
#line 6601 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_FULL);
  }
    break;

  case 831:
/* Line 1792 of yacc.c  */
#line 6605 "parser.y"
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
    break;

  case 832:
/* Line 1792 of yacc.c  */
#line 6611 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LEFTLINE);
  }
    break;

  case 833:
/* Line 1792 of yacc.c  */
#line 6615 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWER);
  }
    break;

  case 834:
/* Line 1792 of yacc.c  */
#line 6619 "parser.y"
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 835:
/* Line 1792 of yacc.c  */
#line 6625 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_NO_ECHO);
  }
    break;

  case 836:
/* Line 1792 of yacc.c  */
#line 6629 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
    break;

  case 837:
/* Line 1792 of yacc.c  */
#line 6633 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, (yyvsp[(4) - (4)]), NULL, COB_SCREEN_PROMPT);
  }
    break;

  case 838:
/* Line 1792 of yacc.c  */
#line 6637 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_PROMPT);
  }
    break;

  case 839:
/* Line 1792 of yacc.c  */
#line 6641 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REQUIRED);
  }
    break;

  case 840:
/* Line 1792 of yacc.c  */
#line 6645 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
    break;

  case 841:
/* Line 1792 of yacc.c  */
#line 6649 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_SECURE);
  }
    break;

  case 842:
/* Line 1792 of yacc.c  */
#line 6653 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[(4) - (4)]), 0);
  }
    break;

  case 843:
/* Line 1792 of yacc.c  */
#line 6657 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[(3) - (3)]), 0);
  }
    break;

  case 844:
/* Line 1792 of yacc.c  */
#line 6661 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
    break;

  case 845:
/* Line 1792 of yacc.c  */
#line 6665 "parser.y"
    {
	if (cb_accept_update) {
		remove_attrib (COB_SCREEN_UPDATE);
	}
  }
    break;

  case 846:
/* Line 1792 of yacc.c  */
#line 6671 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
  }
    break;

  case 847:
/* Line 1792 of yacc.c  */
#line 6675 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPPER);
  }
    break;

  case 848:
/* Line 1792 of yacc.c  */
#line 6679 "parser.y"
    {
	check_attribs ((yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 849:
/* Line 1792 of yacc.c  */
#line 6683 "parser.y"
    {
	check_attribs (NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 850:
/* Line 1792 of yacc.c  */
#line 6687 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, 0);
  }
    break;

  case 851:
/* Line 1792 of yacc.c  */
#line 6691 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
    break;

  case 852:
/* Line 1792 of yacc.c  */
#line 6695 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, 0);
  }
    break;

  case 855:
/* Line 1792 of yacc.c  */
#line 6707 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  }
    break;

  case 856:
/* Line 1792 of yacc.c  */
#line 6711 "parser.y"
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

  case 857:
/* Line 1792 of yacc.c  */
#line 6728 "parser.y"
    {
	begin_statement ("ADD", TERM_ADD);
  }
    break;

  case 859:
/* Line 1792 of yacc.c  */
#line 6737 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '+', cb_build_binary_list ((yyvsp[(1) - (4)]), '+'));
  }
    break;

  case 860:
/* Line 1792 of yacc.c  */
#line 6741 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(4) - (5)]), 0, cb_build_binary_list ((yyvsp[(1) - (5)]), '+'));
  }
    break;

  case 861:
/* Line 1792 of yacc.c  */
#line 6745 "parser.y"
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[(4) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 863:
/* Line 1792 of yacc.c  */
#line 6752 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 864:
/* Line 1792 of yacc.c  */
#line 6759 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  }
    break;

  case 865:
/* Line 1792 of yacc.c  */
#line 6763 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  }
    break;

  case 866:
/* Line 1792 of yacc.c  */
#line 6773 "parser.y"
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  }
    break;

  case 868:
/* Line 1792 of yacc.c  */
#line 6782 "parser.y"
    {
	cb_emit_allocate ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), NULL, (yyvsp[(2) - (3)]));
  }
    break;

  case 869:
/* Line 1792 of yacc.c  */
#line 6786 "parser.y"
    {
	if ((yyvsp[(4) - (4)]) == NULL) {
		cb_error_x (CB_TREE (current_statement),
			    _("ALLOCATE CHARACTERS requires RETURNING clause"));
	} else {
		cb_emit_allocate (NULL, (yyvsp[(4) - (4)]), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
	}
  }
    break;

  case 870:
/* Line 1792 of yacc.c  */
#line 6797 "parser.y"
    { (yyval) = NULL; }
    break;

  case 871:
/* Line 1792 of yacc.c  */
#line 6798 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 872:
/* Line 1792 of yacc.c  */
#line 6806 "parser.y"
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER statement");
  }
    break;

  case 876:
/* Line 1792 of yacc.c  */
#line 6820 "parser.y"
    {
	cb_emit_alter ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 879:
/* Line 1792 of yacc.c  */
#line 6832 "parser.y"
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
	call_nothing = 0;
  }
    break;

  case 881:
/* Line 1792 of yacc.c  */
#line 6847 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(2) - (5)])) &&
	    current_program->prog_type == CB_PROGRAM_TYPE &&
	    !current_program->flag_recursive &&
	    !strcmp ((const char *)(CB_LITERAL((yyvsp[(2) - (5)]))->data), current_program->orig_program_id)) {
		cb_warning_x ((yyvsp[(2) - (5)]), _("Recursive program call - assuming RECURSIVE attribute"));
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

  case 882:
/* Line 1792 of yacc.c  */
#line 6869 "parser.y"
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
    break;

  case 883:
/* Line 1792 of yacc.c  */
#line 6874 "parser.y"
    {
	(yyval) = cb_int (CB_CONV_STATIC_LINK);
	cobc_cs_check = 0;
  }
    break;

  case 884:
/* Line 1792 of yacc.c  */
#line 6879 "parser.y"
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  }
    break;

  case 885:
/* Line 1792 of yacc.c  */
#line 6884 "parser.y"
    {
	cb_tree		x;

	x = cb_ref ((yyvsp[(1) - (1)]));
	if (CB_VALID_TREE (x)) {
		if (CB_SYSTEM_NAME(x)->token != CB_FEATURE_CONVENTION) {
			cb_error_x ((yyvsp[(1) - (1)]), _("Invalid mnemonic name"));
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

  case 886:
/* Line 1792 of yacc.c  */
#line 6904 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 887:
/* Line 1792 of yacc.c  */
#line 6908 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
    break;

  case 888:
/* Line 1792 of yacc.c  */
#line 6913 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > COB_MAX_FIELD_PARAMS) {
		cb_error_x (CB_TREE (current_statement),
			    _("Number of parameters exceeds maximum %d"),
			    COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 889:
/* Line 1792 of yacc.c  */
#line 6924 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 890:
/* Line 1792 of yacc.c  */
#line 6926 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 891:
/* Line 1792 of yacc.c  */
#line 6931 "parser.y"
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error_x (CB_TREE (current_statement),
			    _("OMITTED only allowed with BY REFERENCE"));
	}
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_null);
  }
    break;

  case 892:
/* Line 1792 of yacc.c  */
#line 6939 "parser.y"
    {
	int	save_mode;

	save_mode = call_mode;
	if (call_mode != CB_CALL_BY_REFERENCE) {
		if (CB_FILE_P ((yyvsp[(3) - (3)])) || (CB_REFERENCE_P ((yyvsp[(3) - (3)])) &&
		    CB_FILE_P (CB_REFERENCE ((yyvsp[(3) - (3)]))->value))) {
			cb_error_x (CB_TREE (current_statement),
				    _("Invalid file name reference"));
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

  case 894:
/* Line 1792 of yacc.c  */
#line 6965 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
    break;

  case 895:
/* Line 1792 of yacc.c  */
#line 6969 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY CONTENT");
	} else {
		call_mode = CB_CALL_BY_CONTENT;
	}
  }
    break;

  case 896:
/* Line 1792 of yacc.c  */
#line 6978 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
    break;

  case 897:
/* Line 1792 of yacc.c  */
#line 6990 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 898:
/* Line 1792 of yacc.c  */
#line 6994 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 899:
/* Line 1792 of yacc.c  */
#line 6998 "parser.y"
    {
	(yyval) = cb_null;
  }
    break;

  case 900:
/* Line 1792 of yacc.c  */
#line 7002 "parser.y"
    {
	call_nothing = CB_CONV_NO_RET_UPD;
	(yyval) = cb_null;
  }
    break;

  case 901:
/* Line 1792 of yacc.c  */
#line 7007 "parser.y"
    {
	struct cb_field	*f;

	if (cb_ref ((yyvsp[(4) - (4)])) != cb_error_node) {
		f = CB_FIELD_PTR ((yyvsp[(4) - (4)]));
		if (f->level != 1 && f->level != 77) {
			cb_error (_("RETURNING item must have level 01 or 77"));
			(yyval) = NULL;
		} else if (f->storage != CB_STORAGE_LINKAGE &&
			   !f->flag_item_based) {
			cb_error (_("RETURNING item is neither in LINKAGE SECTION nor is it BASED"));
			(yyval) = NULL;
		} else {
			(yyval) = cb_build_address ((yyvsp[(4) - (4)]));
		}
	} else {
		(yyval) = NULL;
	}
  }
    break;

  case 906:
/* Line 1792 of yacc.c  */
#line 7040 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR (NULL, NULL);
  }
    break;

  case 907:
/* Line 1792 of yacc.c  */
#line 7044 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 908:
/* Line 1792 of yacc.c  */
#line 7048 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		cb_verify (cb_not_exception_before_exception, "NOT EXCEPTION before EXCEPTION");
	}
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 909:
/* Line 1792 of yacc.c  */
#line 7058 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 910:
/* Line 1792 of yacc.c  */
#line 7062 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 911:
/* Line 1792 of yacc.c  */
#line 7069 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 912:
/* Line 1792 of yacc.c  */
#line 7073 "parser.y"
    {
	cb_verify (cb_call_overflow, "ON OVERFLOW clause");
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 913:
/* Line 1792 of yacc.c  */
#line 7081 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 914:
/* Line 1792 of yacc.c  */
#line 7085 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 915:
/* Line 1792 of yacc.c  */
#line 7092 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 916:
/* Line 1792 of yacc.c  */
#line 7099 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  }
    break;

  case 917:
/* Line 1792 of yacc.c  */
#line 7103 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  }
    break;

  case 918:
/* Line 1792 of yacc.c  */
#line 7113 "parser.y"
    {
	begin_statement ("CANCEL", 0);
  }
    break;

  case 920:
/* Line 1792 of yacc.c  */
#line 7121 "parser.y"
    {
	cb_emit_cancel ((yyvsp[(1) - (1)]));
  }
    break;

  case 921:
/* Line 1792 of yacc.c  */
#line 7125 "parser.y"
    {
	cb_emit_cancel ((yyvsp[(2) - (2)]));
  }
    break;

  case 922:
/* Line 1792 of yacc.c  */
#line 7135 "parser.y"
    {
	begin_statement ("CLOSE", 0);
  }
    break;

  case 924:
/* Line 1792 of yacc.c  */
#line 7143 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 925:
/* Line 1792 of yacc.c  */
#line 7148 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 926:
/* Line 1792 of yacc.c  */
#line 7155 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_NORMAL); }
    break;

  case 927:
/* Line 1792 of yacc.c  */
#line 7156 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_UNIT); }
    break;

  case 928:
/* Line 1792 of yacc.c  */
#line 7157 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); }
    break;

  case 929:
/* Line 1792 of yacc.c  */
#line 7158 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); }
    break;

  case 930:
/* Line 1792 of yacc.c  */
#line 7159 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_LOCK); }
    break;

  case 931:
/* Line 1792 of yacc.c  */
#line 7167 "parser.y"
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
    break;

  case 933:
/* Line 1792 of yacc.c  */
#line 7176 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(1) - (4)]), 0, (yyvsp[(3) - (4)]));
  }
    break;

  case 934:
/* Line 1792 of yacc.c  */
#line 7183 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  }
    break;

  case 935:
/* Line 1792 of yacc.c  */
#line 7187 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  }
    break;

  case 936:
/* Line 1792 of yacc.c  */
#line 7197 "parser.y"
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
    break;

  case 937:
/* Line 1792 of yacc.c  */
#line 7208 "parser.y"
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

  case 938:
/* Line 1792 of yacc.c  */
#line 7225 "parser.y"
    {
	begin_statement ("DELETE", TERM_DELETE);
  }
    break;

  case 940:
/* Line 1792 of yacc.c  */
#line 7234 "parser.y"
    {
	cb_emit_delete ((yyvsp[(1) - (3)]));
  }
    break;

  case 942:
/* Line 1792 of yacc.c  */
#line 7242 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[(1) - (1)]));
  }
    break;

  case 943:
/* Line 1792 of yacc.c  */
#line 7247 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[(2) - (2)]));
  }
    break;

  case 944:
/* Line 1792 of yacc.c  */
#line 7255 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  }
    break;

  case 945:
/* Line 1792 of yacc.c  */
#line 7259 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  }
    break;

  case 946:
/* Line 1792 of yacc.c  */
#line 7269 "parser.y"
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
  }
    break;

  case 948:
/* Line 1792 of yacc.c  */
#line 7279 "parser.y"
    {
	cb_emit_env_name ((yyvsp[(1) - (3)]));
  }
    break;

  case 949:
/* Line 1792 of yacc.c  */
#line 7283 "parser.y"
    {
	cb_emit_env_value ((yyvsp[(1) - (3)]));
  }
    break;

  case 950:
/* Line 1792 of yacc.c  */
#line 7287 "parser.y"
    {
	cb_emit_arg_number ((yyvsp[(1) - (3)]));
  }
    break;

  case 951:
/* Line 1792 of yacc.c  */
#line 7291 "parser.y"
    {
	cb_emit_command_line ((yyvsp[(1) - (3)]));
  }
    break;

  case 953:
/* Line 1792 of yacc.c  */
#line 7300 "parser.y"
    {
	  emit_default_displays_for_x_list ((struct cb_list *) (yyvsp[(2) - (2)]));
  }
    break;

  case 954:
/* Line 1792 of yacc.c  */
#line 7304 "parser.y"
    {
	  emit_default_displays_for_x_list ((struct cb_list *) (yyvsp[(1) - (1)]));
  }
    break;

  case 957:
/* Line 1792 of yacc.c  */
#line 7316 "parser.y"
    {
	check_duplicate = 0;
	check_line_col_duplicate = 0;
  	advancing_value = cb_int1;
	upon_value = NULL;
	line_column = NULL;
  }
    break;

  case 958:
/* Line 1792 of yacc.c  */
#line 7324 "parser.y"
    {
	/* What if I want to allow implied LINE/COL? */
	int     is_screen_field =
		contains_only_screen_field ((struct cb_list *) (yyvsp[(1) - (3)]));
	int	screen_display =
	        is_screen_field
		|| upon_value == cb_null
		|| line_column
		|| current_statement->attr_ptr;

	if ((yyvsp[(1) - (3)]) == cb_null) {
		error_if_no_advancing_in_screen_display (advancing_value);

		cb_emit_display_omitted (line_column,
					 current_statement->attr_ptr);
	} else {
		if (cb_list_length ((yyvsp[(1) - (3)])) > 1 && screen_display) {
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

			cb_emit_display ((yyvsp[(1) - (3)]), cb_null, cb_int1, line_column,
					 current_statement->attr_ptr);
		} else { /* device display */
			if (upon_value == NULL) {
				upon_value = get_default_display_device ();
			}
			cb_emit_display ((yyvsp[(1) - (3)]), upon_value, advancing_value, NULL, NULL);
		}
	}
  }
    break;

  case 959:
/* Line 1792 of yacc.c  */
#line 7375 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 960:
/* Line 1792 of yacc.c  */
#line 7379 "parser.y"
    {
	CB_PENDING ("DISPLAY OMITTED");
	(yyval) = cb_null;
  }
    break;

  case 963:
/* Line 1792 of yacc.c  */
#line 7392 "parser.y"
    {
	check_repeated ("UPON", SYN_CLAUSE_1, &check_duplicate);
  }
    break;

  case 964:
/* Line 1792 of yacc.c  */
#line 7396 "parser.y"
    {
 	check_repeated ("NO ADVANCING", SYN_CLAUSE_2, &check_duplicate);
	advancing_value = cb_int0;
  }
    break;

  case 965:
/* Line 1792 of yacc.c  */
#line 7401 "parser.y"
    {
	check_repeated ("MODE IS BLOCK", SYN_CLAUSE_3, &check_duplicate);
  }
    break;

  case 968:
/* Line 1792 of yacc.c  */
#line 7410 "parser.y"
    {
	upon_value = cb_build_display_mnemonic ((yyvsp[(2) - (2)]));
  }
    break;

  case 969:
/* Line 1792 of yacc.c  */
#line 7414 "parser.y"
    {
	upon_value = cb_build_display_name ((yyvsp[(2) - (2)]));
  }
    break;

  case 970:
/* Line 1792 of yacc.c  */
#line 7418 "parser.y"
    {
	upon_value = cb_int0;
  }
    break;

  case 974:
/* Line 1792 of yacc.c  */
#line 7431 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
    break;

  case 975:
/* Line 1792 of yacc.c  */
#line 7435 "parser.y"
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "BLANK LINE", COB_SCREEN_BLANK_LINE,
				     "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
    break;

  case 976:
/* Line 1792 of yacc.c  */
#line 7441 "parser.y"
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN,
				     "BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
    break;

  case 977:
/* Line 1792 of yacc.c  */
#line 7447 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
    break;

  case 978:
/* Line 1792 of yacc.c  */
#line 7451 "parser.y"
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
    break;

  case 979:
/* Line 1792 of yacc.c  */
#line 7455 "parser.y"
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "ERASE EOL", COB_SCREEN_ERASE_EOL,
				     "ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
    break;

  case 980:
/* Line 1792 of yacc.c  */
#line 7461 "parser.y"
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "ERASE EOS", COB_SCREEN_ERASE_EOS,
				     "ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
    break;

  case 981:
/* Line 1792 of yacc.c  */
#line 7467 "parser.y"
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
    break;

  case 982:
/* Line 1792 of yacc.c  */
#line 7473 "parser.y"
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 983:
/* Line 1792 of yacc.c  */
#line 7479 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
    break;

  case 984:
/* Line 1792 of yacc.c  */
#line 7483 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
    break;

  case 985:
/* Line 1792 of yacc.c  */
#line 7487 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[(3) - (3)]), 0);
  }
    break;

  case 986:
/* Line 1792 of yacc.c  */
#line 7491 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
    break;

  case 987:
/* Line 1792 of yacc.c  */
#line 7495 "parser.y"
    {
	check_attribs ((yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 988:
/* Line 1792 of yacc.c  */
#line 7499 "parser.y"
    {
	check_attribs (NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 989:
/* Line 1792 of yacc.c  */
#line 7503 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, 0);
  }
    break;

  case 990:
/* Line 1792 of yacc.c  */
#line 7507 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
    break;

  case 991:
/* Line 1792 of yacc.c  */
#line 7514 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  }
    break;

  case 992:
/* Line 1792 of yacc.c  */
#line 7518 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  }
    break;

  case 993:
/* Line 1792 of yacc.c  */
#line 7528 "parser.y"
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
    break;

  case 995:
/* Line 1792 of yacc.c  */
#line 7537 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '/', (yyvsp[(1) - (4)]));
  }
    break;

  case 996:
/* Line 1792 of yacc.c  */
#line 7541 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(3) - (6)]), '/', (yyvsp[(1) - (6)])));
  }
    break;

  case 997:
/* Line 1792 of yacc.c  */
#line 7545 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(1) - (6)]), '/', (yyvsp[(3) - (6)])));
  }
    break;

  case 998:
/* Line 1792 of yacc.c  */
#line 7549 "parser.y"
    {
	cb_emit_divide ((yyvsp[(3) - (8)]), (yyvsp[(1) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
  }
    break;

  case 999:
/* Line 1792 of yacc.c  */
#line 7553 "parser.y"
    {
	cb_emit_divide ((yyvsp[(1) - (8)]), (yyvsp[(3) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
  }
    break;

  case 1000:
/* Line 1792 of yacc.c  */
#line 7560 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  }
    break;

  case 1001:
/* Line 1792 of yacc.c  */
#line 7564 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  }
    break;

  case 1002:
/* Line 1792 of yacc.c  */
#line 7574 "parser.y"
    {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
  }
    break;

  case 1004:
/* Line 1792 of yacc.c  */
#line 7583 "parser.y"
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

  case 1005:
/* Line 1792 of yacc.c  */
#line 7601 "parser.y"
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
    break;

  case 1007:
/* Line 1792 of yacc.c  */
#line 7625 "parser.y"
    {
	cb_emit_evaluate ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	eval_level--;
  }
    break;

  case 1008:
/* Line 1792 of yacc.c  */
#line 7632 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1009:
/* Line 1792 of yacc.c  */
#line 7634 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1010:
/* Line 1792 of yacc.c  */
#line 7639 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	eval_check[eval_level][eval_inc++] = (yyvsp[(1) - (1)]);
	if (eval_inc >= EVAL_DEPTH) {
		cb_error (_("Maximum evaluate depth exceeded (%d)"),
			  EVAL_DEPTH);
		eval_inc = 0;
		YYERROR;
	}
  }
    break;

  case 1011:
/* Line 1792 of yacc.c  */
#line 7650 "parser.y"
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
    break;

  case 1012:
/* Line 1792 of yacc.c  */
#line 7661 "parser.y"
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
    break;

  case 1013:
/* Line 1792 of yacc.c  */
#line 7675 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1014:
/* Line 1792 of yacc.c  */
#line 7679 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1015:
/* Line 1792 of yacc.c  */
#line 7685 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1016:
/* Line 1792 of yacc.c  */
#line 7687 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1017:
/* Line 1792 of yacc.c  */
#line 7693 "parser.y"
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
	eval_inc2 = 0;
  }
    break;

  case 1018:
/* Line 1792 of yacc.c  */
#line 7702 "parser.y"
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[(3) - (3)]), NULL);
	eval_inc2 = 0;
  }
    break;

  case 1019:
/* Line 1792 of yacc.c  */
#line 7710 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(2) - (2)]));
	eval_inc2 = 0;
  }
    break;

  case 1020:
/* Line 1792 of yacc.c  */
#line 7716 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
	eval_inc2 = 0;
  }
    break;

  case 1021:
/* Line 1792 of yacc.c  */
#line 7723 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1022:
/* Line 1792 of yacc.c  */
#line 7725 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1023:
/* Line 1792 of yacc.c  */
#line 7730 "parser.y"
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
    break;

  case 1024:
/* Line 1792 of yacc.c  */
#line 7791 "parser.y"
    { (yyval) = cb_any; eval_inc2++; }
    break;

  case 1025:
/* Line 1792 of yacc.c  */
#line 7792 "parser.y"
    { (yyval) = cb_true; eval_inc2++; }
    break;

  case 1026:
/* Line 1792 of yacc.c  */
#line 7793 "parser.y"
    { (yyval) = cb_false; eval_inc2++; }
    break;

  case 1027:
/* Line 1792 of yacc.c  */
#line 7797 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1028:
/* Line 1792 of yacc.c  */
#line 7798 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1029:
/* Line 1792 of yacc.c  */
#line 7803 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  }
    break;

  case 1030:
/* Line 1792 of yacc.c  */
#line 7807 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  }
    break;

  case 1031:
/* Line 1792 of yacc.c  */
#line 7817 "parser.y"
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
    break;

  case 1032:
/* Line 1792 of yacc.c  */
#line 7822 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 1034:
/* Line 1792 of yacc.c  */
#line 7830 "parser.y"
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
	if ((yyvsp[(2) - (2)]) != NULL) {
		cb_emit_move ((yyvsp[(2) - (2)]), CB_LIST_INIT (current_program->cb_return_code));
	}
	current_statement->name = (const char *)"EXIT PROGRAM";
	cb_emit_exit (0);
  }
    break;

  case 1035:
/* Line 1792 of yacc.c  */
#line 7851 "parser.y"
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
    break;

  case 1036:
/* Line 1792 of yacc.c  */
#line 7865 "parser.y"
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

  case 1037:
/* Line 1792 of yacc.c  */
#line 7887 "parser.y"
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

  case 1038:
/* Line 1792 of yacc.c  */
#line 7909 "parser.y"
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

  case 1039:
/* Line 1792 of yacc.c  */
#line 7929 "parser.y"
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

  case 1040:
/* Line 1792 of yacc.c  */
#line 7951 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1041:
/* Line 1792 of yacc.c  */
#line 7952 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1042:
/* Line 1792 of yacc.c  */
#line 7960 "parser.y"
    {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
    break;

  case 1044:
/* Line 1792 of yacc.c  */
#line 7969 "parser.y"
    {
	cb_emit_free ((yyvsp[(1) - (1)]));
  }
    break;

  case 1045:
/* Line 1792 of yacc.c  */
#line 7979 "parser.y"
    {
	begin_statement ("GENERATE", 0);
	CB_PENDING("GENERATE");
  }
    break;

  case 1048:
/* Line 1792 of yacc.c  */
#line 7995 "parser.y"
    {
	if (!current_paragraph->flag_statement) {
		current_paragraph->flag_first_is_goto = 1;
	}
	begin_statement ("GO TO", 0);
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1050:
/* Line 1792 of yacc.c  */
#line 8008 "parser.y"
    {
	cb_emit_goto ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
	start_debug = save_debug;
  }
    break;

  case 1051:
/* Line 1792 of yacc.c  */
#line 8016 "parser.y"
    {
	check_unreached = 1;
	(yyval) = NULL;
  }
    break;

  case 1052:
/* Line 1792 of yacc.c  */
#line 8021 "parser.y"
    {
	check_unreached = 0;
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 1053:
/* Line 1792 of yacc.c  */
#line 8032 "parser.y"
    {
	begin_statement ("GOBACK", 0);
	check_unreached = 1;
	if ((yyvsp[(2) - (2)]) != NULL) {
		cb_emit_move ((yyvsp[(2) - (2)]), CB_LIST_INIT (current_program->cb_return_code));
	}
	cb_emit_exit (1U);
  }
    break;

  case 1054:
/* Line 1792 of yacc.c  */
#line 8047 "parser.y"
    {
	begin_statement ("IF", TERM_IF);
  }
    break;

  case 1056:
/* Line 1792 of yacc.c  */
#line 8056 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1057:
/* Line 1792 of yacc.c  */
#line 8060 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[(2) - (2)]));
  }
    break;

  case 1058:
/* Line 1792 of yacc.c  */
#line 8064 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[(1) - (1)]), NULL);
  }
    break;

  case 1059:
/* Line 1792 of yacc.c  */
#line 8071 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  }
    break;

  case 1060:
/* Line 1792 of yacc.c  */
#line 8075 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  }
    break;

  case 1061:
/* Line 1792 of yacc.c  */
#line 8085 "parser.y"
    {
	begin_statement ("INITIALIZE", 0);
  }
    break;

  case 1063:
/* Line 1792 of yacc.c  */
#line 8094 "parser.y"
    {
	cb_emit_initialize ((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));
  }
    break;

  case 1064:
/* Line 1792 of yacc.c  */
#line 8100 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1065:
/* Line 1792 of yacc.c  */
#line 8101 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1066:
/* Line 1792 of yacc.c  */
#line 8105 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1067:
/* Line 1792 of yacc.c  */
#line 8106 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1068:
/* Line 1792 of yacc.c  */
#line 8107 "parser.y"
    { (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 1069:
/* Line 1792 of yacc.c  */
#line 8112 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1070:
/* Line 1792 of yacc.c  */
#line 8116 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1071:
/* Line 1792 of yacc.c  */
#line 8123 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1072:
/* Line 1792 of yacc.c  */
#line 8128 "parser.y"
    {
	(yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1073:
/* Line 1792 of yacc.c  */
#line 8135 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1074:
/* Line 1792 of yacc.c  */
#line 8141 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); }
    break;

  case 1075:
/* Line 1792 of yacc.c  */
#line 8142 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); }
    break;

  case 1076:
/* Line 1792 of yacc.c  */
#line 8143 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); }
    break;

  case 1077:
/* Line 1792 of yacc.c  */
#line 8144 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
    break;

  case 1078:
/* Line 1792 of yacc.c  */
#line 8145 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
    break;

  case 1079:
/* Line 1792 of yacc.c  */
#line 8146 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); }
    break;

  case 1080:
/* Line 1792 of yacc.c  */
#line 8147 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
    break;

  case 1081:
/* Line 1792 of yacc.c  */
#line 8152 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1082:
/* Line 1792 of yacc.c  */
#line 8156 "parser.y"
    {
	(yyval) = cb_true;
  }
    break;

  case 1083:
/* Line 1792 of yacc.c  */
#line 8165 "parser.y"
    {
	begin_statement ("INITIATE", 0);
	CB_PENDING("INITIATE");
  }
    break;

  case 1085:
/* Line 1792 of yacc.c  */
#line 8174 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
	}
  }
    break;

  case 1086:
/* Line 1792 of yacc.c  */
#line 8180 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(2) - (2)]) != cb_error_node) {
	}
  }
    break;

  case 1087:
/* Line 1792 of yacc.c  */
#line 8191 "parser.y"
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
    break;

  case 1090:
/* Line 1792 of yacc.c  */
#line 8204 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1091:
/* Line 1792 of yacc.c  */
#line 8208 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1092:
/* Line 1792 of yacc.c  */
#line 8212 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1097:
/* Line 1792 of yacc.c  */
#line 8228 "parser.y"
    {
	previous_tallying_phrase = NO_PHRASE;
	cb_init_tallying ();
  }
    break;

  case 1098:
/* Line 1792 of yacc.c  */
#line 8233 "parser.y"
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

  case 1099:
/* Line 1792 of yacc.c  */
#line 8249 "parser.y"
    {
	cb_emit_inspect ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]), cb_int1, 1);
	inspect_keyword = 0;
  }
    break;

  case 1100:
/* Line 1792 of yacc.c  */
#line 8259 "parser.y"
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));
	cb_emit_inspect ((yyvsp[(0) - (5)]), x, cb_int0, 2);
  }
    break;

  case 1101:
/* Line 1792 of yacc.c  */
#line 8268 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1102:
/* Line 1792 of yacc.c  */
#line 8272 "parser.y"
    {
	(yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1103:
/* Line 1792 of yacc.c  */
#line 8279 "parser.y"
    {
	check_preceding_tallying_phrases (FOR_PHRASE);
	(yyval) = cb_build_tallying_data ((yyvsp[(1) - (2)]));
  }
    break;

  case 1104:
/* Line 1792 of yacc.c  */
#line 8284 "parser.y"
    {
	check_preceding_tallying_phrases (CHARACTERS_PHRASE);
	(yyval) = cb_build_tallying_characters ((yyvsp[(2) - (2)]));
  }
    break;

  case 1105:
/* Line 1792 of yacc.c  */
#line 8289 "parser.y"
    {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	(yyval) = cb_build_tallying_all ();
  }
    break;

  case 1106:
/* Line 1792 of yacc.c  */
#line 8294 "parser.y"
    {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	(yyval) = cb_build_tallying_leading ();
  }
    break;

  case 1107:
/* Line 1792 of yacc.c  */
#line 8299 "parser.y"
    {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	(yyval) = cb_build_tallying_trailing ();
  }
    break;

  case 1108:
/* Line 1792 of yacc.c  */
#line 8304 "parser.y"
    {
	check_preceding_tallying_phrases (VALUE_REGION_PHRASE);
	(yyval) = cb_build_tallying_value ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1109:
/* Line 1792 of yacc.c  */
#line 8311 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1110:
/* Line 1792 of yacc.c  */
#line 8312 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1111:
/* Line 1792 of yacc.c  */
#line 8317 "parser.y"
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
	inspect_keyword = 0;
  }
    break;

  case 1112:
/* Line 1792 of yacc.c  */
#line 8322 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1114:
/* Line 1792 of yacc.c  */
#line 8329 "parser.y"
    { inspect_keyword = 1; }
    break;

  case 1115:
/* Line 1792 of yacc.c  */
#line 8330 "parser.y"
    { inspect_keyword = 2; }
    break;

  case 1116:
/* Line 1792 of yacc.c  */
#line 8331 "parser.y"
    { inspect_keyword = 3; }
    break;

  case 1117:
/* Line 1792 of yacc.c  */
#line 8332 "parser.y"
    { inspect_keyword = 4; }
    break;

  case 1118:
/* Line 1792 of yacc.c  */
#line 8337 "parser.y"
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

  case 1119:
/* Line 1792 of yacc.c  */
#line 8364 "parser.y"
    {
	(yyval) = cb_build_inspect_region_start ();
  }
    break;

  case 1120:
/* Line 1792 of yacc.c  */
#line 8368 "parser.y"
    {
	(yyval) = cb_list_add (cb_build_inspect_region_start (), (yyvsp[(1) - (1)]));
  }
    break;

  case 1121:
/* Line 1792 of yacc.c  */
#line 8372 "parser.y"
    {	
	(yyval) = cb_list_add (cb_build_inspect_region_start (), (yyvsp[(1) - (1)]));  
  }
    break;

  case 1122:
/* Line 1792 of yacc.c  */
#line 8376 "parser.y"
    {
	(yyval) = cb_list_add (cb_list_add (cb_build_inspect_region_start (), (yyvsp[(1) - (2)])), (yyvsp[(2) - (2)]));
  }
    break;

  case 1123:
/* Line 1792 of yacc.c  */
#line 8380 "parser.y"
    {
	(yyval) = cb_list_add (cb_list_add (cb_build_inspect_region_start (), (yyvsp[(1) - (2)])), (yyvsp[(2) - (2)]));
  }
    break;

  case 1124:
/* Line 1792 of yacc.c  */
#line 8387 "parser.y"
    {
	(yyval) = CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[(3) - (3)]));
  }
    break;

  case 1125:
/* Line 1792 of yacc.c  */
#line 8394 "parser.y"
    {
	(yyval) = CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[(3) - (3)]));
  }
    break;

  case 1126:
/* Line 1792 of yacc.c  */
#line 8403 "parser.y"
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
    break;

  case 1128:
/* Line 1792 of yacc.c  */
#line 8415 "parser.y"
    {
	begin_statement ("MOVE", 0);
  }
    break;

  case 1130:
/* Line 1792 of yacc.c  */
#line 8423 "parser.y"
    {
	cb_emit_move ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1131:
/* Line 1792 of yacc.c  */
#line 8427 "parser.y"
    {
	cb_emit_move_corresponding ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1132:
/* Line 1792 of yacc.c  */
#line 8437 "parser.y"
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
    break;

  case 1134:
/* Line 1792 of yacc.c  */
#line 8446 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '*', (yyvsp[(1) - (4)]));
  }
    break;

  case 1135:
/* Line 1792 of yacc.c  */
#line 8450 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(1) - (6)]), '*', (yyvsp[(3) - (6)])));
  }
    break;

  case 1136:
/* Line 1792 of yacc.c  */
#line 8457 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  }
    break;

  case 1137:
/* Line 1792 of yacc.c  */
#line 8461 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  }
    break;

  case 1138:
/* Line 1792 of yacc.c  */
#line 8471 "parser.y"
    {
	begin_statement ("OPEN", 0);
  }
    break;

  case 1140:
/* Line 1792 of yacc.c  */
#line 8479 "parser.y"
    {
	cb_tree l;
	cb_tree x;

	if ((yyvsp[(2) - (4)]) && (yyvsp[(4) - (4)])) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s and %s are mutually exclusive"), "SHARING", "LOCK clauses");
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

  case 1141:
/* Line 1792 of yacc.c  */
#line 8500 "parser.y"
    {
	cb_tree l;
	cb_tree x;

	if ((yyvsp[(3) - (5)]) && (yyvsp[(5) - (5)])) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s and %s are mutually exclusive"), "SHARING", "LOCK clauses");
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

  case 1142:
/* Line 1792 of yacc.c  */
#line 8523 "parser.y"
    { (yyval) = cb_int (COB_OPEN_INPUT); }
    break;

  case 1143:
/* Line 1792 of yacc.c  */
#line 8524 "parser.y"
    { (yyval) = cb_int (COB_OPEN_OUTPUT); }
    break;

  case 1144:
/* Line 1792 of yacc.c  */
#line 8525 "parser.y"
    { (yyval) = cb_int (COB_OPEN_I_O); }
    break;

  case 1145:
/* Line 1792 of yacc.c  */
#line 8526 "parser.y"
    { (yyval) = cb_int (COB_OPEN_EXTEND); }
    break;

  case 1146:
/* Line 1792 of yacc.c  */
#line 8530 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1147:
/* Line 1792 of yacc.c  */
#line 8531 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1148:
/* Line 1792 of yacc.c  */
#line 8535 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1149:
/* Line 1792 of yacc.c  */
#line 8536 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1150:
/* Line 1792 of yacc.c  */
#line 8537 "parser.y"
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
    break;

  case 1151:
/* Line 1792 of yacc.c  */
#line 8539 "parser.y"
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  }
    break;

  case 1152:
/* Line 1792 of yacc.c  */
#line 8550 "parser.y"
    {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1154:
/* Line 1792 of yacc.c  */
#line 8561 "parser.y"
    {
	cb_emit_perform ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
	start_debug = save_debug;
  }
    break;

  case 1155:
/* Line 1792 of yacc.c  */
#line 8566 "parser.y"
    {
	CB_ADD_TO_CHAIN ((yyvsp[(1) - (1)]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
  }
    break;

  case 1156:
/* Line 1792 of yacc.c  */
#line 8572 "parser.y"
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1157:
/* Line 1792 of yacc.c  */
#line 8577 "parser.y"
    {
	cb_emit_perform ((yyvsp[(1) - (2)]), NULL);
	start_debug = save_debug;
  }
    break;

  case 1158:
/* Line 1792 of yacc.c  */
#line 8585 "parser.y"
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-4) - (0)]), PERFORM);
	}
  }
    break;

  case 1159:
/* Line 1792 of yacc.c  */
#line 8593 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  }
    break;

  case 1160:
/* Line 1792 of yacc.c  */
#line 8600 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  }
    break;

  case 1161:
/* Line 1792 of yacc.c  */
#line 8604 "parser.y"
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

  case 1162:
/* Line 1792 of yacc.c  */
#line 8617 "parser.y"
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[(1) - (1)]))->length = cb_true;
	CB_REFERENCE ((yyvsp[(1) - (1)]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (1)]), (yyvsp[(1) - (1)]));
  }
    break;

  case 1163:
/* Line 1792 of yacc.c  */
#line 8624 "parser.y"
    {
	/* Return from $3 */
	CB_REFERENCE ((yyvsp[(3) - (3)]))->length = cb_true;
	CB_REFERENCE ((yyvsp[(1) - (3)]))->flag_decl_ok = 1;
	CB_REFERENCE ((yyvsp[(3) - (3)]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1164:
/* Line 1792 of yacc.c  */
#line 8635 "parser.y"
    {
	(yyval) = cb_build_perform_once (NULL);
  }
    break;

  case 1165:
/* Line 1792 of yacc.c  */
#line 8639 "parser.y"
    {
	(yyval) = cb_build_perform_times ((yyvsp[(1) - (2)]));
	current_program->loop_counter++;
  }
    break;

  case 1166:
/* Line 1792 of yacc.c  */
#line 8644 "parser.y"
    {
	(yyval) = cb_build_perform_forever (NULL);
  }
    break;

  case 1167:
/* Line 1792 of yacc.c  */
#line 8648 "parser.y"
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

  case 1168:
/* Line 1792 of yacc.c  */
#line 8659 "parser.y"
    {
	(yyval) = cb_build_perform_until ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1169:
/* Line 1792 of yacc.c  */
#line 8665 "parser.y"
    { (yyval) = CB_BEFORE; }
    break;

  case 1170:
/* Line 1792 of yacc.c  */
#line 8666 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1171:
/* Line 1792 of yacc.c  */
#line 8670 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1172:
/* Line 1792 of yacc.c  */
#line 8671 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1173:
/* Line 1792 of yacc.c  */
#line 8674 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1174:
/* Line 1792 of yacc.c  */
#line 8676 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1175:
/* Line 1792 of yacc.c  */
#line 8681 "parser.y"
    {
	(yyval) = cb_build_perform_varying ((yyvsp[(1) - (7)]), (yyvsp[(3) - (7)]), (yyvsp[(5) - (7)]), (yyvsp[(7) - (7)]));
  }
    break;

  case 1176:
/* Line 1792 of yacc.c  */
#line 8691 "parser.y"
    {
	begin_statement ("READ", TERM_READ);
  }
    break;

  case 1178:
/* Line 1792 of yacc.c  */
#line 8700 "parser.y"
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

  case 1179:
/* Line 1792 of yacc.c  */
#line 8726 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1180:
/* Line 1792 of yacc.c  */
#line 8727 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1181:
/* Line 1792 of yacc.c  */
#line 8732 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1182:
/* Line 1792 of yacc.c  */
#line 8736 "parser.y"
    {
	(yyval) = cb_int3;
  }
    break;

  case 1183:
/* Line 1792 of yacc.c  */
#line 8740 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1184:
/* Line 1792 of yacc.c  */
#line 8744 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1185:
/* Line 1792 of yacc.c  */
#line 8748 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 1186:
/* Line 1792 of yacc.c  */
#line 8752 "parser.y"
    {
	(yyval) = cb_int3;
  }
    break;

  case 1187:
/* Line 1792 of yacc.c  */
#line 8756 "parser.y"
    {
	(yyval) = cb_int4;
  }
    break;

  case 1188:
/* Line 1792 of yacc.c  */
#line 8762 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1189:
/* Line 1792 of yacc.c  */
#line 8763 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1192:
/* Line 1792 of yacc.c  */
#line 8773 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  }
    break;

  case 1193:
/* Line 1792 of yacc.c  */
#line 8777 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  }
    break;

  case 1194:
/* Line 1792 of yacc.c  */
#line 8787 "parser.y"
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
    break;

  case 1195:
/* Line 1792 of yacc.c  */
#line 8797 "parser.y"
    {
	begin_statement ("RELEASE", 0);
  }
    break;

  case 1197:
/* Line 1792 of yacc.c  */
#line 8805 "parser.y"
    {
	cb_emit_release ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1198:
/* Line 1792 of yacc.c  */
#line 8815 "parser.y"
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
    break;

  case 1199:
/* Line 1792 of yacc.c  */
#line 8825 "parser.y"
    {
	begin_statement ("RETURN", TERM_RETURN);
  }
    break;

  case 1201:
/* Line 1792 of yacc.c  */
#line 8834 "parser.y"
    {
	cb_emit_return ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1202:
/* Line 1792 of yacc.c  */
#line 8841 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  }
    break;

  case 1203:
/* Line 1792 of yacc.c  */
#line 8845 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  }
    break;

  case 1204:
/* Line 1792 of yacc.c  */
#line 8855 "parser.y"
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1206:
/* Line 1792 of yacc.c  */
#line 8867 "parser.y"
    {
	cb_emit_rewrite ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]));
	start_debug = save_debug;
  }
    break;

  case 1207:
/* Line 1792 of yacc.c  */
#line 8875 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1208:
/* Line 1792 of yacc.c  */
#line 8879 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1209:
/* Line 1792 of yacc.c  */
#line 8883 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 1210:
/* Line 1792 of yacc.c  */
#line 8890 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  }
    break;

  case 1211:
/* Line 1792 of yacc.c  */
#line 8894 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  }
    break;

  case 1212:
/* Line 1792 of yacc.c  */
#line 8904 "parser.y"
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
    break;

  case 1213:
/* Line 1792 of yacc.c  */
#line 8915 "parser.y"
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
    break;

  case 1215:
/* Line 1792 of yacc.c  */
#line 8924 "parser.y"
    {
	cb_emit_search ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1216:
/* Line 1792 of yacc.c  */
#line 8929 "parser.y"
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]), (yyvsp[(6) - (6)]));
  }
    break;

  case 1217:
/* Line 1792 of yacc.c  */
#line 8936 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1218:
/* Line 1792 of yacc.c  */
#line 8937 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1219:
/* Line 1792 of yacc.c  */
#line 8942 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1220:
/* Line 1792 of yacc.c  */
#line 8947 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1221:
/* Line 1792 of yacc.c  */
#line 8954 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1222:
/* Line 1792 of yacc.c  */
#line 8958 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 1223:
/* Line 1792 of yacc.c  */
#line 8966 "parser.y"
    {
	(yyval) = cb_build_if_check_break ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1224:
/* Line 1792 of yacc.c  */
#line 8973 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  }
    break;

  case 1225:
/* Line 1792 of yacc.c  */
#line 8977 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  }
    break;

  case 1226:
/* Line 1792 of yacc.c  */
#line 8987 "parser.y"
    {
	begin_statement ("SET", 0);
	setattr_val_on = 0;
	setattr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
    break;

  case 1227:
/* Line 1792 of yacc.c  */
#line 8994 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 1235:
/* Line 1792 of yacc.c  */
#line 9010 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1236:
/* Line 1792 of yacc.c  */
#line 9011 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1237:
/* Line 1792 of yacc.c  */
#line 9015 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1238:
/* Line 1792 of yacc.c  */
#line 9016 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1239:
/* Line 1792 of yacc.c  */
#line 9023 "parser.y"
    {
	cb_emit_setenv ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1240:
/* Line 1792 of yacc.c  */
#line 9032 "parser.y"
    {
	cb_emit_set_attribute ((yyvsp[(1) - (3)]), setattr_val_on, setattr_val_off);
  }
    break;

  case 1243:
/* Line 1792 of yacc.c  */
#line 9044 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_BELL);
  }
    break;

  case 1244:
/* Line 1792 of yacc.c  */
#line 9048 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_BLINK);
  }
    break;

  case 1245:
/* Line 1792 of yacc.c  */
#line 9052 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_HIGHLIGHT);
	check_not_highlight_and_lowlight (setattr_val_on | setattr_val_off,
					  COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 1246:
/* Line 1792 of yacc.c  */
#line 9058 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_LOWLIGHT);
	check_not_highlight_and_lowlight (setattr_val_on | setattr_val_off,
					  COB_SCREEN_LOWLIGHT);
  }
    break;

  case 1247:
/* Line 1792 of yacc.c  */
#line 9064 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_REVERSE);
  }
    break;

  case 1248:
/* Line 1792 of yacc.c  */
#line 9068 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_UNDERLINE);
  }
    break;

  case 1249:
/* Line 1792 of yacc.c  */
#line 9072 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_LEFTLINE);
  }
    break;

  case 1250:
/* Line 1792 of yacc.c  */
#line 9076 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_OVERLINE);
  }
    break;

  case 1251:
/* Line 1792 of yacc.c  */
#line 9085 "parser.y"
    {
	cb_emit_set_to ((yyvsp[(1) - (4)]), cb_build_ppointer ((yyvsp[(4) - (4)])));
  }
    break;

  case 1252:
/* Line 1792 of yacc.c  */
#line 9089 "parser.y"
    {
	cb_emit_set_to ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1253:
/* Line 1792 of yacc.c  */
#line 9098 "parser.y"
    {
	cb_emit_set_up_down ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1256:
/* Line 1792 of yacc.c  */
#line 9112 "parser.y"
    {
	cb_emit_set_on_off ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1259:
/* Line 1792 of yacc.c  */
#line 9126 "parser.y"
    {
	cb_emit_set_true ((yyvsp[(1) - (3)]));
  }
    break;

  case 1260:
/* Line 1792 of yacc.c  */
#line 9130 "parser.y"
    {
	cb_emit_set_false ((yyvsp[(1) - (3)]));
  }
    break;

  case 1261:
/* Line 1792 of yacc.c  */
#line 9139 "parser.y"
    {
	  cb_emit_set_last_exception_to_off ();
  }
    break;

  case 1262:
/* Line 1792 of yacc.c  */
#line 9148 "parser.y"
    {
	begin_statement ("SORT", 0);
  }
    break;

  case 1264:
/* Line 1792 of yacc.c  */
#line 9156 "parser.y"
    {
	cb_tree		x;

	x = cb_ref ((yyvsp[(1) - (4)]));
	if (CB_VALID_TREE (x)) {
		if (CB_INVALID_TREE ((yyvsp[(2) - (4)]))) {
			if (CB_FILE_P (x)) {
				cb_error (_("File sort requires KEY phrase"));
			} else {
				cb_error (_("Table sort without keys not implemented yet"));
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

  case 1265:
/* Line 1792 of yacc.c  */
#line 9177 "parser.y"
    {
	if ((yyvsp[(5) - (7)]) && CB_VALID_TREE ((yyvsp[(1) - (7)]))) {
		cb_emit_sort_finish ((yyvsp[(1) - (7)]));
	}
  }
    break;

  case 1266:
/* Line 1792 of yacc.c  */
#line 9186 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1267:
/* Line 1792 of yacc.c  */
#line 9191 "parser.y"
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

  case 1268:
/* Line 1792 of yacc.c  */
#line 9209 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1269:
/* Line 1792 of yacc.c  */
#line 9210 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1271:
/* Line 1792 of yacc.c  */
#line 9215 "parser.y"
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  }
    break;

  case 1272:
/* Line 1792 of yacc.c  */
#line 9222 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1273:
/* Line 1792 of yacc.c  */
#line 9223 "parser.y"
    { (yyval) = cb_ref ((yyvsp[(3) - (3)])); }
    break;

  case 1274:
/* Line 1792 of yacc.c  */
#line 9228 "parser.y"
    {
	if ((yyvsp[(0) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(0) - (0)])))) {
		cb_error (_("File sort requires USING or INPUT PROCEDURE"));
	}
  }
    break;

  case 1275:
/* Line 1792 of yacc.c  */
#line 9234 "parser.y"
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

  case 1276:
/* Line 1792 of yacc.c  */
#line 9244 "parser.y"
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

  case 1277:
/* Line 1792 of yacc.c  */
#line 9259 "parser.y"
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("File sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
    break;

  case 1278:
/* Line 1792 of yacc.c  */
#line 9265 "parser.y"
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

  case 1279:
/* Line 1792 of yacc.c  */
#line 9275 "parser.y"
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

  case 1280:
/* Line 1792 of yacc.c  */
#line 9291 "parser.y"
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
    break;

  case 1282:
/* Line 1792 of yacc.c  */
#line 9301 "parser.y"
    {
	if ((yyvsp[(3) - (4)]) && !(yyvsp[(2) - (4)])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SIZE/LENGTH invalid here"));
	} else {
		cb_emit_start ((yyvsp[(1) - (4)]), start_tree, (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]));
	}
  }
    break;

  case 1283:
/* Line 1792 of yacc.c  */
#line 9313 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1284:
/* Line 1792 of yacc.c  */
#line 9317 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 1285:
/* Line 1792 of yacc.c  */
#line 9324 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1286:
/* Line 1792 of yacc.c  */
#line 9328 "parser.y"
    {
	start_tree = (yyvsp[(3) - (4)]);
	(yyval) = (yyvsp[(4) - (4)]);
  }
    break;

  case 1287:
/* Line 1792 of yacc.c  */
#line 9333 "parser.y"
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  }
    break;

  case 1288:
/* Line 1792 of yacc.c  */
#line 9338 "parser.y"
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  }
    break;

  case 1289:
/* Line 1792 of yacc.c  */
#line 9345 "parser.y"
    { (yyval) = cb_int (COB_EQ); }
    break;

  case 1290:
/* Line 1792 of yacc.c  */
#line 9346 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_LE : COB_GT); }
    break;

  case 1291:
/* Line 1792 of yacc.c  */
#line 9347 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_GE : COB_LT); }
    break;

  case 1292:
/* Line 1792 of yacc.c  */
#line 9348 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_LT : COB_GE); }
    break;

  case 1293:
/* Line 1792 of yacc.c  */
#line 9349 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_GT : COB_LE); }
    break;

  case 1294:
/* Line 1792 of yacc.c  */
#line 9350 "parser.y"
    { (yyval) = cb_int (COB_NE); }
    break;

  case 1295:
/* Line 1792 of yacc.c  */
#line 9355 "parser.y"
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition disallowed on START statement"));
  }
    break;

  case 1298:
/* Line 1792 of yacc.c  */
#line 9368 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  }
    break;

  case 1299:
/* Line 1792 of yacc.c  */
#line 9372 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  }
    break;

  case 1300:
/* Line 1792 of yacc.c  */
#line 9382 "parser.y"
    {
	begin_statement ("STOP RUN", 0);
  }
    break;

  case 1301:
/* Line 1792 of yacc.c  */
#line 9386 "parser.y"
    {
	cb_emit_stop_run ((yyvsp[(4) - (4)]));
	check_unreached = 1;
	cobc_cs_check = 0;
  }
    break;

  case 1302:
/* Line 1792 of yacc.c  */
#line 9392 "parser.y"
    {
	begin_statement ("STOP", 0);
	cb_verify (cb_stop_literal_statement, "STOP literal");
	cb_emit_display (CB_LIST_INIT ((yyvsp[(2) - (2)])), cb_int0, cb_int1, NULL,
			 NULL);
	cb_emit_accept (cb_null, NULL, NULL);
	cobc_cs_check = 0;
  }
    break;

  case 1303:
/* Line 1792 of yacc.c  */
#line 9404 "parser.y"
    {
	(yyval) = current_program->cb_return_code;
  }
    break;

  case 1304:
/* Line 1792 of yacc.c  */
#line 9408 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1305:
/* Line 1792 of yacc.c  */
#line 9412 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1306:
/* Line 1792 of yacc.c  */
#line 9416 "parser.y"
    {
	if ((yyvsp[(4) - (4)])) {
		(yyval) = (yyvsp[(4) - (4)]);
	} else {
		(yyval) = cb_int1;
	}
  }
    break;

  case 1307:
/* Line 1792 of yacc.c  */
#line 9424 "parser.y"
    {
	if ((yyvsp[(4) - (4)])) {
		(yyval) = (yyvsp[(4) - (4)]);
	} else {
		(yyval) = cb_int0;
	}
  }
    break;

  case 1308:
/* Line 1792 of yacc.c  */
#line 9435 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1309:
/* Line 1792 of yacc.c  */
#line 9439 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1310:
/* Line 1792 of yacc.c  */
#line 9445 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1311:
/* Line 1792 of yacc.c  */
#line 9446 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1312:
/* Line 1792 of yacc.c  */
#line 9447 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1313:
/* Line 1792 of yacc.c  */
#line 9448 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1314:
/* Line 1792 of yacc.c  */
#line 9455 "parser.y"
    {
	begin_statement ("STRING", TERM_STRING);
  }
    break;

  case 1316:
/* Line 1792 of yacc.c  */
#line 9464 "parser.y"
    {
	cb_emit_string ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]));
  }
    break;

  case 1317:
/* Line 1792 of yacc.c  */
#line 9470 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1318:
/* Line 1792 of yacc.c  */
#line 9471 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1319:
/* Line 1792 of yacc.c  */
#line 9475 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1320:
/* Line 1792 of yacc.c  */
#line 9476 "parser.y"
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); }
    break;

  case 1321:
/* Line 1792 of yacc.c  */
#line 9477 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(3) - (3)]), NULL); }
    break;

  case 1322:
/* Line 1792 of yacc.c  */
#line 9481 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1323:
/* Line 1792 of yacc.c  */
#line 9482 "parser.y"
    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 1324:
/* Line 1792 of yacc.c  */
#line 9487 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  }
    break;

  case 1325:
/* Line 1792 of yacc.c  */
#line 9491 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  }
    break;

  case 1326:
/* Line 1792 of yacc.c  */
#line 9501 "parser.y"
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
    break;

  case 1328:
/* Line 1792 of yacc.c  */
#line 9510 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '-', cb_build_binary_list ((yyvsp[(1) - (4)]), '+'));
  }
    break;

  case 1329:
/* Line 1792 of yacc.c  */
#line 9514 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[(3) - (6)]), (yyvsp[(1) - (6)])), '-'));
  }
    break;

  case 1330:
/* Line 1792 of yacc.c  */
#line 9518 "parser.y"
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[(4) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 1331:
/* Line 1792 of yacc.c  */
#line 9525 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  }
    break;

  case 1332:
/* Line 1792 of yacc.c  */
#line 9529 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  }
    break;

  case 1333:
/* Line 1792 of yacc.c  */
#line 9539 "parser.y"
    {
	begin_statement ("SUPPRESS", 0);
	if (!in_declaratives) {
		cb_error_x (CB_TREE (current_statement),
			    _("SUPPRESS statement must be within DECLARATIVES"));
	}
	CB_PENDING("SUPPRESS");
  }
    break;

  case 1336:
/* Line 1792 of yacc.c  */
#line 9557 "parser.y"
    {
	begin_statement ("TERMINATE", 0);
	CB_PENDING("TERMINATE");
  }
    break;

  case 1338:
/* Line 1792 of yacc.c  */
#line 9566 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
	}
  }
    break;

  case 1339:
/* Line 1792 of yacc.c  */
#line 9572 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(2) - (2)]) != cb_error_node) {
	}
  }
    break;

  case 1340:
/* Line 1792 of yacc.c  */
#line 9583 "parser.y"
    {
	begin_statement ("TRANSFORM", 0);
  }
    break;

  case 1342:
/* Line 1792 of yacc.c  */
#line 9591 "parser.y"
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[(1) - (5)]), x, cb_int0, 2);
  }
    break;

  case 1343:
/* Line 1792 of yacc.c  */
#line 9604 "parser.y"
    {
	begin_statement ("UNLOCK", 0);
  }
    break;

  case 1345:
/* Line 1792 of yacc.c  */
#line 9612 "parser.y"
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

  case 1346:
/* Line 1792 of yacc.c  */
#line 9628 "parser.y"
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
    break;

  case 1348:
/* Line 1792 of yacc.c  */
#line 9638 "parser.y"
    {
	cb_emit_unstring ((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 1349:
/* Line 1792 of yacc.c  */
#line 9644 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1350:
/* Line 1792 of yacc.c  */
#line 9646 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1351:
/* Line 1792 of yacc.c  */
#line 9650 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1352:
/* Line 1792 of yacc.c  */
#line 9652 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1353:
/* Line 1792 of yacc.c  */
#line 9657 "parser.y"
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1354:
/* Line 1792 of yacc.c  */
#line 9663 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(2) - (2)])); }
    break;

  case 1355:
/* Line 1792 of yacc.c  */
#line 9665 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1356:
/* Line 1792 of yacc.c  */
#line 9670 "parser.y"
    {
	(yyval) = cb_build_unstring_into ((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1357:
/* Line 1792 of yacc.c  */
#line 9676 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1358:
/* Line 1792 of yacc.c  */
#line 9677 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1359:
/* Line 1792 of yacc.c  */
#line 9681 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1360:
/* Line 1792 of yacc.c  */
#line 9682 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1361:
/* Line 1792 of yacc.c  */
#line 9686 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1362:
/* Line 1792 of yacc.c  */
#line 9687 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1363:
/* Line 1792 of yacc.c  */
#line 9692 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  }
    break;

  case 1364:
/* Line 1792 of yacc.c  */
#line 9696 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  }
    break;

  case 1365:
/* Line 1792 of yacc.c  */
#line 9706 "parser.y"
    {
	skip_statements = 0;
	in_debugging = 0;
  }
    break;

  case 1372:
/* Line 1792 of yacc.c  */
#line 9724 "parser.y"
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

  case 1373:
/* Line 1792 of yacc.c  */
#line 9749 "parser.y"
    {
	use_global_ind = 0;
  }
    break;

  case 1374:
/* Line 1792 of yacc.c  */
#line 9753 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else {
		use_global_ind = 1;
		current_program->flag_global_use = 1;
	}
  }
    break;

  case 1375:
/* Line 1792 of yacc.c  */
#line 9765 "parser.y"
    {
	cb_tree		l;

	for (l = (yyvsp[(1) - (1)]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			set_up_use_file (CB_FILE (cb_ref (CB_VALUE (l))));
		}
	}
  }
    break;

  case 1376:
/* Line 1792 of yacc.c  */
#line 9775 "parser.y"
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
    break;

  case 1377:
/* Line 1792 of yacc.c  */
#line 9780 "parser.y"
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
    break;

  case 1378:
/* Line 1792 of yacc.c  */
#line 9785 "parser.y"
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
    break;

  case 1379:
/* Line 1792 of yacc.c  */
#line 9790 "parser.y"
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
    break;

  case 1380:
/* Line 1792 of yacc.c  */
#line 9798 "parser.y"
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

  case 1383:
/* Line 1792 of yacc.c  */
#line 9841 "parser.y"
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

  case 1384:
/* Line 1792 of yacc.c  */
#line 9881 "parser.y"
    {
	if (current_program->flag_debugging) {
		if (current_program->all_procedure) {
			cb_error (_("Duplicate USE DEBUGGING ON ALL PROCEDURES"));
		} else {
			current_program->all_procedure = current_section;
		}
	}
  }
    break;

  case 1385:
/* Line 1792 of yacc.c  */
#line 9891 "parser.y"
    {
	cb_tree		x;

	if (current_program->flag_debugging) {
		/* Reference must be a data item */
		x = cb_ref ((yyvsp[(3) - (3)]));
		if (CB_INVALID_TREE (x) || !CB_FIELD_P (x)) {
			cb_error (_("Invalid target for DEBUGGING ALL"));
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

  case 1390:
/* Line 1792 of yacc.c  */
#line 9921 "parser.y"
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "USE AT");
	}
  }
    break;

  case 1391:
/* Line 1792 of yacc.c  */
#line 9930 "parser.y"
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	/* emit_entry ("_START", 0, NULL); */
	CB_PENDING ("USE AT PROGRAM START");
  }
    break;

  case 1392:
/* Line 1792 of yacc.c  */
#line 9936 "parser.y"
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	/* emit_entry ("_END", 0, NULL); */
	CB_PENDING ("USE AT PROGRAM END");
  }
    break;

  case 1393:
/* Line 1792 of yacc.c  */
#line 9946 "parser.y"
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE BEFORE REPORTING"));
	CB_PENDING ("USE BEFORE REPORTING");
  }
    break;

  case 1394:
/* Line 1792 of yacc.c  */
#line 9955 "parser.y"
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	CB_PENDING ("USE AFTER EXCEPTION CONDITION");
  }
    break;

  case 1397:
/* Line 1792 of yacc.c  */
#line 9971 "parser.y"
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1399:
/* Line 1792 of yacc.c  */
#line 9983 "parser.y"
    {
	if (CB_VALID_TREE ((yyvsp[(1) - (5)]))) {
		cb_emit_write ((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]));
	}
	start_debug = save_debug;
  }
    break;

  case 1400:
/* Line 1792 of yacc.c  */
#line 9992 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1401:
/* Line 1792 of yacc.c  */
#line 9993 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1402:
/* Line 1792 of yacc.c  */
#line 9998 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1403:
/* Line 1792 of yacc.c  */
#line 10002 "parser.y"
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1404:
/* Line 1792 of yacc.c  */
#line 10006 "parser.y"
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1405:
/* Line 1792 of yacc.c  */
#line 10010 "parser.y"
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[(1) - (3)]));
  }
    break;

  case 1406:
/* Line 1792 of yacc.c  */
#line 10016 "parser.y"
    { (yyval) = CB_BEFORE; }
    break;

  case 1407:
/* Line 1792 of yacc.c  */
#line 10017 "parser.y"
    { (yyval) = CB_AFTER; }
    break;

  case 1411:
/* Line 1792 of yacc.c  */
#line 10028 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  }
    break;

  case 1412:
/* Line 1792 of yacc.c  */
#line 10032 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  }
    break;

  case 1415:
/* Line 1792 of yacc.c  */
#line 10046 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		cb_verify (cb_not_exception_before_exception, "NOT EXCEPTION before EXCEPTION");
	}
  }
    break;

  case 1416:
/* Line 1792 of yacc.c  */
#line 10055 "parser.y"
    {(yyval) = NULL;}
    break;

  case 1417:
/* Line 1792 of yacc.c  */
#line 10057 "parser.y"
    {(yyval) = cb_int1;}
    break;

  case 1418:
/* Line 1792 of yacc.c  */
#line 10062 "parser.y"
    {
	current_statement->handler_type = ACCEPT_HANDLER;
	current_statement->ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1423:
/* Line 1792 of yacc.c  */
#line 10080 "parser.y"
    {
	current_statement->handler_type = ACCEPT_HANDLER;
	current_statement->not_ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1428:
/* Line 1792 of yacc.c  */
#line 10096 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		cb_verify (cb_not_exception_before_exception, "NOT EXCEPTION before EXCEPTION");
	}
  }
    break;

  case 1429:
/* Line 1792 of yacc.c  */
#line 10105 "parser.y"
    {(yyval) = NULL;}
    break;

  case 1430:
/* Line 1792 of yacc.c  */
#line 10107 "parser.y"
    {(yyval) = cb_int1;}
    break;

  case 1431:
/* Line 1792 of yacc.c  */
#line 10112 "parser.y"
    {
	current_statement->handler_type = DISPLAY_HANDLER;
	current_statement->ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1434:
/* Line 1792 of yacc.c  */
#line 10125 "parser.y"
    {
	current_statement->handler_type = DISPLAY_HANDLER;
	current_statement->not_ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1437:
/* Line 1792 of yacc.c  */
#line 10137 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		cb_verify (cb_not_exception_before_exception, "NOT SIZE ERROR before SIZE ERROR");
	}
  }
    break;

  case 1438:
/* Line 1792 of yacc.c  */
#line 10146 "parser.y"
    {(yyval) = NULL;}
    break;

  case 1439:
/* Line 1792 of yacc.c  */
#line 10148 "parser.y"
    {(yyval) = cb_int1;}
    break;

  case 1440:
/* Line 1792 of yacc.c  */
#line 10153 "parser.y"
    {
	current_statement->handler_type = SIZE_ERROR_HANDLER;
	current_statement->ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1443:
/* Line 1792 of yacc.c  */
#line 10166 "parser.y"
    {
	current_statement->handler_type = SIZE_ERROR_HANDLER;
	current_statement->not_ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1446:
/* Line 1792 of yacc.c  */
#line 10178 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		cb_verify (cb_not_exception_before_exception, "NOT OVERFLOW before OVERFLOW");
	}
  }
    break;

  case 1447:
/* Line 1792 of yacc.c  */
#line 10187 "parser.y"
    {(yyval) = NULL;}
    break;

  case 1448:
/* Line 1792 of yacc.c  */
#line 10189 "parser.y"
    {(yyval) = cb_int1;}
    break;

  case 1449:
/* Line 1792 of yacc.c  */
#line 10194 "parser.y"
    {
	current_statement->handler_type = OVERFLOW_HANDLER;
	current_statement->ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1452:
/* Line 1792 of yacc.c  */
#line 10207 "parser.y"
    {
	current_statement->handler_type = OVERFLOW_HANDLER;
	current_statement->not_ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1458:
/* Line 1792 of yacc.c  */
#line 10233 "parser.y"
    {
	current_statement->handler_type = AT_END_HANDLER;
	current_statement->ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1461:
/* Line 1792 of yacc.c  */
#line 10246 "parser.y"
    {
	current_statement->handler_type = AT_END_HANDLER;
	current_statement->not_ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1463:
/* Line 1792 of yacc.c  */
#line 10257 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		cb_verify (cb_not_exception_before_exception, "NOT AT END-OF-PAGE before AT END-OF-PAGE");
	}
  }
    break;

  case 1464:
/* Line 1792 of yacc.c  */
#line 10266 "parser.y"
    {(yyval) = NULL;}
    break;

  case 1465:
/* Line 1792 of yacc.c  */
#line 10268 "parser.y"
    {(yyval) = cb_int1;}
    break;

  case 1466:
/* Line 1792 of yacc.c  */
#line 10273 "parser.y"
    {
	current_statement->handler_type = EOP_HANDLER;
	current_statement->ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1469:
/* Line 1792 of yacc.c  */
#line 10286 "parser.y"
    {
	current_statement->handler_type = EOP_HANDLER;
	current_statement->not_ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1473:
/* Line 1792 of yacc.c  */
#line 10302 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		cb_verify (cb_not_exception_before_exception, "NOT INVALID KEY before INVALID KEY");
	}
  }
    break;

  case 1474:
/* Line 1792 of yacc.c  */
#line 10311 "parser.y"
    {(yyval) = NULL;}
    break;

  case 1475:
/* Line 1792 of yacc.c  */
#line 10313 "parser.y"
    {(yyval) = cb_int1;}
    break;

  case 1476:
/* Line 1792 of yacc.c  */
#line 10318 "parser.y"
    {
	current_statement->handler_type = INVALID_KEY_HANDLER;
	current_statement->ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1479:
/* Line 1792 of yacc.c  */
#line 10331 "parser.y"
    {
	current_statement->handler_type = INVALID_KEY_HANDLER;
	current_statement->not_ex_handler = (yyvsp[(2) - (2)]);
  }
    break;

  case 1480:
/* Line 1792 of yacc.c  */
#line 10341 "parser.y"
    {
	(yyval) = cb_one;
  }
    break;

  case 1481:
/* Line 1792 of yacc.c  */
#line 10345 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
  }
    break;

  case 1482:
/* Line 1792 of yacc.c  */
#line 10355 "parser.y"
    {
	(yyval) = cb_build_cond ((yyvsp[(1) - (1)]));
  }
    break;

  case 1483:
/* Line 1792 of yacc.c  */
#line 10362 "parser.y"
    {
	(yyval) = cb_build_expr ((yyvsp[(1) - (1)]));
  }
    break;

  case 1484:
/* Line 1792 of yacc.c  */
#line 10368 "parser.y"
    {
	current_expr = NULL;
	cb_exp_line = cb_source_line;
  }
    break;

  case 1485:
/* Line 1792 of yacc.c  */
#line 10373 "parser.y"
    {
	(yyval) = cb_list_reverse (current_expr);
  }
    break;

  case 1489:
/* Line 1792 of yacc.c  */
#line 10386 "parser.y"
    {
	if (CB_REFERENCE_P ((yyvsp[(1) - (1)])) && CB_CLASS_NAME_P (cb_ref ((yyvsp[(1) - (1)])))) {
		push_expr ('C', (yyvsp[(1) - (1)]));
	} else {
		push_expr ('x', (yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1490:
/* Line 1792 of yacc.c  */
#line 10394 "parser.y"
    { push_expr ('(', NULL); }
    break;

  case 1491:
/* Line 1792 of yacc.c  */
#line 10395 "parser.y"
    { push_expr (')', NULL); }
    break;

  case 1492:
/* Line 1792 of yacc.c  */
#line 10397 "parser.y"
    { push_expr ('+', NULL); }
    break;

  case 1493:
/* Line 1792 of yacc.c  */
#line 10398 "parser.y"
    { push_expr ('-', NULL); }
    break;

  case 1494:
/* Line 1792 of yacc.c  */
#line 10399 "parser.y"
    { push_expr ('*', NULL); }
    break;

  case 1495:
/* Line 1792 of yacc.c  */
#line 10400 "parser.y"
    { push_expr ('/', NULL); }
    break;

  case 1496:
/* Line 1792 of yacc.c  */
#line 10401 "parser.y"
    { push_expr ('^', NULL); }
    break;

  case 1497:
/* Line 1792 of yacc.c  */
#line 10403 "parser.y"
    { push_expr ('=', NULL); }
    break;

  case 1498:
/* Line 1792 of yacc.c  */
#line 10404 "parser.y"
    { push_expr ('>', NULL); }
    break;

  case 1499:
/* Line 1792 of yacc.c  */
#line 10405 "parser.y"
    { push_expr ('<', NULL); }
    break;

  case 1500:
/* Line 1792 of yacc.c  */
#line 10406 "parser.y"
    { push_expr (']', NULL); }
    break;

  case 1501:
/* Line 1792 of yacc.c  */
#line 10407 "parser.y"
    { push_expr ('[', NULL); }
    break;

  case 1502:
/* Line 1792 of yacc.c  */
#line 10408 "parser.y"
    { push_expr ('~', NULL); }
    break;

  case 1503:
/* Line 1792 of yacc.c  */
#line 10410 "parser.y"
    { push_expr ('!', NULL); }
    break;

  case 1504:
/* Line 1792 of yacc.c  */
#line 10411 "parser.y"
    { push_expr ('&', NULL); }
    break;

  case 1505:
/* Line 1792 of yacc.c  */
#line 10412 "parser.y"
    { push_expr ('|', NULL); }
    break;

  case 1506:
/* Line 1792 of yacc.c  */
#line 10414 "parser.y"
    { push_expr ('O', NULL); }
    break;

  case 1507:
/* Line 1792 of yacc.c  */
#line 10415 "parser.y"
    { push_expr ('9', NULL); }
    break;

  case 1508:
/* Line 1792 of yacc.c  */
#line 10416 "parser.y"
    { push_expr ('A', NULL); }
    break;

  case 1509:
/* Line 1792 of yacc.c  */
#line 10417 "parser.y"
    { push_expr ('L', NULL); }
    break;

  case 1510:
/* Line 1792 of yacc.c  */
#line 10418 "parser.y"
    { push_expr ('U', NULL); }
    break;

  case 1511:
/* Line 1792 of yacc.c  */
#line 10421 "parser.y"
    { push_expr ('P', NULL); }
    break;

  case 1512:
/* Line 1792 of yacc.c  */
#line 10422 "parser.y"
    { push_expr ('N', NULL); }
    break;

  case 1521:
/* Line 1792 of yacc.c  */
#line 10452 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1522:
/* Line 1792 of yacc.c  */
#line 10456 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1526:
/* Line 1792 of yacc.c  */
#line 10467 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '+', (yyvsp[(3) - (3)])); }
    break;

  case 1527:
/* Line 1792 of yacc.c  */
#line 10468 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '-', (yyvsp[(3) - (3)])); }
    break;

  case 1528:
/* Line 1792 of yacc.c  */
#line 10469 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1529:
/* Line 1792 of yacc.c  */
#line 10473 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '*', (yyvsp[(3) - (3)])); }
    break;

  case 1530:
/* Line 1792 of yacc.c  */
#line 10474 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '/', (yyvsp[(3) - (3)])); }
    break;

  case 1531:
/* Line 1792 of yacc.c  */
#line 10475 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1532:
/* Line 1792 of yacc.c  */
#line 10480 "parser.y"
    {
	(yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '^', (yyvsp[(3) - (3)]));
  }
    break;

  case 1533:
/* Line 1792 of yacc.c  */
#line 10483 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1534:
/* Line 1792 of yacc.c  */
#line 10487 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1535:
/* Line 1792 of yacc.c  */
#line 10488 "parser.y"
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[(2) - (2)])); }
    break;

  case 1536:
/* Line 1792 of yacc.c  */
#line 10489 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1537:
/* Line 1792 of yacc.c  */
#line 10492 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 1538:
/* Line 1792 of yacc.c  */
#line 10493 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1539:
/* Line 1792 of yacc.c  */
#line 10504 "parser.y"
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
    break;

  case 1540:
/* Line 1792 of yacc.c  */
#line 10516 "parser.y"
    {
	if (CB_FILE_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_FILE (cb_ref ((yyvsp[(3) - (3)])))->linage_ctr;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a file name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1541:
/* Line 1792 of yacc.c  */
#line 10525 "parser.y"
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
    break;

  case 1542:
/* Line 1792 of yacc.c  */
#line 10537 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[(3) - (3)])))->line_counter;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1543:
/* Line 1792 of yacc.c  */
#line 10546 "parser.y"
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
    break;

  case 1544:
/* Line 1792 of yacc.c  */
#line 10558 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[(3) - (3)])))->page_counter;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1545:
/* Line 1792 of yacc.c  */
#line 10572 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1546:
/* Line 1792 of yacc.c  */
#line 10574 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1547:
/* Line 1792 of yacc.c  */
#line 10579 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 1548:
/* Line 1792 of yacc.c  */
#line 10587 "parser.y"
    { cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1549:
/* Line 1792 of yacc.c  */
#line 10594 "parser.y"
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

  case 1550:
/* Line 1792 of yacc.c  */
#line 10614 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1551:
/* Line 1792 of yacc.c  */
#line 10618 "parser.y"
    {
	cb_tree		l;

	if (CB_VALID_TREE ((yyvsp[(2) - (2)]))) {
		for (l = (yyvsp[(1) - (2)]); l; l = CB_CHAIN (l)) {
			if (CB_VALID_TREE (CB_VALUE (l)) &&
			    !strcasecmp (CB_NAME ((yyvsp[(2) - (2)])), CB_NAME (CB_VALUE (l)))) {
				cb_error_x ((yyvsp[(2) - (2)]), _("Multiple reference to '%s' "),
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

  case 1552:
/* Line 1792 of yacc.c  */
#line 10639 "parser.y"
    {
	if (CB_FILE_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		cb_error_x ((yyvsp[(1) - (1)]), _("'%s' is not a file name"), CB_NAME ((yyvsp[(1) - (1)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1553:
/* Line 1792 of yacc.c  */
#line 10680 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		cb_error_x ((yyvsp[(1) - (1)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(1) - (1)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1554:
/* Line 1792 of yacc.c  */
#line 10693 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1555:
/* Line 1792 of yacc.c  */
#line 10695 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1556:
/* Line 1792 of yacc.c  */
#line 10699 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1557:
/* Line 1792 of yacc.c  */
#line 10705 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1558:
/* Line 1792 of yacc.c  */
#line 10707 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1559:
/* Line 1792 of yacc.c  */
#line 10712 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_REFERENCE ((yyval))->offset = CB_TREE (current_section);
	CB_REFERENCE ((yyval))->flag_in_decl = !!in_declaratives;
	CB_REFERENCE ((yyval))->section = current_section;
	CB_REFERENCE ((yyval))->paragraph = current_paragraph;
	CB_ADD_TO_CHAIN ((yyval), current_program->label_list);
  }
    break;

  case 1562:
/* Line 1792 of yacc.c  */
#line 10726 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  }
    break;

  case 1563:
/* Line 1792 of yacc.c  */
#line 10733 "parser.y"
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[(1) - (1)]))->data));
	(yyval)->source_file = (yyvsp[(1) - (1)])->source_file;
	(yyval)->source_line = (yyvsp[(1) - (1)])->source_line;
  }
    break;

  case 1564:
/* Line 1792 of yacc.c  */
#line 10743 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1565:
/* Line 1792 of yacc.c  */
#line 10744 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1566:
/* Line 1792 of yacc.c  */
#line 10749 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1567:
/* Line 1792 of yacc.c  */
#line 10757 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1568:
/* Line 1792 of yacc.c  */
#line 10765 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1569:
/* Line 1792 of yacc.c  */
#line 10769 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1570:
/* Line 1792 of yacc.c  */
#line 10776 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1573:
/* Line 1792 of yacc.c  */
#line 10792 "parser.y"
    {
	if (CB_WORD_COUNT ((yyvsp[(1) - (1)])) > 0) {
		redefinition_error ((yyvsp[(1) - (1)]));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 1574:
/* Line 1792 of yacc.c  */
#line 10801 "parser.y"
    {
	  yyclearin;
	  yyerrok;
	  (yyval) = cb_error_node;
  }
    break;

  case 1575:
/* Line 1792 of yacc.c  */
#line 10812 "parser.y"
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

  case 1576:
/* Line 1792 of yacc.c  */
#line 10829 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1577:
/* Line 1792 of yacc.c  */
#line 10833 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1580:
/* Line 1792 of yacc.c  */
#line 10842 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  }
    break;

  case 1581:
/* Line 1792 of yacc.c  */
#line 10848 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1582:
/* Line 1792 of yacc.c  */
#line 10849 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1583:
/* Line 1792 of yacc.c  */
#line 10854 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1584:
/* Line 1792 of yacc.c  */
#line 10858 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1589:
/* Line 1792 of yacc.c  */
#line 10869 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1590:
/* Line 1792 of yacc.c  */
#line 10873 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1591:
/* Line 1792 of yacc.c  */
#line 10877 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1592:
/* Line 1792 of yacc.c  */
#line 10881 "parser.y"
    {
	(yyval) = cb_build_ppointer ((yyvsp[(4) - (4)]));
  }
    break;

  case 1593:
/* Line 1792 of yacc.c  */
#line 10885 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  }
    break;

  case 1594:
/* Line 1792 of yacc.c  */
#line 10889 "parser.y"
    {
	cb_tree		x;
	cb_tree		switch_id;

	x = cb_ref ((yyvsp[(1) - (1)]));
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
    break;

  case 1595:
/* Line 1792 of yacc.c  */
#line 10910 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1596:
/* Line 1792 of yacc.c  */
#line 10914 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1604:
/* Line 1792 of yacc.c  */
#line 10931 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1605:
/* Line 1792 of yacc.c  */
#line 10935 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1606:
/* Line 1792 of yacc.c  */
#line 10939 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1615:
/* Line 1792 of yacc.c  */
#line 10973 "parser.y"
    {
	check_not_88_level ((yyvsp[(1) - (1)]));
  }
    break;

  case 1617:
/* Line 1792 of yacc.c  */
#line 10981 "parser.y"
    {
	check_not_88_level ((yyvsp[(1) - (1)]));
  }
    break;

  case 1620:
/* Line 1792 of yacc.c  */
#line 10990 "parser.y"
    {
	check_not_88_level ((yyvsp[(1) - (1)]));
  }
    break;

  case 1622:
/* Line 1792 of yacc.c  */
#line 10995 "parser.y"
    {
	(yyval) = cb_zero;
  }
    break;

  case 1623:
/* Line 1792 of yacc.c  */
#line 11002 "parser.y"
    {
	check_not_88_level ((yyvsp[(1) - (1)]));
  }
    break;

  case 1625:
/* Line 1792 of yacc.c  */
#line 11010 "parser.y"
    {
	check_not_88_level ((yyvsp[(1) - (1)]));
  }
    break;

  case 1627:
/* Line 1792 of yacc.c  */
#line 11018 "parser.y"
    {
	check_not_88_level ((yyvsp[(1) - (1)]));
  }
    break;

  case 1630:
/* Line 1792 of yacc.c  */
#line 11028 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1631:
/* Line 1792 of yacc.c  */
#line 11032 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 1); }
    break;

  case 1632:
/* Line 1792 of yacc.c  */
#line 11036 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1633:
/* Line 1792 of yacc.c  */
#line 11037 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 1634:
/* Line 1792 of yacc.c  */
#line 11041 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1635:
/* Line 1792 of yacc.c  */
#line 11046 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (3)]));
	}
  }
    break;

  case 1636:
/* Line 1792 of yacc.c  */
#line 11053 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1637:
/* Line 1792 of yacc.c  */
#line 11060 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1638:
/* Line 1792 of yacc.c  */
#line 11067 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1639:
/* Line 1792 of yacc.c  */
#line 11077 "parser.y"
    {
	(yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0);
  }
    break;

  case 1640:
/* Line 1792 of yacc.c  */
#line 11084 "parser.y"
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

  case 1641:
/* Line 1792 of yacc.c  */
#line 11094 "parser.y"
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

  case 1642:
/* Line 1792 of yacc.c  */
#line 11104 "parser.y"
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

  case 1643:
/* Line 1792 of yacc.c  */
#line 11114 "parser.y"
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

  case 1644:
/* Line 1792 of yacc.c  */
#line 11127 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1645:
/* Line 1792 of yacc.c  */
#line 11131 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  }
    break;

  case 1646:
/* Line 1792 of yacc.c  */
#line 11139 "parser.y"
    {
	(yyval) = (yyvsp[(0) - (3)]);
	CB_REFERENCE ((yyvsp[(0) - (3)]))->subs = cb_list_reverse ((yyvsp[(2) - (3)]));
  }
    break;

  case 1647:
/* Line 1792 of yacc.c  */
#line 11147 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (4)]))->offset = (yyvsp[(2) - (4)]);
  }
    break;

  case 1648:
/* Line 1792 of yacc.c  */
#line 11151 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (5)]))->offset = (yyvsp[(2) - (5)]);
	CB_REFERENCE ((yyvsp[(0) - (5)]))->length = (yyvsp[(4) - (5)]);
  }
    break;

  case 1649:
/* Line 1792 of yacc.c  */
#line 11161 "parser.y"
    {
	if (cb_tree_category ((yyvsp[(1) - (1)])) != CB_CATEGORY_NUMERIC
	    || CB_LITERAL ((yyvsp[(1) - (1)]))->sign < 0
	    || CB_LITERAL ((yyvsp[(1) - (1)]))->scale) {
		cb_error (_("Non-negative integer value expected"));
		(yyval) = cb_build_numeric_literal(-1, "1", 0);
	} else {
		(yyval) = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 1650:
/* Line 1792 of yacc.c  */
#line 11175 "parser.y"
    {
	int	n;

	if (cb_tree_category ((yyvsp[(1) - (1)])) != CB_CATEGORY_NUMERIC) {
		cb_error (_("Integer value expected"));
		(yyval) = cb_int1;
	} else if (CB_LITERAL ((yyvsp[(1) - (1)]))->sign || CB_LITERAL ((yyvsp[(1) - (1)]))->scale) {
		cb_error (_("Integer value expected"));
		(yyval) = cb_int1;
	} else {
		n = cb_get_int ((yyvsp[(1) - (1)]));
		if (n < 1 || n > 256) {
			cb_error (_("Invalid SYMBOLIC integer"));
			(yyval) = cb_int1;
		} else {
			(yyval) = (yyvsp[(1) - (1)]);
		}
	}
  }
    break;

  case 1651:
/* Line 1792 of yacc.c  */
#line 11198 "parser.y"
    {
	int	n;

	if (cb_tree_category ((yyvsp[(1) - (1)])) != CB_CATEGORY_NUMERIC
	    || CB_LITERAL ((yyvsp[(1) - (1)]))->sign
	    || CB_LITERAL ((yyvsp[(1) - (1)]))->scale) {
		cb_error (_("Unsigned positive integer value expected"));
		(yyval) = cb_int1;
	} else {
		n = cb_get_int ((yyvsp[(1) - (1)]));
		if (n < 1) {
			cb_error (_("Unsigned positive integer value expected"));
			(yyval) = cb_int1;
		} else {
			(yyval) = (yyvsp[(1) - (1)]);
		}
	}
  }
    break;

  case 1652:
/* Line 1792 of yacc.c  */
#line 11220 "parser.y"
    {
	int	n;

	if (cb_tree_category ((yyvsp[(1) - (1)])) == CB_CATEGORY_NUMERIC) {
		if (CB_LITERAL ((yyvsp[(1) - (1)]))->sign || CB_LITERAL ((yyvsp[(1) - (1)]))->scale) {
			cb_error (_("Integer value expected"));
		} else {
			n = cb_get_int ((yyvsp[(1) - (1)]));
			if (n < 1 || n > 256) {
				cb_error (_("Invalid CLASS value"));
			}
		}
	}
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1653:
/* Line 1792 of yacc.c  */
#line 11235 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1654:
/* Line 1792 of yacc.c  */
#line 11236 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1655:
/* Line 1792 of yacc.c  */
#line 11237 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1656:
/* Line 1792 of yacc.c  */
#line 11238 "parser.y"
    { (yyval) = cb_high; }
    break;

  case 1657:
/* Line 1792 of yacc.c  */
#line 11239 "parser.y"
    { (yyval) = cb_low; }
    break;

  case 1658:
/* Line 1792 of yacc.c  */
#line 11240 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1659:
/* Line 1792 of yacc.c  */
#line 11245 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1660:
/* Line 1792 of yacc.c  */
#line 11249 "parser.y"
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

  case 1661:
/* Line 1792 of yacc.c  */
#line 11266 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1662:
/* Line 1792 of yacc.c  */
#line 11270 "parser.y"
    {
	(yyval) = cb_concat_literals ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1663:
/* Line 1792 of yacc.c  */
#line 11276 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1664:
/* Line 1792 of yacc.c  */
#line 11277 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1665:
/* Line 1792 of yacc.c  */
#line 11278 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1666:
/* Line 1792 of yacc.c  */
#line 11279 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1667:
/* Line 1792 of yacc.c  */
#line 11280 "parser.y"
    { (yyval) = cb_high; }
    break;

  case 1668:
/* Line 1792 of yacc.c  */
#line 11281 "parser.y"
    { (yyval) = cb_low; }
    break;

  case 1669:
/* Line 1792 of yacc.c  */
#line 11282 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1670:
/* Line 1792 of yacc.c  */
#line 11289 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), NULL, (yyvsp[(2) - (2)]), 0);
  }
    break;

  case 1671:
/* Line 1792 of yacc.c  */
#line 11293 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), CB_LIST_INIT ((yyvsp[(3) - (5)])), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1672:
/* Line 1792 of yacc.c  */
#line 11297 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1673:
/* Line 1792 of yacc.c  */
#line 11301 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1674:
/* Line 1792 of yacc.c  */
#line 11305 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), NULL, 0);
  }
    break;

  case 1675:
/* Line 1792 of yacc.c  */
#line 11309 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1676:
/* Line 1792 of yacc.c  */
#line 11313 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1677:
/* Line 1792 of yacc.c  */
#line 11317 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1678:
/* Line 1792 of yacc.c  */
#line 11321 "parser.y"
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1679:
/* Line 1792 of yacc.c  */
#line 11325 "parser.y"
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1680:
/* Line 1792 of yacc.c  */
#line 11329 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 0);
  }
    break;

  case 1681:
/* Line 1792 of yacc.c  */
#line 11333 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 1);
  }
    break;

  case 1691:
/* Line 1792 of yacc.c  */
#line 11358 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1692:
/* Line 1792 of yacc.c  */
#line 11362 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (4)]), NULL);
  }
    break;

  case 1693:
/* Line 1792 of yacc.c  */
#line 11366 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));
  }
    break;

  case 1694:
/* Line 1792 of yacc.c  */
#line 11373 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1695:
/* Line 1792 of yacc.c  */
#line 11377 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (3)]);
  }
    break;

  case 1696:
/* Line 1792 of yacc.c  */
#line 11381 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1697:
/* Line 1792 of yacc.c  */
#line 11388 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_int0);
  }
    break;

  case 1698:
/* Line 1792 of yacc.c  */
#line 11395 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int1);
  }
    break;

  case 1699:
/* Line 1792 of yacc.c  */
#line 11402 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int2);
  }
    break;

  case 1700:
/* Line 1792 of yacc.c  */
#line 11412 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  }
    break;

  case 1701:
/* Line 1792 of yacc.c  */
#line 11419 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, (yyvsp[(3) - (3)]));
  }
    break;

  case 1702:
/* Line 1792 of yacc.c  */
#line 11429 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  }
    break;

  case 1703:
/* Line 1792 of yacc.c  */
#line 11436 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[(3) - (3)])));
  }
    break;

  case 1704:
/* Line 1792 of yacc.c  */
#line 11446 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (1)]), cb_int0);
  }
    break;

  case 1705:
/* Line 1792 of yacc.c  */
#line 11450 "parser.y"
    {
	const int	num_args = cb_list_length ((yyvsp[(1) - (3)]));

	if (num_args == 4) {
		cb_error_x ((yyvsp[(1) - (3)]), _("Cannot specify offset and SYSTEM-OFFSET at the same time."));
	}

	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), cb_int1);
  }
    break;

  case 1706:
/* Line 1792 of yacc.c  */
#line 11463 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (1)]), cb_int0);
  }
    break;

  case 1707:
/* Line 1792 of yacc.c  */
#line 11467 "parser.y"
    {
	const int	num_args = cb_list_length ((yyvsp[(1) - (3)]));

	if (num_args == 3) {
		cb_error_x ((yyvsp[(1) - (3)]), _("Cannot specify offset and SYSTEM-OFFSET at the same time."));
	}

	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), cb_int1);
  }
    break;

  case 1708:
/* Line 1792 of yacc.c  */
#line 11481 "parser.y"
    {
	non_const_word = 1;
  }
    break;

  case 1709:
/* Line 1792 of yacc.c  */
#line 11489 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1710:
/* Line 1792 of yacc.c  */
#line 11490 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1711:
/* Line 1792 of yacc.c  */
#line 11494 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1712:
/* Line 1792 of yacc.c  */
#line 11495 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1713:
/* Line 1792 of yacc.c  */
#line 11499 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1714:
/* Line 1792 of yacc.c  */
#line 11500 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1715:
/* Line 1792 of yacc.c  */
#line 11505 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1716:
/* Line 1792 of yacc.c  */
#line 11509 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1717:
/* Line 1792 of yacc.c  */
#line 11516 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1718:
/* Line 1792 of yacc.c  */
#line 11520 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1719:
/* Line 1792 of yacc.c  */
#line 11527 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1720:
/* Line 1792 of yacc.c  */
#line 11528 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1721:
/* Line 1792 of yacc.c  */
#line 11529 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 1722:
/* Line 1792 of yacc.c  */
#line 11533 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1723:
/* Line 1792 of yacc.c  */
#line 11534 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1724:
/* Line 1792 of yacc.c  */
#line 11538 "parser.y"
    { (yyval) = cb_int (cb_flag_optional_file); }
    break;

  case 1725:
/* Line 1792 of yacc.c  */
#line 11539 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1726:
/* Line 1792 of yacc.c  */
#line 11540 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1727:
/* Line 1792 of yacc.c  */
#line 11545 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1728:
/* Line 1792 of yacc.c  */
#line 11549 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		(yyval) = (yyvsp[(2) - (2)]);
	} else {
		(yyval) = cb_int (COB_STORE_ROUND);
	}
	cobc_cs_check = 0;
  }
    break;

  case 1729:
/* Line 1792 of yacc.c  */
#line 11561 "parser.y"
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
    break;

  case 1730:
/* Line 1792 of yacc.c  */
#line 11566 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
	cobc_cs_check = 0;
  }
    break;

  case 1731:
/* Line 1792 of yacc.c  */
#line 11574 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
    break;

  case 1732:
/* Line 1792 of yacc.c  */
#line 11578 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
    break;

  case 1733:
/* Line 1792 of yacc.c  */
#line 11582 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
    break;

  case 1734:
/* Line 1792 of yacc.c  */
#line 11586 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
    break;

  case 1735:
/* Line 1792 of yacc.c  */
#line 11590 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
    break;

  case 1736:
/* Line 1792 of yacc.c  */
#line 11594 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
    break;

  case 1737:
/* Line 1792 of yacc.c  */
#line 11598 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
    break;

  case 1738:
/* Line 1792 of yacc.c  */
#line 11602 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
    break;

  case 1739:
/* Line 1792 of yacc.c  */
#line 11608 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1740:
/* Line 1792 of yacc.c  */
#line 11609 "parser.y"
    { (yyval) = cb_int1; }
    break;


/* Line 1792 of yacc.c  */
#line 19103 "parser.c"
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
#line 11781 "parser.y"

