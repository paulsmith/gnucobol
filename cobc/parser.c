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


#line 1025 "parser.c" /* yacc.c:339  */

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
    NOT_END = 547,
    NOT_EOP = 548,
    NOT_ESCAPE = 549,
    NOT_EQUAL = 550,
    NOT_EXCEPTION = 551,
    NOT_INVALID_KEY = 552,
    NOT_OVERFLOW = 553,
    NOT_SIZE_ERROR = 554,
    NO_ADVANCING = 555,
    NUMBER = 556,
    NUMBERS = 557,
    NUMERIC = 558,
    NUMERIC_EDITED = 559,
    NUMVALC_FUNC = 560,
    OBJECT_COMPUTER = 561,
    OCCURS = 562,
    OF = 563,
    OFF = 564,
    OMITTED = 565,
    ON = 566,
    ONLY = 567,
    OPEN = 568,
    OPTIONAL = 569,
    OR = 570,
    ORDER = 571,
    ORGANIZATION = 572,
    OTHER = 573,
    OUTPUT = 574,
    OVERLINE = 575,
    PACKED_DECIMAL = 576,
    PADDING = 577,
    PAGE = 578,
    PAGE_COUNTER = 579,
    PARAGRAPH = 580,
    PERFORM = 581,
    PH = 582,
    PF = 583,
    PICTURE = 584,
    PICTURE_SYMBOL = 585,
    PLUS = 586,
    POINTER = 587,
    POSITION = 588,
    POSITIVE = 589,
    PRESENT = 590,
    PREVIOUS = 591,
    PRINTER = 592,
    PRINTING = 593,
    PROCEDURE = 594,
    PROCEDURES = 595,
    PROCEED = 596,
    PROGRAM = 597,
    PROGRAM_ID = 598,
    PROGRAM_NAME = 599,
    PROGRAM_POINTER = 600,
    PROHIBITED = 601,
    PROMPT = 602,
    PROTECTED = 603,
    QUOTE = 604,
    RANDOM = 605,
    RD = 606,
    READ = 607,
    READY_TRACE = 608,
    RECORD = 609,
    RECORDING = 610,
    RECORDS = 611,
    RECURSIVE = 612,
    REDEFINES = 613,
    REEL = 614,
    REFERENCE = 615,
    REFERENCES = 616,
    RELATIVE = 617,
    RELEASE = 618,
    REMAINDER = 619,
    REMOVAL = 620,
    RENAMES = 621,
    REPLACE = 622,
    REPLACING = 623,
    REPORT = 624,
    REPORTING = 625,
    REPORTS = 626,
    REPOSITORY = 627,
    REPO_FUNCTION = 628,
    REQUIRED = 629,
    RESERVE = 630,
    RESET = 631,
    RESET_TRACE = 632,
    RETURN = 633,
    RETURNING = 634,
    REVERSE_FUNC = 635,
    REVERSE_VIDEO = 636,
    REVERSED = 637,
    REWIND = 638,
    REWRITE = 639,
    RF = 640,
    RH = 641,
    RIGHT = 642,
    ROLLBACK = 643,
    ROUNDED = 644,
    RUN = 645,
    SAME = 646,
    SCREEN = 647,
    SCREEN_CONTROL = 648,
    SCROLL = 649,
    SD = 650,
    SEARCH = 651,
    SECTION = 652,
    SECURE = 653,
    SEGMENT_LIMIT = 654,
    SELECT = 655,
    SEMI_COLON = 656,
    SENTENCE = 657,
    SEPARATE = 658,
    SEQUENCE = 659,
    SEQUENTIAL = 660,
    SET = 661,
    SHARING = 662,
    SIGN = 663,
    SIGNED = 664,
    SIGNED_INT = 665,
    SIGNED_LONG = 666,
    SIGNED_SHORT = 667,
    SIZE = 668,
    SIZE_ERROR = 669,
    SORT = 670,
    SORT_MERGE = 671,
    SOURCE = 672,
    SOURCE_COMPUTER = 673,
    SPACE = 674,
    SPECIAL_NAMES = 675,
    STANDARD = 676,
    STANDARD_1 = 677,
    STANDARD_2 = 678,
    START = 679,
    STATIC = 680,
    STATUS = 681,
    STDCALL = 682,
    STEP = 683,
    STOP = 684,
    STRING = 685,
    SUBSTITUTE_FUNC = 686,
    SUBSTITUTE_CASE_FUNC = 687,
    SUBTRACT = 688,
    SUM = 689,
    SUPPRESS = 690,
    SYMBOLIC = 691,
    SYNCHRONIZED = 692,
    SYSTEM_DEFAULT = 693,
    SYSTEM_OFFSET = 694,
    TAB = 695,
    TALLYING = 696,
    TAPE = 697,
    TERMINATE = 698,
    TEST = 699,
    THAN = 700,
    THEN = 701,
    THRU = 702,
    TIME = 703,
    TIMEOUT = 704,
    TIMES = 705,
    TO = 706,
    TOK_AMPER = 707,
    TOK_CLOSE_PAREN = 708,
    TOK_COLON = 709,
    TOK_DIV = 710,
    TOK_DOT = 711,
    TOK_EQUAL = 712,
    TOK_FALSE = 713,
    TOK_FILE = 714,
    TOK_GREATER = 715,
    TOK_INITIAL = 716,
    TOK_LESS = 717,
    TOK_MINUS = 718,
    TOK_MUL = 719,
    TOK_NULL = 720,
    TOK_OVERFLOW = 721,
    TOK_OPEN_PAREN = 722,
    TOK_PLUS = 723,
    TOK_TRUE = 724,
    TOP = 725,
    TOWARD_GREATER = 726,
    TOWARD_LESSER = 727,
    TRAILING = 728,
    TRANSFORM = 729,
    TRIM_FUNC = 730,
    TRUNCATION = 731,
    TYPE = 732,
    UNDERLINE = 733,
    UNIT = 734,
    UNLOCK = 735,
    UNSIGNED = 736,
    UNSIGNED_INT = 737,
    UNSIGNED_LONG = 738,
    UNSIGNED_SHORT = 739,
    UNSTRING = 740,
    UNTIL = 741,
    UP = 742,
    UPDATE = 743,
    UPON = 744,
    UPON_ARGUMENT_NUMBER = 745,
    UPON_COMMAND_LINE = 746,
    UPON_ENVIRONMENT_NAME = 747,
    UPON_ENVIRONMENT_VALUE = 748,
    UPPER = 749,
    UPPER_CASE_FUNC = 750,
    USAGE = 751,
    USE = 752,
    USER = 753,
    USER_DEFAULT = 754,
    USER_FUNCTION_NAME = 755,
    USER_REPO_FUNCTION = 756,
    USING = 757,
    VALUE = 758,
    VARYING = 759,
    WAIT = 760,
    WHEN = 761,
    WHEN_COMPILED_FUNC = 762,
    WITH = 763,
    WORD = 764,
    WORDS = 765,
    WORKING_STORAGE = 766,
    WRITE = 767,
    YYYYDDD = 768,
    YYYYMMDD = 769,
    ZERO = 770,
    SHIFT_PREFER = 771
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

#line 1594 "parser.c" /* yacc.c:358  */

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
#define YYLAST   8947

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  517
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  825
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1923
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  2755

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   771

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
     515,   516
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  1609,  1609,  1609,  1641,  1642,  1646,  1647,  1651,  1652,
    1656,  1656,  1679,  1686,  1693,  1699,  1700,  1701,  1705,  1706,
    1710,  1734,  1735,  1739,  1773,  1779,  1787,  1765,  1797,  1796,
    1834,  1866,  1867,  1871,  1872,  1875,  1876,  1880,  1889,  1898,
    1899,  1903,  1907,  1916,  1917,  1925,  1926,  1936,  1937,  1941,
    1942,  1943,  1944,  1945,  1952,  1951,  1964,  1965,  1968,  1969,
    1983,  1982,  1992,  1993,  1994,  1995,  1999,  2000,  2004,  2005,
    2006,  2007,  2011,  2019,  2026,  2033,  2044,  2048,  2052,  2056,
    2063,  2064,  2071,  2070,  2081,  2082,  2083,  2090,  2091,  2095,
    2099,  2111,  2115,  2116,  2121,  2124,  2131,  2136,  2147,  2160,
    2161,  2169,  2170,  2174,  2175,  2176,  2177,  2178,  2179,  2180,
    2181,  2182,  2183,  2184,  2185,  2193,  2192,  2220,  2230,  2243,
    2251,  2254,  2255,  2259,  2266,  2281,  2302,  2301,  2325,  2331,
    2337,  2343,  2349,  2355,  2365,  2369,  2376,  2380,  2385,  2384,
    2395,  2399,  2406,  2407,  2408,  2409,  2410,  2411,  2415,  2416,
    2423,  2438,  2441,  2448,  2456,  2460,  2471,  2491,  2499,  2510,
    2511,  2517,  2538,  2539,  2543,  2547,  2568,  2591,  2673,  2676,
    2685,  2704,  2720,  2738,  2756,  2773,  2789,  2790,  2797,  2798,
    2806,  2807,  2817,  2818,  2823,  2822,  2843,  2853,  2854,  2858,
    2859,  2860,  2861,  2862,  2863,  2864,  2865,  2866,  2867,  2868,
    2869,  2870,  2877,  2883,  2893,  2906,  2919,  2935,  2936,  2937,
    2938,  2941,  2942,  2948,  2949,  2953,  2957,  2958,  2963,  2966,
    2967,  2974,  2982,  2983,  2984,  2991,  3015,  3017,  3022,  3032,
    3043,  3050,  3052,  3053,  3059,  3059,  3066,  3071,  3076,  3083,
    3084,  3085,  3089,  3100,  3101,  3105,  3110,  3115,  3120,  3131,
    3142,  3152,  3160,  3161,  3162,  3168,  3179,  3186,  3187,  3193,
    3201,  3202,  3203,  3209,  3210,  3211,  3218,  3219,  3223,  3224,
    3230,  3258,  3259,  3260,  3261,  3268,  3267,  3283,  3284,  3288,
    3291,  3292,  3298,  3299,  3307,  3308,  3316,  3317,  3321,  3342,
    3341,  3358,  3365,  3369,  3375,  3376,  3380,  3390,  3405,  3406,
    3407,  3408,  3409,  3410,  3411,  3412,  3413,  3420,  3427,  3427,
    3427,  3433,  3453,  3487,  3518,  3519,  3526,  3527,  3531,  3532,
    3539,  3550,  3555,  3566,  3567,  3571,  3572,  3578,  3589,  3607,
    3608,  3612,  3613,  3614,  3618,  3625,  3632,  3641,  3653,  3705,
    3720,  3721,  3725,  3735,  3749,  3751,  3750,  3766,  3769,  3769,
    3786,  3787,  3789,  3793,  3795,  3794,  3829,  3842,  3850,  3855,
    3861,  3870,  3880,  3883,  3895,  3896,  3897,  3898,  3902,  3906,
    3910,  3914,  3918,  3922,  3926,  3930,  3934,  3938,  3942,  3946,
    3950,  3961,  3962,  3966,  3967,  3971,  3972,  3973,  3977,  3978,
    3982,  4008,  4012,  4021,  4025,  4034,  4035,  4036,  4037,  4038,
    4039,  4040,  4041,  4042,  4043,  4044,  4045,  4046,  4047,  4054,
    4078,  4106,  4109,  4118,  4143,  4154,  4155,  4159,  4163,  4167,
    4171,  4175,  4179,  4183,  4187,  4191,  4195,  4199,  4203,  4207,
    4212,  4217,  4221,  4225,  4233,  4237,  4241,  4249,  4253,  4257,
    4261,  4265,  4269,  4273,  4277,  4281,  4289,  4297,  4301,  4305,
    4309,  4313,  4317,  4325,  4326,  4330,  4331,  4337,  4343,  4355,
    4373,  4374,  4383,  4415,  4445,  4446,  4450,  4451,  4454,  4455,
    4461,  4462,  4469,  4470,  4477,  4501,  4502,  4519,  4520,  4523,
    4524,  4531,  4532,  4537,  4548,  4559,  4570,  4581,  4610,  4609,
    4618,  4619,  4623,  4624,  4627,  4628,  4641,  4654,  4675,  4684,
    4698,  4700,  4699,  4719,  4721,  4720,  4736,  4738,  4737,  4746,
    4747,  4754,  4753,  4766,  4767,  4768,  4775,  4780,  4784,  4785,
    4791,  4798,  4802,  4803,  4809,  4846,  4850,  4855,  4861,  4862,
    4867,  4868,  4869,  4870,  4871,  4875,  4882,  4889,  4896,  4903,
    4909,  4910,  4915,  4914,  4921,  4922,  4926,  4927,  4928,  4929,
    4930,  4931,  4932,  4933,  4934,  4935,  4936,  4937,  4938,  4939,
    4940,  4941,  4945,  4952,  4953,  4954,  4955,  4956,  4957,  4958,
    4961,  4962,  4963,  4966,  4967,  4971,  4978,  4984,  4985,  4989,
    4990,  4994,  5001,  5005,  5012,  5013,  5017,  5024,  5025,  5029,
    5030,  5034,  5035,  5036,  5040,  5041,  5045,  5046,  5050,  5057,
    5064,  5072,  5074,  5073,  5094,  5095,  5099,  5100,  5104,  5106,
    5105,  5173,  5191,  5192,  5196,  5201,  5206,  5210,  5214,  5219,
    5224,  5229,  5234,  5238,  5242,  5247,  5252,  5257,  5261,  5265,
    5269,  5273,  5278,  5282,  5286,  5291,  5296,  5301,  5306,  5307,
    5308,  5309,  5310,  5311,  5312,  5313,  5314,  5323,  5328,  5339,
    5340,  5344,  5345,  5349,  5350,  5354,  5355,  5360,  5363,  5367,
    5375,  5378,  5382,  5390,  5401,  5409,  5411,  5421,  5410,  5448,
    5448,  5481,  5485,  5484,  5498,  5497,  5517,  5518,  5523,  5538,
    5540,  5544,  5555,  5557,  5565,  5573,  5581,  5610,  5643,  5646,
    5659,  5664,  5695,  5697,  5696,  5733,  5734,  5738,  5739,  5740,
    5757,  5758,  5769,  5768,  5818,  5819,  5823,  5871,  5884,  5887,
    5906,  5911,  5905,  5924,  5924,  5954,  5961,  5962,  5963,  5964,
    5965,  5966,  5967,  5968,  5969,  5970,  5971,  5972,  5973,  5974,
    5975,  5976,  5977,  5978,  5979,  5980,  5981,  5982,  5983,  5984,
    5985,  5986,  5987,  5988,  5989,  5990,  5991,  5992,  5993,  5994,
    5995,  5996,  5997,  5998,  5999,  6000,  6001,  6002,  6003,  6004,
    6005,  6006,  6007,  6008,  6009,  6010,  6024,  6036,  6035,  6051,
    6050,  6061,  6065,  6069,  6074,  6079,  6084,  6089,  6093,  6097,
    6101,  6105,  6110,  6114,  6118,  6122,  6126,  6130,  6134,  6141,
    6142,  6148,  6150,  6154,  6155,  6159,  6160,  6164,  6168,  6172,
    6173,  6177,  6189,  6201,  6212,  6216,  6217,  6221,  6228,  6232,
    6238,  6242,  6246,  6250,  6254,  6260,  6264,  6268,  6274,  6278,
    6282,  6286,  6290,  6294,  6298,  6302,  6306,  6310,  6314,  6320,
    6324,  6328,  6332,  6336,  6340,  6344,  6351,  6352,  6356,  6360,
    6378,  6377,  6386,  6390,  6394,  6400,  6401,  6408,  6412,  6423,
    6422,  6431,  6435,  6447,  6448,  6456,  6455,  6464,  6465,  6469,
    6475,  6475,  6482,  6481,  6491,  6511,  6515,  6520,  6525,  6546,
    6550,  6549,  6566,  6567,  6572,  6580,  6604,  6606,  6610,  6619,
    6632,  6635,  6639,  6643,  6666,  6667,  6671,  6672,  6677,  6680,
    6685,  6694,  6698,  6706,  6710,  6721,  6720,  6728,  6732,  6743,
    6742,  6750,  6755,  6763,  6764,  6765,  6766,  6767,  6775,  6774,
    6783,  6790,  6794,  6804,  6815,  6833,  6832,  6841,  6845,  6849,
    6854,  6862,  6866,  6877,  6876,  6886,  6890,  6894,  6898,  6902,
    6906,  6911,  6918,  6919,  6924,  6923,  6988,  6992,  7000,  7001,
    7005,  7009,  7014,  7018,  7019,  7023,  7027,  7031,  7035,  7039,
    7040,  7044,  7048,  7054,  7060,  7064,  7068,  7074,  7080,  7086,
    7092,  7096,  7100,  7104,  7108,  7112,  7116,  7120,  7127,  7131,
    7142,  7141,  7150,  7154,  7158,  7162,  7166,  7173,  7177,  7188,
    7187,  7196,  7215,  7214,  7238,  7246,  7247,  7252,  7263,  7274,
    7288,  7292,  7299,  7300,  7305,  7314,  7323,  7328,  7337,  7338,
    7343,  7405,  7406,  7407,  7411,  7412,  7416,  7420,  7431,  7430,
    7442,  7443,  7464,  7478,  7500,  7522,  7542,  7565,  7566,  7574,
    7573,  7582,  7593,  7592,  7602,  7609,  7608,  7621,  7630,  7634,
    7645,  7661,  7660,  7669,  7673,  7677,  7684,  7688,  7699,  7698,
    7706,  7714,  7715,  7719,  7720,  7721,  7726,  7729,  7736,  7740,
    7748,  7755,  7756,  7757,  7758,  7759,  7760,  7761,  7766,  7769,
    7779,  7778,  7787,  7793,  7805,  7804,  7813,  7817,  7821,  7825,
    7832,  7833,  7834,  7835,  7842,  7841,  7855,  7865,  7874,  7875,
    7879,  7880,  7881,  7882,  7883,  7884,  7888,  7889,  7893,  7898,
    7905,  7906,  7907,  7908,  7909,  7913,  7941,  7944,  7951,  7955,
    7965,  7964,  7977,  7976,  7984,  7988,  7999,  7998,  8007,  8011,
    8018,  8022,  8033,  8032,  8040,  8061,  8085,  8086,  8087,  8088,
    8092,  8093,  8097,  8098,  8099,  8100,  8112,  8111,  8122,  8128,
    8127,  8138,  8146,  8154,  8161,  8165,  8178,  8185,  8197,  8200,
    8205,  8209,  8220,  8227,  8228,  8232,  8233,  8236,  8237,  8242,
    8253,  8252,  8261,  8288,  8289,  8294,  8297,  8301,  8305,  8309,
    8313,  8317,  8324,  8325,  8329,  8330,  8334,  8338,  8348,  8359,
    8358,  8366,  8376,  8387,  8386,  8395,  8402,  8406,  8417,  8416,
    8428,  8437,  8440,  8444,  8451,  8455,  8465,  8477,  8476,  8485,
    8489,  8498,  8499,  8504,  8507,  8515,  8519,  8526,  8534,  8538,
    8549,  8548,  8562,  8563,  8564,  8565,  8566,  8567,  8571,  8572,
    8576,  8577,  8583,  8592,  8599,  8600,  8604,  8608,  8612,  8618,
    8624,  8628,  8632,  8636,  8645,  8649,  8658,  8667,  8668,  8672,
    8681,  8682,  8686,  8690,  8701,  8700,  8709,  8708,  8739,  8742,
    8762,  8763,  8766,  8767,  8775,  8776,  8781,  8786,  8796,  8812,
    8817,  8827,  8844,  8843,  8853,  8866,  8869,  8877,  8880,  8885,
    8890,  8898,  8899,  8900,  8901,  8902,  8903,  8907,  8915,  8916,
    8920,  8924,  8935,  8934,  8944,  8957,  8960,  8964,  8972,  8984,
    8987,  8994,  8995,  8996,  8997,  9004,  9003,  9012,  9019,  9020,
    9024,  9025,  9026,  9030,  9031,  9035,  9039,  9050,  9049,  9058,
    9062,  9066,  9073,  9077,  9087,  9098,  9099,  9106,  9105,  9114,
    9120,  9132,  9131,  9139,  9153,  9152,  9160,  9173,  9175,  9176,
    9184,  9183,  9192,  9200,  9201,  9206,  9207,  9212,  9219,  9220,
    9225,  9232,  9233,  9237,  9238,  9242,  9243,  9247,  9251,  9262,
    9261,  9270,  9271,  9272,  9273,  9274,  9278,  9305,  9308,  9320,
    9330,  9335,  9340,  9345,  9353,  9391,  9392,  9396,  9436,  9446,
    9469,  9470,  9471,  9472,  9476,  9485,  9491,  9501,  9510,  9519,
    9520,  9527,  9526,  9538,  9548,  9549,  9554,  9557,  9561,  9565,
    9572,  9573,  9577,  9578,  9582,  9586,  9598,  9601,  9602,  9611,
    9612,  9616,  9617,  9626,  9627,  9631,  9634,  9635,  9644,  9645,
    9656,  9659,  9660,  9669,  9670,  9682,  9685,  9687,  9697,  9698,
    9710,  9711,  9715,  9716,  9717,  9721,  9730,  9741,  9742,  9743,
    9747,  9756,  9767,  9772,  9773,  9782,  9783,  9794,  9798,  9808,
    9815,  9822,  9822,  9833,  9834,  9835,  9839,  9848,  9849,  9851,
    9852,  9853,  9854,  9855,  9857,  9858,  9859,  9860,  9861,  9862,
    9864,  9865,  9866,  9868,  9869,  9870,  9871,  9872,  9875,  9876,
    9880,  9881,  9885,  9886,  9890,  9891,  9895,  9899,  9905,  9909,
    9915,  9916,  9917,  9921,  9922,  9923,  9927,  9928,  9929,  9933,
    9937,  9941,  9942,  9943,  9946,  9947,  9957,  9969,  9978,  9990,
    9999, 10011, 10026, 10027, 10032, 10041, 10047, 10067, 10071, 10092,
   10133, 10147, 10148, 10153, 10159, 10160, 10165, 10177, 10178, 10179,
   10186, 10197, 10198, 10202, 10210, 10218, 10222, 10229, 10238, 10239,
   10245, 10259, 10276, 10280, 10287, 10288, 10289, 10296, 10297, 10301,
   10305, 10312, 10313, 10314, 10315, 10316, 10320, 10324, 10328, 10332,
   10336, 10357, 10361, 10368, 10369, 10370, 10374, 10375, 10376, 10377,
   10378, 10382, 10386, 10393, 10394, 10398, 10399, 10403, 10404, 10408,
   10409, 10420, 10424, 10428, 10432, 10433, 10437, 10441, 10442, 10449,
   10453, 10457, 10461, 10465, 10469, 10470, 10476, 10480, 10484, 10485,
   10489, 10493, 10500, 10507, 10514, 10524, 10531, 10541, 10551, 10561,
   10574, 10578, 10586, 10594, 10598, 10608, 10622, 10645, 10667, 10683,
   10684, 10685, 10686, 10687, 10688, 10692, 10696, 10713, 10717, 10724,
   10725, 10726, 10727, 10728, 10729, 10730, 10736, 10740, 10744, 10748,
   10752, 10756, 10760, 10764, 10768, 10772, 10776, 10780, 10787, 10788,
   10792, 10793, 10794, 10798, 10799, 10800, 10801, 10805, 10809, 10813,
   10820, 10824, 10828, 10835, 10842, 10849, 10859, 10866, 10876, 10883,
   10893, 10897, 10910, 10914, 10929, 10937, 10938, 10942, 10943, 10947,
   10948, 10953, 10956, 10964, 10967, 10974, 10976, 10977, 10981, 10982,
   10986, 10987, 10988, 10993, 10996, 11009, 11013, 11021, 11025, 11029,
   11033, 11037, 11041, 11045, 11049, 11056, 11057, 11063, 11064, 11065,
   11066, 11067, 11068, 11069, 11070, 11071, 11072, 11073, 11074, 11075,
   11076, 11077, 11078, 11079, 11080, 11081, 11082, 11083, 11084, 11085,
   11086, 11087, 11088, 11089, 11090, 11091, 11092, 11093, 11094, 11095,
   11096, 11097, 11098, 11099, 11100, 11101, 11102, 11103, 11104, 11105,
   11106, 11107, 11108, 11109, 11110, 11111, 11112, 11113, 11114, 11115,
   11116, 11117, 11118, 11119, 11120, 11121, 11122, 11123, 11124, 11125,
   11126, 11127, 11128, 11129, 11130, 11131, 11132, 11139, 11139, 11140,
   11140, 11141, 11141, 11142, 11142, 11143, 11143, 11144, 11144, 11145,
   11145, 11146, 11146, 11147, 11147, 11148, 11148, 11149, 11149, 11150,
   11150, 11151, 11151, 11152, 11152, 11153, 11153, 11154, 11154, 11155,
   11155, 11156, 11156, 11157, 11157, 11157, 11158, 11158, 11159, 11159,
   11160, 11160, 11161, 11161, 11162, 11162, 11162, 11163, 11163, 11164,
   11164, 11164, 11165, 11165, 11165, 11166, 11166, 11166, 11167, 11167,
   11168, 11168, 11169, 11169, 11170, 11170, 11170, 11171, 11171, 11172,
   11172, 11173, 11173, 11173, 11173, 11174, 11174, 11175, 11175, 11176,
   11176, 11177, 11177, 11178, 11178, 11179, 11179, 11180, 11180, 11181,
   11181, 11181, 11182, 11182, 11183, 11183, 11184, 11184, 11185, 11185,
   11186, 11186, 11187, 11187, 11188, 11188, 11189, 11189, 11189, 11190,
   11190, 11191, 11191, 11192, 11192, 11196, 11196, 11197, 11197, 11198,
   11198, 11199, 11199, 11200, 11200, 11201, 11201, 11202, 11202, 11203,
   11203, 11204, 11204, 11205, 11205, 11206, 11206, 11207, 11207, 11208,
   11208, 11209, 11209, 11210, 11210, 11213, 11214, 11215, 11219, 11219,
   11220, 11220, 11221, 11221, 11222, 11222, 11223, 11223, 11224, 11224,
   11225, 11225, 11226, 11226
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
  "\"FUNCTION\"", "GENERATE", "GIVING", "GLOBAL", "GO", "GOBACK",
  "GREATER", "\"GREATER OR EQUAL\"", "GRID", "GROUP", "HEADING",
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
  "\"NO-ECHO\"", "NORMAL", "NOT", "\"NOT END\"", "\"NOT EOP\"",
  "\"NOT ESCAPE\"", "\"NOT EQUAL\"", "\"NOT EXCEPTION\"",
  "\"NOT INVALID KEY\"", "\"NOT OVERFLOW\"", "\"NOT SIZE ERROR\"",
  "\"NO ADVANCING\"", "NUMBER", "NUMBERS", "NUMERIC", "\"NUMERIC-EDITED\"",
  "\"FUNCTION NUMVAL-C\"", "\"OBJECT-COMPUTER\"", "OCCURS", "OF", "OFF",
  "OMITTED", "ON", "ONLY", "OPEN", "OPTIONAL", "OR", "ORDER",
  "ORGANIZATION", "OTHER", "OUTPUT", "OVERLINE", "\"PACKED-DECIMAL\"",
  "PADDING", "PAGE", "\"PAGE-COUNTER\"", "PARAGRAPH", "PERFORM", "PH",
  "PF", "PICTURE", "\"PICTURE SYMBOL\"", "PLUS", "POINTER", "POSITION",
  "POSITIVE", "PRESENT", "PREVIOUS", "PRINTER", "PRINTING", "PROCEDURE",
  "PROCEDURES", "PROCEED", "PROGRAM", "\"PROGRAM-ID\"", "\"Program name\"",
  "\"PROGRAM-POINTER\"", "PROHIBITED", "PROMPT", "\"PROTECTED\"", "QUOTE",
  "RANDOM", "RD", "READ", "\"READY TRACE\"", "RECORD", "RECORDING",
  "RECORDS", "RECURSIVE", "REDEFINES", "REEL", "REFERENCE", "REFERENCES",
  "RELATIVE", "RELEASE", "REMAINDER", "REMOVAL", "RENAMES", "REPLACE",
  "REPLACING", "REPORT", "REPORTING", "REPORTS", "REPOSITORY",
  "\"Intrinsic function name\"", "REQUIRED", "RESERVE", "RESET",
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
  "\"User FUNCTION\"", "\"User FUNCTION name\"", "USING", "VALUE",
  "VARYING", "WAIT", "WHEN", "\"FUNCTION WHEN-COMPILED\"", "WITH",
  "\"Identifier\"", "WORDS", "\"WORKING-STORAGE\"", "WRITE", "YYYYDDD",
  "YYYYMMDD", "ZERO", "SHIFT_PREFER", "$accept", "start", "$@1",
  "nested_list", "nested_progs", "source_element", "simple_prog", "$@2",
  "program_definition", "program_mandatory", "function_definition",
  "nested_prog", "end_program", "end_mandatory", "end_function",
  "end_function_mandatory", "program_body", "$@3", "$@4", "$@5",
  "program_identification", "$@6", "function_identification",
  "program_name", "as_literal", "program_type", "program_type_clause",
  "_init_or_recurs", "environment_header", "configuration_header",
  "configuration_list", "configuration_paragraph",
  "source_computer_paragraph", "$@7", "source_computer_entry",
  "with_debugging_mode", "object_computer_paragraph", "$@8",
  "object_computer_entry", "object_clauses_list", "object_clauses",
  "object_computer_memory", "object_computer_sequence",
  "object_computer_segment", "object_computer_class", "locale_class",
  "computer_words", "repository_paragraph", "$@9", "repository_entry",
  "repository_list", "repository_name", "user_or_intrinsic",
  "_as_literal_intrinsic", "repository_name_list",
  "special_names_paragraph", "special_names_entry", "special_name_list",
  "special_name", "mnemonic_name_clause", "$@10", "mnemonic_choices",
  "special_name_mnemonic_on_off", "on_off_clauses", "on_off_clauses_1",
  "alphabet_name_clause", "@11", "alphabet_definition",
  "alphabet_literal_list", "alphabet_literal", "@12",
  "alphabet_also_sequence", "alphabet_lits", "space_or_zero",
  "symbolic_characters_clause", "sym_in_word", "symbolic_collection",
  "symbolic_chars_list", "symbolic_chars_phrase", "char_list",
  "integer_list", "class_name_clause", "class_item_list", "class_item",
  "locale_clause", "currency_sign_clause", "with_pic_symbol",
  "decimal_point_clause", "numeric_sign_clause", "cursor_clause",
  "crt_status_clause", "screen_control", "event_status",
  "input_output_header", "file_control_header", "i_o_control_header",
  "file_control_sequence", "file_control_entry", "$@13",
  "select_clause_sequence", "select_clause", "assign_clause",
  "device_name", "_line_adv_file", "_ext_clause", "assignment_name",
  "opt_assignment_name", "access_mode_clause", "access_mode",
  "alternative_record_key_clause", "suppress_clause",
  "collating_sequence_clause", "file_status_clause", "file_or_sort",
  "lock_mode_clause", "$@14", "lock_mode", "lock_with",
  "organization_clause", "organization", "padding_character_clause",
  "record_delimiter_clause", "record_key_clause", "opt_splitk",
  "relative_key_clause", "reserve_clause", "no_or_integer",
  "sharing_clause", "sharing_option", "opt_i_o_control",
  "i_o_control_list", "i_o_control_clause", "same_clause", "same_option",
  "multiple_file_tape_clause", "$@15", "multiple_file_list",
  "multiple_file", "multiple_file_position", "data_division_header",
  "file_section_header", "file_description_sequence", "file_description",
  "file_description_entry", "$@16", "file_type",
  "file_description_clause_sequence", "file_description_clause",
  "block_contains_clause", "_records_or_characters", "record_clause",
  "record_depending", "opt_from_integer", "opt_to_integer",
  "label_records_clause", "value_of_clause", "file_id", "valueof_name",
  "data_records_clause", "linage_clause", "linage_sequence",
  "linage_lines", "linage_footing", "linage_top", "linage_bottom",
  "recording_mode_clause", "code_set_clause", "report_clause",
  "report_keyword", "rep_name_list", "working_storage_section", "$@17",
  "record_description_list", "$@18", "record_description_list_2",
  "data_description", "$@19", "level_number", "entry_name", "const_name",
  "const_global", "lit_or_length", "con_identifier", "fp32_usage",
  "fp64_usage", "fp128_usage", "pointer_len", "constant_entry",
  "constant_source", "data_description_clause_sequence",
  "data_description_clause", "redefines_clause", "external_clause",
  "as_extname", "global_clause", "picture_clause", "usage_clause", "usage",
  "float_usage", "double_usage", "sign_clause", "report_occurs_clause",
  "occurs_step", "occurs_clause", "occurs_to_integer",
  "occurs_from_integer", "occurs_depending", "capacity_in",
  "occurs_initialized", "occurs_keys", "occurs_key_list",
  "ascending_or_descending", "occurs_indexed", "occurs_index_list",
  "occurs_index", "justified_clause", "synchronized_clause",
  "blank_clause", "based_clause", "value_clause", "$@20",
  "value_item_list", "value_item", "false_is", "renames_clause",
  "any_length_clause", "local_storage_section", "$@21", "linkage_section",
  "$@22", "report_section", "$@23", "report_description_sequence",
  "report_description", "$@24", "report_description_options",
  "report_description_option", "control_clause", "control_field_list",
  "identifier_list", "page_limit_clause", "page_line_column",
  "page_heading_list", "page_detail", "heading_clause", "first_detail",
  "last_heading", "last_detail", "footing_clause",
  "report_group_description_list", "report_group_description_entry",
  "$@25", "report_group_options", "report_group_option", "type_clause",
  "type_option", "control_final", "or_page", "next_group_clause",
  "sum_clause_list", "reset_clause", "data_or_final",
  "present_when_condition", "varying_clause", "line_clause",
  "line_keyword_clause", "column_clause", "col_keyword_clause",
  "report_line_integer_list", "line_or_plus", "report_col_integer_list",
  "col_or_plus", "source_clause", "group_indicate_clause",
  "report_usage_clause", "screen_section", "$@26",
  "opt_screen_description_list", "screen_description_list",
  "screen_description", "$@27", "screen_options", "screen_option", "eol",
  "eos", "plus_plus", "minus_minus", "screen_line_plus_minus",
  "screen_col_plus_minus", "screen_occurs_clause", "global_screen_opt",
  "procedure_division", "$@28", "$@29", "$@30", "procedure_using_chaining",
  "$@31", "$@32", "procedure_param_list", "procedure_param",
  "procedure_type", "size_optional", "procedure_optional",
  "procedure_returning", "procedure_declaratives", "$@33",
  "procedure_list", "procedure", "section_header", "$@34",
  "opt_use_statement", "paragraph_header", "invalid_statement",
  "opt_segment", "statement_list", "@35", "@36", "statements", "$@37",
  "statement", "accept_statement", "$@38", "accept_body", "$@39",
  "accp_identifier", "opt_accept_clauses", "accept_clauses",
  "accept_clause", "lines_or_number", "at_line_column", "line_number",
  "column_number", "mode_is_block", "accp_attr", "update_default",
  "end_accept", "add_statement", "$@40", "add_body", "add_to", "end_add",
  "allocate_statement", "$@41", "allocate_body", "allocate_returning",
  "alter_statement", "$@42", "alter_body", "alter_entry", "_proceed_to",
  "call_statement", "$@43", "call_body", "mnemonic_conv", "call_using",
  "$@44", "call_param_list", "call_param", "call_type", "call_returning",
  "return_give", "null_or_omitted", "call_on_exception",
  "call_not_on_exception", "end_call", "cancel_statement", "$@45",
  "cancel_body", "close_statement", "$@46", "close_body", "close_option",
  "compute_statement", "$@47", "compute_body", "end_compute",
  "commit_statement", "continue_statement", "delete_statement", "$@48",
  "delete_body", "delete_file_list", "end_delete", "display_statement",
  "$@49", "display_body", "screen_or_device_display", "display_list",
  "display_atom", "$@50", "disp_list", "display_clauses", "display_clause",
  "display_upon", "crt_under", "disp_attr", "end_display",
  "divide_statement", "$@51", "divide_body", "end_divide",
  "entry_statement", "$@52", "entry_body", "evaluate_statement", "$@53",
  "evaluate_body", "evaluate_subject_list", "evaluate_subject",
  "evaluate_condition_list", "evaluate_case_list", "evaluate_case",
  "evaluate_other", "evaluate_when_list", "evaluate_object_list",
  "evaluate_object", "opt_evaluate_thru_expr", "end_evaluate",
  "exit_statement", "$@54", "exit_body", "exit_program_returning",
  "free_statement", "$@55", "free_body", "generate_statement", "$@56",
  "generate_body", "goto_statement", "$@57", "go_body", "goto_depending",
  "goback_statement", "if_statement", "$@58", "if_else_statements",
  "end_if", "initialize_statement", "$@59", "initialize_body",
  "initialize_filler", "initialize_value", "initialize_replacing",
  "initialize_replacing_list", "initialize_replacing_item",
  "initialize_category", "initialize_default", "initiate_statement",
  "$@60", "initiate_body", "inspect_statement", "$@61", "inspect_body",
  "send_identifier", "inspect_list", "inspect_tallying", "$@62",
  "inspect_replacing", "inspect_converting", "tallying_list",
  "tallying_item", "replacing_list", "replacing_item", "rep_keyword",
  "replacing_region", "inspect_region", "inspect_before_after",
  "merge_statement", "$@63", "move_statement", "$@64", "move_body",
  "multiply_statement", "$@65", "multiply_body", "end_multiply",
  "open_statement", "$@66", "open_body", "open_mode", "open_sharing",
  "open_option", "perform_statement", "$@67", "perform_body", "$@68",
  "end_perform", "term_or_dot", "perform_procedure", "perform_option",
  "perform_test", "cond_or_exit", "perform_varying_list",
  "perform_varying", "read_statement", "$@69", "read_body", "read_into",
  "with_lock", "read_key", "read_handler", "end_read", "ready_statement",
  "release_statement", "$@70", "release_body", "reset_statement",
  "return_statement", "$@71", "return_body", "end_return",
  "rewrite_statement", "$@72", "rewrite_body", "write_lock", "end_rewrite",
  "rollback_statement", "search_statement", "$@73", "search_body",
  "search_varying", "search_at_end", "search_whens", "search_when",
  "end_search", "set_statement", "$@74", "set_body", "on_or_off",
  "up_or_down", "set_environment", "set_attr", "set_attr_clause",
  "set_attr_one", "set_to", "set_up_down", "set_to_on_off_sequence",
  "set_to_on_off", "set_to_true_false_sequence", "set_to_true_false",
  "sort_statement", "$@75", "sort_body", "@76", "sort_key_list",
  "opt_key_list", "sort_duplicates", "sort_collating", "sort_input",
  "sort_output", "start_statement", "$@77", "start_body", "sizelen_clause",
  "start_key", "start_op", "disallowed_op", "not_equal_op", "end_start",
  "stop_statement", "$@78", "stop_returning", "_opt_status",
  "stop_literal", "string_statement", "$@79", "string_body",
  "string_item_list", "string_item", "opt_with_pointer", "end_string",
  "subtract_statement", "$@80", "subtract_body", "end_subtract",
  "suppress_statement", "_printing", "terminate_statement", "$@81",
  "terminate_body", "transform_statement", "$@82", "transform_body",
  "unlock_statement", "$@83", "unlock_body", "opt_record",
  "unstring_statement", "$@84", "unstring_body", "unstring_delimited",
  "unstring_delimited_list", "unstring_delimited_item", "unstring_into",
  "unstring_into_item", "unstring_into_delimiter", "unstring_into_count",
  "unstring_tallying", "end_unstring", "use_statement", "$@85",
  "use_phrase", "use_file_exception", "use_global",
  "use_file_exception_target", "use_debugging", "debugging_list",
  "debugging_target", "all_refs", "use_start_end", "program_start_end",
  "use_reporting", "use_exception", "use_ex_keyw", "write_statement",
  "$@86", "write_body", "from_option", "write_option", "before_or_after",
  "write_handler", "end_write", "on_accp_exception",
  "opt_on_accp_exception", "escape_or_exception",
  "opt_not_on_accp_exception", "not_escape_or_not_exception",
  "on_disp_exception", "opt_on_disp_exception",
  "opt_not_on_disp_exception", "on_size_error", "opt_on_size_error",
  "opt_not_on_size_error", "on_overflow", "opt_on_overflow",
  "opt_not_on_overflow", "return_at_end", "at_end", "at_end_clause",
  "not_at_end_clause", "at_eop", "at_eop_clause", "not_at_eop_clause",
  "invalid_key", "opt_invalid_key_sentence",
  "opt_not_invalid_key_sentence", "_opt_scroll_lines", "condition", "expr",
  "partial_expr", "$@87", "expr_tokens", "expr_token", "eq", "gt", "lt",
  "ge", "le", "exp_list", "e_sep", "exp", "exp_term", "exp_factor",
  "exp_unary", "exp_atom", "line_linage_page_counter", "arithmetic_x_list",
  "arithmetic_x", "record_name", "table_name", "file_name_list",
  "file_name", "report_name", "mnemonic_name_list", "mnemonic_name",
  "procedure_name_list", "procedure_name", "label", "integer_label",
  "reference_list", "reference", "single_reference", "opt_reference_list",
  "opt_reference", "reference_or_literal", "undefined_word", "unique_word",
  "target_x_list", "target_x", "opt_x_list", "x_list", "x",
  "report_x_list", "expr_x", "arith_x", "prog_or_entry", "alnum_or_id",
  "simple_value", "simple_all_value", "id_or_lit", "id_or_lit_or_func",
  "num_id_or_lit", "positive_id_or_lit", "pos_num_id_or_lit",
  "from_parameter", "sub_identifier", "sort_identifier",
  "sub_identifier_1", "identifier", "identifier_1", "target_identifier",
  "target_identifier_1", "qualified_word", "subref", "refmod", "integer",
  "symbolic_integer", "report_integer", "class_value", "literal",
  "basic_literal", "basic_value", "function", "func_no_parm",
  "func_one_parm", "func_multi_parm", "func_refmod", "func_args",
  "trim_args", "numvalc_args", "locale_dt_args", "formatted_datetime_args",
  "formatted_time_args", "not_const_word", "flag_all", "flag_duplicates",
  "flag_initialized", "flag_initialized_to", "to_init_val", "flag_next",
  "flag_not", "flag_optional", "flag_rounded", "round_mode",
  "round_choice", "flag_separate", "error_stmt_recover", "_advancing",
  "_after", "_are", "_area", "_as", "_at", "_binary", "_by", "_character",
  "_characters", "_contains", "_data", "_end_of", "_file", "_final",
  "_for", "_from", "_in", "_in_order", "_indicate", "_initial", "_into",
  "_is", "_is_are", "_key", "_left_or_right", "_line_or_lines", "_limits",
  "_lines", "_mode", "_number", "_numbers", "_of", "_on", "_onoff_status",
  "_other", "_procedure", "_program", "_record", "_right", "_sign",
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
     765,   766,   767,   768,   769,   770,   771
};
# endif

#define YYPACT_NINF -2413

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-2413)))

#define YYTABLE_NINF -1874

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -2413,   591,   -15, -2413,   221,   248, -2413,   -15, -2413, -2413,
     593, -2413, -2413,   593,   593,   595,   595, -2413,   643, -2413,
     709,   664,   944, -2413, -2413,   998,   998,   639,   771, -2413,
   -2413,   -13,   593,   595, -2413, -2413,   856,   753, -2413, -2413,
     756,  1141,   595, -2413, -2413, -2413,   664,   776, -2413, -2413,
     406, -2413,   761,   761,   855,   908,  1116,  1116,  1116,   973,
     761,   970,   928,   938,  1116,   949,   956,  1357, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413,   144, -2413, -2413, -2413, -2413,
    1221, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
    1271,   993,   -13, -2413, -2413,  1028,    33, -2413, -2413,  1116,
    1116, -2413,  1116,   979,  1422,   979,  1042,  1116,  1116, -2413,
   -2413,   979, -2413, -2413, -2413,   992,   940,  1049, -2413, -2413,
    1003, -2413,  1083, -2413, -2413, -2413, -2413,  -159, -2413, -2413,
   -2413,  1193, -2413,  1116,  1283,   979,  1279,   428, -2413, -2413,
   -2413, -2413, -2413,  1288,  1073,   707,  1358, -2413,  1057, -2413,
     992, -2413,    52, -2413, -2413, -2413, -2413, -2413, -2413,  1020,
     460,  1116,    -2, -2413, -2413, -2413,   461, -2413, -2413, -2413,
    1080, -2413, -2413, -2413, -2413, -2413, -2413, -2413,  1283, -2413,
    1111, -2413,  -149, -2413, -2413,   979, -2413,  1164, -2413,  1167,
    1163,  1511,  1116, -2413, -2413, -2413,  1074, -2413, -2413, -2413,
   -2413, -2413,   976,  1522,  1116,    83, -2413,    82, -2413, -2413,
     109, -2413, -2413, -2413, -2413,  1326,   460, -2413,  1353,   761,
     761, -2413,  1020,  1140,    69,   -67, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,  1390,
   -2413,    59, -2413,  1283, -2413, -2413,  1269, -2413, -2413, -2413,
    1116,  1216,  1345, -2413, -2413, -2413, -2413,  1117,  1116,  1110,
    1392,   -37, -2413,  1597,   490,  1178, -2413, -2413,  1183,  1532,
   -2413,  1326, -2413,   761, -2413, -2413, -2413, -2413, -2413, -2413,
    1185,  1330, -2413,   761, -2413,  -139, -2413,   132, -2413, -2413,
   -2413, -2413, -2413,  1390, -2413,  1388,  1345, -2413, -2413, -2413,
     529, -2413, -2413, -2413,  1395, -2413, -2413, -2413, -2413, -2413,
    1376, -2413, -2413, -2413, -2413, -2413,  1195, -2413, -2413, -2413,
    1632,  1565,  1217, -2413, -2413,  1390, -2413, -2413,    84, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,  1229, -2413,
    1485,  1555,  1220, -2413,  1663, -2413, -2413, -2413, -2413,  1307,
   -2413,  1599, -2413,  1181,  1236,  1296, -2413,  1390,  1423,  1341,
     676,  1294, -2413,  1295,  1116,  1642,    85,   -12,   873, -2413,
    1196, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
    1275, -2413,  1440, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413,  1666,  1116, -2413,  1181, -2413,  1181, -2413, -2413,  1253,
       1, -2413, -2413,  1116, -2413,  1472, -2413, -2413,   920, -2413,
   -2413,   882,  1116,  1116, -2413,  1116,  1116, -2413,  1632, -2413,
      94,  1116,  1423, -2413,  1308,  1203,  1181, -2413,  1382, -2413,
   -2413, -2413, -2413,  1205, -2413,  1210,    66,   520,  1116, -2413,
   -2413,  1137, -2413, -2413,  -130,  1298,   979,   979, -2413,  1400,
    1400,  1409, -2413,   979,  1116, -2413, -2413, -2413,  1345, -2413,
    1328,  1464, -2413, -2413,  1272, -2413, -2413, -2413, -2413, -2413,
     979, -2413, -2413,   171,   171,  1723,   171, -2413, -2413,   171,
     393, -2413, -2413, -2413, -2413, -2413,  -177, -2413, -2413, -2413,
   -2413, -2413, -2413,   737, -2413,  1276,  1338,  1475,   378,  1278,
    6859, -2413,  1227, -2413, -2413,   -34, -2413, -2413, -2413, -2413,
    1195, -2413, -2413, -2413, -2413, -2413,  1116,   979,  1230, -2413,
    1230, -2413, -2413,  1281,  1343,  1373, -2413,  1289, -2413,  1291,
   -2413,  1658, -2413,  1665, -2413,   408, -2413,  1627,  1321, -2413,
   -2413,   979,   979, -2413,   495, -2413, -2413,  1210, -2413,  1301,
    1361,  1368, -2413, -2413, -2413,   988,  1599,  1116,  1173,  1173,
    1116,    13,  1423,  1116,  1742, -2413,  1459, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413,   761,   650, -2413,
    1263, -2413,   979, -2413,  1461, -2413, -2413,  1210, -2413,  1314,
    1378, -2413,  7072,   139,  1572,  1345,  1264,  1116,  1742,  1268,
    -108,  -130,  1345,  1277,  1116, -2413, -2413, -2413,   -18,   761,
   -2413, -2413, -2413,    81,   849, -2413,  1210, -2413,  1329,   635,
     888, -2413, -2413,  -189,  -184,   581,   584,   588,  1280, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413,  1401, -2413,    53, -2413,
   -2413, -2413, -2413,   979,   979,  1549, -2413, -2413, -2413,   -73,
   -2413, -2413, -2413,  1116,   141, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413,   788,  -105, -2413,  1282, -2413,   536, -2413,
    1336, -2413, -2413, -2413, -2413,  1268, -2413, -2413, -2413, -2413,
    1534,    30,  1574,  1286,  1116, -2413, -2413,  1116, -2413,  1334,
   -2413, -2413, -2413,  1177, -2413, -2413, -2413, -2413, -2413, -2413,
    1673, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413,  1285, -2413, -2413,
    1744,  1354, -2413,  1339,  1360, -2413, -2413, -2413, -2413,  4584,
     699,  1778, -2413,  1405,  1405, -2413,  1334,  1507, -2413,  1079,
    1079, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,  1364,
   -2413,  1345,   120, -2413, -2413, -2413,  1345, -2413, -2413,  1407,
   -2413,   400,   400, -2413, -2413,  1468,  1312,    37,  2729,  3813,
   -2413,  1574,  1626,  1345,  1381,  8123,  1367, -2413,   979, -2413,
     699, -2413,  1389,  1578, -2413,  1642, -2413, -2413, -2413, -2413,
    1079,  1394, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413,  1334, -2413, -2413, -2413, -2413,
      25,  1357, -2413,    48, -2413, -2413, -2413, -2413,  1342, -2413,
    6600, -2413, -2413,  1312,  1396, -2413, -2413,  1467,  4132, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,   515, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413,  1451, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
     551, -2413, -2413,  1516, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413,  1346,  1345,  1354, -2413, -2413,  1741, -2413, -2413, -2413,
    1391,  1393,  1397,  2997,   428,   428,  1398,  1399,  1402, -2413,
    1403,   428, -2413, -2413, -2413,  8146,  8123,  8146,  1404, -2413,
    1397, -2413,    31,   983,   822, -2413,  1687, -2413, -2413, -2413,
   -2413, -2413,  1364, -2413,  1408,  1410,  1411,  8123, -2413, -2413,
     383, -2413,   699, -2413, -2413, -2413, -2413, -2413,  -130,  -130,
   -2413, -2413, -2413, -2413,  1671, -2413, -2413,  1336,  1345, -2413,
   -2413,  1412, -2413,  1418, -2413,    40,    40,  1372,  1420, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
    -161,  5178,  8123,   417,   558,   450,  1181,   686,   681,  5205,
    6088,  1605,   327,   927,   686,   979,  1431, -2413, -2413,  6088,
   -2413, -2413,   686,  1342,  1883,   979,  5227,  6088, -2413,    45,
    2711,  1181,   979,  1181,   979,    72,   134,   979,  1181, -2413,
   -2413, -2413, -2413, -2413, -2413,  5503,  5525, -2413, -2413,  1342,
      68,   979,  1181,   979,   979, -2413, -2413,  1639,  1575, -2413,
    8123,  8123,  7631, -2413, -2413,  1364, -2413,  1380,  1384,  8123,
    8123,  8123,  2997,  1386, -2413,  1002, -2413,  2997, -2413, -2413,
   -2413, -2413,  8123,  7710,  8123,  8123,  8123,  8123,  8123,  8123,
   -2413,  2997,  8123,   983,  1484, -2413,  1433, -2413, -2413, -2413,
    1864,  1357, -2413,    96, -2413, -2413, -2413, -2413,    90, -2413,
    -185,   366,   250, -2413, -2413, -2413,  1765, -2413,  1701,  1507,
     979,  2997, -2413,  1768, -2413,  5625, -2413, -2413, -2413, -2413,
   -2413,   165,   636, -2413,   417, -2413,  1450, -2413,   428, -2413,
   -2413, -2413, -2413,  1769,  3441, -2413,   450, -2413, -2413,  1181,
     579,  1507,  1770,   388, -2413,  1514, -2413, -2413,  1339,  1364,
    1181,  1771,  1341,  1063, -2413,  1772,  1743,  5793, -2413, -2413,
    4836,  1072,  1119,  1773,   105,  1413, -2413, -2413, -2413,  1774,
      79, -2413, -2413, -2413,  4546, -2413, -2413,  1805,   515, -2413,
   -2413, -2413,   686, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
    1465, -2413, -2413,   667,  1342, -2413, -2413,    36, -2413, -2413,
   -2413, -2413, -2413, -2413,  1446,  6088, -2413,  1463,  1775,  1868,
   -2413, -2413, -2413, -2413,    45,  1512, -2413,  1470, -2413,  8263,
     -31,  -235,  1471,  1473, -2413,  -202, -2413,  1477,  1780,   884,
   -2413,  1726, -2413,  1781,  1341,  1782,  1726,   979,  1783,  1427,
   -2413,  1122, -2413, -2413, -2413, -2413, -2413, -2413,  1660, -2413,
     686, -2413,  -100, -2413,   431,  1902, -2413,   125, -2413,  1786,
    1035,   519,  1886,  1787,  4885, -2413, -2413,   979,  1788,  5892,
    1342, -2413, -2413,   620, -2413, -2413, -2413, -2413,  3592, -2413,
    1745, -2413,  1188,  1789,  1824,  1790,  1726, -2413, -2413, -2413,
     979,  1718,   191,   213,  -209,  1490,   233,  1491, -2413,   260,
   -2413, -2413,   237,  1492,  1493,  1494,   262, -2413,  1364, -2413,
    1495, -2413, -2413,   266,  1496,  -209, -2413,  1014,   822,   822,
   -2413, -2413, -2413,  1054,  1497,   290,  1500,  1116, -2413,  -130,
    1837,  1498,   196,  7457, -2413,  1116,  1540,  1641, -2413, -2413,
    1848, -2413, -2413,  7092,  1859,   -44,  1508, -2413,  1364, -2413,
   -2413, -2413,  6256,  1759, -2413,  1747, -2413,  1588, -2413,  1631,
    1711, -2413, -2413, -2413,  1413, -2413,   579, -2413, -2413, -2413,
     716,   568,   979, -2413, -2413, -2413, -2413, -2413,  8123,  1700,
   -2413,  1367, -2413,  1181, -2413, -2413, -2413,  1746, -2413, -2413,
   -2413, -2413,  1678, -2413, -2413,  4836,   492,  1743,  1743,  1743,
    1743, -2413, -2413,  6088,  6256, -2413, -2413, -2413, -2413,   327,
     161, -2413,  1469, -2413,  1476, -2413, -2413, -2413, -2413,  1431,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413,  4220, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413,   142, -2413,  1847,  1569,  1801, -2413,  1122,   143,
   -2413, -2413,  1617, -2413, -2413,   150,  8123, -2413,  1535,   686,
   -2413, -2413,  6256,  1512,  1196,  1181, -2413, -2413, -2413, -2413,
   -2413,  1818,   979,   417, -2413,   241, -2413, -2413, -2413, -2413,
    1341,  1883, -2413, -2413, -2413,  1760, -2413, -2413,   498,  1858,
   -2413, -2413,   979,  1858,  1539, -2413,  1364, -2413, -2413,   715,
    1020, -2413, -2413,  3654, -2413,  1944,  1036,   131, -2413, -2413,
   -2413,  1116, -2413,   479,  6088, -2413,   611,  6060, -2413, -2413,
     979, -2413,  1798, -2413, -2413,  6256, -2413,  1345, -2413, -2413,
    1122, -2413, -2413, -2413, -2413, -2413,  1886,  1766, -2413, -2413,
     241,  1718, -2413,  1886, -2413, -2413, -2413,  1472,  7733,  1408,
    7812,  1408, -2413,   979,  1408,  1408,  1408,  2997, -2413,   -92,
    1408, -2413,  8044,  1408,  1408, -2413,   699, -2413,  1575, -2413,
   -2413,  1116,  1116,  1742,  1184, -2413, -2413, -2413, -2413,  1792,
    1820, -2413,  1116, -2413,  -118, -2413, -2413, -2413,  1215,  1116,
    1883, -2413, -2413, -2413, -2413,  1697, -2413,  1345, -2413,  1947,
   -2413, -2413, -2413,   979, -2413, -2413,   979, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413,  1802,  1697,   592,  1116,
   -2413,  1499,  1551, -2413,   405, -2413,  1116,  1232,  7092, -2413,
   -2413, -2413,   792,  7480, -2413,  1232, -2413, -2413, -2413,  1502,
    1501, -2413,  1122,  1232,  1779,  1585,  1719, -2413, -2413,  1749,
   -2413, -2413, -2413, -2413, -2413, -2413,   453, -2413,   979,  1507,
     218, -2413,   -78,   -42,   686,  1568,  1588,   686, -2413,  1570,
     417, -2413,   515, -2413, -2413,  1640,  1659, -2413,   829,  1116,
   -2413, -2413, -2413, -2413, -2413,  1730, -2413, -2413, -2413, -2413,
     133, -2413, -2413,  2033, -2413, -2413,  1249, -2413, -2413, -2413,
   -2413,  1826,   218,  1828,   104, -2413, -2413, -2413, -2413,  2016,
   -2413,  1587,   162, -2413, -2413,   161, -2413, -2413, -2413, -2413,
    1575, -2413, -2413, -2413,  1907,  1897,  1431, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413,  1670,  1431, -2413,  1589, -2413,  1990,
   -2413, -2413, -2413,   818, -2413,  1122,   941, -2413,    58,   191,
      -5,   686,   686,   218,  1838,  1181,    94,   805,  1900, -2413,
   -2413, -2413,  2035, -2413,  1849, -2413, -2413, -2413, -2413,  1760,
   -2413, -2413, -2413, -2413,   979,  1914,  1746,   984, -2413,  1541,
   -2413,  1542,  1122,   522, -2413,   453, -2413, -2413, -2413,  6088,
    1020,  1020,  1020,  1020,  1020,  1020,  1020,  1020,  1036, -2413,
     451,  1746,   576, -2413,  1620,  1620, -2413, -2413,   444,   979,
     218,  1850,  1596, -2413,  1603,  2046,   979,   339,   498,  2049,
   -2413,  1548,  1116, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413,  1027, -2413, -2413, -2413,
     979,   450, -2413, -2413,  1116,  1742,  1803,  1312, -2413, -2413,
   -2413,   979,   405, -2413, -2413,  1507, -2413, -2413, -2413, -2413,
     463,   405, -2413, -2413,  1116,  1381,  1116, -2413, -2413, -2413,
    1116, -2413, -2413, -2413,   152, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413,  2011, -2413, -2413, -2413,  1048, -2413, -2413,  1697,
    1697, -2413, -2413,  1697, -2413,  1116, -2413, -2413, -2413, -2413,
    1116, -2413, -2413, -2413, -2413, -2413,    -1, -2413, -2413,  2002,
    1648, -2413, -2413,   -30, -2413,  1116, -2413,  2054, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413,  1232, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413,  1514,   -44, -2413, -2413,  1767,
     -55,  1861,   218,   966, -2413, -2413, -2413, -2413, -2413,   -68,
      93, -2413, -2413, -2413,  1021, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413,  1116, -2413,   585,
   -2413, -2413,  1215,  1116, -2413, -2413, -2413, -2413, -2413,    49,
    1116, -2413, -2413,   686, -2413,   686,  4858, -2413,  -143,   112,
     161, -2413, -2413, -2413,  2016,   979, -2413, -2413, -2413, -2413,
    1562,   915,   305,  1564,   966,  1122, -2413, -2413,  2020, -2413,
   -2413, -2413, -2413,   941, -2413,  1884, -2413,  1116,  1472,  1756,
   -2413, -2413,   686, -2413,   686,   805, -2413, -2413, -2413,  1046,
   -2413, -2413,   979,  6088,   654, -2413, -2413, -2413,  1791, -2413,
   -2413,  1811, -2413, -2413, -2413, -2413,  1542, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,    29,
   -2413,   979, -2413, -2413, -2413,   981, -2413, -2413, -2413,  8123,
   -2413,  6088,  6088,  1614,  1750,  1514, -2413,   686, -2413,   966,
   -2413,  1776, -2413,  1122, -2413,  1967,  1644, -2413,   995, -2413,
     503, -2413,  1548, -2413,   979, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413,  1209,   -60, -2413,   979, -2413, -2413, -2413, -2413,
   -2413, -2413,   763, -2413,   450,   763, -2413, -2413, -2413,   117,
   -2413, -2413, -2413, -2413, -2413, -2413,   405,   405,   405,   405,
     405, -2413,  1116,  1116,   454,   454,   405, -2413,   477, -2413,
    1672,  1885, -2413, -2413, -2413,  1887, -2413, -2413, -2413, -2413,
   -2413, -2413,  1793,  1507, -2413, -2413, -2413, -2413,   979, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,  3262,
     405, -2413, -2413, -2413, -2413,   405,   454,   454,   405,   218,
    1728,   218,  1729, -2413, -2413,  6088, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413,   915, -2413,  1984, -2413,  1431,
   -2413, -2413, -2413,   966,  1198, -2413, -2413,  1198,    16,   979,
   -2413, -2413,   218, -2413, -2413,  1712, -2413,  2045,  1834,  1863,
     641, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413,  -209, -2413, -2413, -2413, -2413, -2413,
    1807,  1116,  1672,   218,  1602, -2413,  2046, -2413,  1574,  2007,
    1574,  1614, -2413, -2413, -2413, -2413,  1813, -2413, -2413, -2413,
   -2413,  1319, -2413,   979,  1162, -2413, -2413,  1803, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413,   405, -2413, -2413,
   -2413,   405,   -16, -2413, -2413, -2413, -2413, -2413, -2413,   450,
     405, -2413,  1337, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413,   979, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413,   686, -2413,   686, -2413, -2413, -2413,
    2058,  1998,  1198,  1198, -2413,  1649,  1649, -2413,  1777,  1181,
       7, -2413,   979, -2413, -2413,  6088, -2413,  1116,   885,  1855,
    1856, -2413,  1857, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
     979, -2413, -2413, -2413, -2413,  1655, -2413,   979,  1574, -2413,
     979, -2413, -2413, -2413, -2413, -2413, -2413, -2413,  1108,  1116,
    1116,   881, -2413, -2413, -2413, -2413, -2413, -2413,  1547, -2413,
   -2413, -2413,  2003, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
    1672,  1672,  6088, -2413,  1198, -2413,  6088,  6088,  1116,  1181,
    1181,  1784, -2413, -2413,  1636,   979, -2413, -2413,  1791, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413,   765, -2413, -2413,   979,
   -2413, -2413, -2413,  1116,  1803,  1803, -2413,  1913,  1116,  1116,
   -2413,  2429,  1674, -2413, -2413, -2413, -2413, -2413,   417,  1181,
    1116, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,  1317,
   -2413, -2413, -2413, -2413, -2413,  1785,  2018, -2413,  1803, -2413,
   -2413, -2413,  1803,  1803,  1906,   663,  1742,  1922,  1345,  1629,
    1116,  1507, -2413,  1116,  1116,   979, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,   871,
   -2413,   653, -2413, -2413, -2413,   663,  1742, -2413, -2413,   417,
   -2413,  1763,  1716,    17,  1575, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413,   141, -2413,  1116,  1354, -2413,  8432,  8432,   729,
    2019,  1942, -2413,  1345,   871, -2413, -2413,  1345,   653, -2413,
   -2413,   141, -2413, -2413,   979, -2413,   935, -2413, -2413, -2413,
      70, -2413,   871,  1381, -2413,  1514,  8225, -2413, -2413,  1101,
    1171, -2413, -2413,  1189, -2413, -2413, -2413, -2413,   -51,   -51,
   -2413, -2413, -2413, -2413, -2413,  8432, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413,  1806,   977,    70, -2413, -2413, -2413,
    1741, -2413,  1575, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
    1831, -2413,  1831, -2413,  2092, -2413,  1575, -2413, -2413,  1839,
     979, -2413,  1721,   -46,  1841, -2413, -2413,  8432,    -7, -2413,
   -2413,  1345, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413,  1181, -2413
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,    10,     1,     0,     0,     3,     5,     6,     4,
      43,     8,     9,    43,    43,     0,     0,     7,     0,    11,
      45,    15,    21,    32,    31,    33,    33,     0,     0,    47,
      16,    18,    43,     0,    14,    22,     0,     0,    28,    44,
       0,   176,     0,    17,    12,    19,    15,     0,    34,    30,
    1802,    46,     0,     0,     0,  1845,  1802,  1802,  1802,     0,
       0,     0,     0,     0,  1802,     0,     0,  1775,   115,    48,
      49,    50,    53,    51,    52,     0,   101,   103,   104,   105,
     151,   107,   106,   108,   109,   110,   111,   112,   113,   114,
     178,     0,     0,    23,  1803,     0,     0,  1520,   126,  1802,
    1802,  1846,  1802,     0,     0,     0,     0,  1802,  1802,    60,
      82,     0,    54,    98,  1776,     0,  1802,     0,    99,   102,
       0,   150,     0,   182,    20,    13,    29,    37,    40,    42,
      41,  1839,    39,  1802,     0,     0,     0,  1590,   172,  1513,
     170,   175,   177,     0,     0,    62,    84,   174,    56,  1521,
     153,   154,  1804,   157,  1595,  1209,  1208,   116,   120,   123,
    1831,  1802,     0,   100,   152,   179,   180,    38,  1840,    36,
       0,  1602,  1598,  1603,  1601,  1599,  1604,  1600,   161,   162,
     164,   173,   168,  1885,  1886,     0,   166,     0,  1774,     0,
       0,     0,  1802,  1907,    80,    61,  1773,    66,    68,    69,
      70,    71,  1773,     0,  1802,     0,    83,     0,    87,    55,
      58,   155,  1806,  1805,   158,     0,  1831,  1834,  1833,     0,
       0,   117,   121,     0,     0,   263,   183,   132,   131,   146,
     142,   147,   128,   145,   143,   129,   130,   144,   127,   133,
     134,   136,   163,     0,  1874,   167,     0,  1591,   171,  1906,
    1802,     0,     0,    65,    67,    63,    81,  1773,  1802,     0,
       0,    92,    93,    94,     0,     0,    85,    88,     0,     0,
    1596,   156,   159,     0,  1832,   124,   118,   119,   122,   181,
       0,     0,  1671,     0,   275,   271,    24,     0,   266,   268,
     269,   135,   138,     0,   165,     0,     0,  1905,    74,    64,
       0,  1514,    73,    89,     0,    90,    91,    97,    86,    57,
       0,   160,   125,   186,  1672,   184,  1783,   272,   273,   274,
    1763,   282,     0,   264,   267,     0,   137,   169,     0,    77,
      79,    78,    75,    76,    95,    59,   187,  1784,  1858,  1764,
    1787,     0,   284,   265,   139,   140,  1893,  1894,    72,  1841,
    1859,  1777,  1788,     0,     0,     0,   286,     0,  1820,  1841,
    1866,     0,   245,     0,  1802,  1773,  1807,   247,     0,  1876,
    1873,   233,   185,   232,   188,   189,   190,   191,   192,   193,
       0,   194,     0,   195,   244,   196,   197,   198,   199,   200,
     201,  1769,  1802,  1778,     0,  1499,   270,  1497,   283,     0,
      25,   141,  1821,  1802,  1842,  1807,  1867,  1868,   213,  1875,
     248,  1841,  1802,  1802,  1808,  1802,  1802,   257,  1763,   258,
       0,  1802,  1820,  1770,     0,     0,   276,   277,   280,  1498,
     285,   292,   293,   344,   287,   347,     0,     0,  1802,   215,
     214,   211,   247,   243,     0,     0,     0,     0,   256,  1835,
    1835,     0,   259,     0,  1802,   246,   229,   278,     0,   279,
       0,   500,   288,  1654,     0,   289,   223,   224,   222,   221,
       0,   207,   208,   218,   218,     0,   218,   210,   209,   218,
       0,  1519,  1518,   249,   250,   251,   252,   255,  1836,   260,
     261,   262,   230,     0,   281,     0,     0,   503,   349,     0,
       0,   353,     0,   291,   294,  1657,   219,   204,   220,   205,
    1783,   206,   203,   216,   202,   217,  1802,     0,   239,   238,
     239,   235,   345,     0,     0,   506,   352,     0,   350,     0,
     359,   360,   354,     0,   357,  1802,  1904,     0,   226,  1658,
     212,     0,   253,  1511,     0,   237,   236,   347,   501,     0,
       0,   601,   351,   356,   393,   362,  1777,  1802,     0,     0,
    1802,  1777,  1820,  1802,  1761,   290,     0,   295,   298,   299,
     300,   301,   302,   303,   304,   305,   306,     0,     0,  1903,
       0,   225,   254,  1512,     0,   242,   346,   347,   504,     0,
       0,    26,  1802,  1765,     0,     0,     0,  1802,  1761,     0,
       0,     0,     0,     0,  1802,   340,  1762,   341,     0,   339,
     342,   296,   297,     0,     0,   502,   347,   507,     0,   669,
       0,   487,   417,  1847,  1847,  1847,  1847,  1847,  1869,   418,
     453,   455,   421,   422,   423,   424,   425,   426,   449,   447,
     448,   450,   451,   456,   454,   427,  1843,   452,     0,   428,
     414,   429,   430,     0,     0,  1850,   432,   433,   431,  1809,
     435,   436,   434,  1802,  1804,   394,   395,   396,   397,   398,
     399,   415,   419,   420,   400,   401,   402,   403,   404,   405,
     406,   407,   408,     0,     0,  1766,     0,   390,     0,   363,
     318,   338,  1895,  1896,  1517,   327,  1515,  1888,  1887,   320,
    1818,  1775,  1791,     0,  1802,   324,   323,  1802,   343,     0,
     148,   149,   228,     0,  1891,  1892,   240,   505,   509,   602,
       0,    27,   713,   498,   499,  1848,   446,   445,   438,   437,
     444,   443,   442,   441,   440,   439,  1870,     0,  1844,   484,
     470,   464,   409,  1584,   496,  1851,  1810,  1811,   485,     0,
       0,   411,   413,  1685,  1685,   392,     0,  1827,  1613,     0,
       0,  1609,  1614,  1612,  1610,  1615,  1611,   391,   364,  1605,
    1607,     0,   308,  1516,  1819,   329,     0,   311,  1792,  1852,
     337,     0,     0,   227,   241,   508,   604,   671,     0,     0,
     486,  1791,   466,     0,  1862,     0,  1582,  1583,     0,   416,
     488,   490,   492,     0,   410,  1773,   457,   458,  1606,  1828,
       0,     0,   373,   369,   372,   371,   370,   385,   381,   383,
     384,   386,   382,   387,   388,   389,   366,   377,   378,   379,
     374,   375,   376,   368,   365,     0,   319,   310,   309,   307,
     328,  1775,  1853,   316,   325,   322,   326,   321,     0,   510,
       0,   608,   603,   605,     0,   674,   672,   690,     0,   767,
     840,   849,   855,   862,   895,   899,   913,   908,   914,   915,
     923,   970,   979,   982,  1008,  1019,  1022,  1025,  1017,  1031,
    1038,  1060,  1064,  1100,  1102,  1106,     0,  1112,  1126,  1150,
    1168,  1169,  1172,  1173,  1178,  1186,  1187,  1200,  1234,  1252,
       0,  1285,  1297,  1305,  1307,   695,  1311,  1314,  1320,  1371,
     715,   716,   717,   718,   719,   720,   721,   722,   724,   723,
     725,   726,   727,   728,   729,   730,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,   741,   742,   743,   744,
     745,   746,   747,   748,   749,   750,   751,   752,   753,   754,
     755,   756,   757,   758,   759,   760,   761,   762,   763,   764,
     714,     0,     0,   464,   465,  1863,   468,  1633,  1628,  1634,
       0,     0,  1640,     0,  1486,  1488,     0,     0,     0,  1631,
       0,  1490,  1632,  1635,  1636,     0,     0,     0,     0,  1630,
    1640,  1629,  1470,  1468,  1475,  1478,  1480,  1483,  1549,  1485,
    1546,  1580,  1547,  1548,  1637,     0,     0,     0,  1581,   497,
     494,   491,     0,   412,  1686,   367,   380,  1608,     0,     0,
     330,   331,   332,   333,     0,   312,  1790,   318,     0,  1500,
     511,     0,   609,     0,   606,   679,   679,     0,     0,  1688,
    1689,  1690,  1691,  1692,  1693,  1694,  1695,  1696,  1697,  1698,
    1699,  1700,  1701,  1737,  1738,  1739,  1740,  1741,  1742,  1743,
    1744,  1745,  1746,  1747,  1748,  1749,  1750,  1751,  1752,  1753,
    1754,  1755,  1756,  1702,  1703,  1704,  1705,  1706,  1707,  1708,
    1709,  1710,  1711,  1712,  1713,  1714,  1715,  1716,  1717,  1718,
    1719,  1720,  1721,  1722,  1723,  1724,  1725,  1726,  1727,  1728,
    1729,  1730,  1731,  1732,  1687,  1733,  1734,  1735,  1736,   766,
       0,     0,     0,     0,   865,     0,     0,     0,     0,     0,
       0,     0,  1431,  1010,     0,     0,  1864,   885,   884,     0,
    1030,  1431,     0,     0,     0,     0,     0,     0,   765,     0,
    1138,     0,     0,     0,     0,     0,     0,     0,     0,  1281,
    1284,  1272,  1282,  1283,  1274,     0,     0,  1306,  1304,     0,
     713,     0,     0,     0,     0,   471,   467,   472,  1829,   475,
       0,     0,     0,  1626,  1550,  1551,  1552,     0,     0,     0,
       0,     0,     0,     0,  1482,     0,  1481,     0,  1627,  1471,
    1472,  1592,     0,     0,     0,     0,     0,     0,     0,     0,
    1616,     0,     0,     0,     0,   489,     0,   493,   336,   335,
    1767,  1775,   317,     0,   611,   612,   607,  1772,   679,   676,
     682,     0,   679,   691,   666,   790,   838,   769,   789,  1827,
       0,     0,  1540,   847,  1534,   845,  1529,  1531,  1532,  1533,
     850,     0,  1659,  1510,   856,   857,     0,  1506,  1508,  1507,
     868,   866,   867,   893,     0,  1562,   896,   897,  1561,   900,
     903,  1827,   911,     0,  1492,  1673,  1524,  1585,  1589,  1525,
       0,   921,  1841,  1609,   937,   968,  1396,  1527,   932,   934,
     931,     0,  1531,   977,     0,   869,   980,   989,   988,  1006,
       0,   985,   987,  1430,     0,  1012,  1016,  1014,  1017,  1015,
    1009,  1020,  1021,  1522,  1023,  1024,  1865,  1026,  1504,  1018,
    1860,  1429,  1039,  1041,  1061,  1062,  1065,     0,  1067,  1068,
    1069,  1101,  1238,  1577,  1578,     0,  1103,     0,  1110,     0,
    1119,  1116,  1118,  1117,  1113,  1120,  1140,  1510,  1127,  1138,
    1129,     0,  1136,     0,  1563,  1507,  1565,     0,  1166,  1665,
    1170,  1374,  1495,  1176,  1841,  1184,  1374,     0,  1198,  1191,
    1496,     0,  1503,  1201,  1202,  1203,  1204,  1205,  1206,  1227,
    1207,  1230,     0,  1501,     0,     0,  1576,  1589,  1235,  1270,
    1257,  1275,  1771,  1295,     0,  1288,  1290,     0,  1302,     0,
    1308,  1309,   701,   707,   696,   697,   698,   700,     0,  1312,
       0,  1315,  1317,  1337,  1323,  1384,  1374,   473,   475,  1830,
       0,   479,   474,  1470,  1468,     0,  1470,     0,  1642,  1470,
    1487,  1489,  1470,     0,     0,     0,  1470,  1543,  1544,  1545,
       0,  1491,  1484,  1470,     0,  1469,  1593,     0,  1474,  1473,
    1477,  1476,  1479,     0,     0,  1470,     0,  1802,  1768,     0,
     314,     0,  1802,  1849,   677,  1802,     0,   688,   680,   681,
     692,   839,   768,   791,     0,     0,     0,  1535,  1536,  1537,
     848,   841,     0,     0,  1530,  1661,  1660,   853,   858,   860,
       0,   894,   863,  1564,   869,   898,   903,  1897,  1898,   901,
       0,   904,     0,   912,   909,  1882,  1881,  1493,     0,  1675,
    1494,  1587,  1588,   918,   919,   922,   916,  1423,   969,   924,
     710,   929,  1398,   933,   930,  1528,  1873,  1396,  1396,  1396,
    1396,   978,   971,     0,     0,   870,   981,  1007,   983,  1431,
    1431,   984,   991,   992,   710,  1455,  1456,  1457,  1451,  1864,
    1443,  1463,  1466,  1465,  1467,  1459,  1450,  1449,  1454,  1453,
    1452,  1458,  1438,  1442,  1460,  1462,  1464,  1440,  1441,  1437,
    1439,  1432,  1433,  1444,  1445,  1446,  1447,  1448,  1436,  1013,
    1011,  1523,  1028,  1861,   710,  1043,     0,  1063,     0,  1090,
    1074,  1066,  1071,  1072,  1073,  1242,     0,  1579,     0,     0,
    1111,  1107,     0,  1120,  1873,     0,  1128,  1134,  1135,   710,
    1131,  1431,     0,     0,  1139,     0,  1167,  1151,  1666,  1667,
    1841,     0,  1171,  1177,  1174,  1153,  1185,  1179,  1181,  1193,
    1199,  1188,     0,  1193,     0,  1557,  1558,  1228,  1231,     0,
       0,  1502,  1211,     0,  1210,     0,     0,  1587,  1271,  1253,
    1259,  1802,  1260,  1255,     0,  1273,     0,     0,  1296,  1286,
       0,  1289,     0,  1303,  1298,     0,  1310,   708,   706,   699,
       0,  1318,  1319,  1316,  1338,  1321,  1771,     0,  1385,  1372,
    1376,   479,   469,  1771,   462,   477,   478,  1807,     0,  1637,
       0,  1637,  1641,     0,  1637,  1637,  1637,     0,  1620,     0,
    1637,  1594,     0,  1637,  1637,  1872,     0,   334,  1829,   313,
     515,  1802,  1802,  1761,  1815,   540,   514,   518,   519,     0,
    1785,   627,  1802,   616,  1869,   617,  1878,  1877,  1781,  1802,
       0,   630,   625,   620,   626,  1822,   621,     0,   624,   632,
     629,   622,   628,     0,   633,   623,     0,   644,   638,   642,
     641,   639,   643,   613,   645,   640,     0,  1822,     0,  1802,
     689,     0,     0,   667,  1768,   796,  1802,  1387,   792,   793,
     795,   797,     0,     0,   785,  1387,  1880,  1879,   782,   774,
     776,   777,     0,  1387,     0,     0,     0,   799,   780,     0,
     788,   771,   787,   772,  1554,  1553,     0,  1539,     0,  1827,
    1401,   846,  1589,  1525,     0,  1663,   853,     0,   851,     0,
       0,  1509,   880,   902,   907,     0,     0,  1526,  1401,  1802,
    1674,  1586,   920,   710,   917,  1425,  1397,   711,   710,  1395,
       0,   943,   942,   935,   938,   940,     0,   927,   928,   925,
     926,     0,  1401,     0,   876,   986,  1001,  1003,  1002,   996,
     998,  1004,  1431,   993,   990,  1431,   994,  1461,  1434,  1435,
    1829,  1027,  1505,   710,  1035,  1036,  1864,  1051,  1052,  1054,
    1056,  1057,  1053,  1055,  1046,  1864,  1042,     0,  1091,     0,
    1093,  1092,  1094,  1076,  1086,     0,     0,  1070,  1244,     0,
    1793,     0,  1104,  1401,     0,     0,     0,  1122,  1132,  1145,
    1141,  1146,  1142,  1147,     0,  1137,  1381,  1380,  1144,  1153,
    1375,  1573,  1574,  1575,     0,     0,  1423,     0,   710,     0,
    1192,     0,     0,     0,  1229,     0,  1233,  1232,  1225,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1213,  1214,
    1668,  1423,     0,  1276,  1856,  1856,  1291,  1292,  1293,     0,
    1401,     0,     0,   709,     0,  1655,     0,  1293,  1181,  1757,
     463,     0,  1802,  1651,  1624,  1653,  1625,  1649,  1621,  1622,
    1623,  1647,  1644,  1645,  1619,  1638,     0,  1617,  1618,   495,
       0,     0,  1922,  1923,  1802,  1761,     0,   512,   516,  1786,
     520,     0,     0,   614,   615,  1827,   649,   651,   618,   619,
       0,     0,   647,  1823,  1802,  1862,  1802,   648,   646,   664,
    1802,   683,   684,   687,     0,   678,   693,   695,  1568,   803,
    1566,  1567,     0,  1389,  1390,   770,  1391,   710,   794,  1822,
    1822,   801,   802,  1822,   808,  1802,   810,   811,   812,   837,
    1802,   813,   814,   815,   816,   817,     0,   818,   819,   821,
       0,   822,   823,     0,   824,  1802,   809,  1759,   827,   836,
     830,   798,   829,   786,   773,   775,  1387,   783,   778,   779,
     800,   781,  1556,  1538,  1555,  1673,     0,   710,   842,  1403,
    1587,  1588,  1401,     0,  1662,   852,   854,   861,   859,   888,
    1800,   906,   905,   910,     0,  1424,   710,  1422,   713,  1399,
     949,   950,   947,   946,   948,   945,   939,  1802,   951,     0,
     954,   955,  1781,  1802,   958,   959,   941,   960,   961,     0,
    1802,   963,   944,     0,   972,     0,   871,   872,   682,     0,
    1431,  1431,  1000,   710,   997,     0,  1034,   710,  1037,  1032,
       0,     0,  1058,     0,     0,     0,  1087,  1089,     0,  1082,
    1096,  1083,  1084,  1075,  1078,  1096,  1236,  1802,  1807,     0,
    1794,  1243,  1105,  1108,     0,  1122,  1121,  1125,  1114,     0,
    1133,  1130,     0,     0,  1155,  1154,   710,  1175,  1411,  1180,
    1182,     0,  1194,  1431,  1431,  1189,  1195,  1212,  1224,  1226,
    1216,  1217,  1218,  1222,  1219,  1223,  1220,  1221,  1215,  1669,
    1269,     0,  1266,  1267,  1261,     0,  1254,  1902,  1901,     0,
    1857,  1279,  1279,  1406,     0,  1673,  1299,     0,   702,     0,
    1656,  1324,  1325,     0,  1328,  1331,  1335,  1329,  1423,  1758,
       0,   483,   480,   481,     0,  1639,   315,   517,  1816,  1817,
    1597,   528,   525,   358,   541,   521,   522,   637,  1782,   650,
     652,   636,   657,   663,     0,   660,   685,   686,   695,   713,
     807,  1393,  1394,  1386,   710,  1388,     0,     0,     0,     0,
       0,   828,  1802,  1802,  1427,  1427,     0,  1760,     0,   784,
    1401,  1526,  1402,   710,  1400,  1586,   843,  1664,  1559,  1560,
     710,   710,   891,  1827,  1801,   887,   886,   882,     0,  1677,
    1678,  1679,  1680,  1681,  1682,  1683,  1684,  1676,  1426,     0,
       0,   952,   953,   956,   957,     0,  1427,  1427,     0,  1401,
    1492,  1401,  1492,   873,   874,     0,   878,   877,   879,   999,
    1005,   995,  1029,  1033,  1044,  1047,  1048,  1779,  1040,  1864,
    1045,  1096,  1096,     0,  1081,  1079,  1080,  1085,  1246,     0,
    1240,  1795,  1401,  1115,  1124,     0,  1148,     0,     0,  1162,
       0,  1415,   710,  1410,  1183,   710,   710,  1196,  1268,  1258,
    1262,  1263,  1264,  1265,  1256,  1277,  1280,  1278,   710,  1287,
    1408,  1802,  1401,  1401,   704,  1313,  1655,  1327,  1791,  1333,
    1791,  1406,   710,   710,  1373,  1383,  1418,  1419,  1382,  1379,
    1378,  1812,   482,   476,   524,  1889,  1890,   527,   360,   542,
     523,   655,   653,   656,   654,   658,   659,     0,   631,   661,
     662,     0,   713,  1392,   804,   806,   805,   832,   831,     0,
       0,   834,     0,  1571,  1572,   833,   826,   835,  1569,  1570,
     844,  1404,   889,   890,   710,   864,     0,   881,   965,   964,
     967,   966,   962,   974,     0,   973,     0,   875,  1049,  1780,
       0,     0,  1077,  1088,  1096,  1798,  1798,  1097,     0,     0,
    1249,  1245,  1239,  1109,  1123,     0,  1156,  1802,  1423,     0,
       0,  1157,     0,  1161,  1416,  1190,  1197,  1407,   710,  1405,
       0,  1301,  1300,  1339,   703,     0,  1326,     0,  1791,  1330,
       0,  1322,  1420,  1421,  1417,  1813,  1814,  1377,     0,  1802,
    1802,     0,   529,   530,   531,   532,   533,   534,     0,   544,
     634,   635,     0,   820,   825,  1899,  1900,  1428,   892,   883,
    1401,  1401,     0,  1059,  1095,  1799,     0,     0,  1802,  1247,
       0,     0,  1237,  1241,     0,     0,  1152,  1165,  1413,  1414,
    1164,  1160,  1158,  1159,  1409,  1294,  1347,   705,  1332,     0,
    1336,  1909,  1908,  1802,     0,     0,  1911,     0,  1802,  1802,
     526,  1849,     0,   976,   975,  1050,  1099,  1098,     0,  1250,
    1802,  1431,  1163,  1412,  1370,  1369,  1348,  1340,  1341,  1759,
    1342,  1343,  1344,  1345,  1368,     0,     0,  1334,     0,   539,
     535,  1910,     0,     0,  1796,  1824,  1761,     0,     0,     0,
    1802,  1827,   543,  1802,  1802,     0,   549,   551,   560,   552,
     554,   557,   545,   546,   547,   556,   558,   561,   548,     0,
     553,     0,   555,   559,   550,  1824,  1761,   694,  1248,     0,
    1149,     0,  1854,     0,  1829,   536,   538,   537,  1797,   599,
    1825,  1826,  1804,   585,  1802,   464,  1431,     0,     0,     0,
       0,     0,   593,     0,   583,   589,   592,     0,   586,   594,
     597,  1804,   588,  1251,     0,  1855,     0,  1366,  1365,  1364,
       0,   584,     0,  1862,   581,  1673,   577,  1541,  1913,     0,
       0,  1915,  1917,     0,  1921,  1919,   562,   566,   570,   570,
     564,   568,   563,   569,   600,     0,   591,   590,   596,   595,
     587,  1367,  1884,  1883,  1837,  1360,  1354,  1355,  1357,   575,
     468,   598,  1829,   576,  1542,  1912,  1916,  1914,  1920,  1918,
     573,   565,   573,   567,     0,  1838,  1829,  1363,  1358,  1361,
       0,  1356,   460,     0,     0,   572,   571,     0,     0,  1362,
    1359,     0,   459,   580,   578,   579,   574,   582,  1353,  1350,
    1352,  1351,  1346,  1349,   461
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2413, -2413, -2413, -2413, -2413,  2144, -2413, -2413, -2413,   201,
   -2413,  2114, -2413,  2074, -2413, -2413,  1406, -2413, -2413, -2413,
     872, -2413, -2413,  1385,  2141, -2413, -2413,  2041, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,  1968,
     608, -2413, -2413, -2413, -2413, -2413,  2021, -2413, -2413, -2413,
   -2413,  1964, -2413, -2413, -2413, -2413, -2413, -2413,  2097, -2413,
   -2413, -2413, -2413,  1951, -2413, -2413, -2413, -2413, -2413,  1935,
   -2413, -2413,   975, -2413, -2413, -2413, -2413, -2413,  2025, -2413,
   -2413, -2413, -2413,  1999, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413,  1030, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413,  1661, -2413,  1796,
   -2413, -2413, -2413,  1708, -2413, -2413, -2413, -2413,   293, -2413,
   -2413,  1893, -2413, -2413, -2413, -2413, -2413,  1757, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413,  1155, -2413, -2413, -2413,  1414, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413,   692, -2413, -2413,  1686, -2413,  -766,  -836, -2413,
   -2413, -2413,   424, -2413, -2413, -2413, -2413,    42, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -1425,   732,  1437,   598,   603,
   -1424, -2413, -2413, -2413,  -956, -2413,  -523, -2413, -2413,   781,
   -2413,   311,   521, -2413,   -29, -1422, -2413, -1419, -2413, -1411,
   -2413, -2413,  1415, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413,  -498,  -527, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -1595,
   -2413,  -460, -2413, -2413, -2413, -2413, -2413, -2413, -2413,  1359,
   -2413, -2413, -2413,    97,   111,   -35,   -27, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,  1175,   169,
   -2413,    98, -2413, -2413, -2413, -2413, -1856, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413,  -845, -2413, -2413,  -705, -2413,  1425,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413,   462, -2413, -1375,
   -2413, -2413, -1345, -2413,   183, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413,   425, -2413, -2413, -2413,   978, -2413,
   -2413, -2413, -2413, -2413,   740, -2413, -2413,   110, -2413, -2413,
   -1301, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413,   739, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,   950, -2413,
   -2413, -2413,   407, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,   700, -2413,
   -2413,   696, -2413, -2413,   386,   114, -2413, -2413, -2413, -2413,
   -2413,   937, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413,   -88,   665, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413,   656, -2413, -2413,
     100, -2413,   368, -2413, -2413, -1898, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,   912,
     655,    92, -2413, -2413, -2413, -2413, -2413, -2413, -1466,   911,
   -2413, -2413, -2413,    89, -2413, -2413, -2413,   353, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413,   306, -2413, -2413, -2413, -2413, -2413,
   -2413,   632,    80, -2413, -2413, -2413, -2413, -2413,   -82, -2413,
   -2413, -2413, -2413,   329, -2413, -2413, -2413,   890, -2413,   889,
   -2413, -2413,  1113, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413,    60, -2413, -2413, -2413, -2413, -2413,   877,   317,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413,  -107, -2413,   324, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413,  -434, -2413, -2413,
   -2413, -2413, -2413, -2413, -2413, -2413, -2413,  -160, -2413,   604,
   -2413, -2413, -1420, -2413, -2413, -2413, -2413,   108, -2413, -2413,
   -1688, -2413, -2413,  -104, -2413, -2413, -2413, -2413,  -195, -2256,
   -2413, -2413,  -111, -1846, -2413, -2413,  -914, -1562, -1085, -1480,
   -2413, -2413,   717, -1794,    87,    88,   101,   102,   194,    50,
    -757,   228,   322, -2413,   673,  -382, -1416, -1042,   184,   919,
   -1569,  -393,  -477, -2413, -1332, -2413, -1056, -2403,   799,  -536,
     -90,  1980, -2413,  1590,  -565,    18,  2132, -1081, -1080, -2413,
    -275,  -566, -2413, -1115, -2412, -2413,   372, -1306, -1975, -1096,
    1034,  -652, -2413, -2413,   569, -1121, -2413,  -874,   631,  -641,
   -2413, -2413,  -103, -1209,  -769,  -106,  2022, -1853,  2052,  -666,
    1449,   294,  -667, -2413, -2413, -2413,    -9,  1302, -2413, -2413,
     344, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413, -2413,
   -2413, -2413, -2011, -2413, -2413,  1544, -2413, -2413,  -279,  -594,
    1892, -2413, -1191, -2413, -1324,  -264,  -637,   892, -2413, -2413,
    1795, -2413, -1456, -2413,  -780, -2413, -2413,  -155, -2413,     5,
    -658,  -358, -2413, -2413, -2413, -2413,  -247, -1072,  -313, -1213,
   -1555,  2100,  1869, -2413, -2413,  -335, -2413, -2413,  1039, -2413,
   -2413, -2413,   385, -2413,   189, -1942, -1490, -2413, -2413, -2413,
    -164,   446, -1721, -1514, -2413, -2413,  -588, -2413, -2413,  1609,
   -2413,  1797, -2413, -2413, -2413,   741, -2413, -2310,  -324, -2413,
   -2413, -2413, -2413, -2413, -2413
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,     8,     9,    10,    11,    30,
      12,    31,    44,    45,    34,    35,    19,   321,   433,   619,
      32,    50,    14,    25,    37,    95,   131,   132,    20,    29,
      41,    69,    70,   148,   209,   268,    71,   145,   195,   196,
     197,   198,   199,   200,   201,   332,   202,    72,   146,   206,
     207,   208,   263,   305,   264,    73,    74,    75,    76,    77,
     116,   157,   277,   158,   159,    78,   133,   238,   239,   240,
     325,   344,   241,   712,    79,   121,    80,   150,   151,   152,
     271,    81,   178,   179,    82,    83,   245,    84,    85,    86,
      87,    88,    89,    90,   123,   225,   166,   226,   336,   349,
     374,   375,   479,   480,   441,   514,   507,   376,   469,   377,
     581,   378,   379,   380,   381,   382,   521,   545,   383,   384,
     385,   386,   387,   485,   388,   389,   418,   390,   452,   286,
     287,   288,   289,   320,   290,   316,   426,   427,   459,   342,
     356,   400,   434,   435,   504,   436,   535,   567,   568,   839,
     569,  1699,  1027,   772,   570,   571,   707,   845,   572,   573,
     840,  1020,  1021,  1022,  1023,   574,   575,   576,   577,   609,
     461,   547,   462,   463,   498,   499,   554,   500,   532,   533,
     593,   767,   826,   827,   828,   829,   830,   501,   687,   592,
     665,   666,   667,   804,   668,   669,   670,   671,   672,   673,
     674,  2608,  2742,   675,   794,   963,  1169,   792,  1408,  1411,
    1412,  1677,  1674,  2222,  2223,   676,   677,   678,   679,   680,
    1010,   800,   801,  1205,   681,   682,   497,   587,   525,   616,
     551,   718,   785,   849,  1213,  1452,  1706,  1707,  1980,  2235,
    1708,  2231,  2394,  2502,  2503,  2504,  2505,  2506,  2507,  1977,
    2234,  2509,  2561,  2612,  2613,  2686,  2721,  2735,  2614,  2615,
    2713,  2744,  2616,  2617,  2618,  2619,  2620,  2621,  2654,  2655,
    2658,  2659,  2622,  2623,  2624,   591,   786,   852,   853,   854,
    1215,  1453,  1743,  1988,  1989,  2405,  2406,  2407,  2411,  1744,
    1745,   721,  1460,  2007,   722,   857,  1036,  1035,  1218,  1219,
    1220,  1457,  1751,  1038,  1753,  2248,  1160,  1394,  1395,  2374,
    2484,  1396,  1397,  1942,  1816,  1817,  2088,  1398,   789,   910,
     911,  1110,  1226,  1463,  1227,  1757,  1758,  1759,  1781,  1760,
    2021,  2022,  1761,  2051,  2052,  1462,   912,  1111,  1233,  1473,
    1471,   913,  1112,  1240,  1798,   914,  1113,  1244,  1245,  1800,
     915,  1114,  1253,  1254,  1526,  1834,  2116,  2117,  2118,  2079,
    1129,  2287,  2282,  2435,  1482,   916,  1115,  1256,   917,  1116,
    1259,  1489,   918,  1117,  1262,  1494,   919,   920,   921,  1118,
    1271,  1503,  1506,   922,  1119,  1275,  1276,  1277,  1278,  1516,
    1279,  1823,  1824,  1825,  2094,  2112,  1509,   923,  1120,  1283,
    1522,   924,  1121,  1286,   925,  1122,  1289,  1290,  1291,  1531,
    1532,  1533,  1844,  1534,  1839,  1840,  2122,  1528,   926,  1123,
    1300,  1130,   927,  1124,  1301,   928,  1125,  1304,   929,  1126,
    1307,  1851,   930,   931,  1131,  1855,  2129,   932,  1132,  1312,
    1575,  1864,  2132,  2325,  2326,  2327,  2328,   933,  1133,  1314,
     934,  1134,  1316,  1317,  1581,  1582,  1876,  1583,  1584,  2143,
    2144,  1873,  1874,  1875,  2137,  2334,  2457,   935,  1135,   936,
    1136,  1326,   937,  1137,  1328,  1591,   938,  1139,  1334,  1335,
    1595,  2158,   939,  1140,  1338,  1599,  2161,  1600,  1339,  1340,
    1341,  1890,  1892,  1893,   940,  1141,  1348,  1905,  2349,  2468,
    2536,  1607,   941,   942,  1142,  1350,   943,   944,  1143,  1353,
    1614,   945,  1144,  1355,  1906,  1617,   946,   947,  1145,  1358,
    1623,  1909,  2175,  2176,  1621,   948,  1146,  1363,   160,  1635,
    1364,  1365,  1928,  1929,  1366,  1367,  1368,  1369,  1370,  1371,
     949,  1147,  1321,  2338,  1585,  2462,  1878,  2146,  2460,  2532,
     950,  1148,  1379,  1931,  1643,  2191,  2192,  2193,  1639,   951,
    1381,  1645,  2365,  1154,   952,  1155,  1383,  1384,  1385,  2203,
    1649,   953,  1156,  1388,  1654,   954,  1158,   955,  1159,  1390,
     956,  1161,  1399,   957,  1162,  1401,  1663,   958,  1163,  1403,
    1667,  2211,  2212,  1947,  2214,  2379,  2489,  2381,  1665,  2485,
    2546,  2577,  2578,  2579,  2752,  2580,  2706,  2707,  2730,  2581,
    2669,  2582,  2583,  2584,   959,  1164,  1405,  1612,  1948,  1898,
    2384,  1669,  2015,  2016,  2017,  2253,  2254,  1511,  1512,  1819,
    2068,  2069,  2274,  2369,  2370,  2479,  2167,  2537,  2168,  2353,
    2385,  2386,  2387,  1814,  1815,  2087,  2421,  1310,  1311,  1293,
    1294,  1561,  1562,  1563,  1564,  1565,  1566,  1567,   992,  1192,
    1414,   994,   995,   996,   997,  1234,  1263,  1497,  1351,  1359,
     396,   397,  1030,  1372,  1373,  1572,  1342,  1247,  1248,   542,
     482,   302,   695,   696,   483,    98,   153,  1302,  1265,  1514,
    1235,  1236,  2676,  1426,   999,  1786,  2063,  2145,  2277,  1257,
    1343,  2009,  2427,  2422,  1900,  2010,  1322,  1376,  1237,  1001,
    1266,  1267,   743,   796,   797,  2011,   272,  2656,   180,  1238,
     769,   770,  1239,  1004,  1005,  1006,  1200,  1173,  1434,  1430,
    1423,  1415,  1417,   502,  2213,   538,  1477,  1796,  2074,  1610,
    2195,   283,  1500,  1810,  2297,   806,  1109,  2220,  2268,   607,
     340,   688,  1762,   424,  1221,   203,   115,   394,  2450,  1990,
     338,  1981,   353,  1028,   779,  2151,  2639,  2526,  2288,    96,
     215,   415,   748,  2497,  1976,   775,   403,  1994,  2642,   810,
    1410,   219,   489,  2726,   169,   391,   739,   102,   727,   684,
     843,  2666,  2201,   351,  1574,   966,  1308,   408,   737,  1206,
    1347,   392,  1747,  1783,  1498,  2704,   185,   699,  2397,   716,
     348,   599,  1491,  2517,  2199,   539,   204,  2553,  2559,  2689,
    2690,  2691,  2692,  2693,  1710
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     139,   428,   139,   429,   693,   582,   750,  1167,   139,   416,
     161,   961,   742,   138,  1032,   141,  1465,   788,   246,  1449,
     850,   147,   768,  1281,   405,  1375,  1887,  1008,  1737,  1739,
    1879,  1740,   139,   428,  1741,  1806,   700,  1292,   993,  1891,
    1631,  2023,  1742,   465,  1303,   181,   269,   438,  1492,  1847,
    1841,  1313,  1303,  2243,  2270,  1624,  1790,  1246,  1647,  1501,
    2169,   103,   104,   105,   777,  1374,  1303,   464,  -670,   111,
     280,    99,  1433,  1018,   212,  1264,   292,   216,   107,  2705,
    1644,  1357,   247,   265,   802,  2196,  1444,   850,   114,  1217,
     709,   536,   260,   855,  2264,   221,  1529,  1451,  2280,  2283,
     393,   412,  1189,   449,   134,   135,   127,   136,  1832,  1784,
    2029,  1597,   143,   144,  2512,  1587,   530,  -668,   833,   833,
    2083,   162,   361,  2232, -1842, -1584,  2720,   481,  1003,  1578,
      42,  2743,  1782,   322,   802,  1983,  2194,   753,   170,  1217,
    1261,  1821,   346,  1970,  2114,   117,   298,  2667, -1582,  1225,
    1962,  2249,  1868,  1217,  1523,    52, -1578,   704,  -513,  2331,
    1485, -1605, -1579,   212,  2748,   685,   220,  2314,  1637,   833,
     746,  1822,  1362,  2306,   431,   454,  1883, -1829,   837,   740,
     222, -1873,  1836,  1836,  2246,     4,  -513,  -513,  1246,  1539,
     328,  2558, -1771,   -96,  2372,  2153,   705,   252,   129,   413,
    2316,  1869,   697,    53,  1025,   128,   420,  -670,   284,   259,
    2530,  -670,  2539, -1873,  2149,   317,  1330, -1873,  1675,  2749,
     725, -1807,  1571,  1475,  1261,   725,   414,  2750,  1455,  1185,
    2090,  2091,    43,  1571,  2375,  2675,  2677,   275,   276,  1940,
     516,    54,  2458,    55,  1026,    56,    94,  2337, -1584,  1896,
    1203,  1601,  2206,    57,  1194,   296,  -668,  1850,  1701,  1195,
    -668,  1323,   419,   300,  2714,   795, -1829,  2708,  -670,  1602,
    1455,  1331,  1867,  1323,  1984,   536,   318,   319,  1897,  1332,
     517,   205,  2573,  2724,  1189,   213,  1702,  1703,  1361,  1629,
    1303,   312,   726,    43,  1571,  2125,  1456,   728,  1785,  1217,
    -513,   315,   130,  2708,  1189, -1789,  1176,  1676,  1189,    58,
     154,  2150,  2751,   698,   747,   604,  2155,  -668,  1003,  1003,
    1003,  1870,  2284,   414,   285,  2747,  2531,  1243,     5,  -513,
       5,  1189,  1174,  1189,  1524,   686,   -96,  1189,  1456,  2687,
    1003,   139,  1945,   139,   139,  2053,  1207,   758,   137,  1951,
     139,  1630,   494,  2057,  1944,  1241,   486,   487,  2454,   244,
     281,  1189,  1841,   492,  1333,  1841,  2130,   139,   754,   411,
     508,   508,  2388,   508,   213,  2133,   508,   515,  2072,   137,
     486,  1963,   450,   282,  2276,  1871,  1177,  1178,   736,   795,
     129,   761,  2412,  1183,  1261,  2358,   432,   425,  2281,  1243,
   -1771,   762,    60,  2285,  1579,  1362,  1362,   284,   437,   154,
     835,  -670,  1007,   998,   139,  2429, -1860,   444,   445,  -513,
     446,   447,  1422,  1422,  1422,  1598,   453,   543,   506,    94,
    1264,   758,  1190,  2452,  2453,  1435,  1437,  1261,   139,   139,
    1392,  2668,  1443,   470,  1292,  1003,   451,    61,  1821,  2398,
   -1771,   543,   583,  1208,  1209,   556,   261,  2265,   137,   493,
    -668,  1409,   369,   137, -1771,   137,  2056,  1320,  1319,  -675,
    2092,   557,  2317,  1346,   537,   761,   838,  1580,  1822,   139,
    2123,   776,  1264,   763,  1191,   762,  1554,  2049,  2095,   690,
   -1842,   706,   583,  1393,   130,  1019,   701, -1807,   139,  1502,
     710,  2080,   395,  1003,  1003,  1003,   293,    97,  1882,  1303,
    2119,   558,  1003,  1003,  1003,  1429,  1852, -1802,  2459,  1704,
    1429,   541,  1754,   285,  1392,  1003,  1003,  1003,  1003,  1003,
    1003,  1003,  1003,   244,  1429,  1003,  2307,    64,   266,   856,
     578,  1014,   741, -1771,  2508,   756,  -675,  1895,  1495,  1571,
    1264,   744,  -513,   764,  1284,  1632,  2524, -1767,  2286, -1767,
     594,   149,   596,  1309,  1469,   601,   603,   763,   605,  2138,
    1327,  1329,  1961,  1392,  1450,   395,  2066,  1393, -1670,   137,
      67,   137,  2430,  2070,   262,  1530,   757,  1346,   323,  1386,
    1467,     3,   795, -1771,   347,   610,   711,   683,  1007,   765,
     118,   758,   692,   998,   998,   998,  2177, -1771,  1502,   703,
   -1771,  1539,  2356,  1264,  1190,  2318,  1872,   244,   256,  1837,
    1837,  2443,  2540,  2445,  2001,   998,  1393,   708,  1194,  -673,
    1838,  1838,  2067,  1195,  1190,  -665,  2269,   764,  1190,    94,
    1841,    94,  2093,   137,   758,   761,   466,   183,   559,   766,
     513,   137,  1705,    68,  2463,   762,  1315,   844,   537,   560,
    1480,  1190,   154,  1190,  2711,   836, -1650,  1190,   749,  1474,
     841, -1873,  1346,  1261,  1243,  2000,  1024,    15,   846,   846,
     137, -1873,  1391,   765,  2481,  2482, -1652,   964,   761,  1846,
   -1648,  1190,  1261,   217, -1546,  1009,   223,  2309,   762,  2311,
    1194,  2589,  2590,  2002,    16,  1195,  -673,  1255,   756,   781,
    2062,   154,   782,  1682,  1474, -1646,  2239,  2076,  1127, -1643,
     306,  1261,  1127,  1260, -1873,  1272,  1458,   137,  1568,  1854,
     998,  2710,  1811,   766,  2230,  2635,   184,   763,  2342,  2636,
    2637,  1808,  2189,  1694,  2078, -1767,  2190,    18,  1349,   758,
    1354,  1573,  1264, -1771,  1888,  1380, -1860,   352,   584,  1588,
     154, -1873,   561,   562,   188,  1756,    27, -1773,  2660,  1402,
     518,   189,  2238,  1934,  -665,  1362, -1873,   563,  -665,   564,
     763,   759,   760,  2678,  2556,  1287, -1873,   329,   998,   998,
     998,  2373,  2119,   761,    28,  1448,  1288,   998,   998,   998,
    2152,  1303,  1571,   762,   254,  2660, -1546,   764,  1149, -1873,
     998,   998,   998,   998,   998,   998,   998,   998,  1386,  2679,
     998,  2197,   611,  1474,  1787, -1767,  2389,  1868,   851,  2332,
    1250,  1003,  2563,  2564,   526,  -665,  2551,  1577,  2301,  2451,
    2625, -1871, -1873, -1873,  1280,  1496,  2552,   244,   137,   154,
     764,  1807,    23,   765,   612,  2240,  1166,  1716,  2469,  1717,
    1476,   224,   -35,   307,   565,   254,  1486, -1873,  1811,  1459,
     467, -1873,  2348, -1787,    13,  2227,  1869,  1504,  2470,    13,
     758,  1389,  1633,   585,  1697,   763,   218, -1654,  2390,  1204,
    2529, -1873, -1873,  2574,  1128,   851,   765,   137,  1128,   758,
    1150,  1935,   137,   766,  2471,   519,  1791,  2377,  1554,   137,
    2230,   566,   758,  1656,   137,   139,   139, -1873,  1634,  1003,
    2008,  1435,  1212,  1435,   761,   468,   137,  1857,   758,  2472,
    1858,  1859,  2575, -1787,   762,  1966,  2556,  1507,  1487,    24,
     137,  1151, -1873,   761,  1903,  1902,   766,  2256,  2257,  1474,
    2139,  2258,   244,   762,   352,   764,   761,  1831,  1833,   137,
     751,  2569,   137,   137,  2640,  2641,   762,   330,  2085,  2576,
    1152,  2557,   761,  2089,   720,   756,   190,  2302,  -665,  1804,
    1916,  1820,   762,  1251,  2657,  1252,   137,   244,  2551,  2198,
     725,  1917,   752,   725,  2560,  1568,  1870,   725,  2552,  2140,
     244,   765,  1515,   783,  1805,   520,   244,     5,  2126,  2630,
    1249,  1003,   137,  1003,  1268,  2166,   763,  1657,  2008,  1615,
    1429,  1268,  1305,  2071,    36,  1003,  1884,   244,   331,  1268,
    1969, -1090,  1324,   188,  2401,   763,  2320,  1345,   301,  1352,
     189,  1352,  1360,  1377,  1324,  2019,   439,  2626,   763,   191,
     808,   766,  2680,  1903,  1902,  2289,  2681,  2682,  1488,  2697,
    1871,  1352,   730,  2172,   763,   732,  1153,  1918, -1873,   734,
    2436,  2310,  1571,  2312,  1920, -1090,  1658,  2709,  1933,  2670,
     811,  1937,  1921,    33,  2674, -1090,   764,   244,  2355,  1941,
    2586, -1546,   440, -1873,  2402,    39,  1490,  2702,  2683, -1546,
   -1546,  2703,  2628,   362, -1546,   764,   192, -1767,   227,  1973,
    1812,   193,  1264,    48,  2684,  2685,   998,  1813,   764,   812,
     813,   814,   815,   816,   713,  2020,  1295,   406,  2230,  1017,
     154,   188,   765,   723,   764,   363,  2606,  2607,   189,  2609,
    1270,  1249,  2610,  2423,  2423,  2064,  2473,  2428,  2408,  1576,
    2611,   765,    52,  2382,   758,   630,   631,  2733,  2652, -1873,
    1268,   417,   244,  2663,   765,  1264,  1913, -1090,    40,  2753,
    1608,  2738,  2255,    94,   188,   244,   137,  2352,   407,   758,
     765,   189,   766,  2141,   834,  2423,  2423,  2157,  1541,  1542,
     395,   724, -1802,  1860,  1861,   137,  1618,   154,   761,  1268,
      53,   766,  2653,   714,   998,   715,  2455,   228,   762,    49,
    1268,  2233,    51,  1640,   766,  2551,   194,  1646,  1862,  1863,
    1609,    94,  2272,   761,   137,  2552,  2403,  1813,  1543,  1544,
     766,  2404,    93,   762,  1015,  2456,   404, -1090,    54,   586,
      55,  2298,    56,  2067,   442,   190,  1670,  2170,  1922,   155,
      57,   156,  1296,  1297,  1360,   471,   472,   473,   817,   818,
     819,   820,   821,   822,   823,   643,   644,  1268,   326,  1298,
      97,  1268,  2171,  1641,  2064,  1899,  1642,  1196,  2321,   615,
    1923,   100,  2323, -1090,  2097,  2727,  1197,  2098,  2383,  2715,
     763,  1872,  1194,   229,  2099,  2100,   998,  1195,   998,  1763,
     345,  2275,  1924,  2290,  2291,  2292,    58,   139,   717,  2344,
     998,   358,  2591,   244,   395,   763,   101,  2728,   191,  1952,
    1672,  2351,  1490,  2513,  1299,  2267,   359, -1090,  1356,   155,
    2237,   156,   401, -1090,  2345,   758,   360,   230,  2729,  2241,
    2498,  2101,  2251,   190,  2252,  1985,   139,   231,  1406,    94,
    2499,  2425,  1826,  2179,  2631,  2585,  1925,   831,   831,  2716,
     764,   232,   832,   832,  1413,  1416,  1419,  2293,    59,  1792,
     106,   361,  1986,  2500,  1987,   192,   474,  2718,   108,   761,
     193,  2229,  2717,  2299,   109,   764,   190,  1454,  2648,   762,
     475,  1454,  2440,  2441,   110,  2013,  1445,  2399,  2014,    60,
    2719,    26,  2520,  2501,  2521,   112,   765,  2279,   831,  2413,
    2102,   824,   113,   832,  2142,   114,   191,  1926,    47,    21,
      22,  1792,  1438,  1439,   825,  2271,  1000,    91,  2431,   233,
    1886,   765,   255,  1974,  1975,  2432,  2433,  1193,    46,  2103,
     120,  1555,  2364,  1556,    61,   122,  1194,    62,   595,   124,
     137,  1195,  1696,   602,  1907,  1432,   766,  1709,  1746,   191,
    1748,  2104,  2395,  1678,  2396,  1194,  1680,  1691,  2279,  1249,
    1195,   763,  1683,   192,   476,   137,  1687,  1194,   193,  1932,
    2225,   766,  1195,  1689,   126,   256,  1268,   477,   137,  1792,
    1194,   140,  2294,  2295,   429,  1195,   171,  2296,   142,   234,
    1249,   149,   235,   236,   509,   163,   511,  2474,  1692,   512,
    2475,  2476,   164,    63,  1927,  2105,   192,  1194,  1440,  1441,
    1442,   193,  1195,  2477,  1424,  1425,  1268,   597,   362,   598,
     253,   714,  1003,   715,    64,   168,   182,  2492,  2493,   165,
     172,   764,  1661,  2279,  1662,   186,   187,   758,  1914,  2106,
     173,  1943,  1792, -1562, -1562, -1562, -1562,   205,   243,    65,
     363,    66,  1517,  1518,  1519,  1520,   194,   248,  2391,  2107,
    -234,   249,  2495,   299,  2496,   251,   250,    67,  1856,   478,
     139,  1857,   258,   270,  1858,  1859,   274,   765,   137,  2518,
    2515,   761,  2516,  1957,  1763,   237,   279,  2347,  2487,   295,
    2490,   762,   154,   229,  2414,  2415,  2416,  2417,  2418, -1561,
   -1561, -1561, -1561,  1766,  2426,  1767,  1000,  1000,  1000,   301,
     297,  1995,   303,   304,   364,  1827,  1828,  1829,  1830,   365,
    2108,   137,   174,  2544,   308,  2366,  2366,   766,  1000,   309,
     310,   313,  2003,  2109,   314,   327,  1930,   230,  2438,   335,
      68,  1324,   334,  2439,   337,   339,  2442,   231,  1184,  1826,
    1186,   366,  2110,   729,   731,   733,   735,  2279,   341,   367,
    1954,   350,  1956,   343,   352,  1958,  1959,  1960,   354,   355,
     357,  1964,   368,   763,  1967,  1968,   393,  1268,  2393,  2673,
     395,  1268,   398,   399,  1268,   404,   402,  1249,   409,   188,
     410,   421,   175,   422,   244,   423,  1971,  1972,  2549,   430,
     414,   369,   456,   455,   370,   458,   460,  1982,   488,  -348,
     484,   491,   371,  2159,  1991,   495,   496,  2111,   503,  1268,
     510,   524,   522,  -231,   528,   523,   534,   548,   544,   233,
     549,  1228,   550,  1242,  -361,   552,  1258,   553,   176,  2447,
    1282,   555,   579,   764,  2004,  2510,   580,   588,   589,  2511,
     590,  2012,   429,   372,   606,  1318,   373,   608,  2514,   613,
     617,  1344,   614,   691,  2204,   618,   689,   694,  1268,  1268,
    1268,   702,   745,  2204,  1907,   719,   736,   771,   738,   774,
    2340,   755,  1400,   778,  1404,   780,   787,   791,   177,   765,
     790,  1000,  1000,  1000,   803,   793,   795,   798,   805,   234,
    1000,  1000,  1000,  1427,  2084,   809,   835,   998,  1427,   848,
     842, -1654,   962,  1000,  1000,  1000,  1000,  1000,  1000,  1000,
    1000,   965,  1427,  1000,  1007,  1013,  1012,  1268,  2180,  2181,
    2182,  2183,  2184,  2185,  2186,  2187,  1037,  1860,  1861,   766,
    1016,  1029,  1034,  1138,  1157,  1165,  1168,  1198,  1170,  1210,
    1171,  1466,  1285,  1407,  1172,  1179,  1180,   139,  1214,  1181,
    1182,  1187,  1862,  1863,  1216,  1199,  1224,  1201,  1202,  1324,
    2226,  1223,  1306,  1764,  1765,  1344,  1409,  1258,  1324,  1420,
    1446,  1447,   756,  1421,  1448,  1431,  1461,  1464,  2247,  2534,
    1470,  1479,  1481,  1499,  1493,   237,  1505,  1569,  1508,  1510,
    1521,  1573,  1527,  1586,  1589,  1525,  1590,  1592,  1603,  1594,
   -1564,  1605,  1611,  1604,  1606,  1766,  1613,  1767,  1616,  1768,
    1620,  1622,  1362,  1636,  1638,  1217,  1648,  1666,  1653,  1673,
    1664,  1660,  1668,  1679,  1681,  1684,  1685,  1686,  1688,  1690,
    1693,  1695,  1698,  1749,  1700,  1750,  2565,  2224,  1752,  1788,
    2566,  2567,  1794,  1769,  1770,  1771,   967,  1797,  1243,  1268,
    1344,  1795,  1799,  1809,  1818,  1842,  1853,  1866,  1813,  2228,
    1003,  1003,  1845,   968,  2671,  1579,  1881,  1889,  1908,  1904,
    1912,  2159,  1625,  1919,  1939,  1946,  1978,  1979,  1993,  2242,
    2350,  2244,  2643,  2700,  1996,  2245,  1999,  2006,  2005,  1003,
    1268,  2059,  1268,  1772,  2055,  1773,  2054,  2058,  1652,  2073,
    2060,  2077,  1774,  2081,  2082,  1775,  2061,  2086,  1003,  2113,
    2259,  2115,  2662,  2120,  2121,  2260,  2127,  2128,  2131,  2135,
    2134,  2154,  2160,  2162,  2166,  2163,  2200,  2173,  2174,  1268,
    2266,  1268,  2208,  2207,  2209,  2210,  2219,  2221,  2250,  2262,
    2230,  2263,  2267,  1754, -1583,  2324,  2273,  2330, -1873,  2333,
    1003, -1873,  2341,  2336,  2354,   969,   970,   971, -1873, -1873,
    2368,  2378,  2371,  2352,   972,  2380,  2067,  2449, -1539,  2434,
   -1581,  2376,  2444,  2446,  2465,  2464,   758,  2466, -1767,  2483,
   -1767,  2467,  2300,  2488,  1268,  2478,  2383,  2522,  2305,  2523,
    2525,  2547,  1776,  2562,  1777,  2308,  2528,  1324,  2541,  2542,
    2543,   139,  2571,  2570,  2591, -1873,  2634,  2633,  2638,  1000,
    2627,  1362,  2644,  2664,   543,  2646,   429,  2665,  2695,  2694,
     761,  2737,   976,   977,   978,  2725,  2734,  2739,   979,  2741,
     762,    17,  2339,  1324,  1324,  1324,  1324,  1324,  2424,  2424,
      92,  1324,  1324,  1324,  2746,  1324,   125,    38,   167,   210,
     257,   267,   119,   278,   291,   211,   429,   242,   505,  2156,
     324,   546,  1211,   457,   527,  1738,   799,  2732,   980,  1671,
    2148,  2723,  1950,  2392, -1873,  2736,   847,  1324,  2699,  2303,
    2424,  2424,  1324,  1324,  1324,  1324,  1268,   443,  1268,  1625,
    2409,  1222,  1033,  2304,   960,  1011,  2315,  1000,  2410,  2261,
    2018,  2075,  1478, -1873,  1802,  1803,  2313,  1513,  1843,  1835,
    2096,  2124,   763,  1894,  2319,  1570,   139,  2448,  1877,  1268,
    1865,  2136,  1901,  2335,  1002, -1873,  1593,  2343,  1885,  2461,
    1596,  2346,  2164,  1910,  2218,  1911,  2357,  2188,  1627,  1628,
    1378,  1651,  2367,   982,  2216,   998,   998,  2419,  2420,  2486,
    1268,  2217,  2731,  2538,  1949,  2494,  1619,  2491,  1849,  1801,
     333,  1938,  2360,  2361,   214,   773, -1767,  2178,  1484,  1992,
     139,  1625,  1188,   311,   998,   294,  2362,  2363,   807, -1873,
    2632,  2527,   764,   583,  1324,   540,  1756,  1778,  1324,  1000,
     448,  1000,  2661,   998,   983,   984,   273,  1324,  1427,   490,
    2202,  2329,   784,  1000,  2147,  2688,  1880,     0,     0,     0,
       0,     0,     0, -1873,     0,     0,     0,     0,     0,     0,
       0,  1268,     0,  1268,     0,     0,     0,     0,   765,     0,
       0,  1901,     0, -1873,     0,   998,   600,  1779,   988,  2533,
     429,     0,     0,     0,  1997,     0, -1767,  1998,  1780,     0,
       0,     0,     0,     0,     0,     0,  2480,     0,   989,     0,
       0,     0,     0,   990,     0,     0,     0,     0,     0,     0,
     991,     0,   137,     0,     0,     0,     0,     0,   766,     0,
       0,     0,     0,  1625,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0, -1873,     0,     0,     0,     0,  2065,
       0,     0,  1175,     0,     0,     0,     0, -1873,     0,     0,
       0,     0,     0,     0,  1002,  1002,  1002,     0,     0,     0,
       0,     0,     0,     0,     0,     0, -1873,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1002,     0,     0,     0,
       0,     0,     0,     0,     0,  1249,     0,     0,     0,     0,
       0,     0,  2535,     0,   628,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2645,     0,  1716,  1766,  1717,  1767,     0,     0,
       0,     0,     0,     0,  2554,  2555,  1625,  1625,     0,     0,
       0, -1873,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1820,     0,     0,     0,  1249,     0,     0,     0,
       0,     0,     0,  2568,     0,  2165,     0,     0,     0,     0,
       0,   244,     0,  1625,     0,     0,     0,  2696,     0,     0,
       0,  2698,     0,     0,     0,     0,     0,     0,  2588,     0,
       0,  1002,     0,  2592,  2593,     0,  1269,  1249,     0,     0,
    2205,     0,     0,  1269,     0,  2629,     0,  2215,  2215,     0,
       0,  1269,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1269,     0,     0,     0,     0,
       0,     0,  1258,  1249,     0,  2647,     0,     0,  2649,  2650,
       0,     0,  2236,     0,     0,     0,     0,     0,     0,  1002,
    1002,  1002,     0,     0,     0,     0,     0,  2740,  1002,  1002,
    1002,  1428,     0,     0,     0,  2754,  1428,     0,     0,  2594,
       0,  1002,  1002,  1002,  1002,  1002,  1002,  1002,  1002,  2672,
    1428,  1002,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   646,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1468,     0,  2595,     0,  2596,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2278,     0,     0,     0,     0,     0,
       0,     0,  1269,     0,     0,  2597,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     858,     0,   859,     0,   860,     0,  2598,     0,     0,   861,
       0,     0,     0,     0,     0,     0,     0,   862,     0,     0,
       0,  1269,     0,     0,     0,     0,  2322,     0,   650,     0,
       0,     0,  1269,     0,  2599,  2278,  1625,     0,     0,     0,
       0,     0,     0,     0,  1625,     0,     0,     0,     0,     0,
     863,   864,     0,     0,     0,     0,     0,     0,     0,     0,
     865,     0,     0,  1894,   967,     0,     0,     0,     0,     0,
       0,   866,     0,     0,   867,     0,     0,     0,     0,     0,
    1626,   968,     0,     0,     0,     0,     0,     0,   868,  1269,
       0,     0,  2359,  1269,     0,     0,     0,     0,     0,     0,
    1000,     0,     0,     0,     0,     0,     0,   655,     0,     0,
    2278,   869,     0,     0,  1625,     0,  2600,     0,     0,   870,
       0,   871,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2601,     0,     0,  2400,     0,     0,     0,
       0,     0,     0,     0,     0,  1258,     0,     0,     0,     0,
       0,     0,   872,     0,     0,  2602,     0,     0,     0,     0,
       0,     0,     0,   873,     0,     0,     0,     0,   874,     0,
       0,     0,  1336,   969,   970,   971,  2603,     0,     0,     0,
       0,     0,   972,     0,     0,     0,     0,     0,     0,  2437,
       0,  1793,     0,     0,   875,  2604,     0,     0,     0,     0,
       0,   876,   664,  2605,   877,   878,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   879,     0,  1002,     0,     0,
       0,     0,   880,     0,   881,     0,     0,   882,     0,     0,
       0,     0,     0,     0,  2278,     0,     0,     0,  1337,     0,
     976,   977,   978,  1793,     0,     0,   979,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   883,
       0,     0,     0,   884,     0,   885,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   886,   980,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1626,     0,     0,
       0,     0,     0,     0,     0,  1002,     0,     0,  1269,     0,
       0,  1793,   887,     0,     0,     0,     0,     0,     0,     0,
    1258,     0,     0,     0,     0,   888,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2519,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1269,     0,
     967,   889,   890,     0,     0,     0,     0,     0,     0,     0,
       0,   982,   891,     0,     0,     0,     0,   968,     0,     0,
       0,     0,     0,     0,  1793,     0,   892,   893,     0,  1626,
       0,  2545,     0,   894,     0,     0,     0,   895,  2548,     0,
       0,  2550,     0,     0,     0,   896,     0,  1002,     0,  1002,
       0,     0,     0,     0,     0,   897,  1428,     0,     0,     0,
       0,  1002,   983,   984,   898,     0,     0,     0,     0,     0,
       0,     0,     0,   899,     0, -1873,     0,     0,   900,   901,
       0,     0,   902,     0,   903,     0,  2572,     0,     0,     0,
       0,     0,   904,     0,     0,     0,     0,     0,     0,     0,
    2587,     0,     0,     0,     0,   905,   988,     0,     0,   969,
     970,   971,     0,     0,     0,     0,     0, -1143,   972,     0,
       0,     0,     0,   906,     0,     0,   989,     0,     0,   907,
     758,   990,     0,     0,   908, -1143,     0,     0,   991,   244,
     137,  1626,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2651,     0,     0,  1269,
       0,   909,     0,  1269,     0,     0,  1269,     0,     0,     0,
       0,     0,     0,     0,   761,     0,   976,   977,   978,     0,
       0,     0,   979,   858,   762,   859,     0,   860,     0,     0,
       0,     0,   861,     0,     0,     0,     0,     0,  1000,  1000,
     862,  1269,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2701,     0,     0,     0,     0,
       0,     0,   980,     0,     0,     0,     0,  1000,     0,     0,
       0,     0,     0,   863,   864,     0,     0,     0,     0,  2722,
    2722,     0,     0,   865,  1626,  1626,  1000,     0,     0,     0,
    1269,  1269,  1269,     0,   866,     0,     0,   867,     0,     0,
       0,     0,     0,     0,     0,     0,   763,     0,     0,     0,
       0,   868,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1626,     0,     0,  2745,     0,     0,     0,  1000,     0,
       0,     0,     0,     0,   869,     0,     0,   982,     0,     0,
       0,     0,   870,     0,   871,     0,     0,     0,     0,  1269,
       0,  -712,     0,  -712,  -712,  -712,  -712,  -712,  -712,  -712,
    -712,     0,  -712,  -712,  -712,     0,  -712,  -712,  -712,  -712,
    -712,  -712,  -712,  -712,  -712,   872,   764,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   873,     0,   983,   984,
       0,   874,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   875,     0,     0,
       0,     0,   765,     0,   876,     0,     0,   877,   878,     0,
       0,     0,   988,     0,     0,     0,     0,     0,   879,     0,
       0,     0,     0,     0,     0,   880,     0,   881,     0,     0,
     882,     0,   989,     0,     0,     0,     0,   990,     0,     0,
       0,     0,     0,     0,   991,     0,   137,     0,     0,     0,
       0,     0,   766,     0,     0,     0,     0,     0,     0,     0,
       0,  1269,     0,     0,   967,     0,     0,     0,     0,     0,
       0,     0,   883,     0,     0,     0,   884,     0,   885,     0,
       0,   968,     0,     0,     0,     0,     0,     0,   886,     0,
       0,     0,     0,     0,  -712,  -712,  -712,     0,  -712,  -712,
    -712,  -712,  1269,     0,  1269,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   887,     0,     0,     0,     0,
       0,     0,     0,     0,  1626,     0,     0,     0,   888,     0,
       0,     0,  1626,   858,     0,   859,     0,   860,     0,     0,
       0,  1269,   861,  1269,     0,     0,     0,     0,     0,     0,
     862,     0,     0,     0,   889,   890,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   891,     0,     0,     0,     0,
       0,     0,     0,   969,   970,   971,     0,     0,     0,   892,
     893,     0,   972,   863,   864,     0,   894,     0,  1002,     0,
     895,     0,     0,   865,     0,     0,  1269,     0,   896,     0,
    1229,     0,  1626,   756,   866,     0,     0,   867,   897,     0,
       0,     0,     0,     0,     0,     0,     0,   898,     0,     0,
       0,   868,     0,     0,     0,     0,   899,     0,     0,     0,
       0,   900,   901,     0,     0,   902,     0,   903,  1483,     0,
     976,   977,   978,     0,   869,   904,   979,     0,     0,     0,
       0,     0,   870,     0,   871,     0,     0,     0,  -712,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   906,   967,     0,     0,
       0,     0,   907,     0,     0,   872,   980,   908,     0,     0,
       0,     0,     0,     0,   968,     0,   873,     0,  1269,     0,
    1269,   874,     0,     0,     0,     0,     0,     0,  -712,     0,
       0,     0,     0,     0,   909,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   875,     0,     0,
       0,  1269,     0,     0,   876,     0,     0,   877,   878,     0,
       0,     0,     0,     0,     0,     0,     0,  1915,   879,     0,
       0,     0,     0,     0,   858,   880,   859,   881,   860,     0,
     882,   982,  1269,   861,     0,     0,     0,     0,     0,     0,
       0,   862,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   969,   970,   971,     0,
       0,     0,     0,     0,     0,   972,     0,     0,     0,     0,
       0,     0,   883,     0,   863,   864,   884,   758,   885,     0,
       0,     0,   983,   984,   865,     0,     0,     0,   886,     0,
       0,     0,     0,     0,     0,   866,     0,     0,   867,     0,
       0,     0,     0,  1269,     0,  1269,     0,     0,     0,     0,
    1231,     0,   868,     0,     0,   887,   974,     0,   975,     0,
       0,   761,     0,   976,   977,   978,   988,     0,   888,   979,
       0,   762,     0,     0,     0,   869,  1232,     0,     0,     0,
       0,     0,     0,   870,     0,   871,   989,     0,     0,     0,
       0,   990,     0,     0,   889,   890,     0,     0,   991,     0,
     137,     0,     0,     0,     0,   891,     0,     0,     0,   980,
       0,     0,     0,     0,     0,     0,   872,     0,     0,   892,
     893,     0,     0,     0,     0,     0,   894,   873,   981,     0,
     895,     0,   874,     0,     0,     0,     0,     0,   896,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   897,     0,
       0,     0,     0,   763,     0,     0,     0,   898,   875,     0,
       0,     0,     0,     0,     0,   876,   899,     0,   877,   878,
       0,   900,   901,     0,     0,   902,     0,   903,     0,   879,
       0,     0,     0,     0,   982,   904,   880,     0,   881,     0,
       0,   882,     0,     0,     0,     0,     0,     0,  1659,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   906,     0,     0,     0,
       0,     0,   907,   764,     0,     0,     0,   908,     0,     0,
       0,     0,     0,   883,     0,   983,   984,   884,     0,   885,
       0,     0,     0,     0,     0,     0,  1002,  1002,     0,   886,
       0,     0,     0,     0,   909,     0,     0,     0,     0,     0,
       0,     0,  1916,     0,     0,     0,     0,     0,     0,   765,
       0,     0,     0,  1917,     0,  1002,   887,     0,     0,   988,
       0,     0,     0,     0,     0,  1039,     0,  1040,     0,   888,
       0,     0,  1041,     0,  1002,     0,     0,     0,     0,   989,
    1042,     0,     0,     0,   990,     0,     0,     0,     0,     0,
       0,   991,     0,   137,     0,   889,   890,     0,     0,   766,
       0,     0,     0,     0,     0,     0,   891,     0,     0,     0,
       0,     0,     0,  1043,  1044,     0,  1002,     0,     0,     0,
     892,   893,     0,  1045,     0,     0,     0,   894,     0,     0,
       0,   895,     0,     0,  1046,     0,     0,  1047,     0,   896,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   897,
       0,  1048,     0,     0,     0,     0,  1229,     0,   898,   756,
       0,     0,  1535,  1536,  1537,     0,     0,   899,     0,     0,
    1538,     0,   900,   901,  1049,     0,   902,     0,   903,     0,
       0,     0,  1050,     0,  1051,     0,   904,     0,     0,     0,
       0,  1052,     0,  1053,  1054,  1055,  1056,  1057,  1058,  1059,
    1060,     0,  1061,  1062,  1063,     0,  1064,  1065,  1066,  1067,
    1068,  1069,  1070,  1071,  1072,  1073,     0,   906,     0,     0,
       0,     0,     0,   907,     0,     0,  1074,     0,   908,     0,
       0,  1075,     0,   967,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     968,     0,     0,     0,     0,   909,     0,  1076,     0,     0,
       0,     0,     0,     0,  1077,     0,     0,  1078,  1079,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1080,     0,
       0,     0,     0,     0,     0,  1081,     0,  1082,     0,     0,
    1083,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1539,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1540,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1084,     0,     0,     0,  1085,     0,  1086,     0,
       0,     0,   969,   970,   971,     0,     0,     0,  1087,     0,
       0,   972,     0,     0,     0,     0,     0,  1541,  1542,     0,
       0,     0,     0,   758,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1088,     0,     0,     0,     0,
       0,     0,     0,  1848,     0,     0,     0,     0,  1089,     0,
       0,     0,     0,     0,     0,     0,  1231,  1543,  1544,     0,
       0,     0,   974,     0,   975,     0,     0,   761,     0,   976,
     977,   978,     0,     0,  1090,   979,     0,   762,     0,     0,
       0,     0,  1232,     0,     0,  1091,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1545,     0,     0,     0,     0,
    1092,  1546,     0,     0,     0,  1547,  1093,     0,     0,     0,
    1094,     0,     0,  1548,     0,   980,     0,     0,  1095,     0,
    1549,     0,     0,     0,     0,  1550,     0,     0,  1096,     0,
       0,     0,     0,     0,   981,     0,     0,  1097,     0,     0,
       0,     0,  1229,     0,  1551,   756,  1098,     0,  1535,  1536,
    1537,  1099,  1100,     0,     0,  1101,  1538,  1102,     0,   763,
       0,     0,     0,     0,     0,  1103,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1104,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     982,     0,     0,     0,     0,     0,  1105,     0,     0,     0,
       0,     0,  1106,     0,     0,     0,     0,  1107,     0,     0,
       0,     0,     0,   622,   623,   624,   625,   626,   627,   967,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   764,
       0,     0,     0,     0,  1108,     0,   968,     0,     0,     0,
       0,   983,   984,     0,     0,     0,     0,     0,   629,     0,
     630,   631,   632,   633,   634,   635,   636,     0,     0,     0,
       0,     0,     0,  1552,     0,  1553,     0,  1554,     0,     0,
    1555,     0,  1556,  1557,  1558,   765,     0,  1559,  1560,     0,
       0,     0,     0,     0,     0,   988,     0,     0,     0,     0,
       0,     0,     0,     0,   637,     0,  1539,     0,     0,     0,
       0,     0,     0,     0,     0,   989,  1540,     0,     0,     0,
     990,     0,     0,     0,     0,     0,     0,   991,     0,   137,
       0,     0,     0,     0,     0,   766,     0,     0,   969,   970,
     971,     0,     0,     0,     0,     0,     0,   972,     0,     0,
       0,     0,     0,  1541,  1542,     0,     0,     0,     0,   758,
       0,     0,     0,   638,   639,   640,   641,   642,     0,     0,
     643,   644,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1231,  1543,  1544,     0,     0,     0,   974,     0,
     975,     0,     0,   761,   645,   976,   977,   978,     0,     0,
       0,   979,     0,   762,     0,     0,     0,     0,  1232,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1545,     0,     0,     0,     0,     0,  1546,     0,     0,
       0,  1547,  1229,     0,     0,   756,     0,     0,     0,  1548,
       0,   980,     0,     0,     0,     0,  1549,     0,     0,     0,
       0,  1550,   647,     0,  -876,     0,  -936,  -876,     0,     0,
     981,  -936,     0,     0,  -936,     0,     0,     0,     0,     0,
    1551,  -936,  -936,     0,     0,     0,     0,     0,     0,     0,
       0,  1229,     0,     0,   756,   763,     0,     0,     0,     0,
       0,  -936,     0,  -936,     0,   649,     0,  1217,     0,     0,
       0,     0,     0,     0,     0,     0,   651,     0,     0,   967,
       0,     0,     0,     0,     0,     0,   982,     0,  -936,   652,
       0,     0,     0,     0,     0,     0,   968,     0,     0,     0,
       0,  -876,     0,     0,     0,     0, -1771,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -876,     0,
       0,     0,     0,     0,     0,   764,     0,     0,   967,     0,
       0,     0,     0,     0,     0,     0,     0,   983,   984,     0,
       0,     0,     0,     0,     0,   968,     0,     0,     0,     0,
       0,     0,     0,     0,   656,   657,   658,  -936,  1382,  1552,
       0,  1553,     0,  1554,     0,     0,  1555,     0,  1556,  1557,
    1558,   765,     0,  1559,  1560,     0,     0,     0,     0,     0,
       0,   988,     0,     0,     0,     0,  -936,     0,   969,   970,
     971,     0,     0,     0,     0,     0,     0,   972,     0,     0,
       0,   989,     0,     0,     0,     0,   990,     0,  -936,   758,
    -876,  -876,  -876,   991,     0,   137,     0,     0,     0,  -876,
       0,   766,     0,     0,     0,     0,   660,   661,   662,     0,
       0,  -876,     0,     0,     0,     0,     0,   969,   970,   971,
       0,     0,  1231,     0,     0,     0,   972,     0,   974,  -936,
     975,     0,     0,   761,     0,   976,   977,   978,   758,     0,
       0,   979,  -936,   762,  -876,     0,     0,     0,  1232,  -936,
    -876,     0,  -876,     0,  1650,  -876,     0,  -876,  -876,  -876,
       0,     0,     0,  -876,     0,  -876,     0,     0,     0,     0,
    -876,  1231,     0,     0,     0,     0,  -936,   974,     0,   975,
       0,   980,   761,     0,   976,   977,   978,     0,     0,     0,
     979,     0,   762,     0,     0,     0,  -936,  1232,     0,     0,
     981,     0,     0,  -876,     0,     0,     0,     0,  -876,  -936,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -876,     0,  1229,   763,     0,   756,     0,     0,
     980,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -876,     0,   981,
       0,  1229,     0,     0,   756,     0,   982,  -936, -1771,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -936,     0,     0,  1229,   763,     0,   756,     0,  -876,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -936,
       0,     0,     0,     0,     0,   764,     0,     0,     0,     0,
       0,   967,     0,     0,     0,   982,     0,   983,   984,     0,
       0,  -876,     0,  1230,     0,     0,     0,  -876,   968,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   967,  -876,
    -876,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   765,     0,     0,   764,   968,     0,     0,     0,     0,
     967,   988,     0,     0,  -936,     0,   983,   984,     0,     0,
       0,     0,  1325,  -876,     0,  -936,     0,   968,     0,     0,
       0,   989,     0,  -876,     0,     0,   990,     0,     0,  -876,
       0,     0,     0,   991,  -936,   137,     0,     0,     0,     0,
     765,   766,     0,  -876,     0,     0,     0,     0,  -876,     0,
     988, -1771,     0,     0,     0,  -876,     0,  -876,     0,     0,
     969,   970,   971,  -876,     0,     0,     0,     0,     0,   972,
     989,     0,     0,     0,     0,   990,     0,     0,     0,     0,
       0,   758,   991,     0,   137,     0,     0,   969,   970,   971,
     766,     0,     0,     0,     0,     0,   972,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   758,   969,
     970,   971,     0,     0,  1231,     0,     0,     0,   972,     0,
     974,     0,   975,     0,     0,   761,     0,   976,   977,   978,
     758,     0,     0,   979,     0,   762,     0,     0,     0,     0,
    1232,  1231,     0,     0,     0,     0,     0,   974,     0,   975,
       0,     0,  1273,     0,   976,   977,   978,     0,     0,     0,
     979,     0,   762,  1231,     0,     0,     0,  1232,     0,   974,
       0,   975,     0,   980,   761,     0,   976,   977,   978,     0,
       0,     0,   979,     0,   762,     0,     0,     0,     0,  1232,
       0,     0,   981,     0,     0,     0,     0,     0,     0,  1229,
     980,     0,   756,     0,     0,  1274,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   763,     0,   981,
       0,  1229,   980,     0,   756,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   981,     0,     0,   763,     0,     0,     0,   982,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   763,     0,     0,     0,
       0,     0,     0,     0,     0,   982,   967,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   764,     0,     0,
       0,     0,     0,   968,     0,     0,     0,   982,   967,   983,
     984,     0,     0,     0,     0,     0,  1382,     0,     0,     0,
    1387,     0,     0,     0,   764,   968,     0,     0,     0,     0,
       0,  1229,     0,     0,   756,     0,   983,   984,     0,     0,
       0,     0,     0,   765,     0,     0,   764,     0,     0,     0,
       0,     0,     0,   988,     0,     0,     0,     0,   983,   984,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     765,     0,     0,   989,     0,     0,     0,     0,   990,     0,
     988,     0,     0,     0,     0,   991,     0,   137,     0,     0,
       0,     0,   765,   766,     0,   969,   970,   971,     0,     0,
     989,     0,   988,     0,   972,   990,     0,     0,   967,     0,
       0,     0,   991,     0,   137,     0,   758,   969,   970,   971,
     766,     0,   989,     0,     0,   968,   972,   990,     0,     0,
       0,     0,     0,     0,   991,     0,   137,     0,   758,     0,
       0,     0,   766,     0,     0,     0,     0,     0,     0,  1231,
       0,     0,     0,     0,     0,   974,     0,   975,     0,     0,
     761,     0,   976,   977,   978,     0,     0,     0,   979,     0,
     762,  1231,     0,     0,     0,  1232,     0,   974,     0,   975,
       0,     0,   761,     0,   976,   977,   978,     0,     0,     0,
     979,     0,   762,     0,     0,     0,     0,  1232,     0,  1229,
       0,     0,   756,     0,     0,     0,     0,     0,   980,     0,
       0,     0,     0,     0,     0,     0,     0,   969,   970,   971,
       0,     0,     0,     0,     0,     0,   972,   981,     0,     0,
     980,     0,     0,     0,     0,     0,     0,     0,   758,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   981,
       0,     0,   763,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1231,     0,     0,   763,     0,   967,   974,     0,   975,
       0,     0,   761,   982,   976,   977,   978,     0,     0,     0,
     979,     0,   762,   968,     0,     0,     0,  1232,  1229,     0,
       0,   756,     0,     0,     0,   982,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   764,     0,     0,     0,     0,     0,     0,     0,
     980,     0,     0,     0,   983,   984,     0,     0,     0,     0,
       0,     0,     0,     0,   764,     0,     0,     0,     0,   981,
       0,     0,     0,     0,     0,     0,   983,   984,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   765,     0,
       0,     0,     0,     0,   763,   967,     0,     0,   988,     0,
       0,     0,     0,     0,     0,   969,   970,   971,     0,     0,
     765,     0,   968,     0,   972,     0,     0,     0,   989,     0,
     988,     0,     0,   990,     0,   982,   758,     0,     0,     0,
     991,     0,   137,     0,     0,     0,     0,     0,   766,     0,
     989,     0,     0,     0,     0,   990,     0,     0,     0,     0,
       0,     0,   991,     0,   137,     0,     0,     0,     0,  1231,
     766,     0,     0,     0,   764,   974,     0,   975,     0,     0,
     761,     0,   976,   977,   978,     0,   983,   984,   979,     0,
     762,     0,     0,     0,     0,  1232,  1229,     0,     0,   756,
       0,     0,     0,     0,     0,     0,  1472,     0,     0,     0,
       0,     0,     0,     0,   969,   970,   971,     0,  1655,     0,
     765,     0,     0,   972,  1229,     0,     0,   756,   980,     0,
     988,     0,     0,  1274,     0,   758,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   981,     0,     0,
     989,     0,     0,     0,     0,   990,     0,     0,     0,     0,
       0,     0,   991,     0,   137,     0,     0,     0,  1231,     0,
     766,     0,   763,   967,   974,     0,   975,     0,     0,   761,
       0,   976,   977,   978,     0,     0,     0,   979,     0,   762,
     968,     0,     0,     0,  1232,     0,     0,     0,     0,     0,
       0,   967,     0,   982,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   968,     0,
       0,     0,     0,     0,     0,     0,     0,   980,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   764,     0,     0,     0,   981,     0,     0,     0,
       0,     0,     0,     0,   983,   984,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   763,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   969,   970,   971,     0,     0,     0,   765,     0,
       0,   972,  1789,     0,     0,   756,     0,     0,   988,     0,
       0,     0,   982,   758,     0,     0,     0,     0,     0,     0,
     969,   970,   971,     0,     0,     0,     0,     0,   989,   972,
       0,     0,     0,   990,     0,     0,     0,     0,     0,     0,
     991,   758,   137,     0,     0,     0,  1231,     0,   766,     0,
       0,   764,   974,     0,   975,     0,     0,   761,     0,   976,
     977,   978,     0,   983,   984,   979,     0,   762,     0,     0,
       0,     0,  1232,     0,  1231,     0,     0,     0,     0,   967,
     974,     0,   975,     0,     0,   761,     0,   976,   977,   978,
       0,     0,     0,   979,     0,   762,   968,   765,     0,     0,
    1232,     0,     0,     0,     0,   980,     0,   988,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   981,     0,     0,   989,     0,     0,
       0,     0,   990,   980,     0,     0,     0,     0,     0,   991,
       0,   137,     0,     0,     0,     0,     0,   766,     0,   763,
       0,     0,   981,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   763,     0,     0,
     982,     0,     0,     0,     0,     0,     0,     0,   969,   970,
     971,     0,     0,     0,     0,     0,     0,   972,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   982,   758,
       0,     0,     0,  1936,     0,     0,     0,     0,     0,   764,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   983,   984,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1231,     0,     0,     0,     0,   764,   974,     0,
     975,     0,     0,   761,     0,   976,   977,   978,     0,   983,
     984,   979,     0,   762,     0,   765,     0,     0,  1232,     0,
       0,     0,     0,     0,     0,   988,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   765,     0,   989,     0,     0,     0,     0,
     990,   980,     0,   988,     0,     0,     0,   991,     0,   137,
       0,     0,     0,     0,     0,   766,     0,     0,     0,     0,
     981,     0,     0,   989,     0,     0,     0,     0,   990,     0,
       0,     0,     0,     0,     0,   991,     0,   137,     0,     0,
       0,  1031,     0,   766,     0,   763,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -358,     0,     0,  -358,   982,     0,  -358,  -358,
    -358,  -358,  -358,  -358,  -358,  -358,  -358,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -358,     0,  -358,     0,     0,
       0,     0,     0,     0,  -358,   764,  -358,  -358,  -358,  -358,
    -358,  -358,  -358,     0,     0,     0,     0,   983,   984,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -358,   765,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   988,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   989,     0,     0,     0,     0,   990,     0,     0,     0,
       0,  -358,     0,   991,     0,   137,     0,     0,     0,     0,
       0,   766,     0,     0,     0,     0,   530,     0,     0,  -358,
    -358,  -358,  -358,  -358,     0,     0,  -358,  -358,     0,     0,
    -358,     0,     0,     0,     0,     0,  -358,     0,  -358,     0,
       0,     0,     0,     0,  -358,     0,     0,     0,     0,  -358,
       0,     0,  -358,     0,     0,     0,     0,     0,     0,     0,
    -358,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -358,     0,     0,  -358,     0,     0,     0,
       0,     0,  -358,     0,  -358,     0,     0,     0,     0,     0,
       0,     0,     0,  -358,     0,     0,     0,     0,     0,     0,
     529,     0,     0,     0,     0,     0,  -358,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -358,     0,
    -358,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -358,     0,     0,  -358,  -358,
    -358,  -358,  -358,  -358,  -358,     0,     0,  -358,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -358,  -358,     0,     0,     0,     0,     0,     0,     0,  -358,
       0,     0,  -358,  -358,     0,  -358,  -358,  -358,  -358,  -358,
    -358,  -358,     0,     0,     0,  -358,     0,  -358,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -358,     0,     0,     0,     0,  -358,
       0,  -358,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -358,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -358,     0,
    -358,  -358,  -358,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -358,     0,     0,     0,   530,     0,     0,  -358,  -358,
    -358,  -358,  -358,     0,     0,  -358,  -358,     0,     0,     0,
       0,  -358,     0,     0,     0,     0,  -358,     0,     0,     0,
       0,  -358,     0,  -358,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -358,     0,     0,     0,     0,  -358,  -358,
       0,     0,  -358,  -358,  -358,     0,     0,     0,     0,     0,
       0,     0,  -358,   620,     0,  -358,  -358,     0,     0,     0,
       0,  -358,  -358,  -358,     0,     0,     0,     0,   621,   531,
       0,   622,   623,   624,   625,   626,   627,   628,     0,     0,
       0,     0,  1754,     0, -1873,     0,     0, -1873,     0,     0,
   -1873,     0,     0,     0,     0,     0,     0,  -358, -1873,     0,
       0,     0,     0,     0,     0,     0,   629,     0,   630,   631,
     632,   633,   634,   635,   636,     0,     0, -1767,     0, -1767,
       0,     0,     0,     0,     0,     0,  -358,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -358,     0,     0,     0, -1873,     0,     0,     0,  -358,     0,
       0,  -358,   637,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0, -1873,  -358,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -358,     0,     0,
       0,     0,     0,     0,     0,  -358,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   638,   639,   640,   641,   642,     0,     0,   643,   644,
       0,     0,     0,     0,     0,     0,     0,  -358,     0,  -358,
    -358,  -358,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0, -1873,     0,     0,     0,     0,     0,     0,  1755,
   -1873,     0,   645,     0,     0,     0,  -358,     0,     0,     0,
       0,     0,     0,     0, -1873,    94,     0,     0,   646,     0,
       0,     0,     0,     0, -1849,  -358,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -358,     0,     0,     0, -1873,     0,     0,     0,
       0,  -358,  -358,  -358,     0, -1767,     0,     0,     0,     0,
     647,     0,     0,     0,     0,  -358, -1873,     0, -1873,     0,
       0,     0,  -358,     0,     0,  1756,     0,     0,   531,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   648,
   -1873, -1873,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   649,     0,     0,     0,     0,     0,     0,
       0,   650,     0,     0,   651,     0,     0,     0,     0,     0,
       0,     0, -1873,     0,     0,     0,     0,   652,     0,     0,
       0,     0,     0,     0,     0, -1767,     0,     0,     0,     0,
     653,     0,     0,     0,     0,     0,     0,     0,   654, -1873,
   -1873,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0, -1873,     0,     0,     0,
       0,     0,     0, -1873,     0,     0,     0,     0,     0,     0,
     655,     0,   656,   657,   658,     0, -1873,     0,     0,  1711,
   -1873,     0,  1712,     0,     0,  1713,   622,   623,   624,   625,
     626,   627,  1714,  1715,     0, -1873,     0,     0,     0,   659,
       0,     0,  2024,     0,     0,  2025,     0,     0,  2026,     0,
       0,     0,  1716,     0,  1717,     0,  2027,     0,  -355,     0,
       0,   629, -1873,   630,   631,   632,   633,   634,   635,   636,
       0, -1873,     0,     0,     0, -1849,     0,     0,     0,     0,
       0,     0,     0,     0,   660,   661,   662,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   663,     0,
   -1873,     0,  2028,     0,     0,   664,     0,   637,     0,     0,
   -1873,     0,     0,     0,     0,     0, -1873,     0,     0,     0,
       0,  2029,     0,     0,     0,     0,     0,     0,     0,     0,
     244,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1718,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   638,   639,   640,   641,
     642,     0,     0,   643,   644,     0,     0,  1719,     0,     0,
       0,     0,     0,  1720,     0,  1721,     0,     0,     0,     0,
       0, -1802,     0,     0,     0,     0,  1722,     0,     0,  1723,
    2030,     0,     0,     0,     0,     0,     0,   645,  2031,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,     0,  2032,   646,     0,     0,     0,     0,     0,     0,
       0,  1724,     0,     0,     0,     0,     0,     0,     0,     0,
    1725,     0,     0,     0,   967,     0,     0,     0,     0,     0,
       0,     0,     0,  1726,  2033,     0,     0,     0,     0,     0,
       0,   968,     0,     0,     0,   647,     0,     0,     0,     0,
       0,     0,     0,     0,  2034,     0,  2035,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1727,     0,     0,     0,  2036,  2037,
       0,     0,     0,     0,     0,     0,     0,  1728,   649,     0,
       0,     0,     0,     0,     0,     0,   650,     0,     0,   651,
       0,     0,     0,   967,     0,     0,     0,     0,     0,     0,
    2038,     0,   652,     0,  1729,     0,     0,     0,     0,     0,
     968,     0,     0,     0,     0,     0,   967,     0,     0,     0,
       0,     0,     0,   969,   970,   971,     0,  2039,  2040,     0,
       0,  1730,   972,   968,     0,     0,     0,     0,  1731,     0,
       0,     0,     0,     0,   758,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2041,  1732,     0,     0,     0,     0,
       0,  2042,     0,     0,     0,   655,     0,   656,   657,   658,
       0,     0,     0,     0,  2043,     0,     0,   973,  2044,     0,
       0,     0,     0,   974,     0,   975,     0,     0,   761,     0,
     976,   977,   978,  2045,     0,   967,   979,     0,   762,     0,
       0,     0,   969,   970,   971,     0,     0,     0,  1733,     0,
       0,   972,   968,  -610,     0,     0,     0,     0,  1734,     0,
    2046,     0,     0,   758,     0,   969,   970,   971,     0,  2047,
       0,     0,     0,     0,   972,  1735,   980,     0,     0,   660,
     661,   662,     0,     0,     0,     0,   758,     0,     0,     0,
       0,     0,     0,   663,     0,   981,   973,     0,  2048,  1736,
     664,     0,   974,     0,   975,     0,     0,   761,  2049,   976,
     977,   978,     0,     0,  2050,   979,     0,   762,     0,   973,
     763,     0,     0,     0,     0,   974,     0,   975,     0,     0,
     761,     0,   976,   977,   978,     0,     0,     0,   979,     0,
     762,     0,     0,     0,   969,   970,   971,     0,     0,     0,
       0,   982,     0,   972,     0,   980,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   758,     0,     0,     0,     0,
       0,     0,     0,     0,   981,     0,     0,     0,   980,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     764,     0,     0,     0,     0,     0,     0,   981,   973,   763,
       0,     0,   983,   984,   974,     0,   975,     0,     0,   761,
       0,   976,   977,   978,     0,     0,     0,   979,     0,   762,
       0,     0,   763,     0,  1418,     0,     0,     0,     0,     0,
     982,     0,     0,     0,   985,     0,   765,     0,   986,   987,
       0,     0,     0,     0,     0,     0,   988,     0,     0,     0,
       0,     0,     0,   982,     0,     0,     0,   980,     0,     0,
       0,     0,     0,     0,     0,     0,   989,   967,     0,   764,
       0,   990,     0,     0,     0,     0,   981,     0,   991,     0,
     137,   983,   984,     0,   968,     0,   766,     0,     0,     0,
       0,     0,   764,     0,     0,     0,     0,     0,     0,     0,
       0,   763,     0,  1436,   983,   984,     0,     0,     0,     0,
       0,     0,  1953,   985,     0,   765,     0,   986,   987,     0,
       0,     0,     0,     0,     0,   988,     0,     0,     0,     0,
       0,     0,   982,     0,     0,     0,   985,     0,   765,     0,
     986,   987,     0,     0,     0,   989,   967,     0,   988,     0,
     990,     0,     0,     0,     0,     0,     0,   991,     0,   137,
       0,     0,     0,   968,     0,   766,     0,     0,   989,   967,
       0,   764,     0,   990,     0,     0,   969,   970,   971,     0,
     991,     0,   137,   983,   984,   972,   968,     0,   766,     0,
       0,  1955,     0,     0,     0,     0,     0,   758,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   985,     0,   765,     0,   986,
     987,     0,     0,     0,     0,     0,     0,   988,     0,     0,
     973,     0,     0,     0,     0,     0,   974,     0,   975,     0,
       0,   761,     0,   976,   977,   978,     0,   989,   967,   979,
       0,   762,   990,     0,     0,   969,   970,   971,     0,   991,
       0,   137,     0,     0,   972,   968,     0,   766,     0,     0,
       0,     0,     0,     0,     0,     0,   758,     0,   969,   970,
     971,     0,     0,     0,     0,     0,   967,   972,     0,   980,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   758,
       0,     0,     0,   968,     0,     0,     0,     0,   981,   973,
       0,     0,     0,     0,     0,   974,     0,   975,     0,     0,
     761,     0,   976,   977,   978,     0,     0,     0,   979,     0,
     762,     0,   973,   763,     0,     0,     0,     0,   974,     0,
     975,     0,     0,   761,     0,   976,   977,   978,     0,     0,
       0,   979,     0,   762,     0,     0,     0,   969,   970,   971,
       0,     0,     0,     0,   982,     0,   972,     0,   980,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   758,     0,
       0,     0,     0,     0,     0,     0,     0,   981,     0,     0,
       0,   980,     0,     0,  1336,   969,   970,   971,     0,     0,
       0,     0,     0,   764,   972,     0,     0,     0,     0,     0,
     981,   973,   763,     0,     0,   983,   984,   974,     0,   975,
       0,     0,   761,     0,   976,   977,   978,     0,     0,     0,
     979,     0,   762,     0,     0,   763,     0,  1965,     0,     0,
       0,     0,     0,   982,     0,     0,     0,   985,     0,   765,
       0,   986,   987,     0,     0,   967,     0,     0,     0,   988,
    1483,     0,   976,   977,   978,     0,   982,     0,   979,     0,
     980,     0,   968,     0,     0,     0,     0,     0,     0,   989,
       0,     0,   764,     0,   990,     0,     0,     0,     0,   981,
       0,   991,     0,   137,   983,   984,     0,     0,     0,   766,
       0,     0,     0,     0,     0,   764,     0,     0,   980,     0,
       0,     0,     0,     0,   763,     0,     0,   983,   984,     0,
       0,     0,     0,     0,     0,     0,   985,     0,   765,     0,
     986,   987,     0,     0,     0,     0,     0,     0,   988,     0,
       0,  2712,     0,     0,     0,   982,     0,     0,     0,     0,
       0,   765,     0,   986,     0,     0,     0,     0,   989,     0,
       0,   988,     0,   990,   969,   970,   971,     0,     0,     0,
     991,     0,   137,   972,     0,     0,     0,     0,   766,     0,
       0,   989,     0,   982,   764,   758,   990,     0,     0,     0,
       0,     0,     0,   991,     0,   137,   983,   984,     0,     0,
       0,   766,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   973,     0,
       0,     0,     0,     0,   974,     0,   975,     0,     0,   761,
     765,   976,   977,   978,   983,   984,     0,   979,     0,   762,
     988,     0,     0,     0,     0,     0,     0, -1873,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     989,     0,     0,     0,     0,   990,     0,     0,     0,     0,
       0,     0,   991,     0,   137,     0,     0,   980,   988,     0,
     766,     0,     0,     0,     0,     0,     0,     0,     0, -1143,
       0,     0,     0,     0,     0,     0,   981,     0,   989,     0,
       0,     0,     0,   990,     0,     0,     0, -1143,     0,     0,
     991,   244,   137,     0,     0,     0,     0,     0,     0,     0,
       0,   763,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   982,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   764,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   983,   984,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   765,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   988,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   989,     0,     0,
       0,     0,   990,     0,     0,     0,     0,     0,     0,   991,
       0,   137,     0,     0,     0,     0,     0,   766
};

static const yytype_int16 yycheck[] =
{
     103,   394,   105,   396,   598,   541,   664,   963,   111,   367,
     116,   791,   653,   103,   850,   105,  1229,   722,   182,  1210,
     786,   111,   688,  1119,   359,  1146,  1595,   796,  1453,  1453,
    1585,  1453,   135,   426,  1453,  1491,   601,  1122,   795,  1601,
    1372,  1762,  1453,   436,  1124,   135,   210,   405,  1261,  1539,
    1530,  1132,  1132,  1995,  2065,  1361,  1472,  1113,  1382,  1268,
    1906,    56,    57,    58,   701,  1146,  1146,     1,     0,    64,
       1,    53,  1187,    48,    22,  1117,    17,   159,    60,     9,
    1381,     9,   185,     1,   750,  1931,  1201,   853,    58,    49,
       9,   125,     9,    56,   124,    97,    17,     1,   166,     6,
      87,   365,    71,     9,    99,   100,    73,   102,  1524,   153,
     111,   142,   107,   108,   130,  1324,   176,     0,   759,   760,
    1808,   116,    64,  1976,    39,   203,   177,   257,   795,    93,
     143,   177,  1464,     1,   800,   253,  1930,   242,   133,    49,
       6,  1516,    58,  1698,  1832,     1,   252,   130,   203,   310,
     242,  2007,     9,    49,    49,    11,    31,   175,    62,  2134,
    1256,   203,    31,    22,   171,    26,   161,   310,  1377,   810,
     243,  1516,   272,   124,   173,   422,  1592,    27,    58,   126,
     162,   330,    21,    21,    32,   200,    90,    91,  1244,   160,
     296,  2501,    88,   230,  2205,  1883,   214,   192,   357,   114,
      88,    58,   310,    59,   841,   172,   370,   139,   275,   204,
     203,   143,  2468,   188,   219,   354,   171,   108,    27,   226,
     409,   233,  1302,    58,     6,   409,   238,   234,   413,   986,
      97,    98,    31,  1313,  2209,  2647,  2648,   219,   220,  1655,
     417,    97,   226,    99,   196,   101,   233,  2145,   450,     8,
    1007,   486,  1940,   109,   463,   250,   139,   115,    62,   468,
     143,  1135,   368,   258,  2676,   467,   116,  2670,   200,   504,
     413,   226,  1578,  1147,   392,   125,   415,   416,    37,   234,
     457,   199,  2538,  2695,    71,   233,    90,    91,   154,  1370,
    1370,   273,   481,    92,  1374,  1850,   481,   481,   342,    49,
     204,   283,   461,  2706,    71,   257,   973,   116,    71,   165,
     257,   316,   319,   421,   387,   562,  1885,   200,   985,   986,
     987,   178,   229,   238,   391,  2737,   319,   257,   343,   233,
     343,    71,   973,    71,   229,   196,   373,    71,   481,  2649,
    1007,   444,  1666,   446,   447,  1765,  1012,   213,   509,  1673,
     453,   451,   458,  1773,  1660,  1112,   446,   447,  2333,   508,
     291,    71,  1842,   453,   319,  1845,  1856,   470,   473,   364,
     473,   474,  2218,   476,   233,  1865,   479,   480,  1794,   509,
     470,   473,   288,   314,  2072,   242,   974,   975,   506,   467,
     357,   257,  2248,   981,     6,  2189,   395,   392,   466,   257,
     360,   267,   258,   310,   368,   272,   272,   275,   403,   257,
     452,   343,   467,   795,   517,  2268,   111,   412,   413,   323,
     415,   416,  1179,  1180,  1181,   456,   421,   517,   257,   233,
    1472,   213,   401,  2331,  2332,  1192,  1193,     6,   541,   542,
     456,   424,  1199,   438,  1529,  1112,   352,   303,  1823,   509,
     360,   541,   542,  1018,  1019,    47,   373,   487,   509,   454,
     343,   311,   404,   509,   360,   509,  1772,  1134,  1134,   379,
     337,    63,   360,  1140,   508,   257,   356,   441,  1823,   582,
     318,   451,  1524,   349,   453,   267,   457,   488,  1820,   595,
     405,   509,   582,   509,   461,   470,   602,   509,   601,  1268,
     419,  1802,   509,  1170,  1171,  1172,   447,   509,  1589,  1589,
    1834,   103,  1179,  1180,  1181,  1182,  1572,   504,   502,   323,
    1187,   516,    30,   391,   456,  1192,  1193,  1194,  1195,  1196,
    1197,  1198,  1199,   508,  1201,  1202,   487,   393,   456,   502,
     535,   805,   648,   503,  2397,     9,   456,  1603,   160,  1629,
    1592,   654,   456,   419,  1120,   124,  2454,    65,   465,    67,
     555,   509,   557,  1129,  1231,   560,   561,   349,   563,  1875,
    1136,  1137,  1687,   456,  1211,   509,  1789,   509,   509,   509,
     436,   509,  2270,  1792,   501,   506,    50,  1254,   456,  1155,
    1231,     0,   467,   503,   510,   577,   515,   592,   467,   465,
     456,   213,   597,   985,   986,   987,  1912,   503,  1377,   604,
     360,   160,  2174,  1655,   401,   503,   473,   508,   509,   458,
     458,  2309,  2468,  2311,    32,  1007,   509,   609,   463,   379,
     469,   469,   414,   468,   401,     0,  2056,   419,   401,   233,
    2120,   233,   509,   509,   213,   257,   126,   219,   240,   515,
     257,   509,   456,   509,  2342,   267,  1133,   257,   508,   251,
    1248,   401,   257,   401,  2675,   771,   453,   401,   663,  1235,
     776,   332,  1339,     6,   257,  1747,   840,   456,   781,   782,
     509,   162,  1159,   465,  2372,  2373,   453,   793,   257,  1534,
     453,   401,     6,   233,    58,   798,   235,  2113,   267,  2115,
     463,  2554,  2555,   111,   456,   468,   456,   257,     9,   704,
     257,   257,   707,   453,  1280,   453,   253,  1797,   203,   453,
     230,     6,   203,  1116,   245,  1118,   360,   509,  1294,  1574,
    1112,  2673,  1501,   515,   257,  2588,   308,   349,  2154,  2592,
    2593,  1498,   291,   453,  1800,   253,   295,   154,  1141,   213,
    1143,   446,  1794,   503,  1599,  1148,   451,   189,   263,  1325,
     257,   263,   354,   355,    57,   273,   123,    60,  2621,  1162,
      33,    64,  1985,   162,   139,   272,   332,   369,   143,   371,
     349,   245,   246,    54,    55,   458,   288,   258,  1170,  1171,
    1172,  2207,  2116,   257,    85,    30,   469,  1179,  1180,  1181,
    1881,  1881,  1882,   267,   196,  2658,   170,   419,   257,   290,
    1192,  1193,  1194,  1195,  1196,  1197,  1198,  1199,  1384,    90,
    1202,   245,   172,  1389,  1465,   333,   323,     9,   786,  2135,
     272,  1498,  2520,  2521,   456,   200,   107,  1314,   253,  2329,
    2561,   458,   263,   176,  1119,   457,   117,   508,   509,   257,
     419,  1492,   257,   465,   204,   392,   962,    65,   217,    67,
     224,   400,   456,   373,   456,   257,  1259,   288,  1637,   503,
     350,   217,   218,   108,     2,  1971,    58,  1270,   237,     7,
     213,  1156,   451,   388,  1449,   349,   426,   509,  2220,   506,
    2459,   237,   413,   128,   379,   853,   465,   509,   379,   213,
     349,   290,   509,   515,   263,   168,  1472,  2213,   457,   509,
     257,   503,   213,  1390,   509,  1018,  1019,   263,   487,  1586,
     515,  1678,  1028,  1680,   257,   405,   509,    12,   213,   288,
      15,    16,   167,   365,   267,  1692,    55,  1272,   359,   344,
     509,   390,   288,   257,  1611,  1611,   515,  2019,  2020,  1515,
       9,  2023,   508,   267,   189,   419,   257,  1523,  1524,   509,
     172,  2530,   509,   509,   301,   302,   267,   438,  1813,   204,
     419,    90,   257,  1818,   339,     9,   269,   392,   343,   263,
     458,   489,   267,   425,   331,   427,   509,   508,   107,   413,
     409,   469,   204,   409,  2508,  1561,   178,   409,   117,    58,
     508,   465,  1277,   709,   288,   268,   508,   343,  1853,  2571,
    1113,  1678,   509,  1680,  1117,   130,   349,   397,   515,  1354,
    1687,  1124,  1125,  1792,    26,  1692,  1592,   508,   499,  1132,
    1696,   213,  1135,    57,   271,   349,  2121,  1140,   509,  1142,
      64,  1144,  1145,  1146,  1147,   253,   126,  2561,   349,   342,
     756,   515,   323,  1720,  1720,    34,   327,   328,   479,  2654,
     242,  1164,   481,  1908,   349,   481,   515,  1633,   263,   481,
    2283,  2113,  2152,  2115,    38,   257,   456,  2672,  1644,  2634,
       1,  1647,    46,   139,  2646,   267,   419,   508,  2173,  1655,
    2546,   455,   172,   288,   331,   456,  1260,   162,   369,   463,
     464,   166,  2568,   221,   468,   419,   399,   342,    28,  1703,
    1503,   404,  2154,   257,   385,   386,  1498,   232,   419,    40,
      41,    42,    43,    44,   275,   333,   199,   451,   257,   835,
     257,    57,   465,   245,   419,   253,  2561,  2561,    64,  2561,
     459,  1244,  2561,  2264,  2265,  1786,   505,  2268,  2244,  1313,
    2561,   465,    11,   158,   213,    76,    77,  2712,   287,   505,
    1263,   288,   508,  2629,   465,  2207,   451,   349,   397,  2738,
     286,  2726,  2017,   233,    57,   508,   509,   292,   502,   213,
     465,    64,   515,   242,   760,  2306,  2307,   382,   207,   208,
     509,   303,   204,   278,   279,   509,  1356,   257,   257,  1302,
      59,   515,   331,   354,  1586,   356,     8,   127,   267,   456,
    1313,  1977,   456,   178,   515,   107,   509,  1381,   303,   304,
     336,   233,  2067,   257,   509,   117,   463,   232,   247,   248,
     515,   468,   456,   267,   810,    37,   354,   419,    97,   547,
      99,  2086,   101,   414,   362,   269,  1406,   263,   212,   309,
     109,   311,   325,   326,  1357,   118,   119,   120,   179,   180,
     181,   182,   183,   184,   185,   186,   187,  1370,   293,   342,
     509,  1374,   288,   238,  1915,  1610,   241,   455,  2123,   587,
     244,   426,  2127,   465,    35,   308,   464,    38,   293,   188,
     349,   473,   463,   213,    45,    46,  1678,   468,  1680,  1463,
     325,  2070,   266,   282,   283,   284,   165,  1410,   616,   263,
    1692,     4,   211,   508,   509,   349,   408,   340,   342,  1677,
    1410,  2166,  1486,  2419,   397,     8,    19,   509,  1144,   309,
    1982,   311,   357,   515,   288,   213,    29,   257,   361,  1991,
     178,    92,   294,   269,   296,   130,  1449,   267,  1164,   233,
     188,  2265,  1516,  1919,    37,  2546,   320,   759,   760,   188,
     419,   281,   759,   760,  1170,  1171,  1172,   346,   227,  1472,
     397,    64,   157,   211,   159,   399,   239,   188,   408,   257,
     404,  1975,   211,  2088,   456,   419,   269,  1218,  2601,   267,
     253,  1222,  2306,  2307,   456,   163,  1202,  2233,   166,   258,
     211,    16,  2444,   241,  2446,   456,   465,  2073,   810,  2254,
     161,   332,   456,   810,   473,    58,   342,   381,    33,    13,
      14,  1524,  1194,  1195,   345,  2066,   795,    42,  2273,   349,
    1594,   465,   456,   249,   250,  2280,  2281,   454,    32,   190,
     219,   460,  2199,   462,   303,   174,   463,   306,   556,   456,
     509,   468,  1447,   561,  1618,   453,   515,  1452,  1453,   342,
    1455,   212,   253,  1413,   255,   463,  1416,   453,  2134,  1572,
     468,   349,  1422,   399,   337,   509,  1426,   463,   404,  1643,
     453,   515,   468,  1433,   456,   509,  1589,   350,   509,  1592,
     463,    69,   471,   472,  1887,   468,   213,   476,   456,   419,
    1603,   509,   422,   423,   474,   456,   476,  2352,   454,   479,
    2355,  2356,   509,   372,   478,   266,   399,   463,  1196,  1197,
    1198,   404,   468,  2368,  1180,  1181,  1629,   354,   221,   356,
     456,   354,  2199,   356,   393,   342,   257,  2382,  2383,   456,
     257,   419,   354,  2209,   356,   257,   473,   213,  1630,   300,
     267,  1657,  1655,   490,   491,   492,   493,   199,   447,   418,
     253,   420,   490,   491,   492,   493,   509,   403,  2220,   320,
     263,   404,   253,   456,   255,    64,   413,   436,     9,   442,
    1683,    12,    60,   257,    15,    16,   233,   465,   509,  2434,
     253,   257,   255,  1683,  1758,   515,   456,  2163,  2378,   330,
    2380,   267,   257,   213,  2256,  2257,  2258,  2259,  2260,   490,
     491,   492,   493,    66,  2266,    68,   985,   986,   987,   509,
     404,  1727,   230,    26,   317,  1517,  1518,  1519,  1520,   322,
     381,   509,   349,  2478,   456,  2201,  2202,   515,  1007,   456,
     108,   456,  1748,   394,   314,   257,  1641,   257,  2300,   273,
     509,  1754,   257,  2305,   459,    23,  2308,   267,   985,  1823,
     987,   354,   413,   624,   625,   626,   627,  2333,   103,   362,
    1679,   442,  1681,   456,   189,  1684,  1685,  1686,   123,   459,
      17,  1690,   375,   349,  1693,  1694,    87,  1790,  2224,  2645,
     509,  1794,   456,   397,  1797,   354,   273,  1800,   404,    57,
     405,   426,   419,   263,   508,    39,  1701,  1702,  2488,   456,
     238,   404,   509,   405,   407,   333,   511,  1712,   318,   509,
     422,   312,   415,  1887,  1719,   397,   262,   478,   456,  1832,
       7,   256,   456,   426,   456,   397,   509,   456,   508,   349,
     397,  1110,   369,  1112,    86,   456,  1115,   456,   465,  2315,
    1119,    86,   125,   419,  1749,  2407,   435,   456,   397,  2411,
     392,  1756,  2155,   456,    22,  1134,   459,   308,  2420,   506,
     456,  1140,   311,   509,  1938,   397,   204,   509,  1881,  1882,
    1883,   504,   233,  1947,  1948,   456,   506,   451,   387,   255,
    2148,   509,  1161,   219,  1163,   509,   123,    53,   515,   465,
     515,  1170,  1171,  1172,    26,   451,   467,   447,   403,   419,
    1179,  1180,  1181,  1182,  1809,   308,   452,  2199,  1187,   351,
     413,   509,   196,  1192,  1193,  1194,  1195,  1196,  1197,  1198,
    1199,   450,  1201,  1202,   467,   257,   447,  1940,  1920,  1921,
    1922,  1923,  1924,  1925,  1926,  1927,   379,   278,   279,   515,
     456,   509,   456,   402,   338,   509,   115,   170,   467,   188,
     467,  1230,   257,   224,   467,   467,   467,  1970,   456,   467,
     467,   467,   303,   304,   456,   467,   456,   467,   467,  1982,
    1970,   509,   451,    24,    25,  1254,   311,  1256,  1991,   509,
     406,   458,     9,   509,    30,   509,   131,   196,  2004,  2465,
     132,   451,   133,   389,   134,   515,   135,   102,   136,   166,
     137,   446,   138,   467,   451,   502,   141,    49,   447,   407,
     450,   444,   196,   450,   144,    66,   145,    68,   146,    70,
     147,   504,   272,    31,   148,    49,   149,   113,   150,   221,
     151,   196,   152,   453,   453,   453,   453,   453,   453,   453,
     453,   451,   115,   413,   456,   314,  2522,  1952,   110,   451,
    2526,  2527,   203,   104,   105,   106,    83,   379,   257,  2072,
    1339,   224,   341,   273,   296,   506,   129,   176,   232,  1974,
    2647,  2648,   506,   100,  2642,   368,   451,   169,   130,   229,
     451,  2155,  1361,    49,   196,   229,   204,   177,   301,  1994,
    2164,  1996,  2596,  2661,    57,  2000,   204,   456,   509,  2676,
    2113,   426,  2115,   154,   513,   156,   514,   238,  1387,   451,
     301,   451,   163,   383,   365,   166,   277,   297,  2695,   203,
    2025,   203,  2626,    17,   447,  2030,   129,   140,   368,    49,
     451,   203,   142,     8,   130,   196,   426,   506,   506,  2152,
    2045,  2154,   456,   203,   451,     9,     7,   509,    47,    57,
     257,   413,     8,    30,   203,   503,   299,   503,    35,    49,
    2737,    38,   316,   189,   263,   192,   193,   194,    45,    46,
     466,   114,   332,   292,   201,   441,   414,   103,   203,   296,
     203,   315,   364,   364,    49,   383,   213,   263,    65,   497,
      67,   238,  2097,    96,  2207,   298,   293,    49,  2103,   111,
     461,   456,   253,   110,   255,  2110,   339,  2220,   263,   263,
     263,  2224,   486,   339,   211,    92,   108,   342,   222,  1498,
     456,   272,   210,   370,  2224,   506,  2529,   421,   196,   120,
     257,    49,   259,   260,   261,   339,   315,   308,   265,   428,
     267,     7,  2147,  2256,  2257,  2258,  2259,  2260,  2264,  2265,
      46,  2264,  2265,  2266,   323,  2268,    92,    26,   127,   148,
     202,   207,    75,   222,   239,   150,  2569,   178,   470,  1886,
     287,   520,  1027,   426,   498,  1453,   749,  2710,   305,  1408,
    1879,  2689,  1671,  2222,   161,  2722,   782,  2300,  2658,  2102,
    2306,  2307,  2305,  2306,  2307,  2308,  2309,   411,  2311,  1578,
    2245,  1036,   853,  2102,   789,   800,  2118,  1586,  2245,  2036,
    1758,  1796,  1244,   190,  1484,  1486,  2116,  1277,  1532,  1529,
    1823,  1845,   349,  1602,  2120,  1298,  2339,  2325,  1582,  2342,
    1575,  1873,  1611,  2143,   795,   212,  1334,  2155,  1593,  2339,
    1339,  2162,  1899,  1622,  1948,  1623,  2176,  1928,  1368,  1370,
    1147,  1384,  2202,   380,  1947,  2647,  2648,  2262,  2263,  2376,
    2373,  1947,  2706,  2468,  1670,  2386,  1357,  2381,  1561,  1480,
     300,  1650,  2195,  2195,   152,   695,   253,  1915,  1254,  1720,
    2393,  1660,   990,   271,  2676,   243,  2195,  2195,   754,   266,
    2579,  2456,   419,  2393,  2407,   510,   273,   448,  2411,  1678,
     418,  1680,  2625,  2695,   431,   432,   216,  2420,  1687,   450,
    1935,  2132,   713,  1692,  1878,  2649,  1585,    -1,    -1,    -1,
      -1,    -1,    -1,   300,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2444,    -1,  2446,    -1,    -1,    -1,    -1,   465,    -1,
      -1,  1720,    -1,   320,    -1,  2737,   559,   498,   475,  2462,
    2753,    -1,    -1,    -1,  1733,    -1,   333,  1736,   509,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2371,    -1,   495,    -1,
      -1,    -1,    -1,   500,    -1,    -1,    -1,    -1,    -1,    -1,
     507,    -1,   509,    -1,    -1,    -1,    -1,    -1,   515,    -1,
      -1,    -1,    -1,  1772,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   381,    -1,    -1,    -1,    -1,  1788,
      -1,    -1,   973,    -1,    -1,    -1,    -1,   394,    -1,    -1,
      -1,    -1,    -1,    -1,   985,   986,   987,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   413,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1007,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2568,    -1,    -1,    -1,    -1,
      -1,    -1,  2467,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2598,    -1,    65,    66,    67,    68,    -1,    -1,
      -1,    -1,    -1,    -1,  2499,  2500,  1875,  1876,    -1,    -1,
      -1,   478,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   489,    -1,    -1,    -1,  2629,    -1,    -1,    -1,
      -1,    -1,    -1,  2528,    -1,  1904,    -1,    -1,    -1,    -1,
      -1,   508,    -1,  1912,    -1,    -1,    -1,  2653,    -1,    -1,
      -1,  2657,    -1,    -1,    -1,    -1,    -1,    -1,  2553,    -1,
      -1,  1112,    -1,  2558,  2559,    -1,  1117,  2670,    -1,    -1,
    1939,    -1,    -1,  1124,    -1,  2570,    -1,  1946,  1947,    -1,
      -1,  1132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1146,    -1,    -1,    -1,    -1,
      -1,    -1,  1971,  2706,    -1,  2600,    -1,    -1,  2603,  2604,
      -1,    -1,  1981,    -1,    -1,    -1,    -1,    -1,    -1,  1170,
    1171,  1172,    -1,    -1,    -1,    -1,    -1,  2730,  1179,  1180,
    1181,  1182,    -1,    -1,    -1,  2741,  1187,    -1,    -1,   210,
      -1,  1192,  1193,  1194,  1195,  1196,  1197,  1198,  1199,  2644,
    1201,  1202,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   236,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1231,    -1,   253,    -1,   255,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2073,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1263,    -1,    -1,   286,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,    -1,     5,    -1,   307,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,
      -1,  1302,    -1,    -1,    -1,    -1,  2125,    -1,   329,    -1,
      -1,    -1,  1313,    -1,   335,  2134,  2135,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2143,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    -1,  2162,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,
    1361,   100,    -1,    -1,    -1,    -1,    -1,    -1,    89,  1370,
      -1,    -1,  2191,  1374,    -1,    -1,    -1,    -1,    -1,    -1,
    2199,    -1,    -1,    -1,    -1,    -1,    -1,   408,    -1,    -1,
    2209,   112,    -1,    -1,  2213,    -1,   417,    -1,    -1,   120,
      -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   434,    -1,    -1,  2235,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2244,    -1,    -1,    -1,    -1,
      -1,    -1,   153,    -1,    -1,   456,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   164,    -1,    -1,    -1,    -1,   169,    -1,
      -1,    -1,   191,   192,   193,   194,   477,    -1,    -1,    -1,
      -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,    -1,  2288,
      -1,  1472,    -1,    -1,   195,   496,    -1,    -1,    -1,    -1,
      -1,   202,   503,   504,   205,   206,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   216,    -1,  1498,    -1,    -1,
      -1,    -1,   223,    -1,   225,    -1,    -1,   228,    -1,    -1,
      -1,    -1,    -1,    -1,  2333,    -1,    -1,    -1,   257,    -1,
     259,   260,   261,  1524,    -1,    -1,   265,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   270,
      -1,    -1,    -1,   274,    -1,   276,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   286,   305,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1578,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1586,    -1,    -1,  1589,    -1,
      -1,  1592,   313,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2419,    -1,    -1,    -1,    -1,   326,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2436,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1629,    -1,
      83,   352,   353,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   380,   363,    -1,    -1,    -1,    -1,   100,    -1,    -1,
      -1,    -1,    -1,    -1,  1655,    -1,   377,   378,    -1,  1660,
      -1,  2480,    -1,   384,    -1,    -1,    -1,   388,  2487,    -1,
      -1,  2490,    -1,    -1,    -1,   396,    -1,  1678,    -1,  1680,
      -1,    -1,    -1,    -1,    -1,   406,  1687,    -1,    -1,    -1,
      -1,  1692,   431,   432,   415,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   424,    -1,   444,    -1,    -1,   429,   430,
      -1,    -1,   433,    -1,   435,    -1,  2535,    -1,    -1,    -1,
      -1,    -1,   443,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2549,    -1,    -1,    -1,    -1,   456,   475,    -1,    -1,   192,
     193,   194,    -1,    -1,    -1,    -1,    -1,   486,   201,    -1,
      -1,    -1,    -1,   474,    -1,    -1,   495,    -1,    -1,   480,
     213,   500,    -1,    -1,   485,   504,    -1,    -1,   507,   508,
     509,  1772,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2605,    -1,    -1,  1790,
      -1,   512,    -1,  1794,    -1,    -1,  1797,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   257,    -1,   259,   260,   261,    -1,
      -1,    -1,   265,     1,   267,     3,    -1,     5,    -1,    -1,
      -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,  2647,  2648,
      18,  1832,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2664,    -1,    -1,    -1,    -1,
      -1,    -1,   305,    -1,    -1,    -1,    -1,  2676,    -1,    -1,
      -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,  2688,
    2689,    -1,    -1,    61,  1875,  1876,  2695,    -1,    -1,    -1,
    1881,  1882,  1883,    -1,    72,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   349,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1912,    -1,    -1,  2733,    -1,    -1,    -1,  2737,    -1,
      -1,    -1,    -1,    -1,   112,    -1,    -1,   380,    -1,    -1,
      -1,    -1,   120,    -1,   122,    -1,    -1,    -1,    -1,  1940,
      -1,   129,    -1,   131,   132,   133,   134,   135,   136,   137,
     138,    -1,   140,   141,   142,    -1,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   419,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   164,    -1,   431,   432,
      -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,    -1,    -1,
      -1,    -1,   465,    -1,   202,    -1,    -1,   205,   206,    -1,
      -1,    -1,   475,    -1,    -1,    -1,    -1,    -1,   216,    -1,
      -1,    -1,    -1,    -1,    -1,   223,    -1,   225,    -1,    -1,
     228,    -1,   495,    -1,    -1,    -1,    -1,   500,    -1,    -1,
      -1,    -1,    -1,    -1,   507,    -1,   509,    -1,    -1,    -1,
      -1,    -1,   515,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2072,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   270,    -1,    -1,    -1,   274,    -1,   276,    -1,
      -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,   286,    -1,
      -1,    -1,    -1,    -1,   292,   293,   294,    -1,   296,   297,
     298,   299,  2113,    -1,  2115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   313,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2135,    -1,    -1,    -1,   326,    -1,
      -1,    -1,  2143,     1,    -1,     3,    -1,     5,    -1,    -1,
      -1,  2152,    10,  2154,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    -1,   352,   353,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   363,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   192,   193,   194,    -1,    -1,    -1,   377,
     378,    -1,   201,    51,    52,    -1,   384,    -1,  2199,    -1,
     388,    -1,    -1,    61,    -1,    -1,  2207,    -1,   396,    -1,
       6,    -1,  2213,     9,    72,    -1,    -1,    75,   406,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   415,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,   424,    -1,    -1,    -1,
      -1,   429,   430,    -1,    -1,   433,    -1,   435,   257,    -1,
     259,   260,   261,    -1,   112,   443,   265,    -1,    -1,    -1,
      -1,    -1,   120,    -1,   122,    -1,    -1,    -1,   456,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   474,    83,    -1,    -1,
      -1,    -1,   480,    -1,    -1,   153,   305,   485,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    -1,   164,    -1,  2309,    -1,
    2311,   169,    -1,    -1,    -1,    -1,    -1,    -1,   506,    -1,
      -1,    -1,    -1,    -1,   512,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,    -1,    -1,
      -1,  2342,    -1,    -1,   202,    -1,    -1,   205,   206,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,   216,    -1,
      -1,    -1,    -1,    -1,     1,   223,     3,   225,     5,    -1,
     228,   380,  2373,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   192,   193,   194,    -1,
      -1,    -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,
      -1,    -1,   270,    -1,    51,    52,   274,   213,   276,    -1,
      -1,    -1,   431,   432,    61,    -1,    -1,    -1,   286,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    75,    -1,
      -1,    -1,    -1,  2444,    -1,  2446,    -1,    -1,    -1,    -1,
     246,    -1,    89,    -1,    -1,   313,   252,    -1,   254,    -1,
      -1,   257,    -1,   259,   260,   261,   475,    -1,   326,   265,
      -1,   267,    -1,    -1,    -1,   112,   272,    -1,    -1,    -1,
      -1,    -1,    -1,   120,    -1,   122,   495,    -1,    -1,    -1,
      -1,   500,    -1,    -1,   352,   353,    -1,    -1,   507,    -1,
     509,    -1,    -1,    -1,    -1,   363,    -1,    -1,    -1,   305,
      -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,   377,
     378,    -1,    -1,    -1,    -1,    -1,   384,   164,   324,    -1,
     388,    -1,   169,    -1,    -1,    -1,    -1,    -1,   396,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   406,    -1,
      -1,    -1,    -1,   349,    -1,    -1,    -1,   415,   195,    -1,
      -1,    -1,    -1,    -1,    -1,   202,   424,    -1,   205,   206,
      -1,   429,   430,    -1,    -1,   433,    -1,   435,    -1,   216,
      -1,    -1,    -1,    -1,   380,   443,   223,    -1,   225,    -1,
      -1,   228,    -1,    -1,    -1,    -1,    -1,    -1,   456,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   474,    -1,    -1,    -1,
      -1,    -1,   480,   419,    -1,    -1,    -1,   485,    -1,    -1,
      -1,    -1,    -1,   270,    -1,   431,   432,   274,    -1,   276,
      -1,    -1,    -1,    -1,    -1,    -1,  2647,  2648,    -1,   286,
      -1,    -1,    -1,    -1,   512,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   458,    -1,    -1,    -1,    -1,    -1,    -1,   465,
      -1,    -1,    -1,   469,    -1,  2676,   313,    -1,    -1,   475,
      -1,    -1,    -1,    -1,    -1,     3,    -1,     5,    -1,   326,
      -1,    -1,    10,    -1,  2695,    -1,    -1,    -1,    -1,   495,
      18,    -1,    -1,    -1,   500,    -1,    -1,    -1,    -1,    -1,
      -1,   507,    -1,   509,    -1,   352,   353,    -1,    -1,   515,
      -1,    -1,    -1,    -1,    -1,    -1,   363,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    52,    -1,  2737,    -1,    -1,    -1,
     377,   378,    -1,    61,    -1,    -1,    -1,   384,    -1,    -1,
      -1,   388,    -1,    -1,    72,    -1,    -1,    75,    -1,   396,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   406,
      -1,    89,    -1,    -1,    -1,    -1,     6,    -1,   415,     9,
      -1,    -1,    12,    13,    14,    -1,    -1,   424,    -1,    -1,
      20,    -1,   429,   430,   112,    -1,   433,    -1,   435,    -1,
      -1,    -1,   120,    -1,   122,    -1,   443,    -1,    -1,    -1,
      -1,   129,    -1,   131,   132,   133,   134,   135,   136,   137,
     138,    -1,   140,   141,   142,    -1,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,    -1,   474,    -1,    -1,
      -1,    -1,    -1,   480,    -1,    -1,   164,    -1,   485,    -1,
      -1,   169,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    -1,    -1,    -1,    -1,   512,    -1,   195,    -1,    -1,
      -1,    -1,    -1,    -1,   202,    -1,    -1,   205,   206,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   216,    -1,
      -1,    -1,    -1,    -1,    -1,   223,    -1,   225,    -1,    -1,
     228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   270,    -1,    -1,    -1,   274,    -1,   276,    -1,
      -1,    -1,   192,   193,   194,    -1,    -1,    -1,   286,    -1,
      -1,   201,    -1,    -1,    -1,    -1,    -1,   207,   208,    -1,
      -1,    -1,    -1,   213,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   313,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   233,    -1,    -1,    -1,    -1,   326,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   246,   247,   248,    -1,
      -1,    -1,   252,    -1,   254,    -1,    -1,   257,    -1,   259,
     260,   261,    -1,    -1,   352,   265,    -1,   267,    -1,    -1,
      -1,    -1,   272,    -1,    -1,   363,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   285,    -1,    -1,    -1,    -1,
     378,   291,    -1,    -1,    -1,   295,   384,    -1,    -1,    -1,
     388,    -1,    -1,   303,    -1,   305,    -1,    -1,   396,    -1,
     310,    -1,    -1,    -1,    -1,   315,    -1,    -1,   406,    -1,
      -1,    -1,    -1,    -1,   324,    -1,    -1,   415,    -1,    -1,
      -1,    -1,     6,    -1,   334,     9,   424,    -1,    12,    13,
      14,   429,   430,    -1,    -1,   433,    20,   435,    -1,   349,
      -1,    -1,    -1,    -1,    -1,   443,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   456,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     380,    -1,    -1,    -1,    -1,    -1,   474,    -1,    -1,    -1,
      -1,    -1,   480,    -1,    -1,    -1,    -1,   485,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,    42,    43,    44,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   419,
      -1,    -1,    -1,    -1,   512,    -1,   100,    -1,    -1,    -1,
      -1,   431,   432,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      76,    77,    78,    79,    80,    81,    82,    -1,    -1,    -1,
      -1,    -1,    -1,   453,    -1,   455,    -1,   457,    -1,    -1,
     460,    -1,   462,   463,   464,   465,    -1,   467,   468,    -1,
      -1,    -1,    -1,    -1,    -1,   475,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   120,    -1,   160,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   495,   170,    -1,    -1,    -1,
     500,    -1,    -1,    -1,    -1,    -1,    -1,   507,    -1,   509,
      -1,    -1,    -1,    -1,    -1,   515,    -1,    -1,   192,   193,
     194,    -1,    -1,    -1,    -1,    -1,    -1,   201,    -1,    -1,
      -1,    -1,    -1,   207,   208,    -1,    -1,    -1,    -1,   213,
      -1,    -1,    -1,   179,   180,   181,   182,   183,    -1,    -1,
     186,   187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   246,   247,   248,    -1,    -1,    -1,   252,    -1,
     254,    -1,    -1,   257,   220,   259,   260,   261,    -1,    -1,
      -1,   265,    -1,   267,    -1,    -1,    -1,    -1,   272,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   285,    -1,    -1,    -1,    -1,    -1,   291,    -1,    -1,
      -1,   295,     6,    -1,    -1,     9,    -1,    -1,    -1,   303,
      -1,   305,    -1,    -1,    -1,    -1,   310,    -1,    -1,    -1,
      -1,   315,   278,    -1,     6,    -1,    30,     9,    -1,    -1,
     324,    35,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
     334,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     6,    -1,    -1,     9,   349,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    67,    -1,   321,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   332,    -1,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,   380,    -1,    92,   345,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,
      -1,    -1,    -1,    -1,    -1,   419,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   431,   432,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   410,   411,   412,   161,   113,   453,
      -1,   455,    -1,   457,    -1,    -1,   460,    -1,   462,   463,
     464,   465,    -1,   467,   468,    -1,    -1,    -1,    -1,    -1,
      -1,   475,    -1,    -1,    -1,    -1,   190,    -1,   192,   193,
     194,    -1,    -1,    -1,    -1,    -1,    -1,   201,    -1,    -1,
      -1,   495,    -1,    -1,    -1,    -1,   500,    -1,   212,   213,
     192,   193,   194,   507,    -1,   509,    -1,    -1,    -1,   201,
      -1,   515,    -1,    -1,    -1,    -1,   482,   483,   484,    -1,
      -1,   213,    -1,    -1,    -1,    -1,    -1,   192,   193,   194,
      -1,    -1,   246,    -1,    -1,    -1,   201,    -1,   252,   253,
     254,    -1,    -1,   257,    -1,   259,   260,   261,   213,    -1,
      -1,   265,   266,   267,   246,    -1,    -1,    -1,   272,   273,
     252,    -1,   254,    -1,   229,   257,    -1,   259,   260,   261,
      -1,    -1,    -1,   265,    -1,   267,    -1,    -1,    -1,    -1,
     272,   246,    -1,    -1,    -1,    -1,   300,   252,    -1,   254,
      -1,   305,   257,    -1,   259,   260,   261,    -1,    -1,    -1,
     265,    -1,   267,    -1,    -1,    -1,   320,   272,    -1,    -1,
     324,    -1,    -1,   305,    -1,    -1,    -1,    -1,   310,   333,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   324,    -1,     6,   349,    -1,     9,    -1,    -1,
     305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   349,    -1,   324,
      -1,     6,    -1,    -1,     9,    -1,   380,   381,   360,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     394,    -1,    -1,     6,   349,    -1,     9,    -1,   380,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   413,
      -1,    -1,    -1,    -1,    -1,   419,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    -1,   380,    -1,   431,   432,    -1,
      -1,   413,    -1,    95,    -1,    -1,    -1,   419,   100,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,   431,
     432,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   465,    -1,    -1,   419,   100,    -1,    -1,    -1,    -1,
      83,   475,    -1,    -1,   478,    -1,   431,   432,    -1,    -1,
      -1,    -1,    95,   465,    -1,   489,    -1,   100,    -1,    -1,
      -1,   495,    -1,   475,    -1,    -1,   500,    -1,    -1,   481,
      -1,    -1,    -1,   507,   508,   509,    -1,    -1,    -1,    -1,
     465,   515,    -1,   495,    -1,    -1,    -1,    -1,   500,    -1,
     475,   503,    -1,    -1,    -1,   507,    -1,   509,    -1,    -1,
     192,   193,   194,   515,    -1,    -1,    -1,    -1,    -1,   201,
     495,    -1,    -1,    -1,    -1,   500,    -1,    -1,    -1,    -1,
      -1,   213,   507,    -1,   509,    -1,    -1,   192,   193,   194,
     515,    -1,    -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   213,   192,
     193,   194,    -1,    -1,   246,    -1,    -1,    -1,   201,    -1,
     252,    -1,   254,    -1,    -1,   257,    -1,   259,   260,   261,
     213,    -1,    -1,   265,    -1,   267,    -1,    -1,    -1,    -1,
     272,   246,    -1,    -1,    -1,    -1,    -1,   252,    -1,   254,
      -1,    -1,   257,    -1,   259,   260,   261,    -1,    -1,    -1,
     265,    -1,   267,   246,    -1,    -1,    -1,   272,    -1,   252,
      -1,   254,    -1,   305,   257,    -1,   259,   260,   261,    -1,
      -1,    -1,   265,    -1,   267,    -1,    -1,    -1,    -1,   272,
      -1,    -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,     6,
     305,    -1,     9,    -1,    -1,   310,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   349,    -1,   324,
      -1,     6,   305,    -1,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   324,    -1,    -1,   349,    -1,    -1,    -1,   380,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   349,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   380,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   419,    -1,    -1,
      -1,    -1,    -1,   100,    -1,    -1,    -1,   380,    83,   431,
     432,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,    -1,
      95,    -1,    -1,    -1,   419,   100,    -1,    -1,    -1,    -1,
      -1,     6,    -1,    -1,     9,    -1,   431,   432,    -1,    -1,
      -1,    -1,    -1,   465,    -1,    -1,   419,    -1,    -1,    -1,
      -1,    -1,    -1,   475,    -1,    -1,    -1,    -1,   431,   432,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     465,    -1,    -1,   495,    -1,    -1,    -1,    -1,   500,    -1,
     475,    -1,    -1,    -1,    -1,   507,    -1,   509,    -1,    -1,
      -1,    -1,   465,   515,    -1,   192,   193,   194,    -1,    -1,
     495,    -1,   475,    -1,   201,   500,    -1,    -1,    83,    -1,
      -1,    -1,   507,    -1,   509,    -1,   213,   192,   193,   194,
     515,    -1,   495,    -1,    -1,   100,   201,   500,    -1,    -1,
      -1,    -1,    -1,    -1,   507,    -1,   509,    -1,   213,    -1,
      -1,    -1,   515,    -1,    -1,    -1,    -1,    -1,    -1,   246,
      -1,    -1,    -1,    -1,    -1,   252,    -1,   254,    -1,    -1,
     257,    -1,   259,   260,   261,    -1,    -1,    -1,   265,    -1,
     267,   246,    -1,    -1,    -1,   272,    -1,   252,    -1,   254,
      -1,    -1,   257,    -1,   259,   260,   261,    -1,    -1,    -1,
     265,    -1,   267,    -1,    -1,    -1,    -1,   272,    -1,     6,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,   305,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,   194,
      -1,    -1,    -1,    -1,    -1,    -1,   201,   324,    -1,    -1,
     305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   213,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,
      -1,    -1,   349,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   246,    -1,    -1,   349,    -1,    83,   252,    -1,   254,
      -1,    -1,   257,   380,   259,   260,   261,    -1,    -1,    -1,
     265,    -1,   267,   100,    -1,    -1,    -1,   272,     6,    -1,
      -1,     9,    -1,    -1,    -1,   380,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   419,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     305,    -1,    -1,    -1,   431,   432,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   419,    -1,    -1,    -1,    -1,   324,
      -1,    -1,    -1,    -1,    -1,    -1,   431,   432,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   465,    -1,
      -1,    -1,    -1,    -1,   349,    83,    -1,    -1,   475,    -1,
      -1,    -1,    -1,    -1,    -1,   192,   193,   194,    -1,    -1,
     465,    -1,   100,    -1,   201,    -1,    -1,    -1,   495,    -1,
     475,    -1,    -1,   500,    -1,   380,   213,    -1,    -1,    -1,
     507,    -1,   509,    -1,    -1,    -1,    -1,    -1,   515,    -1,
     495,    -1,    -1,    -1,    -1,   500,    -1,    -1,    -1,    -1,
      -1,    -1,   507,    -1,   509,    -1,    -1,    -1,    -1,   246,
     515,    -1,    -1,    -1,   419,   252,    -1,   254,    -1,    -1,
     257,    -1,   259,   260,   261,    -1,   431,   432,   265,    -1,
     267,    -1,    -1,    -1,    -1,   272,     6,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    -1,   451,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   192,   193,   194,    -1,   196,    -1,
     465,    -1,    -1,   201,     6,    -1,    -1,     9,   305,    -1,
     475,    -1,    -1,   310,    -1,   213,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,    -1,
     495,    -1,    -1,    -1,    -1,   500,    -1,    -1,    -1,    -1,
      -1,    -1,   507,    -1,   509,    -1,    -1,    -1,   246,    -1,
     515,    -1,   349,    83,   252,    -1,   254,    -1,    -1,   257,
      -1,   259,   260,   261,    -1,    -1,    -1,   265,    -1,   267,
     100,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,   380,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   419,    -1,    -1,    -1,   324,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   431,   432,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   349,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   192,   193,   194,    -1,    -1,    -1,   465,    -1,
      -1,   201,     6,    -1,    -1,     9,    -1,    -1,   475,    -1,
      -1,    -1,   380,   213,    -1,    -1,    -1,    -1,    -1,    -1,
     192,   193,   194,    -1,    -1,    -1,    -1,    -1,   495,   201,
      -1,    -1,    -1,   500,    -1,    -1,    -1,    -1,    -1,    -1,
     507,   213,   509,    -1,    -1,    -1,   246,    -1,   515,    -1,
      -1,   419,   252,    -1,   254,    -1,    -1,   257,    -1,   259,
     260,   261,    -1,   431,   432,   265,    -1,   267,    -1,    -1,
      -1,    -1,   272,    -1,   246,    -1,    -1,    -1,    -1,    83,
     252,    -1,   254,    -1,    -1,   257,    -1,   259,   260,   261,
      -1,    -1,    -1,   265,    -1,   267,   100,   465,    -1,    -1,
     272,    -1,    -1,    -1,    -1,   305,    -1,   475,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   324,    -1,    -1,   495,    -1,    -1,
      -1,    -1,   500,   305,    -1,    -1,    -1,    -1,    -1,   507,
      -1,   509,    -1,    -1,    -1,    -1,    -1,   515,    -1,   349,
      -1,    -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   349,    -1,    -1,
     380,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,
     194,    -1,    -1,    -1,    -1,    -1,    -1,   201,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   380,   213,
      -1,    -1,    -1,   413,    -1,    -1,    -1,    -1,    -1,   419,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   431,   432,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   246,    -1,    -1,    -1,    -1,   419,   252,    -1,
     254,    -1,    -1,   257,    -1,   259,   260,   261,    -1,   431,
     432,   265,    -1,   267,    -1,   465,    -1,    -1,   272,    -1,
      -1,    -1,    -1,    -1,    -1,   475,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   465,    -1,   495,    -1,    -1,    -1,    -1,
     500,   305,    -1,   475,    -1,    -1,    -1,   507,    -1,   509,
      -1,    -1,    -1,    -1,    -1,   515,    -1,    -1,    -1,    -1,
     324,    -1,    -1,   495,    -1,    -1,    -1,    -1,   500,    -1,
      -1,    -1,    -1,    -1,    -1,   507,    -1,   509,    -1,    -1,
      -1,     1,    -1,   515,    -1,   349,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    35,   380,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    74,   419,    76,    77,    78,    79,
      80,    81,    82,    -1,    -1,    -1,    -1,   431,   432,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     120,   465,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   475,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   495,    -1,    -1,    -1,    -1,   500,    -1,    -1,    -1,
      -1,   161,    -1,   507,    -1,   509,    -1,    -1,    -1,    -1,
      -1,   515,    -1,    -1,    -1,    -1,   176,    -1,    -1,   179,
     180,   181,   182,   183,    -1,    -1,   186,   187,    -1,    -1,
     190,    -1,    -1,    -1,    -1,    -1,   196,    -1,   198,    -1,
      -1,    -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,   209,
      -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   233,    -1,    -1,   236,    -1,    -1,    -1,
      -1,    -1,   242,    -1,   244,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   253,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    -1,    -1,    -1,   266,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   278,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    39,    40,
      41,    42,    43,    44,    45,    -1,    -1,   307,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     320,   321,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   329,
      -1,    -1,   332,    74,    -1,    76,    77,    78,    79,    80,
      81,    82,    -1,    -1,    -1,   345,    -1,   347,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   374,    -1,    -1,    -1,    -1,   120,
      -1,   381,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   398,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   408,    -1,
     410,   411,   412,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   172,    -1,    -1,    -1,   176,    -1,    -1,   179,   180,
     181,   182,   183,    -1,    -1,   186,   187,    -1,    -1,    -1,
      -1,   451,    -1,    -1,    -1,    -1,   456,    -1,    -1,    -1,
      -1,   461,    -1,   204,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   473,    -1,    -1,    -1,    -1,   478,   220,
      -1,    -1,   482,   483,   484,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   233,    21,    -1,   236,   496,    -1,    -1,    -1,
      -1,   242,   502,   503,    -1,    -1,    -1,    -1,    36,   509,
      -1,    39,    40,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    30,    -1,    32,    -1,    -1,    35,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,   278,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,    77,
      78,    79,    80,    81,    82,    -1,    -1,    65,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,   307,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     321,    -1,    -1,    -1,    92,    -1,    -1,    -1,   329,    -1,
      -1,   332,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   111,   345,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   358,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   366,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   179,   180,   181,   182,   183,    -1,    -1,   186,   187,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   408,    -1,   410,
     411,   412,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   190,    -1,    -1,    -1,    -1,    -1,    -1,   197,
     198,    -1,   220,    -1,    -1,    -1,   437,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   212,   233,    -1,    -1,   236,    -1,
      -1,    -1,    -1,    -1,   242,   456,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   473,    -1,    -1,    -1,   244,    -1,    -1,    -1,
      -1,   482,   483,   484,    -1,   253,    -1,    -1,    -1,    -1,
     278,    -1,    -1,    -1,    -1,   496,   264,    -1,   266,    -1,
      -1,    -1,   503,    -1,    -1,   273,    -1,    -1,   509,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   307,
     288,   289,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   321,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   329,    -1,    -1,   332,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   320,    -1,    -1,    -1,    -1,   345,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   333,    -1,    -1,    -1,    -1,
     358,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   366,   347,
     348,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   374,    -1,    -1,    -1,
      -1,    -1,    -1,   381,    -1,    -1,    -1,    -1,    -1,    -1,
     408,    -1,   410,   411,   412,    -1,   394,    -1,    -1,    32,
     398,    -1,    35,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,   413,    -1,    -1,    -1,   437,
      -1,    -1,    32,    -1,    -1,    35,    -1,    -1,    38,    -1,
      -1,    -1,    65,    -1,    67,    -1,    46,    -1,   456,    -1,
      -1,    74,   440,    76,    77,    78,    79,    80,    81,    82,
      -1,   449,    -1,    -1,    -1,   473,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   482,   483,   484,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   496,    -1,
     478,    -1,    92,    -1,    -1,   503,    -1,   120,    -1,    -1,
     488,    -1,    -1,    -1,    -1,    -1,   494,    -1,    -1,    -1,
      -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     508,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   179,   180,   181,   182,
     183,    -1,    -1,   186,   187,    -1,    -1,   190,    -1,    -1,
      -1,    -1,    -1,   196,    -1,   198,    -1,    -1,    -1,    -1,
      -1,   204,    -1,    -1,    -1,    -1,   209,    -1,    -1,   212,
     190,    -1,    -1,    -1,    -1,    -1,    -1,   220,   198,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     233,    -1,   212,   236,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   244,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     253,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   266,   244,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    -1,    -1,    -1,   278,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   264,    -1,   266,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   307,    -1,    -1,    -1,   288,   289,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,   321,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   329,    -1,    -1,   332,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
     320,    -1,   345,    -1,   347,    -1,    -1,    -1,    -1,    -1,
     100,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,   192,   193,   194,    -1,   347,   348,    -1,
      -1,   374,   201,   100,    -1,    -1,    -1,    -1,   381,    -1,
      -1,    -1,    -1,    -1,   213,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   374,   398,    -1,    -1,    -1,    -1,
      -1,   381,    -1,    -1,    -1,   408,    -1,   410,   411,   412,
      -1,    -1,    -1,    -1,   394,    -1,    -1,   246,   398,    -1,
      -1,    -1,    -1,   252,    -1,   254,    -1,    -1,   257,    -1,
     259,   260,   261,   413,    -1,    83,   265,    -1,   267,    -1,
      -1,    -1,   192,   193,   194,    -1,    -1,    -1,   451,    -1,
      -1,   201,   100,   456,    -1,    -1,    -1,    -1,   461,    -1,
     440,    -1,    -1,   213,    -1,   192,   193,   194,    -1,   449,
      -1,    -1,    -1,    -1,   201,   478,   305,    -1,    -1,   482,
     483,   484,    -1,    -1,    -1,    -1,   213,    -1,    -1,    -1,
      -1,    -1,    -1,   496,    -1,   324,   246,    -1,   478,   502,
     503,    -1,   252,    -1,   254,    -1,    -1,   257,   488,   259,
     260,   261,    -1,    -1,   494,   265,    -1,   267,    -1,   246,
     349,    -1,    -1,    -1,    -1,   252,    -1,   254,    -1,    -1,
     257,    -1,   259,   260,   261,    -1,    -1,    -1,   265,    -1,
     267,    -1,    -1,    -1,   192,   193,   194,    -1,    -1,    -1,
      -1,   380,    -1,   201,    -1,   305,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   213,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   324,    -1,    -1,    -1,   305,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     419,    -1,    -1,    -1,    -1,    -1,    -1,   324,   246,   349,
      -1,    -1,   431,   432,   252,    -1,   254,    -1,    -1,   257,
      -1,   259,   260,   261,    -1,    -1,    -1,   265,    -1,   267,
      -1,    -1,   349,    -1,   453,    -1,    -1,    -1,    -1,    -1,
     380,    -1,    -1,    -1,   463,    -1,   465,    -1,   467,   468,
      -1,    -1,    -1,    -1,    -1,    -1,   475,    -1,    -1,    -1,
      -1,    -1,    -1,   380,    -1,    -1,    -1,   305,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   495,    83,    -1,   419,
      -1,   500,    -1,    -1,    -1,    -1,   324,    -1,   507,    -1,
     509,   431,   432,    -1,   100,    -1,   515,    -1,    -1,    -1,
      -1,    -1,   419,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   349,    -1,   453,   431,   432,    -1,    -1,    -1,    -1,
      -1,    -1,   439,   463,    -1,   465,    -1,   467,   468,    -1,
      -1,    -1,    -1,    -1,    -1,   475,    -1,    -1,    -1,    -1,
      -1,    -1,   380,    -1,    -1,    -1,   463,    -1,   465,    -1,
     467,   468,    -1,    -1,    -1,   495,    83,    -1,   475,    -1,
     500,    -1,    -1,    -1,    -1,    -1,    -1,   507,    -1,   509,
      -1,    -1,    -1,   100,    -1,   515,    -1,    -1,   495,    83,
      -1,   419,    -1,   500,    -1,    -1,   192,   193,   194,    -1,
     507,    -1,   509,   431,   432,   201,   100,    -1,   515,    -1,
      -1,   439,    -1,    -1,    -1,    -1,    -1,   213,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   463,    -1,   465,    -1,   467,
     468,    -1,    -1,    -1,    -1,    -1,    -1,   475,    -1,    -1,
     246,    -1,    -1,    -1,    -1,    -1,   252,    -1,   254,    -1,
      -1,   257,    -1,   259,   260,   261,    -1,   495,    83,   265,
      -1,   267,   500,    -1,    -1,   192,   193,   194,    -1,   507,
      -1,   509,    -1,    -1,   201,   100,    -1,   515,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   213,    -1,   192,   193,
     194,    -1,    -1,    -1,    -1,    -1,    83,   201,    -1,   305,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   213,
      -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,   324,   246,
      -1,    -1,    -1,    -1,    -1,   252,    -1,   254,    -1,    -1,
     257,    -1,   259,   260,   261,    -1,    -1,    -1,   265,    -1,
     267,    -1,   246,   349,    -1,    -1,    -1,    -1,   252,    -1,
     254,    -1,    -1,   257,    -1,   259,   260,   261,    -1,    -1,
      -1,   265,    -1,   267,    -1,    -1,    -1,   192,   193,   194,
      -1,    -1,    -1,    -1,   380,    -1,   201,    -1,   305,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   213,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,    -1,
      -1,   305,    -1,    -1,   191,   192,   193,   194,    -1,    -1,
      -1,    -1,    -1,   419,   201,    -1,    -1,    -1,    -1,    -1,
     324,   246,   349,    -1,    -1,   431,   432,   252,    -1,   254,
      -1,    -1,   257,    -1,   259,   260,   261,    -1,    -1,    -1,
     265,    -1,   267,    -1,    -1,   349,    -1,   453,    -1,    -1,
      -1,    -1,    -1,   380,    -1,    -1,    -1,   463,    -1,   465,
      -1,   467,   468,    -1,    -1,    83,    -1,    -1,    -1,   475,
     257,    -1,   259,   260,   261,    -1,   380,    -1,   265,    -1,
     305,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,   495,
      -1,    -1,   419,    -1,   500,    -1,    -1,    -1,    -1,   324,
      -1,   507,    -1,   509,   431,   432,    -1,    -1,    -1,   515,
      -1,    -1,    -1,    -1,    -1,   419,    -1,    -1,   305,    -1,
      -1,    -1,    -1,    -1,   349,    -1,    -1,   431,   432,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   463,    -1,   465,    -1,
     467,   468,    -1,    -1,    -1,    -1,    -1,    -1,   475,    -1,
      -1,   376,    -1,    -1,    -1,   380,    -1,    -1,    -1,    -1,
      -1,   465,    -1,   467,    -1,    -1,    -1,    -1,   495,    -1,
      -1,   475,    -1,   500,   192,   193,   194,    -1,    -1,    -1,
     507,    -1,   509,   201,    -1,    -1,    -1,    -1,   515,    -1,
      -1,   495,    -1,   380,   419,   213,   500,    -1,    -1,    -1,
      -1,    -1,    -1,   507,    -1,   509,   431,   432,    -1,    -1,
      -1,   515,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,    -1,
      -1,    -1,    -1,    -1,   252,    -1,   254,    -1,    -1,   257,
     465,   259,   260,   261,   431,   432,    -1,   265,    -1,   267,
     475,    -1,    -1,    -1,    -1,    -1,    -1,   444,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     495,    -1,    -1,    -1,    -1,   500,    -1,    -1,    -1,    -1,
      -1,    -1,   507,    -1,   509,    -1,    -1,   305,   475,    -1,
     515,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   486,
      -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,   495,    -1,
      -1,    -1,    -1,   500,    -1,    -1,    -1,   504,    -1,    -1,
     507,   508,   509,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   349,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   380,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   419,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   431,   432,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   465,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   475,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   495,    -1,    -1,
      -1,    -1,   500,    -1,    -1,    -1,    -1,    -1,    -1,   507,
      -1,   509,    -1,    -1,    -1,    -1,    -1,   515
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   518,   519,     0,   200,   343,   520,   521,   522,   523,
     524,   525,   527,   537,   539,   456,   456,   522,   154,   533,
     545,   533,   533,   257,   344,   540,   540,   123,    85,   546,
     526,   528,   537,   139,   531,   532,    26,   541,   541,   456,
     397,   547,   143,   526,   529,   530,   533,   540,   257,   456,
     538,   456,    11,    59,    97,    99,   101,   109,   165,   227,
     258,   303,   306,   372,   393,   418,   420,   436,   509,   548,
     549,   553,   564,   572,   573,   574,   575,   576,   582,   591,
     593,   598,   601,   602,   604,   605,   606,   607,   608,   609,
     610,   540,   528,   456,   233,   542,  1286,   509,  1202,  1202,
     426,   408,  1304,  1286,  1286,  1286,   397,  1202,   408,   456,
     456,  1286,   456,   456,    58,  1273,   577,     1,   456,   575,
     219,   592,   174,   611,   456,   530,   456,    73,   172,   357,
     461,   543,   544,   583,  1286,  1286,  1286,   509,  1197,  1229,
      69,  1197,   456,  1286,  1286,   554,   565,  1197,   550,   509,
     594,   595,   596,  1203,   257,   309,   311,   578,   580,   581,
    1045,  1232,  1286,   456,   509,   456,   613,   544,   342,  1301,
    1286,   213,   257,   267,   349,   419,   465,   515,   599,   600,
    1235,  1197,   257,   219,   308,  1323,   257,   473,    57,    64,
     269,   342,   399,   404,   509,   555,   556,   557,   558,   559,
     560,   561,   563,  1272,  1333,   199,   566,   567,   568,   551,
     563,   595,    22,   233,  1203,  1287,  1045,   233,   426,  1298,
    1286,    97,  1202,   235,   400,   612,   614,    28,   127,   213,
     257,   267,   281,   349,   419,   422,   423,   515,   584,   585,
     586,   589,   600,   447,   508,   603,  1317,  1229,   403,   404,
     413,    64,  1286,   456,   557,   456,   509,   556,    60,  1286,
       9,   373,   501,   569,   571,     1,   456,   568,   552,  1317,
     257,   597,  1233,  1298,   233,  1202,  1202,   579,   580,   456,
       1,   291,   314,  1258,   275,   391,   646,   647,   648,   649,
     651,   586,    17,   447,  1235,   330,  1286,   404,  1232,   456,
    1286,   509,  1198,   230,    26,   570,   230,   373,   456,   456,
     108,  1233,  1202,   456,   314,  1202,   652,   354,   415,   416,
     650,   534,     1,   456,   648,   587,   589,   257,  1232,   258,
     438,   499,   562,  1198,   257,   273,   615,   459,  1277,    23,
    1267,   103,   656,   456,   588,   589,    58,   510,  1327,   616,
     442,  1310,   189,  1279,   123,   459,   657,    17,     4,    19,
      29,    64,   221,   253,   317,   322,   354,   362,   375,   404,
     407,   415,   456,   459,   617,   618,   624,   626,   628,   629,
     630,   631,   632,   635,   636,   637,   638,   639,   641,   642,
     644,  1302,  1318,    87,  1274,   509,  1187,  1188,   456,   397,
     658,   589,   273,  1293,   354,  1302,   451,   502,  1314,   404,
     405,  1286,  1272,   114,   238,  1288,  1288,   288,   643,  1232,
    1317,   426,   263,    39,  1270,  1286,   653,   654,  1188,  1188,
     456,   173,   395,   535,   659,   660,   662,  1286,  1288,   126,
     172,   621,   362,   636,  1286,  1286,  1286,  1286,  1267,     9,
     288,   352,   645,  1286,  1293,   405,   509,   654,   333,   655,
     511,   687,   689,   690,     1,  1188,   126,   350,   405,   625,
    1286,   118,   119,   120,   239,   253,   337,   350,   442,   619,
     620,   257,  1197,  1201,   422,   640,  1197,  1197,   318,  1299,
    1299,   312,  1197,  1286,  1232,   397,   262,   743,   691,   692,
     694,   704,  1250,   456,   661,   640,   257,   623,  1229,   623,
       7,   623,   623,   257,   622,  1229,   417,   457,    33,   168,
     268,   633,   456,   397,   256,   745,   456,   692,   456,     1,
     176,   509,   695,   696,   509,   663,   125,   508,  1252,  1332,
    1277,  1286,  1196,  1197,   508,   634,   634,   688,   456,   397,
     369,   747,   456,   456,   693,    86,    47,    63,   103,   240,
     251,   354,   355,   369,   371,   456,   503,   664,   665,   667,
     671,   672,   675,   676,   682,   683,   684,   685,  1286,   125,
     435,   627,  1196,  1197,   263,   388,   689,   744,   456,   397,
     392,   792,   706,   697,  1286,  1274,  1286,   354,   356,  1328,
    1328,  1286,  1274,  1286,  1293,  1286,    22,  1266,   308,   686,
    1202,   172,   204,   506,   311,   689,   746,   456,   397,   536,
      21,    36,    39,    40,    41,    42,    43,    44,    45,    74,
      76,    77,    78,    79,    80,    81,    82,   120,   179,   180,
     181,   182,   183,   186,   187,   220,   236,   278,   307,   321,
     329,   332,   345,   358,   366,   408,   410,   411,   412,   437,
     482,   483,   484,   496,   503,   707,   708,   709,   711,   712,
     713,   714,   715,   716,   717,   720,   732,   733,   734,   735,
     736,   741,   742,  1286,  1306,    26,   196,   705,  1268,   204,
    1232,   509,  1286,  1266,   509,  1199,  1200,   310,   421,  1324,
    1201,  1232,   504,  1286,   175,   214,   509,   673,  1202,     9,
     419,   515,   590,   275,   354,   356,  1326,   689,   748,   456,
     339,   808,   811,   245,   303,   409,   481,  1305,   481,  1305,
     481,  1305,   481,  1305,   481,  1305,   506,  1315,   387,  1303,
     126,  1232,  1226,  1229,  1229,   233,   243,   387,  1289,  1286,
    1287,   172,   204,   242,   473,   509,     9,    50,   213,   245,
     246,   257,   267,   349,   419,   465,   515,   698,  1236,  1237,
    1238,   451,   670,  1200,   255,  1292,   451,  1273,   219,  1281,
     509,  1286,  1286,  1238,  1326,   749,   793,   123,   834,   835,
     515,    53,   724,   451,   721,   467,  1230,  1231,   447,   714,
     738,   739,  1236,    26,   710,   403,  1262,  1262,  1238,   308,
    1296,     1,    40,    41,    42,    43,    44,   179,   180,   181,
     182,   183,   184,   185,   332,   345,   699,   700,   701,   702,
     703,   715,   716,  1226,   699,   452,  1232,    58,   356,   666,
     677,  1232,   413,  1307,   257,   674,  1229,   674,   351,   750,
     694,   704,   794,   795,   796,    56,   502,   812,     1,     3,
       5,    10,    18,    51,    52,    61,    72,    75,    89,   112,
     120,   122,   153,   164,   169,   195,   202,   205,   206,   216,
     223,   225,   228,   270,   274,   276,   286,   313,   326,   352,
     353,   363,   377,   378,   384,   388,   396,   406,   415,   424,
     429,   430,   433,   435,   443,   456,   474,   480,   485,   512,
     836,   837,   853,   858,   862,   867,   882,   885,   889,   893,
     894,   895,   900,   914,   918,   921,   935,   939,   942,   945,
     949,   950,   954,   964,   967,   984,   986,   989,   993,   999,
    1011,  1019,  1020,  1023,  1024,  1028,  1033,  1034,  1042,  1057,
    1067,  1076,  1081,  1088,  1092,  1094,  1097,  1100,  1104,  1131,
     836,  1281,   196,   722,  1232,   450,  1312,    83,   100,   192,
     193,   194,   201,   246,   252,   254,   259,   260,   261,   265,
     305,   324,   380,   431,   432,   463,   467,   468,   475,   495,
     500,   507,  1175,  1177,  1178,  1179,  1180,  1181,  1182,  1211,
    1225,  1226,  1237,  1239,  1240,  1241,  1242,   467,  1231,  1229,
     737,   739,   447,   257,  1272,   699,   456,  1238,    48,   470,
     678,   679,   680,   681,  1317,  1273,   196,   669,  1280,   509,
    1189,     1,   695,   796,   456,   814,   813,   379,   820,     3,
       5,    10,    18,    51,    52,    61,    72,    75,    89,   112,
     120,   122,   129,   131,   132,   133,   134,   135,   136,   137,
     138,   140,   141,   142,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   164,   169,   195,   202,   205,   206,
     216,   223,   225,   228,   270,   274,   276,   286,   313,   326,
     352,   363,   378,   384,   388,   396,   406,   415,   424,   429,
     430,   433,   435,   443,   456,   474,   480,   485,   512,  1263,
     838,   854,   859,   863,   868,   883,   886,   890,   896,   901,
     915,   919,   922,   936,   940,   943,   946,   203,   379,   877,
     938,   951,   955,   965,   968,   985,   987,   990,   402,   994,
    1000,  1012,  1021,  1025,  1029,  1035,  1043,  1058,  1068,   257,
     349,   390,   419,   515,  1080,  1082,  1089,   338,  1093,  1095,
     823,  1098,  1101,  1105,  1132,   509,  1232,   721,   115,   723,
     467,   467,   467,  1244,  1226,  1237,  1239,  1323,  1323,   467,
     467,   467,   467,  1323,  1181,  1177,  1181,   467,  1244,    71,
     401,   453,  1176,   454,   463,   468,   455,   464,   170,   467,
    1243,   467,   467,  1177,   506,   740,  1316,  1236,  1201,  1201,
     188,   670,  1232,   751,   456,   797,   456,    49,   815,   816,
     817,  1271,   815,   509,   456,   310,   839,   841,  1225,     6,
      95,   246,   272,   855,  1182,  1207,  1208,  1225,  1236,  1239,
     860,  1177,  1225,   257,   864,   865,  1193,  1194,  1195,  1229,
     272,   425,   427,   869,   870,   257,   884,  1216,  1225,   887,
    1188,     6,   891,  1183,  1184,  1205,  1227,  1228,  1229,  1237,
     459,   897,  1188,   257,   310,   902,   903,   904,   905,   907,
    1207,  1216,  1225,   916,  1208,   257,   920,   458,   469,   923,
     924,   925,  1165,  1166,  1167,   199,   325,   326,   342,   397,
     937,   941,  1204,  1205,   944,  1229,   451,   947,  1313,  1208,
    1164,  1165,   956,  1204,   966,  1189,   969,   970,  1225,  1236,
    1239,  1059,  1223,  1224,  1229,    95,   988,  1208,   991,  1208,
     171,   226,   234,   319,   995,   996,   191,   257,  1001,  1005,
    1006,  1007,  1193,  1217,  1225,  1229,  1239,  1317,  1013,  1188,
    1022,  1185,  1229,  1026,  1188,  1030,  1185,     9,  1036,  1186,
    1229,   154,   272,  1044,  1047,  1048,  1051,  1052,  1053,  1054,
    1055,  1056,  1190,  1191,  1204,  1222,  1224,  1229,  1059,  1069,
    1188,  1077,   113,  1083,  1084,  1085,  1208,    95,  1090,  1207,
    1096,  1189,   456,   509,   824,   825,   828,   829,   834,  1099,
    1225,  1102,  1188,  1106,  1225,  1133,  1185,   224,   725,   311,
    1297,   726,   727,  1175,  1177,  1248,  1175,  1249,   453,  1175,
     509,   509,  1177,  1247,  1247,  1247,  1210,  1225,  1237,  1239,
    1246,   509,   453,  1210,  1245,  1177,   453,  1177,  1178,  1178,
    1179,  1179,  1179,  1177,  1210,  1175,   406,   458,    30,  1269,
    1273,     1,   752,   798,   816,   413,   481,   818,   360,   503,
     809,   131,   852,   840,   196,  1296,  1225,  1226,  1237,  1239,
     132,   857,   451,   856,  1208,    58,   224,  1253,   865,   451,
    1323,   133,   881,   257,  1217,  1216,  1188,   359,   479,   888,
    1317,  1329,  1296,   134,   892,   160,   457,  1184,  1321,   389,
    1259,  1230,  1231,   898,  1188,   135,   899,  1302,   136,   913,
     166,  1144,  1145,   905,  1206,  1207,   906,   490,   491,   492,
     493,   137,   917,    49,   229,   502,   871,   138,   934,    17,
     506,   926,   927,   928,   930,    12,    13,    14,    20,   160,
     170,   207,   208,   247,   248,   285,   291,   295,   303,   310,
     315,   334,   453,   455,   457,   460,   462,   463,   464,   467,
     468,  1168,  1169,  1170,  1171,  1172,  1173,  1174,  1208,   102,
     938,  1205,  1192,   446,  1311,   957,  1317,  1189,    93,   368,
     441,   971,   972,   974,   975,  1061,   467,  1230,  1208,   451,
     141,   992,    49,   996,   407,   997,  1006,   142,   456,  1002,
    1004,   486,   504,   447,   450,   444,   144,  1018,   286,   336,
    1256,   196,  1134,   145,  1027,  1302,   146,  1032,  1134,  1186,
     147,  1041,   504,  1037,  1214,  1225,  1237,  1054,  1056,  1204,
     451,  1191,   124,   451,   487,  1046,    31,  1230,   148,  1075,
     178,   238,   241,  1071,   877,  1078,  1317,  1271,   149,  1087,
     229,  1085,  1225,   150,  1091,   196,  1189,   397,   456,   456,
     196,   354,   356,  1103,   151,  1115,   113,  1107,   152,  1138,
    1134,   726,  1197,   221,   729,    27,   116,   728,  1176,   453,
    1176,   453,   453,  1176,   453,   453,   453,  1176,   453,  1176,
     453,   453,   454,   453,   453,   451,  1286,  1201,   115,   668,
     456,    62,    90,    91,   323,   456,   753,   754,   757,  1286,
    1341,    32,    35,    38,    45,    46,    65,    67,   161,   190,
     196,   198,   209,   212,   244,   253,   266,   307,   320,   347,
     374,   381,   398,   451,   461,   478,   502,   712,   713,   717,
     732,   734,   736,   799,   806,   807,  1286,  1319,  1286,   413,
     314,   819,   110,   821,    30,   197,   273,   842,   843,   844,
     846,   849,  1269,  1317,    24,    25,    66,    68,    70,   104,
     105,   106,   154,   156,   163,   166,   253,   255,   448,   498,
     509,   845,  1191,  1320,   153,   342,  1212,  1226,   451,     6,
    1183,  1208,  1229,  1237,   203,   224,  1254,   379,   861,   341,
     866,  1195,   871,   888,   263,   288,  1279,  1226,  1177,   273,
    1260,  1231,  1188,   232,  1160,  1161,   831,   832,   296,  1146,
     489,   846,   849,   908,   909,   910,  1317,  1144,  1144,  1144,
    1144,  1208,  1183,  1208,   872,   925,    21,   458,   469,   931,
     932,  1166,   506,   928,   929,   506,   831,  1313,   233,  1169,
     115,   948,  1193,   129,   831,   952,     9,    12,    15,    16,
     278,   279,   303,   304,   958,   962,   176,  1214,     9,    58,
     178,   242,   473,   978,   979,   980,   973,   974,  1063,  1297,
    1332,   451,  1204,  1183,  1208,   997,  1317,  1187,   831,   169,
    1008,  1164,  1009,  1010,  1225,  1193,     8,    37,  1136,  1302,
    1221,  1225,  1236,  1239,   229,  1014,  1031,  1317,   130,  1038,
    1225,  1038,   451,   451,  1045,   153,   458,   469,  1208,    49,
      38,    46,   212,   244,   266,   320,   381,   478,  1049,  1050,
    1286,  1070,  1317,  1208,   162,   290,   413,  1208,  1225,   196,
    1183,  1208,   830,  1232,  1214,  1271,   229,  1110,  1135,  1136,
     729,  1271,  1288,   439,  1243,   439,  1243,  1197,  1243,  1243,
    1243,  1210,   242,   473,  1243,   453,  1177,  1243,  1243,  1236,
    1297,  1286,  1286,  1266,   249,   250,  1291,   766,   204,   177,
     755,  1278,  1286,   253,   392,   130,   157,   159,   800,   801,
    1276,  1286,  1221,   301,  1294,  1232,    57,  1225,  1225,   204,
    1294,    32,   111,  1232,  1286,   509,   456,   810,   515,  1218,
    1222,  1232,  1286,   163,   166,  1139,  1140,  1141,   844,   253,
     333,   847,   848,  1319,    32,    35,    38,    46,    92,   111,
     190,   198,   212,   244,   264,   266,   288,   289,   320,   347,
     348,   374,   381,   394,   398,   413,   440,   449,   478,   488,
     494,   850,   851,  1139,   514,   513,  1214,  1139,   238,   426,
     301,   277,   257,  1213,  1226,  1225,  1296,   414,  1147,  1148,
    1230,  1231,  1183,   451,  1255,   861,  1205,   451,  1193,   876,
     877,   383,   365,  1147,  1286,   831,   297,  1162,   833,   831,
      97,    98,   337,   509,   911,  1191,   909,    35,    38,    45,
      46,    92,   161,   190,   212,   266,   300,   320,   381,   394,
     413,   478,   912,   203,  1147,   203,   873,   874,   875,  1271,
      17,   447,   933,   318,   931,  1297,   831,   129,   140,   953,
    1313,   368,   959,  1313,   451,    49,   979,   981,  1214,     9,
      58,   242,   473,   976,   977,  1214,  1064,  1318,   728,   219,
     316,  1282,  1204,  1147,   203,  1187,   645,   382,   998,  1317,
     142,  1003,     8,   196,  1014,  1225,   130,  1153,  1155,  1160,
     263,   288,   831,   506,   506,  1039,  1040,  1214,  1213,  1208,
    1045,  1045,  1045,  1045,  1045,  1045,  1045,  1045,  1050,   291,
     295,  1072,  1073,  1074,  1170,  1257,  1160,   245,   413,  1331,
     426,  1309,  1309,  1086,  1317,  1225,  1147,   203,   456,   451,
       9,  1108,  1109,  1251,  1111,  1225,  1086,  1111,  1031,     7,
    1264,   509,   730,   731,  1286,   453,  1197,  1216,  1286,  1266,
     257,   758,  1234,   694,   767,   756,  1225,  1218,  1296,   253,
     392,  1218,  1286,  1312,  1286,  1286,    32,  1232,   822,   823,
      47,   294,   296,  1142,  1143,   831,  1294,  1294,  1294,  1286,
    1286,   851,    57,   413,   124,   487,  1286,     8,  1265,  1139,
    1259,  1226,   831,   299,  1149,  1231,  1147,  1215,  1225,  1236,
     166,   466,   879,     6,   229,   310,   465,   878,  1285,    34,
     282,   283,   284,   346,   471,   472,   476,  1261,   831,   834,
    1286,   253,   392,   800,   801,  1286,   124,   487,  1286,  1183,
    1184,  1183,  1184,   874,   310,   818,    88,   360,   503,   932,
    1165,   831,  1225,   831,   503,   960,   961,   962,   963,  1311,
     503,  1215,  1214,    49,   982,   977,   189,   982,  1060,  1286,
    1288,   316,  1183,   998,   263,   288,  1010,  1208,   218,  1015,
    1317,   831,   292,  1156,   263,  1165,  1164,  1039,  1170,  1225,
    1171,  1172,  1173,  1174,  1177,  1079,  1208,  1079,   466,  1150,
    1151,   332,  1259,  1183,   826,  1215,   315,  1214,   114,  1112,
     441,  1114,   158,   293,  1137,  1157,  1158,  1159,  1160,   323,
    1191,  1218,   731,  1196,   759,   253,   255,  1325,   509,   695,
    1225,   271,   331,   463,   468,   802,   803,   804,  1216,   802,
     803,   805,   823,   831,  1218,  1218,  1218,  1218,  1218,  1286,
    1286,  1163,  1220,  1222,  1232,  1163,  1218,  1219,  1222,  1234,
    1147,   831,   831,   831,   296,   880,  1296,  1225,  1218,  1218,
    1163,  1163,  1218,  1147,   364,  1147,   364,  1208,   961,   103,
    1275,  1313,   982,   982,  1215,     8,    37,   983,   226,   502,
    1065,  1197,  1062,  1147,   383,    49,   263,   238,  1016,   217,
     237,   263,   288,   505,   831,   831,   831,   831,   298,  1152,
    1286,  1147,  1147,   497,   827,  1116,  1109,  1281,    96,  1113,
    1281,  1150,   831,   831,  1159,   253,   255,  1290,   178,   188,
     211,   241,   760,   761,   762,   763,   764,   765,  1234,   768,
    1218,  1218,   130,  1216,  1218,   253,   255,  1330,   831,  1225,
    1184,  1184,    49,   111,   982,   461,  1284,  1284,   339,  1187,
     203,   319,  1066,  1229,  1208,  1286,  1017,  1154,  1155,  1156,
    1160,   263,   263,   263,   831,  1225,  1117,   456,  1225,  1281,
    1225,   107,   117,  1334,  1286,  1286,    55,    90,  1334,  1335,
    1320,   769,   110,  1147,  1147,  1208,  1208,  1208,  1286,  1187,
     339,   486,  1225,  1156,   128,   167,   204,  1118,  1119,  1120,
    1122,  1126,  1128,  1129,  1130,  1269,  1279,  1225,  1286,  1234,
    1234,   211,  1286,  1286,   210,   253,   255,   286,   307,   335,
     417,   434,   456,   477,   496,   504,   712,   717,   718,   732,
     734,   736,   770,   771,   775,   776,   779,   780,   781,   782,
     783,   784,   789,   790,   791,  1319,  1320,   456,  1005,  1286,
    1164,    37,  1265,   342,   108,  1234,  1234,  1234,   222,  1283,
     301,   302,  1295,  1266,   210,  1232,   506,  1286,  1296,  1286,
    1286,  1225,   287,   331,   785,   786,  1234,   331,   787,   788,
    1234,  1295,  1266,  1005,   370,   421,  1308,   130,   424,  1127,
    1297,  1287,  1286,   721,  1164,  1211,  1209,  1211,    54,    90,
     323,   327,   328,   369,   385,   386,   772,  1334,  1335,  1336,
    1337,  1338,  1339,  1340,   120,   196,  1232,   786,  1232,   788,
    1287,  1225,   162,   166,  1322,     9,  1123,  1124,  1194,   786,
    1312,  1259,   376,   777,  1211,   188,   188,   211,   188,   211,
     177,   773,  1225,   773,  1211,   339,  1300,   308,   340,   361,
    1125,  1124,   723,  1297,   315,   774,   774,    49,  1297,   308,
    1229,   428,   719,   177,   778,  1225,   323,  1211,   171,   226,
     234,   319,  1121,  1187,  1232
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   517,   519,   518,   520,   520,   521,   521,   522,   522,
     524,   523,   525,   526,   527,   528,   528,   528,   529,   529,
     530,   531,   531,   532,   534,   535,   536,   533,   538,   537,
     539,   540,   540,   541,   541,   542,   542,   543,   543,   543,
     543,   544,   544,   545,   545,   546,   546,   547,   547,   548,
     548,   548,   548,   548,   550,   549,   551,   551,   552,   552,
     554,   553,   555,   555,   555,   555,   556,   556,   557,   557,
     557,   557,   558,   559,   560,   561,   562,   562,   562,   562,
     563,   563,   565,   564,   566,   566,   566,   567,   567,   568,
     568,   568,   569,   569,   570,   570,   571,   571,   572,   573,
     573,   574,   574,   575,   575,   575,   575,   575,   575,   575,
     575,   575,   575,   575,   575,   577,   576,   578,   578,   578,
     578,   579,   579,   580,   581,   581,   583,   582,   584,   584,
     584,   584,   584,   584,   585,   585,   586,   586,   587,   586,
     588,   588,   589,   589,   589,   589,   589,   589,   590,   590,
     591,   592,   592,   593,   594,   594,   595,   596,   596,   597,
     597,   598,   599,   599,   600,   600,   601,   602,   603,   603,
     604,   605,   606,   607,   608,   609,   610,   610,   611,   611,
     612,   612,   613,   613,   615,   614,   614,   616,   616,   617,
     617,   617,   617,   617,   617,   617,   617,   617,   617,   617,
     617,   617,   618,   618,   618,   618,   618,   619,   619,   619,
     619,   620,   620,   621,   621,   621,   622,   622,   623,   623,
     623,   624,   625,   625,   625,   626,   627,   627,   627,   628,
     629,   630,   630,   630,   632,   631,   633,   633,   633,   634,
     634,   634,   634,   635,   635,   636,   636,   636,   636,   637,
     638,   639,   640,   640,   640,   641,   642,   643,   643,   644,
     645,   645,   645,   646,   646,   646,   647,   647,   648,   648,
     649,   650,   650,   650,   650,   652,   651,   653,   653,   654,
     655,   655,   656,   656,   657,   657,   658,   658,   659,   661,
     660,   660,   662,   662,   663,   663,   664,   664,   664,   664,
     664,   664,   664,   664,   664,   664,   664,   665,   666,   666,
     666,   667,   667,   667,   668,   668,   669,   669,   670,   670,
     671,   672,   672,   673,   673,   674,   674,   675,   676,   677,
     677,   678,   678,   678,   679,   680,   681,   682,   683,   684,
     685,   685,   686,   686,   687,   688,   687,   689,   690,   689,
     691,   691,   691,   692,   693,   692,   692,   694,   695,   695,
     695,   696,   697,   697,   698,   698,   698,   698,   699,   699,
     699,   699,   699,   699,   699,   699,   699,   699,   699,   699,
     699,   700,   700,   701,   701,   702,   702,   702,   703,   703,
     704,   705,   705,   706,   706,   707,   707,   707,   707,   707,
     707,   707,   707,   707,   707,   707,   707,   707,   707,   708,
     709,   710,   710,   711,   712,   713,   713,   714,   714,   714,
     714,   714,   714,   714,   714,   714,   714,   714,   714,   714,
     714,   714,   714,   714,   714,   714,   714,   714,   714,   714,
     714,   714,   714,   714,   714,   714,   714,   714,   714,   714,
     714,   714,   714,   715,   715,   716,   716,   717,   717,   718,
     719,   719,   720,   720,   721,   721,   722,   722,   723,   723,
     724,   724,   725,   725,   726,   727,   727,   728,   728,   729,
     729,   730,   730,   731,   732,   733,   734,   735,   737,   736,
     738,   738,   739,   739,   740,   740,   741,   741,   742,   742,
     743,   744,   743,   745,   746,   745,   747,   748,   747,   749,
     749,   751,   750,   752,   752,   752,   753,   753,   753,   753,
     754,   755,   756,   756,   757,   758,   758,   758,   759,   759,
     760,   760,   760,   760,   760,   761,   762,   763,   764,   765,
     766,   766,   768,   767,   769,   769,   770,   770,   770,   770,
     770,   770,   770,   770,   770,   770,   770,   770,   770,   770,
     770,   770,   771,   772,   772,   772,   772,   772,   772,   772,
     773,   773,   773,   774,   774,   775,   776,   777,   777,   778,
     778,   779,   780,   781,   782,   782,   783,   784,   784,   785,
     785,   786,   786,   786,   787,   787,   788,   788,   789,   790,
     791,   792,   793,   792,   794,   794,   795,   795,   796,   797,
     796,   796,   798,   798,   799,   799,   799,   799,   799,   799,
     799,   799,   799,   799,   799,   799,   799,   799,   799,   799,
     799,   799,   799,   799,   799,   799,   799,   799,   799,   799,
     799,   799,   799,   799,   799,   799,   799,   799,   799,   800,
     800,   801,   801,   802,   802,   803,   803,   804,   804,   804,
     805,   805,   805,   806,   807,   808,   809,   810,   808,   811,
     808,   812,   813,   812,   814,   812,   815,   815,   816,   817,
     817,   817,   818,   818,   818,   818,   818,   818,   819,   819,
     820,   820,   821,   822,   821,   823,   823,   824,   824,   824,
     824,   824,   826,   825,   827,   827,   828,   829,   830,   830,
     832,   833,   831,   835,   834,   834,   836,   836,   836,   836,
     836,   836,   836,   836,   836,   836,   836,   836,   836,   836,
     836,   836,   836,   836,   836,   836,   836,   836,   836,   836,
     836,   836,   836,   836,   836,   836,   836,   836,   836,   836,
     836,   836,   836,   836,   836,   836,   836,   836,   836,   836,
     836,   836,   836,   836,   836,   836,   836,   838,   837,   840,
     839,   839,   839,   839,   839,   839,   839,   839,   839,   839,
     839,   839,   839,   839,   839,   839,   839,   839,   839,   841,
     841,   842,   842,   843,   843,   844,   844,   844,   844,   845,
     845,   846,   846,   846,   847,   848,   848,   849,   850,   850,
     850,   850,   850,   850,   850,   850,   850,   850,   850,   850,
     850,   850,   850,   850,   850,   850,   850,   850,   850,   850,
     850,   850,   850,   850,   850,   850,   851,   851,   852,   852,
     854,   853,   855,   855,   855,   856,   856,   857,   857,   859,
     858,   860,   860,   861,   861,   863,   862,   864,   864,   865,
     866,   866,   868,   867,   869,   870,   870,   870,   870,   871,
     872,   871,   873,   873,   874,   874,   875,   875,   875,   875,
     876,   876,   876,   876,   877,   877,   878,   878,   879,   879,
     879,   880,   880,   881,   881,   883,   882,   884,   884,   886,
     885,   887,   887,   888,   888,   888,   888,   888,   890,   889,
     891,   892,   892,   893,   894,   896,   895,   897,   897,   898,
     898,   899,   899,   901,   900,   902,   902,   902,   902,   902,
     903,   903,   904,   904,   906,   905,   907,   907,   908,   908,
     909,   909,   909,   909,   909,   910,   910,   910,   910,   911,
     911,   912,   912,   912,   912,   912,   912,   912,   912,   912,
     912,   912,   912,   912,   912,   912,   912,   912,   913,   913,
     915,   914,   916,   916,   916,   916,   916,   917,   917,   919,
     918,   920,   922,   921,   923,   924,   924,   925,   925,   925,
     926,   926,   927,   927,   928,   929,   930,   930,   931,   931,
     932,   932,   932,   932,   933,   933,   934,   934,   936,   935,
     937,   937,   937,   937,   937,   937,   937,   938,   938,   940,
     939,   941,   943,   942,   944,   946,   945,   947,   948,   948,
     949,   951,   950,   952,   952,   952,   953,   953,   955,   954,
     956,   957,   957,   958,   958,   958,   959,   959,   960,   960,
     961,   962,   962,   962,   962,   962,   962,   962,   963,   963,
     965,   964,   966,   966,   968,   967,   969,   970,   970,   970,
     971,   971,   971,   971,   973,   972,   974,   975,   976,   976,
     977,   977,   977,   977,   977,   977,   978,   978,   979,   979,
     980,   980,   980,   980,   980,   981,   982,   982,   983,   983,
     985,   984,   987,   986,   988,   988,   990,   989,   991,   991,
     992,   992,   994,   993,   995,   995,   996,   996,   996,   996,
     997,   997,   998,   998,   998,   998,  1000,   999,  1001,  1002,
    1001,  1001,  1003,  1003,  1004,  1004,  1005,  1005,  1006,  1006,
    1006,  1006,  1006,  1007,  1007,  1008,  1008,  1009,  1009,  1010,
    1012,  1011,  1013,  1014,  1014,  1015,  1015,  1015,  1015,  1015,
    1015,  1015,  1016,  1016,  1017,  1017,  1018,  1018,  1019,  1021,
    1020,  1022,  1023,  1025,  1024,  1026,  1027,  1027,  1029,  1028,
    1030,  1031,  1031,  1031,  1032,  1032,  1033,  1035,  1034,  1036,
    1036,  1037,  1037,  1038,  1038,  1039,  1039,  1040,  1041,  1041,
    1043,  1042,  1044,  1044,  1044,  1044,  1044,  1044,  1045,  1045,
    1046,  1046,  1047,  1048,  1049,  1049,  1050,  1050,  1050,  1050,
    1050,  1050,  1050,  1050,  1051,  1051,  1052,  1053,  1053,  1054,
    1055,  1055,  1056,  1056,  1058,  1057,  1060,  1059,  1061,  1061,
    1062,  1062,  1063,  1063,  1064,  1064,  1065,  1065,  1065,  1066,
    1066,  1066,  1068,  1067,  1069,  1070,  1070,  1071,  1071,  1071,
    1071,  1072,  1072,  1072,  1072,  1072,  1072,  1073,  1074,  1074,
    1075,  1075,  1077,  1076,  1076,  1078,  1078,  1078,  1078,  1079,
    1079,  1080,  1080,  1080,  1080,  1082,  1081,  1083,  1084,  1084,
    1085,  1085,  1085,  1086,  1086,  1087,  1087,  1089,  1088,  1090,
    1090,  1090,  1091,  1091,  1092,  1093,  1093,  1095,  1094,  1096,
    1096,  1098,  1097,  1099,  1101,  1100,  1102,  1103,  1103,  1103,
    1105,  1104,  1106,  1107,  1107,  1108,  1108,  1109,  1110,  1110,
    1111,  1112,  1112,  1113,  1113,  1114,  1114,  1115,  1115,  1117,
    1116,  1118,  1118,  1118,  1118,  1118,  1119,  1120,  1120,  1121,
    1121,  1121,  1121,  1121,  1122,  1123,  1123,  1124,  1124,  1124,
    1125,  1125,  1125,  1125,  1126,  1127,  1127,  1128,  1129,  1130,
    1130,  1132,  1131,  1133,  1134,  1134,  1135,  1135,  1135,  1135,
    1136,  1136,  1137,  1137,  1138,  1138,  1139,  1140,  1140,  1141,
    1141,  1142,  1142,  1143,  1143,  1144,  1145,  1145,  1146,  1146,
    1147,  1148,  1148,  1149,  1149,  1150,  1151,  1151,  1152,  1152,
    1153,  1153,  1154,  1154,  1154,  1155,  1156,  1157,  1157,  1157,
    1158,  1159,  1160,  1161,  1161,  1162,  1162,  1163,  1163,  1164,
    1165,  1167,  1166,  1168,  1168,  1168,  1169,  1169,  1169,  1169,
    1169,  1169,  1169,  1169,  1169,  1169,  1169,  1169,  1169,  1169,
    1169,  1169,  1169,  1169,  1169,  1169,  1169,  1169,  1169,  1169,
    1170,  1170,  1171,  1171,  1172,  1172,  1173,  1174,  1175,  1175,
    1176,  1176,  1176,  1177,  1177,  1177,  1178,  1178,  1178,  1179,
    1179,  1180,  1180,  1180,  1181,  1181,  1182,  1182,  1182,  1182,
    1182,  1182,  1183,  1183,  1184,  1185,  1186,  1187,  1187,  1188,
    1189,  1190,  1190,  1191,  1192,  1192,  1193,  1194,  1194,  1194,
    1195,  1196,  1196,  1197,  1198,  1199,  1199,  1200,  1201,  1201,
    1202,  1203,  1204,  1204,  1205,  1205,  1205,  1206,  1206,  1207,
    1207,  1208,  1208,  1208,  1208,  1208,  1208,  1208,  1208,  1208,
    1208,  1209,  1209,  1210,  1210,  1210,  1211,  1211,  1211,  1211,
    1211,  1211,  1211,  1212,  1212,  1213,  1213,  1214,  1214,  1215,
    1215,  1216,  1216,  1217,  1217,  1217,  1218,  1218,  1218,  1219,
    1219,  1220,  1220,  1221,  1221,  1221,  1222,  1223,  1224,  1224,
    1225,  1226,  1226,  1226,  1226,  1227,  1228,  1228,  1228,  1228,
    1229,  1229,  1230,  1231,  1231,  1232,  1233,  1234,  1235,  1235,
    1235,  1235,  1235,  1235,  1235,  1236,  1236,  1237,  1237,  1238,
    1238,  1238,  1238,  1238,  1238,  1238,  1239,  1239,  1239,  1239,
    1239,  1239,  1239,  1239,  1239,  1239,  1239,  1239,  1240,  1240,
    1241,  1241,  1241,  1242,  1242,  1242,  1242,  1243,  1243,  1243,
    1244,  1244,  1244,  1245,  1245,  1245,  1246,  1246,  1247,  1247,
    1248,  1248,  1249,  1249,  1250,  1251,  1251,  1252,  1252,  1253,
    1253,  1254,  1254,  1255,  1255,  1256,  1256,  1256,  1257,  1257,
    1258,  1258,  1258,  1259,  1259,  1260,  1260,  1261,  1261,  1261,
    1261,  1261,  1261,  1261,  1261,  1262,  1262,  1263,  1263,  1263,
    1263,  1263,  1263,  1263,  1263,  1263,  1263,  1263,  1263,  1263,
    1263,  1263,  1263,  1263,  1263,  1263,  1263,  1263,  1263,  1263,
    1263,  1263,  1263,  1263,  1263,  1263,  1263,  1263,  1263,  1263,
    1263,  1263,  1263,  1263,  1263,  1263,  1263,  1263,  1263,  1263,
    1263,  1263,  1263,  1263,  1263,  1263,  1263,  1263,  1263,  1263,
    1263,  1263,  1263,  1263,  1263,  1263,  1263,  1263,  1263,  1263,
    1263,  1263,  1263,  1263,  1263,  1263,  1263,  1264,  1264,  1265,
    1265,  1266,  1266,  1267,  1267,  1268,  1268,  1269,  1269,  1270,
    1270,  1271,  1271,  1272,  1272,  1273,  1273,  1274,  1274,  1275,
    1275,  1276,  1276,  1277,  1277,  1278,  1278,  1279,  1279,  1280,
    1280,  1281,  1281,  1282,  1282,  1282,  1283,  1283,  1284,  1284,
    1285,  1285,  1286,  1286,  1287,  1287,  1287,  1288,  1288,  1289,
    1289,  1289,  1290,  1290,  1290,  1291,  1291,  1291,  1292,  1292,
    1293,  1293,  1294,  1294,  1295,  1295,  1295,  1296,  1296,  1297,
    1297,  1298,  1298,  1298,  1298,  1299,  1299,  1300,  1300,  1301,
    1301,  1302,  1302,  1303,  1303,  1304,  1304,  1305,  1305,  1306,
    1306,  1306,  1307,  1307,  1308,  1308,  1309,  1309,  1310,  1310,
    1311,  1311,  1312,  1312,  1313,  1313,  1314,  1314,  1314,  1315,
    1315,  1316,  1316,  1317,  1317,  1318,  1318,  1319,  1319,  1320,
    1320,  1321,  1321,  1322,  1322,  1323,  1323,  1324,  1324,  1325,
    1325,  1326,  1326,  1327,  1327,  1328,  1328,  1329,  1329,  1330,
    1330,  1331,  1331,  1332,  1332,  1333,  1333,  1333,  1334,  1334,
    1335,  1335,  1336,  1336,  1337,  1337,  1338,  1338,  1339,  1339,
    1340,  1340,  1341,  1341
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     2,     1,     1,
       0,     2,     4,     4,     3,     0,     1,     2,     0,     1,
       3,     0,     1,     3,     0,     0,     0,    20,     0,     7,
       5,     1,     1,     0,     2,     0,     3,     1,     2,     1,
       1,     1,     1,     0,     3,     0,     3,     0,     2,     1,
       1,     1,     1,     1,     0,     4,     0,     3,     0,     3,
       0,     4,     0,     2,     3,     2,     1,     2,     1,     1,
       1,     1,     5,     3,     3,     4,     1,     1,     1,     1,
       1,     2,     0,     4,     0,     2,     3,     1,     2,     3,
       3,     3,     1,     1,     0,     2,     1,     2,     2,     2,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     3,     2,     3,     3,
       1,     0,     1,     1,     3,     4,     0,     5,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     3,     0,     4,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     0,     2,     3,     1,     2,     3,     1,     2,     1,
       2,     4,     1,     2,     1,     3,     4,     5,     0,     3,
       3,     5,     3,     4,     3,     3,     0,     3,     0,     2,
       0,     2,     0,     2,     0,     6,     3,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     5,     5,     5,     5,     1,     1,     1,
       1,     0,     3,     0,     1,     1,     1,     1,     0,     1,
       1,     4,     1,     1,     1,     7,     0,     4,     3,     3,
       4,     0,     1,     1,     0,     5,     2,     2,     1,     0,
       4,     5,     2,     3,     1,     1,     3,     1,     2,     4,
       4,     4,     1,     3,     4,     4,     3,     1,     1,     3,
       2,     2,     2,     0,     2,     3,     1,     2,     1,     1,
       5,     0,     1,     1,     1,     0,     6,     1,     2,     2,
       0,     2,     0,     3,     0,     3,     0,     2,     2,     0,
       5,     3,     1,     1,     0,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     0,     1,
       1,     4,     6,     9,     0,     3,     0,     2,     0,     2,
       3,     5,     5,     1,     1,     1,     1,     3,     5,     0,
       2,     1,     1,     1,     4,     2,     2,     4,     3,     2,
       2,     2,     1,     2,     0,     0,     5,     0,     0,     2,
       2,     3,     2,     1,     0,     4,     3,     2,     0,     1,
       1,     1,     0,     2,     1,     2,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     2,     2,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     0,     2,     2,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     6,
       0,     2,     7,     8,     0,     2,     0,     2,     0,     3,
       0,     3,     0,     1,     1,     0,     5,     1,     1,     0,
       3,     1,     2,     1,     2,     2,     3,     1,     0,     5,
       1,     2,     1,     3,     0,     4,     2,     4,     2,     2,
       0,     0,     5,     0,     0,     5,     0,     0,     5,     0,
       2,     0,     6,     0,     2,     2,     2,     3,     1,     1,
       2,     2,     1,     2,     4,     1,     4,     2,     0,     2,
       1,     1,     1,     1,     1,     3,     4,     4,     4,     3,
       0,     2,     0,     5,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     2,     1,     2,     1,     1,
       0,     2,     2,     0,     2,     4,     4,     0,     3,     1,
       1,     3,     6,     2,     3,     2,     2,     3,     2,     1,
       2,     2,     1,     1,     1,     2,     2,     1,     4,     2,
       3,     0,     0,     5,     0,     1,     2,     3,     1,     0,
       4,     3,     0,     2,     2,     2,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     1,     5,     5,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     1,
       2,     1,     2,     1,     1,     1,     1,     0,     1,     1,
       0,     1,     1,     3,     2,     0,     0,     0,     9,     0,
       4,     0,     0,     3,     0,     3,     1,     2,     4,     0,
       2,     2,     0,     3,     3,     4,     4,     3,     0,     1,
       0,     2,     0,     0,     7,     0,     2,     1,     1,     2,
       1,     1,     0,     6,     0,     2,     2,     1,     0,     1,
       0,     0,     3,     0,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     0,     4,     0,
       4,     3,     3,     4,     3,     4,     3,     3,     4,     4,
       3,     4,     3,     4,     5,     3,     4,     3,     3,     1,
       1,     0,     1,     1,     2,     1,     1,     1,     2,     1,
       2,     2,     2,     2,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     1,     1,     1,     4,     3,     1,     2,     1,
       1,     3,     3,     3,     3,     3,     1,     1,     0,     1,
       0,     4,     4,     5,     6,     0,     2,     0,     1,     0,
       3,     3,     4,     0,     2,     0,     3,     1,     2,     4,
       0,     2,     0,     4,     6,     0,     1,     1,     1,     0,
       0,     3,     1,     2,     2,     3,     0,     2,     2,     2,
       0,     3,     2,     4,     1,     1,     1,     1,     0,     2,
       2,     0,     2,     0,     1,     0,     3,     1,     2,     0,
       3,     2,     3,     0,     1,     3,     3,     2,     0,     4,
       4,     0,     1,     1,     1,     0,     4,     3,     2,     1,
       2,     0,     1,     0,     4,     3,     3,     3,     3,     2,
       2,     1,     1,     2,     0,     3,     1,     1,     1,     2,
       1,     2,     1,     1,     2,     2,     2,     2,     2,     1,
       1,     1,     2,     2,     1,     1,     2,     2,     1,     1,
       1,     1,     3,     1,     3,     3,     3,     3,     0,     1,
       0,     4,     4,     6,     6,     8,     8,     0,     1,     0,
       3,     2,     0,     4,     2,     1,     3,     1,     1,     1,
       2,     1,     1,     2,     2,     3,     2,     3,     1,     3,
       2,     1,     1,     1,     0,     2,     0,     1,     0,     3,
       0,     2,     1,     2,     1,     1,     1,     0,     2,     0,
       3,     1,     0,     3,     1,     0,     3,     3,     0,     3,
       2,     0,     6,     3,     2,     1,     0,     1,     0,     3,
       5,     0,     2,     0,     3,     3,     0,     2,     1,     2,
       4,     1,     1,     1,     1,     1,     1,     1,     0,     3,
       0,     3,     1,     2,     0,     3,     2,     1,     1,     1,
       2,     1,     1,     1,     0,     3,     2,     5,     1,     2,
       2,     2,     1,     1,     1,     2,     1,     2,     4,     2,
       0,     1,     1,     1,     1,     4,     0,     2,     3,     3,
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
       1,     1,     4,     3,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     4,     3,     4,     1,     2,     3,
       1,     2,     3,     3,     0,     3,     0,     7,     0,     5,
       0,     2,     0,     2,     0,     3,     0,     2,     4,     0,
       2,     4,     0,     4,     4,     0,     3,     0,     4,     1,
       1,     1,     2,     2,     2,     2,     1,     1,     2,     1,
       0,     1,     0,     4,     2,     0,     2,     4,     4,     0,
       1,     1,     1,     1,     1,     0,     4,     5,     1,     2,
       1,     3,     3,     0,     4,     0,     1,     0,     4,     4,
       6,     6,     0,     1,     2,     0,     1,     0,     3,     1,
       2,     0,     3,     5,     0,     3,     2,     0,     1,     1,
       0,     4,     6,     0,     3,     1,     3,     2,     2,     2,
       3,     0,     3,     0,     3,     0,     3,     0,     1,     0,
       3,     1,     1,     1,     1,     1,     7,     0,     1,     1,
       1,     1,     1,     1,     4,     1,     2,     1,     2,     3,
       0,     1,     2,     1,     3,     1,     1,     4,     1,     1,
       1,     0,     4,     5,     0,     2,     0,     4,     3,     3,
       1,     1,     1,     1,     0,     1,     2,     0,     2,     1,
       1,     0,     2,     1,     1,     2,     0,     2,     0,     2,
       2,     0,     2,     0,     2,     2,     0,     2,     0,     2,
       2,     1,     2,     1,     1,     2,     2,     2,     1,     1,
       2,     2,     2,     0,     2,     0,     2,     0,     2,     1,
       1,     0,     2,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     3,
       0,     1,     1,     3,     3,     1,     3,     3,     1,     3,
       1,     2,     2,     1,     3,     1,     1,     3,     1,     3,
       1,     3,     1,     2,     2,     1,     1,     1,     2,     1,
       1,     1,     2,     1,     0,     2,     1,     1,     1,     3,
       1,     1,     2,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     3,     0,     1,     1,
       2,     1,     1,     1,     1,     2,     2,     2,     4,     3,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
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
       1,     1,     1,     1,     1,     1,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     2,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     2,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     1,     0,     1,     0,
       1,     1,     0,     1,     1,     0,     2,     2,     0,     1,
       0,     1,     0,     1,     0,     1,     1,     0,     1,     0,
       1,     0,     2,     1,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     2,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     1,     0,
       1,     0,     3,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     2,     1,     3,     2,     1,     1,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     2
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
#line 1609 "parser.y" /* yacc.c:1646  */
    {
	clear_initial_values ();
	current_program = NULL;
	cobc_cs_check = 0;
	prog_end = 0;
	depth = 0;
	main_flag_set = 0;
	current_program = cb_build_program (NULL, 0);
	cb_build_registers ();
  }
#line 6444 "parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 1620 "parser.y" /* yacc.c:1646  */
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
#line 6467 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 1656 "parser.y" /* yacc.c:1646  */
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
#line 6491 "parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 1711 "parser.y" /* yacc.c:1646  */
    {
	char	*s;

	if (CB_LITERAL_P ((yyvsp[-1]))) {
		s = (char *)(CB_LITERAL ((yyvsp[-1]))->data);
	} else {
		s = (char *)(CB_NAME ((yyvsp[-1])));
	}
	if (depth) {
		depth--;
	}
	if (strcmp (stack_progid[depth], s)) {
		cb_error (_("END PROGRAM '%s' is different to PROGRAM-ID '%s'"),
			s, stack_progid[depth]);
	}
	if (!current_program->flag_validated) {
		current_program->flag_validated = 1;
		cb_validate_program_body (current_program);
	}
  }
#line 6516 "parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 1740 "parser.y" /* yacc.c:1646  */
    {
	char	*s;

	if (CB_LITERAL_P ((yyvsp[-1]))) {
		s = (char *)(CB_LITERAL ((yyvsp[-1]))->data);
	} else {
		s = (char *)(CB_NAME ((yyvsp[-1])));
	}
	if (depth) {
		depth--;
	}
	if (strcmp (stack_progid[depth], s)) {
		cb_error (_("END FUNCTION '%s' is different to FUNCTION-ID '%s'"),
			s, stack_progid[depth]);
	}
	if (!current_program->flag_validated) {
		current_program->flag_validated = 1;
		cb_validate_program_body (current_program);
	}
  }
#line 6541 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 1773 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_environment (current_program);
  }
#line 6549 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 1779 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_WORKING;
  }
#line 6557 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 1787 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_data (current_program);
  }
#line 6565 "parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 1797 "parser.y" /* yacc.c:1646  */
    {
	current_section = NULL;
	current_paragraph = NULL;
	if (CB_LITERAL_P ((yyvsp[-1]))) {
		stack_progid[depth] = (char *)(CB_LITERAL ((yyvsp[-1]))->data);
	} else {
		stack_progid[depth] = (char *)(CB_NAME ((yyvsp[-1])));
	}
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
		YYABORT;
	}
	current_program->program_id = cb_build_program_id ((yyvsp[-1]), (yyvsp[0]), 0);
	current_program->prog_type = CB_PROGRAM_TYPE;
	if (!main_flag_set) {
		main_flag_set = 1;
		current_program->flag_main = !!cobc_flag_main;
	}
  }
#line 6600 "parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 1828 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 6608 "parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 1835 "parser.y" /* yacc.c:1646  */
    {
	current_section = NULL;
	current_paragraph = NULL;
	if (CB_LITERAL_P ((yyvsp[-2]))) {
		stack_progid[depth] = (char *)(CB_LITERAL ((yyvsp[-2]))->data);
	} else {
		stack_progid[depth] = (char *)(CB_NAME ((yyvsp[-2])));
	}
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
		YYABORT;
	}
	current_program->program_id = cb_build_program_id ((yyvsp[-2]), (yyvsp[-1]), 1);
	current_program->prog_type = CB_FUNCTION_TYPE;
	current_program->flag_recursive = 1;
	cobc_cs_check = 0;
  }
#line 6641 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 1871 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 6647 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 1872 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6653 "parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 1881 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 6666 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 1890 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 6679 "parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 1904 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_initial = 1;
  }
#line 6687 "parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 1908 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_recursive = 1;
  }
#line 6695 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 1918 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
#line 6703 "parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 1927 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_CONFIGURATION_SECTION;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "CONFIGURATION SECTION");
	}
  }
#line 6715 "parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 1952 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("SOURCE-COMPUTER", SYN_CLAUSE_1, &check_comp_duplicate);
	if (warningopt && (check_comp_duplicate & SYN_CLAUSE_2)) {
		cb_warning (_("Phrases in non-standard order"));
	}
  }
#line 6728 "parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 1970 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_debugging_line, "DEBUGGING MODE");
	current_program->flag_debugging = 1;
	needs_debug_item = 1;
	cobc_cs_check = 0;
	cb_build_debug_item ();
  }
#line 6740 "parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 1983 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2, &check_comp_duplicate);
  }
#line 6750 "parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 2012 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
#line 6758 "parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 2020 "parser.y" /* yacc.c:1646  */
    {
	current_program->collating_sequence = (yyvsp[0]);
  }
#line 6766 "parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 2027 "parser.y" /* yacc.c:1646  */
    {
	/* Ignore */
  }
#line 6774 "parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 2034 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->classification) {
		cb_error (_("Duplicate CLASSIFICATION clause"));
	} else {
		current_program->classification = (yyvsp[0]);
	}
  }
#line 6786 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 2045 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 6794 "parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 2049 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 6802 "parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 2053 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 6810 "parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 2057 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 6818 "parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 2071 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  }
#line 6827 "parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 2076 "parser.y" /* yacc.c:1646  */
    {
	cobc_in_repository = 0;
  }
#line 6835 "parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 2084 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 6843 "parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 2096 "parser.y" /* yacc.c:1646  */
    {
	functions_are_all = 1;
  }
#line 6851 "parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 2100 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	if ((yyvsp[0])) {
		x = (yyvsp[0]);
	} else {
		x = (yyvsp[-1]);
	}
	current_program->user_spec_list =
		cb_list_add (current_program->user_spec_list, x);
  }
#line 6867 "parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 2121 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 6875 "parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 2125 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 6883 "parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 2132 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 6892 "parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 2137 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 6901 "parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 2148 "parser.y" /* yacc.c:1646  */
    {
	check_duplicate = 0;
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	header_check |= COBC_HD_SPECIAL_NAMES;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	}
  }
#line 6915 "parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 2162 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	yyerrok;
  }
#line 6924 "parser.c" /* yacc.c:1646  */
    break;

  case 115:
#line 2193 "parser.y" /* yacc.c:1646  */
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
#line 6952 "parser.c" /* yacc.c:1646  */
    break;

  case 117:
#line 2221 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_DEVICE_CONSOLE) {
			cb_error_x (save_tree, _("Invalid CRT clause"));
		} else {
			current_program->flag_console_is_crt = 1;
		}
	}
  }
#line 6966 "parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 2231 "parser.y" /* yacc.c:1646  */
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
#line 6983 "parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 2244 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree && CB_VALID_TREE ((yyvsp[-1]))) {
		cb_define ((yyvsp[-1]), save_tree);
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
				(yyvsp[-1]), save_tree);
	}
  }
#line 6995 "parser.c" /* yacc.c:1646  */
    break;

  case 123:
#line 2260 "parser.y" /* yacc.c:1646  */
    {
	  check_on_off_duplicate = 0;
  }
#line 7003 "parser.c" /* yacc.c:1646  */
    break;

  case 124:
#line 2267 "parser.y" /* yacc.c:1646  */
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
#line 7022 "parser.c" /* yacc.c:1646  */
    break;

  case 125:
#line 2282 "parser.y" /* yacc.c:1646  */
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
#line 7041 "parser.c" /* yacc.c:1646  */
    break;

  case 126:
#line 2302 "parser.y" /* yacc.c:1646  */
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
#line 7058 "parser.c" /* yacc.c:1646  */
    break;

  case 127:
#line 2315 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		current_program->alphabet_name_list =
			cb_list_add (current_program->alphabet_name_list, (yyvsp[-2]));
	}
	cobc_cs_check = 0;
  }
#line 7070 "parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 2326 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
#line 7080 "parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 2332 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 7090 "parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 2338 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 7100 "parser.c" /* yacc.c:1646  */
    break;

  case 131:
#line 2344 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
#line 7110 "parser.c" /* yacc.c:1646  */
    break;

  case 132:
#line 2350 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 7120 "parser.c" /* yacc.c:1646  */
    break;

  case 133:
#line 2356 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[0]);
	}
  }
#line 7131 "parser.c" /* yacc.c:1646  */
    break;

  case 134:
#line 2366 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 7139 "parser.c" /* yacc.c:1646  */
    break;

  case 135:
#line 2370 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 7147 "parser.c" /* yacc.c:1646  */
    break;

  case 136:
#line 2377 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7155 "parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 2381 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 7163 "parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 2385 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[-1]));
  }
#line 7171 "parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 2389 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 7179 "parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 2396 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 7187 "parser.c" /* yacc.c:1646  */
    break;

  case 141:
#line 2400 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-3]), (yyvsp[0]));
  }
#line 7195 "parser.c" /* yacc.c:1646  */
    break;

  case 142:
#line 2406 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 7201 "parser.c" /* yacc.c:1646  */
    break;

  case 143:
#line 2407 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 7207 "parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 2408 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 7213 "parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 2409 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 7219 "parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 2410 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_high; }
#line 7225 "parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 2411 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_low; }
#line 7231 "parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 2415 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 7237 "parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 2416 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 7243 "parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 2424 "parser.y" /* yacc.c:1646  */
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
#line 7258 "parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 2438 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7266 "parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 2442 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7274 "parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 2450 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7282 "parser.c" /* yacc.c:1646  */
    break;

  case 154:
#line 2457 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7290 "parser.c" /* yacc.c:1646  */
    break;

  case 155:
#line 2461 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
	} else {
		(yyval) = (yyvsp[-1]);
	}
  }
#line 7302 "parser.c" /* yacc.c:1646  */
    break;

  case 156:
#line 2472 "parser.y" /* yacc.c:1646  */
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
#line 7323 "parser.c" /* yacc.c:1646  */
    break;

  case 157:
#line 2492 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = NULL;
	} else {
		(yyval) = CB_LIST_INIT ((yyvsp[0]));
	}
  }
#line 7335 "parser.c" /* yacc.c:1646  */
    break;

  case 158:
#line 2500 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = (yyvsp[-1]);
	} else {
		(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
	}
  }
#line 7347 "parser.c" /* yacc.c:1646  */
    break;

  case 159:
#line 2510 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 7353 "parser.c" /* yacc.c:1646  */
    break;

  case 160:
#line 2511 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 7359 "parser.c" /* yacc.c:1646  */
    break;

  case 161:
#line 2518 "parser.y" /* yacc.c:1646  */
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
#line 7381 "parser.c" /* yacc.c:1646  */
    break;

  case 162:
#line 2538 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 7387 "parser.c" /* yacc.c:1646  */
    break;

  case 163:
#line 2539 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 7393 "parser.c" /* yacc.c:1646  */
    break;

  case 164:
#line 2544 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7401 "parser.c" /* yacc.c:1646  */
    break;

  case 165:
#line 2548 "parser.y" /* yacc.c:1646  */
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
#line 7421 "parser.c" /* yacc.c:1646  */
    break;

  case 166:
#line 2569 "parser.y" /* yacc.c:1646  */
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
#line 7443 "parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 2592 "parser.y" /* yacc.c:1646  */
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
#line 7524 "parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 2673 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7532 "parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 2677 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7540 "parser.c" /* yacc.c:1646  */
    break;

  case 170:
#line 2686 "parser.y" /* yacc.c:1646  */
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
#line 7557 "parser.c" /* yacc.c:1646  */
    break;

  case 171:
#line 2705 "parser.y" /* yacc.c:1646  */
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
#line 7572 "parser.c" /* yacc.c:1646  */
    break;

  case 172:
#line 2721 "parser.y" /* yacc.c:1646  */
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
#line 7588 "parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 2739 "parser.y" /* yacc.c:1646  */
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
#line 7604 "parser.c" /* yacc.c:1646  */
    break;

  case 174:
#line 2757 "parser.y" /* yacc.c:1646  */
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
#line 7620 "parser.c" /* yacc.c:1646  */
    break;

  case 175:
#line 2774 "parser.y" /* yacc.c:1646  */
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
#line 7636 "parser.c" /* yacc.c:1646  */
    break;

  case 177:
#line 2791 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
#line 7645 "parser.c" /* yacc.c:1646  */
    break;

  case 179:
#line 2799 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
#line 7655 "parser.c" /* yacc.c:1646  */
    break;

  case 181:
#line 2808 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  }
#line 7665 "parser.c" /* yacc.c:1646  */
    break;

  case 184:
#line 2823 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION,
			       COBC_HD_FILE_CONTROL, 0);
	check_duplicate = 0;
	if (CB_INVALID_TREE ((yyvsp[0]))) {
		YYERROR;
	}

	/* Build new file */
	current_file = build_file ((yyvsp[0]));
	current_file->optional = CB_INTEGER ((yyvsp[-1]))->val;

	/* Add file to current program list */
	CB_ADD_TO_CHAIN (CB_TREE (current_file), current_program->file_list);
  }
#line 7686 "parser.c" /* yacc.c:1646  */
    break;

  case 185:
#line 2840 "parser.y" /* yacc.c:1646  */
    {
	validate_file (current_file, (yyvsp[-3]));
  }
#line 7694 "parser.c" /* yacc.c:1646  */
    break;

  case 186:
#line 2844 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	current_file = NULL;
	if (current_program->file_list) {
		current_program->file_list = CB_CHAIN (current_program->file_list);
	}
  }
#line 7706 "parser.c" /* yacc.c:1646  */
    break;

  case 202:
#line 2878 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
  }
#line 7716 "parser.c" /* yacc.c:1646  */
    break;

  case 203:
#line 2884 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	if ((yyvsp[0])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	} else {
		current_file->flag_fileid = 1;
	}
  }
#line 7730 "parser.c" /* yacc.c:1646  */
    break;

  case 204:
#line 2894 "parser.y" /* yacc.c:1646  */
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
#line 7747 "parser.c" /* yacc.c:1646  */
    break;

  case 205:
#line 2907 "parser.y" /* yacc.c:1646  */
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
#line 7764 "parser.c" /* yacc.c:1646  */
    break;

  case 206:
#line 2920 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
	if ((yyvsp[0])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	} else {
		current_file->flag_ext_assign = 0;
		current_file->assign =
			cb_build_alphanumeric_literal ("LPT1", (size_t)4);
	}
  }
#line 7781 "parser.c" /* yacc.c:1646  */
    break;

  case 212:
#line 2943 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_line_adv = 1;
  }
#line 7789 "parser.c" /* yacc.c:1646  */
    break;

  case 214:
#line 2950 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_ext_assign = 1;
  }
#line 7797 "parser.c" /* yacc.c:1646  */
    break;

  case 218:
#line 2963 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7805 "parser.c" /* yacc.c:1646  */
    break;

  case 221:
#line 2975 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2, &check_duplicate);
  }
#line 7814 "parser.c" /* yacc.c:1646  */
    break;

  case 222:
#line 2982 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
#line 7820 "parser.c" /* yacc.c:1646  */
    break;

  case 223:
#line 2983 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_DYNAMIC; }
#line 7826 "parser.c" /* yacc.c:1646  */
    break;

  case 224:
#line 2984 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_RANDOM; }
#line 7832 "parser.c" /* yacc.c:1646  */
    break;

  case 225:
#line 2992 "parser.y" /* yacc.c:1646  */
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
#line 7857 "parser.c" /* yacc.c:1646  */
    break;

  case 226:
#line 3015 "parser.y" /* yacc.c:1646  */
    { }
#line 7863 "parser.c" /* yacc.c:1646  */
    break;

  case 227:
#line 3018 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("SUPPRESS WHEN ALL");
  }
#line 7871 "parser.c" /* yacc.c:1646  */
    break;

  case 228:
#line 3023 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("SUPPRESS WHEN SPACE/ZERO");
  }
#line 7879 "parser.c" /* yacc.c:1646  */
    break;

  case 229:
#line 3033 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3, &check_duplicate);
	PENDING ("COLLATING SEQUENCE");
  }
#line 7888 "parser.c" /* yacc.c:1646  */
    break;

  case 230:
#line 3044 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("STATUS", SYN_CLAUSE_4, &check_duplicate);
	current_file->file_status = (yyvsp[0]);
  }
#line 7897 "parser.c" /* yacc.c:1646  */
    break;

  case 234:
#line 3059 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LOCK", SYN_CLAUSE_5, &check_duplicate);
  }
#line 7905 "parser.c" /* yacc.c:1646  */
    break;

  case 236:
#line 3067 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  }
#line 7914 "parser.c" /* yacc.c:1646  */
    break;

  case 237:
#line 3072 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  }
#line 7923 "parser.c" /* yacc.c:1646  */
    break;

  case 238:
#line 3077 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  }
#line 7932 "parser.c" /* yacc.c:1646  */
    break;

  case 241:
#line 3086 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
#line 7940 "parser.c" /* yacc.c:1646  */
    break;

  case 242:
#line 3090 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
	PENDING ("WITH ROLLBACK");
  }
#line 7949 "parser.c" /* yacc.c:1646  */
    break;

  case 245:
#line 3106 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_INDEXED;
  }
#line 7958 "parser.c" /* yacc.c:1646  */
    break;

  case 246:
#line 3111 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
#line 7967 "parser.c" /* yacc.c:1646  */
    break;

  case 247:
#line 3116 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_RELATIVE;
  }
#line 7976 "parser.c" /* yacc.c:1646  */
    break;

  case 248:
#line 3121 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
#line 7985 "parser.c" /* yacc.c:1646  */
    break;

  case 249:
#line 3132 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PADDING", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
#line 7994 "parser.c" /* yacc.c:1646  */
    break;

  case 250:
#line 3143 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8, &check_duplicate);
  }
#line 8002 "parser.c" /* yacc.c:1646  */
    break;

  case 251:
#line 3153 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9, &check_duplicate);
	current_file->key = (yyvsp[0]);
  }
#line 8011 "parser.c" /* yacc.c:1646  */
    break;

  case 252:
#line 3160 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8017 "parser.c" /* yacc.c:1646  */
    break;

  case 253:
#line 3161 "parser.y" /* yacc.c:1646  */
    { PENDING ("SPLIT KEYS"); }
#line 8023 "parser.c" /* yacc.c:1646  */
    break;

  case 254:
#line 3162 "parser.y" /* yacc.c:1646  */
    { PENDING ("SPLIT KEYS"); }
#line 8029 "parser.c" /* yacc.c:1646  */
    break;

  case 255:
#line 3169 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10, &check_duplicate);
	current_file->key = (yyvsp[0]);
  }
#line 8038 "parser.c" /* yacc.c:1646  */
    break;

  case 256:
#line 3180 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11, &check_duplicate);
  }
#line 8046 "parser.c" /* yacc.c:1646  */
    break;

  case 259:
#line 3194 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SHARING", SYN_CLAUSE_12, &check_duplicate);
	current_file->sharing = (yyvsp[0]);
  }
#line 8055 "parser.c" /* yacc.c:1646  */
    break;

  case 260:
#line 3201 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8061 "parser.c" /* yacc.c:1646  */
    break;

  case 261:
#line 3202 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 8067 "parser.c" /* yacc.c:1646  */
    break;

  case 262:
#line 3203 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8073 "parser.c" /* yacc.c:1646  */
    break;

  case 265:
#line 3212 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 8081 "parser.c" /* yacc.c:1646  */
    break;

  case 270:
#line 3231 "parser.y" /* yacc.c:1646  */
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
#line 8110 "parser.c" /* yacc.c:1646  */
    break;

  case 271:
#line 3258 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 8116 "parser.c" /* yacc.c:1646  */
    break;

  case 272:
#line 3259 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 8122 "parser.c" /* yacc.c:1646  */
    break;

  case 273:
#line 3260 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 8128 "parser.c" /* yacc.c:1646  */
    break;

  case 274:
#line 3261 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 8134 "parser.c" /* yacc.c:1646  */
    break;

  case 275:
#line 3268 "parser.y" /* yacc.c:1646  */
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
#line 8143 "parser.c" /* yacc.c:1646  */
    break;

  case 276:
#line 3273 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	cb_verify (cb_multiple_file_tape_clause, "MULTIPLE FILE TAPE");
	cobc_cs_check = 0;
  }
#line 8155 "parser.c" /* yacc.c:1646  */
    break;

  case 283:
#line 3300 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_DATA_DIVISION;
  }
#line 8163 "parser.c" /* yacc.c:1646  */
    break;

  case 285:
#line 3309 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
#line 8173 "parser.c" /* yacc.c:1646  */
    break;

  case 288:
#line 3323 "parser.y" /* yacc.c:1646  */
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
#line 8191 "parser.c" /* yacc.c:1646  */
    break;

  case 289:
#line 3342 "parser.y" /* yacc.c:1646  */
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
#line 8211 "parser.c" /* yacc.c:1646  */
    break;

  case 291:
#line 3359 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 8219 "parser.c" /* yacc.c:1646  */
    break;

  case 292:
#line 3366 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8227 "parser.c" /* yacc.c:1646  */
    break;

  case 293:
#line 3370 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 8235 "parser.c" /* yacc.c:1646  */
    break;

  case 296:
#line 3381 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("EXTERNAL", SYN_CLAUSE_1, &check_duplicate);
#if	0	/* RXWRXW - Global/External */
	if (current_file->flag_global) {
		cb_error (_("File cannot have both EXTERNAL and GLOBAL clauses"));
	}
#endif
	current_file->flag_external = 1;
  }
#line 8249 "parser.c" /* yacc.c:1646  */
    break;

  case 297:
#line 3391 "parser.y" /* yacc.c:1646  */
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
#line 8268 "parser.c" /* yacc.c:1646  */
    break;

  case 307:
#line 3421 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3, &check_duplicate);
	/* ignore */
  }
#line 8277 "parser.c" /* yacc.c:1646  */
    break;

  case 311:
#line 3434 "parser.y" /* yacc.c:1646  */
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
#line 8301 "parser.c" /* yacc.c:1646  */
    break;

  case 312:
#line 3454 "parser.y" /* yacc.c:1646  */
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
#line 8339 "parser.c" /* yacc.c:1646  */
    break;

  case 313:
#line 3489 "parser.y" /* yacc.c:1646  */
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
#line 8371 "parser.c" /* yacc.c:1646  */
    break;

  case 315:
#line 3520 "parser.y" /* yacc.c:1646  */
    {
	current_file->record_depending = (yyvsp[0]);
  }
#line 8379 "parser.c" /* yacc.c:1646  */
    break;

  case 316:
#line 3526 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8385 "parser.c" /* yacc.c:1646  */
    break;

  case 317:
#line 3527 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8391 "parser.c" /* yacc.c:1646  */
    break;

  case 318:
#line 3531 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8397 "parser.c" /* yacc.c:1646  */
    break;

  case 319:
#line 3532 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8403 "parser.c" /* yacc.c:1646  */
    break;

  case 320:
#line 3540 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LABEL", SYN_CLAUSE_5, &check_duplicate);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
#line 8412 "parser.c" /* yacc.c:1646  */
    break;

  case 321:
#line 3551 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
#line 8421 "parser.c" /* yacc.c:1646  */
    break;

  case 322:
#line 3556 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
	if (!current_file->assign) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	}
  }
#line 8433 "parser.c" /* yacc.c:1646  */
    break;

  case 327:
#line 3579 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("DATA", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
#line 8442 "parser.c" /* yacc.c:1646  */
    break;

  case 328:
#line 3591 "parser.y" /* yacc.c:1646  */
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
#line 8461 "parser.c" /* yacc.c:1646  */
    break;

  case 334:
#line 3619 "parser.y" /* yacc.c:1646  */
    {
	current_file->latfoot = (yyvsp[0]);
  }
#line 8469 "parser.c" /* yacc.c:1646  */
    break;

  case 335:
#line 3626 "parser.y" /* yacc.c:1646  */
    {
	current_file->lattop = (yyvsp[0]);
  }
#line 8477 "parser.c" /* yacc.c:1646  */
    break;

  case 336:
#line 3633 "parser.y" /* yacc.c:1646  */
    {
	current_file->latbot = (yyvsp[0]);
  }
#line 8485 "parser.c" /* yacc.c:1646  */
    break;

  case 337:
#line 3642 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9, &check_duplicate);
	/* ignore */
  }
#line 8495 "parser.c" /* yacc.c:1646  */
    break;

  case 338:
#line 3654 "parser.y" /* yacc.c:1646  */
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
#line 8546 "parser.c" /* yacc.c:1646  */
    break;

  case 339:
#line 3706 "parser.y" /* yacc.c:1646  */
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
#line 8562 "parser.c" /* yacc.c:1646  */
    break;

  case 342:
#line 3726 "parser.y" /* yacc.c:1646  */
    {
	current_report = build_report ((yyvsp[0]));
	current_report->file = current_file;
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
#line 8576 "parser.c" /* yacc.c:1646  */
    break;

  case 343:
#line 3736 "parser.y" /* yacc.c:1646  */
    {
	current_report = build_report ((yyvsp[0]));
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
#line 8589 "parser.c" /* yacc.c:1646  */
    break;

  case 345:
#line 3751 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
#line 8599 "parser.c" /* yacc.c:1646  */
    break;

  case 346:
#line 3757 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[0])));
	}
  }
#line 8609 "parser.c" /* yacc.c:1646  */
    break;

  case 347:
#line 3766 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8617 "parser.c" /* yacc.c:1646  */
    break;

  case 348:
#line 3769 "parser.y" /* yacc.c:1646  */
    {
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 8627 "parser.c" /* yacc.c:1646  */
    break;

  case 349:
#line 3775 "parser.y" /* yacc.c:1646  */
    {
	struct cb_field *p;

	for (p = description_field; p; p = p->sister) {
		cb_validate_field (p);
	}
	(yyval) = CB_TREE (description_field);
  }
#line 8640 "parser.c" /* yacc.c:1646  */
    break;

  case 354:
#line 3795 "parser.y" /* yacc.c:1646  */
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
#line 8659 "parser.c" /* yacc.c:1646  */
    break;

  case 355:
#line 3810 "parser.y" /* yacc.c:1646  */
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
#line 8683 "parser.c" /* yacc.c:1646  */
    break;

  case 356:
#line 3830 "parser.y" /* yacc.c:1646  */
    {
	/* Free tree assocated with level number */
	cobc_parse_free ((yyvsp[-2]));
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 8697 "parser.c" /* yacc.c:1646  */
    break;

  case 357:
#line 3843 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8705 "parser.c" /* yacc.c:1646  */
    break;

  case 358:
#line 3850 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 8715 "parser.c" /* yacc.c:1646  */
    break;

  case 359:
#line 3856 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 8725 "parser.c" /* yacc.c:1646  */
    break;

  case 360:
#line 3862 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	qualifier = (yyvsp[0]);
	non_const_word = 0;
  }
#line 8735 "parser.c" /* yacc.c:1646  */
    break;

  case 361:
#line 3871 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	qualifier = (yyvsp[0]);
	non_const_word = 0;
  }
#line 8745 "parser.c" /* yacc.c:1646  */
    break;

  case 362:
#line 3880 "parser.y" /* yacc.c:1646  */
    {
	(yyval)= NULL;
  }
#line 8753 "parser.c" /* yacc.c:1646  */
    break;

  case 363:
#line 3884 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
		(yyval)= NULL;
	} else {
		(yyval) = cb_null;
	}
  }
#line 8766 "parser.c" /* yacc.c:1646  */
    break;

  case 364:
#line 3895 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8772 "parser.c" /* yacc.c:1646  */
    break;

  case 365:
#line 3896 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 8778 "parser.c" /* yacc.c:1646  */
    break;

  case 366:
#line 3897 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 8784 "parser.c" /* yacc.c:1646  */
    break;

  case 367:
#line 3898 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 8790 "parser.c" /* yacc.c:1646  */
    break;

  case 368:
#line 3903 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8798 "parser.c" /* yacc.c:1646  */
    break;

  case 369:
#line 3907 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 8806 "parser.c" /* yacc.c:1646  */
    break;

  case 370:
#line 3911 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 8814 "parser.c" /* yacc.c:1646  */
    break;

  case 371:
#line 3915 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int4;
  }
#line 8822 "parser.c" /* yacc.c:1646  */
    break;

  case 372:
#line 3919 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 8830 "parser.c" /* yacc.c:1646  */
    break;

  case 373:
#line 3923 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(long));
  }
#line 8838 "parser.c" /* yacc.c:1646  */
    break;

  case 374:
#line 3927 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(void *));
  }
#line 8846 "parser.c" /* yacc.c:1646  */
    break;

  case 375:
#line 3931 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(float));
  }
#line 8854 "parser.c" /* yacc.c:1646  */
    break;

  case 376:
#line 3935 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(double));
  }
#line 8862 "parser.c" /* yacc.c:1646  */
    break;

  case 377:
#line 3939 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (4);
  }
#line 8870 "parser.c" /* yacc.c:1646  */
    break;

  case 378:
#line 3943 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 8878 "parser.c" /* yacc.c:1646  */
    break;

  case 379:
#line 3947 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (16);
  }
#line 8886 "parser.c" /* yacc.c:1646  */
    break;

  case 380:
#line 3951 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 8898 "parser.c" /* yacc.c:1646  */
    break;

  case 390:
#line 3983 "parser.y" /* yacc.c:1646  */
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
#line 8925 "parser.c" /* yacc.c:1646  */
    break;

  case 391:
#line 4009 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8933 "parser.c" /* yacc.c:1646  */
    break;

  case 392:
#line 4013 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("CONSTANT FROM clause");
	(yyval) = NULL;
  }
#line 8942 "parser.c" /* yacc.c:1646  */
    break;

  case 393:
#line 4021 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = NULL;
  }
#line 8951 "parser.c" /* yacc.c:1646  */
    break;

  case 394:
#line 4027 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  }
#line 8960 "parser.c" /* yacc.c:1646  */
    break;

  case 409:
#line 4055 "parser.y" /* yacc.c:1646  */
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
#line 8982 "parser.c" /* yacc.c:1646  */
    break;

  case 410:
#line 4079 "parser.y" /* yacc.c:1646  */
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
#line 9010 "parser.c" /* yacc.c:1646  */
    break;

  case 411:
#line 4106 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname (current_field->name);
  }
#line 9018 "parser.c" /* yacc.c:1646  */
    break;

  case 412:
#line 4110 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[0]))->data);
  }
#line 9026 "parser.c" /* yacc.c:1646  */
    break;

  case 413:
#line 4119 "parser.y" /* yacc.c:1646  */
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
#line 9049 "parser.c" /* yacc.c:1646  */
    break;

  case 414:
#line 4144 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PICTURE", SYN_CLAUSE_4, &check_pic_duplicate);
	current_field->pic = CB_PICTURE ((yyvsp[0]));
  }
#line 9058 "parser.c" /* yacc.c:1646  */
    break;

  case 417:
#line 4160 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 9066 "parser.c" /* yacc.c:1646  */
    break;

  case 418:
#line 4164 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 9074 "parser.c" /* yacc.c:1646  */
    break;

  case 419:
#line 4168 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FLOAT);
  }
#line 9082 "parser.c" /* yacc.c:1646  */
    break;

  case 420:
#line 4172 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_DOUBLE);
  }
#line 9090 "parser.c" /* yacc.c:1646  */
    break;

  case 421:
#line 4176 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PACKED);
  }
#line 9098 "parser.c" /* yacc.c:1646  */
    break;

  case 422:
#line 4180 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 9106 "parser.c" /* yacc.c:1646  */
    break;

  case 423:
#line 4184 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_5);
  }
#line 9114 "parser.c" /* yacc.c:1646  */
    break;

  case 424:
#line 4188 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_6);
  }
#line 9122 "parser.c" /* yacc.c:1646  */
    break;

  case 425:
#line 4192 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_X);
  }
#line 9130 "parser.c" /* yacc.c:1646  */
    break;

  case 426:
#line 4196 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_DISPLAY);
  }
#line 9138 "parser.c" /* yacc.c:1646  */
    break;

  case 427:
#line 4200 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_INDEX);
  }
#line 9146 "parser.c" /* yacc.c:1646  */
    break;

  case 428:
#line 4204 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PACKED);
  }
#line 9154 "parser.c" /* yacc.c:1646  */
    break;

  case 429:
#line 4208 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 9163 "parser.c" /* yacc.c:1646  */
    break;

  case 430:
#line 4213 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 9172 "parser.c" /* yacc.c:1646  */
    break;

  case 431:
#line 4218 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 9180 "parser.c" /* yacc.c:1646  */
    break;

  case 432:
#line 4222 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 9188 "parser.c" /* yacc.c:1646  */
    break;

  case 433:
#line 4226 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
#line 9200 "parser.c" /* yacc.c:1646  */
    break;

  case 434:
#line 4234 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 9208 "parser.c" /* yacc.c:1646  */
    break;

  case 435:
#line 4238 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 9216 "parser.c" /* yacc.c:1646  */
    break;

  case 436:
#line 4242 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
#line 9228 "parser.c" /* yacc.c:1646  */
    break;

  case 437:
#line 4250 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_CHAR);
  }
#line 9236 "parser.c" /* yacc.c:1646  */
    break;

  case 438:
#line 4254 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
#line 9244 "parser.c" /* yacc.c:1646  */
    break;

  case 439:
#line 4258 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 9252 "parser.c" /* yacc.c:1646  */
    break;

  case 440:
#line 4262 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 9260 "parser.c" /* yacc.c:1646  */
    break;

  case 441:
#line 4266 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 9268 "parser.c" /* yacc.c:1646  */
    break;

  case 442:
#line 4270 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 9276 "parser.c" /* yacc.c:1646  */
    break;

  case 443:
#line 4274 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_LONG);
  }
#line 9284 "parser.c" /* yacc.c:1646  */
    break;

  case 444:
#line 4278 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
#line 9292 "parser.c" /* yacc.c:1646  */
    break;

  case 445:
#line 4282 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
#line 9304 "parser.c" /* yacc.c:1646  */
    break;

  case 446:
#line 4290 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
#line 9316 "parser.c" /* yacc.c:1646  */
    break;

  case 447:
#line 4298 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN32);
  }
#line 9324 "parser.c" /* yacc.c:1646  */
    break;

  case 448:
#line 4302 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN64);
  }
#line 9332 "parser.c" /* yacc.c:1646  */
    break;

  case 449:
#line 4306 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN128);
  }
#line 9340 "parser.c" /* yacc.c:1646  */
    break;

  case 450:
#line 4310 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_DEC64);
  }
#line 9348 "parser.c" /* yacc.c:1646  */
    break;

  case 451:
#line 4314 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_DEC128);
  }
#line 9356 "parser.c" /* yacc.c:1646  */
    break;

  case 452:
#line 4318 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("USAGE", SYN_CLAUSE_5, &check_pic_duplicate);
	PENDING ("USAGE NATIONAL");
  }
#line 9365 "parser.c" /* yacc.c:1646  */
    break;

  case 457:
#line 4338 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
#line 9375 "parser.c" /* yacc.c:1646  */
    break;

  case 458:
#line 4344 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
#line 9385 "parser.c" /* yacc.c:1646  */
    break;

  case 459:
#line 4357 "parser.y" /* yacc.c:1646  */
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
#line 9404 "parser.c" /* yacc.c:1646  */
    break;

  case 461:
#line 4375 "parser.y" /* yacc.c:1646  */
    {
	current_field->step_count = cb_get_int ((yyvsp[0]));
  }
#line 9412 "parser.c" /* yacc.c:1646  */
    break;

  case 462:
#line 4385 "parser.y" /* yacc.c:1646  */
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
#line 9447 "parser.c" /* yacc.c:1646  */
    break;

  case 463:
#line 4417 "parser.y" /* yacc.c:1646  */
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
#line 9477 "parser.c" /* yacc.c:1646  */
    break;

  case 464:
#line 4445 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9483 "parser.c" /* yacc.c:1646  */
    break;

  case 465:
#line 4446 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9489 "parser.c" /* yacc.c:1646  */
    break;

  case 466:
#line 4450 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9495 "parser.c" /* yacc.c:1646  */
    break;

  case 467:
#line 4451 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9501 "parser.c" /* yacc.c:1646  */
    break;

  case 469:
#line 4456 "parser.y" /* yacc.c:1646  */
    {
	current_field->depending = (yyvsp[0]);
  }
#line 9509 "parser.c" /* yacc.c:1646  */
    break;

  case 471:
#line 4463 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_zero, 0, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 9518 "parser.c" /* yacc.c:1646  */
    break;

  case 473:
#line 4471 "parser.y" /* yacc.c:1646  */
    {
	/* current_field->initialized = 1; */
  }
#line 9526 "parser.c" /* yacc.c:1646  */
    break;

  case 474:
#line 4478 "parser.y" /* yacc.c:1646  */
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
#line 9551 "parser.c" /* yacc.c:1646  */
    break;

  case 475:
#line 4501 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9557 "parser.c" /* yacc.c:1646  */
    break;

  case 476:
#line 4504 "parser.y" /* yacc.c:1646  */
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
#line 9574 "parser.c" /* yacc.c:1646  */
    break;

  case 477:
#line 4519 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_ASCENDING); }
#line 9580 "parser.c" /* yacc.c:1646  */
    break;

  case 478:
#line 4520 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_DESCENDING); }
#line 9586 "parser.c" /* yacc.c:1646  */
    break;

  case 480:
#line 4525 "parser.y" /* yacc.c:1646  */
    {
	current_field->index_list = (yyvsp[0]);
  }
#line 9594 "parser.c" /* yacc.c:1646  */
    break;

  case 481:
#line 4531 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 9600 "parser.c" /* yacc.c:1646  */
    break;

  case 482:
#line 4533 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 9606 "parser.c" /* yacc.c:1646  */
    break;

  case 483:
#line 4538 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 9615 "parser.c" /* yacc.c:1646  */
    break;

  case 484:
#line 4549 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("JUSTIFIED", SYN_CLAUSE_8, &check_pic_duplicate);
	current_field->flag_justified = 1;
  }
#line 9624 "parser.c" /* yacc.c:1646  */
    break;

  case 485:
#line 4560 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SYNCHRONIZED", SYN_CLAUSE_9, &check_pic_duplicate);
	current_field->flag_synchronized = 1;
  }
#line 9633 "parser.c" /* yacc.c:1646  */
    break;

  case 486:
#line 4571 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLANK", SYN_CLAUSE_10, &check_pic_duplicate);
	current_field->flag_blank_zero = 1;
  }
#line 9642 "parser.c" /* yacc.c:1646  */
    break;

  case 487:
#line 4582 "parser.y" /* yacc.c:1646  */
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
#line 9669 "parser.c" /* yacc.c:1646  */
    break;

  case 488:
#line 4610 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE", SYN_CLAUSE_12, &check_pic_duplicate);
	current_field->values = (yyvsp[0]);
  }
#line 9678 "parser.c" /* yacc.c:1646  */
    break;

  case 490:
#line 4618 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 9684 "parser.c" /* yacc.c:1646  */
    break;

  case 491:
#line 4619 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 9690 "parser.c" /* yacc.c:1646  */
    break;

  case 492:
#line 4623 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9696 "parser.c" /* yacc.c:1646  */
    break;

  case 493:
#line 4624 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0])); }
#line 9702 "parser.c" /* yacc.c:1646  */
    break;

  case 495:
#line 4629 "parser.y" /* yacc.c:1646  */
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[0]));
  }
#line 9713 "parser.c" /* yacc.c:1646  */
    break;

  case 496:
#line 4642 "parser.y" /* yacc.c:1646  */
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
#line 9730 "parser.c" /* yacc.c:1646  */
    break;

  case 497:
#line 4655 "parser.y" /* yacc.c:1646  */
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
#line 9750 "parser.c" /* yacc.c:1646  */
    break;

  case 498:
#line 4676 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY clause");
	} else {
		current_field->flag_any_length = 1;
	}
  }
#line 9763 "parser.c" /* yacc.c:1646  */
    break;

  case 499:
#line 4685 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY clause");
	} else {
		current_field->flag_any_length = 1;
		current_field->flag_any_numeric = 1;
	}
  }
#line 9777 "parser.c" /* yacc.c:1646  */
    break;

  case 501:
#line 4700 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LOCAL_STORAGE_SECTION;
	current_storage = CB_STORAGE_LOCAL;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "LOCAL-STORAGE");
	}
  }
#line 9790 "parser.c" /* yacc.c:1646  */
    break;

  case 502:
#line 4709 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->local_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 9800 "parser.c" /* yacc.c:1646  */
    break;

  case 504:
#line 4721 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
#line 9810 "parser.c" /* yacc.c:1646  */
    break;

  case 505:
#line 4727 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 9820 "parser.c" /* yacc.c:1646  */
    break;

  case 507:
#line 4738 "parser.y" /* yacc.c:1646  */
    {
	PENDING("REPORT SECTION");
	current_storage = CB_STORAGE_REPORT;
	cb_clear_real_field ();
  }
#line 9830 "parser.c" /* yacc.c:1646  */
    break;

  case 511:
#line 4754 "parser.y" /* yacc.c:1646  */
    {
	if (CB_INVALID_TREE ((yyvsp[0]))) {
		YYERROR;
	} else {
		current_report = CB_REPORT (cb_ref ((yyvsp[0])));
	}
	check_duplicate = 0;
  }
#line 9843 "parser.c" /* yacc.c:1646  */
    break;

  case 515:
#line 4769 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 9851 "parser.c" /* yacc.c:1646  */
    break;

  case 516:
#line 4776 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1, &check_duplicate);
	cb_error (_("GLOBAL is not allowed with RD"));
  }
#line 9860 "parser.c" /* yacc.c:1646  */
    break;

  case 517:
#line 4781 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CODE", SYN_CLAUSE_2, &check_duplicate);
  }
#line 9868 "parser.c" /* yacc.c:1646  */
    break;

  case 520:
#line 4792 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3, &check_duplicate);
  }
#line 9876 "parser.c" /* yacc.c:1646  */
    break;

  case 524:
#line 4811 "parser.y" /* yacc.c:1646  */
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
#line 9913 "parser.c" /* yacc.c:1646  */
    break;

  case 525:
#line 4847 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[0]));
  }
#line 9921 "parser.c" /* yacc.c:1646  */
    break;

  case 526:
#line 4851 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[-3]));
	current_report->columns = cb_get_int ((yyvsp[-1]));
  }
#line 9930 "parser.c" /* yacc.c:1646  */
    break;

  case 527:
#line 4856 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[-1]));
  }
#line 9938 "parser.c" /* yacc.c:1646  */
    break;

  case 535:
#line 4876 "parser.y" /* yacc.c:1646  */
    {
	current_report->heading = cb_get_int ((yyvsp[0]));
  }
#line 9946 "parser.c" /* yacc.c:1646  */
    break;

  case 536:
#line 4883 "parser.y" /* yacc.c:1646  */
    {
	current_report->first_detail = cb_get_int ((yyvsp[0]));
  }
#line 9954 "parser.c" /* yacc.c:1646  */
    break;

  case 537:
#line 4890 "parser.y" /* yacc.c:1646  */
    {
	current_report->last_control = cb_get_int ((yyvsp[0]));
  }
#line 9962 "parser.c" /* yacc.c:1646  */
    break;

  case 538:
#line 4897 "parser.y" /* yacc.c:1646  */
    {
	current_report->last_detail = cb_get_int ((yyvsp[0]));
  }
#line 9970 "parser.c" /* yacc.c:1646  */
    break;

  case 539:
#line 4904 "parser.y" /* yacc.c:1646  */
    {
	current_report->footing = cb_get_int ((yyvsp[0]));
  }
#line 9978 "parser.c" /* yacc.c:1646  */
    break;

  case 542:
#line 4915 "parser.y" /* yacc.c:1646  */
    {
	check_pic_duplicate = 0;
  }
#line 9986 "parser.c" /* yacc.c:1646  */
    break;

  case 562:
#line 4946 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("TYPE", SYN_CLAUSE_16, &check_pic_duplicate);
  }
#line 9994 "parser.c" /* yacc.c:1646  */
    break;

  case 575:
#line 4972 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("NEXT GROUP", SYN_CLAUSE_17, &check_pic_duplicate);
  }
#line 10002 "parser.c" /* yacc.c:1646  */
    break;

  case 576:
#line 4979 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SUM", SYN_CLAUSE_19, &check_pic_duplicate);
  }
#line 10010 "parser.c" /* yacc.c:1646  */
    break;

  case 581:
#line 4995 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
  }
#line 10018 "parser.c" /* yacc.c:1646  */
    break;

  case 583:
#line 5006 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINE", SYN_CLAUSE_21, &check_pic_duplicate);
  }
#line 10026 "parser.c" /* yacc.c:1646  */
    break;

  case 586:
#line 5018 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLUMN", SYN_CLAUSE_18, &check_pic_duplicate);
  }
#line 10034 "parser.c" /* yacc.c:1646  */
    break;

  case 598:
#line 5051 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SOURCE", SYN_CLAUSE_22, &check_pic_duplicate);
  }
#line 10042 "parser.c" /* yacc.c:1646  */
    break;

  case 599:
#line 5058 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GROUP", SYN_CLAUSE_23, &check_pic_duplicate);
  }
#line 10050 "parser.c" /* yacc.c:1646  */
    break;

  case 600:
#line 5065 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("USAGE", SYN_CLAUSE_24, &check_pic_duplicate);
  }
#line 10058 "parser.c" /* yacc.c:1646  */
    break;

  case 602:
#line 5074 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 10069 "parser.c" /* yacc.c:1646  */
    break;

  case 603:
#line 5081 "parser.y" /* yacc.c:1646  */
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
#line 10085 "parser.c" /* yacc.c:1646  */
    break;

  case 609:
#line 5106 "parser.y" /* yacc.c:1646  */
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
#line 10109 "parser.c" /* yacc.c:1646  */
    break;

  case 610:
#line 5126 "parser.y" /* yacc.c:1646  */
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
		/* Reset to last non-78 item */
		current_field = cb_validate_78_item (current_field, 0);
	}
	if (!description_field) {
		description_field = current_field;
	}
	if (current_field->flag_occurs && !has_relative_pos (current_field)) {
		cb_error ("Relative LINE/COLUMN clause required with OCCURS");
	}
  }
#line 10161 "parser.c" /* yacc.c:1646  */
    break;

  case 611:
#line 5174 "parser.y" /* yacc.c:1646  */
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
#line 10181 "parser.c" /* yacc.c:1646  */
    break;

  case 614:
#line 5197 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("BLANK LINE", COB_SCREEN_BLANK_LINE,
					 "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
#line 10190 "parser.c" /* yacc.c:1646  */
    break;

  case 615:
#line 5202 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN,
					 "BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
#line 10199 "parser.c" /* yacc.c:1646  */
    break;

  case 616:
#line 5207 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BELL", COB_SCREEN_BELL);
  }
#line 10207 "parser.c" /* yacc.c:1646  */
    break;

  case 617:
#line 5211 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
#line 10215 "parser.c" /* yacc.c:1646  */
    break;

  case 618:
#line 5215 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("ERASE EOL", COB_SCREEN_ERASE_EOL,
					 "ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
#line 10224 "parser.c" /* yacc.c:1646  */
    break;

  case 619:
#line 5220 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("ERASE EOS", COB_SCREEN_ERASE_EOS,
					 "ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
#line 10233 "parser.c" /* yacc.c:1646  */
    break;

  case 620:
#line 5225 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
					 "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 10242 "parser.c" /* yacc.c:1646  */
    break;

  case 621:
#line 5230 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("LOWLIGHT", COB_SCREEN_LOWLIGHT,
					 "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 10251 "parser.c" /* yacc.c:1646  */
    break;

  case 622:
#line 5235 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
#line 10259 "parser.c" /* yacc.c:1646  */
    break;

  case 623:
#line 5239 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
#line 10267 "parser.c" /* yacc.c:1646  */
    break;

  case 624:
#line 5243 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
	PENDING ("OVERLINE");
  }
#line 10276 "parser.c" /* yacc.c:1646  */
    break;

  case 625:
#line 5248 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("GRID", COB_SCREEN_GRID);
	PENDING ("GRID");
  }
#line 10285 "parser.c" /* yacc.c:1646  */
    break;

  case 626:
#line 5253 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
	PENDING ("LEFTLINE");
  }
#line 10294 "parser.c" /* yacc.c:1646  */
    break;

  case 627:
#line 5258 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("AUTO", COB_SCREEN_AUTO);
  }
#line 10302 "parser.c" /* yacc.c:1646  */
    break;

  case 628:
#line 5262 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("SECURE", COB_SCREEN_SECURE);
  }
#line 10310 "parser.c" /* yacc.c:1646  */
    break;

  case 629:
#line 5266 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  }
#line 10318 "parser.c" /* yacc.c:1646  */
    break;

  case 630:
#line 5270 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("FULL", COB_SCREEN_FULL);
  }
#line 10326 "parser.c" /* yacc.c:1646  */
    break;

  case 631:
#line 5274 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[0]);
  }
#line 10335 "parser.c" /* yacc.c:1646  */
    break;

  case 632:
#line 5279 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
#line 10343 "parser.c" /* yacc.c:1646  */
    break;

  case 633:
#line 5283 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
#line 10351 "parser.c" /* yacc.c:1646  */
    break;

  case 634:
#line 5287 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINE", SYN_CLAUSE_16, &check_pic_duplicate);
	current_field->screen_line = (yyvsp[0]);
  }
#line 10360 "parser.c" /* yacc.c:1646  */
    break;

  case 635:
#line 5292 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLUMN", SYN_CLAUSE_17, &check_pic_duplicate);
	current_field->screen_column = (yyvsp[0]);
  }
#line 10369 "parser.c" /* yacc.c:1646  */
    break;

  case 636:
#line 5297 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18, &check_pic_duplicate);
	current_field->screen_foreg = (yyvsp[0]);
  }
#line 10378 "parser.c" /* yacc.c:1646  */
    break;

  case 637:
#line 5302 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19, &check_pic_duplicate);
	current_field->screen_backg = (yyvsp[0]);
  }
#line 10387 "parser.c" /* yacc.c:1646  */
    break;

  case 646:
#line 5315 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));

	check_repeated ("USING", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[0]);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 10400 "parser.c" /* yacc.c:1646  */
    break;

  case 647:
#line 5324 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FROM", SYN_CLAUSE_21, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[0]);
  }
#line 10409 "parser.c" /* yacc.c:1646  */
    break;

  case 648:
#line 5329 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));

	check_repeated ("TO", SYN_CLAUSE_22, &check_pic_duplicate);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 10421 "parser.c" /* yacc.c:1646  */
    break;

  case 657:
#line 5360 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 10429 "parser.c" /* yacc.c:1646  */
    break;

  case 658:
#line 5364 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
#line 10437 "parser.c" /* yacc.c:1646  */
    break;

  case 659:
#line 5368 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
#line 10445 "parser.c" /* yacc.c:1646  */
    break;

  case 660:
#line 5375 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 10453 "parser.c" /* yacc.c:1646  */
    break;

  case 661:
#line 5379 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
#line 10461 "parser.c" /* yacc.c:1646  */
    break;

  case 662:
#line 5383 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
#line 10469 "parser.c" /* yacc.c:1646  */
    break;

  case 663:
#line 5391 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("OCCURS", SYN_CLAUSE_23, &check_pic_duplicate);
	current_field->occurs_max = cb_get_int ((yyvsp[-1]));
	current_field->occurs_min = current_field->occurs_max;
	current_field->indexes++;
	current_field->flag_occurs = 1;
  }
#line 10481 "parser.c" /* yacc.c:1646  */
    break;

  case 664:
#line 5402 "parser.y" /* yacc.c:1646  */
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  }
#line 10489 "parser.c" /* yacc.c:1646  */
    break;

  case 666:
#line 5411 "parser.y" /* yacc.c:1646  */
    {
	current_section = NULL;
	current_paragraph = NULL;
	check_pic_duplicate = 0;
	check_duplicate = 0;
	cobc_in_procedure = 1U;
	cb_set_system_names ();
	header_check |= COBC_HD_PROCEDURE_DIVISION;
  }
#line 10503 "parser.c" /* yacc.c:1646  */
    break;

  case 667:
#line 5421 "parser.y" /* yacc.c:1646  */
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
#line 10519 "parser.c" /* yacc.c:1646  */
    break;

  case 668:
#line 5433 "parser.y" /* yacc.c:1646  */
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
#line 10538 "parser.c" /* yacc.c:1646  */
    break;

  case 669:
#line 5448 "parser.y" /* yacc.c:1646  */
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
#line 10571 "parser.c" /* yacc.c:1646  */
    break;

  case 671:
#line 5481 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 10579 "parser.c" /* yacc.c:1646  */
    break;

  case 672:
#line 5485 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 10588 "parser.c" /* yacc.c:1646  */
    break;

  case 673:
#line 5490 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 10600 "parser.c" /* yacc.c:1646  */
    break;

  case 674:
#line 5498 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("CHAINING invalid in user FUNCTION"));
	} else {
		current_program->flag_chained = 1;
	}
  }
#line 10613 "parser.c" /* yacc.c:1646  */
    break;

  case 675:
#line 5507 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 10625 "parser.c" /* yacc.c:1646  */
    break;

  case 676:
#line 5517 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10631 "parser.c" /* yacc.c:1646  */
    break;

  case 677:
#line 5519 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 10637 "parser.c" /* yacc.c:1646  */
    break;

  case 678:
#line 5524 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;
	struct cb_field	*f;

	x = cb_build_identifier ((yyvsp[0]), 0);
	if ((yyvsp[-1]) == cb_int1 && CB_VALID_TREE (x) && cb_ref (x) != cb_error_node) {
		f = CB_FIELD (cb_ref (x));
		f->flag_is_pdiv_opt = 1;
	}
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), x);
	CB_SIZES ((yyval)) = size_mode;
  }
#line 10654 "parser.c" /* yacc.c:1646  */
    break;

  case 680:
#line 5541 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 10662 "parser.c" /* yacc.c:1646  */
    break;

  case 681:
#line 5545 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error (_("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		PENDING (_("BY VALUE parameters"));
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 10675 "parser.c" /* yacc.c:1646  */
    break;

  case 683:
#line 5558 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO;
	}
  }
#line 10687 "parser.c" /* yacc.c:1646  */
    break;

  case 684:
#line 5566 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_4;
	}
  }
#line 10699 "parser.c" /* yacc.c:1646  */
    break;

  case 685:
#line 5574 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO | CB_SIZE_UNSIGNED;
	}
  }
#line 10711 "parser.c" /* yacc.c:1646  */
    break;

  case 686:
#line 5582 "parser.y" /* yacc.c:1646  */
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
#line 10744 "parser.c" /* yacc.c:1646  */
    break;

  case 687:
#line 5611 "parser.y" /* yacc.c:1646  */
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
#line 10777 "parser.c" /* yacc.c:1646  */
    break;

  case 688:
#line 5643 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 10785 "parser.c" /* yacc.c:1646  */
    break;

  case 689:
#line 5647 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
		(yyval) = cb_int0;
	} else {
		(yyval) = cb_int1;
	}
  }
#line 10798 "parser.c" /* yacc.c:1646  */
    break;

  case 690:
#line 5659 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
#line 10808 "parser.c" /* yacc.c:1646  */
    break;

  case 691:
#line 5665 "parser.y" /* yacc.c:1646  */
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
#line 10841 "parser.c" /* yacc.c:1646  */
    break;

  case 693:
#line 5697 "parser.y" /* yacc.c:1646  */
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
#line 10850 "parser.c" /* yacc.c:1646  */
    break;

  case 694:
#line 5703 "parser.y" /* yacc.c:1646  */
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
#line 10880 "parser.c" /* yacc.c:1646  */
    break;

  case 699:
#line 5741 "parser.y" /* yacc.c:1646  */
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
#line 10901 "parser.c" /* yacc.c:1646  */
    break;

  case 701:
#line 5759 "parser.y" /* yacc.c:1646  */
    {
	/* check_unreached = 0; */
  }
#line 10909 "parser.c" /* yacc.c:1646  */
    break;

  case 702:
#line 5769 "parser.y" /* yacc.c:1646  */
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
#line 10957 "parser.c" /* yacc.c:1646  */
    break;

  case 703:
#line 5813 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (CB_TREE (current_section));
  }
#line 10965 "parser.c" /* yacc.c:1646  */
    break;

  case 706:
#line 5824 "parser.y" /* yacc.c:1646  */
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
#line 11014 "parser.c" /* yacc.c:1646  */
    break;

  case 707:
#line 5872 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[0]), 0) != cb_error_node) {
		cb_error_x ((yyvsp[0]), _("Unknown statement '%s'"), CB_NAME ((yyvsp[0])));
	}
	YYERROR;
  }
#line 11027 "parser.c" /* yacc.c:1646  */
    break;

  case 708:
#line 5884 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11035 "parser.c" /* yacc.c:1646  */
    break;

  case 709:
#line 5888 "parser.y" /* yacc.c:1646  */
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
#line 11051 "parser.c" /* yacc.c:1646  */
    break;

  case 710:
#line 5906 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
#line 11061 "parser.c" /* yacc.c:1646  */
    break;

  case 711:
#line 5911 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  }
#line 11070 "parser.c" /* yacc.c:1646  */
    break;

  case 712:
#line 5916 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[-2]);
	current_statement = CB_STATEMENT ((yyvsp[-1]));
  }
#line 11080 "parser.c" /* yacc.c:1646  */
    break;

  case 713:
#line 5924 "parser.y" /* yacc.c:1646  */
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
#line 11111 "parser.c" /* yacc.c:1646  */
    break;

  case 714:
#line 5951 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11119 "parser.c" /* yacc.c:1646  */
    break;

  case 715:
#line 5955 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11127 "parser.c" /* yacc.c:1646  */
    break;

  case 765:
#line 6011 "parser.y" /* yacc.c:1646  */
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
#line 11145 "parser.c" /* yacc.c:1646  */
    break;

  case 766:
#line 6025 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cobc_cs_check = 0;
  }
#line 11154 "parser.c" /* yacc.c:1646  */
    break;

  case 767:
#line 6036 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ACCEPT", TERM_ACCEPT);
	if (cb_accept_update) {
		check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
	}
	if (cb_accept_auto) {
		check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
	}
  }
#line 11168 "parser.c" /* yacc.c:1646  */
    break;

  case 769:
#line 6051 "parser.y" /* yacc.c:1646  */
    {
	  check_duplicate = 0;
	  check_line_col_duplicate = 0;
	  line_column = NULL;
  }
#line 11178 "parser.c" /* yacc.c:1646  */
    break;

  case 770:
#line 6057 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept ((yyvsp[-3]), line_column, current_statement->attr_ptr);
  }
#line 11187 "parser.c" /* yacc.c:1646  */
    break;

  case 771:
#line 6062 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 0);
  }
#line 11195 "parser.c" /* yacc.c:1646  */
    break;

  case 772:
#line 6066 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 1);
  }
#line 11203 "parser.c" /* yacc.c:1646  */
    break;

  case 773:
#line 6070 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[-3]));
  }
#line 11212 "parser.c" /* yacc.c:1646  */
    break;

  case 774:
#line 6075 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[-2]));
  }
#line 11221 "parser.c" /* yacc.c:1646  */
    break;

  case 775:
#line 6080 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[-3]));
  }
#line 11230 "parser.c" /* yacc.c:1646  */
    break;

  case 776:
#line 6085 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[-2]));
  }
#line 11239 "parser.c" /* yacc.c:1646  */
    break;

  case 777:
#line 6090 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_day_of_week ((yyvsp[-2]));
  }
#line 11247 "parser.c" /* yacc.c:1646  */
    break;

  case 778:
#line 6094 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_escape_key ((yyvsp[-3]));
  }
#line 11255 "parser.c" /* yacc.c:1646  */
    break;

  case 779:
#line 6098 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_exception_status ((yyvsp[-3]));
  }
#line 11263 "parser.c" /* yacc.c:1646  */
    break;

  case 780:
#line 6102 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_time ((yyvsp[-2]));
  }
#line 11271 "parser.c" /* yacc.c:1646  */
    break;

  case 781:
#line 6106 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[-3]));
  }
#line 11280 "parser.c" /* yacc.c:1646  */
    break;

  case 782:
#line 6111 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_command_line ((yyvsp[-2]));
  }
#line 11288 "parser.c" /* yacc.c:1646  */
    break;

  case 783:
#line 6115 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_environment ((yyvsp[-3]));
  }
#line 11296 "parser.c" /* yacc.c:1646  */
    break;

  case 784:
#line 6119 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_get_environment ((yyvsp[-1]), (yyvsp[-4]));
  }
#line 11304 "parser.c" /* yacc.c:1646  */
    break;

  case 785:
#line 6123 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_number ((yyvsp[-2]));
  }
#line 11312 "parser.c" /* yacc.c:1646  */
    break;

  case 786:
#line 6127 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_value ((yyvsp[-3]));
  }
#line 11320 "parser.c" /* yacc.c:1646  */
    break;

  case 787:
#line 6131 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11328 "parser.c" /* yacc.c:1646  */
    break;

  case 788:
#line 6135 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_name ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11336 "parser.c" /* yacc.c:1646  */
    break;

  case 790:
#line 6143 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 11344 "parser.c" /* yacc.c:1646  */
    break;

  case 796:
#line 6161 "parser.y" /* yacc.c:1646  */
    {
	  check_repeated ("FROM CRT", SYN_CLAUSE_1, &check_duplicate);
  }
#line 11352 "parser.c" /* yacc.c:1646  */
    break;

  case 797:
#line 6165 "parser.y" /* yacc.c:1646  */
    {
	  check_repeated ("MODE IS BLOCK", SYN_CLAUSE_2, &check_duplicate);
  }
#line 11360 "parser.c" /* yacc.c:1646  */
    break;

  case 801:
#line 6178 "parser.y" /* yacc.c:1646  */
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
#line 11376 "parser.c" /* yacc.c:1646  */
    break;

  case 802:
#line 6190 "parser.y" /* yacc.c:1646  */
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
#line 11392 "parser.c" /* yacc.c:1646  */
    break;

  case 803:
#line 6202 "parser.y" /* yacc.c:1646  */
    {
	check_attr_with_conflict (_("AT screen-location"), SYN_CLAUSE_3,
				  _("LINE or COLUMN"), SYN_CLAUSE_1 | SYN_CLAUSE_2,
				  &check_line_col_duplicate);

	line_column = (yyvsp[0]);
  }
#line 11404 "parser.c" /* yacc.c:1646  */
    break;

  case 804:
#line 6212 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11410 "parser.c" /* yacc.c:1646  */
    break;

  case 805:
#line 6216 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11416 "parser.c" /* yacc.c:1646  */
    break;

  case 806:
#line 6217 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11422 "parser.c" /* yacc.c:1646  */
    break;

  case 807:
#line 6222 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11430 "parser.c" /* yacc.c:1646  */
    break;

  case 808:
#line 6229 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
  }
#line 11438 "parser.c" /* yacc.c:1646  */
    break;

  case 809:
#line 6233 "parser.y" /* yacc.c:1646  */
    {
	if (cb_accept_auto) {
		remove_attrib (COB_SCREEN_AUTO);
	}
  }
#line 11448 "parser.c" /* yacc.c:1646  */
    break;

  case 810:
#line 6239 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
#line 11456 "parser.c" /* yacc.c:1646  */
    break;

  case 811:
#line 6243 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
#line 11464 "parser.c" /* yacc.c:1646  */
    break;

  case 812:
#line 6247 "parser.y" /* yacc.c:1646  */
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
#line 11472 "parser.c" /* yacc.c:1646  */
    break;

  case 813:
#line 6251 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_FULL);
  }
#line 11480 "parser.c" /* yacc.c:1646  */
    break;

  case 814:
#line 6255 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 11490 "parser.c" /* yacc.c:1646  */
    break;

  case 815:
#line 6261 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LEFTLINE);
  }
#line 11498 "parser.c" /* yacc.c:1646  */
    break;

  case 816:
#line 6265 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWER);
  }
#line 11506 "parser.c" /* yacc.c:1646  */
    break;

  case 817:
#line 6269 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 11516 "parser.c" /* yacc.c:1646  */
    break;

  case 818:
#line 6275 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_NO_ECHO);
  }
#line 11524 "parser.c" /* yacc.c:1646  */
    break;

  case 819:
#line 6279 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
#line 11532 "parser.c" /* yacc.c:1646  */
    break;

  case 820:
#line 6283 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, (yyvsp[0]), NULL, COB_SCREEN_PROMPT);
  }
#line 11540 "parser.c" /* yacc.c:1646  */
    break;

  case 821:
#line 6287 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_PROMPT);
  }
#line 11548 "parser.c" /* yacc.c:1646  */
    break;

  case 822:
#line 6291 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REQUIRED);
  }
#line 11556 "parser.c" /* yacc.c:1646  */
    break;

  case 823:
#line 6295 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
#line 11564 "parser.c" /* yacc.c:1646  */
    break;

  case 824:
#line 6299 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_SECURE);
  }
#line 11572 "parser.c" /* yacc.c:1646  */
    break;

  case 825:
#line 6303 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 11580 "parser.c" /* yacc.c:1646  */
    break;

  case 826:
#line 6307 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 11588 "parser.c" /* yacc.c:1646  */
    break;

  case 827:
#line 6311 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
#line 11596 "parser.c" /* yacc.c:1646  */
    break;

  case 828:
#line 6315 "parser.y" /* yacc.c:1646  */
    {
	if (cb_accept_update) {
		remove_attrib (COB_SCREEN_UPDATE);
	}
  }
#line 11606 "parser.c" /* yacc.c:1646  */
    break;

  case 829:
#line 6321 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
  }
#line 11614 "parser.c" /* yacc.c:1646  */
    break;

  case 830:
#line 6325 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPPER);
  }
#line 11622 "parser.c" /* yacc.c:1646  */
    break;

  case 831:
#line 6329 "parser.y" /* yacc.c:1646  */
    {
	check_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, NULL, 0);
  }
#line 11630 "parser.c" /* yacc.c:1646  */
    break;

  case 832:
#line 6333 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 11638 "parser.c" /* yacc.c:1646  */
    break;

  case 833:
#line 6337 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, 0);
  }
#line 11646 "parser.c" /* yacc.c:1646  */
    break;

  case 834:
#line 6341 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
#line 11654 "parser.c" /* yacc.c:1646  */
    break;

  case 835:
#line 6345 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, (yyvsp[0]), NULL, NULL, 0);
  }
#line 11662 "parser.c" /* yacc.c:1646  */
    break;

  case 838:
#line 6357 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  }
#line 11670 "parser.c" /* yacc.c:1646  */
    break;

  case 839:
#line 6361 "parser.y" /* yacc.c:1646  */
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
#line 11685 "parser.c" /* yacc.c:1646  */
    break;

  case 840:
#line 6378 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ADD", TERM_ADD);
  }
#line 11693 "parser.c" /* yacc.c:1646  */
    break;

  case 842:
#line 6387 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '+', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 11701 "parser.c" /* yacc.c:1646  */
    break;

  case 843:
#line 6391 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list ((yyvsp[-4]), '+'));
  }
#line 11709 "parser.c" /* yacc.c:1646  */
    break;

  case 844:
#line 6395 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 11717 "parser.c" /* yacc.c:1646  */
    break;

  case 846:
#line 6402 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11725 "parser.c" /* yacc.c:1646  */
    break;

  case 847:
#line 6409 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  }
#line 11733 "parser.c" /* yacc.c:1646  */
    break;

  case 848:
#line 6413 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  }
#line 11741 "parser.c" /* yacc.c:1646  */
    break;

  case 849:
#line 6423 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  }
#line 11750 "parser.c" /* yacc.c:1646  */
    break;

  case 851:
#line 6432 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_allocate ((yyvsp[-2]), (yyvsp[0]), NULL, (yyvsp[-1]));
  }
#line 11758 "parser.c" /* yacc.c:1646  */
    break;

  case 852:
#line 6436 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		cb_error_x (CB_TREE (current_statement),
			    _("ALLOCATE CHARACTERS requires RETURNING clause"));
	} else {
		cb_emit_allocate (NULL, (yyvsp[0]), (yyvsp[-3]), (yyvsp[-1]));
	}
  }
#line 11771 "parser.c" /* yacc.c:1646  */
    break;

  case 853:
#line 6447 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 11777 "parser.c" /* yacc.c:1646  */
    break;

  case 854:
#line 6448 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11783 "parser.c" /* yacc.c:1646  */
    break;

  case 855:
#line 6456 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER statement");
  }
#line 11792 "parser.c" /* yacc.c:1646  */
    break;

  case 859:
#line 6470 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_alter ((yyvsp[-3]), (yyvsp[0]));
  }
#line 11800 "parser.c" /* yacc.c:1646  */
    break;

  case 862:
#line 6482 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
  }
#line 11809 "parser.c" /* yacc.c:1646  */
    break;

  case 864:
#line 6497 "parser.y" /* yacc.c:1646  */
    {
	if (CB_LITERAL_P ((yyvsp[-4])) &&
	    current_program->prog_type == CB_PROGRAM_TYPE &&
	    !current_program->flag_recursive &&
	    !strcmp ((const char *)(CB_LITERAL((yyvsp[-4]))->data), current_program->orig_program_id)) {
		cb_warning_x ((yyvsp[-4]), _("Recursive program call - assuming RECURSIVE attribute"));
		current_program->flag_recursive = 1;
	}
	cb_emit_call ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), (yyvsp[-5]));
  }
#line 11824 "parser.c" /* yacc.c:1646  */
    break;

  case 865:
#line 6511 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 11833 "parser.c" /* yacc.c:1646  */
    break;

  case 866:
#line 6516 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STATIC_LINK);
	cobc_cs_check = 0;
  }
#line 11842 "parser.c" /* yacc.c:1646  */
    break;

  case 867:
#line 6521 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  }
#line 11851 "parser.c" /* yacc.c:1646  */
    break;

  case 868:
#line 6526 "parser.y" /* yacc.c:1646  */
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
#line 11872 "parser.c" /* yacc.c:1646  */
    break;

  case 869:
#line 6546 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11880 "parser.c" /* yacc.c:1646  */
    break;

  case 870:
#line 6550 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 11889 "parser.c" /* yacc.c:1646  */
    break;

  case 871:
#line 6555 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error_x (CB_TREE (current_statement),
			    _("Number of parameters exceeds maximum %d"),
			    COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 11902 "parser.c" /* yacc.c:1646  */
    break;

  case 872:
#line 6566 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11908 "parser.c" /* yacc.c:1646  */
    break;

  case 873:
#line 6568 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 11914 "parser.c" /* yacc.c:1646  */
    break;

  case 874:
#line 6573 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error_x (CB_TREE (current_statement),
			    _("OMITTED only allowed with BY REFERENCE"));
	}
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_null);
  }
#line 11926 "parser.c" /* yacc.c:1646  */
    break;

  case 875:
#line 6581 "parser.y" /* yacc.c:1646  */
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
#line 11952 "parser.c" /* yacc.c:1646  */
    break;

  case 877:
#line 6607 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 11960 "parser.c" /* yacc.c:1646  */
    break;

  case 878:
#line 6611 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY CONTENT");
	} else {
		call_mode = CB_CALL_BY_CONTENT;
	}
  }
#line 11973 "parser.c" /* yacc.c:1646  */
    break;

  case 879:
#line 6620 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 11986 "parser.c" /* yacc.c:1646  */
    break;

  case 880:
#line 6632 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11994 "parser.c" /* yacc.c:1646  */
    break;

  case 881:
#line 6636 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12002 "parser.c" /* yacc.c:1646  */
    break;

  case 882:
#line 6640 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 12010 "parser.c" /* yacc.c:1646  */
    break;

  case 883:
#line 6644 "parser.y" /* yacc.c:1646  */
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
#line 12034 "parser.c" /* yacc.c:1646  */
    break;

  case 888:
#line 6677 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12042 "parser.c" /* yacc.c:1646  */
    break;

  case 889:
#line 6682 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12050 "parser.c" /* yacc.c:1646  */
    break;

  case 890:
#line 6687 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_call_overflow, "ON OVERFLOW clause");
	(yyval) = (yyvsp[0]);
  }
#line 12059 "parser.c" /* yacc.c:1646  */
    break;

  case 891:
#line 6695 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12067 "parser.c" /* yacc.c:1646  */
    break;

  case 892:
#line 6700 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12075 "parser.c" /* yacc.c:1646  */
    break;

  case 893:
#line 6707 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  }
#line 12083 "parser.c" /* yacc.c:1646  */
    break;

  case 894:
#line 6711 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  }
#line 12091 "parser.c" /* yacc.c:1646  */
    break;

  case 895:
#line 6721 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CANCEL", 0);
  }
#line 12099 "parser.c" /* yacc.c:1646  */
    break;

  case 897:
#line 6729 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 12107 "parser.c" /* yacc.c:1646  */
    break;

  case 898:
#line 6733 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 12115 "parser.c" /* yacc.c:1646  */
    break;

  case 899:
#line 6743 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CLOSE", 0);
  }
#line 12123 "parser.c" /* yacc.c:1646  */
    break;

  case 901:
#line 6751 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12132 "parser.c" /* yacc.c:1646  */
    break;

  case 902:
#line 6756 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12141 "parser.c" /* yacc.c:1646  */
    break;

  case 903:
#line 6763 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NORMAL); }
#line 12147 "parser.c" /* yacc.c:1646  */
    break;

  case 904:
#line 6764 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT); }
#line 12153 "parser.c" /* yacc.c:1646  */
    break;

  case 905:
#line 6765 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); }
#line 12159 "parser.c" /* yacc.c:1646  */
    break;

  case 906:
#line 6766 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); }
#line 12165 "parser.c" /* yacc.c:1646  */
    break;

  case 907:
#line 6767 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_LOCK); }
#line 12171 "parser.c" /* yacc.c:1646  */
    break;

  case 908:
#line 6775 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
#line 12179 "parser.c" /* yacc.c:1646  */
    break;

  case 910:
#line 6784 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-3]), 0, (yyvsp[-1]));
  }
#line 12187 "parser.c" /* yacc.c:1646  */
    break;

  case 911:
#line 6791 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  }
#line 12195 "parser.c" /* yacc.c:1646  */
    break;

  case 912:
#line 6795 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  }
#line 12203 "parser.c" /* yacc.c:1646  */
    break;

  case 913:
#line 6805 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
#line 12212 "parser.c" /* yacc.c:1646  */
    break;

  case 914:
#line 6816 "parser.y" /* yacc.c:1646  */
    {
	size_t	save_unreached;

	/* Do not check unreached for CONTINUE */
	save_unreached = check_unreached;
	check_unreached = 0;
	begin_statement ("CONTINUE", 0);
	cb_emit_continue ();
	check_unreached = (unsigned int) save_unreached;
  }
#line 12227 "parser.c" /* yacc.c:1646  */
    break;

  case 915:
#line 6833 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DELETE", TERM_DELETE);
  }
#line 12235 "parser.c" /* yacc.c:1646  */
    break;

  case 917:
#line 6842 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_delete ((yyvsp[-2]));
  }
#line 12243 "parser.c" /* yacc.c:1646  */
    break;

  case 919:
#line 6850 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 12252 "parser.c" /* yacc.c:1646  */
    break;

  case 920:
#line 6855 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 12261 "parser.c" /* yacc.c:1646  */
    break;

  case 921:
#line 6863 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  }
#line 12269 "parser.c" /* yacc.c:1646  */
    break;

  case 922:
#line 6867 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  }
#line 12277 "parser.c" /* yacc.c:1646  */
    break;

  case 923:
#line 6877 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
  }
#line 12286 "parser.c" /* yacc.c:1646  */
    break;

  case 925:
#line 6887 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_name ((yyvsp[-2]));
  }
#line 12294 "parser.c" /* yacc.c:1646  */
    break;

  case 926:
#line 6891 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_value ((yyvsp[-2]));
  }
#line 12302 "parser.c" /* yacc.c:1646  */
    break;

  case 927:
#line 6895 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arg_number ((yyvsp[-2]));
  }
#line 12310 "parser.c" /* yacc.c:1646  */
    break;

  case 928:
#line 6899 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_command_line ((yyvsp[-2]));
  }
#line 12318 "parser.c" /* yacc.c:1646  */
    break;

  case 930:
#line 6908 "parser.y" /* yacc.c:1646  */
    {
	  emit_default_displays_for_x_list ((struct cb_list *) (yyvsp[0]));
  }
#line 12326 "parser.c" /* yacc.c:1646  */
    break;

  case 931:
#line 6912 "parser.y" /* yacc.c:1646  */
    {
	  emit_default_displays_for_x_list ((struct cb_list *) (yyvsp[0]));
  }
#line 12334 "parser.c" /* yacc.c:1646  */
    break;

  case 934:
#line 6924 "parser.y" /* yacc.c:1646  */
    {
	check_duplicate = 0;
	check_line_col_duplicate = 0;
  	advancing_value = cb_int1;
	upon_value = NULL;
	line_column = NULL;
  }
#line 12346 "parser.c" /* yacc.c:1646  */
    break;

  case 935:
#line 6932 "parser.y" /* yacc.c:1646  */
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
#line 12404 "parser.c" /* yacc.c:1646  */
    break;

  case 936:
#line 6989 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12412 "parser.c" /* yacc.c:1646  */
    break;

  case 937:
#line 6993 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("DISPLAY OMITTED");
	(yyval) = cb_null;
  }
#line 12421 "parser.c" /* yacc.c:1646  */
    break;

  case 940:
#line 7006 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("UPON", SYN_CLAUSE_1, &check_duplicate);
  }
#line 12429 "parser.c" /* yacc.c:1646  */
    break;

  case 941:
#line 7010 "parser.y" /* yacc.c:1646  */
    {
 	check_repeated ("NO ADVANCING", SYN_CLAUSE_2, &check_duplicate);
	advancing_value = cb_int0;
  }
#line 12438 "parser.c" /* yacc.c:1646  */
    break;

  case 942:
#line 7015 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("MODE IS BLOCK", SYN_CLAUSE_3, &check_duplicate);
  }
#line 12446 "parser.c" /* yacc.c:1646  */
    break;

  case 945:
#line 7024 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_build_display_mnemonic ((yyvsp[0]));
  }
#line 12454 "parser.c" /* yacc.c:1646  */
    break;

  case 946:
#line 7028 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_build_display_name ((yyvsp[0]));
  }
#line 12462 "parser.c" /* yacc.c:1646  */
    break;

  case 947:
#line 7032 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_int0;
  }
#line 12470 "parser.c" /* yacc.c:1646  */
    break;

  case 951:
#line 7045 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
#line 12478 "parser.c" /* yacc.c:1646  */
    break;

  case 952:
#line 7049 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "BLANK LINE", COB_SCREEN_BLANK_LINE,
				     "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
#line 12488 "parser.c" /* yacc.c:1646  */
    break;

  case 953:
#line 7055 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN,
				     "BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
#line 12498 "parser.c" /* yacc.c:1646  */
    break;

  case 954:
#line 7061 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
#line 12506 "parser.c" /* yacc.c:1646  */
    break;

  case 955:
#line 7065 "parser.y" /* yacc.c:1646  */
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
#line 12514 "parser.c" /* yacc.c:1646  */
    break;

  case 956:
#line 7069 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "ERASE EOL", COB_SCREEN_ERASE_EOL,
				     "ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
#line 12524 "parser.c" /* yacc.c:1646  */
    break;

  case 957:
#line 7075 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "ERASE EOS", COB_SCREEN_ERASE_EOS,
				     "ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
#line 12534 "parser.c" /* yacc.c:1646  */
    break;

  case 958:
#line 7081 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 12544 "parser.c" /* yacc.c:1646  */
    break;

  case 959:
#line 7087 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 12554 "parser.c" /* yacc.c:1646  */
    break;

  case 960:
#line 7093 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
#line 12562 "parser.c" /* yacc.c:1646  */
    break;

  case 961:
#line 7097 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
#line 12570 "parser.c" /* yacc.c:1646  */
    break;

  case 962:
#line 7101 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 12578 "parser.c" /* yacc.c:1646  */
    break;

  case 963:
#line 7105 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
#line 12586 "parser.c" /* yacc.c:1646  */
    break;

  case 964:
#line 7109 "parser.y" /* yacc.c:1646  */
    {
	check_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, NULL, 0);
  }
#line 12594 "parser.c" /* yacc.c:1646  */
    break;

  case 965:
#line 7113 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 12602 "parser.c" /* yacc.c:1646  */
    break;

  case 966:
#line 7117 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, 0);
  }
#line 12610 "parser.c" /* yacc.c:1646  */
    break;

  case 967:
#line 7121 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
#line 12618 "parser.c" /* yacc.c:1646  */
    break;

  case 968:
#line 7128 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  }
#line 12626 "parser.c" /* yacc.c:1646  */
    break;

  case 969:
#line 7132 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  }
#line 12634 "parser.c" /* yacc.c:1646  */
    break;

  case 970:
#line 7142 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
#line 12642 "parser.c" /* yacc.c:1646  */
    break;

  case 972:
#line 7151 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '/', (yyvsp[-3]));
  }
#line 12650 "parser.c" /* yacc.c:1646  */
    break;

  case 973:
#line 7155 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-3]), '/', (yyvsp[-5])));
  }
#line 12658 "parser.c" /* yacc.c:1646  */
    break;

  case 974:
#line 7159 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '/', (yyvsp[-3])));
  }
#line 12666 "parser.c" /* yacc.c:1646  */
    break;

  case 975:
#line 7163 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-5]), (yyvsp[-7]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 12674 "parser.c" /* yacc.c:1646  */
    break;

  case 976:
#line 7167 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-7]), (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 12682 "parser.c" /* yacc.c:1646  */
    break;

  case 977:
#line 7174 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  }
#line 12690 "parser.c" /* yacc.c:1646  */
    break;

  case 978:
#line 7178 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  }
#line 12698 "parser.c" /* yacc.c:1646  */
    break;

  case 979:
#line 7188 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
  }
#line 12707 "parser.c" /* yacc.c:1646  */
    break;

  case 981:
#line 7197 "parser.y" /* yacc.c:1646  */
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
#line 12723 "parser.c" /* yacc.c:1646  */
    break;

  case 982:
#line 7215 "parser.y" /* yacc.c:1646  */
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
#line 12746 "parser.c" /* yacc.c:1646  */
    break;

  case 984:
#line 7239 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_evaluate ((yyvsp[-1]), (yyvsp[0]));
	eval_level--;
  }
#line 12755 "parser.c" /* yacc.c:1646  */
    break;

  case 985:
#line 7246 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 12761 "parser.c" /* yacc.c:1646  */
    break;

  case 986:
#line 7248 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 12767 "parser.c" /* yacc.c:1646  */
    break;

  case 987:
#line 7253 "parser.y" /* yacc.c:1646  */
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
#line 12782 "parser.c" /* yacc.c:1646  */
    break;

  case 988:
#line 7264 "parser.y" /* yacc.c:1646  */
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
#line 12797 "parser.c" /* yacc.c:1646  */
    break;

  case 989:
#line 7275 "parser.y" /* yacc.c:1646  */
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
#line 12812 "parser.c" /* yacc.c:1646  */
    break;

  case 990:
#line 7289 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12820 "parser.c" /* yacc.c:1646  */
    break;

  case 991:
#line 7293 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12828 "parser.c" /* yacc.c:1646  */
    break;

  case 992:
#line 7299 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 12834 "parser.c" /* yacc.c:1646  */
    break;

  case 993:
#line 7301 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 12840 "parser.c" /* yacc.c:1646  */
    break;

  case 994:
#line 7307 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), (yyvsp[-1]));
	eval_inc2 = 0;
  }
#line 12849 "parser.c" /* yacc.c:1646  */
    break;

  case 995:
#line 7316 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), NULL);
	eval_inc2 = 0;
  }
#line 12858 "parser.c" /* yacc.c:1646  */
    break;

  case 996:
#line 7324 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
	eval_inc2 = 0;
  }
#line 12867 "parser.c" /* yacc.c:1646  */
    break;

  case 997:
#line 7330 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
	eval_inc2 = 0;
  }
#line 12876 "parser.c" /* yacc.c:1646  */
    break;

  case 998:
#line 7337 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 12882 "parser.c" /* yacc.c:1646  */
    break;

  case 999:
#line 7339 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 12888 "parser.c" /* yacc.c:1646  */
    break;

  case 1000:
#line 7344 "parser.y" /* yacc.c:1646  */
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
#line 12954 "parser.c" /* yacc.c:1646  */
    break;

  case 1001:
#line 7405 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_any; eval_inc2++; }
#line 12960 "parser.c" /* yacc.c:1646  */
    break;

  case 1002:
#line 7406 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; eval_inc2++; }
#line 12966 "parser.c" /* yacc.c:1646  */
    break;

  case 1003:
#line 7407 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_false; eval_inc2++; }
#line 12972 "parser.c" /* yacc.c:1646  */
    break;

  case 1004:
#line 7411 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 12978 "parser.c" /* yacc.c:1646  */
    break;

  case 1005:
#line 7412 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12984 "parser.c" /* yacc.c:1646  */
    break;

  case 1006:
#line 7417 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  }
#line 12992 "parser.c" /* yacc.c:1646  */
    break;

  case 1007:
#line 7421 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  }
#line 13000 "parser.c" /* yacc.c:1646  */
    break;

  case 1008:
#line 7431 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
#line 13009 "parser.c" /* yacc.c:1646  */
    break;

  case 1009:
#line 7436 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 13017 "parser.c" /* yacc.c:1646  */
    break;

  case 1011:
#line 7444 "parser.y" /* yacc.c:1646  */
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
#line 13042 "parser.c" /* yacc.c:1646  */
    break;

  case 1012:
#line 7465 "parser.y" /* yacc.c:1646  */
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
#line 13060 "parser.c" /* yacc.c:1646  */
    break;

  case 1013:
#line 7479 "parser.y" /* yacc.c:1646  */
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
#line 13086 "parser.c" /* yacc.c:1646  */
    break;

  case 1014:
#line 7501 "parser.y" /* yacc.c:1646  */
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
#line 13112 "parser.c" /* yacc.c:1646  */
    break;

  case 1015:
#line 7523 "parser.y" /* yacc.c:1646  */
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
#line 13136 "parser.c" /* yacc.c:1646  */
    break;

  case 1016:
#line 7543 "parser.y" /* yacc.c:1646  */
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
#line 13160 "parser.c" /* yacc.c:1646  */
    break;

  case 1017:
#line 7565 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13166 "parser.c" /* yacc.c:1646  */
    break;

  case 1018:
#line 7566 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13172 "parser.c" /* yacc.c:1646  */
    break;

  case 1019:
#line 7574 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
#line 13181 "parser.c" /* yacc.c:1646  */
    break;

  case 1021:
#line 7583 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_free ((yyvsp[0]));
  }
#line 13189 "parser.c" /* yacc.c:1646  */
    break;

  case 1022:
#line 7593 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GENERATE", 0);
	PENDING("GENERATE");
  }
#line 13198 "parser.c" /* yacc.c:1646  */
    break;

  case 1025:
#line 7609 "parser.y" /* yacc.c:1646  */
    {
	if (!current_paragraph->flag_statement) {
		current_paragraph->flag_first_is_goto = 1;
	}
	begin_statement ("GO TO", 0);
	save_debug = start_debug;
	start_debug = 0;
  }
#line 13211 "parser.c" /* yacc.c:1646  */
    break;

  case 1027:
#line 7622 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_goto ((yyvsp[-1]), (yyvsp[0]));
	start_debug = save_debug;
  }
#line 13220 "parser.c" /* yacc.c:1646  */
    break;

  case 1028:
#line 7630 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 1;
	(yyval) = NULL;
  }
#line 13229 "parser.c" /* yacc.c:1646  */
    break;

  case 1029:
#line 7635 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	(yyval) = (yyvsp[0]);
  }
#line 13238 "parser.c" /* yacc.c:1646  */
    break;

  case 1030:
#line 7646 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GOBACK", 0);
	check_unreached = 1;
	if ((yyvsp[0]) != NULL) {
		cb_emit_move ((yyvsp[0]), CB_LIST_INIT (current_program->cb_return_code));
	}
	cb_emit_exit (1U);
  }
#line 13251 "parser.c" /* yacc.c:1646  */
    break;

  case 1031:
#line 7661 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("IF", TERM_IF);
  }
#line 13259 "parser.c" /* yacc.c:1646  */
    break;

  case 1033:
#line 7670 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 13267 "parser.c" /* yacc.c:1646  */
    break;

  case 1034:
#line 7674 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[0]));
  }
#line 13275 "parser.c" /* yacc.c:1646  */
    break;

  case 1035:
#line 7678 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[0]), NULL);
  }
#line 13283 "parser.c" /* yacc.c:1646  */
    break;

  case 1036:
#line 7685 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  }
#line 13291 "parser.c" /* yacc.c:1646  */
    break;

  case 1037:
#line 7689 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  }
#line 13299 "parser.c" /* yacc.c:1646  */
    break;

  case 1038:
#line 7699 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIALIZE", 0);
  }
#line 13307 "parser.c" /* yacc.c:1646  */
    break;

  case 1040:
#line 7708 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_initialize ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 13315 "parser.c" /* yacc.c:1646  */
    break;

  case 1041:
#line 7714 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13321 "parser.c" /* yacc.c:1646  */
    break;

  case 1042:
#line 7715 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 13327 "parser.c" /* yacc.c:1646  */
    break;

  case 1043:
#line 7719 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13333 "parser.c" /* yacc.c:1646  */
    break;

  case 1044:
#line 7720 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 13339 "parser.c" /* yacc.c:1646  */
    break;

  case 1045:
#line 7721 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); }
#line 13345 "parser.c" /* yacc.c:1646  */
    break;

  case 1046:
#line 7726 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13353 "parser.c" /* yacc.c:1646  */
    break;

  case 1047:
#line 7730 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13361 "parser.c" /* yacc.c:1646  */
    break;

  case 1048:
#line 7737 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13369 "parser.c" /* yacc.c:1646  */
    break;

  case 1049:
#line 7742 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
  }
#line 13377 "parser.c" /* yacc.c:1646  */
    break;

  case 1050:
#line 7749 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[0]));
  }
#line 13385 "parser.c" /* yacc.c:1646  */
    break;

  case 1051:
#line 7755 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); }
#line 13391 "parser.c" /* yacc.c:1646  */
    break;

  case 1052:
#line 7756 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); }
#line 13397 "parser.c" /* yacc.c:1646  */
    break;

  case 1053:
#line 7757 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); }
#line 13403 "parser.c" /* yacc.c:1646  */
    break;

  case 1054:
#line 7758 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
#line 13409 "parser.c" /* yacc.c:1646  */
    break;

  case 1055:
#line 7759 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
#line 13415 "parser.c" /* yacc.c:1646  */
    break;

  case 1056:
#line 7760 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); }
#line 13421 "parser.c" /* yacc.c:1646  */
    break;

  case 1057:
#line 7761 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
#line 13427 "parser.c" /* yacc.c:1646  */
    break;

  case 1058:
#line 7766 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13435 "parser.c" /* yacc.c:1646  */
    break;

  case 1059:
#line 7770 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_true;
  }
#line 13443 "parser.c" /* yacc.c:1646  */
    break;

  case 1060:
#line 7779 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIATE", 0);
	PENDING("INITIATE");
  }
#line 13452 "parser.c" /* yacc.c:1646  */
    break;

  case 1062:
#line 7788 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 13462 "parser.c" /* yacc.c:1646  */
    break;

  case 1063:
#line 7794 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 13472 "parser.c" /* yacc.c:1646  */
    break;

  case 1064:
#line 7805 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
#line 13481 "parser.c" /* yacc.c:1646  */
    break;

  case 1067:
#line 7818 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13489 "parser.c" /* yacc.c:1646  */
    break;

  case 1068:
#line 7822 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13497 "parser.c" /* yacc.c:1646  */
    break;

  case 1069:
#line 7826 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13505 "parser.c" /* yacc.c:1646  */
    break;

  case 1074:
#line 7842 "parser.y" /* yacc.c:1646  */
    {
	cb_init_tallying ();
  }
#line 13513 "parser.c" /* yacc.c:1646  */
    break;

  case 1075:
#line 7846 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_inspect ((yyvsp[-3]), (yyvsp[0]), cb_int0, 0);
	(yyval) = (yyvsp[-3]);
  }
#line 13522 "parser.c" /* yacc.c:1646  */
    break;

  case 1076:
#line 7856 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_inspect ((yyvsp[-2]), (yyvsp[0]), cb_int1, 1);
	inspect_keyword = 0;
  }
#line 13531 "parser.c" /* yacc.c:1646  */
    break;

  case 1077:
#line 7866 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
	cb_emit_inspect ((yyvsp[-5]), x, cb_int0, 2);
  }
#line 13541 "parser.c" /* yacc.c:1646  */
    break;

  case 1078:
#line 7874 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13547 "parser.c" /* yacc.c:1646  */
    break;

  case 1079:
#line 7875 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 13553 "parser.c" /* yacc.c:1646  */
    break;

  case 1080:
#line 7879 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_data ((yyvsp[-1])); }
#line 13559 "parser.c" /* yacc.c:1646  */
    break;

  case 1081:
#line 7880 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_characters ((yyvsp[0])); }
#line 13565 "parser.c" /* yacc.c:1646  */
    break;

  case 1082:
#line 7881 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_all (); }
#line 13571 "parser.c" /* yacc.c:1646  */
    break;

  case 1083:
#line 7882 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_leading (); }
#line 13577 "parser.c" /* yacc.c:1646  */
    break;

  case 1084:
#line 7883 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_trailing (); }
#line 13583 "parser.c" /* yacc.c:1646  */
    break;

  case 1085:
#line 7884 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_value ((yyvsp[-1]), (yyvsp[0])); }
#line 13589 "parser.c" /* yacc.c:1646  */
    break;

  case 1086:
#line 7888 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13595 "parser.c" /* yacc.c:1646  */
    break;

  case 1087:
#line 7889 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 13601 "parser.c" /* yacc.c:1646  */
    break;

  case 1088:
#line 7894 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[-1]), (yyvsp[0]));
	inspect_keyword = 0;
  }
#line 13610 "parser.c" /* yacc.c:1646  */
    break;

  case 1089:
#line 7899 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13618 "parser.c" /* yacc.c:1646  */
    break;

  case 1090:
#line 7905 "parser.y" /* yacc.c:1646  */
    { /* Nothing */ }
#line 13624 "parser.c" /* yacc.c:1646  */
    break;

  case 1091:
#line 7906 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 1; }
#line 13630 "parser.c" /* yacc.c:1646  */
    break;

  case 1092:
#line 7907 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 2; }
#line 13636 "parser.c" /* yacc.c:1646  */
    break;

  case 1093:
#line 7908 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 3; }
#line 13642 "parser.c" /* yacc.c:1646  */
    break;

  case 1094:
#line 7909 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 4; }
#line 13648 "parser.c" /* yacc.c:1646  */
    break;

  case 1095:
#line 7914 "parser.y" /* yacc.c:1646  */
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
#line 13674 "parser.c" /* yacc.c:1646  */
    break;

  case 1096:
#line 7941 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_inspect_region_start ();
  }
#line 13682 "parser.c" /* yacc.c:1646  */
    break;

  case 1097:
#line 7945 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13690 "parser.c" /* yacc.c:1646  */
    break;

  case 1098:
#line 7952 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-3]), CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[0])));
  }
#line 13698 "parser.c" /* yacc.c:1646  */
    break;

  case 1099:
#line 7956 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-3]), CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[0])));
  }
#line 13706 "parser.c" /* yacc.c:1646  */
    break;

  case 1100:
#line 7965 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
#line 13715 "parser.c" /* yacc.c:1646  */
    break;

  case 1102:
#line 7977 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MOVE", 0);
  }
#line 13723 "parser.c" /* yacc.c:1646  */
    break;

  case 1104:
#line 7985 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move ((yyvsp[-2]), (yyvsp[0]));
  }
#line 13731 "parser.c" /* yacc.c:1646  */
    break;

  case 1105:
#line 7989 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move_corresponding ((yyvsp[-2]), (yyvsp[0]));
  }
#line 13739 "parser.c" /* yacc.c:1646  */
    break;

  case 1106:
#line 7999 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
#line 13747 "parser.c" /* yacc.c:1646  */
    break;

  case 1108:
#line 8008 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '*', (yyvsp[-3]));
  }
#line 13755 "parser.c" /* yacc.c:1646  */
    break;

  case 1109:
#line 8012 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '*', (yyvsp[-3])));
  }
#line 13763 "parser.c" /* yacc.c:1646  */
    break;

  case 1110:
#line 8019 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  }
#line 13771 "parser.c" /* yacc.c:1646  */
    break;

  case 1111:
#line 8023 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  }
#line 13779 "parser.c" /* yacc.c:1646  */
    break;

  case 1112:
#line 8033 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("OPEN", 0);
  }
#line 13787 "parser.c" /* yacc.c:1646  */
    break;

  case 1114:
#line 8041 "parser.y" /* yacc.c:1646  */
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
#line 13812 "parser.c" /* yacc.c:1646  */
    break;

  case 1115:
#line 8062 "parser.y" /* yacc.c:1646  */
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
#line 13837 "parser.c" /* yacc.c:1646  */
    break;

  case 1116:
#line 8085 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_INPUT); }
#line 13843 "parser.c" /* yacc.c:1646  */
    break;

  case 1117:
#line 8086 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_OUTPUT); }
#line 13849 "parser.c" /* yacc.c:1646  */
    break;

  case 1118:
#line 8087 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_I_O); }
#line 13855 "parser.c" /* yacc.c:1646  */
    break;

  case 1119:
#line 8088 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_EXTEND); }
#line 13861 "parser.c" /* yacc.c:1646  */
    break;

  case 1120:
#line 8092 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13867 "parser.c" /* yacc.c:1646  */
    break;

  case 1121:
#line 8093 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13873 "parser.c" /* yacc.c:1646  */
    break;

  case 1122:
#line 8097 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13879 "parser.c" /* yacc.c:1646  */
    break;

  case 1123:
#line 8098 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13885 "parser.c" /* yacc.c:1646  */
    break;

  case 1124:
#line 8099 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 13891 "parser.c" /* yacc.c:1646  */
    break;

  case 1125:
#line 8101 "parser.y" /* yacc.c:1646  */
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  }
#line 13900 "parser.c" /* yacc.c:1646  */
    break;

  case 1126:
#line 8112 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 13911 "parser.c" /* yacc.c:1646  */
    break;

  case 1128:
#line 8123 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[0]), (yyvsp[-1]));
	start_debug = save_debug;
  }
#line 13920 "parser.c" /* yacc.c:1646  */
    break;

  case 1129:
#line 8128 "parser.y" /* yacc.c:1646  */
    {
	CB_ADD_TO_CHAIN ((yyvsp[0]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
  }
#line 13930 "parser.c" /* yacc.c:1646  */
    break;

  case 1130:
#line 8134 "parser.y" /* yacc.c:1646  */
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 13939 "parser.c" /* yacc.c:1646  */
    break;

  case 1131:
#line 8139 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[-1]), NULL);
	start_debug = save_debug;
  }
#line 13948 "parser.c" /* yacc.c:1646  */
    break;

  case 1132:
#line 8147 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-4) - (0)]), PERFORM);
	}
  }
#line 13960 "parser.c" /* yacc.c:1646  */
    break;

  case 1133:
#line 8155 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  }
#line 13968 "parser.c" /* yacc.c:1646  */
    break;

  case 1134:
#line 8162 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  }
#line 13976 "parser.c" /* yacc.c:1646  */
    break;

  case 1135:
#line 8166 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-2) - (1)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-2) - (1)]), PERFORM);
	}
	/* Put the dot token back into the stack for reparse */
	cb_unput_dot ();
  }
#line 13990 "parser.c" /* yacc.c:1646  */
    break;

  case 1136:
#line 8179 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[0]));
  }
#line 14001 "parser.c" /* yacc.c:1646  */
    break;

  case 1137:
#line 8186 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $3 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[-2]))->flag_decl_ok = 1;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14013 "parser.c" /* yacc.c:1646  */
    break;

  case 1138:
#line 8197 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_once (NULL);
  }
#line 14021 "parser.c" /* yacc.c:1646  */
    break;

  case 1139:
#line 8201 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_times ((yyvsp[-1]));
	current_program->loop_counter++;
  }
#line 14030 "parser.c" /* yacc.c:1646  */
    break;

  case 1140:
#line 8206 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_forever (NULL);
  }
#line 14038 "parser.c" /* yacc.c:1646  */
    break;

  case 1141:
#line 8210 "parser.y" /* yacc.c:1646  */
    {
	cb_tree varying;

	if (!(yyvsp[0])) {
		(yyval) = cb_build_perform_forever (NULL);
	} else {
		varying = CB_LIST_INIT (cb_build_perform_varying (NULL, NULL, NULL, (yyvsp[0])));
		(yyval) = cb_build_perform_until ((yyvsp[-2]), varying);
	}
  }
#line 14053 "parser.c" /* yacc.c:1646  */
    break;

  case 1142:
#line 8221 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_until ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14061 "parser.c" /* yacc.c:1646  */
    break;

  case 1143:
#line 8227 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 14067 "parser.c" /* yacc.c:1646  */
    break;

  case 1144:
#line 8228 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14073 "parser.c" /* yacc.c:1646  */
    break;

  case 1145:
#line 8232 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14079 "parser.c" /* yacc.c:1646  */
    break;

  case 1146:
#line 8233 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14085 "parser.c" /* yacc.c:1646  */
    break;

  case 1147:
#line 8236 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 14091 "parser.c" /* yacc.c:1646  */
    break;

  case 1148:
#line 8238 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 14097 "parser.c" /* yacc.c:1646  */
    break;

  case 1149:
#line 8243 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_varying ((yyvsp[-6]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 14105 "parser.c" /* yacc.c:1646  */
    break;

  case 1150:
#line 8253 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READ", TERM_READ);
  }
#line 14113 "parser.c" /* yacc.c:1646  */
    break;

  case 1152:
#line 8262 "parser.y" /* yacc.c:1646  */
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
#line 14141 "parser.c" /* yacc.c:1646  */
    break;

  case 1153:
#line 8288 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14147 "parser.c" /* yacc.c:1646  */
    break;

  case 1154:
#line 8289 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14153 "parser.c" /* yacc.c:1646  */
    break;

  case 1155:
#line 8294 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14161 "parser.c" /* yacc.c:1646  */
    break;

  case 1156:
#line 8298 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int3;
  }
#line 14169 "parser.c" /* yacc.c:1646  */
    break;

  case 1157:
#line 8302 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 14177 "parser.c" /* yacc.c:1646  */
    break;

  case 1158:
#line 8306 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 14185 "parser.c" /* yacc.c:1646  */
    break;

  case 1159:
#line 8310 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 14193 "parser.c" /* yacc.c:1646  */
    break;

  case 1160:
#line 8314 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int3;
  }
#line 14201 "parser.c" /* yacc.c:1646  */
    break;

  case 1161:
#line 8318 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int4;
  }
#line 14209 "parser.c" /* yacc.c:1646  */
    break;

  case 1162:
#line 8324 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14215 "parser.c" /* yacc.c:1646  */
    break;

  case 1163:
#line 8325 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14221 "parser.c" /* yacc.c:1646  */
    break;

  case 1166:
#line 8335 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  }
#line 14229 "parser.c" /* yacc.c:1646  */
    break;

  case 1167:
#line 8339 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  }
#line 14237 "parser.c" /* yacc.c:1646  */
    break;

  case 1168:
#line 8349 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
#line 14246 "parser.c" /* yacc.c:1646  */
    break;

  case 1169:
#line 8359 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RELEASE", 0);
  }
#line 14254 "parser.c" /* yacc.c:1646  */
    break;

  case 1171:
#line 8367 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_release ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14262 "parser.c" /* yacc.c:1646  */
    break;

  case 1172:
#line 8377 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
#line 14271 "parser.c" /* yacc.c:1646  */
    break;

  case 1173:
#line 8387 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RETURN", TERM_RETURN);
  }
#line 14279 "parser.c" /* yacc.c:1646  */
    break;

  case 1175:
#line 8396 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_return ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 14287 "parser.c" /* yacc.c:1646  */
    break;

  case 1176:
#line 8403 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  }
#line 14295 "parser.c" /* yacc.c:1646  */
    break;

  case 1177:
#line 8407 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  }
#line 14303 "parser.c" /* yacc.c:1646  */
    break;

  case 1178:
#line 8417 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 14314 "parser.c" /* yacc.c:1646  */
    break;

  case 1180:
#line 8429 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_rewrite ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
	start_debug = save_debug;
  }
#line 14323 "parser.c" /* yacc.c:1646  */
    break;

  case 1181:
#line 8437 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14331 "parser.c" /* yacc.c:1646  */
    break;

  case 1182:
#line 8441 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 14339 "parser.c" /* yacc.c:1646  */
    break;

  case 1183:
#line 8445 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 14347 "parser.c" /* yacc.c:1646  */
    break;

  case 1184:
#line 8452 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  }
#line 14355 "parser.c" /* yacc.c:1646  */
    break;

  case 1185:
#line 8456 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  }
#line 14363 "parser.c" /* yacc.c:1646  */
    break;

  case 1186:
#line 8466 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
#line 14372 "parser.c" /* yacc.c:1646  */
    break;

  case 1187:
#line 8477 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
#line 14380 "parser.c" /* yacc.c:1646  */
    break;

  case 1189:
#line 8486 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_search ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 14388 "parser.c" /* yacc.c:1646  */
    break;

  case 1190:
#line 8491 "parser.y" /* yacc.c:1646  */
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 14397 "parser.c" /* yacc.c:1646  */
    break;

  case 1191:
#line 8498 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14403 "parser.c" /* yacc.c:1646  */
    break;

  case 1192:
#line 8499 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14409 "parser.c" /* yacc.c:1646  */
    break;

  case 1193:
#line 8504 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14417 "parser.c" /* yacc.c:1646  */
    break;

  case 1194:
#line 8509 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14425 "parser.c" /* yacc.c:1646  */
    break;

  case 1195:
#line 8516 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 14433 "parser.c" /* yacc.c:1646  */
    break;

  case 1196:
#line 8520 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), (yyvsp[-1]));
  }
#line 14441 "parser.c" /* yacc.c:1646  */
    break;

  case 1197:
#line 8528 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_if_check_break ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14449 "parser.c" /* yacc.c:1646  */
    break;

  case 1198:
#line 8535 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  }
#line 14457 "parser.c" /* yacc.c:1646  */
    break;

  case 1199:
#line 8539 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  }
#line 14465 "parser.c" /* yacc.c:1646  */
    break;

  case 1200:
#line 8549 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SET", 0);
	setattr_val_on = 0;
	setattr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
#line 14476 "parser.c" /* yacc.c:1646  */
    break;

  case 1201:
#line 8556 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 14484 "parser.c" /* yacc.c:1646  */
    break;

  case 1208:
#line 8571 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 14490 "parser.c" /* yacc.c:1646  */
    break;

  case 1209:
#line 8572 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 14496 "parser.c" /* yacc.c:1646  */
    break;

  case 1210:
#line 8576 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 14502 "parser.c" /* yacc.c:1646  */
    break;

  case 1211:
#line 8577 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 14508 "parser.c" /* yacc.c:1646  */
    break;

  case 1212:
#line 8584 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_setenv ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14516 "parser.c" /* yacc.c:1646  */
    break;

  case 1213:
#line 8593 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_attribute ((yyvsp[-2]), setattr_val_on, setattr_val_off);
  }
#line 14524 "parser.c" /* yacc.c:1646  */
    break;

  case 1216:
#line 8605 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BELL);
  }
#line 14532 "parser.c" /* yacc.c:1646  */
    break;

  case 1217:
#line 8609 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BLINK);
  }
#line 14540 "parser.c" /* yacc.c:1646  */
    break;

  case 1218:
#line 8613 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_HIGHLIGHT);
	check_not_highlight_and_lowlight (setattr_val_on | setattr_val_off,
					  COB_SCREEN_HIGHLIGHT);
  }
#line 14550 "parser.c" /* yacc.c:1646  */
    break;

  case 1219:
#line 8619 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LOWLIGHT);
	check_not_highlight_and_lowlight (setattr_val_on | setattr_val_off,
					  COB_SCREEN_LOWLIGHT);
  }
#line 14560 "parser.c" /* yacc.c:1646  */
    break;

  case 1220:
#line 8625 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_REVERSE);
  }
#line 14568 "parser.c" /* yacc.c:1646  */
    break;

  case 1221:
#line 8629 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_UNDERLINE);
  }
#line 14576 "parser.c" /* yacc.c:1646  */
    break;

  case 1222:
#line 8633 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LEFTLINE);
  }
#line 14584 "parser.c" /* yacc.c:1646  */
    break;

  case 1223:
#line 8637 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_OVERLINE);
  }
#line 14592 "parser.c" /* yacc.c:1646  */
    break;

  case 1224:
#line 8646 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-3]), cb_build_ppointer ((yyvsp[0])));
  }
#line 14600 "parser.c" /* yacc.c:1646  */
    break;

  case 1225:
#line 8650 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14608 "parser.c" /* yacc.c:1646  */
    break;

  case 1226:
#line 8659 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_up_down ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 14616 "parser.c" /* yacc.c:1646  */
    break;

  case 1229:
#line 8673 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_on_off ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14624 "parser.c" /* yacc.c:1646  */
    break;

  case 1232:
#line 8687 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_true ((yyvsp[-2]));
  }
#line 14632 "parser.c" /* yacc.c:1646  */
    break;

  case 1233:
#line 8691 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_false ((yyvsp[-2]));
  }
#line 14640 "parser.c" /* yacc.c:1646  */
    break;

  case 1234:
#line 8701 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SORT", 0);
  }
#line 14648 "parser.c" /* yacc.c:1646  */
    break;

  case 1236:
#line 8709 "parser.y" /* yacc.c:1646  */
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
#line 14673 "parser.c" /* yacc.c:1646  */
    break;

  case 1237:
#line 8730 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2]) && CB_VALID_TREE ((yyvsp[-6]))) {
		cb_emit_sort_finish ((yyvsp[-6]));
	}
  }
#line 14683 "parser.c" /* yacc.c:1646  */
    break;

  case 1238:
#line 8739 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14691 "parser.c" /* yacc.c:1646  */
    break;

  case 1239:
#line 8744 "parser.y" /* yacc.c:1646  */
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
#line 14711 "parser.c" /* yacc.c:1646  */
    break;

  case 1240:
#line 8762 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14717 "parser.c" /* yacc.c:1646  */
    break;

  case 1241:
#line 8763 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 14723 "parser.c" /* yacc.c:1646  */
    break;

  case 1243:
#line 8768 "parser.y" /* yacc.c:1646  */
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  }
#line 14732 "parser.c" /* yacc.c:1646  */
    break;

  case 1244:
#line 8775 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 14738 "parser.c" /* yacc.c:1646  */
    break;

  case 1245:
#line 8776 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_ref ((yyvsp[0])); }
#line 14744 "parser.c" /* yacc.c:1646  */
    break;

  case 1246:
#line 8781 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) && CB_FILE_P (cb_ref ((yyvsp[0])))) {
		cb_error (_("File sort requires USING or INPUT PROCEDURE"));
	}
  }
#line 14754 "parser.c" /* yacc.c:1646  */
    break;

  case 1247:
#line 8787 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[-2])))) {
			cb_error (_("USING invalid with table SORT"));
		} else {
			cb_emit_sort_using ((yyvsp[-2]), (yyvsp[0]));
		}
	}
  }
#line 14768 "parser.c" /* yacc.c:1646  */
    break;

  case 1248:
#line 8797 "parser.y" /* yacc.c:1646  */
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
#line 14784 "parser.c" /* yacc.c:1646  */
    break;

  case 1249:
#line 8812 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("File sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
#line 14794 "parser.c" /* yacc.c:1646  */
    break;

  case 1250:
#line 8818 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (2)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (2)])))) {
			cb_error (_("GIVING invalid with table SORT"));
		} else {
			cb_emit_sort_giving ((yyvsp[(-1) - (2)]), (yyvsp[0]));
		}
	}
  }
#line 14808 "parser.c" /* yacc.c:1646  */
    break;

  case 1251:
#line 8828 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (4)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (4)])))) {
			cb_error (_("OUTPUT PROCEDURE invalid with table SORT"));
		} else {
			cb_emit_sort_output ((yyvsp[0]));
		}
	}
  }
#line 14822 "parser.c" /* yacc.c:1646  */
    break;

  case 1252:
#line 8844 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
#line 14831 "parser.c" /* yacc.c:1646  */
    break;

  case 1254:
#line 8854 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-1]) && !(yyvsp[-2])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SIZE/LENGTH invalid here"));
	} else {
		cb_emit_start ((yyvsp[-3]), start_tree, (yyvsp[-2]), (yyvsp[-1]));
	}
  }
#line 14844 "parser.c" /* yacc.c:1646  */
    break;

  case 1255:
#line 8866 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14852 "parser.c" /* yacc.c:1646  */
    break;

  case 1256:
#line 8870 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14860 "parser.c" /* yacc.c:1646  */
    break;

  case 1257:
#line 8877 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14868 "parser.c" /* yacc.c:1646  */
    break;

  case 1258:
#line 8881 "parser.y" /* yacc.c:1646  */
    {
	start_tree = (yyvsp[-1]);
	(yyval) = (yyvsp[0]);
  }
#line 14877 "parser.c" /* yacc.c:1646  */
    break;

  case 1259:
#line 8886 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  }
#line 14886 "parser.c" /* yacc.c:1646  */
    break;

  case 1260:
#line 8891 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  }
#line 14895 "parser.c" /* yacc.c:1646  */
    break;

  case 1261:
#line 8898 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_EQ); }
#line 14901 "parser.c" /* yacc.c:1646  */
    break;

  case 1262:
#line 8899 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LE : COB_GT); }
#line 14907 "parser.c" /* yacc.c:1646  */
    break;

  case 1263:
#line 8900 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GE : COB_LT); }
#line 14913 "parser.c" /* yacc.c:1646  */
    break;

  case 1264:
#line 8901 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LT : COB_GE); }
#line 14919 "parser.c" /* yacc.c:1646  */
    break;

  case 1265:
#line 8902 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GT : COB_LE); }
#line 14925 "parser.c" /* yacc.c:1646  */
    break;

  case 1266:
#line 8903 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_NE); }
#line 14931 "parser.c" /* yacc.c:1646  */
    break;

  case 1267:
#line 8908 "parser.y" /* yacc.c:1646  */
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition disallowed on START statement"));
  }
#line 14940 "parser.c" /* yacc.c:1646  */
    break;

  case 1270:
#line 8921 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  }
#line 14948 "parser.c" /* yacc.c:1646  */
    break;

  case 1271:
#line 8925 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  }
#line 14956 "parser.c" /* yacc.c:1646  */
    break;

  case 1272:
#line 8935 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP RUN", 0);
  }
#line 14964 "parser.c" /* yacc.c:1646  */
    break;

  case 1273:
#line 8939 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_stop_run ((yyvsp[0]));
	check_unreached = 1;
	cobc_cs_check = 0;
  }
#line 14974 "parser.c" /* yacc.c:1646  */
    break;

  case 1274:
#line 8945 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP", 0);
	cb_verify (cb_stop_literal_statement, "STOP literal");
	cb_emit_display (CB_LIST_INIT ((yyvsp[0])), cb_int0, cb_int1, NULL,
			 NULL);
	cb_emit_accept (cb_null, NULL, NULL);
	cobc_cs_check = 0;
  }
#line 14987 "parser.c" /* yacc.c:1646  */
    break;

  case 1275:
#line 8957 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->cb_return_code;
  }
#line 14995 "parser.c" /* yacc.c:1646  */
    break;

  case 1276:
#line 8961 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15003 "parser.c" /* yacc.c:1646  */
    break;

  case 1277:
#line 8965 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int1;
	}
  }
#line 15015 "parser.c" /* yacc.c:1646  */
    break;

  case 1278:
#line 8973 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int0;
	}
  }
#line 15027 "parser.c" /* yacc.c:1646  */
    break;

  case 1279:
#line 8984 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15035 "parser.c" /* yacc.c:1646  */
    break;

  case 1280:
#line 8988 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15043 "parser.c" /* yacc.c:1646  */
    break;

  case 1281:
#line 8994 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15049 "parser.c" /* yacc.c:1646  */
    break;

  case 1282:
#line 8995 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 15055 "parser.c" /* yacc.c:1646  */
    break;

  case 1283:
#line 8996 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 15061 "parser.c" /* yacc.c:1646  */
    break;

  case 1284:
#line 8997 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 15067 "parser.c" /* yacc.c:1646  */
    break;

  case 1285:
#line 9004 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STRING", TERM_STRING);
  }
#line 15075 "parser.c" /* yacc.c:1646  */
    break;

  case 1287:
#line 9013 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_string ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[-1]));
  }
#line 15083 "parser.c" /* yacc.c:1646  */
    break;

  case 1288:
#line 9019 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 15089 "parser.c" /* yacc.c:1646  */
    break;

  case 1289:
#line 9020 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 15095 "parser.c" /* yacc.c:1646  */
    break;

  case 1290:
#line 9024 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15101 "parser.c" /* yacc.c:1646  */
    break;

  case 1291:
#line 9025 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); }
#line 15107 "parser.c" /* yacc.c:1646  */
    break;

  case 1292:
#line 9026 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[0]), NULL); }
#line 15113 "parser.c" /* yacc.c:1646  */
    break;

  case 1293:
#line 9030 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15119 "parser.c" /* yacc.c:1646  */
    break;

  case 1294:
#line 9031 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15125 "parser.c" /* yacc.c:1646  */
    break;

  case 1295:
#line 9036 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  }
#line 15133 "parser.c" /* yacc.c:1646  */
    break;

  case 1296:
#line 9040 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  }
#line 15141 "parser.c" /* yacc.c:1646  */
    break;

  case 1297:
#line 9050 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
#line 15149 "parser.c" /* yacc.c:1646  */
    break;

  case 1299:
#line 9059 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '-', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 15157 "parser.c" /* yacc.c:1646  */
    break;

  case 1300:
#line 9063 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[-3]), (yyvsp[-5])), '-'));
  }
#line 15165 "parser.c" /* yacc.c:1646  */
    break;

  case 1301:
#line 9067 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 15173 "parser.c" /* yacc.c:1646  */
    break;

  case 1302:
#line 9074 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  }
#line 15181 "parser.c" /* yacc.c:1646  */
    break;

  case 1303:
#line 9078 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  }
#line 15189 "parser.c" /* yacc.c:1646  */
    break;

  case 1304:
#line 9088 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUPPRESS", 0);
	if (!in_declaratives) {
		cb_error_x (CB_TREE (current_statement),
			    _("SUPPRESS statement must be within DECLARATIVES"));
	}
	PENDING("SUPPRESS");
  }
#line 15202 "parser.c" /* yacc.c:1646  */
    break;

  case 1307:
#line 9106 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TERMINATE", 0);
	PENDING("TERMINATE");
  }
#line 15211 "parser.c" /* yacc.c:1646  */
    break;

  case 1309:
#line 9115 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 15221 "parser.c" /* yacc.c:1646  */
    break;

  case 1310:
#line 9121 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 15231 "parser.c" /* yacc.c:1646  */
    break;

  case 1311:
#line 9132 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TRANSFORM", 0);
  }
#line 15239 "parser.c" /* yacc.c:1646  */
    break;

  case 1313:
#line 9140 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[-2]), (yyvsp[0]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[-4]), x, cb_int0, 2);
  }
#line 15250 "parser.c" /* yacc.c:1646  */
    break;

  case 1314:
#line 9153 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNLOCK", 0);
  }
#line 15258 "parser.c" /* yacc.c:1646  */
    break;

  case 1316:
#line 9161 "parser.y" /* yacc.c:1646  */
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
#line 15273 "parser.c" /* yacc.c:1646  */
    break;

  case 1320:
#line 9184 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
#line 15281 "parser.c" /* yacc.c:1646  */
    break;

  case 1322:
#line 9194 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_unstring ((yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
  }
#line 15289 "parser.c" /* yacc.c:1646  */
    break;

  case 1323:
#line 9200 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15295 "parser.c" /* yacc.c:1646  */
    break;

  case 1324:
#line 9202 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15301 "parser.c" /* yacc.c:1646  */
    break;

  case 1325:
#line 9206 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 15307 "parser.c" /* yacc.c:1646  */
    break;

  case 1326:
#line 9208 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 15313 "parser.c" /* yacc.c:1646  */
    break;

  case 1327:
#line 9213 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[-1]), (yyvsp[0]));
  }
#line 15321 "parser.c" /* yacc.c:1646  */
    break;

  case 1328:
#line 9219 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 15327 "parser.c" /* yacc.c:1646  */
    break;

  case 1329:
#line 9221 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 15333 "parser.c" /* yacc.c:1646  */
    break;

  case 1330:
#line 9226 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_into ((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 15341 "parser.c" /* yacc.c:1646  */
    break;

  case 1331:
#line 9232 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15347 "parser.c" /* yacc.c:1646  */
    break;

  case 1332:
#line 9233 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15353 "parser.c" /* yacc.c:1646  */
    break;

  case 1333:
#line 9237 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15359 "parser.c" /* yacc.c:1646  */
    break;

  case 1334:
#line 9238 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15365 "parser.c" /* yacc.c:1646  */
    break;

  case 1335:
#line 9242 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15371 "parser.c" /* yacc.c:1646  */
    break;

  case 1336:
#line 9243 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15377 "parser.c" /* yacc.c:1646  */
    break;

  case 1337:
#line 9248 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  }
#line 15385 "parser.c" /* yacc.c:1646  */
    break;

  case 1338:
#line 9252 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  }
#line 15393 "parser.c" /* yacc.c:1646  */
    break;

  case 1339:
#line 9262 "parser.y" /* yacc.c:1646  */
    {
	skip_statements = 0;
	in_debugging = 0;
  }
#line 15402 "parser.c" /* yacc.c:1646  */
    break;

  case 1346:
#line 9280 "parser.y" /* yacc.c:1646  */
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
#line 15428 "parser.c" /* yacc.c:1646  */
    break;

  case 1347:
#line 9305 "parser.y" /* yacc.c:1646  */
    {
	use_global_ind = 0;
  }
#line 15436 "parser.c" /* yacc.c:1646  */
    break;

  case 1348:
#line 9309 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else {
		use_global_ind = 1;
		current_program->flag_global_use = 1;
	}
  }
#line 15449 "parser.c" /* yacc.c:1646  */
    break;

  case 1349:
#line 9321 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		l;

	for (l = (yyvsp[0]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			setup_use_file (CB_FILE (cb_ref (CB_VALUE (l))));
		}
	}
  }
#line 15463 "parser.c" /* yacc.c:1646  */
    break;

  case 1350:
#line 9331 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
#line 15472 "parser.c" /* yacc.c:1646  */
    break;

  case 1351:
#line 9336 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
#line 15481 "parser.c" /* yacc.c:1646  */
    break;

  case 1352:
#line 9341 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
#line 15490 "parser.c" /* yacc.c:1646  */
    break;

  case 1353:
#line 9346 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
#line 15499 "parser.c" /* yacc.c:1646  */
    break;

  case 1354:
#line 9354 "parser.y" /* yacc.c:1646  */
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
#line 15538 "parser.c" /* yacc.c:1646  */
    break;

  case 1357:
#line 9397 "parser.y" /* yacc.c:1646  */
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
#line 15582 "parser.c" /* yacc.c:1646  */
    break;

  case 1358:
#line 9437 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_debugging) {
		if (current_program->all_procedure) {
			cb_error (_("Duplicate USE DEBUGGING ON ALL PROCEDURES"));
		} else {
			current_program->all_procedure = current_section;
		}
	}
  }
#line 15596 "parser.c" /* yacc.c:1646  */
    break;

  case 1359:
#line 9447 "parser.y" /* yacc.c:1646  */
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
#line 15621 "parser.c" /* yacc.c:1646  */
    break;

  case 1364:
#line 9477 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "USE AT");
	}
  }
#line 15631 "parser.c" /* yacc.c:1646  */
    break;

  case 1365:
#line 9486 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	/* emit_entry ("_START", 0, NULL); */
	PENDING ("USE AT PROGRAM START");
  }
#line 15641 "parser.c" /* yacc.c:1646  */
    break;

  case 1366:
#line 9492 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	/* emit_entry ("_END", 0, NULL); */
	PENDING ("USE AT PROGRAM END");
  }
#line 15651 "parser.c" /* yacc.c:1646  */
    break;

  case 1367:
#line 9502 "parser.y" /* yacc.c:1646  */
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE BEFORE REPORTING"));
	PENDING ("USE BEFORE REPORTING");
  }
#line 15661 "parser.c" /* yacc.c:1646  */
    break;

  case 1368:
#line 9511 "parser.y" /* yacc.c:1646  */
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	PENDING ("USE AFTER EXCEPTION CONDITION");
  }
#line 15671 "parser.c" /* yacc.c:1646  */
    break;

  case 1371:
#line 9527 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 15682 "parser.c" /* yacc.c:1646  */
    break;

  case 1373:
#line 9539 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE ((yyvsp[-4]))) {
		cb_emit_write ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
	}
	start_debug = save_debug;
  }
#line 15693 "parser.c" /* yacc.c:1646  */
    break;

  case 1374:
#line 9548 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15699 "parser.c" /* yacc.c:1646  */
    break;

  case 1375:
#line 9549 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15705 "parser.c" /* yacc.c:1646  */
    break;

  case 1376:
#line 9554 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 15713 "parser.c" /* yacc.c:1646  */
    break;

  case 1377:
#line 9558 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 15721 "parser.c" /* yacc.c:1646  */
    break;

  case 1378:
#line 9562 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15729 "parser.c" /* yacc.c:1646  */
    break;

  case 1379:
#line 9566 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[-2]));
  }
#line 15737 "parser.c" /* yacc.c:1646  */
    break;

  case 1380:
#line 9572 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 15743 "parser.c" /* yacc.c:1646  */
    break;

  case 1381:
#line 9573 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_AFTER; }
#line 15749 "parser.c" /* yacc.c:1646  */
    break;

  case 1384:
#line 9583 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  }
#line 15757 "parser.c" /* yacc.c:1646  */
    break;

  case 1385:
#line 9587 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  }
#line 15765 "parser.c" /* yacc.c:1646  */
    break;

  case 1388:
#line 9604 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15774 "parser.c" /* yacc.c:1646  */
    break;

  case 1392:
#line 9619 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15783 "parser.c" /* yacc.c:1646  */
    break;

  case 1397:
#line 9637 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15792 "parser.c" /* yacc.c:1646  */
    break;

  case 1399:
#line 9647 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15801 "parser.c" /* yacc.c:1646  */
    break;

  case 1402:
#line 9662 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15810 "parser.c" /* yacc.c:1646  */
    break;

  case 1404:
#line 9672 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15819 "parser.c" /* yacc.c:1646  */
    break;

  case 1407:
#line 9689 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15828 "parser.c" /* yacc.c:1646  */
    break;

  case 1409:
#line 9700 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15837 "parser.c" /* yacc.c:1646  */
    break;

  case 1415:
#line 9723 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15846 "parser.c" /* yacc.c:1646  */
    break;

  case 1416:
#line 9732 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15855 "parser.c" /* yacc.c:1646  */
    break;

  case 1420:
#line 9749 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15864 "parser.c" /* yacc.c:1646  */
    break;

  case 1421:
#line 9758 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15873 "parser.c" /* yacc.c:1646  */
    break;

  case 1424:
#line 9775 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15882 "parser.c" /* yacc.c:1646  */
    break;

  case 1426:
#line 9785 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15891 "parser.c" /* yacc.c:1646  */
    break;

  case 1427:
#line 9795 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_one;
  }
#line 15899 "parser.c" /* yacc.c:1646  */
    break;

  case 1428:
#line 9799 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 15907 "parser.c" /* yacc.c:1646  */
    break;

  case 1429:
#line 9809 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_cond ((yyvsp[0]));
  }
#line 15915 "parser.c" /* yacc.c:1646  */
    break;

  case 1430:
#line 9816 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_expr ((yyvsp[0]));
  }
#line 15923 "parser.c" /* yacc.c:1646  */
    break;

  case 1431:
#line 9822 "parser.y" /* yacc.c:1646  */
    {
	current_expr = NULL;
	cb_exp_line = cb_source_line;
  }
#line 15932 "parser.c" /* yacc.c:1646  */
    break;

  case 1432:
#line 9827 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_expr);
  }
#line 15940 "parser.c" /* yacc.c:1646  */
    break;

  case 1436:
#line 9840 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE_P ((yyvsp[0])) && CB_CLASS_NAME_P (cb_ref ((yyvsp[0])))) {
		push_expr ('C', (yyvsp[0]));
	} else {
		push_expr ('x', (yyvsp[0]));
	}
  }
#line 15952 "parser.c" /* yacc.c:1646  */
    break;

  case 1437:
#line 9848 "parser.y" /* yacc.c:1646  */
    { push_expr ('(', NULL); }
#line 15958 "parser.c" /* yacc.c:1646  */
    break;

  case 1438:
#line 9849 "parser.y" /* yacc.c:1646  */
    { push_expr (')', NULL); }
#line 15964 "parser.c" /* yacc.c:1646  */
    break;

  case 1439:
#line 9851 "parser.y" /* yacc.c:1646  */
    { push_expr ('+', NULL); }
#line 15970 "parser.c" /* yacc.c:1646  */
    break;

  case 1440:
#line 9852 "parser.y" /* yacc.c:1646  */
    { push_expr ('-', NULL); }
#line 15976 "parser.c" /* yacc.c:1646  */
    break;

  case 1441:
#line 9853 "parser.y" /* yacc.c:1646  */
    { push_expr ('*', NULL); }
#line 15982 "parser.c" /* yacc.c:1646  */
    break;

  case 1442:
#line 9854 "parser.y" /* yacc.c:1646  */
    { push_expr ('/', NULL); }
#line 15988 "parser.c" /* yacc.c:1646  */
    break;

  case 1443:
#line 9855 "parser.y" /* yacc.c:1646  */
    { push_expr ('^', NULL); }
#line 15994 "parser.c" /* yacc.c:1646  */
    break;

  case 1444:
#line 9857 "parser.y" /* yacc.c:1646  */
    { push_expr ('=', NULL); }
#line 16000 "parser.c" /* yacc.c:1646  */
    break;

  case 1445:
#line 9858 "parser.y" /* yacc.c:1646  */
    { push_expr ('>', NULL); }
#line 16006 "parser.c" /* yacc.c:1646  */
    break;

  case 1446:
#line 9859 "parser.y" /* yacc.c:1646  */
    { push_expr ('<', NULL); }
#line 16012 "parser.c" /* yacc.c:1646  */
    break;

  case 1447:
#line 9860 "parser.y" /* yacc.c:1646  */
    { push_expr (']', NULL); }
#line 16018 "parser.c" /* yacc.c:1646  */
    break;

  case 1448:
#line 9861 "parser.y" /* yacc.c:1646  */
    { push_expr ('[', NULL); }
#line 16024 "parser.c" /* yacc.c:1646  */
    break;

  case 1449:
#line 9862 "parser.y" /* yacc.c:1646  */
    { push_expr ('~', NULL); }
#line 16030 "parser.c" /* yacc.c:1646  */
    break;

  case 1450:
#line 9864 "parser.y" /* yacc.c:1646  */
    { push_expr ('!', NULL); }
#line 16036 "parser.c" /* yacc.c:1646  */
    break;

  case 1451:
#line 9865 "parser.y" /* yacc.c:1646  */
    { push_expr ('&', NULL); }
#line 16042 "parser.c" /* yacc.c:1646  */
    break;

  case 1452:
#line 9866 "parser.y" /* yacc.c:1646  */
    { push_expr ('|', NULL); }
#line 16048 "parser.c" /* yacc.c:1646  */
    break;

  case 1453:
#line 9868 "parser.y" /* yacc.c:1646  */
    { push_expr ('O', NULL); }
#line 16054 "parser.c" /* yacc.c:1646  */
    break;

  case 1454:
#line 9869 "parser.y" /* yacc.c:1646  */
    { push_expr ('9', NULL); }
#line 16060 "parser.c" /* yacc.c:1646  */
    break;

  case 1455:
#line 9870 "parser.y" /* yacc.c:1646  */
    { push_expr ('A', NULL); }
#line 16066 "parser.c" /* yacc.c:1646  */
    break;

  case 1456:
#line 9871 "parser.y" /* yacc.c:1646  */
    { push_expr ('L', NULL); }
#line 16072 "parser.c" /* yacc.c:1646  */
    break;

  case 1457:
#line 9872 "parser.y" /* yacc.c:1646  */
    { push_expr ('U', NULL); }
#line 16078 "parser.c" /* yacc.c:1646  */
    break;

  case 1458:
#line 9875 "parser.y" /* yacc.c:1646  */
    { push_expr ('P', NULL); }
#line 16084 "parser.c" /* yacc.c:1646  */
    break;

  case 1459:
#line 9876 "parser.y" /* yacc.c:1646  */
    { push_expr ('N', NULL); }
#line 16090 "parser.c" /* yacc.c:1646  */
    break;

  case 1468:
#line 9906 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16098 "parser.c" /* yacc.c:1646  */
    break;

  case 1469:
#line 9910 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 16106 "parser.c" /* yacc.c:1646  */
    break;

  case 1473:
#line 9921 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '+', (yyvsp[0])); }
#line 16112 "parser.c" /* yacc.c:1646  */
    break;

  case 1474:
#line 9922 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '-', (yyvsp[0])); }
#line 16118 "parser.c" /* yacc.c:1646  */
    break;

  case 1475:
#line 9923 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16124 "parser.c" /* yacc.c:1646  */
    break;

  case 1476:
#line 9927 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '*', (yyvsp[0])); }
#line 16130 "parser.c" /* yacc.c:1646  */
    break;

  case 1477:
#line 9928 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '/', (yyvsp[0])); }
#line 16136 "parser.c" /* yacc.c:1646  */
    break;

  case 1478:
#line 9929 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16142 "parser.c" /* yacc.c:1646  */
    break;

  case 1479:
#line 9934 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_binary_op ((yyvsp[-2]), '^', (yyvsp[0]));
  }
#line 16150 "parser.c" /* yacc.c:1646  */
    break;

  case 1480:
#line 9937 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16156 "parser.c" /* yacc.c:1646  */
    break;

  case 1481:
#line 9941 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16162 "parser.c" /* yacc.c:1646  */
    break;

  case 1482:
#line 9942 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[0])); }
#line 16168 "parser.c" /* yacc.c:1646  */
    break;

  case 1483:
#line 9943 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16174 "parser.c" /* yacc.c:1646  */
    break;

  case 1484:
#line 9946 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 16180 "parser.c" /* yacc.c:1646  */
    break;

  case 1485:
#line 9947 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16186 "parser.c" /* yacc.c:1646  */
    break;

  case 1486:
#line 9958 "parser.y" /* yacc.c:1646  */
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
#line 16202 "parser.c" /* yacc.c:1646  */
    break;

  case 1487:
#line 9970 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_FILE (cb_ref ((yyvsp[0])))->linage_ctr;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16215 "parser.c" /* yacc.c:1646  */
    break;

  case 1488:
#line 9979 "parser.y" /* yacc.c:1646  */
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
#line 16231 "parser.c" /* yacc.c:1646  */
    break;

  case 1489:
#line 9991 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->line_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16244 "parser.c" /* yacc.c:1646  */
    break;

  case 1490:
#line 10000 "parser.y" /* yacc.c:1646  */
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
#line 16260 "parser.c" /* yacc.c:1646  */
    break;

  case 1491:
#line 10012 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->page_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16273 "parser.c" /* yacc.c:1646  */
    break;

  case 1492:
#line 10026 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16279 "parser.c" /* yacc.c:1646  */
    break;

  case 1493:
#line 10028 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 16285 "parser.c" /* yacc.c:1646  */
    break;

  case 1494:
#line 10033 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-1]));
  }
#line 16293 "parser.c" /* yacc.c:1646  */
    break;

  case 1495:
#line 10041 "parser.y" /* yacc.c:1646  */
    { cb_build_identifier ((yyvsp[0]), 0); }
#line 16299 "parser.c" /* yacc.c:1646  */
    break;

  case 1496:
#line 10048 "parser.y" /* yacc.c:1646  */
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
#line 16318 "parser.c" /* yacc.c:1646  */
    break;

  case 1497:
#line 10068 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16326 "parser.c" /* yacc.c:1646  */
    break;

  case 1498:
#line 10072 "parser.y" /* yacc.c:1646  */
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
#line 16348 "parser.c" /* yacc.c:1646  */
    break;

  case 1499:
#line 10093 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16361 "parser.c" /* yacc.c:1646  */
    break;

  case 1500:
#line 10134 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16374 "parser.c" /* yacc.c:1646  */
    break;

  case 1501:
#line 10147 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 16380 "parser.c" /* yacc.c:1646  */
    break;

  case 1502:
#line 10149 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 16386 "parser.c" /* yacc.c:1646  */
    break;

  case 1503:
#line 10153 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16392 "parser.c" /* yacc.c:1646  */
    break;

  case 1504:
#line 10159 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16398 "parser.c" /* yacc.c:1646  */
    break;

  case 1505:
#line 10161 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 16404 "parser.c" /* yacc.c:1646  */
    break;

  case 1506:
#line 10166 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE ((yyval))->offset = CB_TREE (current_section);
	CB_REFERENCE ((yyval))->flag_in_decl = !!in_declaratives;
	CB_REFERENCE ((yyval))->section = current_section;
	CB_REFERENCE ((yyval))->paragraph = current_paragraph;
	CB_ADD_TO_CHAIN ((yyval), current_program->label_list);
  }
#line 16417 "parser.c" /* yacc.c:1646  */
    break;

  case 1509:
#line 10180 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 16425 "parser.c" /* yacc.c:1646  */
    break;

  case 1510:
#line 10187 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[0]))->data));
	(yyval)->source_file = (yyvsp[0])->source_file;
	(yyval)->source_line = (yyvsp[0])->source_line;
  }
#line 16435 "parser.c" /* yacc.c:1646  */
    break;

  case 1511:
#line 10197 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 16441 "parser.c" /* yacc.c:1646  */
    break;

  case 1512:
#line 10198 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 16447 "parser.c" /* yacc.c:1646  */
    break;

  case 1513:
#line 10203 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 16456 "parser.c" /* yacc.c:1646  */
    break;

  case 1514:
#line 10211 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 16465 "parser.c" /* yacc.c:1646  */
    break;

  case 1515:
#line 10219 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16473 "parser.c" /* yacc.c:1646  */
    break;

  case 1516:
#line 10223 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16481 "parser.c" /* yacc.c:1646  */
    break;

  case 1517:
#line 10230 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 16491 "parser.c" /* yacc.c:1646  */
    break;

  case 1520:
#line 10246 "parser.y" /* yacc.c:1646  */
    {
	if (CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[0]);
	}
  }
#line 16504 "parser.c" /* yacc.c:1646  */
    break;

  case 1521:
#line 10260 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE ((yyvsp[0]))->flag_duped || CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = NULL;
	} else {
		CB_WORD_COUNT ((yyvsp[0]))++;
		(yyval) = (yyvsp[0]);
	}
  }
#line 16518 "parser.c" /* yacc.c:1646  */
    break;

  case 1522:
#line 10277 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16526 "parser.c" /* yacc.c:1646  */
    break;

  case 1523:
#line 10281 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16534 "parser.c" /* yacc.c:1646  */
    break;

  case 1526:
#line 10290 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 16542 "parser.c" /* yacc.c:1646  */
    break;

  case 1527:
#line 10296 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16548 "parser.c" /* yacc.c:1646  */
    break;

  case 1528:
#line 10297 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16554 "parser.c" /* yacc.c:1646  */
    break;

  case 1529:
#line 10302 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16562 "parser.c" /* yacc.c:1646  */
    break;

  case 1530:
#line 10306 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16570 "parser.c" /* yacc.c:1646  */
    break;

  case 1535:
#line 10317 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16578 "parser.c" /* yacc.c:1646  */
    break;

  case 1536:
#line 10321 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16586 "parser.c" /* yacc.c:1646  */
    break;

  case 1537:
#line 10325 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16594 "parser.c" /* yacc.c:1646  */
    break;

  case 1538:
#line 10329 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_ppointer ((yyvsp[0]));
  }
#line 16602 "parser.c" /* yacc.c:1646  */
    break;

  case 1539:
#line 10333 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 16610 "parser.c" /* yacc.c:1646  */
    break;

  case 1540:
#line 10337 "parser.y" /* yacc.c:1646  */
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
#line 16632 "parser.c" /* yacc.c:1646  */
    break;

  case 1541:
#line 10358 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16640 "parser.c" /* yacc.c:1646  */
    break;

  case 1542:
#line 10362 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16648 "parser.c" /* yacc.c:1646  */
    break;

  case 1550:
#line 10379 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16656 "parser.c" /* yacc.c:1646  */
    break;

  case 1551:
#line 10383 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16664 "parser.c" /* yacc.c:1646  */
    break;

  case 1552:
#line 10387 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16672 "parser.c" /* yacc.c:1646  */
    break;

  case 1561:
#line 10421 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 16680 "parser.c" /* yacc.c:1646  */
    break;

  case 1563:
#line 10429 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 16688 "parser.c" /* yacc.c:1646  */
    break;

  case 1566:
#line 10438 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 16696 "parser.c" /* yacc.c:1646  */
    break;

  case 1568:
#line 10443 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_zero;
  }
#line 16704 "parser.c" /* yacc.c:1646  */
    break;

  case 1569:
#line 10450 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 16712 "parser.c" /* yacc.c:1646  */
    break;

  case 1571:
#line 10458 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 16720 "parser.c" /* yacc.c:1646  */
    break;

  case 1573:
#line 10466 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 16728 "parser.c" /* yacc.c:1646  */
    break;

  case 1576:
#line 10476 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 0); }
#line 16734 "parser.c" /* yacc.c:1646  */
    break;

  case 1577:
#line 10480 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 1); }
#line 16740 "parser.c" /* yacc.c:1646  */
    break;

  case 1578:
#line 10484 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16746 "parser.c" /* yacc.c:1646  */
    break;

  case 1579:
#line 10485 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 16752 "parser.c" /* yacc.c:1646  */
    break;

  case 1580:
#line 10489 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 0); }
#line 16758 "parser.c" /* yacc.c:1646  */
    break;

  case 1581:
#line 10494 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 16769 "parser.c" /* yacc.c:1646  */
    break;

  case 1582:
#line 10501 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 16780 "parser.c" /* yacc.c:1646  */
    break;

  case 1583:
#line 10508 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 16791 "parser.c" /* yacc.c:1646  */
    break;

  case 1584:
#line 10515 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 16802 "parser.c" /* yacc.c:1646  */
    break;

  case 1585:
#line 10525 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_identifier ((yyvsp[0]), 0);
  }
#line 16810 "parser.c" /* yacc.c:1646  */
    break;

  case 1586:
#line 10532 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (CB_REFERENCE_P ((yyvsp[-2]))) {
		CB_REFERENCE ((yyvsp[-2]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 16824 "parser.c" /* yacc.c:1646  */
    break;

  case 1587:
#line 10542 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 16838 "parser.c" /* yacc.c:1646  */
    break;

  case 1588:
#line 10552 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 16852 "parser.c" /* yacc.c:1646  */
    break;

  case 1589:
#line 10562 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (CB_REFERENCE_P ((yyvsp[0]))) {
		CB_REFERENCE ((yyvsp[0]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 16866 "parser.c" /* yacc.c:1646  */
    break;

  case 1590:
#line 10575 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 16874 "parser.c" /* yacc.c:1646  */
    break;

  case 1591:
#line 10579 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 16883 "parser.c" /* yacc.c:1646  */
    break;

  case 1592:
#line 10587 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-3]))->subs = cb_list_reverse ((yyvsp[-1]));
  }
#line 16892 "parser.c" /* yacc.c:1646  */
    break;

  case 1593:
#line 10595 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-4]))->offset = (yyvsp[-2]);
  }
#line 16900 "parser.c" /* yacc.c:1646  */
    break;

  case 1594:
#line 10599 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-5]))->offset = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-5]))->length = (yyvsp[-1]);
  }
#line 16909 "parser.c" /* yacc.c:1646  */
    break;

  case 1595:
#line 10609 "parser.y" /* yacc.c:1646  */
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
#line 16924 "parser.c" /* yacc.c:1646  */
    break;

  case 1596:
#line 10623 "parser.y" /* yacc.c:1646  */
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
#line 16948 "parser.c" /* yacc.c:1646  */
    break;

  case 1597:
#line 10646 "parser.y" /* yacc.c:1646  */
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
#line 16971 "parser.c" /* yacc.c:1646  */
    break;

  case 1598:
#line 10668 "parser.y" /* yacc.c:1646  */
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
#line 16991 "parser.c" /* yacc.c:1646  */
    break;

  case 1599:
#line 10683 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 16997 "parser.c" /* yacc.c:1646  */
    break;

  case 1600:
#line 10684 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 17003 "parser.c" /* yacc.c:1646  */
    break;

  case 1601:
#line 10685 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 17009 "parser.c" /* yacc.c:1646  */
    break;

  case 1602:
#line 10686 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 17015 "parser.c" /* yacc.c:1646  */
    break;

  case 1603:
#line 10687 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 17021 "parser.c" /* yacc.c:1646  */
    break;

  case 1604:
#line 10688 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 17027 "parser.c" /* yacc.c:1646  */
    break;

  case 1605:
#line 10693 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17035 "parser.c" /* yacc.c:1646  */
    break;

  case 1606:
#line 10697 "parser.y" /* yacc.c:1646  */
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
#line 17053 "parser.c" /* yacc.c:1646  */
    break;

  case 1607:
#line 10714 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17061 "parser.c" /* yacc.c:1646  */
    break;

  case 1608:
#line 10718 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_concat_literals ((yyvsp[-2]), (yyvsp[0]));
  }
#line 17069 "parser.c" /* yacc.c:1646  */
    break;

  case 1609:
#line 10724 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17075 "parser.c" /* yacc.c:1646  */
    break;

  case 1610:
#line 10725 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 17081 "parser.c" /* yacc.c:1646  */
    break;

  case 1611:
#line 10726 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 17087 "parser.c" /* yacc.c:1646  */
    break;

  case 1612:
#line 10727 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 17093 "parser.c" /* yacc.c:1646  */
    break;

  case 1613:
#line 10728 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 17099 "parser.c" /* yacc.c:1646  */
    break;

  case 1614:
#line 10729 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 17105 "parser.c" /* yacc.c:1646  */
    break;

  case 1615:
#line 10730 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 17111 "parser.c" /* yacc.c:1646  */
    break;

  case 1616:
#line 10737 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), NULL, (yyvsp[0]), 0);
  }
#line 17119 "parser.c" /* yacc.c:1646  */
    break;

  case 1617:
#line 10741 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), CB_LIST_INIT ((yyvsp[-2])), (yyvsp[0]), 0);
  }
#line 17127 "parser.c" /* yacc.c:1646  */
    break;

  case 1618:
#line 10745 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17135 "parser.c" /* yacc.c:1646  */
    break;

  case 1619:
#line 10749 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17143 "parser.c" /* yacc.c:1646  */
    break;

  case 1620:
#line 10753 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-3]), (yyvsp[-1]), NULL, 0);
  }
#line 17151 "parser.c" /* yacc.c:1646  */
    break;

  case 1621:
#line 10757 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17159 "parser.c" /* yacc.c:1646  */
    break;

  case 1622:
#line 10761 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17167 "parser.c" /* yacc.c:1646  */
    break;

  case 1623:
#line 10765 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17175 "parser.c" /* yacc.c:1646  */
    break;

  case 1624:
#line 10769 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17183 "parser.c" /* yacc.c:1646  */
    break;

  case 1625:
#line 10773 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17191 "parser.c" /* yacc.c:1646  */
    break;

  case 1626:
#line 10777 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 0);
  }
#line 17199 "parser.c" /* yacc.c:1646  */
    break;

  case 1627:
#line 10781 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 1);
  }
#line 17207 "parser.c" /* yacc.c:1646  */
    break;

  case 1637:
#line 10806 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17215 "parser.c" /* yacc.c:1646  */
    break;

  case 1638:
#line 10810 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), NULL);
  }
#line 17223 "parser.c" /* yacc.c:1646  */
    break;

  case 1639:
#line 10814 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 17231 "parser.c" /* yacc.c:1646  */
    break;

  case 1640:
#line 10821 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17239 "parser.c" /* yacc.c:1646  */
    break;

  case 1641:
#line 10825 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 17247 "parser.c" /* yacc.c:1646  */
    break;

  case 1642:
#line 10829 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17255 "parser.c" /* yacc.c:1646  */
    break;

  case 1643:
#line 10836 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_int0);
  }
#line 17266 "parser.c" /* yacc.c:1646  */
    break;

  case 1644:
#line 10843 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int1);
  }
#line 17277 "parser.c" /* yacc.c:1646  */
    break;

  case 1645:
#line 10850 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int2);
  }
#line 17288 "parser.c" /* yacc.c:1646  */
    break;

  case 1646:
#line 10860 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 17299 "parser.c" /* yacc.c:1646  */
    break;

  case 1647:
#line 10867 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, (yyvsp[0]));
  }
#line 17310 "parser.c" /* yacc.c:1646  */
    break;

  case 1648:
#line 10877 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 17321 "parser.c" /* yacc.c:1646  */
    break;

  case 1649:
#line 10884 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[0])));
  }
#line 17332 "parser.c" /* yacc.c:1646  */
    break;

  case 1650:
#line 10894 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 17340 "parser.c" /* yacc.c:1646  */
    break;

  case 1651:
#line 10898 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 4) {
		cb_error_x ((yyvsp[-2]), _("Cannot specify offset and SYSTEM-OFFSET at the same time."));
	}

	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 17354 "parser.c" /* yacc.c:1646  */
    break;

  case 1652:
#line 10911 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 17362 "parser.c" /* yacc.c:1646  */
    break;

  case 1653:
#line 10915 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 3) {
		cb_error_x ((yyvsp[-2]), _("Cannot specify offset and SYSTEM-OFFSET at the same time."));
	}

	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 17376 "parser.c" /* yacc.c:1646  */
    break;

  case 1654:
#line 10929 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 1;
  }
#line 17384 "parser.c" /* yacc.c:1646  */
    break;

  case 1655:
#line 10937 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17390 "parser.c" /* yacc.c:1646  */
    break;

  case 1656:
#line 10938 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17396 "parser.c" /* yacc.c:1646  */
    break;

  case 1657:
#line 10942 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17402 "parser.c" /* yacc.c:1646  */
    break;

  case 1658:
#line 10943 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17408 "parser.c" /* yacc.c:1646  */
    break;

  case 1659:
#line 10947 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17414 "parser.c" /* yacc.c:1646  */
    break;

  case 1660:
#line 10948 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17420 "parser.c" /* yacc.c:1646  */
    break;

  case 1661:
#line 10953 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17428 "parser.c" /* yacc.c:1646  */
    break;

  case 1662:
#line 10957 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17436 "parser.c" /* yacc.c:1646  */
    break;

  case 1663:
#line 10964 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17444 "parser.c" /* yacc.c:1646  */
    break;

  case 1664:
#line 10968 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17452 "parser.c" /* yacc.c:1646  */
    break;

  case 1665:
#line 10975 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17458 "parser.c" /* yacc.c:1646  */
    break;

  case 1666:
#line 10976 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17464 "parser.c" /* yacc.c:1646  */
    break;

  case 1667:
#line 10977 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 17470 "parser.c" /* yacc.c:1646  */
    break;

  case 1668:
#line 10981 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17476 "parser.c" /* yacc.c:1646  */
    break;

  case 1669:
#line 10982 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 17482 "parser.c" /* yacc.c:1646  */
    break;

  case 1670:
#line 10986 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (cb_flag_optional_file); }
#line 17488 "parser.c" /* yacc.c:1646  */
    break;

  case 1671:
#line 10987 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17494 "parser.c" /* yacc.c:1646  */
    break;

  case 1672:
#line 10988 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17500 "parser.c" /* yacc.c:1646  */
    break;

  case 1673:
#line 10993 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 17508 "parser.c" /* yacc.c:1646  */
    break;

  case 1674:
#line 10997 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int (COB_STORE_ROUND);
	}
	cobc_cs_check = 0;
  }
#line 17521 "parser.c" /* yacc.c:1646  */
    break;

  case 1675:
#line 11009 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 17530 "parser.c" /* yacc.c:1646  */
    break;

  case 1676:
#line 11014 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	cobc_cs_check = 0;
  }
#line 17539 "parser.c" /* yacc.c:1646  */
    break;

  case 1677:
#line 11022 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
#line 17547 "parser.c" /* yacc.c:1646  */
    break;

  case 1678:
#line 11026 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
#line 17555 "parser.c" /* yacc.c:1646  */
    break;

  case 1679:
#line 11030 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
#line 17563 "parser.c" /* yacc.c:1646  */
    break;

  case 1680:
#line 11034 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
#line 17571 "parser.c" /* yacc.c:1646  */
    break;

  case 1681:
#line 11038 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
#line 17579 "parser.c" /* yacc.c:1646  */
    break;

  case 1682:
#line 11042 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
#line 17587 "parser.c" /* yacc.c:1646  */
    break;

  case 1683:
#line 11046 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
#line 17595 "parser.c" /* yacc.c:1646  */
    break;

  case 1684:
#line 11050 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
#line 17603 "parser.c" /* yacc.c:1646  */
    break;

  case 1685:
#line 11056 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17609 "parser.c" /* yacc.c:1646  */
    break;

  case 1686:
#line 11057 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17615 "parser.c" /* yacc.c:1646  */
    break;


#line 17619 "parser.c" /* yacc.c:1646  */
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
#line 11228 "parser.y" /* yacc.c:1906  */

