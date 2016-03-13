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
    PRINT = 592,
    PRINTER = 593,
    PRINTER_1 = 594,
    PRINTING = 595,
    PROCEDURE = 596,
    PROCEDURES = 597,
    PROCEED = 598,
    PROGRAM = 599,
    PROGRAM_ID = 600,
    PROGRAM_NAME = 601,
    PROGRAM_POINTER = 602,
    PROHIBITED = 603,
    PROMPT = 604,
    PROTECTED = 605,
    QUOTE = 606,
    RANDOM = 607,
    RD = 608,
    READ = 609,
    READY_TRACE = 610,
    RECORD = 611,
    RECORDING = 612,
    RECORDS = 613,
    RECURSIVE = 614,
    REDEFINES = 615,
    REEL = 616,
    REFERENCE = 617,
    REFERENCES = 618,
    RELATIVE = 619,
    RELEASE = 620,
    REMAINDER = 621,
    REMOVAL = 622,
    RENAMES = 623,
    REPLACE = 624,
    REPLACING = 625,
    REPORT = 626,
    REPORTING = 627,
    REPORTS = 628,
    REPOSITORY = 629,
    REPO_FUNCTION = 630,
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
    USER_REPO_FUNCTION = 758,
    USING = 759,
    VALUE = 760,
    VARYING = 761,
    WAIT = 762,
    WHEN = 763,
    WHEN_COMPILED_FUNC = 764,
    WITH = 765,
    WORD = 766,
    WORDS = 767,
    WORKING_STORAGE = 768,
    WRITE = 769,
    YYYYDDD = 770,
    YYYYMMDD = 771,
    ZERO = 772,
    SHIFT_PREFER = 773
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

#line 1596 "parser.c" /* yacc.c:358  */

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
#define YYLAST   8726

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  519
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  826
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1926
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  2758

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   773

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
     515,   516,   517,   518
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  1611,  1611,  1611,  1643,  1644,  1648,  1649,  1653,  1654,
    1658,  1658,  1681,  1688,  1695,  1701,  1702,  1703,  1707,  1708,
    1712,  1736,  1737,  1741,  1775,  1781,  1789,  1767,  1799,  1798,
    1836,  1868,  1869,  1873,  1874,  1877,  1878,  1882,  1891,  1900,
    1901,  1905,  1909,  1918,  1919,  1927,  1928,  1938,  1939,  1943,
    1944,  1945,  1946,  1947,  1954,  1953,  1966,  1967,  1970,  1971,
    1985,  1984,  1994,  1995,  1996,  1997,  2001,  2002,  2006,  2007,
    2008,  2009,  2013,  2021,  2028,  2035,  2046,  2050,  2054,  2058,
    2065,  2066,  2073,  2072,  2083,  2084,  2085,  2092,  2093,  2097,
    2101,  2113,  2117,  2118,  2123,  2126,  2133,  2138,  2149,  2162,
    2163,  2171,  2172,  2176,  2177,  2178,  2179,  2180,  2181,  2182,
    2183,  2184,  2185,  2186,  2187,  2195,  2194,  2222,  2232,  2245,
    2253,  2256,  2257,  2261,  2268,  2283,  2304,  2303,  2327,  2333,
    2339,  2345,  2351,  2357,  2367,  2371,  2378,  2382,  2387,  2386,
    2397,  2401,  2408,  2409,  2410,  2411,  2412,  2413,  2417,  2418,
    2425,  2440,  2443,  2450,  2458,  2462,  2473,  2493,  2501,  2512,
    2513,  2519,  2540,  2541,  2545,  2549,  2570,  2593,  2675,  2678,
    2687,  2706,  2722,  2740,  2758,  2775,  2791,  2792,  2799,  2800,
    2808,  2809,  2819,  2820,  2825,  2824,  2845,  2855,  2856,  2860,
    2861,  2862,  2863,  2864,  2865,  2866,  2867,  2868,  2869,  2870,
    2871,  2872,  2879,  2885,  2895,  2908,  2921,  2948,  2949,  2950,
    2954,  2955,  2956,  2957,  2960,  2961,  2967,  2968,  2972,  2976,
    2977,  2982,  2985,  2986,  2993,  3001,  3002,  3003,  3010,  3034,
    3036,  3041,  3051,  3062,  3069,  3071,  3072,  3078,  3078,  3085,
    3090,  3095,  3102,  3103,  3104,  3108,  3119,  3120,  3124,  3129,
    3134,  3139,  3150,  3161,  3171,  3179,  3180,  3181,  3187,  3198,
    3205,  3206,  3212,  3220,  3221,  3222,  3228,  3229,  3230,  3237,
    3238,  3242,  3243,  3249,  3277,  3278,  3279,  3280,  3287,  3286,
    3302,  3303,  3307,  3310,  3311,  3317,  3318,  3326,  3327,  3335,
    3336,  3340,  3361,  3360,  3377,  3384,  3388,  3394,  3395,  3399,
    3409,  3424,  3425,  3426,  3427,  3428,  3429,  3430,  3431,  3432,
    3439,  3446,  3446,  3446,  3452,  3472,  3506,  3537,  3538,  3545,
    3546,  3550,  3551,  3558,  3569,  3574,  3585,  3586,  3590,  3591,
    3597,  3608,  3626,  3627,  3631,  3632,  3633,  3637,  3644,  3651,
    3660,  3672,  3724,  3739,  3740,  3744,  3754,  3768,  3770,  3769,
    3785,  3788,  3788,  3805,  3806,  3808,  3812,  3814,  3813,  3848,
    3861,  3869,  3874,  3880,  3889,  3899,  3902,  3914,  3915,  3916,
    3917,  3921,  3925,  3929,  3933,  3937,  3941,  3945,  3949,  3953,
    3957,  3961,  3965,  3969,  3980,  3981,  3985,  3986,  3990,  3991,
    3992,  3996,  3997,  4001,  4027,  4031,  4040,  4044,  4053,  4054,
    4055,  4056,  4057,  4058,  4059,  4060,  4061,  4062,  4063,  4064,
    4065,  4066,  4073,  4097,  4125,  4128,  4137,  4162,  4173,  4174,
    4178,  4182,  4186,  4190,  4194,  4198,  4202,  4206,  4210,  4214,
    4218,  4222,  4226,  4231,  4236,  4240,  4244,  4252,  4256,  4260,
    4268,  4272,  4276,  4280,  4284,  4288,  4292,  4296,  4300,  4308,
    4316,  4320,  4324,  4328,  4332,  4336,  4344,  4345,  4349,  4350,
    4356,  4362,  4374,  4392,  4393,  4402,  4434,  4464,  4465,  4469,
    4470,  4473,  4474,  4480,  4481,  4488,  4489,  4496,  4520,  4521,
    4538,  4539,  4542,  4543,  4550,  4551,  4556,  4567,  4578,  4589,
    4600,  4629,  4628,  4637,  4638,  4642,  4643,  4646,  4647,  4660,
    4673,  4694,  4703,  4717,  4719,  4718,  4738,  4740,  4739,  4755,
    4757,  4756,  4765,  4766,  4773,  4772,  4785,  4786,  4787,  4794,
    4799,  4803,  4804,  4810,  4817,  4821,  4822,  4828,  4865,  4869,
    4874,  4880,  4881,  4886,  4887,  4888,  4889,  4890,  4894,  4901,
    4908,  4915,  4922,  4928,  4929,  4934,  4933,  4940,  4941,  4945,
    4946,  4947,  4948,  4949,  4950,  4951,  4952,  4953,  4954,  4955,
    4956,  4957,  4958,  4959,  4960,  4964,  4971,  4972,  4973,  4974,
    4975,  4976,  4977,  4980,  4981,  4982,  4985,  4986,  4990,  4997,
    5003,  5004,  5008,  5009,  5013,  5020,  5024,  5031,  5032,  5036,
    5043,  5044,  5048,  5049,  5053,  5054,  5055,  5059,  5060,  5064,
    5065,  5069,  5076,  5083,  5091,  5093,  5092,  5113,  5114,  5118,
    5119,  5123,  5125,  5124,  5192,  5210,  5211,  5215,  5220,  5225,
    5229,  5233,  5238,  5243,  5248,  5253,  5257,  5261,  5266,  5271,
    5276,  5280,  5284,  5288,  5292,  5297,  5301,  5305,  5310,  5315,
    5320,  5325,  5326,  5327,  5328,  5329,  5330,  5331,  5332,  5333,
    5342,  5347,  5358,  5359,  5363,  5364,  5368,  5369,  5373,  5374,
    5379,  5382,  5386,  5394,  5397,  5401,  5409,  5420,  5428,  5430,
    5440,  5429,  5467,  5467,  5500,  5504,  5503,  5517,  5516,  5536,
    5537,  5542,  5557,  5559,  5563,  5574,  5576,  5584,  5592,  5600,
    5629,  5662,  5665,  5678,  5683,  5714,  5716,  5715,  5752,  5753,
    5757,  5758,  5759,  5776,  5777,  5788,  5787,  5837,  5838,  5842,
    5890,  5903,  5906,  5925,  5930,  5924,  5943,  5943,  5973,  5980,
    5981,  5982,  5983,  5984,  5985,  5986,  5987,  5988,  5989,  5990,
    5991,  5992,  5993,  5994,  5995,  5996,  5997,  5998,  5999,  6000,
    6001,  6002,  6003,  6004,  6005,  6006,  6007,  6008,  6009,  6010,
    6011,  6012,  6013,  6014,  6015,  6016,  6017,  6018,  6019,  6020,
    6021,  6022,  6023,  6024,  6025,  6026,  6027,  6028,  6029,  6043,
    6055,  6054,  6070,  6069,  6080,  6084,  6088,  6093,  6098,  6103,
    6108,  6112,  6116,  6120,  6124,  6129,  6133,  6137,  6141,  6145,
    6149,  6153,  6160,  6161,  6167,  6169,  6173,  6174,  6178,  6179,
    6183,  6187,  6191,  6192,  6196,  6208,  6220,  6231,  6235,  6236,
    6240,  6247,  6251,  6257,  6261,  6265,  6269,  6273,  6279,  6283,
    6287,  6293,  6297,  6301,  6305,  6309,  6313,  6317,  6321,  6325,
    6329,  6333,  6339,  6343,  6347,  6351,  6355,  6359,  6363,  6370,
    6371,  6375,  6379,  6397,  6396,  6405,  6409,  6413,  6419,  6420,
    6427,  6431,  6442,  6441,  6450,  6454,  6466,  6467,  6475,  6474,
    6483,  6484,  6488,  6494,  6494,  6501,  6500,  6510,  6530,  6534,
    6539,  6544,  6565,  6569,  6568,  6585,  6586,  6591,  6599,  6623,
    6625,  6629,  6638,  6651,  6654,  6658,  6662,  6685,  6686,  6690,
    6691,  6696,  6699,  6704,  6713,  6717,  6725,  6729,  6740,  6739,
    6747,  6751,  6762,  6761,  6769,  6774,  6782,  6783,  6784,  6785,
    6786,  6794,  6793,  6802,  6809,  6813,  6823,  6834,  6852,  6851,
    6860,  6864,  6868,  6873,  6881,  6885,  6896,  6895,  6905,  6909,
    6913,  6917,  6921,  6925,  6930,  6937,  6938,  6943,  6942,  7007,
    7011,  7019,  7020,  7024,  7028,  7033,  7037,  7038,  7042,  7046,
    7050,  7054,  7058,  7059,  7063,  7067,  7073,  7079,  7083,  7087,
    7093,  7099,  7105,  7111,  7115,  7119,  7123,  7127,  7131,  7135,
    7139,  7146,  7150,  7161,  7160,  7169,  7173,  7177,  7181,  7185,
    7192,  7196,  7207,  7206,  7215,  7234,  7233,  7257,  7265,  7266,
    7271,  7282,  7293,  7307,  7311,  7318,  7319,  7324,  7333,  7342,
    7347,  7356,  7357,  7362,  7424,  7425,  7426,  7430,  7431,  7435,
    7439,  7450,  7449,  7461,  7462,  7483,  7497,  7519,  7541,  7561,
    7584,  7585,  7593,  7592,  7601,  7612,  7611,  7621,  7628,  7627,
    7640,  7649,  7653,  7664,  7680,  7679,  7688,  7692,  7696,  7703,
    7707,  7718,  7717,  7725,  7733,  7734,  7738,  7739,  7740,  7745,
    7748,  7755,  7759,  7767,  7774,  7775,  7776,  7777,  7778,  7779,
    7780,  7785,  7788,  7798,  7797,  7806,  7812,  7824,  7823,  7832,
    7836,  7840,  7844,  7851,  7852,  7853,  7854,  7861,  7860,  7874,
    7884,  7893,  7894,  7898,  7899,  7900,  7901,  7902,  7903,  7907,
    7908,  7912,  7917,  7924,  7925,  7926,  7927,  7928,  7932,  7960,
    7963,  7970,  7974,  7984,  7983,  7996,  7995,  8003,  8007,  8018,
    8017,  8026,  8030,  8037,  8041,  8052,  8051,  8059,  8080,  8104,
    8105,  8106,  8107,  8111,  8112,  8116,  8117,  8118,  8119,  8131,
    8130,  8141,  8147,  8146,  8157,  8165,  8173,  8180,  8184,  8197,
    8204,  8216,  8219,  8224,  8228,  8239,  8246,  8247,  8251,  8252,
    8255,  8256,  8261,  8272,  8271,  8280,  8307,  8308,  8313,  8316,
    8320,  8324,  8328,  8332,  8336,  8343,  8344,  8348,  8349,  8353,
    8357,  8367,  8378,  8377,  8385,  8395,  8406,  8405,  8414,  8421,
    8425,  8436,  8435,  8447,  8456,  8459,  8463,  8470,  8474,  8484,
    8496,  8495,  8504,  8508,  8517,  8518,  8523,  8526,  8534,  8538,
    8545,  8553,  8557,  8568,  8567,  8581,  8582,  8583,  8584,  8585,
    8586,  8590,  8591,  8595,  8596,  8602,  8611,  8618,  8619,  8623,
    8627,  8631,  8637,  8643,  8647,  8651,  8655,  8664,  8668,  8677,
    8686,  8687,  8691,  8700,  8701,  8705,  8709,  8720,  8719,  8728,
    8727,  8758,  8761,  8781,  8782,  8785,  8786,  8794,  8795,  8800,
    8805,  8815,  8831,  8836,  8846,  8863,  8862,  8872,  8885,  8888,
    8896,  8899,  8904,  8909,  8917,  8918,  8919,  8920,  8921,  8922,
    8926,  8934,  8935,  8939,  8943,  8954,  8953,  8963,  8976,  8979,
    8983,  8991,  9003,  9006,  9013,  9014,  9015,  9016,  9023,  9022,
    9031,  9038,  9039,  9043,  9044,  9045,  9049,  9050,  9054,  9058,
    9069,  9068,  9077,  9081,  9085,  9092,  9096,  9106,  9117,  9118,
    9125,  9124,  9133,  9139,  9151,  9150,  9158,  9172,  9171,  9179,
    9192,  9194,  9195,  9203,  9202,  9211,  9219,  9220,  9225,  9226,
    9231,  9238,  9239,  9244,  9251,  9252,  9256,  9257,  9261,  9262,
    9266,  9270,  9281,  9280,  9289,  9290,  9291,  9292,  9293,  9297,
    9324,  9327,  9339,  9349,  9354,  9359,  9364,  9372,  9410,  9411,
    9415,  9455,  9465,  9488,  9489,  9490,  9491,  9495,  9504,  9510,
    9520,  9529,  9538,  9539,  9546,  9545,  9557,  9567,  9568,  9573,
    9576,  9580,  9584,  9591,  9592,  9596,  9597,  9601,  9605,  9617,
    9620,  9621,  9630,  9631,  9635,  9636,  9645,  9646,  9650,  9653,
    9654,  9663,  9664,  9675,  9678,  9679,  9688,  9689,  9701,  9704,
    9706,  9716,  9717,  9729,  9730,  9734,  9735,  9736,  9740,  9749,
    9760,  9761,  9762,  9766,  9775,  9786,  9791,  9792,  9801,  9802,
    9813,  9817,  9827,  9834,  9841,  9841,  9852,  9853,  9854,  9858,
    9867,  9868,  9870,  9871,  9872,  9873,  9874,  9876,  9877,  9878,
    9879,  9880,  9881,  9883,  9884,  9885,  9887,  9888,  9889,  9890,
    9891,  9894,  9895,  9899,  9900,  9904,  9905,  9909,  9910,  9914,
    9918,  9924,  9928,  9934,  9935,  9936,  9940,  9941,  9942,  9946,
    9947,  9948,  9952,  9956,  9960,  9961,  9962,  9965,  9966,  9976,
    9988,  9997, 10009, 10018, 10030, 10045, 10046, 10051, 10060, 10066,
   10086, 10090, 10111, 10152, 10166, 10167, 10172, 10178, 10179, 10184,
   10196, 10197, 10198, 10205, 10216, 10217, 10221, 10229, 10237, 10241,
   10248, 10257, 10258, 10264, 10278, 10295, 10299, 10306, 10307, 10308,
   10315, 10316, 10320, 10324, 10331, 10332, 10333, 10334, 10335, 10339,
   10343, 10347, 10351, 10355, 10376, 10380, 10387, 10388, 10389, 10393,
   10394, 10395, 10396, 10397, 10401, 10405, 10412, 10413, 10417, 10418,
   10422, 10423, 10427, 10428, 10439, 10443, 10447, 10451, 10452, 10456,
   10460, 10461, 10468, 10472, 10476, 10480, 10484, 10488, 10489, 10495,
   10499, 10503, 10504, 10508, 10512, 10519, 10526, 10533, 10543, 10550,
   10560, 10570, 10580, 10593, 10597, 10605, 10613, 10617, 10627, 10641,
   10664, 10686, 10702, 10703, 10704, 10705, 10706, 10707, 10711, 10715,
   10732, 10736, 10743, 10744, 10745, 10746, 10747, 10748, 10749, 10755,
   10759, 10763, 10767, 10771, 10775, 10779, 10783, 10787, 10791, 10795,
   10799, 10806, 10807, 10811, 10812, 10813, 10817, 10818, 10819, 10820,
   10824, 10828, 10832, 10839, 10843, 10847, 10854, 10861, 10868, 10878,
   10885, 10895, 10902, 10912, 10916, 10929, 10933, 10948, 10956, 10957,
   10961, 10962, 10966, 10967, 10972, 10975, 10983, 10986, 10993, 10995,
   10996, 11000, 11001, 11005, 11006, 11007, 11012, 11015, 11028, 11032,
   11040, 11044, 11048, 11052, 11056, 11060, 11064, 11068, 11075, 11076,
   11082, 11083, 11084, 11085, 11086, 11087, 11088, 11089, 11090, 11091,
   11092, 11093, 11094, 11095, 11096, 11097, 11098, 11099, 11100, 11101,
   11102, 11103, 11104, 11105, 11106, 11107, 11108, 11109, 11110, 11111,
   11112, 11113, 11114, 11115, 11116, 11117, 11118, 11119, 11120, 11121,
   11122, 11123, 11124, 11125, 11126, 11127, 11128, 11129, 11130, 11131,
   11132, 11133, 11134, 11135, 11136, 11137, 11138, 11139, 11140, 11141,
   11142, 11143, 11144, 11145, 11146, 11147, 11148, 11149, 11150, 11151,
   11158, 11158, 11159, 11159, 11160, 11160, 11161, 11161, 11162, 11162,
   11163, 11163, 11164, 11164, 11165, 11165, 11166, 11166, 11167, 11167,
   11168, 11168, 11169, 11169, 11170, 11170, 11171, 11171, 11172, 11172,
   11173, 11173, 11174, 11174, 11175, 11175, 11176, 11176, 11176, 11177,
   11177, 11178, 11178, 11179, 11179, 11180, 11180, 11181, 11181, 11181,
   11182, 11182, 11183, 11183, 11183, 11184, 11184, 11184, 11185, 11185,
   11185, 11186, 11186, 11187, 11187, 11188, 11188, 11189, 11189, 11189,
   11190, 11190, 11191, 11191, 11192, 11192, 11192, 11192, 11193, 11193,
   11194, 11194, 11195, 11195, 11196, 11196, 11197, 11197, 11198, 11198,
   11199, 11199, 11200, 11200, 11200, 11201, 11201, 11202, 11202, 11203,
   11203, 11204, 11204, 11205, 11205, 11206, 11206, 11207, 11207, 11208,
   11208, 11208, 11209, 11209, 11210, 11210, 11211, 11211, 11215, 11215,
   11216, 11216, 11217, 11217, 11218, 11218, 11219, 11219, 11220, 11220,
   11221, 11221, 11222, 11222, 11223, 11223, 11224, 11224, 11225, 11225,
   11226, 11226, 11227, 11227, 11228, 11228, 11229, 11229, 11232, 11233,
   11234, 11238, 11238, 11239, 11239, 11240, 11240, 11241, 11241, 11242,
   11242, 11243, 11243, 11244, 11244, 11245, 11245
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
  "POSITIVE", "PRESENT", "PREVIOUS", "PRINT", "PRINTER", "PRINTER_1",
  "PRINTING", "PROCEDURE", "PROCEDURES", "PROCEED", "PROGRAM",
  "\"PROGRAM-ID\"", "\"Program name\"", "\"PROGRAM-POINTER\"",
  "PROHIBITED", "PROMPT", "\"PROTECTED\"", "QUOTE", "RANDOM", "RD", "READ",
  "\"READY TRACE\"", "RECORD", "RECORDING", "RECORDS", "RECURSIVE",
  "REDEFINES", "REEL", "REFERENCE", "REFERENCES", "RELATIVE", "RELEASE",
  "REMAINDER", "REMOVAL", "RENAMES", "REPLACE", "REPLACING", "REPORT",
  "REPORTING", "REPORTS", "REPOSITORY", "\"Intrinsic function name\"",
  "REQUIRED", "RESERVE", "RESET", "\"RESET TRACE\"", "RETURN", "RETURNING",
  "\"FUNCTION REVERSE\"", "\"REVERSE-VIDEO\"", "REVERSED", "REWIND",
  "REWRITE", "RF", "RH", "RIGHT", "ROLLBACK", "ROUNDED", "RUN", "SAME",
  "SCREEN", "\"SCREEN-CONTROL\"", "SCROLL", "SD", "SEARCH", "SECTION",
  "SECURE", "\"SEGMENT-LIMIT\"", "SELECT", "\"semi-colon\"", "SENTENCE",
  "SEPARATE", "SEQUENCE", "SEQUENTIAL", "SET", "SHARING", "SIGN", "SIGNED",
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
  "printer_name", "device_name", "_line_adv_file", "_ext_clause",
  "assignment_name", "opt_assignment_name", "access_mode_clause",
  "access_mode", "alternative_record_key_clause", "suppress_clause",
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
     765,   766,   767,   768,   769,   770,   771,   772,   773
};
# endif

#define YYPACT_NINF -2450

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-2450)))

#define YYTABLE_NINF -1877

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -2450,   248,   -21, -2450,   256,   303, -2450,   -21, -2450, -2450,
     643, -2450, -2450,   643,   643,   -62,   -62, -2450,   741, -2450,
     720,   577,   768, -2450, -2450,   961,   961,   624,   607, -2450,
   -2450,    17,   643,   -62, -2450, -2450,   849,   661, -2450, -2450,
     775,  1520,   -62, -2450, -2450, -2450,   577,   794, -2450, -2450,
     381, -2450,   793,   793,   895,   936,  1166,  1166,  1166,  1012,
     793,  1007,   980,   987,  1166,  1016,  1021,  1410, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450,   844, -2450, -2450, -2450, -2450,
    1277, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
    1330,  1062,    17, -2450, -2450,  1066,   223, -2450, -2450,  1166,
    1166, -2450,  1166,  1002,  1448,  1002,  1075,  1166,  1166, -2450,
   -2450,  1002, -2450, -2450, -2450,  1031,   929,  1078, -2450, -2450,
    1049, -2450,  1106, -2450, -2450, -2450, -2450,  -162, -2450, -2450,
   -2450,  1227, -2450,  1166,   761,  1002,  1320,   -11, -2450, -2450,
   -2450, -2450, -2450,  1323,  1124,   265,  1395, -2450,  1091, -2450,
    1031, -2450,    55, -2450, -2450, -2450, -2450, -2450, -2450,   974,
     -47,  1166,    19, -2450, -2450, -2450,   -65, -2450, -2450, -2450,
     914, -2450, -2450, -2450, -2450, -2450, -2450, -2450,   761, -2450,
    1154, -2450,  -159, -2450, -2450,  1002, -2450,  1199, -2450,  1200,
    1193,  1551,  1166, -2450, -2450, -2450,   828, -2450, -2450, -2450,
   -2450, -2450,   760,  1556,  1166,    59, -2450,    78, -2450, -2450,
     106, -2450, -2450, -2450, -2450,  1361,   -47, -2450,  1389,   793,
     793, -2450,   974,  1165,    72,   -94, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,   947,
   -2450,   107, -2450,   761, -2450, -2450,  1297, -2450, -2450, -2450,
    1166,  1229,  1379, -2450, -2450, -2450, -2450,   830,  1166,  1130,
    1407,   603, -2450,  1614,   611,  1185, -2450, -2450,  1190,  1541,
   -2450,  1361, -2450,   793, -2450, -2450, -2450, -2450, -2450, -2450,
    1194,  1339, -2450,   793, -2450,   740, -2450,   139, -2450, -2450,
   -2450, -2450, -2450,   947, -2450,  1398,  1379, -2450, -2450, -2450,
     549, -2450, -2450, -2450,  1399, -2450, -2450, -2450, -2450, -2450,
    1386, -2450, -2450, -2450, -2450, -2450,  1206, -2450, -2450, -2450,
    1637,  1566,  1212, -2450, -2450,   947, -2450, -2450,    41, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,  1231, -2450,
    1482,  1559,  1223, -2450,  1674, -2450, -2450, -2450, -2450,  1870,
   -2450,  1606, -2450,  1191,  1238,  1302, -2450,   947,  1431,  1353,
     253,  1304, -2450,  1305,  1166,  1656,   111,  -100,   813, -2450,
    1204, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
    1288, -2450,  1454, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450,  1687,  1166, -2450,  1191, -2450,  1191, -2450, -2450,  1269,
     454, -2450, -2450,  1166, -2450,  1490, -2450, -2450,    97, -2450,
   -2450,  1063,  1166,  1166, -2450,  1166,  1166, -2450,  1637, -2450,
     414,  1166,  1431, -2450,  1322,  1219,  1191, -2450,  1401, -2450,
   -2450, -2450, -2450,  1222, -2450,  1228,    75,   548,  1166, -2450,
   -2450,  1381, -2450, -2450,  -121,  1318,  1002,  1002, -2450,  1422,
    1422,  1432, -2450,  1002,  1166, -2450, -2450, -2450,  1379, -2450,
    1346,  1486, -2450, -2450,  1291, -2450, -2450, -2450, -2450, -2450,
    1002, -2450, -2450,  -102,  -102,  1743, -2450, -2450, -2450, -2450,
   -2450,  -102,  -102,   -68, -2450, -2450, -2450, -2450, -2450,   268,
   -2450, -2450, -2450, -2450, -2450, -2450,    90, -2450,  1293,  1356,
    1496,  -217,  1299,  6468, -2450,  1247, -2450, -2450,     6, -2450,
   -2450, -2450, -2450,  1206, -2450, -2450, -2450, -2450, -2450,  1166,
    1002,  1249, -2450,  1249, -2450, -2450,  1306,  1362,  1391, -2450,
    1308, -2450,  1314, -2450,  1677, -2450,  1688, -2450,  1595, -2450,
    1635,  1336, -2450, -2450,  1002,  1002, -2450,   519, -2450, -2450,
    1228, -2450,  1317,  1380,  1390, -2450, -2450, -2450,    45,  1606,
    1166,  1015,  1015,  1166,    11,  1431,  1166,  1758, -2450,  1480,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
     793,   562, -2450,  1281, -2450,  1002, -2450,  1481, -2450, -2450,
    1228, -2450,  1333,  1394, -2450,  6681,   136,  1590,  1379,  1284,
    1166,  1758,  1286,  -123,  -121,  1379,  1300,  1166, -2450, -2450,
   -2450,    58,   793, -2450, -2450, -2450,    81,   -69, -2450,  1228,
   -2450,  1351,  1237,    31, -2450, -2450,  -208,  -180,  -129,   335,
     373,  1307, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,  1421,
   -2450,    49, -2450, -2450, -2450, -2450,  1002,  1002,  1579, -2450,
   -2450, -2450,   -51, -2450, -2450, -2450,  1166,   127, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450,   801,   -83, -2450,  1309,
   -2450,   943, -2450,  1360, -2450, -2450, -2450, -2450,  1286, -2450,
   -2450, -2450, -2450,  1562,    47,  1599,  1310,  1166, -2450, -2450,
    1166, -2450,  1090, -2450, -2450, -2450,  1023, -2450, -2450, -2450,
   -2450, -2450, -2450,  1691, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
    1312, -2450, -2450,  1769,  1371, -2450,  1358,  1382, -2450, -2450,
   -2450, -2450,  7204,   992,  1806, -2450,  1428,  1428, -2450,  1090,
    1529, -2450,  1406,  1406, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450,  1384, -2450,  1379,    74, -2450, -2450, -2450,  1379,
   -2450, -2450,  1424, -2450,   -56,   -56, -2450, -2450,  1488,  1331,
      22,  2842,  3436, -2450,  1599,  1647,  1379,  1392,  7790,  1376,
   -2450,  1002, -2450,   992, -2450,  1402,  1593, -2450,  1656, -2450,
   -2450, -2450, -2450,  1406,  1396, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,  1090, -2450,
   -2450, -2450, -2450,    67,  1410, -2450,   815, -2450, -2450, -2450,
   -2450,  1352, -2450,  6207, -2450, -2450,  1331,  1400, -2450, -2450,
    1466,  3825, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450,   501, -2450, -2450, -2450, -2450, -2450, -2450, -2450,  1453,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450,   708, -2450, -2450,  1522, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450,  1354,  1379,  1371, -2450, -2450,  1749,
   -2450, -2450, -2450,  1397,  1403,  1404,  3202,   -11,   -11,  1409,
    1411,  1412, -2450,  1414,   -11, -2450, -2450, -2450,  7879,  7790,
    7879,  1415, -2450,  1404, -2450,   245,   953,   909, -2450,  1697,
   -2450, -2450, -2450, -2450, -2450,  1384, -2450,  1416,  1418,  1419,
    7790, -2450, -2450,   597, -2450,   992, -2450, -2450, -2450, -2450,
   -2450,  -121,  -121, -2450, -2450, -2450, -2450,  1683, -2450, -2450,
    1360,  1379, -2450, -2450,  1417, -2450,  1435, -2450,    32,    32,
    1365,  1437, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450,  -128,  4857,  7790,    88,   527,   406,  1191,
     814,   613,  4963,  5835,  1622,  -220,  1044,   814,  1002,  1444,
   -2450, -2450,  5835, -2450, -2450,   814,  1352,  2515,  1002,  5104,
    5835, -2450,   981,  8077,  1191,  1002,  1191,  1002,    60,   308,
    1002,  1191, -2450, -2450, -2450, -2450, -2450, -2450,  5159,  5298,
   -2450, -2450,  1352,    61,  1002,  1191,  1002,  1002, -2450, -2450,
    1666,  1587, -2450,  7790,  7790,  7214, -2450, -2450,  1384, -2450,
    1393,  1405,  7790,  7790,  7790,  3202,  1408, -2450,   930, -2450,
    3202, -2450, -2450, -2450, -2450,  7790,  7321,  7790,  7790,  7790,
    7790,  7790,  7790, -2450,  3202,  7790,   953,  1492, -2450,  1442,
   -2450, -2450, -2450,  1875,  1410, -2450,   540, -2450, -2450, -2450,
   -2450,   103, -2450,  -203,  -193,   371, -2450, -2450, -2450,  1775,
   -2450,  1711,  1529,  1002,  3202, -2450,  1776, -2450,  5385, -2450,
   -2450, -2450, -2450, -2450,   159,   586, -2450,    88, -2450,  1456,
   -2450,   -11, -2450, -2450, -2450, -2450,  1777,  1803, -2450,   406,
   -2450, -2450,  1191,   915,  1529,  1778,   480, -2450,  1523, -2450,
   -2450,  1358,  1384,  1191,  1786,  1353,  1055, -2450,  1787,  1747,
    5440, -2450, -2450,  4522,  1119,  1138,  1791,   650,  1420, -2450,
   -2450, -2450,  1792,    86, -2450, -2450, -2450,  4241, -2450, -2450,
    1827,   501, -2450, -2450, -2450,   814, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450,  1493, -2450, -2450,   311,  1352, -2450, -2450,
      14, -2450, -2450, -2450, -2450, -2450, -2450,  1469,  5835, -2450,
    1491,  1804,  1897, -2450, -2450, -2450, -2450,   981,  1540, -2450,
    1498, -2450,  8215,   -23,   718,  1504,  1502, -2450,   228, -2450,
    1510,  1813,   507, -2450,  1764, -2450,  1819,  1353,  1821,  1764,
    1002,  1818,  1464, -2450,   999, -2450, -2450, -2450, -2450, -2450,
   -2450,  1699, -2450,   814, -2450,   389, -2450,   292,  1942, -2450,
      62, -2450,  1828,   570,   817,  1926,  1830,  4716, -2450, -2450,
    1002,  1834,  5588,  1352, -2450, -2450,   252, -2450, -2450, -2450,
   -2450,  3164, -2450,  1781, -2450,  1033,  1837,  1876,  1838,  1764,
   -2450, -2450, -2450,  1002,  1770,   195,   314,   729,  1537,   332,
    1539, -2450,   336, -2450, -2450,   200,  1543,  1545,  1550,   377,
   -2450,  1384, -2450,  1553, -2450, -2450,   383,  1554,   729, -2450,
    1006,   909,   909, -2450, -2450, -2450,  1042,  1555,   385,  1558,
    1166, -2450,  -121,  1903,  1561,   278,  7156, -2450,  1166,  1608,
    1710, -2450, -2450,  1916, -2450, -2450,  6778,   730,   -26,  1574,
   -2450,  1384, -2450, -2450, -2450,  5858,  1826, -2450,  1810, -2450,
    1649, -2450,  1694,  1782, -2450, -2450, -2450,  1420, -2450,   915,
   -2450, -2450, -2450,   -34,   516,  1002, -2450, -2450, -2450, -2450,
   -2450,  7790,  1767, -2450,  1376, -2450,  1191, -2450, -2450, -2450,
    1809, -2450, -2450, -2450, -2450,  1746, -2450, -2450,  4522,   490,
    1747,  1747,  1747,  1747, -2450, -2450,  5835,  5858, -2450, -2450,
   -2450, -2450,  -220,   144, -2450,  1535, -2450,  1536, -2450, -2450,
   -2450, -2450,  1444, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450,  3915, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450,    53, -2450,  1917,  1840,  1869,
   -2450,   999,    85, -2450, -2450,  1679, -2450, -2450,    77,  7790,
   -2450,  1594,   814, -2450, -2450,  5858,  1540,  1204,  1191, -2450,
   -2450, -2450, -2450, -2450,  1881,  1002,    88, -2450,  1025, -2450,
   -2450, -2450, -2450,  1353,  2515, -2450, -2450, -2450,  1822, -2450,
   -2450,   504,  1929, -2450, -2450,  1002,  1929,  1603, -2450,  1384,
   -2450, -2450,   600,   974, -2450, -2450,  4380, -2450,  2012,   864,
      71, -2450, -2450, -2450,  1166, -2450,   -79,  5835, -2450,    15,
    5721, -2450, -2450,  1002, -2450,  1873, -2450, -2450,  5858, -2450,
    1379, -2450, -2450,   999, -2450, -2450, -2450, -2450, -2450,  1926,
    1836, -2450, -2450,  1025,  1770, -2450,  1926, -2450, -2450, -2450,
    1490,  7504,  1416,  7520,  1416, -2450,  1002,  1416,  1416,  1416,
    3202, -2450,   114,  1416, -2450,  7653,  1416,  1416, -2450,   992,
   -2450,  1587, -2450, -2450,  1166,  1166,  1758,  1111, -2450, -2450,
   -2450, -2450,  1862,  1893, -2450,  1166, -2450,   472, -2450, -2450,
   -2450,  1116,  1166,  2515, -2450, -2450, -2450, -2450,  1771, -2450,
    1379, -2450,  2014, -2450, -2450, -2450,  1002, -2450, -2450,  1002,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,  1871,
    1771,   780,  1166, -2450,  1563,  1615, -2450,   452, -2450,  1166,
     973,  6778, -2450, -2450, -2450,   697,  4014, -2450,   973, -2450,
   -2450, -2450,  1560,  1564, -2450,   999,   973,  1839,  1650,  1779,
   -2450, -2450,  1808, -2450, -2450, -2450, -2450, -2450, -2450,   450,
   -2450,  1002,  1529,   710, -2450,   -59,   -36,   814,  1628,  1649,
     814, -2450,  1630,    88, -2450,   501, -2450, -2450,  1701,  1722,
   -2450,   295,  1166, -2450, -2450, -2450, -2450, -2450,  1796, -2450,
   -2450, -2450, -2450,   130, -2450, -2450,  1990, -2450, -2450,  1261,
   -2450, -2450, -2450, -2450,  1891,   710,  1892,   108, -2450, -2450,
   -2450, -2450,  2079, -2450,  1652,   217, -2450, -2450,   144, -2450,
   -2450, -2450, -2450,  1587, -2450, -2450, -2450,  1969,  1959,  1444,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450,  1732,  1444, -2450,
    1651, -2450,  2054, -2450, -2450, -2450,  1084, -2450,   999,   537,
   -2450,    73,   195,   -25,   814,   814,   710,  1902,  1191,   414,
     401,  1964, -2450, -2450, -2450,  2101, -2450,  1914, -2450, -2450,
   -2450, -2450,  1822, -2450, -2450, -2450, -2450,  1002,  1981,  1809,
     -31, -2450,  1604, -2450,  1605,   999,  -215, -2450,   450, -2450,
   -2450, -2450,  5835,   974,   974,   974,   974,   974,   974,   974,
     974,   864, -2450,    66,  1809,   -82, -2450,  1686,  1686, -2450,
   -2450,   439,  1002,   710,  1912,  1659, -2450,  1668,  2113,  1002,
     360,   504,  2118, -2450,  1616,  1166, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,  1010,
   -2450, -2450, -2450,  1002,   406, -2450, -2450,  1166,  1758,  1872,
    1331, -2450, -2450, -2450,  1002,   452, -2450, -2450,  1529, -2450,
   -2450, -2450, -2450,   396,   452, -2450, -2450,  1166,  1392,  1166,
   -2450, -2450, -2450,  1166, -2450, -2450, -2450,   615, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450,  2081, -2450, -2450, -2450,   879,
   -2450, -2450,  1771,  1771, -2450, -2450,  1771, -2450,  1166, -2450,
   -2450, -2450, -2450,  1166, -2450, -2450, -2450, -2450, -2450,     3,
   -2450, -2450,  2069,  1717, -2450, -2450,    -6, -2450,  1166, -2450,
    2128, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,   973,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,  1523,   -26,
   -2450, -2450,  1841,   -29,  1934,   710,   866, -2450, -2450, -2450,
   -2450, -2450,   -32,    91, -2450, -2450, -2450,   374, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
    1166, -2450,   432, -2450, -2450,  1116,  1166, -2450, -2450, -2450,
   -2450, -2450,     5,  1166, -2450, -2450,   814, -2450,   814,  4571,
   -2450,   700,    68,   144, -2450, -2450, -2450,  2079,  1002, -2450,
   -2450, -2450, -2450,  1633,  1347,   219,  1636,   866,   999, -2450,
   -2450,  2093, -2450, -2450, -2450, -2450,   537, -2450,  1956, -2450,
    1166,  1490,  1831, -2450, -2450,   814, -2450,   814,   401, -2450,
   -2450, -2450,   636, -2450, -2450,  1002,  5835,  1027, -2450, -2450,
   -2450,  1856, -2450, -2450,  1886, -2450, -2450, -2450, -2450,  1605,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450,    -7, -2450,  1002, -2450, -2450, -2450,  1061, -2450,
   -2450, -2450,  7790, -2450,  5835,  5835,  1682,  1820,  1523, -2450,
     814, -2450,   866, -2450,  1848, -2450,   999, -2450,  2040,  1712,
   -2450,   790, -2450,   451, -2450,  1616, -2450,  1002, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450,  1202,   -67, -2450,  1002, -2450,
   -2450, -2450, -2450, -2450, -2450,   922, -2450,   406,   922, -2450,
   -2450, -2450,    70, -2450, -2450, -2450, -2450, -2450, -2450,   452,
     452,   452,   452,   452, -2450,  1166,  1166,   461,   461,   452,
   -2450,   481, -2450,  1751,  1966, -2450, -2450, -2450,  1968, -2450,
   -2450, -2450, -2450, -2450, -2450,  1877,  1529, -2450, -2450, -2450,
   -2450,  1002, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450,  2520,   452, -2450, -2450, -2450, -2450,   452,   461,
     461,   452,   710,  1812,   710,  1815, -2450, -2450,  5835, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,  1347, -2450,
    2071, -2450,  1444, -2450, -2450, -2450,   866,  1079, -2450, -2450,
    1079,   -75,  1002, -2450, -2450,   710, -2450, -2450,  1790, -2450,
    2123,  1919,  1945,   979, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450,   729, -2450, -2450,
   -2450, -2450, -2450,  1888,  1166,  1751,   710,  1685, -2450,  2113,
   -2450,  1599,  2092,  1599,  1682, -2450, -2450, -2450, -2450,  1896,
   -2450, -2450, -2450, -2450,  1275, -2450,  1002,  1117, -2450, -2450,
    1872, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
     452, -2450, -2450, -2450,   452,    -5, -2450, -2450, -2450, -2450,
   -2450, -2450,   406,   452, -2450,  1303, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,  1002,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450,   814, -2450,   814,
   -2450, -2450, -2450,  2141,  2080,  1079,  1079, -2450,  1730,  1730,
   -2450,  1853,  1191,   -12, -2450,  1002, -2450, -2450,  5835, -2450,
    1166,   846,  1932,  1933, -2450,  1935, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450,  1002, -2450, -2450, -2450, -2450,  1739, -2450,
    1002,  1599, -2450,  1002, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450,  1172,  1166,  1166,  1436, -2450, -2450, -2450, -2450, -2450,
   -2450,  1497, -2450, -2450, -2450,  2089, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450,  1751,  1751,  5835, -2450,  1079, -2450,  5835,
    5835,  1166,  1191,  1191,  1860, -2450, -2450,  1724,  1002, -2450,
   -2450,  1856, -2450, -2450, -2450, -2450, -2450, -2450, -2450,  1059,
   -2450, -2450,  1002, -2450, -2450, -2450,  1166,  1872,  1872, -2450,
    1999,  1166,  1166, -2450,  1501,  1755, -2450, -2450, -2450, -2450,
   -2450,    88,  1191,  1166, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450,  1214, -2450, -2450, -2450, -2450, -2450,  1874,  2107,
   -2450,  1872, -2450, -2450, -2450,  1872,  1872,  1994,  1161,  1758,
    2007,  1379,  1714,  1166,  1529, -2450,  1166,  1166,  1002, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450,   -50, -2450,   -46, -2450, -2450, -2450,  1161,  1758,
   -2450, -2450,    88, -2450,  1847,  1797,    -2,  1587, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450,   127, -2450,  1166,  1371, -2450,
    8126,  8126,  1931,  2103,  2029, -2450,  1379,   -50, -2450, -2450,
    1379,   -46, -2450, -2450,   127, -2450, -2450,  1002, -2450,    84,
   -2450, -2450, -2450,    56, -2450,   -50,  1392, -2450,  1523,  7981,
   -2450, -2450,  1009,  1126, -2450, -2450,  1129, -2450, -2450, -2450,
   -2450,   115,   115, -2450, -2450, -2450, -2450, -2450,  8126, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450,  1887,   -89,    56,
   -2450, -2450, -2450,  1749, -2450,  1587, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450,  1915, -2450,  1915, -2450,  2178, -2450,  1587,
   -2450, -2450,  1921,  1002, -2450,  1801,   165,  1909, -2450, -2450,
    8126,   769, -2450, -2450,  1379, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450,  1191, -2450
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
    1805,    46,     0,     0,     0,  1848,  1805,  1805,  1805,     0,
       0,     0,     0,     0,  1805,     0,     0,  1778,   115,    48,
      49,    50,    53,    51,    52,     0,   101,   103,   104,   105,
     151,   107,   106,   108,   109,   110,   111,   112,   113,   114,
     178,     0,     0,    23,  1806,     0,     0,  1523,   126,  1805,
    1805,  1849,  1805,     0,     0,     0,     0,  1805,  1805,    60,
      82,     0,    54,    98,  1779,     0,  1805,     0,    99,   102,
       0,   150,     0,   182,    20,    13,    29,    37,    40,    42,
      41,  1842,    39,  1805,     0,     0,     0,  1593,   172,  1516,
     170,   175,   177,     0,     0,    62,    84,   174,    56,  1524,
     153,   154,  1807,   157,  1598,  1212,  1211,   116,   120,   123,
    1834,  1805,     0,   100,   152,   179,   180,    38,  1843,    36,
       0,  1605,  1601,  1606,  1604,  1602,  1607,  1603,   161,   162,
     164,   173,   168,  1888,  1889,     0,   166,     0,  1777,     0,
       0,     0,  1805,  1910,    80,    61,  1776,    66,    68,    69,
      70,    71,  1776,     0,  1805,     0,    83,     0,    87,    55,
      58,   155,  1809,  1808,   158,     0,  1834,  1837,  1836,     0,
       0,   117,   121,     0,     0,   266,   183,   132,   131,   146,
     142,   147,   128,   145,   143,   129,   130,   144,   127,   133,
     134,   136,   163,     0,  1877,   167,     0,  1594,   171,  1909,
    1805,     0,     0,    65,    67,    63,    81,  1776,  1805,     0,
       0,    92,    93,    94,     0,     0,    85,    88,     0,     0,
    1599,   156,   159,     0,  1835,   124,   118,   119,   122,   181,
       0,     0,  1674,     0,   278,   274,    24,     0,   269,   271,
     272,   135,   138,     0,   165,     0,     0,  1908,    74,    64,
       0,  1517,    73,    89,     0,    90,    91,    97,    86,    57,
       0,   160,   125,   186,  1675,   184,  1786,   275,   276,   277,
    1766,   285,     0,   267,   270,     0,   137,   169,     0,    77,
      79,    78,    75,    76,    95,    59,   187,  1787,  1861,  1767,
    1790,     0,   287,   268,   139,   140,  1896,  1897,    72,  1844,
    1862,  1780,  1791,     0,     0,     0,   289,     0,  1823,  1844,
    1869,     0,   248,     0,  1805,  1776,  1810,   250,     0,  1879,
    1876,   236,   185,   235,   188,   189,   190,   191,   192,   193,
       0,   194,     0,   195,   247,   196,   197,   198,   199,   200,
     201,  1772,  1805,  1781,     0,  1502,   273,  1500,   286,     0,
      25,   141,  1824,  1805,  1845,  1810,  1870,  1871,   216,  1878,
     251,  1844,  1805,  1805,  1811,  1805,  1805,   260,  1766,   261,
       0,  1805,  1823,  1773,     0,     0,   279,   280,   283,  1501,
     288,   295,   296,   347,   290,   350,     0,     0,  1805,   218,
     217,   214,   250,   246,     0,     0,     0,     0,   259,  1838,
    1838,     0,   262,     0,  1805,   249,   232,   281,     0,   282,
       0,   503,   291,  1657,     0,   292,   226,   227,   225,   224,
       0,   210,   211,   221,   221,     0,   209,   207,   208,   213,
     212,   221,   221,     0,  1522,  1521,   252,   253,   254,   255,
     258,  1839,   263,   264,   265,   233,     0,   284,     0,     0,
     506,   352,     0,     0,   356,     0,   294,   297,  1660,   222,
     204,   223,   205,  1786,   206,   203,   219,   202,   220,  1805,
       0,   242,   241,   242,   238,   348,     0,     0,   509,   355,
       0,   353,     0,   362,   363,   357,     0,   360,  1805,  1907,
       0,   229,  1661,   215,     0,   256,  1514,     0,   240,   239,
     350,   504,     0,     0,   604,   354,   359,   396,   365,  1780,
    1805,     0,     0,  1805,  1780,  1823,  1805,  1764,   293,     0,
     298,   301,   302,   303,   304,   305,   306,   307,   308,   309,
       0,     0,  1906,     0,   228,   257,  1515,     0,   245,   349,
     350,   507,     0,     0,    26,  1805,  1768,     0,     0,     0,
    1805,  1764,     0,     0,     0,     0,     0,  1805,   343,  1765,
     344,     0,   342,   345,   299,   300,     0,     0,   505,   350,
     510,     0,   672,     0,   490,   420,  1850,  1850,  1850,  1850,
    1850,  1872,   421,   456,   458,   424,   425,   426,   427,   428,
     429,   452,   450,   451,   453,   454,   459,   457,   430,  1846,
     455,     0,   431,   417,   432,   433,     0,     0,  1853,   435,
     436,   434,  1812,   438,   439,   437,  1805,  1807,   397,   398,
     399,   400,   401,   402,   418,   422,   423,   403,   404,   405,
     406,   407,   408,   409,   410,   411,     0,     0,  1769,     0,
     393,     0,   366,   321,   341,  1898,  1899,  1520,   330,  1518,
    1891,  1890,   323,  1821,  1778,  1794,     0,  1805,   327,   326,
    1805,   346,     0,   148,   149,   231,     0,  1894,  1895,   243,
     508,   512,   605,     0,    27,   716,   501,   502,  1851,   449,
     448,   441,   440,   447,   446,   445,   444,   443,   442,  1873,
       0,  1847,   487,   473,   467,   412,  1587,   499,  1854,  1813,
    1814,   488,     0,     0,   414,   416,  1688,  1688,   395,     0,
    1830,  1616,     0,     0,  1612,  1617,  1615,  1613,  1618,  1614,
     394,   367,  1608,  1610,     0,   311,  1519,  1822,   332,     0,
     314,  1795,  1855,   340,     0,     0,   230,   244,   511,   607,
     674,     0,     0,   489,  1794,   469,     0,  1865,     0,  1585,
    1586,     0,   419,   491,   493,   495,     0,   413,  1776,   460,
     461,  1609,  1831,     0,     0,   376,   372,   375,   374,   373,
     388,   384,   386,   387,   389,   385,   390,   391,   392,   369,
     380,   381,   382,   377,   378,   379,   371,   368,     0,   322,
     313,   312,   310,   331,  1778,  1856,   319,   328,   325,   329,
     324,     0,   513,     0,   611,   606,   608,     0,   677,   675,
     693,     0,   770,   843,   852,   858,   865,   898,   902,   916,
     911,   917,   918,   926,   973,   982,   985,  1011,  1022,  1025,
    1028,  1020,  1034,  1041,  1063,  1067,  1103,  1105,  1109,     0,
    1115,  1129,  1153,  1171,  1172,  1175,  1176,  1181,  1189,  1190,
    1203,  1237,  1255,     0,  1288,  1300,  1308,  1310,   698,  1314,
    1317,  1323,  1374,   718,   719,   720,   721,   722,   723,   724,
     725,   727,   726,   728,   729,   730,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,   741,   742,   743,   744,
     745,   746,   747,   748,   749,   750,   751,   752,   753,   754,
     755,   756,   757,   758,   759,   760,   761,   762,   763,   764,
     765,   766,   767,   717,     0,     0,   467,   468,  1866,   471,
    1636,  1631,  1637,     0,     0,  1643,     0,  1489,  1491,     0,
       0,     0,  1634,     0,  1493,  1635,  1638,  1639,     0,     0,
       0,     0,  1633,  1643,  1632,  1473,  1471,  1478,  1481,  1483,
    1486,  1552,  1488,  1549,  1583,  1550,  1551,  1640,     0,     0,
       0,  1584,   500,   497,   494,     0,   415,  1689,   370,   383,
    1611,     0,     0,   333,   334,   335,   336,     0,   315,  1793,
     321,     0,  1503,   514,     0,   612,     0,   609,   682,   682,
       0,     0,  1691,  1692,  1693,  1694,  1695,  1696,  1697,  1698,
    1699,  1700,  1701,  1702,  1703,  1704,  1740,  1741,  1742,  1743,
    1744,  1745,  1746,  1747,  1748,  1749,  1750,  1751,  1752,  1753,
    1754,  1755,  1756,  1757,  1758,  1759,  1705,  1706,  1707,  1708,
    1709,  1710,  1711,  1712,  1713,  1714,  1715,  1716,  1717,  1718,
    1719,  1720,  1721,  1722,  1723,  1724,  1725,  1726,  1727,  1728,
    1729,  1730,  1731,  1732,  1733,  1734,  1735,  1690,  1736,  1737,
    1738,  1739,   769,     0,     0,     0,     0,   868,     0,     0,
       0,     0,     0,     0,     0,  1434,  1013,     0,     0,  1867,
     888,   887,     0,  1033,  1434,     0,     0,     0,     0,     0,
       0,   768,     0,  1141,     0,     0,     0,     0,     0,     0,
       0,     0,  1284,  1287,  1275,  1285,  1286,  1277,     0,     0,
    1309,  1307,     0,   716,     0,     0,     0,     0,   474,   470,
     475,  1832,   478,     0,     0,     0,  1629,  1553,  1554,  1555,
       0,     0,     0,     0,     0,     0,     0,  1485,     0,  1484,
       0,  1630,  1474,  1475,  1595,     0,     0,     0,     0,     0,
       0,     0,     0,  1619,     0,     0,     0,     0,   492,     0,
     496,   339,   338,  1770,  1778,   320,     0,   614,   615,   610,
    1775,   682,   679,   685,     0,   682,   694,   669,   793,   841,
     772,   792,  1830,     0,     0,  1543,   850,  1537,   848,  1532,
    1534,  1535,  1536,   853,     0,  1662,  1513,   859,   860,     0,
    1509,  1511,  1510,   871,   869,   870,   896,     0,  1565,   899,
     900,  1564,   903,   906,  1830,   914,     0,  1495,  1676,  1527,
    1588,  1592,  1528,     0,   924,  1844,  1612,   940,   971,  1399,
    1530,   935,   937,   934,     0,  1534,   980,     0,   872,   983,
     992,   991,  1009,     0,   988,   990,  1433,     0,  1015,  1019,
    1017,  1020,  1018,  1012,  1023,  1024,  1525,  1026,  1027,  1868,
    1029,  1507,  1021,  1863,  1432,  1042,  1044,  1064,  1065,  1068,
       0,  1070,  1071,  1072,  1104,  1241,  1580,  1581,     0,  1106,
       0,  1113,     0,  1122,  1119,  1121,  1120,  1116,  1123,  1143,
    1513,  1130,  1141,  1132,     0,  1139,     0,  1566,  1510,  1568,
       0,  1169,  1668,  1173,  1377,  1498,  1179,  1844,  1187,  1377,
       0,  1201,  1194,  1499,     0,  1506,  1204,  1205,  1206,  1207,
    1208,  1209,  1230,  1210,  1233,     0,  1504,     0,     0,  1579,
    1592,  1238,  1273,  1260,  1278,  1774,  1298,     0,  1291,  1293,
       0,  1305,     0,  1311,  1312,   704,   710,   699,   700,   701,
     703,     0,  1315,     0,  1318,  1320,  1340,  1326,  1387,  1377,
     476,   478,  1833,     0,   482,   477,  1473,  1471,     0,  1473,
       0,  1645,  1473,  1490,  1492,  1473,     0,     0,     0,  1473,
    1546,  1547,  1548,     0,  1494,  1487,  1473,     0,  1472,  1596,
       0,  1477,  1476,  1480,  1479,  1482,     0,     0,  1473,     0,
    1805,  1771,     0,   317,     0,  1805,  1852,   680,  1805,     0,
     691,   683,   684,   695,   842,   771,   794,     0,     0,     0,
    1538,  1539,  1540,   851,   844,     0,     0,  1533,  1664,  1663,
     856,   861,   863,     0,   897,   866,  1567,   872,   901,   906,
    1900,  1901,   904,     0,   907,     0,   915,   912,  1885,  1884,
    1496,     0,  1678,  1497,  1590,  1591,   921,   922,   925,   919,
    1426,   972,   927,   713,   932,  1401,   936,   933,  1531,  1876,
    1399,  1399,  1399,  1399,   981,   974,     0,     0,   873,   984,
    1010,   986,  1434,  1434,   987,   994,   995,   713,  1458,  1459,
    1460,  1454,  1867,  1446,  1466,  1469,  1468,  1470,  1462,  1453,
    1452,  1457,  1456,  1455,  1461,  1441,  1445,  1463,  1465,  1467,
    1443,  1444,  1440,  1442,  1435,  1436,  1447,  1448,  1449,  1450,
    1451,  1439,  1016,  1014,  1526,  1031,  1864,   713,  1046,     0,
    1066,     0,  1093,  1077,  1069,  1074,  1075,  1076,  1245,     0,
    1582,     0,     0,  1114,  1110,     0,  1123,  1876,     0,  1131,
    1137,  1138,   713,  1134,  1434,     0,     0,  1142,     0,  1170,
    1154,  1669,  1670,  1844,     0,  1174,  1180,  1177,  1156,  1188,
    1182,  1184,  1196,  1202,  1191,     0,  1196,     0,  1560,  1561,
    1231,  1234,     0,     0,  1505,  1214,     0,  1213,     0,     0,
    1590,  1274,  1256,  1262,  1805,  1263,  1258,     0,  1276,     0,
       0,  1299,  1289,     0,  1292,     0,  1306,  1301,     0,  1313,
     711,   709,   702,     0,  1321,  1322,  1319,  1341,  1324,  1774,
       0,  1388,  1375,  1379,   482,   472,  1774,   465,   480,   481,
    1810,     0,  1640,     0,  1640,  1644,     0,  1640,  1640,  1640,
       0,  1623,     0,  1640,  1597,     0,  1640,  1640,  1875,     0,
     337,  1832,   316,   518,  1805,  1805,  1764,  1818,   543,   517,
     521,   522,     0,  1788,   630,  1805,   619,  1872,   620,  1881,
    1880,  1784,  1805,     0,   633,   628,   623,   629,  1825,   624,
       0,   627,   635,   632,   625,   631,     0,   636,   626,     0,
     647,   641,   645,   644,   642,   646,   616,   648,   643,     0,
    1825,     0,  1805,   692,     0,     0,   670,  1771,   799,  1805,
    1390,   795,   796,   798,   800,     0,     0,   788,  1390,  1883,
    1882,   785,   777,   779,   780,     0,  1390,     0,     0,     0,
     802,   783,     0,   791,   774,   790,   775,  1557,  1556,     0,
    1542,     0,  1830,  1404,   849,  1592,  1528,     0,  1666,   856,
       0,   854,     0,     0,  1512,   883,   905,   910,     0,     0,
    1529,  1404,  1805,  1677,  1589,   923,   713,   920,  1428,  1400,
     714,   713,  1398,     0,   946,   945,   938,   941,   943,     0,
     930,   931,   928,   929,     0,  1404,     0,   879,   989,  1004,
    1006,  1005,   999,  1001,  1007,  1434,   996,   993,  1434,   997,
    1464,  1437,  1438,  1832,  1030,  1508,   713,  1038,  1039,  1867,
    1054,  1055,  1057,  1059,  1060,  1056,  1058,  1049,  1867,  1045,
       0,  1094,     0,  1096,  1095,  1097,  1079,  1089,     0,     0,
    1073,  1247,     0,  1796,     0,  1107,  1404,     0,     0,     0,
    1125,  1135,  1148,  1144,  1149,  1145,  1150,     0,  1140,  1384,
    1383,  1147,  1156,  1378,  1576,  1577,  1578,     0,     0,  1426,
       0,   713,     0,  1195,     0,     0,     0,  1232,     0,  1236,
    1235,  1228,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1216,  1217,  1671,  1426,     0,  1279,  1859,  1859,  1294,
    1295,  1296,     0,  1404,     0,     0,   712,     0,  1658,     0,
    1296,  1184,  1760,   466,     0,  1805,  1654,  1627,  1656,  1628,
    1652,  1624,  1625,  1626,  1650,  1647,  1648,  1622,  1641,     0,
    1620,  1621,   498,     0,     0,  1925,  1926,  1805,  1764,     0,
     515,   519,  1789,   523,     0,     0,   617,   618,  1830,   652,
     654,   621,   622,     0,     0,   650,  1826,  1805,  1865,  1805,
     651,   649,   667,  1805,   686,   687,   690,     0,   681,   696,
     698,  1571,   806,  1569,  1570,     0,  1392,  1393,   773,  1394,
     713,   797,  1825,  1825,   804,   805,  1825,   811,  1805,   813,
     814,   815,   840,  1805,   816,   817,   818,   819,   820,     0,
     821,   822,   824,     0,   825,   826,     0,   827,  1805,   812,
    1762,   830,   839,   833,   801,   832,   789,   776,   778,  1390,
     786,   781,   782,   803,   784,  1559,  1541,  1558,  1676,     0,
     713,   845,  1406,  1590,  1591,  1404,     0,  1665,   855,   857,
     864,   862,   891,  1803,   909,   908,   913,     0,  1427,   713,
    1425,   716,  1402,   952,   953,   950,   949,   951,   948,   942,
    1805,   954,     0,   957,   958,  1784,  1805,   961,   962,   944,
     963,   964,     0,  1805,   966,   947,     0,   975,     0,   874,
     875,   685,     0,  1434,  1434,  1003,   713,  1000,     0,  1037,
     713,  1040,  1035,     0,     0,  1061,     0,     0,     0,  1090,
    1092,     0,  1085,  1099,  1086,  1087,  1078,  1081,  1099,  1239,
    1805,  1810,     0,  1797,  1246,  1108,  1111,     0,  1125,  1124,
    1128,  1117,     0,  1136,  1133,     0,     0,  1158,  1157,   713,
    1178,  1414,  1183,  1185,     0,  1197,  1434,  1434,  1192,  1198,
    1215,  1227,  1229,  1219,  1220,  1221,  1225,  1222,  1226,  1223,
    1224,  1218,  1672,  1272,     0,  1269,  1270,  1264,     0,  1257,
    1905,  1904,     0,  1860,  1282,  1282,  1409,     0,  1676,  1302,
       0,   705,     0,  1659,  1327,  1328,     0,  1331,  1334,  1338,
    1332,  1426,  1761,     0,   486,   483,   484,     0,  1642,   318,
     520,  1819,  1820,  1600,   531,   528,   361,   544,   524,   525,
     640,  1785,   653,   655,   639,   660,   666,     0,   663,   688,
     689,   698,   716,   810,  1396,  1397,  1389,   713,  1391,     0,
       0,     0,     0,     0,   831,  1805,  1805,  1430,  1430,     0,
    1763,     0,   787,  1404,  1529,  1405,   713,  1403,  1589,   846,
    1667,  1562,  1563,   713,   713,   894,  1830,  1804,   890,   889,
     885,     0,  1680,  1681,  1682,  1683,  1684,  1685,  1686,  1687,
    1679,  1429,     0,     0,   955,   956,   959,   960,     0,  1430,
    1430,     0,  1404,  1495,  1404,  1495,   876,   877,     0,   881,
     880,   882,  1002,  1008,   998,  1032,  1036,  1047,  1050,  1051,
    1782,  1043,  1867,  1048,  1099,  1099,     0,  1084,  1082,  1083,
    1088,  1249,     0,  1243,  1798,  1404,  1118,  1127,     0,  1151,
       0,     0,  1165,     0,  1418,   713,  1413,  1186,   713,   713,
    1199,  1271,  1261,  1265,  1266,  1267,  1268,  1259,  1280,  1283,
    1281,   713,  1290,  1411,  1805,  1404,  1404,   707,  1316,  1658,
    1330,  1794,  1336,  1794,  1409,   713,   713,  1376,  1386,  1421,
    1422,  1385,  1382,  1381,  1815,   485,   479,   527,  1892,  1893,
     530,   363,   545,   526,   658,   656,   659,   657,   661,   662,
       0,   634,   664,   665,     0,   716,  1395,   807,   809,   808,
     835,   834,     0,     0,   837,     0,  1574,  1575,   836,   829,
     838,  1572,  1573,   847,  1407,   892,   893,   713,   867,     0,
     884,   968,   967,   970,   969,   965,   977,     0,   976,     0,
     878,  1052,  1783,     0,     0,  1080,  1091,  1099,  1801,  1801,
    1100,     0,     0,  1252,  1248,  1242,  1112,  1126,     0,  1159,
    1805,  1426,     0,     0,  1160,     0,  1164,  1419,  1193,  1200,
    1410,   713,  1408,     0,  1304,  1303,  1342,   706,     0,  1329,
       0,  1794,  1333,     0,  1325,  1423,  1424,  1420,  1816,  1817,
    1380,     0,  1805,  1805,     0,   532,   533,   534,   535,   536,
     537,     0,   547,   637,   638,     0,   823,   828,  1902,  1903,
    1431,   895,   886,  1404,  1404,     0,  1062,  1098,  1802,     0,
       0,  1805,  1250,     0,     0,  1240,  1244,     0,     0,  1155,
    1168,  1416,  1417,  1167,  1163,  1161,  1162,  1412,  1297,  1350,
     708,  1335,     0,  1339,  1912,  1911,  1805,     0,     0,  1914,
       0,  1805,  1805,   529,  1852,     0,   979,   978,  1053,  1102,
    1101,     0,  1253,  1805,  1434,  1166,  1415,  1373,  1372,  1351,
    1343,  1344,  1762,  1345,  1346,  1347,  1348,  1371,     0,     0,
    1337,     0,   542,   538,  1913,     0,     0,  1799,  1827,  1764,
       0,     0,     0,  1805,  1830,   546,  1805,  1805,     0,   552,
     554,   563,   555,   557,   560,   548,   549,   550,   559,   561,
     564,   551,     0,   556,     0,   558,   562,   553,  1827,  1764,
     697,  1251,     0,  1152,     0,  1857,     0,  1832,   539,   541,
     540,  1800,   602,  1828,  1829,  1807,   588,  1805,   467,  1434,
       0,     0,     0,     0,     0,   596,     0,   586,   592,   595,
       0,   589,   597,   600,  1807,   591,  1254,     0,  1858,     0,
    1369,  1368,  1367,     0,   587,     0,  1865,   584,  1676,   580,
    1544,  1916,     0,     0,  1918,  1920,     0,  1924,  1922,   565,
     569,   573,   573,   567,   571,   566,   572,   603,     0,   594,
     593,   599,   598,   590,  1370,  1887,  1886,  1840,  1363,  1357,
    1358,  1360,   578,   471,   601,  1832,   579,  1545,  1915,  1919,
    1917,  1923,  1921,   576,   568,   576,   570,     0,  1841,  1832,
    1366,  1361,  1364,     0,  1359,   463,     0,     0,   575,   574,
       0,     0,  1365,  1362,     0,   462,   583,   581,   582,   577,
     585,  1356,  1353,  1355,  1354,  1349,  1352,   464
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2450, -2450, -2450, -2450, -2450,  2226, -2450, -2450, -2450,   187,
   -2450,  2189, -2450,  2146, -2450, -2450,  1316, -2450, -2450, -2450,
    1248, -2450, -2450,  1143,  2214, -2450, -2450,  2114, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,  2043,
     884, -2450, -2450, -2450, -2450, -2450,  2098, -2450, -2450, -2450,
   -2450,  2041, -2450, -2450, -2450, -2450, -2450, -2450,  2176, -2450,
   -2450, -2450, -2450,  2030, -2450, -2450, -2450, -2450, -2450,  2016,
   -2450, -2450,   682, -2450, -2450, -2450, -2450, -2450,  2110, -2450,
   -2450, -2450, -2450,  2075, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450,  1013, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,  1734, -2450,
    1851, -2450, -2450, -2450,  1794, -2450, -2450, -2450, -2450,   376,
   -2450, -2450,  1979, -2450, -2450, -2450, -2450, -2450,  1842, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450,  1240, -2450, -2450, -2450,  1487, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450,   473, -2450, -2450,  1766, -2450,  -769,  -846,
   -2450, -2450, -2450,   445, -2450, -2450, -2450, -2450,  -573, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -1430,   818,  1519,   498,
     529, -1429, -2450, -2450, -2450,  -953, -2450,  -438, -2450, -2450,
     867, -2450,   395,   608, -2450,    63, -1427, -2450, -1421, -2450,
   -1419, -2450, -2450,  1478, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450,  -408,  -440, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -1572, -2450,  -375, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
    1433, -2450, -2450, -2450,   186,   189,    44,    51, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,  1256,
     293, -2450,   175, -2450, -2450, -2450, -2450, -1314, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450,  -423, -2450, -2450,  -713, -2450,
    1505, -2450, -2450, -2450, -2450, -2450, -2450, -2450,   542, -2450,
   -1393, -2450, -2450, -1389, -2450,   262, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450,   505, -2450, -2450, -2450,  1069,
   -2450, -2450, -2450, -2450, -2450,   819, -2450, -2450,   190, -2450,
   -2450, -1278, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450,   824, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,  1028,
   -2450, -2450, -2450,   491, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,   789,
   -2450, -2450,   787, -2450, -2450,   476,   202, -2450, -2450, -2450,
   -2450, -2450,  1026, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450,     1,   748, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,   745, -2450,
   -2450,   188, -2450,   456, -2450, -2450, -1473, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
     996,   739,   178, -2450, -2450, -2450, -2450, -2450, -2450, -1462,
     995, -2450, -2450, -2450,   173, -2450, -2450, -2450,   438, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450,   390, -2450, -2450, -2450, -2450,
   -2450, -2450,   716,   164, -2450, -2450, -2450, -2450, -2450,  -125,
   -2450, -2450, -2450, -2450,   416, -2450, -2450, -2450,   977, -2450,
     972, -2450, -2450,  1201, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450,   145, -2450, -2450, -2450, -2450, -2450,   962,
     402, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450,   -24, -2450,   403, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,  -353, -2450,
   -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,  -219, -2450,
     684, -2450, -2450, -1364, -2450, -2450, -2450, -2450,   142, -2450,
   -2450, -1722, -2450, -2450,   -20, -2450, -2450, -2450, -2450,  -112,
   -2251, -2450, -2450,   -28, -1846, -2450, -2450,  -894, -1555, -1086,
   -1471, -2450, -2450,   796, -1794,   167,   171,   172,   174,   231,
     116,  -687,   287,   339, -2450,   582,  -563, -1415, -1082,  -908,
    1011, -1573,  -393,  -192, -2450, -1325, -2450, -1063, -2449,   891,
    -535,   -81,  2076, -2450,  1680,  -532,    48,  2223, -1078, -1069,
   -2450,  -961,   -74, -2450, -1094, -1221, -2450,   459, -1308, -1354,
   -1101,  1122,  -492, -2450, -2450,   657, -1118, -2450,   184,  -269,
    -641, -2450, -2450,  -103, -1207,  -780,  -106,  2112, -1912,  2142,
    -668,  1378,  -529,  -724, -2450, -2450, -2450,   -10,  1413, -2450,
   -2450,   391, -2450, -2450, -2450, -2450, -2450, -2450, -2450, -2450,
   -2450, -2450, -2450, -2009, -2450, -2450,  1627, -2450, -2450,  -195,
    -596,  1971, -2450, -1197, -2450, -1330,  -270,  -629,   838, -2450,
   -2450,  1878, -2450, -1458, -2450,  -783, -2450, -2450,   -66, -2450,
     -16,  -663,  -361, -2450, -2450, -2450, -2450,  -237, -1145,  -238,
   -1218, -1560,  2179,  1946, -2450, -2450,  -341, -2450, -2450,  1094,
   -2450, -2450, -2450,   462, -2450,   257, -1946, -1495, -2450, -2450,
   -2450,  -165,   518, -1714, -1442, -2450, -2450,  -830, -2450, -2450,
    1681, -2450,  1845, -2450, -2450, -2450,   816, -2450, -2326,  -251,
   -2450, -2450, -2450, -2450, -2450, -2450
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,     8,     9,    10,    11,    30,
      12,    31,    44,    45,    34,    35,    19,   321,   433,   622,
      32,    50,    14,    25,    37,    95,   131,   132,    20,    29,
      41,    69,    70,   148,   209,   268,    71,   145,   195,   196,
     197,   198,   199,   200,   201,   332,   202,    72,   146,   206,
     207,   208,   263,   305,   264,    73,    74,    75,    76,    77,
     116,   157,   277,   158,   159,    78,   133,   238,   239,   240,
     325,   344,   241,   715,    79,   121,    80,   150,   151,   152,
     271,    81,   178,   179,    82,    83,   245,    84,    85,    86,
      87,    88,    89,    90,   123,   225,   166,   226,   336,   349,
     374,   375,   481,   482,   483,   441,   517,   510,   376,   469,
     377,   584,   378,   379,   380,   381,   382,   524,   548,   383,
     384,   385,   386,   387,   488,   388,   389,   418,   390,   452,
     286,   287,   288,   289,   320,   290,   316,   426,   427,   459,
     342,   356,   400,   434,   435,   507,   436,   538,   570,   571,
     842,   572,  1702,  1030,   775,   573,   574,   710,   848,   575,
     576,   843,  1023,  1024,  1025,  1026,   577,   578,   579,   580,
     612,   461,   550,   462,   463,   501,   502,   557,   503,   535,
     536,   596,   770,   829,   830,   831,   832,   833,   504,   690,
     595,   668,   669,   670,   807,   671,   672,   673,   674,   675,
     676,   677,  2611,  2745,   678,   797,   966,  1172,   795,  1411,
    1414,  1415,  1680,  1677,  2225,  2226,   679,   680,   681,   682,
     683,  1013,   803,   804,  1208,   684,   685,   500,   590,   528,
     619,   554,   721,   788,   852,  1216,  1455,  1709,  1710,  1983,
    2238,  1711,  2234,  2397,  2505,  2506,  2507,  2508,  2509,  2510,
    1980,  2237,  2512,  2564,  2615,  2616,  2689,  2724,  2738,  2617,
    2618,  2716,  2747,  2619,  2620,  2621,  2622,  2623,  2624,  2657,
    2658,  2661,  2662,  2625,  2626,  2627,   594,   789,   855,   856,
     857,  1218,  1456,  1746,  1991,  1992,  2408,  2409,  2410,  2414,
    1747,  1748,   724,  1463,  2010,   725,   860,  1039,  1038,  1221,
    1222,  1223,  1460,  1754,  1041,  1756,  2251,  1163,  1397,  1398,
    2377,  2487,  1399,  1400,  1945,  1819,  1820,  2091,  1401,   792,
     913,   914,  1113,  1229,  1466,  1230,  1760,  1761,  1762,  1784,
    1763,  2024,  2025,  1764,  2054,  2055,  1465,   915,  1114,  1236,
    1476,  1474,   916,  1115,  1243,  1801,   917,  1116,  1247,  1248,
    1803,   918,  1117,  1256,  1257,  1529,  1837,  2119,  2120,  2121,
    2082,  1132,  2290,  2285,  2438,  1485,   919,  1118,  1259,   920,
    1119,  1262,  1492,   921,  1120,  1265,  1497,   922,   923,   924,
    1121,  1274,  1506,  1509,   925,  1122,  1278,  1279,  1280,  1281,
    1519,  1282,  1826,  1827,  1828,  2097,  2115,  1512,   926,  1123,
    1286,  1525,   927,  1124,  1289,   928,  1125,  1292,  1293,  1294,
    1534,  1535,  1536,  1847,  1537,  1842,  1843,  2125,  1531,   929,
    1126,  1303,  1133,   930,  1127,  1304,   931,  1128,  1307,   932,
    1129,  1310,  1854,   933,   934,  1134,  1858,  2132,   935,  1135,
    1315,  1578,  1867,  2135,  2328,  2329,  2330,  2331,   936,  1136,
    1317,   937,  1137,  1319,  1320,  1584,  1585,  1879,  1586,  1587,
    2146,  2147,  1876,  1877,  1878,  2140,  2337,  2460,   938,  1138,
     939,  1139,  1329,   940,  1140,  1331,  1594,   941,  1142,  1337,
    1338,  1598,  2161,   942,  1143,  1341,  1602,  2164,  1603,  1342,
    1343,  1344,  1893,  1895,  1896,   943,  1144,  1351,  1908,  2352,
    2471,  2539,  1610,   944,   945,  1145,  1353,   946,   947,  1146,
    1356,  1617,   948,  1147,  1358,  1909,  1620,   949,   950,  1148,
    1361,  1626,  1912,  2178,  2179,  1624,   951,  1149,  1366,   160,
    1638,  1367,  1368,  1931,  1932,  1369,  1370,  1371,  1372,  1373,
    1374,   952,  1150,  1324,  2341,  1588,  2465,  1881,  2149,  2463,
    2535,   953,  1151,  1382,  1934,  1646,  2194,  2195,  2196,  1642,
     954,  1384,  1648,  2368,  1157,   955,  1158,  1386,  1387,  1388,
    2206,  1652,   956,  1159,  1391,  1657,   957,  1161,   958,  1162,
    1393,   959,  1164,  1402,   960,  1165,  1404,  1666,   961,  1166,
    1406,  1670,  2214,  2215,  1950,  2217,  2382,  2492,  2384,  1668,
    2488,  2549,  2580,  2581,  2582,  2755,  2583,  2709,  2710,  2733,
    2584,  2672,  2585,  2586,  2587,   962,  1167,  1408,  1615,  1951,
    1901,  2387,  1672,  2018,  2019,  2020,  2256,  2257,  1514,  1515,
    1822,  2071,  2072,  2277,  2372,  2373,  2482,  2170,  2540,  2171,
    2356,  2388,  2389,  2390,  1817,  1818,  2090,  2424,  1313,  1314,
    1296,  1297,  1564,  1565,  1566,  1567,  1568,  1569,  1570,   995,
    1195,  1417,   997,   998,   999,  1000,  1237,  1266,  1500,  1354,
    1362,   396,   397,  1033,  1375,  1376,  1575,  1345,  1250,  1251,
     545,   485,   302,   698,   699,   486,    98,   153,  1305,  1268,
    1517,  1238,  1239,  2679,  1429,  1002,  1789,  2066,  2148,  2280,
    1260,  1346,  2012,  2430,  2425,  1903,  2013,  1325,  1379,  1240,
    1004,  1269,  1270,   746,   799,   800,  2014,   272,  2659,   180,
    1241,   772,   773,  1242,  1007,  1008,  1009,  1203,  1176,  1437,
    1433,  1426,  1418,  1420,   505,  2216,   541,  1480,  1799,  2077,
    1613,  2198,   283,  1503,  1813,  2300,   809,  1112,  2223,  2271,
     610,   340,   691,  1765,   424,  1224,   203,   115,   394,  2453,
    1993,   338,  1984,   353,  1031,   782,  2154,  2642,  2529,  2291,
      96,   215,   415,   751,  2500,  1979,   778,   403,  1997,  2645,
     813,  1413,   219,   492,  2729,   169,   391,   742,   102,   730,
     687,   846,  2669,  2204,   351,  1577,   969,  1311,   408,   740,
    1209,  1350,   392,  1750,  1786,  1501,  2707,   185,   702,  2400,
     719,   348,   602,  1494,  2520,  2202,   542,   204,  2556,  2562,
    2692,  2693,  2694,  2695,  2696,  1713
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     139,   428,   139,   429,   753,   696,   416,  1035,   139,   585,
     161,   964,   791,  1170,  1468,   745,  1452,   246,   405,  1011,
     853,  1284,   138,   771,   141,  1890,  1740,  1742,  1882,  1743,
     147,  1378,   139,   428,   216,  1744,  1809,  1745,  1267,  1295,
     103,   104,   105,   465,   438,   269,  1495,  1850,   111,  1894,
    1634,  2026,  2246,  1249,   181,  1650,  1627,  1316,  1306,  2273,
    1793,  -673,  1844,  2172,  1504,  2708,  1306,  2235,   260,  1360,
    -671,  1377,   703,   280,  1006,   780,   464,   212,   858,   265,
    1306,  1220,   247,   134,   135,   805,   136,   853,  2199,  2086,
     712,   143,   144, -1581,  1871,   412,  1436,  2286,   393,   346,
     162,    99, -1582,  1532, -1832,   114,  1647,  1581,   107,   533,
    1447,   996,  1835,  2117,  2032,  1021,   221,   170,  2267,  1600,
    1590,   836,   836,   521,   292,  2515,  1824,  1787,  2670,  2309,
    1825,   539,   840, -1810,  2283,   805,   484,   361,   414,  2197,
     322,  1973,  1785,  1872, -1587,   220,   298,  1180,  1181,   212,
   -1845,  2461,  1220,  1542,  1186,   509,  2319,  1220,  1488,   756,
      42,  1283,   688,  2200,  2156,  1839, -1876, -1608,  1853,  1461,
     223, -1876,   836,  1640, -1585,   743,   252,  1937,  2561,     4,
    1886,   284,  1228,   786,  1249,   454,   217,   700,   259,   516,
     328,  2533,   749, -1832,  2152,    23, -1774,   129,  1392,  2375,
    -673,   847,   539,   728,  -673,   420,   716,  2233,   183,  -671,
     222,  2233,  1458,  -671, -1876,  1028,   854,  1478,    43,  2730,
    2542,  2209,  1678,   439,  2711,   413,  1542,  2093,  2094,  1807,
     811,   728,  2173,   707,   296,  1001,  1574,  2655,  1839,  1359,
    1290,   529,   300,  1943,    94,  1919,  2705,  1574,     3, -1805,
    2706,  1291,  1179,  2731,  1808, -1876,  1920,  2174,   522,  1409,
    2711,  -673,   419,  1873,  1006,  1006,  1006,   275,   276,   440,
    -671,  1192,   708,  1870,  2732,   729,   726,   205,    94,    43,
    1459,  2656,   728,   854,    24,  2660,  1006,   717,   213,   718,
    2576,  2153,  2723,  2128, -1657,  1632,   127,   184,  1264,   285,
     701,   130,  1188,   731,  1306,  1938,   154,  2534,  1574,  1020,
    1246,  1679,  1462,  1246,  1264,  2158,  1192,  1264,  1788,  1518,
    2287,   312,   188,  1206,     5, -1776,  2690,  1874,   607,   189,
   -1863,   315,   689,  2201,   727,  1177, -1876,   224,   750,  1948,
    1704,   139,  2746,   139,   139,  1246,  1954,  1210,   411,   414,
     139,   244,   497,  2279,   733,  1947,  1965,  2192,   523,  2432,
     213,  2193,     5,   281,  2133,   489,   490,   139,  1705,  1706,
     511,   511,   495,  2136,  1844,  2391,   425,  1844,   511,   511,
     518,   218,  2075,   137,  1582,  1192,   282,   437,  1412,   489,
     137,  1006,   757,  1267, -1774,   128,   444,   445,  2361,   446,
     447,  2288,  1365,  1192,  2056,   453,  -673,  1192,  2292,   137,
     798, -1810,  2060,  1323,   284,  -671,  1635,   139,   838,  1349,
    1220,  1483,   470,   449,  2671,  1001,  1001,  1001,  1244,  2462,
    2320,   244,   841,  1824,   261,  1601,  2284,  1825,   496,   546,
    1010,   139,   139,   137,  2401,  1267,  1295,  1001,  1192,  1006,
    1006,  1006,  1557,  1395,  1192,   137,  1192,  1583,  1006,  1006,
    1006,  1432,  1364,   546,   586, -1774,  1432,  2059,  2095,  1322,
   -1774,  1006,  1006,  1006,  1006,  1006,  1006,  1006,  1006,   369,
    1432,  1006,   139,  2268,  -678,   137,  1264, -1876,  2511,  1211,
    1212,  1505,   693,  2052,  2310,  1425,  1425,  1425,  2098,   704,
     779,   139,   713,   544,   586,   761,  1396,  2122,  1438,  1440,
    1472,    94,  1855,  1267,  1885,  1446,   540, -1805, -1845,  1395,
    1757,   761,   581,  1306,   761,  1557,   859,  2083,  1395,  1003,
      97,   798,   285,  1349,   190,  2126,   266, -1774,  1017,  1022,
    1010,  1454,   597,  1898,   599,   744,  2142,   604,   606,   764,
     608,  2433,  1001,   347,   747, -1770,   293, -1770,  2289,   765,
    1875,  -678,   262,  1574,   137,   764,   149,   137,   764,   709,
    2141,   137,  1396,  2321,  2069,   765,  1267,   244,   765,   686,
    1365,  1396,   129, -1673,   695,  1453,   395,   540,  2073,  1966,
    2446,   706,  2448,  1470,  1533,  2143,  1964,   323,   714,   137,
    1505,  1707,  -516,  1193,  1840,  2003,  1264,  2180, -1774,   191,
    1001,  1001,  1001, -1774,    94,  1841,   244,   256,  1349,  1001,
    1001,  1001,  2359,  2466,  1197,  2543,   137,   431,   613,  1198,
    -516,  -516,  1001,  1001,  1001,  1001,  1001,  1001,  1001,  1001,
    1498,  2096,  1001,   766, -1549,  2592,  2593,  2249,  1193,  2242,
     752,  1660,  1844,  2484,  2485, -1651,  2293,  2294,  2295,   766,
     711,  1365,   766,  1258, -1876,  1197,   192,  1576,   839,  2714,
    1198,   193, -1863,   844,   466,  2340,   137,  1840,  1027,  2638,
   -1587,   849,   849,  2639,  2640,  2304,   130,   519,  1841, -1876,
     967,   784, -1876,   761,   785,  2272,  2252,   798,  1012,  1526,
    1194,  2312,   450,  2314,  1130,   352,   406,  2065,   154,   154,
    1661,  2070,  2663,   767,    15,  1267,  1264,  1193,   154,  1003,
    1003,  1003,  2296,  1365,  1814,  1986,  1263,   520,  1275,   767,
    2713,  2079,   767, -1774,   614,  1193,  1708,   764,  2233,  1193,
    2081,  1003,  2345, -1770,  -516,  1636,   728,   765,  1643,  2663,
     761,  1352,  -676,  1357,  1767,  1768, -1549,   407,  1383,   768,
    1197,    16,  1719,  1759,  1720,  1198,   615, -1876,   451, -1653,
    2241, -1876,  1405,  -516,  2392,   768,   194,  1006,   768,  2144,
    1193,  1637,   587,  2334,   728,  2160,  1193, -1655,  1193,  2122,
    2243,  1685, -1876,  1611,   764,  2376,  1769,    18,  1770,  1253,
    1771,  2566,  2567,   137,   765,    28,  2155,   329,  1644,   769,
    1479,  1645,  2004,   761,  1811,  1306,  1574,   188,   735,   137,
    1264,   244,   137, -1770,   189,   769,  2305,  1790,   769,  -676,
    2335,   766, -1649,   -96,  1772,  1773,  1774,  2454, -1646,   -35,
    1697,   306,  1633,  1612,  1231,   117,  1245,  2297,  2298,  1261,
    2628,   432,  2299,  1285,  1810,    52,   737,   764,  2378,  1169,
    1814,  2455,  2456,  -516,    27,  1006,  1987,   765,  1321,  1489,
     244,   137,   154,  2230,  1347,   759, -1774,  2259,  2260,  1527,
    1507,  2261,  1131, -1790,  1775,   188,  1776,   188,   766,  2532,
    1906,  2005,   189,  1777,   189,  1403,  1778,  1407,  2393,  2347,
     467,   767,  1923,    53,  1003,  1003,  1003,    33,  2380,   588,
    1924,   244,   395,  1003,  1003,  1003,  1430,   137,   139,   139,
    1700,  1430,     5,   761,  2348,  1215,  1003,  1003,  1003,  1003,
    1003,  1003,  1003,  1003,  1510,  1430,  1003,  2415,  1001,  1499,
    2751,    54,   227,    55,  1318,    56,  1905,   768,  2385,   244,
    2022,   766,   759,    57,  1254,   468,  1255,  1006,   767,  1006,
    2572,   137,   137,   137,  1469,  1152,  1432,   764,  2011,  2011,
    1394,  1006,   137,   754,   171,   326,  2169,   765,   -96, -1876,
     739,  1823,  2457,  1779,  2527,  1780,   307,    36,  1347,   330,
    1261,   137,   137,   760,  1438,  2752,  1438,   769,  -516,  1906,
     244,   759,  1365,  2753,   768,   755,    40,   345,  1969,    58,
    2317,  1029,  2145,  1252,   244,  2074,  1618,  1271,   172,  2633,
    1130,   767,  1816,   589,  1271,  1308,  1001,   761,   173,   190,
    2023,  1972,  1271,  1899,  2313,  1327,  2315,   154,  2323,   401,
    1348,   228,  1355, -1549,  1355,  1363,  1380,  1327,   137,  1287,
     331, -1549, -1549,  1916,   769,  1905, -1549, -1874,  1312,  1153,
     301,   766,  1900,   618,  1355,  1330,  1332,   768,  2439,  2563,
     154,   764, -1792,  1347,  1273,  1267,  1925,  2673,  1816,   761,
     254,   765,    39,  2386,  1389,  2700,  1574,  2458,  2754,  1451,
    2358,  2589,   720,  1871,  2677,  1628,   317,   190,  1493,   190,
    1154,   417,    60,  2712,   191,  1207,    48, -1876,  1926,  2631,
    1976,   137,   174,  1815,  1849,  1458,  2459,   769,  1001,    49,
    1001,  1655,  2629,   764,   395,  1580,  2070,   229,  1267,  1155,
    1927,   767,  1001,   765,  2609,  2610,  2016,  2612,  2355,  2017,
    1621,   254,  1872,  2613,  1252,  2614,  2411,    61,  2067,  2426,
    2426,  1579,  1333,  2431,  1857,  2736,   761,   318,   319,    26,
     229,   192,    94,  1271,  1477,   766,   193, -1790,  2756,  2741,
    2666,   230,   191,  2254,   191,  2255,    47,   768, -1876,  1891,
    1781,   231,   175,  1459,  1928,    91,   154,  2577,   762,   763,
    1673,  2426,  2426,  2404,  1197,   232,  2472,  2718,  1131,  1198,
     764,  1659,  1271, -1876,   230,   761,  1604,  1334,   837,  1477,
     765,  2236,   761,  1271,   231,  1335,  2473,   766,   255,  1649,
    2594,   137,  2270,  1571,  1605,  1156,  2578,   769,   176,   192,
    1782,   192,  1003,    51,   193,   767,   193,  -668,   155,    64,
     156,  1783,  2474,  1298, -1876,  2351,  1988,  1929,   352,   764,
      13,  2634,    93,  2405,  1591,    13,   764,  1363,  1018,   765,
     834,   834,  1873,  2579, -1876,   233,   765,  2475,  1544,  1545,
    1271,   256,  1902,  1989,  1271,  1990,  1490,  2067,   177,  2554,
     395,   768,    67,   155,   362,   156,   253,   767,   299,  2555,
   -1876,   835,   835,  2278,   766,  2501,  2100, -1093,   233,  2101,
    1336,  1766,   118,   761,    97,  2502,  2102,  2103,  1546,  1547,
     139,   834,  1628,  1389,  2719, -1876,   363,  2721,  1477,  1955,
    1003,  2516,  1326,   100,  1493,   137,  1874,   244,  2503,    21,
      22,   769,  1675,   768,  1326,   234,  1897,  2720,   235,   236,
    2722, -1093,   835,   766,  1930,  1904,   101,   764,    46,   139,
     766, -1093,  2588,  2104,  1829,    68,  1913,   765,  2504,  1860,
    1977,  1978,  1861,  1862,   767,  2523,  1199,  2524,   234,  1299,
    1300,   600,  1795,   601,  2428,  1200,  -668,   137,  2302,   717,
    -668,   718,  2232,   769,  1941,  1435,  2651,  2406,  1301,  1664,
    2402,  1665,  2407,  2088,  1628,  1197,  1491,   598,  2092,    94,
    1198,  1794,   605, -1770,  1416,  1419,  1422,   814,  2282,  1196,
     768,   106,  1003,   767,  1003,  2443,  2444,   108,  1197,   404,
     767,  1430,  2105,  1198,  1795,   244,  1003,   442,  2274,  2678,
    2680,   237,  1889,  2129,  1699, -1093,  1448,  -668,   109,  1712,
    1749,   766,  1751,  1302,  1477,   110,   815,   816,   817,   818,
     819,  2106,  1834,  1836,  1904,  2398,  1910,  2399,  2717,   768,
     769,  1694,  2643,  2644,   237,  2228,   768,  2000,   114,  2282,
    2001,  1197,  1252,  2107,   112,  1197,  1198,  2727,  1006,   113,
    1198,  1935,   633,   634,  1441,  1442,  2476,   512,  2175,  1271,
    1571,  2559,  1795,  2240,   514,   515,   120,   429,  1695,   471,
     472,   473,  2244,  1252,   122, -1093,  1628,  1197,  1917,   769,
     137,   767,  1198,   137,  1457,  2367,   769,   140,  1457,  2750,
     124,  1887,  2068,  1558,   126,  1559,  2560,  2108,  2498,  1271,
    2499,    52,  1681,   142, -1876,  1683,   163,   244,  1443,  1444,
    1445,  1686,   149,  2554,  2282,  1690,   631, -1565, -1565, -1565,
   -1565, -1093,  1692,  2555,  1946,  1795,  2518,   768,  2519,  1875,
     164,  2109,  1921,  1769,   165,  1770,  1719,  1769,  1720,  1770,
    1187,   168,  1189,  1936,  1427,  1428,  1940,   182,   723,    53,
     186,  2110,  -668,   139,  1944,   820,   821,   822,   823,   824,
     825,   826,   646,   647,   205, -1093,  1766,  2258,  2490,   187,
    2493, -1093,   194,   243,   248,  1960,   249,   769,   250,  1628,
    1628,  1520,  1521,  1522,  1523,   251,   258,    54,   270,    55,
     474,    56,   274,   279,  1998,  1863,  1864,   295,  1933,    57,
   -1564, -1564, -1564, -1564,   475,   297,   154,   303,  2168,  1001,
     304,   301,   559,   308,  2111,  2006,  1628,  2275,   309,   310,
    1865,  1866,   313,   314,  1327,   327,   334,  2112,   560,   335,
     339,  1829,  1830,  1831,  1832,  1833,  2301,   337,  2282,   341,
     343,   352,  1957,  2208,  1959,   350,  2113,  1961,  1962,  1963,
    2218,  2218,   354,  1967,   355,    58,  1970,  1971,  1974,  1975,
    1271,   357,  2396,   393,  1271,  2676,   398,  1271,   561,  1985,
    1252,   399,   395,  2324,   402,  1261,  1994,  2326,  2552,   404,
     409,  2597,   410,   188,   244,  2239,   421,   422,   476,   477,
     478,   732,   734,   736,   738,  2162,   423,   430,   414,   455,
     456,  2394,  1271,   479,   458,   460,  2007,   649,   827,  -351,
     491,  2114,   487,  2015,   494,   498,  2354,    59,   499,   506,
     513,   525,   527,   828,  2598,   526,  2599,   531,   537,   547,
     582,   552,   553,  -364,   551,   429,   555,  2417,  2418,  2419,
    2420,  2421,   556,   583,   558,   591,  2207,  2429,    60,   592,
     609,  1271,  1271,  1271,   593,  2207,  1910,  2600,   611,   616,
    2343,   620,   617,   621,   692,   694,  2087,   697,  2183,  2184,
    2185,  2186,  2187,  2188,  2189,  2190,   705,  2281,  2601,   722,
     741,  2441,   748,   774,   790,   739,  2442,   777,   781,  2445,
     758,   783,   794,    61,   796,   480,    62,   798,    94,   793,
     653,   801,   806,   808,  2416,   562,  2602,   812,   838,   845,
    1271,   851, -1657,   965,   968,  1010,   563,  1040,  2182,  1859,
    1016,  1015,  1860,  2434,  1019,  1861,  1862,  1141,  1037,  2325,
    2435,  2436,  1160,  1032,  1171,  1168,  1173,  1201,  2281,  1628,
     139,  1213,  1174,  1175,   358,  1217,  1226,  1628,  1182,  1288,
    1183,  1184,  1327,  1185,  1190,  1202,   970,  1204,  1205,   359,
    1410,  1327,  2229,  1219,    63,  1227,  1897,  1309,  1412,   360,
    1449,  2250,  1450,   971,  1423,  1451,  1464,  1467,  1473,  1482,
    1484,   658,  1496,  1513,  1502,    64,  1424,   137,  2513,  1434,
    2603,  1508,  2514,  1511,  1528,  2362,  1006,  1006,  1524,  1572,
    1530,  2517,  2477,  1003,   361,  2478,  2479,  2604,  1589,  2227,
      65,  1576,    66,  2281,  1592,  1593,  1595,  1628,  2480,  1597,
   -1567,   564,   565,  1606,  1607,  1006,  1608,  1609,    67,  2605,
    1614,  2231,  2495,  2496,  1616,  1623,   566,  1619,   567,  2403,
    1625,  1365,  1271,  1639,  1006,  1220,  1641,  1663,  1261,  1651,
    2606,  2245,  2674,  2247,  1656,  2681,  2559,  2248,  1667,  1669,
    1671,  1676,  1682,  2162,  1684,   972,   973,   974,  1687,  2607,
    1688,  2703,  2353,  2646,   975,  1689,   667,  2608,  1691,  1693,
    1696,  1698,  2262,  1271,  2521,  1271,  1006,  2263,  1701,  1703,
    1757,  2682,  2440,  1752,  1753, -1876,  1755,  1791, -1876,  1797,
    1800,    68,  2269,  2665,  1798, -1876, -1876,  1802,  2554,  1246,
    1812,  1816,  1821,  1845,  1848,  1869,  1856,  1884,  2555,  1582,
    1892,  1907,  1271,   568,  1271, -1770,  1915, -1770,  2547,  1911,
    1486,  1922,   979,   980,   981,  1949,  1981,  2281,   982,  1942,
    1982,  1999,  1996,  2009,  2008,  2002,  2057,  2061,  2062,  2058,
    2063,  2076, -1876,  2080,  2303,  2064,  2084,  1001,  1001,  2085,
    2308,   362,  2350,  2089,  2116,  2118,  2123,  2311,  2130,  2131,
     569,  2124,  2134,  2138,  2137,  2157,  2163,  1271,   983,  2165,
    2166,  2169,  2176,  2177,  2203,  2210,  1001,  2211,  1863,  1864,
    1327,  2212,  2213,   363,   139,  2222,  2265,  2224,  2253,  2233,
    2369,  2369,  2266,  -237,  2342,  1001,  2270, -1586,  2327,   429,
    2276,  2333,  2336,  1865,  1866,  2339,   546,  2344,  2355,  2357,
    2371, -1876,  2374,  1261,  2381,  2383,  1327,  1327,  1327,  1327,
    1327,  2427,  2427,  2379,  1327,  1327,  1327,  2070,  1327, -1542,
    2522, -1584,  2468,  2437,  2452,  2467,  1005,  1001,  2447,   429,
   -1876,  2449,  2469,  2470,  2486,   985,  2481,   364,  2491,  2386,
    2525,  2526,   365,  2528,  2531,  2544,  2545,  2550,  2546,  2565,
    1327,  2573, -1876,  2427,  2427,  1327,  1327,  1327,  1327,  1271,
    2594,  1271,  2574,  2630,  2548,  2637,  2641,  2647,  2636,  2667,
    2668,  2551,  2649,  2697,  2553,  2698,   366,  2740,  2728,  2742,
    2737,  2744,  2749,    17,   367,    92,   986,   987,   125,   139,
      38,   167,  1271, -1770,  2450,   257,   210,   368,   267,  2422,
    2423,   119,   278,   242,  2683,   291, -1876,   549,  2684,  2685,
     211,  2464,   443,  1759,   508,  2159,   324,   530,   457,  2575,
    1214,   802,   850,  1271,  1741,  2735,   369,  2151,  1674,   370,
     991,  1014,  1953,  2590,  2726,  2739,  2702,   371,  2395,  1036,
   -1876,  2306,  2412,   139,  2307,  1225,  2318,   963,  -234,  2413,
     992,  2264,  2686,  2021,  2078,   993,  1805,  1327,  1516,  2316,
   -1876,  1327,   994,  1806,   137,   586,  1481,  2099,  2687,  2688,
    1327,  1838,  1846, -1770,  2127,  2322,  1868,  1573,   372,  2451,
    1880,   373,  2139,  1596,  2338,  1888,  2346,  1599,  2349,  2654,
    2167,  2221,  1914,  2360,  1271,  1631,  1271,  2191,  1630,  1654,
    2370,  1381,  2219,  2220,  1178,  2489,  2734,  1952,  2483,  2541,
    1852,  2497,  2536,   429,  2494,  2363,  1005,  1005,  1005,  2364,
    2365,  1622,  2366, -1876,  1804,   214,   333,  2181,   776,  1487,
    1995,  1003,  1003,   311,   810,   294, -1876,  2635,  1005,   448,
    2664,   543,  2332,  2530,  2537,   273,   493,   787,  2704,  2150,
    2205,  2691,     0,     0,  1883, -1876,  1191,   603,     0,     0,
    1003,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2725,  2725,     0,     0,     0,     0,     0,  1003,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2568,     0,     0,  2538,  2569,  2570,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2748,  1252,     0,
   -1876,  1003,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1823,     0,     0,     0,     0,  2557,  2558,     0,     0,
       0,     0,     0,  1005,     0,  2648,     0,     0,  1272,     0,
     244,     0,     0,     0,     0,  1272,     0,     0,     0,     0,
       0,     0,     0,  1272,     0,  2571,     0,     0,     0,     0,
       0,   861,     0,   862,   759,   863,     0,  1272,     0,  1252,
     864,     0,     0,     0,     0,     0,     0,     0,   865,     0,
    2591,     0,     0,     0,     0,  2595,  2596,     0,     0,     0,
    2699,  1005,  1005,  1005,  2701,     0,     0,  2632,     0,     0,
    1005,  1005,  1005,  1431,     0,     0,     0,     0,  1431,     0,
    1252,   866,   867,  1005,  1005,  1005,  1005,  1005,  1005,  1005,
    1005,   868,  1431,  1005,     0,     0,     0,  2650,     0,     0,
    2652,  2653,   869,     0,     0,   870,     0,     0,   970,     0,
       0,     0,     0,     0,     0,     0,  1252,     0,     0,   871,
       0,     0,  1471,     0,     0,   971,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2743,  2675,   872,     0,     0,     0,     0,     0,  2757,     0,
     873,     0,   874,     0,  1272,     0,     0,     0,     0,  -715,
       0,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,     0,
    -715,  -715,  -715,     0,  -715,  -715,  -715,  -715,  -715,  -715,
    -715,  -715,  -715,   875,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1272,   876,     0,     0,     0,     0,   877,
       0,     0,     0,     0,  1272,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   972,   973,   974,
       0,     0,     0,     0,     0,   878,   975,     0,     0,     0,
       0,     0,   879,     0,     0,   880,   881,     0,   761,     0,
       0,     0,     0,     0,     0,     0,   882,     0,     0,     0,
       0,     0,  1629,   883,     0,   884,     0,     0,   885,     0,
       0,  1272,     0,     0,     0,  1272,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   764,     0,   979,   980,   981,     0,     0,     0,
     982,     0,   765,     0,     0,     0,     0,     0,     0,     0,
     886,     0,     0,     0,   887,     0,   888,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   889,     0,     0,     0,
       0,     0,  -715,  -715,  -715,     0,  -715,  -715,  -715,  -715,
     983,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   890,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   861,     0,   862,   891,   863,     0,     0,
       0,     0,   864,  1796,     0,     0,     0,     0,     0,     0,
     865,     0,     0,     0,     0,     0,   766,     0,     0,     0,
       0,     0,     0,     0,   892,   893,     0,     0,     0,  1005,
       0,     0,     0,     0,     0,   894,     0,     0,     0,     0,
       0,     0,     0,   866,   867,     0,     0,   985,     0,   895,
     896,     0,     0,   868,     0,  1796,   897,     0,     0,     0,
     898,     0,     0,     0,   869,     0,     0,   870,   899,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   900,     0,
       0,   871,     0,     0,     0,     0,   767,   901,     0,     0,
       0,     0,     0,     0,     0,     0,   902,     0,   986,   987,
       0,   903,   904,     0,   872,   905,     0,   906,     0,  1629,
       0,     0,   873,     0,   874,   907,     0,  1005,     0,     0,
    1272,     0,     0,  1796,     0,     0,     0,     0,  -715,     0,
       0,     0,   768,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   991,     0,     0,   875,   909,     0,     0,     0,
       0,     0,   910,     0,     0,     0,   876,   911,     0,     0,
    1272,   877,   992,     0,     0,     0,     0,   993,     0,     0,
       0,     0,     0,     0,   994,     0,   137,     0,  -715,     0,
       0,     0,   769,     0,   912,     0,  1796,   878,     0,     0,
       0,  1629,     0,     0,   879,     0,     0,   880,   881,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   882,  1005,
       0,  1005,     0,     0,     0,   883,     0,   884,  1431,     0,
     885,     0,     0,  1005,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   886,     0,     0,     0,   887,     0,   888,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   889,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1629,     0,   890,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   861,     0,   862,   891,   863,
       0,  1272,     0,     0,   864,  1272,     0,     0,  1272,     0,
       0,     0,   865,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   892,   893,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   894,     0,     0,
       0,     0,     0,  1272,     0,   866,   867,     0,     0,     0,
       0,   895,   896,     0,     0,   868,     0,     0,   897,     0,
       0,     0,   898,     0,     0,     0,   869,     0,     0,   870,
     899,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     900,     0,     0,   871,     0,     0,  1629,  1629,     0,   901,
       0,     0,  1272,  1272,  1272,     0,     0,     0,   902,     0,
       0,     0,     0,   903,   904,     0,   872,   905,     0,   906,
       0,     0,     0,     0,   873,   970,   874,   907,     0,     0,
       0,     0,     0,  1629,     0,     0,     0,     0,     0,     0,
     908,     0,   971,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   875,   909,     0,
       0,  1272,     0,     0,   910,     0,     0,     0,   876,   911,
       0,     0,     0,   877,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   912,     0,     0,   878,
       0,     0,     0,     0,     0,     0,   879,     0,     0,   880,
     881,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     882,     0,     0,     0,     0,     0,     0,   883,     0,   884,
       0,     0,   885,     0,   972,   973,   974,     0,     0,     0,
       0,     0,     0,   975,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   761,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   886,     0,     0,   861,   887,   862,
     888,   863,     0,     0,     0,     0,   864,     0,     0,     0,
     889,     0,     0,  1272,   865,     0,     0,     0,     0,   764,
       0,   979,   980,   981,     0,     0,     0,   982,     0,   765,
       0,     0,     0,     0,     0,     0,     0,   890,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   866,   867,     0,
     891,     0,     0,     0,  1272,     0,  1272,   868,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   983,   869,     0,
       0,   870,     0,     0,     0,     0,  1629,     0,   892,   893,
       0,     0,     0,     0,  1629,   871,     0,     0,     0,   894,
       0,     0,     0,  1272,     0,  1272,     0,     0,     0,     0,
       0,     0,     0,   895,   896,     0,     0,     0,   872,     0,
     897,     0,     0,   766,   898,     0,   873,     0,   874,     0,
       0,     0,   899,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   900,     0,     0,     0,     0,     0,     0,     0,
    1005,   901,     0,     0,   985,     0,     0,     0,  1272,   875,
     902,     0,     0,     0,  1629,   903,   904,     0,     0,   905,
     876,   906,     0,     0,     0,   877,     0,     0,     0,   907,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1662,   767,     0,     0,     0,     0,     0,     0,
       0,   878,     0,     0,     0,   986,   987,     0,   879,     0,
     909,   880,   881,     0,     0,     0,   910,     0,     0,     0,
       0,   911,   882,     0,     0,     0,     0,     0,     0,   883,
       0,   884,     0,     0,   885,     0,     0,     0,     0,   768,
       0,     0,     0,     0,     0,     0,     0,     0,   912,   991,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1272,     0,  1272,     0,     0,     0,     0,     0,     0,   992,
       0,     0,     0,     0,   993,     0,   886,     0,     0,     0,
     887,   994,   888,   137,     0,     0,     0,     0,     0,   769,
       0,     0,   889,  1272,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   890,
       0,     0,     0,     0,  1272,     0,     0,     0,     0,     0,
       0,     0,   891,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     892,   893,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   894,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   895,   896,     0,     0,     0,
       0,     0,   897,     0,     0,  1272,   898,  1272,  1042,     0,
    1043,     0,     0,     0,   899,  1044,     0,     0,     0,     0,
       0,     0,     0,  1045,   900,     0,     0,     0,     0,     0,
       0,     0,     0,   901,     0,     0,     0,     0,     0,     0,
       0,     0,   902,     0,     0,     0,     0,   903,   904,     0,
       0,   905,     0,   906,     0,     0,  1046,  1047,     0,     0,
       0,   907,     0,     0,     0,     0,  1048,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1049,     0,     0,
    1050,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   909,     0,  1051,     0,     0,     0,   910,     0,
       0,  1232,     0,   911,   759,     0,     0,  1538,  1539,  1540,
       0,     0,     0,     0,     0,  1541,     0,  1052,     0,     0,
       0,     0,     0,     0,     0,  1053,     0,  1054,     0,     0,
     912,     0,     0,     0,  1055,     0,  1056,  1057,  1058,  1059,
    1060,  1061,  1062,  1063,     0,  1064,  1065,  1066,     0,  1067,
    1068,  1069,  1070,  1071,  1072,  1073,  1074,  1075,  1076,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1077,
       0,     0,     0,     0,  1078,     0,     0,     0,   970,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   971,     0,     0,     0,     0,
    1079,     0,     0,     0,     0,     0,     0,  1080,  1005,  1005,
    1081,  1082,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1083,     0,     0,     0,     0,  2027,     0,  1084,  2028,
    1085,     0,  2029,  1086,     0,     0,     0,  1005,     0,     0,
    2030,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1542,  1005,     0,     0,     0,
       0,     0,     0,     0,     0,  1543,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1087,     0,     0,     0,  1088,
       0,  1089,     0,     0,     0,     0,  2031,   972,   973,   974,
       0,  1090,     0,     0,     0,     0,   975,     0,  1005,     0,
       0,     0,  1544,  1545,     0,  2032,     0,     0,   761,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1091,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1851,     0,
       0,  1092,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1234,  1546,  1547,     0,     0,     0,   977,     0,   978,
       0,     0,   764,     0,   979,   980,   981,     0,     0,  1093,
     982,     0,   765,     0,     0,     0,     0,  1235,     0,     0,
    1094,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1548,     0,     0,     0,  2033,  1095,  1549,     0,     0,     0,
    1550,  1096,  2034,     0,     0,  1097,     0,     0,  1551,     0,
     983,     0,     0,  1098,     0,  1552,  2035,     0,     0,     0,
    1553,     0,     0,  1099,     0,     0,     0,     0,     0,   984,
       0,     0,  1100,     0,     0,     0,     0,  1232,     0,  1554,
     759,  1101,     0,  1538,  1539,  1540,  1102,  1103,  2036,     0,
    1104,  1541,  1105,     0,     0,     0,   766,     0,     0,     0,
    1106,     0,     0,     0,     0,     0,     0,     0,  2037,     0,
    2038,     0,     0,  1107,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   985,     0,     0,
       0,  1108,  2039,  2040,     0,     0,     0,  1109,     0,     0,
       0,     0,  1110,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   970,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2041,     0,   767,     0,     0,  1111,
       0,   971,     0,     0,     0,     0,     0,     0,   986,   987,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2042,  2043,     0,     0,     0,     0,     0,
    1555,     0,  1556,     0,  1557,     0,     0,  1558,     0,  1559,
    1560,  1561,   768,     0,  1562,  1563,  1232,     0,     0,   759,
    2044,     0,   991,     0,     0,     0,     0,  2045,     0,     0,
       0,  1542,     0,     0,     0,     0,     0,     0,     0,     0,
    2046,  1543,   992,     0,  2047,     0,     0,   993,     0,     0,
       0,     0,     0,     0,   994,     0,   137,     0,     0,  2048,
       0,     0,   769,   972,   973,   974,     0,     0,     0,     0,
       0,     0,   975,     0,     0,     0,     0,     0,  1544,  1545,
       0,     0,     0,     0,   761,     0,  2049,     0,     0,     0,
       0,     0,     0,   970,     0,  2050,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     971,     0,     0,     0,     0,     0,     0,  1234,  1546,  1547,
       0,     0,     0,   977,  2051,   978,     0,     0,   764,     0,
     979,   980,   981,     0,  2052,     0,   982,     0,   765,     0,
    2053,     0,     0,  1235,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1548,     0,  1232,     0,
       0,   759,  1549,  1918,     0,     0,  1550,     0,     0,     0,
       0,     0,     0,     0,  1551,     0,   983,     0,     0,     0,
       0,  1552,  -939,     0,     0,     0,  1553,  -939,     0,     0,
    -939,     0,     0,     0,     0,   984,     0,  -939,  -939,     0,
       0,     0,   972,   973,   974,  1554,     0,  -879,     0,     0,
    -879,   975,     0,     0,     0,     0,     0,  -939,     0,  -939,
       0,     0,   766,   761,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   970,     0,     0,     0,     0,
       0,     0,     0,     0,  -939,     0,     0,     0,     0,     0,
    1220,     0,   971,   985,     0,     0,  1234,     0,     0,     0,
       0,     0,   977,     0,   978,     0,     0,   764,     0,   979,
     980,   981,     0,     0,     0,   982,     0,   765,     0,     0,
       0,     0,  1235,     0,  -879,     0,     0,     0,     0, -1774,
       0,     0,   767,     0,     0,     0,     0,     0,     0,     0,
       0,  -879,     0,     0,   986,   987,     0,     0,     0,     0,
       0,     0,     0,  -939,     0,   983,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1555,     0,  1556,     0,
    1557,     0,     0,  1558,   984,  1559,  1560,  1561,   768,     0,
    1562,  1563,  -939,     0,   972,   973,   974,     0,   991,     0,
       0,     0,  1232,   975,     0,   759,     0,     0,     0,     0,
       0,   766,     0,     0,  -939,   761,     0,     0,   992,     0,
       0,     0,     0,   993,     0,     0,     0,     0,     0,     0,
     994,     0,   137,     0,     0,     0,     0,     0,   769,     0,
       0,     0,   985,  -879,  -879,  -879,     0,     0,  1234,     0,
       0,     0,  -879,     0,   977,  -939,   978,     0,     0,   764,
       0,   979,   980,   981,  -879,     0,     0,   982,  -939,   765,
       0,     0,     0,     0,  1235,  -939,     0,     0,     0,   970,
       0,   767,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   986,   987,     0,   971,  -879,     0,     0,
       0,     0,  -939,  -879,     0,  -879,     0,   983,  -879,  1385,
    -879,  -879,  -879,     0,     0,     0,  -879,     0,  -879,     0,
    1919,     0,  -939,  -879,     0,     0,   984,   768,     0,     0,
       0,  1920,     0,     0,     0,  -939,     0,   991,     0,     0,
       0,     0,     0,  1232,     0,     0,   759,     0,     0,     0,
       0,     0,     0,   766,     0,     0,  -879,   992,     0,     0,
       0,  -879,   993,     0,     0,     0,     0,     0,     0,   994,
       0,   137,     0,     0,     0,  -879,     0,   769,     0,     0,
       0,     0,     0,     0,   985,  -939,     0,     0,   972,   973,
     974,     0,     0,     0,     0,     0,     0,   975,  -939,     0,
       0,     0,  -879,     0,     0,     0,     0,     0,     0,   761,
       0,     0,     0, -1774,     0,     0,     0,  -939,     0,     0,
     970,     0,     0,   767,     0,  1653,     0,     0,     0,     0,
       0,     0,  1233,  -879,     0,   986,   987,   971,     0,     0,
       0,     0,  1234,     0,     0,     0,     0,     0,   977,  1232,
     978,     0,   759,   764,     0,   979,   980,   981,     0,     0,
       0,   982,     0,   765,     0,     0,  -879,     0,  1235,   768,
       0,     0,  -879,     0,     0,     0,     0,     0,     0,   991,
       0,     0,  -939,     0,  -879,  -879,     0,     0,     0,     0,
       0,     0,     0,  -939,     0,     0,     0,     0,     0,   992,
       0,   983,     0,     0,   993,     0,     0,     0,     0,     0,
       0,   994,  -939,   137,     0,     0,     0,     0,  -879,   769,
     984,     0,     0,     0,     0,     0,   970,     0,  -879,   972,
     973,   974,     0,     0,  -879,     0,     0,     0,   975,     0,
       0,     0,     0,   971,     0,     0,     0,   766,  -879,     0,
     761,     0,     0,  -879,     0,     0, -1774,     0,     0,     0,
    -879,     0,  -879,     0,     0,     0,     0,     0,  -879,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   985,     0,
       0,     0,     0,  1234,     0,     0,     0,     0,     0,   977,
    1232,   978,     0,   759,   764,     0,   979,   980,   981,     0,
       0,     0,   982,     0,   765,     0,     0,     0,     0,  1235,
       0,     0,     0,     0,     0,     0,     0,   767,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   986,
     987,     0,     0,     0,     0,   972,   973,   974,     0,     0,
       0,     0,   983,     0,   975,  1232,     0,     0,   759,     0,
       0,     0,     0,     0,     0,     0,   761,     0,     0,     0,
       0,   984,     0,   768,     0,     0,     0,   970,     0,     0,
       0,     0,     0,   991,     0,     0,     0,     0,     0,  1328,
       0,     0,     0,     0,   971,     0,     0,     0,   766,  1234,
       0,     0,     0,   992,     0,   977,     0,   978,   993,     0,
    1276,     0,   979,   980,   981,   994,     0,   137,   982,     0,
     765,     0,     0,   769,     0,  1235,     0,     0,     0,   985,
       0,     0,   970,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   971,
       0,     0,     0,     0,     0,     0,     0,     0,   983,     0,
       0,     0,  1385,  1277,     0,     0,     0,     0,   767,     0,
       0,     0,     0,     0,     0,     0,     0,   984,     0,     0,
     986,   987,     0,     0,     0,     0,   972,   973,   974,     0,
       0,     0,     0,     0,  1232,   975,     0,   759,     0,     0,
       0,     0,     0,     0,   766,     0,     0,   761,     0,     0,
       0,     0,     0,     0,   768,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   991,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   985,     0,     0,     0,     0,
    1234,   972,   973,   974,   992,     0,   977,     0,   978,   993,
     975,   764,     0,   979,   980,   981,   994,     0,   137,   982,
       0,   765,   761,     0,   769,     0,  1235,     0,     0,     0,
       0,   970,     0,     0,   767,     0,     0,     0,     0,     0,
       0,  1232,     0,  1390,   759,     0,   986,   987,   971,     0,
       0,     0,     0,     0,     0,  1234,     0,     0,     0,   983,
       0,   977,     0,   978,     0,     0,   764,     0,   979,   980,
     981,     0,     0,     0,   982,     0,   765,     0,   984,     0,
     768,  1235,     0,     0,     0,     0,     0,     0,     0,     0,
     991,     0,     0,     0,     0,     0,  1232,     0,     0,   759,
       0,     0,     0,     0,     0,   766,     0,     0,     0,     0,
     992,     0,     0,     0,   983,   993,     0,     0,   970,     0,
       0,     0,   994,     0,   137,     0,     0,     0,     0,     0,
     769,     0,     0,   984,     0,   971,   985,     0,     0,     0,
     972,   973,   974,     0,     0,     0,     0,     0,     0,   975,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     766,   761,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   970,     0,   767,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   986,   987,     0,
     971,   985,     0,     0,  1234,     0,     0,     0,     0,     0,
     977,     0,   978,     0,     0,   764,     0,   979,   980,   981,
       0,     0,     0,   982,     0,   765,     0,     0,     0,     0,
    1235,   768,     0,     0,     0,     0,     0,   972,   973,   974,
     767,   991,     0,     0,     0,     0,   975,     0,     0,     0,
       0,     0,   986,   987,  1232,     0,     0,   759,   761,     0,
       0,   992,     0,   983,     0,     0,   993,     0,     0,     0,
       0,     0,     0,   994,     0,   137,     0,     0,     0,     0,
       0,   769,   984,     0,     0,     0,   768,     0,     0,     0,
       0,  1234,   972,   973,   974,     0,   991,   977,     0,   978,
       0,   975,   764,     0,   979,   980,   981,     0,     0,   766,
     982,     0,   765,   761,     0,     0,   992,  1235,     0,     0,
       0,   993,     0,     0,     0,     0,     0,     0,   994,     0,
     137,   970,     0,     0,     0,     0,   769,     0,     0,     0,
     985,     0,     0,     0,     0,     0,  1234,     0,   971,     0,
     983,     0,   977,     0,   978,     0,     0,   764,     0,   979,
     980,   981,     0,     0,     0,   982,     0,   765,     0,   984,
       0,     0,  1235,     0,     0,     0,     0,     0,     0,   767,
       0,     0,     0,     0,     0,     0,     0,  1232,     0,     0,
     759,   986,   987,     0,     0,     0,   766,     0,     0,     0,
       0,     0,     0,     0,     0,   983,     0,     0,     0,     0,
    1277,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   984,   768,     0,   985,     0,     0,
       0,     0,     0,     0,     0,   991,     0,     0,     0,     0,
     972,   973,   974,     0,  1658,     0,     0,     0,     0,   975,
       0,   766,     0,     0,     0,   992,     0,     0,     0,     0,
     993,   761,     0,     0,   970,     0,   767,   994,     0,   137,
       0,     0,     0,     0,     0,   769,     0,     0,   986,   987,
       0,   971,   985,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1234,     0,     0,     0,  1475,     0,
     977,  1232,   978,     0,   759,   764,     0,   979,   980,   981,
       0,     0,   768,   982,     0,   765,     0,     0,     0,     0,
    1235,   767,   991,     0,  1792,     0,     0,   759,     0,     0,
       0,     0,     0,   986,   987,     0,     0,     0,     0,     0,
       0,     0,   992,     0,     0,     0,     0,   993,     0,     0,
       0,     0,     0,   983,   994,     0,   137,     0,     0,     0,
       0,     0,   769,     0,     0,     0,     0,   768,     0,     0,
       0,     0,   984,   972,   973,   974,     0,   991,   970,     0,
       0,     0,   975,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   761,   971,     0,   992,     0,   766,
       0,   970,   993,     0,     0,     0,     0,     0,     0,   994,
       0,   137,     0,     0,     0,     0,     0,   769,   971,     0,
       0,     0,     0,     0,     0,     0,     0,  1234,     0,     0,
     985,     0,     0,   977,     0,   978,     0,     0,   764,     0,
     979,   980,   981,     0,     0,     0,   982,     0,   765,     0,
       0,     0,     0,  1235,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   767,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   986,   987,     0,     0,     0,   983,   972,   973,   974,
       0,     0,     0,     0,     0,     0,   975,     0,     0,     0,
       0,     0,     0,     0,     0,   984,     0,     0,   761,     0,
     972,   973,   974,     0,     0,   768,     0,     0,     0,   975,
       0,     0,     0,     0,     0,   991,     0,     0,     0,     0,
       0,   761,   766,     0,     0,     0,     0,     0,     0,     0,
       0,  1234,     0,     0,     0,   992,     0,   977,     0,   978,
     993,     0,   764,     0,   979,   980,   981,   994,     0,   137,
     982,     0,   765,   985,  1234,   769,     0,  1235,     0,     0,
     977,     0,   978,     0,     0,   764,     0,   979,   980,   981,
       0,     0,     0,   982,     0,   765,     0,     0,     0,     0,
    1235,     0,     0,     0,     0,     0,  1939,     0,     0,     0,
     983,     0,   767,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   986,   987,     0,     0,     0,   984,
       0,     0,     0,   983,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   984,     0,     0,     0,   766,     0,   768,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   991,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1034,   766,
       0,     0,     0,     0,     0,     0,     0,   985,   992,     0,
       0,     0,     0,   993,     0,     0,     0,     0,     0,     0,
     994,     0,   137,     0,     0,     0,     0,     0,   769,  -361,
     985,     0,  -361,     0,     0,  -361,  -361,  -361,  -361,  -361,
    -361,  -361,  -361,  -361,     0,     0,   767,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   986,   987,
       0,     0,  -361,     0,  -361,     0,     0,     0,     0,   767,
       0,  -361,     0,  -361,  -361,  -361,  -361,  -361,  -361,  -361,
       0,   986,   987,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   768,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   991,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   768,     0,  -361,     0,     0,
       0,     0,   992,     0,     0,   991,     0,   993,     0,     0,
       0,     0,     0,     0,   994,     0,   137,     0,     0,     0,
       0,     0,   769,     0,     0,   992,     0,     0,     0,     0,
     993,     0,     0,     0,     0,     0,     0,   994,  -361,   137,
       0,     0,     0,     0,     0,   769,     0,     0,     0,     0,
       0,     0,     0,   533,     0,     0,  -361,  -361,  -361,  -361,
    -361,     0,     0,  -361,  -361,     0,     0,  -361,     0,     0,
       0,     0,     0,  -361,     0,  -361,     0,     0,     0,     0,
       0,  -361,     0,     0,     0,     0,  -361,     0,     0,  -361,
       0,     0,     0,     0,     0,     0,     0,  -361,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -361,     0,     0,  -361,     0,     0,     0,     0,     0,  -361,
       0,  -361,     0,     0,     0,     0,     0,     0,     0,     0,
    -361,     0,     0,     0,     0,     0,     0,     0,     0,   532,
       0,     0,     0,  -361,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -361,     0,     0,     0,  -361,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -361,     0,     0,  -361,  -361,  -361,
    -361,  -361,  -361,  -361,  -361,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -361,  -361,     0,
       0,     0,     0,     0,     0,     0,  -361,     0,     0,  -361,
       0,     0,  -361,     0,  -361,  -361,  -361,  -361,  -361,  -361,
    -361,     0,     0,     0,  -361,     0,  -361,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -361,     0,     0,     0,     0,  -361,     0,
    -361,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -361,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -361,     0,  -361,
    -361,  -361,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -361,     0,     0,     0,   533,     0,     0,  -361,  -361,  -361,
    -361,  -361,     0,     0,  -361,  -361,     0,     0,     0,     0,
    -361,     0,     0,     0,     0,  -361,     0,     0,     0,     0,
    -361,     0,  -361,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -361,     0,     0,     0,     0,  -361,  -361,     0,
       0,  -361,  -361,  -361,     0,     0,     0,     0,     0,     0,
       0,  -361,   623,     0,  -361,  -361,     0,     0,     0,     0,
    -361,  -361,  -361,     0,     0,     0,     0,   624,   534,     0,
     625,   626,   627,   628,   629,   630,   631,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -361,     0,     0,     0,
       0,     0,     0,     0,     0,   632,     0,   633,   634,   635,
     636,   637,   638,   639,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -361,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -361,
       0,     0,     0,     0,     0,     0,     0,  -361,     0,     0,
    -361,   640,     0,     0,     0,     0,     0,     0,  1757,     0,
   -1876,     0,     0, -1876,     0,  -361, -1876,     0,     0,     0,
       0,     0,     0,     0, -1876,     0,     0,     0,  -361,     0,
       0,     0,     0,     0,     0,     0,  -361,     0,     0,     0,
       0,     0,     0, -1770,     0, -1770,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     641,   642,   643,   644,   645,     0,     0,   646,   647,     0,
   -1876,     0,     0,     0,     0,     0,     0,     0,  -361,     0,
    -361,  -361,  -361,     0,     0,     0,     0,     0,     0, -1876,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   648,     0,     0,     0,     0,     0,  -361,     0,     0,
       0,     0,     0,     0,    94,     0,     0,   649,     0,     0,
       0,     0,     0, -1852,     0,     0,  -361,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -361,     0,     0,     0,     0,     0,     0,
       0,     0,  -361,  -361,  -361,     0,     0,     0,     0,   650,
       0,     0,     0,     0,     0,     0,  -361,     0, -1876,     0,
       0,     0,     0,  -361,     0,  1758, -1876,     0,     0,   534,
       0,     0,     0,     0,     0,     0,     0,     0,   651,     0,
   -1876,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   652,     0,     0,     0,     0,     0,     0,     0,
     653,     0,     0,   654,     0,     0,     0,     0,     0,     0,
       0,     0, -1876,     0,     0,     0,     0,     0,   655,     0,
       0, -1770,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   656, -1876,     0, -1876,     0,     0,     0,     0,   657,
       0,  1759,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0, -1876, -1876,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   658,     0,   659,   660,   661,     0,     0, -1876,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0, -1770,     0,     0,     0,     0,     0,     0,     0,     0,
     662,     0,     0,     0,     0,     0,     0, -1876, -1876,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -358,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0, -1876,     0, -1852,     0,     0,     0,
       0, -1876,     0,     0,     0,   663,   664,   665,     0,     0,
       0,     0,     0,     0, -1876,     0,     0,     0, -1876,   666,
       0,     0,     0,     0,     0,     0,   667,     0,  1714,     0,
       0,  1715,     0, -1876,  1716,   625,   626,   627,   628,   629,
     630,  1717,  1718,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   -1876,  1719,     0,  1720,     0,     0,     0,     0,     0, -1876,
     632,     0,   633,   634,   635,   636,   637,   638,   639,     0,
       0,     0,     0,   625,   626,   627,   628,   629,   630,     0,
       0,     0,     0,     0,     0,     0,     0,     0, -1876,     0,
       0,     0,     0,     0,     0,     0,     0,     0, -1876,     0,
       0,     0,     0,     0, -1876,     0,   640,     0,   632,     0,
     633,   634,   635,   636,   637,   638,   639,     0,   244,     0,
       0,     0,     0,     0,     0,     0,     0,   970,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   971,     0,     0,  1721,     0,     0,
       0,     0,     0,     0,   640,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   641,   642,   643,   644,   645,
       0,     0,   646,   647,     0,     0,  1722,     0,     0,     0,
       0,     0,  1723,     0,  1724,     0,     0,     0,     0,     0,
   -1805,     0,     0,     0,     0,  1725,     0,     0,  1726,     0,
       0,     0,     0,     0,     0,     0,   648,     0,     0,     0,
       0,     0,     0,   641,   642,   643,   644,   645,     0,    94,
     646,   647,   649,     0,     0,     0,     0,     0,     0,     0,
    1727,     0,     0,     0,   970,     0,   972,   973,   974,  1728,
       0,     0,     0,     0,     0,   975,     0,     0,     0,     0,
       0,   971,  1729,     0,   648,     0,     0,   761,     0,     0,
       0,     0,     0,     0,   650,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     976,     0,     0,  1730,     0,     0,   977,     0,   978,     0,
       0,   764,     0,   979,   980,   981,  1731,   652,     0,   982,
       0,   765,   650,     0,     0,   653,     0,     0,   654,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   655,     0,  1732,     0,     0,     0,     0,
       0,     0,     0,   972,   973,   974,     0,     0,     0,   983,
       0,     0,   975,     0,     0,   652,     0,     0,     0,     0,
       0,     0,  1733,     0,   761,     0,   654,     0,   984,  1734,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   655,     0,     0,     0,     0,  1735,     0,     0,     0,
       0,     0,     0,     0,     0,   766,   658,   976,   659,   660,
     661,     0,     0,   977,     0,   978,     0,     0,   764,     0,
     979,   980,   981,     0,     0,     0,   982,   970,   765,     0,
       0,     0,     0,     0,     0,     0,   985,     0,     0,     0,
       0,     0,     0,   970,   971,     0,     0,     0,     0,  1736,
       0,     0,     0,     0,  -613,     0,   659,   660,   661,  1737,
     971,     0,     0,     0,     0,     0,   983,     0,     0,     0,
       0,     0,     0,     0,     0,   767,  1738,     0,     0,     0,
     663,   664,   665,     0,     0,   984,     0,   986,   987,     0,
       0,     0,     0,     0,   666,     0,     0,     0,     0,     0,
    1739,   667,     0,     0,     0,     0,     0,     0,     0,  1421,
       0,     0,   766,     0,     0,     0,     0,     0,     0,   988,
       0,   768,     0,   989,   990,     0,     0,     0,   663,   664,
     665,   991,     0,     0,     0,     0,   972,   973,   974,     0,
       0,     0,     0,   985,     0,   975,     0,     0,     0,     0,
       0,   992,   972,   973,   974,     0,   993,   761,     0,     0,
       0,   975,     0,   994,     0,   137,     0,     0,     0,     0,
       0,   769,     0,   761,     0,     0,   970,     0,     0,     0,
       0,     0,   767,     0,     0,     0,     0,     0,     0,     0,
     976,     0,     0,   971,   986,   987,   977,     0,   978,     0,
       0,   764,     0,   979,   980,   981,   976,     0,     0,   982,
       0,   765,   977,     0,   978,     0,  1439,   764,     0,   979,
     980,   981,     0,     0,     0,   982,   988,   765,   768,     0,
     989,   990,     0,     0,     0,     0,     0,     0,   991,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   983,
       0,     0,     0,     0,     0,     0,     0,     0,   992,     0,
       0,     0,     0,   993,     0,   983,     0,     0,   984,     0,
     994,     0,   137,     0,     0,     0,     0,     0,   769,     0,
       0,     0,     0,     0,   984,   972,   973,   974,     0,     0,
       0,     0,     0,     0,   975,   766,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   761,     0,     0,     0,
       0,   766,     0,   970,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   985,     0,     0,     0,
     971,     0,     0,     0,     0,     0,     0,     0,     0,   976,
       0,     0,   985,     0,     0,   977,     0,   978,     0,     0,
     764,     0,   979,   980,   981,     0,     0,     0,   982,     0,
     765,     0,     0,     0,     0,   767,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   986,   987,     0,
       0,   767,     0,     0,     0,  1956,     0,     0,     0,     0,
       0,     0,     0,   986,   987,     0,     0,     0,   983,     0,
       0,  1958,   970,     0,     0,     0,     0,     0,     0,   988,
       0,   768,     0,   989,   990,     0,     0,   984,     0,   971,
       0,   991,   972,   973,   974,   988,     0,   768,     0,   989,
     990,   975,     0,     0,     0,     0,     0,   991,     0,     0,
       0,   992,     0,   761,   766,     0,   993,     0,     0,     0,
       0,     0,     0,   994,     0,   137,     0,   992,     0,     0,
       0,   769,   993,     0,     0,     0,     0,     0,     0,   994,
       0,   137,     0,     0,     0,   985,   976,   769,     0,     0,
       0,     0,   977,     0,   978,     0,     0,   764,     0,   979,
     980,   981,     0,     0,     0,   982,     0,   765,     0,     0,
       0,     0,     0,     0,   970,     0,     0,     0,     0,     0,
       0,   972,   973,   974,   767,     0,     0,     0,     0,     0,
     975,   971,     0,     0,     0,     0,   986,   987,     0,     0,
       0,     0,   761,     0,     0,   983,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1968,     0,
       0,     0,     0,     0,   984,     0,     0,     0,   988,     0,
     768,     0,   989,   990,     0,   976,     0,     0,     0,     0,
     991,   977,     0,   978,     0,     0,   764,     0,   979,   980,
     981,   766,     0,     0,   982,     0,   765,     0,     0,     0,
     992,     0,     0,     0,     0,   993,     0,     0,     0,     0,
     970,     0,   994,     0,   137,     0,     0,     0,     0,     0,
     769,     0,   985,   972,   973,   974,     0,   971,     0,     0,
       0,     0,   975,     0,   983,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   761,     0,     0,     0,     0,     0,
       0,     0,     0,   984,     0,     0,     0,     0,     0,   970,
       0,   767,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   986,   987,     0,   971,   976,     0,     0,
     766,     0,     0,   977,     0,   978,     0,     0,   764,     0,
     979,   980,   981,     0,     0,     0,   982,     0,   765,     0,
       0,     0,     0,     0,     0,   988,     0,   768,     0,   989,
     990,   985,     0,     0,     0,     0,     0,   991,  1339,   972,
     973,   974,     0,     0,     0,     0,     0,     0,   975,     0,
       0,     0,     0,     0,     0,     0,   983,   992,     0,     0,
       0,     0,   993,     0,     0,     0,     0,     0,   970,   994,
     767,   137,     0,     0,     0,   984,     0,   769,     0,     0,
       0,     0,   986,   987,     0,   971,     0,     0,   972,   973,
     974,     0,     0,     0,     0,     0,     0,   975,     0,     0,
       0,     0,   766,     0,  1340,     0,   979,   980,   981,   761,
       0,     0,   982,     0,     0,     0,   768,     0,   989,     0,
       0,     0,     0,     0,     0,     0,   991,     0,     0,  2715,
       0,     0,     0,   985,     0,     0,     0,     0,     0,     0,
       0,     0,   976,     0,     0,     0,   992,     0,   977,     0,
     978,   993,   983,   764,     0,   979,   980,   981,   994,     0,
     137,   982,     0,   765,     0,     0,   769,     0,     0,     0,
       0,     0,   767,     0,     0,     0,  1339,   972,   973,   974,
       0,     0,     0,     0,   986,   987,   975,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   983,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   768,     0,
     984,     0,     0,     0,     0,     0,     0,     0,   991,   985,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1486,     0,   979,   980,   981,   766,   992,     0,
     982,     0,     0,   993,     0,     0,     0,     0,     0,     0,
     994,     0,   137,     0,     0,     0,     0,     0,   769,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   985,     0,
     986,   987,     0,     0,     0,     0,     0,     0,     0,     0,
     983,     0,     0, -1876,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   767,     0,     0,
       0,     0,     0,     0,   991,     0,     0,     0,     0,   986,
     987,     0,     0,     0,     0, -1146,     0,     0,     0,     0,
       0,     0,     0,     0,   992,     0,     0,     0,     0,   993,
       0,     0,     0, -1146,     0,     0,   994,   244,   137,     0,
       0,     0,     0,   768,     0,     0,     0,   985,     0,     0,
       0,     0,     0,   991,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   992,     0,     0,     0,     0,   993,     0,
       0,     0,     0,     0,     0,   994,     0,   137,     0,     0,
       0,     0,     0,   769,     0,     0,     0,     0,   986,   987,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0, -1876,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   991,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0, -1146,     0,     0,     0,     0,     0,     0,
       0,     0,   992,     0,     0,     0,     0,   993,     0,     0,
       0, -1146,     0,     0,   994,   244,   137
};

static const yytype_int16 yycheck[] =
{
     103,   394,   105,   396,   667,   601,   367,   853,   111,   544,
     116,   794,   725,   966,  1232,   656,  1213,   182,   359,   799,
     789,  1122,   103,   691,   105,  1598,  1456,  1456,  1588,  1456,
     111,  1149,   135,   426,   159,  1456,  1494,  1456,  1120,  1125,
      56,    57,    58,   436,   405,   210,  1264,  1542,    64,  1604,
    1375,  1765,  1998,  1116,   135,  1385,  1364,  1135,  1127,  2068,
    1475,     0,  1533,  1909,  1271,     9,  1135,  1979,     9,     9,
       0,  1149,   604,     1,   798,   704,     1,    22,    56,     1,
    1149,    49,   185,    99,   100,   753,   102,   856,  1934,  1811,
       9,   107,   108,    31,     9,   365,  1190,     6,    87,    58,
     116,    53,    31,    17,    27,    58,  1384,    93,    60,   176,
    1204,   798,  1527,  1835,   111,    48,    97,   133,   124,   142,
    1327,   762,   763,    33,    17,   130,  1519,   153,   130,   124,
    1519,   125,    58,   233,   166,   803,   257,    64,   238,  1933,
       1,  1701,  1467,    58,   203,   161,   252,   977,   978,    22,
      39,   226,    49,   160,   984,   257,    88,    49,  1259,   242,
     143,  1122,    26,   245,  1886,    21,   245,   203,   115,   362,
     235,   330,   813,  1380,   203,   126,   192,   162,  2504,   200,
    1595,   275,   310,   712,  1247,   422,   233,   310,   204,   257,
     296,   203,   243,   116,   219,   257,    88,   359,  1159,  2208,
     139,   257,   125,   411,   143,   370,   275,   257,   219,   139,
     162,   257,   415,   143,   108,   844,   789,    58,    31,   308,
    2471,  1943,    27,   126,  2673,   114,   160,    97,    98,   263,
     759,   411,   263,   175,   250,   798,  1305,   287,    21,  1147,
     460,   458,   258,  1658,   233,   460,   162,  1316,     0,   204,
     166,   471,   976,   342,   288,   188,   471,   288,   168,  1167,
    2709,   200,   368,   178,   988,   989,   990,   219,   220,   172,
     200,    71,   214,  1581,   363,   483,   245,   199,   233,    92,
     483,   331,   411,   856,   346,   331,  1010,   356,   233,   358,
    2541,   316,   177,  1853,   511,  1373,    73,   308,     6,   393,
     423,   463,   989,   483,  1373,   290,   257,   319,  1377,   838,
     257,   116,   505,   257,     6,  1888,    71,     6,   344,  1280,
     229,   273,    57,  1010,   345,    60,  2652,   242,   565,    64,
     111,   283,   196,   415,   303,   976,   415,   402,   389,  1669,
      62,   444,   177,   446,   447,   257,  1676,  1015,   364,   238,
     453,   510,   458,  2075,   483,  1663,   242,   291,   268,  2271,
     233,   295,   345,   291,  1859,   446,   447,   470,    90,    91,
     473,   474,   453,  1868,  1845,  2221,   392,  1848,   481,   482,
     483,   428,  1797,   511,   370,    71,   314,   403,   311,   470,
     511,  1115,   475,  1475,   362,   172,   412,   413,  2192,   415,
     416,   310,   272,    71,  1768,   421,   345,    71,    34,   511,
     469,   511,  1776,  1137,   275,   345,   124,   520,   454,  1143,
      49,  1251,   438,     9,   426,   988,   989,   990,  1115,   504,
     362,   510,   358,  1826,   375,   458,   468,  1826,   454,   520,
     469,   544,   545,   511,   511,  1527,  1532,  1010,    71,  1173,
    1174,  1175,   459,   458,    71,   511,    71,   443,  1182,  1183,
    1184,  1185,   154,   544,   545,   362,  1190,  1775,   338,  1137,
     362,  1195,  1196,  1197,  1198,  1199,  1200,  1201,  1202,   406,
    1204,  1205,   585,   489,   381,   511,     6,   176,  2400,  1021,
    1022,  1271,   598,   490,   489,  1182,  1183,  1184,  1823,   605,
     453,   604,   421,   519,   585,   213,   511,  1837,  1195,  1196,
    1234,   233,  1575,  1595,  1592,  1202,   510,   506,   407,   458,
      30,   213,   538,  1592,   213,   459,   504,  1805,   458,   798,
     511,   469,   393,  1257,   269,   318,   458,   505,   808,   472,
     469,     1,   558,  1606,   560,   651,     9,   563,   564,   257,
     566,  2273,  1115,   512,   657,    65,   449,    67,   467,   267,
     475,   458,   503,  1632,   511,   257,   511,   511,   257,   511,
    1878,   511,   511,   505,  1792,   267,  1658,   510,   267,   595,
     272,   511,   359,   511,   600,  1214,   511,   510,  1795,   475,
    2312,   607,  2314,  1234,   508,    58,  1690,   458,   517,   511,
    1380,   323,    62,   403,   460,  1750,     6,  1915,   505,   344,
    1173,  1174,  1175,   505,   233,   471,   510,   511,  1342,  1182,
    1183,  1184,  2177,  2345,   465,  2471,   511,   173,   580,   470,
      90,    91,  1195,  1196,  1197,  1198,  1199,  1200,  1201,  1202,
     160,   511,  1205,   351,    58,  2557,  2558,    32,   403,   253,
     666,   399,  2123,  2375,  2376,   455,   282,   283,   284,   351,
     612,   272,   351,   257,   263,   465,   401,   448,   774,  2678,
     470,   406,   453,   779,   126,  2148,   511,   460,   843,  2591,
     452,   784,   785,  2595,  2596,   253,   463,   419,   471,   288,
     796,   707,   332,   213,   710,  2059,  2010,   469,   801,    49,
     455,  2116,   288,  2118,   203,   189,   453,   257,   257,   257,
     458,   416,  2624,   421,   458,  1797,     6,   403,   257,   988,
     989,   990,   348,   272,  1504,   253,  1119,   459,  1121,   421,
    2676,  1800,   421,   362,   172,   403,   458,   257,   257,   403,
    1803,  1010,  2157,   253,   204,   453,   411,   267,   178,  2661,
     213,  1144,   381,  1146,    24,    25,   170,   504,  1151,   467,
     465,   458,    65,   273,    67,   470,   204,   263,   354,   455,
    1988,   332,  1165,   233,   323,   467,   511,  1501,   467,   242,
     403,   489,   263,  2137,   411,   384,   403,   455,   403,  2119,
     394,   455,   288,   286,   257,  2210,    66,   154,    68,   272,
      70,  2523,  2524,   511,   267,    85,  1884,   258,   238,   517,
     224,   241,    32,   213,  1501,  1884,  1885,    57,   483,   511,
       6,   510,   511,   333,    64,   517,   394,  1468,   517,   458,
    2138,   351,   455,   230,   104,   105,   106,  2332,   455,   458,
     455,   230,   453,   336,  1113,     1,  1115,   473,   474,  1118,
    2564,   397,   478,  1122,  1495,    11,   483,   257,  2212,   965,
    1640,  2334,  2335,   323,   123,  1589,   394,   267,  1137,  1262,
     510,   511,   257,  1974,  1143,     9,   505,  2022,  2023,   229,
    1273,  2026,   381,   367,   154,    57,   156,    57,   351,  2462,
    1614,   111,    64,   163,    64,  1164,   166,  1166,  2223,   263,
     352,   421,    38,    59,  1173,  1174,  1175,   139,  2216,   390,
      46,   510,   511,  1182,  1183,  1184,  1185,   511,  1021,  1022,
    1452,  1190,   345,   213,   288,  1031,  1195,  1196,  1197,  1198,
    1199,  1200,  1201,  1202,  1275,  1204,  1205,  2251,  1501,   459,
     171,    97,    28,    99,  1136,   101,  1614,   467,   158,   510,
     253,   351,     9,   109,   427,   407,   429,  1681,   421,  1683,
    2533,   511,   511,   511,  1233,   257,  1690,   257,   517,   517,
    1162,  1695,   511,   172,   213,   293,   130,   267,   375,   162,
     508,   491,  2336,   253,  2457,   255,   375,    26,  1257,   440,
    1259,   511,   511,    50,  1681,   226,  1683,   517,   458,  1723,
     510,     9,   272,   234,   467,   204,   399,   325,  1695,   165,
     310,   196,   475,  1116,   510,  1795,  1357,  1120,   257,  2574,
     203,   421,   232,   550,  1127,  1128,  1589,   213,   267,   269,
     333,  1699,  1135,     8,  2116,  1138,  2118,   257,  2124,   357,
    1143,   127,  1145,   457,  1147,  1148,  1149,  1150,   511,  1123,
     501,   465,   466,   453,   517,  1723,   470,   460,  1132,   351,
     511,   351,    37,   590,  1167,  1139,  1140,   467,  2286,  2511,
     257,   257,   257,  1342,   461,  2157,   212,  2637,   232,   213,
     196,   267,   458,   293,  1158,  2657,  2155,     8,   319,    30,
    2176,  2549,   619,     9,  2649,  1364,   356,   269,  1263,   269,
     392,   288,   258,  2675,   344,   508,   257,   290,   244,  2571,
    1706,   511,   351,  1506,  1537,   415,    37,   517,  1681,   458,
    1683,  1390,  2564,   257,   511,  1317,   416,   213,  2210,   421,
     266,   421,  1695,   267,  2564,  2564,   163,  2564,   292,   166,
    1359,   257,    58,  2564,  1247,  2564,  2247,   303,  1789,  2267,
    2268,  1316,   171,  2271,  1577,  2715,   213,   417,   418,    16,
     213,   401,   233,  1266,  1238,   351,   406,   108,  2741,  2729,
    2632,   257,   344,   294,   344,   296,    33,   467,   263,  1602,
     450,   267,   421,   483,   320,    42,   257,   128,   245,   246,
    1409,  2309,  2310,   271,   465,   281,   217,   188,   381,   470,
     257,  1393,  1305,   288,   257,   213,   488,   226,   763,  1283,
     267,  1980,   213,  1316,   267,   234,   237,   351,   458,  1384,
     211,   511,     8,  1297,   506,   517,   167,   517,   467,   401,
     500,   401,  1501,   458,   406,   421,   406,     0,   309,   395,
     311,   511,   263,   199,   217,   218,   130,   383,   189,   257,
       2,    37,   458,   331,  1328,     7,   257,  1360,   813,   267,
     762,   763,   178,   204,   237,   351,   267,   288,   207,   208,
    1373,   511,  1613,   157,  1377,   159,   361,  1918,   517,   107,
     511,   467,   438,   309,   221,   311,   458,   421,   458,   117,
     263,   762,   763,  2073,   351,   178,    35,   213,   351,    38,
     319,  1466,   458,   213,   511,   188,    45,    46,   247,   248,
    1413,   813,  1581,  1387,   188,   288,   253,   188,  1392,  1680,
    1589,  2422,  1138,   428,  1489,   511,   242,   510,   211,    13,
      14,   517,  1413,   467,  1150,   421,  1605,   211,   424,   425,
     211,   257,   813,   351,   480,  1614,   410,   257,    32,  1452,
     351,   267,  2549,    92,  1519,   511,  1625,   267,   241,    12,
     249,   250,    15,    16,   421,  2447,   457,  2449,   421,   325,
     326,   356,  1475,   358,  2268,   466,   139,   511,  2091,   356,
     143,   358,  1978,   517,  1653,   455,  2604,   465,   344,   356,
    2236,   358,   470,  1816,  1663,   465,   481,   559,  1821,   233,
     470,  1475,   564,   344,  1173,  1174,  1175,     1,  2076,   456,
     467,   399,  1681,   421,  1683,  2309,  2310,   410,   465,   356,
     421,  1690,   161,   470,  1527,   510,  1695,   364,  2069,  2650,
    2651,   517,  1597,  1856,  1450,   351,  1205,   200,   458,  1455,
    1456,   351,  1458,   399,  1518,   458,    40,    41,    42,    43,
      44,   190,  1526,  1527,  1723,   253,  1621,   255,  2679,   467,
     517,   455,   301,   302,   517,   455,   467,  1736,    58,  2137,
    1739,   465,  1575,   212,   458,   465,   470,  2698,  2202,   458,
     470,  1646,    76,    77,  1197,  1198,   507,   474,  1911,  1592,
    1564,    55,  1595,  1985,   481,   482,   219,  1890,   456,   118,
     119,   120,  1994,  1606,   174,   421,  1775,   465,  1633,   517,
     511,   421,   470,   511,  1221,  2202,   517,    69,  1225,  2740,
     458,  1595,  1791,   462,   458,   464,    90,   266,   253,  1632,
     255,    11,  1416,   458,   507,  1419,   458,   510,  1199,  1200,
    1201,  1425,   511,   107,  2212,  1429,    45,   492,   493,   494,
     495,   467,  1436,   117,  1660,  1658,   253,   467,   255,   475,
     511,   300,  1636,    66,   458,    68,    65,    66,    67,    68,
     988,   344,   990,  1647,  1183,  1184,  1650,   257,   341,    59,
     257,   320,   345,  1686,  1658,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   199,   511,  1761,  2020,  2381,   475,
    2383,   517,   511,   449,   405,  1686,   406,   517,   415,  1878,
    1879,   492,   493,   494,   495,    64,    60,    97,   257,    99,
     239,   101,   233,   458,  1730,   278,   279,   330,  1644,   109,
     492,   493,   494,   495,   253,   406,   257,   230,  1907,  2202,
      26,   511,    47,   458,   383,  1751,  1915,  2070,   458,   108,
     303,   304,   458,   314,  1757,   257,   257,   396,    63,   273,
      23,  1826,  1520,  1521,  1522,  1523,  2089,   461,  2336,   103,
     458,   189,  1682,  1942,  1684,   444,   415,  1687,  1688,  1689,
    1949,  1950,   123,  1693,   461,   165,  1696,  1697,  1704,  1705,
    1793,    17,  2227,    87,  1797,  2648,   458,  1800,   103,  1715,
    1803,   399,   511,  2126,   273,  1974,  1722,  2130,  2491,   356,
     406,   210,   407,    57,   510,  1984,   428,   263,   337,   338,
     339,   627,   628,   629,   630,  1890,    39,   458,   238,   407,
     511,  2223,  1835,   352,   333,   513,  1752,   236,   332,   511,
     318,   480,   424,  1759,   312,   399,  2169,   227,   262,   458,
       7,   458,   256,   347,   253,   399,   255,   458,   511,   510,
     125,   399,   371,    86,   458,  2158,   458,  2259,  2260,  2261,
    2262,  2263,   458,   437,    86,   458,  1941,  2269,   258,   399,
      22,  1884,  1885,  1886,   394,  1950,  1951,   286,   308,   508,
    2151,   458,   311,   399,   204,   511,  1812,   511,  1923,  1924,
    1925,  1926,  1927,  1928,  1929,  1930,   506,  2076,   307,   458,
     389,  2303,   233,   453,   123,   508,  2308,   255,   219,  2311,
     511,   511,    53,   303,   453,   444,   306,   469,   233,   517,
     329,   449,    26,   405,  2257,   240,   335,   308,   454,   415,
    1943,   353,   511,   196,   452,   469,   251,   381,  1922,     9,
     257,   449,    12,  2276,   458,    15,    16,   404,   458,  2128,
    2283,  2284,   340,   511,   115,   511,   469,   170,  2137,  2138,
    1973,   188,   469,   469,     4,   458,   511,  2146,   469,   257,
     469,   469,  1985,   469,   469,   469,    83,   469,   469,    19,
     224,  1994,  1973,   458,   374,   458,  2165,   453,   311,    29,
     408,  2007,   460,   100,   511,    30,   131,   196,   132,   453,
     133,   410,   134,   166,   391,   395,   511,   511,  2410,   511,
     419,   135,  2414,   136,   504,  2194,  2650,  2651,   137,   102,
     138,  2423,  2355,  2202,    64,  2358,  2359,   436,   469,  1955,
     420,   448,   422,  2212,   453,   141,    49,  2216,  2371,   409,
     452,   356,   357,   449,   452,  2679,   446,   144,   438,   458,
     196,  1977,  2385,  2386,   145,   147,   371,   146,   373,  2238,
     506,   272,  2075,    31,  2698,    49,   148,   196,  2247,   149,
     479,  1997,  2645,  1999,   150,    54,    55,  2003,   151,   113,
     152,   221,   455,  2158,   455,   192,   193,   194,   455,   498,
     455,  2664,  2167,  2599,   201,   455,   505,   506,   455,   455,
     455,   453,  2028,  2116,  2437,  2118,  2740,  2033,   115,   458,
      30,    90,  2291,   415,   314,    35,   110,   453,    38,   203,
     381,   511,  2048,  2629,   224,    45,    46,   343,   107,   257,
     273,   232,   296,   508,   508,   176,   129,   453,   117,   370,
     169,   229,  2155,   458,  2157,    65,   453,    67,  2481,   130,
     257,    49,   259,   260,   261,   229,   204,  2336,   265,   196,
     177,    57,   301,   458,   511,   204,   516,   238,   428,   515,
     301,   453,    92,   453,  2100,   277,   385,  2650,  2651,   367,
    2106,   221,  2166,   297,   203,   203,    17,  2113,   129,   140,
     505,   449,   370,    49,   453,   203,   142,  2210,   305,     8,
     196,   130,   508,   508,   428,   203,  2679,   458,   278,   279,
    2223,   453,     9,   253,  2227,     7,    57,   511,    47,   257,
    2204,  2205,   415,   263,  2150,  2698,     8,   203,   505,  2532,
     299,   505,    49,   303,   304,   189,  2227,   316,   292,   263,
     468,   161,   332,  2422,   114,   443,  2259,  2260,  2261,  2262,
    2263,  2267,  2268,   315,  2267,  2268,  2269,   416,  2271,   203,
    2439,   203,    49,   296,   103,   385,   798,  2740,   366,  2572,
     190,   366,   263,   238,   499,   382,   298,   317,    96,   293,
      49,   111,   322,   463,   341,   263,   263,   458,   263,   110,
    2303,   341,   212,  2309,  2310,  2308,  2309,  2310,  2311,  2312,
     211,  2314,   488,   458,  2483,   108,   222,   210,   344,   372,
     423,  2490,   508,   120,  2493,   196,   356,    49,   341,   308,
     315,   430,   323,     7,   364,    46,   433,   434,    92,  2342,
      26,   127,  2345,   253,  2318,   202,   148,   377,   207,  2265,
    2266,    75,   222,   178,   323,   239,   266,   523,   327,   328,
     150,  2342,   411,   273,   470,  1889,   287,   501,   426,  2538,
    1030,   752,   785,  2376,  1456,  2713,   406,  1882,  1411,   409,
     477,   803,  1674,  2552,  2692,  2725,  2661,   417,  2225,   856,
     300,  2105,  2248,  2396,  2105,  1039,  2121,   792,   428,  2248,
     497,  2039,   371,  1761,  1799,   502,  1487,  2410,  1280,  2119,
     320,  2414,   509,  1489,   511,  2396,  1247,  1826,   387,   388,
    2423,  1532,  1535,   333,  1848,  2123,  1578,  1301,   458,  2328,
    1585,   461,  1876,  1337,  2146,  1596,  2158,  1342,  2165,  2608,
    1902,  1951,  1626,  2179,  2447,  1373,  2449,  1931,  1371,  1387,
    2205,  1150,  1950,  1950,   976,  2379,  2709,  1673,  2374,  2471,
    1564,  2389,  2465,  2756,  2384,  2198,   988,   989,   990,  2198,
    2198,  1360,  2198,   383,  1483,   152,   300,  1918,   698,  1257,
    1723,  2650,  2651,   271,   757,   243,   396,  2582,  1010,   418,
    2628,   513,  2135,  2459,  2468,   216,   450,   716,  2667,  1881,
    1938,  2652,    -1,    -1,  1588,   415,   993,   562,    -1,    -1,
    2679,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2691,  2692,    -1,    -1,    -1,    -1,    -1,  2698,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2525,    -1,    -1,  2470,  2529,  2530,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2736,  2571,    -1,
     480,  2740,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   491,    -1,    -1,    -1,    -1,  2502,  2503,    -1,    -1,
      -1,    -1,    -1,  1115,    -1,  2601,    -1,    -1,  1120,    -1,
     510,    -1,    -1,    -1,    -1,  1127,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1135,    -1,  2531,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     9,     5,    -1,  1149,    -1,  2632,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,
    2556,    -1,    -1,    -1,    -1,  2561,  2562,    -1,    -1,    -1,
    2656,  1173,  1174,  1175,  2660,    -1,    -1,  2573,    -1,    -1,
    1182,  1183,  1184,  1185,    -1,    -1,    -1,    -1,  1190,    -1,
    2673,    51,    52,  1195,  1196,  1197,  1198,  1199,  1200,  1201,
    1202,    61,  1204,  1205,    -1,    -1,    -1,  2603,    -1,    -1,
    2606,  2607,    72,    -1,    -1,    75,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2709,    -1,    -1,    89,
      -1,    -1,  1234,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2733,  2647,   112,    -1,    -1,    -1,    -1,    -1,  2744,    -1,
     120,    -1,   122,    -1,  1266,    -1,    -1,    -1,    -1,   129,
      -1,   131,   132,   133,   134,   135,   136,   137,   138,    -1,
     140,   141,   142,    -1,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1305,   164,    -1,    -1,    -1,    -1,   169,
      -1,    -1,    -1,    -1,  1316,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,   194,
      -1,    -1,    -1,    -1,    -1,   195,   201,    -1,    -1,    -1,
      -1,    -1,   202,    -1,    -1,   205,   206,    -1,   213,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   216,    -1,    -1,    -1,
      -1,    -1,  1364,   223,    -1,   225,    -1,    -1,   228,    -1,
      -1,  1373,    -1,    -1,    -1,  1377,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   257,    -1,   259,   260,   261,    -1,    -1,    -1,
     265,    -1,   267,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     270,    -1,    -1,    -1,   274,    -1,   276,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   286,    -1,    -1,    -1,
      -1,    -1,   292,   293,   294,    -1,   296,   297,   298,   299,
     305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   313,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,   326,     5,    -1,    -1,
      -1,    -1,    10,  1475,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,   351,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   354,   355,    -1,    -1,    -1,  1501,
      -1,    -1,    -1,    -1,    -1,   365,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    52,    -1,    -1,   382,    -1,   379,
     380,    -1,    -1,    61,    -1,  1527,   386,    -1,    -1,    -1,
     390,    -1,    -1,    -1,    72,    -1,    -1,    75,   398,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   408,    -1,
      -1,    89,    -1,    -1,    -1,    -1,   421,   417,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   426,    -1,   433,   434,
      -1,   431,   432,    -1,   112,   435,    -1,   437,    -1,  1581,
      -1,    -1,   120,    -1,   122,   445,    -1,  1589,    -1,    -1,
    1592,    -1,    -1,  1595,    -1,    -1,    -1,    -1,   458,    -1,
      -1,    -1,   467,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   477,    -1,    -1,   153,   476,    -1,    -1,    -1,
      -1,    -1,   482,    -1,    -1,    -1,   164,   487,    -1,    -1,
    1632,   169,   497,    -1,    -1,    -1,    -1,   502,    -1,    -1,
      -1,    -1,    -1,    -1,   509,    -1,   511,    -1,   508,    -1,
      -1,    -1,   517,    -1,   514,    -1,  1658,   195,    -1,    -1,
      -1,  1663,    -1,    -1,   202,    -1,    -1,   205,   206,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   216,  1681,
      -1,  1683,    -1,    -1,    -1,   223,    -1,   225,  1690,    -1,
     228,    -1,    -1,  1695,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   270,    -1,    -1,    -1,   274,    -1,   276,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   286,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1775,    -1,   313,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,   326,     5,
      -1,  1793,    -1,    -1,    10,  1797,    -1,    -1,  1800,    -1,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   354,   355,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   365,    -1,    -1,
      -1,    -1,    -1,  1835,    -1,    51,    52,    -1,    -1,    -1,
      -1,   379,   380,    -1,    -1,    61,    -1,    -1,   386,    -1,
      -1,    -1,   390,    -1,    -1,    -1,    72,    -1,    -1,    75,
     398,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     408,    -1,    -1,    89,    -1,    -1,  1878,  1879,    -1,   417,
      -1,    -1,  1884,  1885,  1886,    -1,    -1,    -1,   426,    -1,
      -1,    -1,    -1,   431,   432,    -1,   112,   435,    -1,   437,
      -1,    -1,    -1,    -1,   120,    83,   122,   445,    -1,    -1,
      -1,    -1,    -1,  1915,    -1,    -1,    -1,    -1,    -1,    -1,
     458,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,   476,    -1,
      -1,  1943,    -1,    -1,   482,    -1,    -1,    -1,   164,   487,
      -1,    -1,    -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   514,    -1,    -1,   195,
      -1,    -1,    -1,    -1,    -1,    -1,   202,    -1,    -1,   205,
     206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     216,    -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,   225,
      -1,    -1,   228,    -1,   192,   193,   194,    -1,    -1,    -1,
      -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   213,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   270,    -1,    -1,     1,   274,     3,
     276,     5,    -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,
     286,    -1,    -1,  2075,    18,    -1,    -1,    -1,    -1,   257,
      -1,   259,   260,   261,    -1,    -1,    -1,   265,    -1,   267,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   313,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,
     326,    -1,    -1,    -1,  2116,    -1,  2118,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    72,    -1,
      -1,    75,    -1,    -1,    -1,    -1,  2138,    -1,   354,   355,
      -1,    -1,    -1,    -1,  2146,    89,    -1,    -1,    -1,   365,
      -1,    -1,    -1,  2155,    -1,  2157,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   379,   380,    -1,    -1,    -1,   112,    -1,
     386,    -1,    -1,   351,   390,    -1,   120,    -1,   122,    -1,
      -1,    -1,   398,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   408,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2202,   417,    -1,    -1,   382,    -1,    -1,    -1,  2210,   153,
     426,    -1,    -1,    -1,  2216,   431,   432,    -1,    -1,   435,
     164,   437,    -1,    -1,    -1,   169,    -1,    -1,    -1,   445,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   458,   421,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   195,    -1,    -1,    -1,   433,   434,    -1,   202,    -1,
     476,   205,   206,    -1,    -1,    -1,   482,    -1,    -1,    -1,
      -1,   487,   216,    -1,    -1,    -1,    -1,    -1,    -1,   223,
      -1,   225,    -1,    -1,   228,    -1,    -1,    -1,    -1,   467,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   514,   477,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2312,    -1,  2314,    -1,    -1,    -1,    -1,    -1,    -1,   497,
      -1,    -1,    -1,    -1,   502,    -1,   270,    -1,    -1,    -1,
     274,   509,   276,   511,    -1,    -1,    -1,    -1,    -1,   517,
      -1,    -1,   286,  2345,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   313,
      -1,    -1,    -1,    -1,  2376,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     354,   355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   365,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   379,   380,    -1,    -1,    -1,
      -1,    -1,   386,    -1,    -1,  2447,   390,  2449,     3,    -1,
       5,    -1,    -1,    -1,   398,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,   408,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   417,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   426,    -1,    -1,    -1,    -1,   431,   432,    -1,
      -1,   435,    -1,   437,    -1,    -1,    51,    52,    -1,    -1,
      -1,   445,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   476,    -1,    89,    -1,    -1,    -1,   482,    -1,
      -1,     6,    -1,   487,     9,    -1,    -1,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    20,    -1,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   120,    -1,   122,    -1,    -1,
     514,    -1,    -1,    -1,   129,    -1,   131,   132,   133,   134,
     135,   136,   137,   138,    -1,   140,   141,   142,    -1,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,
      -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
     195,    -1,    -1,    -1,    -1,    -1,    -1,   202,  2650,  2651,
     205,   206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   216,    -1,    -1,    -1,    -1,    32,    -1,   223,    35,
     225,    -1,    38,   228,    -1,    -1,    -1,  2679,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   160,  2698,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   270,    -1,    -1,    -1,   274,
      -1,   276,    -1,    -1,    -1,    -1,    92,   192,   193,   194,
      -1,   286,    -1,    -1,    -1,    -1,   201,    -1,  2740,    -1,
      -1,    -1,   207,   208,    -1,   111,    -1,    -1,   213,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   313,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,
      -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   246,   247,   248,    -1,    -1,    -1,   252,    -1,   254,
      -1,    -1,   257,    -1,   259,   260,   261,    -1,    -1,   354,
     265,    -1,   267,    -1,    -1,    -1,    -1,   272,    -1,    -1,
     365,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     285,    -1,    -1,    -1,   190,   380,   291,    -1,    -1,    -1,
     295,   386,   198,    -1,    -1,   390,    -1,    -1,   303,    -1,
     305,    -1,    -1,   398,    -1,   310,   212,    -1,    -1,    -1,
     315,    -1,    -1,   408,    -1,    -1,    -1,    -1,    -1,   324,
      -1,    -1,   417,    -1,    -1,    -1,    -1,     6,    -1,   334,
       9,   426,    -1,    12,    13,    14,   431,   432,   244,    -1,
     435,    20,   437,    -1,    -1,    -1,   351,    -1,    -1,    -1,
     445,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   264,    -1,
     266,    -1,    -1,   458,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   382,    -1,    -1,
      -1,   476,   288,   289,    -1,    -1,    -1,   482,    -1,    -1,
      -1,    -1,   487,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   320,    -1,   421,    -1,    -1,   514,
      -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,   433,   434,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   349,   350,    -1,    -1,    -1,    -1,    -1,
     455,    -1,   457,    -1,   459,    -1,    -1,   462,    -1,   464,
     465,   466,   467,    -1,   469,   470,     6,    -1,    -1,     9,
     376,    -1,   477,    -1,    -1,    -1,    -1,   383,    -1,    -1,
      -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     396,   170,   497,    -1,   400,    -1,    -1,   502,    -1,    -1,
      -1,    -1,    -1,    -1,   509,    -1,   511,    -1,    -1,   415,
      -1,    -1,   517,   192,   193,   194,    -1,    -1,    -1,    -1,
      -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,   208,
      -1,    -1,    -1,    -1,   213,    -1,   442,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,   451,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    -1,    -1,    -1,    -1,    -1,    -1,   246,   247,   248,
      -1,    -1,    -1,   252,   480,   254,    -1,    -1,   257,    -1,
     259,   260,   261,    -1,   490,    -1,   265,    -1,   267,    -1,
     496,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   285,    -1,     6,    -1,
      -1,     9,   291,   153,    -1,    -1,   295,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   303,    -1,   305,    -1,    -1,    -1,
      -1,   310,    30,    -1,    -1,    -1,   315,    35,    -1,    -1,
      38,    -1,    -1,    -1,    -1,   324,    -1,    45,    46,    -1,
      -1,    -1,   192,   193,   194,   334,    -1,     6,    -1,    -1,
       9,   201,    -1,    -1,    -1,    -1,    -1,    65,    -1,    67,
      -1,    -1,   351,   213,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,
      49,    -1,   100,   382,    -1,    -1,   246,    -1,    -1,    -1,
      -1,    -1,   252,    -1,   254,    -1,    -1,   257,    -1,   259,
     260,   261,    -1,    -1,    -1,   265,    -1,   267,    -1,    -1,
      -1,    -1,   272,    -1,    83,    -1,    -1,    -1,    -1,    88,
      -1,    -1,   421,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    -1,    -1,   433,   434,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   161,    -1,   305,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   455,    -1,   457,    -1,
     459,    -1,    -1,   462,   324,   464,   465,   466,   467,    -1,
     469,   470,   190,    -1,   192,   193,   194,    -1,   477,    -1,
      -1,    -1,     6,   201,    -1,     9,    -1,    -1,    -1,    -1,
      -1,   351,    -1,    -1,   212,   213,    -1,    -1,   497,    -1,
      -1,    -1,    -1,   502,    -1,    -1,    -1,    -1,    -1,    -1,
     509,    -1,   511,    -1,    -1,    -1,    -1,    -1,   517,    -1,
      -1,    -1,   382,   192,   193,   194,    -1,    -1,   246,    -1,
      -1,    -1,   201,    -1,   252,   253,   254,    -1,    -1,   257,
      -1,   259,   260,   261,   213,    -1,    -1,   265,   266,   267,
      -1,    -1,    -1,    -1,   272,   273,    -1,    -1,    -1,    83,
      -1,   421,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   433,   434,    -1,   100,   246,    -1,    -1,
      -1,    -1,   300,   252,    -1,   254,    -1,   305,   257,   113,
     259,   260,   261,    -1,    -1,    -1,   265,    -1,   267,    -1,
     460,    -1,   320,   272,    -1,    -1,   324,   467,    -1,    -1,
      -1,   471,    -1,    -1,    -1,   333,    -1,   477,    -1,    -1,
      -1,    -1,    -1,     6,    -1,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    -1,   351,    -1,    -1,   305,   497,    -1,    -1,
      -1,   310,   502,    -1,    -1,    -1,    -1,    -1,    -1,   509,
      -1,   511,    -1,    -1,    -1,   324,    -1,   517,    -1,    -1,
      -1,    -1,    -1,    -1,   382,   383,    -1,    -1,   192,   193,
     194,    -1,    -1,    -1,    -1,    -1,    -1,   201,   396,    -1,
      -1,    -1,   351,    -1,    -1,    -1,    -1,    -1,    -1,   213,
      -1,    -1,    -1,   362,    -1,    -1,    -1,   415,    -1,    -1,
      83,    -1,    -1,   421,    -1,   229,    -1,    -1,    -1,    -1,
      -1,    -1,    95,   382,    -1,   433,   434,   100,    -1,    -1,
      -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,   252,     6,
     254,    -1,     9,   257,    -1,   259,   260,   261,    -1,    -1,
      -1,   265,    -1,   267,    -1,    -1,   415,    -1,   272,   467,
      -1,    -1,   421,    -1,    -1,    -1,    -1,    -1,    -1,   477,
      -1,    -1,   480,    -1,   433,   434,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   491,    -1,    -1,    -1,    -1,    -1,   497,
      -1,   305,    -1,    -1,   502,    -1,    -1,    -1,    -1,    -1,
      -1,   509,   510,   511,    -1,    -1,    -1,    -1,   467,   517,
     324,    -1,    -1,    -1,    -1,    -1,    83,    -1,   477,   192,
     193,   194,    -1,    -1,   483,    -1,    -1,    -1,   201,    -1,
      -1,    -1,    -1,   100,    -1,    -1,    -1,   351,   497,    -1,
     213,    -1,    -1,   502,    -1,    -1,   505,    -1,    -1,    -1,
     509,    -1,   511,    -1,    -1,    -1,    -1,    -1,   517,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   382,    -1,
      -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,   252,
       6,   254,    -1,     9,   257,    -1,   259,   260,   261,    -1,
      -1,    -1,   265,    -1,   267,    -1,    -1,    -1,    -1,   272,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   421,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   433,
     434,    -1,    -1,    -1,    -1,   192,   193,   194,    -1,    -1,
      -1,    -1,   305,    -1,   201,     6,    -1,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   213,    -1,    -1,    -1,
      -1,   324,    -1,   467,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    -1,   477,    -1,    -1,    -1,    -1,    -1,    95,
      -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,   351,   246,
      -1,    -1,    -1,   497,    -1,   252,    -1,   254,   502,    -1,
     257,    -1,   259,   260,   261,   509,    -1,   511,   265,    -1,
     267,    -1,    -1,   517,    -1,   272,    -1,    -1,    -1,   382,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,
      -1,    -1,   113,   310,    -1,    -1,    -1,    -1,   421,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,    -1,
     433,   434,    -1,    -1,    -1,    -1,   192,   193,   194,    -1,
      -1,    -1,    -1,    -1,     6,   201,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    -1,   351,    -1,    -1,   213,    -1,    -1,
      -1,    -1,    -1,    -1,   467,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   477,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   382,    -1,    -1,    -1,    -1,
     246,   192,   193,   194,   497,    -1,   252,    -1,   254,   502,
     201,   257,    -1,   259,   260,   261,   509,    -1,   511,   265,
      -1,   267,   213,    -1,   517,    -1,   272,    -1,    -1,    -1,
      -1,    83,    -1,    -1,   421,    -1,    -1,    -1,    -1,    -1,
      -1,     6,    -1,    95,     9,    -1,   433,   434,   100,    -1,
      -1,    -1,    -1,    -1,    -1,   246,    -1,    -1,    -1,   305,
      -1,   252,    -1,   254,    -1,    -1,   257,    -1,   259,   260,
     261,    -1,    -1,    -1,   265,    -1,   267,    -1,   324,    -1,
     467,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     477,    -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    -1,   351,    -1,    -1,    -1,    -1,
     497,    -1,    -1,    -1,   305,   502,    -1,    -1,    83,    -1,
      -1,    -1,   509,    -1,   511,    -1,    -1,    -1,    -1,    -1,
     517,    -1,    -1,   324,    -1,   100,   382,    -1,    -1,    -1,
     192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,   201,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     351,   213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,   421,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   433,   434,    -1,
     100,   382,    -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,
     252,    -1,   254,    -1,    -1,   257,    -1,   259,   260,   261,
      -1,    -1,    -1,   265,    -1,   267,    -1,    -1,    -1,    -1,
     272,   467,    -1,    -1,    -1,    -1,    -1,   192,   193,   194,
     421,   477,    -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,
      -1,    -1,   433,   434,     6,    -1,    -1,     9,   213,    -1,
      -1,   497,    -1,   305,    -1,    -1,   502,    -1,    -1,    -1,
      -1,    -1,    -1,   509,    -1,   511,    -1,    -1,    -1,    -1,
      -1,   517,   324,    -1,    -1,    -1,   467,    -1,    -1,    -1,
      -1,   246,   192,   193,   194,    -1,   477,   252,    -1,   254,
      -1,   201,   257,    -1,   259,   260,   261,    -1,    -1,   351,
     265,    -1,   267,   213,    -1,    -1,   497,   272,    -1,    -1,
      -1,   502,    -1,    -1,    -1,    -1,    -1,    -1,   509,    -1,
     511,    83,    -1,    -1,    -1,    -1,   517,    -1,    -1,    -1,
     382,    -1,    -1,    -1,    -1,    -1,   246,    -1,   100,    -1,
     305,    -1,   252,    -1,   254,    -1,    -1,   257,    -1,   259,
     260,   261,    -1,    -1,    -1,   265,    -1,   267,    -1,   324,
      -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,   421,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,
       9,   433,   434,    -1,    -1,    -1,   351,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,
     310,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   324,   467,    -1,   382,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   477,    -1,    -1,    -1,    -1,
     192,   193,   194,    -1,   196,    -1,    -1,    -1,    -1,   201,
      -1,   351,    -1,    -1,    -1,   497,    -1,    -1,    -1,    -1,
     502,   213,    -1,    -1,    83,    -1,   421,   509,    -1,   511,
      -1,    -1,    -1,    -1,    -1,   517,    -1,    -1,   433,   434,
      -1,   100,   382,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   246,    -1,    -1,    -1,   453,    -1,
     252,     6,   254,    -1,     9,   257,    -1,   259,   260,   261,
      -1,    -1,   467,   265,    -1,   267,    -1,    -1,    -1,    -1,
     272,   421,   477,    -1,     6,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    -1,   433,   434,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   497,    -1,    -1,    -1,    -1,   502,    -1,    -1,
      -1,    -1,    -1,   305,   509,    -1,   511,    -1,    -1,    -1,
      -1,    -1,   517,    -1,    -1,    -1,    -1,   467,    -1,    -1,
      -1,    -1,   324,   192,   193,   194,    -1,   477,    83,    -1,
      -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   213,   100,    -1,   497,    -1,   351,
      -1,    83,   502,    -1,    -1,    -1,    -1,    -1,    -1,   509,
      -1,   511,    -1,    -1,    -1,    -1,    -1,   517,   100,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,    -1,    -1,
     382,    -1,    -1,   252,    -1,   254,    -1,    -1,   257,    -1,
     259,   260,   261,    -1,    -1,    -1,   265,    -1,   267,    -1,
      -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   421,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   433,   434,    -1,    -1,    -1,   305,   192,   193,   194,
      -1,    -1,    -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   324,    -1,    -1,   213,    -1,
     192,   193,   194,    -1,    -1,   467,    -1,    -1,    -1,   201,
      -1,    -1,    -1,    -1,    -1,   477,    -1,    -1,    -1,    -1,
      -1,   213,   351,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   246,    -1,    -1,    -1,   497,    -1,   252,    -1,   254,
     502,    -1,   257,    -1,   259,   260,   261,   509,    -1,   511,
     265,    -1,   267,   382,   246,   517,    -1,   272,    -1,    -1,
     252,    -1,   254,    -1,    -1,   257,    -1,   259,   260,   261,
      -1,    -1,    -1,   265,    -1,   267,    -1,    -1,    -1,    -1,
     272,    -1,    -1,    -1,    -1,    -1,   415,    -1,    -1,    -1,
     305,    -1,   421,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   433,   434,    -1,    -1,    -1,   324,
      -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   324,    -1,    -1,    -1,   351,    -1,   467,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   477,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,   351,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   382,   497,    -1,
      -1,    -1,    -1,   502,    -1,    -1,    -1,    -1,    -1,    -1,
     509,    -1,   511,    -1,    -1,    -1,    -1,    -1,   517,    32,
     382,    -1,    35,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    -1,   421,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   433,   434,
      -1,    -1,    65,    -1,    67,    -1,    -1,    -1,    -1,   421,
      -1,    74,    -1,    76,    77,    78,    79,    80,    81,    82,
      -1,   433,   434,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   467,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   477,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   467,    -1,   120,    -1,    -1,
      -1,    -1,   497,    -1,    -1,   477,    -1,   502,    -1,    -1,
      -1,    -1,    -1,    -1,   509,    -1,   511,    -1,    -1,    -1,
      -1,    -1,   517,    -1,    -1,   497,    -1,    -1,    -1,    -1,
     502,    -1,    -1,    -1,    -1,    -1,    -1,   509,   161,   511,
      -1,    -1,    -1,    -1,    -1,   517,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   176,    -1,    -1,   179,   180,   181,   182,
     183,    -1,    -1,   186,   187,    -1,    -1,   190,    -1,    -1,
      -1,    -1,    -1,   196,    -1,   198,    -1,    -1,    -1,    -1,
      -1,   204,    -1,    -1,    -1,    -1,   209,    -1,    -1,   212,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     233,    -1,    -1,   236,    -1,    -1,    -1,    -1,    -1,   242,
      -1,   244,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     253,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,    -1,    -1,   266,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   278,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    39,    40,    41,
      42,    43,    44,    45,   307,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,   321,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   329,    -1,    -1,   332,
      -1,    -1,    74,    -1,    76,    77,    78,    79,    80,    81,
      82,    -1,    -1,    -1,   347,    -1,   349,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   376,    -1,    -1,    -1,    -1,   120,    -1,
     383,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   400,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   410,    -1,   412,
     413,   414,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     172,    -1,    -1,    -1,   176,    -1,    -1,   179,   180,   181,
     182,   183,    -1,    -1,   186,   187,    -1,    -1,    -1,    -1,
     453,    -1,    -1,    -1,    -1,   458,    -1,    -1,    -1,    -1,
     463,    -1,   204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   475,    -1,    -1,    -1,    -1,   480,   220,    -1,
      -1,   484,   485,   486,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   233,    21,    -1,   236,   498,    -1,    -1,    -1,    -1,
     242,   504,   505,    -1,    -1,    -1,    -1,    36,   511,    -1,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   278,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    -1,    76,    77,    78,
      79,    80,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   307,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   321,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   329,    -1,    -1,
     332,   120,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      32,    -1,    -1,    35,    -1,   347,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,   360,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   368,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     179,   180,   181,   182,   183,    -1,    -1,   186,   187,    -1,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   410,    -1,
     412,   413,   414,    -1,    -1,    -1,    -1,    -1,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   220,    -1,    -1,    -1,    -1,    -1,   439,    -1,    -1,
      -1,    -1,    -1,    -1,   233,    -1,    -1,   236,    -1,    -1,
      -1,    -1,    -1,   242,    -1,    -1,   458,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   475,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   484,   485,   486,    -1,    -1,    -1,    -1,   278,
      -1,    -1,    -1,    -1,    -1,    -1,   498,    -1,   190,    -1,
      -1,    -1,    -1,   505,    -1,   197,   198,    -1,    -1,   511,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   307,    -1,
     212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   321,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     329,    -1,    -1,   332,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   244,    -1,    -1,    -1,    -1,    -1,   347,    -1,
      -1,   253,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   360,   264,    -1,   266,    -1,    -1,    -1,    -1,   368,
      -1,   273,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   288,   289,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   410,    -1,   412,   413,   414,    -1,    -1,   320,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   333,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     439,    -1,    -1,    -1,    -1,    -1,    -1,   349,   350,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   458,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   376,    -1,   475,    -1,    -1,    -1,
      -1,   383,    -1,    -1,    -1,   484,   485,   486,    -1,    -1,
      -1,    -1,    -1,    -1,   396,    -1,    -1,    -1,   400,   498,
      -1,    -1,    -1,    -1,    -1,    -1,   505,    -1,    32,    -1,
      -1,    35,    -1,   415,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     442,    65,    -1,    67,    -1,    -1,    -1,    -1,    -1,   451,
      74,    -1,    76,    77,    78,    79,    80,    81,    82,    -1,
      -1,    -1,    -1,    39,    40,    41,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   480,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   490,    -1,
      -1,    -1,    -1,    -1,   496,    -1,   120,    -1,    74,    -1,
      76,    77,    78,    79,    80,    81,    82,    -1,   510,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    -1,    -1,   161,    -1,    -1,
      -1,    -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   179,   180,   181,   182,   183,
      -1,    -1,   186,   187,    -1,    -1,   190,    -1,    -1,    -1,
      -1,    -1,   196,    -1,   198,    -1,    -1,    -1,    -1,    -1,
     204,    -1,    -1,    -1,    -1,   209,    -1,    -1,   212,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   220,    -1,    -1,    -1,
      -1,    -1,    -1,   179,   180,   181,   182,   183,    -1,   233,
     186,   187,   236,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     244,    -1,    -1,    -1,    83,    -1,   192,   193,   194,   253,
      -1,    -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,
      -1,   100,   266,    -1,   220,    -1,    -1,   213,    -1,    -1,
      -1,    -1,    -1,    -1,   278,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     246,    -1,    -1,   307,    -1,    -1,   252,    -1,   254,    -1,
      -1,   257,    -1,   259,   260,   261,   320,   321,    -1,   265,
      -1,   267,   278,    -1,    -1,   329,    -1,    -1,   332,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   347,    -1,   349,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   192,   193,   194,    -1,    -1,    -1,   305,
      -1,    -1,   201,    -1,    -1,   321,    -1,    -1,    -1,    -1,
      -1,    -1,   376,    -1,   213,    -1,   332,    -1,   324,   383,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   347,    -1,    -1,    -1,    -1,   400,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   351,   410,   246,   412,   413,
     414,    -1,    -1,   252,    -1,   254,    -1,    -1,   257,    -1,
     259,   260,   261,    -1,    -1,    -1,   265,    83,   267,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   382,    -1,    -1,    -1,
      -1,    -1,    -1,    83,   100,    -1,    -1,    -1,    -1,   453,
      -1,    -1,    -1,    -1,   458,    -1,   412,   413,   414,   463,
     100,    -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   421,   480,    -1,    -1,    -1,
     484,   485,   486,    -1,    -1,   324,    -1,   433,   434,    -1,
      -1,    -1,    -1,    -1,   498,    -1,    -1,    -1,    -1,    -1,
     504,   505,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   455,
      -1,    -1,   351,    -1,    -1,    -1,    -1,    -1,    -1,   465,
      -1,   467,    -1,   469,   470,    -1,    -1,    -1,   484,   485,
     486,   477,    -1,    -1,    -1,    -1,   192,   193,   194,    -1,
      -1,    -1,    -1,   382,    -1,   201,    -1,    -1,    -1,    -1,
      -1,   497,   192,   193,   194,    -1,   502,   213,    -1,    -1,
      -1,   201,    -1,   509,    -1,   511,    -1,    -1,    -1,    -1,
      -1,   517,    -1,   213,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,   421,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     246,    -1,    -1,   100,   433,   434,   252,    -1,   254,    -1,
      -1,   257,    -1,   259,   260,   261,   246,    -1,    -1,   265,
      -1,   267,   252,    -1,   254,    -1,   455,   257,    -1,   259,
     260,   261,    -1,    -1,    -1,   265,   465,   267,   467,    -1,
     469,   470,    -1,    -1,    -1,    -1,    -1,    -1,   477,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   497,    -1,
      -1,    -1,    -1,   502,    -1,   305,    -1,    -1,   324,    -1,
     509,    -1,   511,    -1,    -1,    -1,    -1,    -1,   517,    -1,
      -1,    -1,    -1,    -1,   324,   192,   193,   194,    -1,    -1,
      -1,    -1,    -1,    -1,   201,   351,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   213,    -1,    -1,    -1,
      -1,   351,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   382,    -1,    -1,    -1,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,
      -1,    -1,   382,    -1,    -1,   252,    -1,   254,    -1,    -1,
     257,    -1,   259,   260,   261,    -1,    -1,    -1,   265,    -1,
     267,    -1,    -1,    -1,    -1,   421,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   433,   434,    -1,
      -1,   421,    -1,    -1,    -1,   441,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   433,   434,    -1,    -1,    -1,   305,    -1,
      -1,   441,    83,    -1,    -1,    -1,    -1,    -1,    -1,   465,
      -1,   467,    -1,   469,   470,    -1,    -1,   324,    -1,   100,
      -1,   477,   192,   193,   194,   465,    -1,   467,    -1,   469,
     470,   201,    -1,    -1,    -1,    -1,    -1,   477,    -1,    -1,
      -1,   497,    -1,   213,   351,    -1,   502,    -1,    -1,    -1,
      -1,    -1,    -1,   509,    -1,   511,    -1,   497,    -1,    -1,
      -1,   517,   502,    -1,    -1,    -1,    -1,    -1,    -1,   509,
      -1,   511,    -1,    -1,    -1,   382,   246,   517,    -1,    -1,
      -1,    -1,   252,    -1,   254,    -1,    -1,   257,    -1,   259,
     260,   261,    -1,    -1,    -1,   265,    -1,   267,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,   192,   193,   194,   421,    -1,    -1,    -1,    -1,    -1,
     201,   100,    -1,    -1,    -1,    -1,   433,   434,    -1,    -1,
      -1,    -1,   213,    -1,    -1,   305,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   455,    -1,
      -1,    -1,    -1,    -1,   324,    -1,    -1,    -1,   465,    -1,
     467,    -1,   469,   470,    -1,   246,    -1,    -1,    -1,    -1,
     477,   252,    -1,   254,    -1,    -1,   257,    -1,   259,   260,
     261,   351,    -1,    -1,   265,    -1,   267,    -1,    -1,    -1,
     497,    -1,    -1,    -1,    -1,   502,    -1,    -1,    -1,    -1,
      83,    -1,   509,    -1,   511,    -1,    -1,    -1,    -1,    -1,
     517,    -1,   382,   192,   193,   194,    -1,   100,    -1,    -1,
      -1,    -1,   201,    -1,   305,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   213,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   324,    -1,    -1,    -1,    -1,    -1,    83,
      -1,   421,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   433,   434,    -1,   100,   246,    -1,    -1,
     351,    -1,    -1,   252,    -1,   254,    -1,    -1,   257,    -1,
     259,   260,   261,    -1,    -1,    -1,   265,    -1,   267,    -1,
      -1,    -1,    -1,    -1,    -1,   465,    -1,   467,    -1,   469,
     470,   382,    -1,    -1,    -1,    -1,    -1,   477,   191,   192,
     193,   194,    -1,    -1,    -1,    -1,    -1,    -1,   201,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   305,   497,    -1,    -1,
      -1,    -1,   502,    -1,    -1,    -1,    -1,    -1,    83,   509,
     421,   511,    -1,    -1,    -1,   324,    -1,   517,    -1,    -1,
      -1,    -1,   433,   434,    -1,   100,    -1,    -1,   192,   193,
     194,    -1,    -1,    -1,    -1,    -1,    -1,   201,    -1,    -1,
      -1,    -1,   351,    -1,   257,    -1,   259,   260,   261,   213,
      -1,    -1,   265,    -1,    -1,    -1,   467,    -1,   469,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   477,    -1,    -1,   378,
      -1,    -1,    -1,   382,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   246,    -1,    -1,    -1,   497,    -1,   252,    -1,
     254,   502,   305,   257,    -1,   259,   260,   261,   509,    -1,
     511,   265,    -1,   267,    -1,    -1,   517,    -1,    -1,    -1,
      -1,    -1,   421,    -1,    -1,    -1,   191,   192,   193,   194,
      -1,    -1,    -1,    -1,   433,   434,   201,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   467,    -1,
     324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   477,   382,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   257,    -1,   259,   260,   261,   351,   497,    -1,
     265,    -1,    -1,   502,    -1,    -1,    -1,    -1,    -1,    -1,
     509,    -1,   511,    -1,    -1,    -1,    -1,    -1,   517,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   382,    -1,
     433,   434,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     305,    -1,    -1,   446,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   421,    -1,    -1,
      -1,    -1,    -1,    -1,   477,    -1,    -1,    -1,    -1,   433,
     434,    -1,    -1,    -1,    -1,   488,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   497,    -1,    -1,    -1,    -1,   502,
      -1,    -1,    -1,   506,    -1,    -1,   509,   510,   511,    -1,
      -1,    -1,    -1,   467,    -1,    -1,    -1,   382,    -1,    -1,
      -1,    -1,    -1,   477,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   497,    -1,    -1,    -1,    -1,   502,    -1,
      -1,    -1,    -1,    -1,    -1,   509,    -1,   511,    -1,    -1,
      -1,    -1,    -1,   517,    -1,    -1,    -1,    -1,   433,   434,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   446,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   477,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   488,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   497,    -1,    -1,    -1,    -1,   502,    -1,    -1,
      -1,   506,    -1,    -1,   509,   510,   511
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   520,   521,     0,   200,   345,   522,   523,   524,   525,
     526,   527,   529,   539,   541,   458,   458,   524,   154,   535,
     547,   535,   535,   257,   346,   542,   542,   123,    85,   548,
     528,   530,   539,   139,   533,   534,    26,   543,   543,   458,
     399,   549,   143,   528,   531,   532,   535,   542,   257,   458,
     540,   458,    11,    59,    97,    99,   101,   109,   165,   227,
     258,   303,   306,   374,   395,   420,   422,   438,   511,   550,
     551,   555,   566,   574,   575,   576,   577,   578,   584,   593,
     595,   600,   603,   604,   606,   607,   608,   609,   610,   611,
     612,   542,   530,   458,   233,   544,  1289,   511,  1205,  1205,
     428,   410,  1307,  1289,  1289,  1289,   399,  1205,   410,   458,
     458,  1289,   458,   458,    58,  1276,   579,     1,   458,   577,
     219,   594,   174,   613,   458,   532,   458,    73,   172,   359,
     463,   545,   546,   585,  1289,  1289,  1289,   511,  1200,  1232,
      69,  1200,   458,  1289,  1289,   556,   567,  1200,   552,   511,
     596,   597,   598,  1206,   257,   309,   311,   580,   582,   583,
    1048,  1235,  1289,   458,   511,   458,   615,   546,   344,  1304,
    1289,   213,   257,   267,   351,   421,   467,   517,   601,   602,
    1238,  1200,   257,   219,   308,  1326,   257,   475,    57,    64,
     269,   344,   401,   406,   511,   557,   558,   559,   560,   561,
     562,   563,   565,  1275,  1336,   199,   568,   569,   570,   553,
     565,   597,    22,   233,  1206,  1290,  1048,   233,   428,  1301,
    1289,    97,  1205,   235,   402,   614,   616,    28,   127,   213,
     257,   267,   281,   351,   421,   424,   425,   517,   586,   587,
     588,   591,   602,   449,   510,   605,  1320,  1232,   405,   406,
     415,    64,  1289,   458,   559,   458,   511,   558,    60,  1289,
       9,   375,   503,   571,   573,     1,   458,   570,   554,  1320,
     257,   599,  1236,  1301,   233,  1205,  1205,   581,   582,   458,
       1,   291,   314,  1261,   275,   393,   649,   650,   651,   652,
     654,   588,    17,   449,  1238,   330,  1289,   406,  1235,   458,
    1289,   511,  1201,   230,    26,   572,   230,   375,   458,   458,
     108,  1236,  1205,   458,   314,  1205,   655,   356,   417,   418,
     653,   536,     1,   458,   651,   589,   591,   257,  1235,   258,
     440,   501,   564,  1201,   257,   273,   617,   461,  1280,    23,
    1270,   103,   659,   458,   590,   591,    58,   512,  1330,   618,
     444,  1313,   189,  1282,   123,   461,   660,    17,     4,    19,
      29,    64,   221,   253,   317,   322,   356,   364,   377,   406,
     409,   417,   458,   461,   619,   620,   627,   629,   631,   632,
     633,   634,   635,   638,   639,   640,   641,   642,   644,   645,
     647,  1305,  1321,    87,  1277,   511,  1190,  1191,   458,   399,
     661,   591,   273,  1296,   356,  1305,   453,   504,  1317,   406,
     407,  1289,  1275,   114,   238,  1291,  1291,   288,   646,  1235,
    1320,   428,   263,    39,  1273,  1289,   656,   657,  1191,  1191,
     458,   173,   397,   537,   662,   663,   665,  1289,  1291,   126,
     172,   624,   364,   639,  1289,  1289,  1289,  1289,  1270,     9,
     288,   354,   648,  1289,  1296,   407,   511,   657,   333,   658,
     513,   690,   692,   693,     1,  1191,   126,   352,   407,   628,
    1289,   118,   119,   120,   239,   253,   337,   338,   339,   352,
     444,   621,   622,   623,   257,  1200,  1204,   424,   643,  1200,
    1200,   318,  1302,  1302,   312,  1200,  1289,  1235,   399,   262,
     746,   694,   695,   697,   707,  1253,   458,   664,   643,   257,
     626,  1232,   626,     7,   626,   626,   257,   625,  1232,   419,
     459,    33,   168,   268,   636,   458,   399,   256,   748,   458,
     695,   458,     1,   176,   511,   698,   699,   511,   666,   125,
     510,  1255,  1335,  1280,  1289,  1199,  1200,   510,   637,   637,
     691,   458,   399,   371,   750,   458,   458,   696,    86,    47,
      63,   103,   240,   251,   356,   357,   371,   373,   458,   505,
     667,   668,   670,   674,   675,   678,   679,   685,   686,   687,
     688,  1289,   125,   437,   630,  1199,  1200,   263,   390,   692,
     747,   458,   399,   394,   795,   709,   700,  1289,  1277,  1289,
     356,   358,  1331,  1331,  1289,  1277,  1289,  1296,  1289,    22,
    1269,   308,   689,  1205,   172,   204,   508,   311,   692,   749,
     458,   399,   538,    21,    36,    39,    40,    41,    42,    43,
      44,    45,    74,    76,    77,    78,    79,    80,    81,    82,
     120,   179,   180,   181,   182,   183,   186,   187,   220,   236,
     278,   307,   321,   329,   332,   347,   360,   368,   410,   412,
     413,   414,   439,   484,   485,   486,   498,   505,   710,   711,
     712,   714,   715,   716,   717,   718,   719,   720,   723,   735,
     736,   737,   738,   739,   744,   745,  1289,  1309,    26,   196,
     708,  1271,   204,  1235,   511,  1289,  1269,   511,  1202,  1203,
     310,   423,  1327,  1204,  1235,   506,  1289,   175,   214,   511,
     676,  1205,     9,   421,   517,   592,   275,   356,   358,  1329,
     692,   751,   458,   341,   811,   814,   245,   303,   411,   483,
    1308,   483,  1308,   483,  1308,   483,  1308,   483,  1308,   508,
    1318,   389,  1306,   126,  1235,  1229,  1232,  1232,   233,   243,
     389,  1292,  1289,  1290,   172,   204,   242,   475,   511,     9,
      50,   213,   245,   246,   257,   267,   351,   421,   467,   517,
     701,  1239,  1240,  1241,   453,   673,  1203,   255,  1295,   453,
    1276,   219,  1284,   511,  1289,  1289,  1241,  1329,   752,   796,
     123,   837,   838,   517,    53,   727,   453,   724,   469,  1233,
    1234,   449,   717,   741,   742,  1239,    26,   713,   405,  1265,
    1265,  1241,   308,  1299,     1,    40,    41,    42,    43,    44,
     179,   180,   181,   182,   183,   184,   185,   332,   347,   702,
     703,   704,   705,   706,   718,   719,  1229,   702,   454,  1235,
      58,   358,   669,   680,  1235,   415,  1310,   257,   677,  1232,
     677,   353,   753,   697,   707,   797,   798,   799,    56,   504,
     815,     1,     3,     5,    10,    18,    51,    52,    61,    72,
      75,    89,   112,   120,   122,   153,   164,   169,   195,   202,
     205,   206,   216,   223,   225,   228,   270,   274,   276,   286,
     313,   326,   354,   355,   365,   379,   380,   386,   390,   398,
     408,   417,   426,   431,   432,   435,   437,   445,   458,   476,
     482,   487,   514,   839,   840,   856,   861,   865,   870,   885,
     888,   892,   896,   897,   898,   903,   917,   921,   924,   938,
     942,   945,   948,   952,   953,   957,   967,   970,   987,   989,
     992,   996,  1002,  1014,  1022,  1023,  1026,  1027,  1031,  1036,
    1037,  1045,  1060,  1070,  1079,  1084,  1091,  1095,  1097,  1100,
    1103,  1107,  1134,   839,  1284,   196,   725,  1235,   452,  1315,
      83,   100,   192,   193,   194,   201,   246,   252,   254,   259,
     260,   261,   265,   305,   324,   382,   433,   434,   465,   469,
     470,   477,   497,   502,   509,  1178,  1180,  1181,  1182,  1183,
    1184,  1185,  1214,  1228,  1229,  1240,  1242,  1243,  1244,  1245,
     469,  1234,  1232,   740,   742,   449,   257,  1275,   702,   458,
    1241,    48,   472,   681,   682,   683,   684,  1320,  1276,   196,
     672,  1283,   511,  1192,     1,   698,   799,   458,   817,   816,
     381,   823,     3,     5,    10,    18,    51,    52,    61,    72,
      75,    89,   112,   120,   122,   129,   131,   132,   133,   134,
     135,   136,   137,   138,   140,   141,   142,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   164,   169,   195,
     202,   205,   206,   216,   223,   225,   228,   270,   274,   276,
     286,   313,   326,   354,   365,   380,   386,   390,   398,   408,
     417,   426,   431,   432,   435,   437,   445,   458,   476,   482,
     487,   514,  1266,   841,   857,   862,   866,   871,   886,   889,
     893,   899,   904,   918,   922,   925,   939,   943,   946,   949,
     203,   381,   880,   941,   954,   958,   968,   971,   988,   990,
     993,   404,   997,  1003,  1015,  1024,  1028,  1032,  1038,  1046,
    1061,  1071,   257,   351,   392,   421,   517,  1083,  1085,  1092,
     340,  1096,  1098,   826,  1101,  1104,  1108,  1135,   511,  1235,
     724,   115,   726,   469,   469,   469,  1247,  1229,  1240,  1242,
    1326,  1326,   469,   469,   469,   469,  1326,  1184,  1180,  1184,
     469,  1247,    71,   403,   455,  1179,   456,   465,   470,   457,
     466,   170,   469,  1246,   469,   469,  1180,   508,   743,  1319,
    1239,  1204,  1204,   188,   673,  1235,   754,   458,   800,   458,
      49,   818,   819,   820,  1274,   818,   511,   458,   310,   842,
     844,  1228,     6,    95,   246,   272,   858,  1185,  1210,  1211,
    1228,  1239,  1242,   863,  1180,  1228,   257,   867,   868,  1196,
    1197,  1198,  1232,   272,   427,   429,   872,   873,   257,   887,
    1219,  1228,   890,  1191,     6,   894,  1186,  1187,  1208,  1230,
    1231,  1232,  1240,   461,   900,  1191,   257,   310,   905,   906,
     907,   908,   910,  1210,  1219,  1228,   919,  1211,   257,   923,
     460,   471,   926,   927,   928,  1168,  1169,  1170,   199,   325,
     326,   344,   399,   940,   944,  1207,  1208,   947,  1232,   453,
     950,  1316,  1211,  1167,  1168,   959,  1207,   969,  1192,   972,
     973,  1228,  1239,  1242,  1062,  1226,  1227,  1232,    95,   991,
    1211,   994,  1211,   171,   226,   234,   319,   998,   999,   191,
     257,  1004,  1008,  1009,  1010,  1196,  1220,  1228,  1232,  1242,
    1320,  1016,  1191,  1025,  1188,  1232,  1029,  1191,  1033,  1188,
       9,  1039,  1189,  1232,   154,   272,  1047,  1050,  1051,  1054,
    1055,  1056,  1057,  1058,  1059,  1193,  1194,  1207,  1225,  1227,
    1232,  1062,  1072,  1191,  1080,   113,  1086,  1087,  1088,  1211,
      95,  1093,  1210,  1099,  1192,   458,   511,   827,   828,   831,
     832,   837,  1102,  1228,  1105,  1191,  1109,  1228,  1136,  1188,
     224,   728,   311,  1300,   729,   730,  1178,  1180,  1251,  1178,
    1252,   455,  1178,   511,   511,  1180,  1250,  1250,  1250,  1213,
    1228,  1240,  1242,  1249,   511,   455,  1213,  1248,  1180,   455,
    1180,  1181,  1181,  1182,  1182,  1182,  1180,  1213,  1178,   408,
     460,    30,  1272,  1276,     1,   755,   801,   819,   415,   483,
     821,   362,   505,   812,   131,   855,   843,   196,  1299,  1228,
    1229,  1240,  1242,   132,   860,   453,   859,  1211,    58,   224,
    1256,   868,   453,  1326,   133,   884,   257,  1220,  1219,  1191,
     361,   481,   891,  1320,  1332,  1299,   134,   895,   160,   459,
    1187,  1324,   391,  1262,  1233,  1234,   901,  1191,   135,   902,
    1305,   136,   916,   166,  1147,  1148,   908,  1209,  1210,   909,
     492,   493,   494,   495,   137,   920,    49,   229,   504,   874,
     138,   937,    17,   508,   929,   930,   931,   933,    12,    13,
      14,    20,   160,   170,   207,   208,   247,   248,   285,   291,
     295,   303,   310,   315,   334,   455,   457,   459,   462,   464,
     465,   466,   469,   470,  1171,  1172,  1173,  1174,  1175,  1176,
    1177,  1211,   102,   941,  1208,  1195,   448,  1314,   960,  1320,
    1192,    93,   370,   443,   974,   975,   977,   978,  1064,   469,
    1233,  1211,   453,   141,   995,    49,   999,   409,  1000,  1009,
     142,   458,  1005,  1007,   488,   506,   449,   452,   446,   144,
    1021,   286,   336,  1259,   196,  1137,   145,  1030,  1305,   146,
    1035,  1137,  1189,   147,  1044,   506,  1040,  1217,  1228,  1240,
    1057,  1059,  1207,   453,  1194,   124,   453,   489,  1049,    31,
    1233,   148,  1078,   178,   238,   241,  1074,   880,  1081,  1320,
    1274,   149,  1090,   229,  1088,  1228,   150,  1094,   196,  1192,
     399,   458,   458,   196,   356,   358,  1106,   151,  1118,   113,
    1110,   152,  1141,  1137,   729,  1200,   221,   732,    27,   116,
     731,  1179,   455,  1179,   455,   455,  1179,   455,   455,   455,
    1179,   455,  1179,   455,   455,   456,   455,   455,   453,  1289,
    1204,   115,   671,   458,    62,    90,    91,   323,   458,   756,
     757,   760,  1289,  1344,    32,    35,    38,    45,    46,    65,
      67,   161,   190,   196,   198,   209,   212,   244,   253,   266,
     307,   320,   349,   376,   383,   400,   453,   463,   480,   504,
     715,   716,   720,   735,   737,   739,   802,   809,   810,  1289,
    1322,  1289,   415,   314,   822,   110,   824,    30,   197,   273,
     845,   846,   847,   849,   852,  1272,  1320,    24,    25,    66,
      68,    70,   104,   105,   106,   154,   156,   163,   166,   253,
     255,   450,   500,   511,   848,  1194,  1323,   153,   344,  1215,
    1229,   453,     6,  1186,  1211,  1232,  1240,   203,   224,  1257,
     381,   864,   343,   869,  1198,   874,   891,   263,   288,  1282,
    1229,  1180,   273,  1263,  1234,  1191,   232,  1163,  1164,   834,
     835,   296,  1149,   491,   849,   852,   911,   912,   913,  1320,
    1147,  1147,  1147,  1147,  1211,  1186,  1211,   875,   928,    21,
     460,   471,   934,   935,  1169,   508,   931,   932,   508,   834,
    1316,   233,  1172,   115,   951,  1196,   129,   834,   955,     9,
      12,    15,    16,   278,   279,   303,   304,   961,   965,   176,
    1217,     9,    58,   178,   242,   475,   981,   982,   983,   976,
     977,  1066,  1300,  1335,   453,  1207,  1186,  1211,  1000,  1320,
    1190,   834,   169,  1011,  1167,  1012,  1013,  1228,  1196,     8,
      37,  1139,  1305,  1224,  1228,  1239,  1242,   229,  1017,  1034,
    1320,   130,  1041,  1228,  1041,   453,   453,  1048,   153,   460,
     471,  1211,    49,    38,    46,   212,   244,   266,   320,   383,
     480,  1052,  1053,  1289,  1073,  1320,  1211,   162,   290,   415,
    1211,  1228,   196,  1186,  1211,   833,  1235,  1217,  1274,   229,
    1113,  1138,  1139,   732,  1274,  1291,   441,  1246,   441,  1246,
    1200,  1246,  1246,  1246,  1213,   242,   475,  1246,   455,  1180,
    1246,  1246,  1239,  1300,  1289,  1289,  1269,   249,   250,  1294,
     769,   204,   177,   758,  1281,  1289,   253,   394,   130,   157,
     159,   803,   804,  1279,  1289,  1224,   301,  1297,  1235,    57,
    1228,  1228,   204,  1297,    32,   111,  1235,  1289,   511,   458,
     813,   517,  1221,  1225,  1235,  1289,   163,   166,  1142,  1143,
    1144,   847,   253,   333,   850,   851,  1322,    32,    35,    38,
      46,    92,   111,   190,   198,   212,   244,   264,   266,   288,
     289,   320,   349,   350,   376,   383,   396,   400,   415,   442,
     451,   480,   490,   496,   853,   854,  1142,   516,   515,  1217,
    1142,   238,   428,   301,   277,   257,  1216,  1229,  1228,  1299,
     416,  1150,  1151,  1233,  1234,  1186,   453,  1258,   864,  1208,
     453,  1196,   879,   880,   385,   367,  1150,  1289,   834,   297,
    1165,   836,   834,    97,    98,   338,   511,   914,  1194,   912,
      35,    38,    45,    46,    92,   161,   190,   212,   266,   300,
     320,   383,   396,   415,   480,   915,   203,  1150,   203,   876,
     877,   878,  1274,    17,   449,   936,   318,   934,  1300,   834,
     129,   140,   956,  1316,   370,   962,  1316,   453,    49,   982,
     984,  1217,     9,    58,   242,   475,   979,   980,  1217,  1067,
    1321,   731,   219,   316,  1285,  1207,  1150,   203,  1190,   648,
     384,  1001,  1320,   142,  1006,     8,   196,  1017,  1228,   130,
    1156,  1158,  1163,   263,   288,   834,   508,   508,  1042,  1043,
    1217,  1216,  1211,  1048,  1048,  1048,  1048,  1048,  1048,  1048,
    1048,  1053,   291,   295,  1075,  1076,  1077,  1173,  1260,  1163,
     245,   415,  1334,   428,  1312,  1312,  1089,  1320,  1228,  1150,
     203,   458,   453,     9,  1111,  1112,  1254,  1114,  1228,  1089,
    1114,  1034,     7,  1267,   511,   733,   734,  1289,   455,  1200,
    1219,  1289,  1269,   257,   761,  1237,   697,   770,   759,  1228,
    1221,  1299,   253,   394,  1221,  1289,  1315,  1289,  1289,    32,
    1235,   825,   826,    47,   294,   296,  1145,  1146,   834,  1297,
    1297,  1297,  1289,  1289,   854,    57,   415,   124,   489,  1289,
       8,  1268,  1142,  1262,  1229,   834,   299,  1152,  1234,  1150,
    1218,  1228,  1239,   166,   468,   882,     6,   229,   310,   467,
     881,  1288,    34,   282,   283,   284,   348,   473,   474,   478,
    1264,   834,   837,  1289,   253,   394,   803,   804,  1289,   124,
     489,  1289,  1186,  1187,  1186,  1187,   877,   310,   821,    88,
     362,   505,   935,  1168,   834,  1228,   834,   505,   963,   964,
     965,   966,  1314,   505,  1218,  1217,    49,   985,   980,   189,
     985,  1063,  1289,  1291,   316,  1186,  1001,   263,   288,  1013,
    1211,   218,  1018,  1320,   834,   292,  1159,   263,  1168,  1167,
    1042,  1173,  1228,  1174,  1175,  1176,  1177,  1180,  1082,  1211,
    1082,   468,  1153,  1154,   332,  1262,  1186,   829,  1218,   315,
    1217,   114,  1115,   443,  1117,   158,   293,  1140,  1160,  1161,
    1162,  1163,   323,  1194,  1221,   734,  1199,   762,   253,   255,
    1328,   511,   698,  1228,   271,   331,   465,   470,   805,   806,
     807,  1219,   805,   806,   808,   826,   834,  1221,  1221,  1221,
    1221,  1221,  1289,  1289,  1166,  1223,  1225,  1235,  1166,  1221,
    1222,  1225,  1237,  1150,   834,   834,   834,   296,   883,  1299,
    1228,  1221,  1221,  1166,  1166,  1221,  1150,   366,  1150,   366,
    1211,   964,   103,  1278,  1316,   985,   985,  1218,     8,    37,
     986,   226,   504,  1068,  1200,  1065,  1150,   385,    49,   263,
     238,  1019,   217,   237,   263,   288,   507,   834,   834,   834,
     834,   298,  1155,  1289,  1150,  1150,   499,   830,  1119,  1112,
    1284,    96,  1116,  1284,  1153,   834,   834,  1162,   253,   255,
    1293,   178,   188,   211,   241,   763,   764,   765,   766,   767,
     768,  1237,   771,  1221,  1221,   130,  1219,  1221,   253,   255,
    1333,   834,  1228,  1187,  1187,    49,   111,   985,   463,  1287,
    1287,   341,  1190,   203,   319,  1069,  1232,  1211,  1289,  1020,
    1157,  1158,  1159,  1163,   263,   263,   263,   834,  1228,  1120,
     458,  1228,  1284,  1228,   107,   117,  1337,  1289,  1289,    55,
      90,  1337,  1338,  1323,   772,   110,  1150,  1150,  1211,  1211,
    1211,  1289,  1190,   341,   488,  1228,  1159,   128,   167,   204,
    1121,  1122,  1123,  1125,  1129,  1131,  1132,  1133,  1272,  1282,
    1228,  1289,  1237,  1237,   211,  1289,  1289,   210,   253,   255,
     286,   307,   335,   419,   436,   458,   479,   498,   506,   715,
     720,   721,   735,   737,   739,   773,   774,   778,   779,   782,
     783,   784,   785,   786,   787,   792,   793,   794,  1322,  1323,
     458,  1008,  1289,  1167,    37,  1268,   344,   108,  1237,  1237,
    1237,   222,  1286,   301,   302,  1298,  1269,   210,  1235,   508,
    1289,  1299,  1289,  1289,  1228,   287,   331,   788,   789,  1237,
     331,   790,   791,  1237,  1298,  1269,  1008,   372,   423,  1311,
     130,   426,  1130,  1300,  1290,  1289,   724,  1167,  1214,  1212,
    1214,    54,    90,   323,   327,   328,   371,   387,   388,   775,
    1337,  1338,  1339,  1340,  1341,  1342,  1343,   120,   196,  1235,
     789,  1235,   791,  1290,  1228,   162,   166,  1325,     9,  1126,
    1127,  1197,   789,  1315,  1262,   378,   780,  1214,   188,   188,
     211,   188,   211,   177,   776,  1228,   776,  1214,   341,  1303,
     308,   342,   363,  1128,  1127,   726,  1300,   315,   777,   777,
      49,  1300,   308,  1232,   430,   722,   177,   781,  1228,   323,
    1214,   171,   226,   234,   319,  1124,  1190,  1235
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   519,   521,   520,   522,   522,   523,   523,   524,   524,
     526,   525,   527,   528,   529,   530,   530,   530,   531,   531,
     532,   533,   533,   534,   536,   537,   538,   535,   540,   539,
     541,   542,   542,   543,   543,   544,   544,   545,   545,   545,
     545,   546,   546,   547,   547,   548,   548,   549,   549,   550,
     550,   550,   550,   550,   552,   551,   553,   553,   554,   554,
     556,   555,   557,   557,   557,   557,   558,   558,   559,   559,
     559,   559,   560,   561,   562,   563,   564,   564,   564,   564,
     565,   565,   567,   566,   568,   568,   568,   569,   569,   570,
     570,   570,   571,   571,   572,   572,   573,   573,   574,   575,
     575,   576,   576,   577,   577,   577,   577,   577,   577,   577,
     577,   577,   577,   577,   577,   579,   578,   580,   580,   580,
     580,   581,   581,   582,   583,   583,   585,   584,   586,   586,
     586,   586,   586,   586,   587,   587,   588,   588,   589,   588,
     590,   590,   591,   591,   591,   591,   591,   591,   592,   592,
     593,   594,   594,   595,   596,   596,   597,   598,   598,   599,
     599,   600,   601,   601,   602,   602,   603,   604,   605,   605,
     606,   607,   608,   609,   610,   611,   612,   612,   613,   613,
     614,   614,   615,   615,   617,   616,   616,   618,   618,   619,
     619,   619,   619,   619,   619,   619,   619,   619,   619,   619,
     619,   619,   620,   620,   620,   620,   620,   621,   621,   621,
     622,   622,   622,   622,   623,   623,   624,   624,   624,   625,
     625,   626,   626,   626,   627,   628,   628,   628,   629,   630,
     630,   630,   631,   632,   633,   633,   633,   635,   634,   636,
     636,   636,   637,   637,   637,   637,   638,   638,   639,   639,
     639,   639,   640,   641,   642,   643,   643,   643,   644,   645,
     646,   646,   647,   648,   648,   648,   649,   649,   649,   650,
     650,   651,   651,   652,   653,   653,   653,   653,   655,   654,
     656,   656,   657,   658,   658,   659,   659,   660,   660,   661,
     661,   662,   664,   663,   663,   665,   665,   666,   666,   667,
     667,   667,   667,   667,   667,   667,   667,   667,   667,   667,
     668,   669,   669,   669,   670,   670,   670,   671,   671,   672,
     672,   673,   673,   674,   675,   675,   676,   676,   677,   677,
     678,   679,   680,   680,   681,   681,   681,   682,   683,   684,
     685,   686,   687,   688,   688,   689,   689,   690,   691,   690,
     692,   693,   692,   694,   694,   694,   695,   696,   695,   695,
     697,   698,   698,   698,   699,   700,   700,   701,   701,   701,
     701,   702,   702,   702,   702,   702,   702,   702,   702,   702,
     702,   702,   702,   702,   703,   703,   704,   704,   705,   705,
     705,   706,   706,   707,   708,   708,   709,   709,   710,   710,
     710,   710,   710,   710,   710,   710,   710,   710,   710,   710,
     710,   710,   711,   712,   713,   713,   714,   715,   716,   716,
     717,   717,   717,   717,   717,   717,   717,   717,   717,   717,
     717,   717,   717,   717,   717,   717,   717,   717,   717,   717,
     717,   717,   717,   717,   717,   717,   717,   717,   717,   717,
     717,   717,   717,   717,   717,   717,   718,   718,   719,   719,
     720,   720,   721,   722,   722,   723,   723,   724,   724,   725,
     725,   726,   726,   727,   727,   728,   728,   729,   730,   730,
     731,   731,   732,   732,   733,   733,   734,   735,   736,   737,
     738,   740,   739,   741,   741,   742,   742,   743,   743,   744,
     744,   745,   745,   746,   747,   746,   748,   749,   748,   750,
     751,   750,   752,   752,   754,   753,   755,   755,   755,   756,
     756,   756,   756,   757,   758,   759,   759,   760,   761,   761,
     761,   762,   762,   763,   763,   763,   763,   763,   764,   765,
     766,   767,   768,   769,   769,   771,   770,   772,   772,   773,
     773,   773,   773,   773,   773,   773,   773,   773,   773,   773,
     773,   773,   773,   773,   773,   774,   775,   775,   775,   775,
     775,   775,   775,   776,   776,   776,   777,   777,   778,   779,
     780,   780,   781,   781,   782,   783,   784,   785,   785,   786,
     787,   787,   788,   788,   789,   789,   789,   790,   790,   791,
     791,   792,   793,   794,   795,   796,   795,   797,   797,   798,
     798,   799,   800,   799,   799,   801,   801,   802,   802,   802,
     802,   802,   802,   802,   802,   802,   802,   802,   802,   802,
     802,   802,   802,   802,   802,   802,   802,   802,   802,   802,
     802,   802,   802,   802,   802,   802,   802,   802,   802,   802,
     802,   802,   803,   803,   804,   804,   805,   805,   806,   806,
     807,   807,   807,   808,   808,   808,   809,   810,   811,   812,
     813,   811,   814,   811,   815,   816,   815,   817,   815,   818,
     818,   819,   820,   820,   820,   821,   821,   821,   821,   821,
     821,   822,   822,   823,   823,   824,   825,   824,   826,   826,
     827,   827,   827,   827,   827,   829,   828,   830,   830,   831,
     832,   833,   833,   835,   836,   834,   838,   837,   837,   839,
     839,   839,   839,   839,   839,   839,   839,   839,   839,   839,
     839,   839,   839,   839,   839,   839,   839,   839,   839,   839,
     839,   839,   839,   839,   839,   839,   839,   839,   839,   839,
     839,   839,   839,   839,   839,   839,   839,   839,   839,   839,
     839,   839,   839,   839,   839,   839,   839,   839,   839,   839,
     841,   840,   843,   842,   842,   842,   842,   842,   842,   842,
     842,   842,   842,   842,   842,   842,   842,   842,   842,   842,
     842,   842,   844,   844,   845,   845,   846,   846,   847,   847,
     847,   847,   848,   848,   849,   849,   849,   850,   851,   851,
     852,   853,   853,   853,   853,   853,   853,   853,   853,   853,
     853,   853,   853,   853,   853,   853,   853,   853,   853,   853,
     853,   853,   853,   853,   853,   853,   853,   853,   853,   854,
     854,   855,   855,   857,   856,   858,   858,   858,   859,   859,
     860,   860,   862,   861,   863,   863,   864,   864,   866,   865,
     867,   867,   868,   869,   869,   871,   870,   872,   873,   873,
     873,   873,   874,   875,   874,   876,   876,   877,   877,   878,
     878,   878,   878,   879,   879,   879,   879,   880,   880,   881,
     881,   882,   882,   882,   883,   883,   884,   884,   886,   885,
     887,   887,   889,   888,   890,   890,   891,   891,   891,   891,
     891,   893,   892,   894,   895,   895,   896,   897,   899,   898,
     900,   900,   901,   901,   902,   902,   904,   903,   905,   905,
     905,   905,   905,   906,   906,   907,   907,   909,   908,   910,
     910,   911,   911,   912,   912,   912,   912,   912,   913,   913,
     913,   913,   914,   914,   915,   915,   915,   915,   915,   915,
     915,   915,   915,   915,   915,   915,   915,   915,   915,   915,
     915,   916,   916,   918,   917,   919,   919,   919,   919,   919,
     920,   920,   922,   921,   923,   925,   924,   926,   927,   927,
     928,   928,   928,   929,   929,   930,   930,   931,   932,   933,
     933,   934,   934,   935,   935,   935,   935,   936,   936,   937,
     937,   939,   938,   940,   940,   940,   940,   940,   940,   940,
     941,   941,   943,   942,   944,   946,   945,   947,   949,   948,
     950,   951,   951,   952,   954,   953,   955,   955,   955,   956,
     956,   958,   957,   959,   960,   960,   961,   961,   961,   962,
     962,   963,   963,   964,   965,   965,   965,   965,   965,   965,
     965,   966,   966,   968,   967,   969,   969,   971,   970,   972,
     973,   973,   973,   974,   974,   974,   974,   976,   975,   977,
     978,   979,   979,   980,   980,   980,   980,   980,   980,   981,
     981,   982,   982,   983,   983,   983,   983,   983,   984,   985,
     985,   986,   986,   988,   987,   990,   989,   991,   991,   993,
     992,   994,   994,   995,   995,   997,   996,   998,   998,   999,
     999,   999,   999,  1000,  1000,  1001,  1001,  1001,  1001,  1003,
    1002,  1004,  1005,  1004,  1004,  1006,  1006,  1007,  1007,  1008,
    1008,  1009,  1009,  1009,  1009,  1009,  1010,  1010,  1011,  1011,
    1012,  1012,  1013,  1015,  1014,  1016,  1017,  1017,  1018,  1018,
    1018,  1018,  1018,  1018,  1018,  1019,  1019,  1020,  1020,  1021,
    1021,  1022,  1024,  1023,  1025,  1026,  1028,  1027,  1029,  1030,
    1030,  1032,  1031,  1033,  1034,  1034,  1034,  1035,  1035,  1036,
    1038,  1037,  1039,  1039,  1040,  1040,  1041,  1041,  1042,  1042,
    1043,  1044,  1044,  1046,  1045,  1047,  1047,  1047,  1047,  1047,
    1047,  1048,  1048,  1049,  1049,  1050,  1051,  1052,  1052,  1053,
    1053,  1053,  1053,  1053,  1053,  1053,  1053,  1054,  1054,  1055,
    1056,  1056,  1057,  1058,  1058,  1059,  1059,  1061,  1060,  1063,
    1062,  1064,  1064,  1065,  1065,  1066,  1066,  1067,  1067,  1068,
    1068,  1068,  1069,  1069,  1069,  1071,  1070,  1072,  1073,  1073,
    1074,  1074,  1074,  1074,  1075,  1075,  1075,  1075,  1075,  1075,
    1076,  1077,  1077,  1078,  1078,  1080,  1079,  1079,  1081,  1081,
    1081,  1081,  1082,  1082,  1083,  1083,  1083,  1083,  1085,  1084,
    1086,  1087,  1087,  1088,  1088,  1088,  1089,  1089,  1090,  1090,
    1092,  1091,  1093,  1093,  1093,  1094,  1094,  1095,  1096,  1096,
    1098,  1097,  1099,  1099,  1101,  1100,  1102,  1104,  1103,  1105,
    1106,  1106,  1106,  1108,  1107,  1109,  1110,  1110,  1111,  1111,
    1112,  1113,  1113,  1114,  1115,  1115,  1116,  1116,  1117,  1117,
    1118,  1118,  1120,  1119,  1121,  1121,  1121,  1121,  1121,  1122,
    1123,  1123,  1124,  1124,  1124,  1124,  1124,  1125,  1126,  1126,
    1127,  1127,  1127,  1128,  1128,  1128,  1128,  1129,  1130,  1130,
    1131,  1132,  1133,  1133,  1135,  1134,  1136,  1137,  1137,  1138,
    1138,  1138,  1138,  1139,  1139,  1140,  1140,  1141,  1141,  1142,
    1143,  1143,  1144,  1144,  1145,  1145,  1146,  1146,  1147,  1148,
    1148,  1149,  1149,  1150,  1151,  1151,  1152,  1152,  1153,  1154,
    1154,  1155,  1155,  1156,  1156,  1157,  1157,  1157,  1158,  1159,
    1160,  1160,  1160,  1161,  1162,  1163,  1164,  1164,  1165,  1165,
    1166,  1166,  1167,  1168,  1170,  1169,  1171,  1171,  1171,  1172,
    1172,  1172,  1172,  1172,  1172,  1172,  1172,  1172,  1172,  1172,
    1172,  1172,  1172,  1172,  1172,  1172,  1172,  1172,  1172,  1172,
    1172,  1172,  1172,  1173,  1173,  1174,  1174,  1175,  1175,  1176,
    1177,  1178,  1178,  1179,  1179,  1179,  1180,  1180,  1180,  1181,
    1181,  1181,  1182,  1182,  1183,  1183,  1183,  1184,  1184,  1185,
    1185,  1185,  1185,  1185,  1185,  1186,  1186,  1187,  1188,  1189,
    1190,  1190,  1191,  1192,  1193,  1193,  1194,  1195,  1195,  1196,
    1197,  1197,  1197,  1198,  1199,  1199,  1200,  1201,  1202,  1202,
    1203,  1204,  1204,  1205,  1206,  1207,  1207,  1208,  1208,  1208,
    1209,  1209,  1210,  1210,  1211,  1211,  1211,  1211,  1211,  1211,
    1211,  1211,  1211,  1211,  1212,  1212,  1213,  1213,  1213,  1214,
    1214,  1214,  1214,  1214,  1214,  1214,  1215,  1215,  1216,  1216,
    1217,  1217,  1218,  1218,  1219,  1219,  1220,  1220,  1220,  1221,
    1221,  1221,  1222,  1222,  1223,  1223,  1224,  1224,  1224,  1225,
    1226,  1227,  1227,  1228,  1229,  1229,  1229,  1229,  1230,  1231,
    1231,  1231,  1231,  1232,  1232,  1233,  1234,  1234,  1235,  1236,
    1237,  1238,  1238,  1238,  1238,  1238,  1238,  1238,  1239,  1239,
    1240,  1240,  1241,  1241,  1241,  1241,  1241,  1241,  1241,  1242,
    1242,  1242,  1242,  1242,  1242,  1242,  1242,  1242,  1242,  1242,
    1242,  1243,  1243,  1244,  1244,  1244,  1245,  1245,  1245,  1245,
    1246,  1246,  1246,  1247,  1247,  1247,  1248,  1248,  1248,  1249,
    1249,  1250,  1250,  1251,  1251,  1252,  1252,  1253,  1254,  1254,
    1255,  1255,  1256,  1256,  1257,  1257,  1258,  1258,  1259,  1259,
    1259,  1260,  1260,  1261,  1261,  1261,  1262,  1262,  1263,  1263,
    1264,  1264,  1264,  1264,  1264,  1264,  1264,  1264,  1265,  1265,
    1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,
    1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,
    1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,
    1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,
    1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,
    1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,
    1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,
    1267,  1267,  1268,  1268,  1269,  1269,  1270,  1270,  1271,  1271,
    1272,  1272,  1273,  1273,  1274,  1274,  1275,  1275,  1276,  1276,
    1277,  1277,  1278,  1278,  1279,  1279,  1280,  1280,  1281,  1281,
    1282,  1282,  1283,  1283,  1284,  1284,  1285,  1285,  1285,  1286,
    1286,  1287,  1287,  1288,  1288,  1289,  1289,  1290,  1290,  1290,
    1291,  1291,  1292,  1292,  1292,  1293,  1293,  1293,  1294,  1294,
    1294,  1295,  1295,  1296,  1296,  1297,  1297,  1298,  1298,  1298,
    1299,  1299,  1300,  1300,  1301,  1301,  1301,  1301,  1302,  1302,
    1303,  1303,  1304,  1304,  1305,  1305,  1306,  1306,  1307,  1307,
    1308,  1308,  1309,  1309,  1309,  1310,  1310,  1311,  1311,  1312,
    1312,  1313,  1313,  1314,  1314,  1315,  1315,  1316,  1316,  1317,
    1317,  1317,  1318,  1318,  1319,  1319,  1320,  1320,  1321,  1321,
    1322,  1322,  1323,  1323,  1324,  1324,  1325,  1325,  1326,  1326,
    1327,  1327,  1328,  1328,  1329,  1329,  1330,  1330,  1331,  1331,
    1332,  1332,  1333,  1333,  1334,  1334,  1335,  1335,  1336,  1336,
    1336,  1337,  1337,  1338,  1338,  1339,  1339,  1340,  1340,  1341,
    1341,  1342,  1342,  1343,  1343,  1344,  1344
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
       1,     1,     1,     1,     0,     3,     0,     1,     1,     1,
       1,     0,     1,     1,     4,     1,     1,     1,     7,     0,
       4,     3,     3,     4,     0,     1,     1,     0,     5,     2,
       2,     1,     0,     4,     5,     2,     3,     1,     1,     3,
       1,     2,     4,     4,     4,     1,     3,     4,     4,     3,
       1,     1,     3,     2,     2,     2,     0,     2,     3,     1,
       2,     1,     1,     5,     0,     1,     1,     1,     0,     6,
       1,     2,     2,     0,     2,     0,     3,     0,     3,     0,
       2,     2,     0,     5,     3,     1,     1,     0,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     0,     1,     1,     4,     6,     9,     0,     3,     0,
       2,     0,     2,     3,     5,     5,     1,     1,     1,     1,
       3,     5,     0,     2,     1,     1,     1,     4,     2,     2,
       4,     3,     2,     2,     2,     1,     2,     0,     0,     5,
       0,     0,     2,     2,     3,     2,     1,     0,     4,     3,
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
       3,     0,     1,     0,     2,     0,     0,     7,     0,     2,
       1,     1,     2,     1,     1,     0,     6,     0,     2,     2,
       1,     0,     1,     0,     0,     3,     0,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       0,     4,     0,     4,     3,     3,     4,     3,     4,     3,
       3,     4,     4,     3,     4,     3,     4,     5,     3,     4,
       3,     3,     1,     1,     0,     1,     1,     2,     1,     1,
       1,     2,     1,     2,     2,     2,     2,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     1,     1,     1,     4,     3,
       1,     2,     1,     1,     3,     3,     3,     3,     3,     1,
       1,     0,     1,     0,     4,     4,     5,     6,     0,     2,
       0,     1,     0,     3,     3,     4,     0,     2,     0,     3,
       1,     2,     4,     0,     2,     0,     4,     6,     0,     1,
       1,     1,     0,     0,     3,     1,     2,     2,     3,     0,
       2,     2,     2,     0,     3,     2,     4,     1,     1,     1,
       1,     0,     2,     2,     0,     2,     0,     1,     0,     3,
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
       2,     3,     3,     0,     3,     0,     3,     3,     4,     0,
       4,     4,     6,     0,     1,     0,     3,     4,     5,     1,
       1,     1,     1,     0,     3,     0,     3,     2,     1,     0,
       3,     2,     0,     4,     2,     0,     1,     1,     1,     1,
       3,     0,     2,     1,     3,     3,     0,     3,     1,     1,
       1,     3,     7,     0,     4,     7,     0,     2,     0,     2,
       2,     3,     3,     3,     2,     0,     3,     1,     1,     0,
       1,     1,     0,     3,     2,     1,     0,     4,     4,     0,
       1,     0,     4,     4,     0,     2,     3,     0,     1,     1,
       0,     4,     4,     6,     0,     2,     0,     2,     1,     2,
       3,     0,     1,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     3,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     4,     3,     4,
       1,     2,     3,     1,     2,     3,     3,     0,     3,     0,
       7,     0,     5,     0,     2,     0,     2,     0,     3,     0,
       2,     4,     0,     2,     4,     0,     4,     4,     0,     3,
       0,     4,     1,     1,     1,     2,     2,     2,     2,     1,
       1,     2,     1,     0,     1,     0,     4,     2,     0,     2,
       4,     4,     0,     1,     1,     1,     1,     1,     0,     4,
       5,     1,     2,     1,     3,     3,     0,     4,     0,     1,
       0,     4,     4,     6,     6,     0,     1,     2,     0,     1,
       0,     3,     1,     2,     0,     3,     5,     0,     3,     2,
       0,     1,     1,     0,     4,     6,     0,     3,     1,     3,
       2,     2,     2,     3,     0,     3,     0,     3,     0,     3,
       0,     1,     0,     3,     1,     1,     1,     1,     1,     7,
       0,     1,     1,     1,     1,     1,     1,     4,     1,     2,
       1,     2,     3,     0,     1,     2,     1,     3,     1,     1,
       4,     1,     1,     1,     0,     4,     5,     0,     2,     0,
       4,     3,     3,     1,     1,     1,     1,     0,     1,     2,
       0,     2,     1,     1,     0,     2,     1,     1,     2,     0,
       2,     0,     2,     2,     0,     2,     0,     2,     2,     0,
       2,     0,     2,     2,     1,     2,     1,     1,     2,     2,
       2,     1,     1,     2,     2,     2,     0,     2,     0,     2,
       0,     2,     1,     1,     0,     2,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     3,     0,     1,     1,     3,     3,     1,     3,
       3,     1,     3,     1,     2,     2,     1,     3,     1,     1,
       3,     1,     3,     1,     3,     1,     2,     2,     1,     1,
       1,     2,     1,     1,     1,     2,     1,     0,     2,     1,
       1,     1,     3,     1,     1,     2,     1,     1,     1,     2,
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
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     2,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     1,     0,     1,     0,     3,     0,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     2,     1,     3,     2,
       1,     1,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     2
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
#line 1611 "parser.y" /* yacc.c:1646  */
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
#line 6402 "parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 1622 "parser.y" /* yacc.c:1646  */
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
#line 6425 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 1658 "parser.y" /* yacc.c:1646  */
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
#line 6449 "parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 1713 "parser.y" /* yacc.c:1646  */
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
#line 6474 "parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 1742 "parser.y" /* yacc.c:1646  */
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
#line 6499 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 1775 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_environment (current_program);
  }
#line 6507 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 1781 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_WORKING;
  }
#line 6515 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 1789 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_data (current_program);
  }
#line 6523 "parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 1799 "parser.y" /* yacc.c:1646  */
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
#line 6558 "parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 1830 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 6566 "parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 1837 "parser.y" /* yacc.c:1646  */
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
#line 6599 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 1873 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 6605 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 1874 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6611 "parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 1883 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 6624 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 1892 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 6637 "parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 1906 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_initial = 1;
  }
#line 6645 "parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 1910 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_recursive = 1;
  }
#line 6653 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 1920 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
#line 6661 "parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 1929 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_CONFIGURATION_SECTION;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "CONFIGURATION SECTION");
	}
  }
#line 6673 "parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 1954 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("SOURCE-COMPUTER", SYN_CLAUSE_1, &check_comp_duplicate);
	if (warningopt && (check_comp_duplicate & SYN_CLAUSE_2)) {
		cb_warning (_("Phrases in non-standard order"));
	}
  }
#line 6686 "parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 1972 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_debugging_line, "DEBUGGING MODE");
	current_program->flag_debugging = 1;
	needs_debug_item = 1;
	cobc_cs_check = 0;
	cb_build_debug_item ();
  }
#line 6698 "parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 1985 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2, &check_comp_duplicate);
  }
#line 6708 "parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 2014 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
#line 6716 "parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 2022 "parser.y" /* yacc.c:1646  */
    {
	current_program->collating_sequence = (yyvsp[0]);
  }
#line 6724 "parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 2029 "parser.y" /* yacc.c:1646  */
    {
	/* Ignore */
  }
#line 6732 "parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 2036 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->classification) {
		cb_error (_("Duplicate CLASSIFICATION clause"));
	} else {
		current_program->classification = (yyvsp[0]);
	}
  }
#line 6744 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 2047 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 6752 "parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 2051 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 6760 "parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 2055 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 6768 "parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 2059 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 6776 "parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 2073 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  }
#line 6785 "parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 2078 "parser.y" /* yacc.c:1646  */
    {
	cobc_in_repository = 0;
  }
#line 6793 "parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 2086 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 6801 "parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 2098 "parser.y" /* yacc.c:1646  */
    {
	functions_are_all = 1;
  }
#line 6809 "parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 2102 "parser.y" /* yacc.c:1646  */
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
#line 6825 "parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 2123 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 6833 "parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 2127 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 6841 "parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 2134 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 6850 "parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 2139 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 6859 "parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 2150 "parser.y" /* yacc.c:1646  */
    {
	check_duplicate = 0;
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	header_check |= COBC_HD_SPECIAL_NAMES;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	}
  }
#line 6873 "parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 2164 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	yyerrok;
  }
#line 6882 "parser.c" /* yacc.c:1646  */
    break;

  case 115:
#line 2195 "parser.y" /* yacc.c:1646  */
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
#line 6910 "parser.c" /* yacc.c:1646  */
    break;

  case 117:
#line 2223 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_DEVICE_CONSOLE) {
			cb_error_x (save_tree, _("Invalid CRT clause"));
		} else {
			current_program->flag_console_is_crt = 1;
		}
	}
  }
#line 6924 "parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 2233 "parser.y" /* yacc.c:1646  */
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
#line 6941 "parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 2246 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree && CB_VALID_TREE ((yyvsp[-1]))) {
		cb_define ((yyvsp[-1]), save_tree);
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
				(yyvsp[-1]), save_tree);
	}
  }
#line 6953 "parser.c" /* yacc.c:1646  */
    break;

  case 123:
#line 2262 "parser.y" /* yacc.c:1646  */
    {
	  check_on_off_duplicate = 0;
  }
#line 6961 "parser.c" /* yacc.c:1646  */
    break;

  case 124:
#line 2269 "parser.y" /* yacc.c:1646  */
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
#line 6980 "parser.c" /* yacc.c:1646  */
    break;

  case 125:
#line 2284 "parser.y" /* yacc.c:1646  */
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
#line 6999 "parser.c" /* yacc.c:1646  */
    break;

  case 126:
#line 2304 "parser.y" /* yacc.c:1646  */
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
#line 7016 "parser.c" /* yacc.c:1646  */
    break;

  case 127:
#line 2317 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		current_program->alphabet_name_list =
			cb_list_add (current_program->alphabet_name_list, (yyvsp[-2]));
	}
	cobc_cs_check = 0;
  }
#line 7028 "parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 2328 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
#line 7038 "parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 2334 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 7048 "parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 2340 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 7058 "parser.c" /* yacc.c:1646  */
    break;

  case 131:
#line 2346 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
#line 7068 "parser.c" /* yacc.c:1646  */
    break;

  case 132:
#line 2352 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 7078 "parser.c" /* yacc.c:1646  */
    break;

  case 133:
#line 2358 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[0]);
	}
  }
#line 7089 "parser.c" /* yacc.c:1646  */
    break;

  case 134:
#line 2368 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 7097 "parser.c" /* yacc.c:1646  */
    break;

  case 135:
#line 2372 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 7105 "parser.c" /* yacc.c:1646  */
    break;

  case 136:
#line 2379 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7113 "parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 2383 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 7121 "parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 2387 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[-1]));
  }
#line 7129 "parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 2391 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 7137 "parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 2398 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 7145 "parser.c" /* yacc.c:1646  */
    break;

  case 141:
#line 2402 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-3]), (yyvsp[0]));
  }
#line 7153 "parser.c" /* yacc.c:1646  */
    break;

  case 142:
#line 2408 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 7159 "parser.c" /* yacc.c:1646  */
    break;

  case 143:
#line 2409 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 7165 "parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 2410 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 7171 "parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 2411 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 7177 "parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 2412 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_high; }
#line 7183 "parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 2413 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_low; }
#line 7189 "parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 2417 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 7195 "parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 2418 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 7201 "parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 2426 "parser.y" /* yacc.c:1646  */
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
#line 7216 "parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 2440 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7224 "parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 2444 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7232 "parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 2452 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7240 "parser.c" /* yacc.c:1646  */
    break;

  case 154:
#line 2459 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7248 "parser.c" /* yacc.c:1646  */
    break;

  case 155:
#line 2463 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
	} else {
		(yyval) = (yyvsp[-1]);
	}
  }
#line 7260 "parser.c" /* yacc.c:1646  */
    break;

  case 156:
#line 2474 "parser.y" /* yacc.c:1646  */
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
#line 7281 "parser.c" /* yacc.c:1646  */
    break;

  case 157:
#line 2494 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = NULL;
	} else {
		(yyval) = CB_LIST_INIT ((yyvsp[0]));
	}
  }
#line 7293 "parser.c" /* yacc.c:1646  */
    break;

  case 158:
#line 2502 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = (yyvsp[-1]);
	} else {
		(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
	}
  }
#line 7305 "parser.c" /* yacc.c:1646  */
    break;

  case 159:
#line 2512 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 7311 "parser.c" /* yacc.c:1646  */
    break;

  case 160:
#line 2513 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 7317 "parser.c" /* yacc.c:1646  */
    break;

  case 161:
#line 2520 "parser.y" /* yacc.c:1646  */
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
#line 7339 "parser.c" /* yacc.c:1646  */
    break;

  case 162:
#line 2540 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 7345 "parser.c" /* yacc.c:1646  */
    break;

  case 163:
#line 2541 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 7351 "parser.c" /* yacc.c:1646  */
    break;

  case 164:
#line 2546 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7359 "parser.c" /* yacc.c:1646  */
    break;

  case 165:
#line 2550 "parser.y" /* yacc.c:1646  */
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
#line 7379 "parser.c" /* yacc.c:1646  */
    break;

  case 166:
#line 2571 "parser.y" /* yacc.c:1646  */
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
#line 7401 "parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 2594 "parser.y" /* yacc.c:1646  */
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
#line 7482 "parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 2675 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7490 "parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 2679 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7498 "parser.c" /* yacc.c:1646  */
    break;

  case 170:
#line 2688 "parser.y" /* yacc.c:1646  */
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
#line 7515 "parser.c" /* yacc.c:1646  */
    break;

  case 171:
#line 2707 "parser.y" /* yacc.c:1646  */
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
#line 7530 "parser.c" /* yacc.c:1646  */
    break;

  case 172:
#line 2723 "parser.y" /* yacc.c:1646  */
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
#line 7546 "parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 2741 "parser.y" /* yacc.c:1646  */
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
#line 7562 "parser.c" /* yacc.c:1646  */
    break;

  case 174:
#line 2759 "parser.y" /* yacc.c:1646  */
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
#line 7578 "parser.c" /* yacc.c:1646  */
    break;

  case 175:
#line 2776 "parser.y" /* yacc.c:1646  */
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
#line 7594 "parser.c" /* yacc.c:1646  */
    break;

  case 177:
#line 2793 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
#line 7603 "parser.c" /* yacc.c:1646  */
    break;

  case 179:
#line 2801 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
#line 7613 "parser.c" /* yacc.c:1646  */
    break;

  case 181:
#line 2810 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  }
#line 7623 "parser.c" /* yacc.c:1646  */
    break;

  case 184:
#line 2825 "parser.y" /* yacc.c:1646  */
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
#line 7644 "parser.c" /* yacc.c:1646  */
    break;

  case 185:
#line 2842 "parser.y" /* yacc.c:1646  */
    {
	validate_file (current_file, (yyvsp[-3]));
  }
#line 7652 "parser.c" /* yacc.c:1646  */
    break;

  case 186:
#line 2846 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	current_file = NULL;
	if (current_program->file_list) {
		current_program->file_list = CB_CHAIN (current_program->file_list);
	}
  }
#line 7664 "parser.c" /* yacc.c:1646  */
    break;

  case 202:
#line 2880 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
  }
#line 7674 "parser.c" /* yacc.c:1646  */
    break;

  case 203:
#line 2886 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	if ((yyvsp[0])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	} else {
		current_file->flag_fileid = 1;
	}
  }
#line 7688 "parser.c" /* yacc.c:1646  */
    break;

  case 204:
#line 2896 "parser.y" /* yacc.c:1646  */
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
#line 7705 "parser.c" /* yacc.c:1646  */
    break;

  case 205:
#line 2909 "parser.y" /* yacc.c:1646  */
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
#line 7722 "parser.c" /* yacc.c:1646  */
    break;

  case 206:
#line 2922 "parser.y" /* yacc.c:1646  */
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
#line 7750 "parser.c" /* yacc.c:1646  */
    break;

  case 207:
#line 2948 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 7756 "parser.c" /* yacc.c:1646  */
    break;

  case 208:
#line 2949 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 7762 "parser.c" /* yacc.c:1646  */
    break;

  case 209:
#line 2950 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int4; }
#line 7768 "parser.c" /* yacc.c:1646  */
    break;

  case 215:
#line 2962 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_line_adv = 1;
  }
#line 7776 "parser.c" /* yacc.c:1646  */
    break;

  case 217:
#line 2969 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_ext_assign = 1;
  }
#line 7784 "parser.c" /* yacc.c:1646  */
    break;

  case 221:
#line 2982 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7792 "parser.c" /* yacc.c:1646  */
    break;

  case 224:
#line 2994 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2, &check_duplicate);
  }
#line 7801 "parser.c" /* yacc.c:1646  */
    break;

  case 225:
#line 3001 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
#line 7807 "parser.c" /* yacc.c:1646  */
    break;

  case 226:
#line 3002 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_DYNAMIC; }
#line 7813 "parser.c" /* yacc.c:1646  */
    break;

  case 227:
#line 3003 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_RANDOM; }
#line 7819 "parser.c" /* yacc.c:1646  */
    break;

  case 228:
#line 3011 "parser.y" /* yacc.c:1646  */
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
#line 7844 "parser.c" /* yacc.c:1646  */
    break;

  case 229:
#line 3034 "parser.y" /* yacc.c:1646  */
    { }
#line 7850 "parser.c" /* yacc.c:1646  */
    break;

  case 230:
#line 3037 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("SUPPRESS WHEN ALL");
  }
#line 7858 "parser.c" /* yacc.c:1646  */
    break;

  case 231:
#line 3042 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("SUPPRESS WHEN SPACE/ZERO");
  }
#line 7866 "parser.c" /* yacc.c:1646  */
    break;

  case 232:
#line 3052 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3, &check_duplicate);
	PENDING ("COLLATING SEQUENCE");
  }
#line 7875 "parser.c" /* yacc.c:1646  */
    break;

  case 233:
#line 3063 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("STATUS", SYN_CLAUSE_4, &check_duplicate);
	current_file->file_status = (yyvsp[0]);
  }
#line 7884 "parser.c" /* yacc.c:1646  */
    break;

  case 237:
#line 3078 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LOCK", SYN_CLAUSE_5, &check_duplicate);
  }
#line 7892 "parser.c" /* yacc.c:1646  */
    break;

  case 239:
#line 3086 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  }
#line 7901 "parser.c" /* yacc.c:1646  */
    break;

  case 240:
#line 3091 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  }
#line 7910 "parser.c" /* yacc.c:1646  */
    break;

  case 241:
#line 3096 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  }
#line 7919 "parser.c" /* yacc.c:1646  */
    break;

  case 244:
#line 3105 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
#line 7927 "parser.c" /* yacc.c:1646  */
    break;

  case 245:
#line 3109 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
	PENDING ("WITH ROLLBACK");
  }
#line 7936 "parser.c" /* yacc.c:1646  */
    break;

  case 248:
#line 3125 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_INDEXED;
  }
#line 7945 "parser.c" /* yacc.c:1646  */
    break;

  case 249:
#line 3130 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
#line 7954 "parser.c" /* yacc.c:1646  */
    break;

  case 250:
#line 3135 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_RELATIVE;
  }
#line 7963 "parser.c" /* yacc.c:1646  */
    break;

  case 251:
#line 3140 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
#line 7972 "parser.c" /* yacc.c:1646  */
    break;

  case 252:
#line 3151 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PADDING", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
#line 7981 "parser.c" /* yacc.c:1646  */
    break;

  case 253:
#line 3162 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8, &check_duplicate);
  }
#line 7989 "parser.c" /* yacc.c:1646  */
    break;

  case 254:
#line 3172 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9, &check_duplicate);
	current_file->key = (yyvsp[0]);
  }
#line 7998 "parser.c" /* yacc.c:1646  */
    break;

  case 255:
#line 3179 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8004 "parser.c" /* yacc.c:1646  */
    break;

  case 256:
#line 3180 "parser.y" /* yacc.c:1646  */
    { PENDING ("SPLIT KEYS"); }
#line 8010 "parser.c" /* yacc.c:1646  */
    break;

  case 257:
#line 3181 "parser.y" /* yacc.c:1646  */
    { PENDING ("SPLIT KEYS"); }
#line 8016 "parser.c" /* yacc.c:1646  */
    break;

  case 258:
#line 3188 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10, &check_duplicate);
	current_file->key = (yyvsp[0]);
  }
#line 8025 "parser.c" /* yacc.c:1646  */
    break;

  case 259:
#line 3199 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11, &check_duplicate);
  }
#line 8033 "parser.c" /* yacc.c:1646  */
    break;

  case 262:
#line 3213 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SHARING", SYN_CLAUSE_12, &check_duplicate);
	current_file->sharing = (yyvsp[0]);
  }
#line 8042 "parser.c" /* yacc.c:1646  */
    break;

  case 263:
#line 3220 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8048 "parser.c" /* yacc.c:1646  */
    break;

  case 264:
#line 3221 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 8054 "parser.c" /* yacc.c:1646  */
    break;

  case 265:
#line 3222 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8060 "parser.c" /* yacc.c:1646  */
    break;

  case 268:
#line 3231 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 8068 "parser.c" /* yacc.c:1646  */
    break;

  case 273:
#line 3250 "parser.y" /* yacc.c:1646  */
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
#line 8097 "parser.c" /* yacc.c:1646  */
    break;

  case 274:
#line 3277 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 8103 "parser.c" /* yacc.c:1646  */
    break;

  case 275:
#line 3278 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 8109 "parser.c" /* yacc.c:1646  */
    break;

  case 276:
#line 3279 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 8115 "parser.c" /* yacc.c:1646  */
    break;

  case 277:
#line 3280 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 8121 "parser.c" /* yacc.c:1646  */
    break;

  case 278:
#line 3287 "parser.y" /* yacc.c:1646  */
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
#line 8130 "parser.c" /* yacc.c:1646  */
    break;

  case 279:
#line 3292 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	cb_verify (cb_multiple_file_tape_clause, "MULTIPLE FILE TAPE");
	cobc_cs_check = 0;
  }
#line 8142 "parser.c" /* yacc.c:1646  */
    break;

  case 286:
#line 3319 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_DATA_DIVISION;
  }
#line 8150 "parser.c" /* yacc.c:1646  */
    break;

  case 288:
#line 3328 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
#line 8160 "parser.c" /* yacc.c:1646  */
    break;

  case 291:
#line 3342 "parser.y" /* yacc.c:1646  */
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
#line 8178 "parser.c" /* yacc.c:1646  */
    break;

  case 292:
#line 3361 "parser.y" /* yacc.c:1646  */
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
#line 8198 "parser.c" /* yacc.c:1646  */
    break;

  case 294:
#line 3378 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 8206 "parser.c" /* yacc.c:1646  */
    break;

  case 295:
#line 3385 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8214 "parser.c" /* yacc.c:1646  */
    break;

  case 296:
#line 3389 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 8222 "parser.c" /* yacc.c:1646  */
    break;

  case 299:
#line 3400 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("EXTERNAL", SYN_CLAUSE_1, &check_duplicate);
#if	0	/* RXWRXW - Global/External */
	if (current_file->flag_global) {
		cb_error (_("File cannot have both EXTERNAL and GLOBAL clauses"));
	}
#endif
	current_file->flag_external = 1;
  }
#line 8236 "parser.c" /* yacc.c:1646  */
    break;

  case 300:
#line 3410 "parser.y" /* yacc.c:1646  */
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
#line 8255 "parser.c" /* yacc.c:1646  */
    break;

  case 310:
#line 3440 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3, &check_duplicate);
	/* ignore */
  }
#line 8264 "parser.c" /* yacc.c:1646  */
    break;

  case 314:
#line 3453 "parser.y" /* yacc.c:1646  */
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
#line 8288 "parser.c" /* yacc.c:1646  */
    break;

  case 315:
#line 3473 "parser.y" /* yacc.c:1646  */
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
#line 8326 "parser.c" /* yacc.c:1646  */
    break;

  case 316:
#line 3508 "parser.y" /* yacc.c:1646  */
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
#line 8358 "parser.c" /* yacc.c:1646  */
    break;

  case 318:
#line 3539 "parser.y" /* yacc.c:1646  */
    {
	current_file->record_depending = (yyvsp[0]);
  }
#line 8366 "parser.c" /* yacc.c:1646  */
    break;

  case 319:
#line 3545 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8372 "parser.c" /* yacc.c:1646  */
    break;

  case 320:
#line 3546 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8378 "parser.c" /* yacc.c:1646  */
    break;

  case 321:
#line 3550 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8384 "parser.c" /* yacc.c:1646  */
    break;

  case 322:
#line 3551 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8390 "parser.c" /* yacc.c:1646  */
    break;

  case 323:
#line 3559 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LABEL", SYN_CLAUSE_5, &check_duplicate);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
#line 8399 "parser.c" /* yacc.c:1646  */
    break;

  case 324:
#line 3570 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
#line 8408 "parser.c" /* yacc.c:1646  */
    break;

  case 325:
#line 3575 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
	if (!current_file->assign) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	}
  }
#line 8420 "parser.c" /* yacc.c:1646  */
    break;

  case 330:
#line 3598 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("DATA", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
#line 8429 "parser.c" /* yacc.c:1646  */
    break;

  case 331:
#line 3610 "parser.y" /* yacc.c:1646  */
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
#line 8448 "parser.c" /* yacc.c:1646  */
    break;

  case 337:
#line 3638 "parser.y" /* yacc.c:1646  */
    {
	current_file->latfoot = (yyvsp[0]);
  }
#line 8456 "parser.c" /* yacc.c:1646  */
    break;

  case 338:
#line 3645 "parser.y" /* yacc.c:1646  */
    {
	current_file->lattop = (yyvsp[0]);
  }
#line 8464 "parser.c" /* yacc.c:1646  */
    break;

  case 339:
#line 3652 "parser.y" /* yacc.c:1646  */
    {
	current_file->latbot = (yyvsp[0]);
  }
#line 8472 "parser.c" /* yacc.c:1646  */
    break;

  case 340:
#line 3661 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9, &check_duplicate);
	/* ignore */
  }
#line 8482 "parser.c" /* yacc.c:1646  */
    break;

  case 341:
#line 3673 "parser.y" /* yacc.c:1646  */
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
#line 8533 "parser.c" /* yacc.c:1646  */
    break;

  case 342:
#line 3725 "parser.y" /* yacc.c:1646  */
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
#line 8549 "parser.c" /* yacc.c:1646  */
    break;

  case 345:
#line 3745 "parser.y" /* yacc.c:1646  */
    {
	current_report = build_report ((yyvsp[0]));
	current_report->file = current_file;
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
#line 8563 "parser.c" /* yacc.c:1646  */
    break;

  case 346:
#line 3755 "parser.y" /* yacc.c:1646  */
    {
	current_report = build_report ((yyvsp[0]));
	CB_ADD_TO_CHAIN (CB_TREE (current_report), current_program->report_list);
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
#line 8576 "parser.c" /* yacc.c:1646  */
    break;

  case 348:
#line 3770 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
#line 8586 "parser.c" /* yacc.c:1646  */
    break;

  case 349:
#line 3776 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[0])));
	}
  }
#line 8596 "parser.c" /* yacc.c:1646  */
    break;

  case 350:
#line 3785 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8604 "parser.c" /* yacc.c:1646  */
    break;

  case 351:
#line 3788 "parser.y" /* yacc.c:1646  */
    {
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 8614 "parser.c" /* yacc.c:1646  */
    break;

  case 352:
#line 3794 "parser.y" /* yacc.c:1646  */
    {
	struct cb_field *p;

	for (p = description_field; p; p = p->sister) {
		cb_validate_field (p);
	}
	(yyval) = CB_TREE (description_field);
  }
#line 8627 "parser.c" /* yacc.c:1646  */
    break;

  case 357:
#line 3814 "parser.y" /* yacc.c:1646  */
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
#line 8646 "parser.c" /* yacc.c:1646  */
    break;

  case 358:
#line 3829 "parser.y" /* yacc.c:1646  */
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
#line 8670 "parser.c" /* yacc.c:1646  */
    break;

  case 359:
#line 3849 "parser.y" /* yacc.c:1646  */
    {
	/* Free tree assocated with level number */
	cobc_parse_free ((yyvsp[-2]));
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 8684 "parser.c" /* yacc.c:1646  */
    break;

  case 360:
#line 3862 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8692 "parser.c" /* yacc.c:1646  */
    break;

  case 361:
#line 3869 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 8702 "parser.c" /* yacc.c:1646  */
    break;

  case 362:
#line 3875 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 8712 "parser.c" /* yacc.c:1646  */
    break;

  case 363:
#line 3881 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	qualifier = (yyvsp[0]);
	non_const_word = 0;
  }
#line 8722 "parser.c" /* yacc.c:1646  */
    break;

  case 364:
#line 3890 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	qualifier = (yyvsp[0]);
	non_const_word = 0;
  }
#line 8732 "parser.c" /* yacc.c:1646  */
    break;

  case 365:
#line 3899 "parser.y" /* yacc.c:1646  */
    {
	(yyval)= NULL;
  }
#line 8740 "parser.c" /* yacc.c:1646  */
    break;

  case 366:
#line 3903 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
		(yyval)= NULL;
	} else {
		(yyval) = cb_null;
	}
  }
#line 8753 "parser.c" /* yacc.c:1646  */
    break;

  case 367:
#line 3914 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8759 "parser.c" /* yacc.c:1646  */
    break;

  case 368:
#line 3915 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 8765 "parser.c" /* yacc.c:1646  */
    break;

  case 369:
#line 3916 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 8771 "parser.c" /* yacc.c:1646  */
    break;

  case 370:
#line 3917 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 8777 "parser.c" /* yacc.c:1646  */
    break;

  case 371:
#line 3922 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8785 "parser.c" /* yacc.c:1646  */
    break;

  case 372:
#line 3926 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 8793 "parser.c" /* yacc.c:1646  */
    break;

  case 373:
#line 3930 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 8801 "parser.c" /* yacc.c:1646  */
    break;

  case 374:
#line 3934 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int4;
  }
#line 8809 "parser.c" /* yacc.c:1646  */
    break;

  case 375:
#line 3938 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 8817 "parser.c" /* yacc.c:1646  */
    break;

  case 376:
#line 3942 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(long));
  }
#line 8825 "parser.c" /* yacc.c:1646  */
    break;

  case 377:
#line 3946 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(void *));
  }
#line 8833 "parser.c" /* yacc.c:1646  */
    break;

  case 378:
#line 3950 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(float));
  }
#line 8841 "parser.c" /* yacc.c:1646  */
    break;

  case 379:
#line 3954 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(double));
  }
#line 8849 "parser.c" /* yacc.c:1646  */
    break;

  case 380:
#line 3958 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (4);
  }
#line 8857 "parser.c" /* yacc.c:1646  */
    break;

  case 381:
#line 3962 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 8865 "parser.c" /* yacc.c:1646  */
    break;

  case 382:
#line 3966 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (16);
  }
#line 8873 "parser.c" /* yacc.c:1646  */
    break;

  case 383:
#line 3970 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 8885 "parser.c" /* yacc.c:1646  */
    break;

  case 393:
#line 4002 "parser.y" /* yacc.c:1646  */
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
#line 8912 "parser.c" /* yacc.c:1646  */
    break;

  case 394:
#line 4028 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8920 "parser.c" /* yacc.c:1646  */
    break;

  case 395:
#line 4032 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("CONSTANT FROM clause");
	(yyval) = NULL;
  }
#line 8929 "parser.c" /* yacc.c:1646  */
    break;

  case 396:
#line 4040 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = NULL;
  }
#line 8938 "parser.c" /* yacc.c:1646  */
    break;

  case 397:
#line 4046 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  }
#line 8947 "parser.c" /* yacc.c:1646  */
    break;

  case 412:
#line 4074 "parser.y" /* yacc.c:1646  */
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
#line 8969 "parser.c" /* yacc.c:1646  */
    break;

  case 413:
#line 4098 "parser.y" /* yacc.c:1646  */
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
#line 8997 "parser.c" /* yacc.c:1646  */
    break;

  case 414:
#line 4125 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname (current_field->name);
  }
#line 9005 "parser.c" /* yacc.c:1646  */
    break;

  case 415:
#line 4129 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[0]))->data);
  }
#line 9013 "parser.c" /* yacc.c:1646  */
    break;

  case 416:
#line 4138 "parser.y" /* yacc.c:1646  */
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
#line 9036 "parser.c" /* yacc.c:1646  */
    break;

  case 417:
#line 4163 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PICTURE", SYN_CLAUSE_4, &check_pic_duplicate);
	current_field->pic = CB_PICTURE ((yyvsp[0]));
  }
#line 9045 "parser.c" /* yacc.c:1646  */
    break;

  case 420:
#line 4179 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 9053 "parser.c" /* yacc.c:1646  */
    break;

  case 421:
#line 4183 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 9061 "parser.c" /* yacc.c:1646  */
    break;

  case 422:
#line 4187 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FLOAT);
  }
#line 9069 "parser.c" /* yacc.c:1646  */
    break;

  case 423:
#line 4191 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_DOUBLE);
  }
#line 9077 "parser.c" /* yacc.c:1646  */
    break;

  case 424:
#line 4195 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PACKED);
  }
#line 9085 "parser.c" /* yacc.c:1646  */
    break;

  case 425:
#line 4199 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 9093 "parser.c" /* yacc.c:1646  */
    break;

  case 426:
#line 4203 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_5);
  }
#line 9101 "parser.c" /* yacc.c:1646  */
    break;

  case 427:
#line 4207 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_6);
  }
#line 9109 "parser.c" /* yacc.c:1646  */
    break;

  case 428:
#line 4211 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_X);
  }
#line 9117 "parser.c" /* yacc.c:1646  */
    break;

  case 429:
#line 4215 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_DISPLAY);
  }
#line 9125 "parser.c" /* yacc.c:1646  */
    break;

  case 430:
#line 4219 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_INDEX);
  }
#line 9133 "parser.c" /* yacc.c:1646  */
    break;

  case 431:
#line 4223 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PACKED);
  }
#line 9141 "parser.c" /* yacc.c:1646  */
    break;

  case 432:
#line 4227 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 9150 "parser.c" /* yacc.c:1646  */
    break;

  case 433:
#line 4232 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 9159 "parser.c" /* yacc.c:1646  */
    break;

  case 434:
#line 4237 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 9167 "parser.c" /* yacc.c:1646  */
    break;

  case 435:
#line 4241 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 9175 "parser.c" /* yacc.c:1646  */
    break;

  case 436:
#line 4245 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
#line 9187 "parser.c" /* yacc.c:1646  */
    break;

  case 437:
#line 4253 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 9195 "parser.c" /* yacc.c:1646  */
    break;

  case 438:
#line 4257 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 9203 "parser.c" /* yacc.c:1646  */
    break;

  case 439:
#line 4261 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
#line 9215 "parser.c" /* yacc.c:1646  */
    break;

  case 440:
#line 4269 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_CHAR);
  }
#line 9223 "parser.c" /* yacc.c:1646  */
    break;

  case 441:
#line 4273 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
#line 9231 "parser.c" /* yacc.c:1646  */
    break;

  case 442:
#line 4277 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 9239 "parser.c" /* yacc.c:1646  */
    break;

  case 443:
#line 4281 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 9247 "parser.c" /* yacc.c:1646  */
    break;

  case 444:
#line 4285 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 9255 "parser.c" /* yacc.c:1646  */
    break;

  case 445:
#line 4289 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 9263 "parser.c" /* yacc.c:1646  */
    break;

  case 446:
#line 4293 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_LONG);
  }
#line 9271 "parser.c" /* yacc.c:1646  */
    break;

  case 447:
#line 4297 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
#line 9279 "parser.c" /* yacc.c:1646  */
    break;

  case 448:
#line 4301 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
#line 9291 "parser.c" /* yacc.c:1646  */
    break;

  case 449:
#line 4309 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
#line 9303 "parser.c" /* yacc.c:1646  */
    break;

  case 450:
#line 4317 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN32);
  }
#line 9311 "parser.c" /* yacc.c:1646  */
    break;

  case 451:
#line 4321 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN64);
  }
#line 9319 "parser.c" /* yacc.c:1646  */
    break;

  case 452:
#line 4325 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN128);
  }
#line 9327 "parser.c" /* yacc.c:1646  */
    break;

  case 453:
#line 4329 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_DEC64);
  }
#line 9335 "parser.c" /* yacc.c:1646  */
    break;

  case 454:
#line 4333 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_DEC128);
  }
#line 9343 "parser.c" /* yacc.c:1646  */
    break;

  case 455:
#line 4337 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("USAGE", SYN_CLAUSE_5, &check_pic_duplicate);
	PENDING ("USAGE NATIONAL");
  }
#line 9352 "parser.c" /* yacc.c:1646  */
    break;

  case 460:
#line 4357 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
#line 9362 "parser.c" /* yacc.c:1646  */
    break;

  case 461:
#line 4363 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
#line 9372 "parser.c" /* yacc.c:1646  */
    break;

  case 462:
#line 4376 "parser.y" /* yacc.c:1646  */
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
#line 9391 "parser.c" /* yacc.c:1646  */
    break;

  case 464:
#line 4394 "parser.y" /* yacc.c:1646  */
    {
	current_field->step_count = cb_get_int ((yyvsp[0]));
  }
#line 9399 "parser.c" /* yacc.c:1646  */
    break;

  case 465:
#line 4404 "parser.y" /* yacc.c:1646  */
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
#line 9434 "parser.c" /* yacc.c:1646  */
    break;

  case 466:
#line 4436 "parser.y" /* yacc.c:1646  */
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
#line 9464 "parser.c" /* yacc.c:1646  */
    break;

  case 467:
#line 4464 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9470 "parser.c" /* yacc.c:1646  */
    break;

  case 468:
#line 4465 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9476 "parser.c" /* yacc.c:1646  */
    break;

  case 469:
#line 4469 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9482 "parser.c" /* yacc.c:1646  */
    break;

  case 470:
#line 4470 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9488 "parser.c" /* yacc.c:1646  */
    break;

  case 472:
#line 4475 "parser.y" /* yacc.c:1646  */
    {
	current_field->depending = (yyvsp[0]);
  }
#line 9496 "parser.c" /* yacc.c:1646  */
    break;

  case 474:
#line 4482 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_zero, 0, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 9505 "parser.c" /* yacc.c:1646  */
    break;

  case 476:
#line 4490 "parser.y" /* yacc.c:1646  */
    {
	/* current_field->initialized = 1; */
  }
#line 9513 "parser.c" /* yacc.c:1646  */
    break;

  case 477:
#line 4497 "parser.y" /* yacc.c:1646  */
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
#line 9538 "parser.c" /* yacc.c:1646  */
    break;

  case 478:
#line 4520 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9544 "parser.c" /* yacc.c:1646  */
    break;

  case 479:
#line 4523 "parser.y" /* yacc.c:1646  */
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
#line 9561 "parser.c" /* yacc.c:1646  */
    break;

  case 480:
#line 4538 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_ASCENDING); }
#line 9567 "parser.c" /* yacc.c:1646  */
    break;

  case 481:
#line 4539 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_DESCENDING); }
#line 9573 "parser.c" /* yacc.c:1646  */
    break;

  case 483:
#line 4544 "parser.y" /* yacc.c:1646  */
    {
	current_field->index_list = (yyvsp[0]);
  }
#line 9581 "parser.c" /* yacc.c:1646  */
    break;

  case 484:
#line 4550 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 9587 "parser.c" /* yacc.c:1646  */
    break;

  case 485:
#line 4552 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 9593 "parser.c" /* yacc.c:1646  */
    break;

  case 486:
#line 4557 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 9602 "parser.c" /* yacc.c:1646  */
    break;

  case 487:
#line 4568 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("JUSTIFIED", SYN_CLAUSE_8, &check_pic_duplicate);
	current_field->flag_justified = 1;
  }
#line 9611 "parser.c" /* yacc.c:1646  */
    break;

  case 488:
#line 4579 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SYNCHRONIZED", SYN_CLAUSE_9, &check_pic_duplicate);
	current_field->flag_synchronized = 1;
  }
#line 9620 "parser.c" /* yacc.c:1646  */
    break;

  case 489:
#line 4590 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLANK", SYN_CLAUSE_10, &check_pic_duplicate);
	current_field->flag_blank_zero = 1;
  }
#line 9629 "parser.c" /* yacc.c:1646  */
    break;

  case 490:
#line 4601 "parser.y" /* yacc.c:1646  */
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
#line 9656 "parser.c" /* yacc.c:1646  */
    break;

  case 491:
#line 4629 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE", SYN_CLAUSE_12, &check_pic_duplicate);
	current_field->values = (yyvsp[0]);
  }
#line 9665 "parser.c" /* yacc.c:1646  */
    break;

  case 493:
#line 4637 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 9671 "parser.c" /* yacc.c:1646  */
    break;

  case 494:
#line 4638 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 9677 "parser.c" /* yacc.c:1646  */
    break;

  case 495:
#line 4642 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9683 "parser.c" /* yacc.c:1646  */
    break;

  case 496:
#line 4643 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0])); }
#line 9689 "parser.c" /* yacc.c:1646  */
    break;

  case 498:
#line 4648 "parser.y" /* yacc.c:1646  */
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[0]));
  }
#line 9700 "parser.c" /* yacc.c:1646  */
    break;

  case 499:
#line 4661 "parser.y" /* yacc.c:1646  */
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
#line 9717 "parser.c" /* yacc.c:1646  */
    break;

  case 500:
#line 4674 "parser.y" /* yacc.c:1646  */
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
#line 9737 "parser.c" /* yacc.c:1646  */
    break;

  case 501:
#line 4695 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY clause");
	} else {
		current_field->flag_any_length = 1;
	}
  }
#line 9750 "parser.c" /* yacc.c:1646  */
    break;

  case 502:
#line 4704 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY clause");
	} else {
		current_field->flag_any_length = 1;
		current_field->flag_any_numeric = 1;
	}
  }
#line 9764 "parser.c" /* yacc.c:1646  */
    break;

  case 504:
#line 4719 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LOCAL_STORAGE_SECTION;
	current_storage = CB_STORAGE_LOCAL;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "LOCAL-STORAGE");
	}
  }
#line 9777 "parser.c" /* yacc.c:1646  */
    break;

  case 505:
#line 4728 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->local_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 9787 "parser.c" /* yacc.c:1646  */
    break;

  case 507:
#line 4740 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
#line 9797 "parser.c" /* yacc.c:1646  */
    break;

  case 508:
#line 4746 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 9807 "parser.c" /* yacc.c:1646  */
    break;

  case 510:
#line 4757 "parser.y" /* yacc.c:1646  */
    {
	PENDING("REPORT SECTION");
	current_storage = CB_STORAGE_REPORT;
	cb_clear_real_field ();
  }
#line 9817 "parser.c" /* yacc.c:1646  */
    break;

  case 514:
#line 4773 "parser.y" /* yacc.c:1646  */
    {
	if (CB_INVALID_TREE ((yyvsp[0]))) {
		YYERROR;
	} else {
		current_report = CB_REPORT (cb_ref ((yyvsp[0])));
	}
	check_duplicate = 0;
  }
#line 9830 "parser.c" /* yacc.c:1646  */
    break;

  case 518:
#line 4788 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 9838 "parser.c" /* yacc.c:1646  */
    break;

  case 519:
#line 4795 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1, &check_duplicate);
	cb_error (_("GLOBAL is not allowed with RD"));
  }
#line 9847 "parser.c" /* yacc.c:1646  */
    break;

  case 520:
#line 4800 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CODE", SYN_CLAUSE_2, &check_duplicate);
  }
#line 9855 "parser.c" /* yacc.c:1646  */
    break;

  case 523:
#line 4811 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3, &check_duplicate);
  }
#line 9863 "parser.c" /* yacc.c:1646  */
    break;

  case 527:
#line 4830 "parser.y" /* yacc.c:1646  */
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
#line 9900 "parser.c" /* yacc.c:1646  */
    break;

  case 528:
#line 4866 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[0]));
  }
#line 9908 "parser.c" /* yacc.c:1646  */
    break;

  case 529:
#line 4870 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[-3]));
	current_report->columns = cb_get_int ((yyvsp[-1]));
  }
#line 9917 "parser.c" /* yacc.c:1646  */
    break;

  case 530:
#line 4875 "parser.y" /* yacc.c:1646  */
    {
	current_report->lines = cb_get_int ((yyvsp[-1]));
  }
#line 9925 "parser.c" /* yacc.c:1646  */
    break;

  case 538:
#line 4895 "parser.y" /* yacc.c:1646  */
    {
	current_report->heading = cb_get_int ((yyvsp[0]));
  }
#line 9933 "parser.c" /* yacc.c:1646  */
    break;

  case 539:
#line 4902 "parser.y" /* yacc.c:1646  */
    {
	current_report->first_detail = cb_get_int ((yyvsp[0]));
  }
#line 9941 "parser.c" /* yacc.c:1646  */
    break;

  case 540:
#line 4909 "parser.y" /* yacc.c:1646  */
    {
	current_report->last_control = cb_get_int ((yyvsp[0]));
  }
#line 9949 "parser.c" /* yacc.c:1646  */
    break;

  case 541:
#line 4916 "parser.y" /* yacc.c:1646  */
    {
	current_report->last_detail = cb_get_int ((yyvsp[0]));
  }
#line 9957 "parser.c" /* yacc.c:1646  */
    break;

  case 542:
#line 4923 "parser.y" /* yacc.c:1646  */
    {
	current_report->footing = cb_get_int ((yyvsp[0]));
  }
#line 9965 "parser.c" /* yacc.c:1646  */
    break;

  case 545:
#line 4934 "parser.y" /* yacc.c:1646  */
    {
	check_pic_duplicate = 0;
  }
#line 9973 "parser.c" /* yacc.c:1646  */
    break;

  case 565:
#line 4965 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("TYPE", SYN_CLAUSE_16, &check_pic_duplicate);
  }
#line 9981 "parser.c" /* yacc.c:1646  */
    break;

  case 578:
#line 4991 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("NEXT GROUP", SYN_CLAUSE_17, &check_pic_duplicate);
  }
#line 9989 "parser.c" /* yacc.c:1646  */
    break;

  case 579:
#line 4998 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SUM", SYN_CLAUSE_19, &check_pic_duplicate);
  }
#line 9997 "parser.c" /* yacc.c:1646  */
    break;

  case 584:
#line 5014 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
  }
#line 10005 "parser.c" /* yacc.c:1646  */
    break;

  case 586:
#line 5025 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINE", SYN_CLAUSE_21, &check_pic_duplicate);
  }
#line 10013 "parser.c" /* yacc.c:1646  */
    break;

  case 589:
#line 5037 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLUMN", SYN_CLAUSE_18, &check_pic_duplicate);
  }
#line 10021 "parser.c" /* yacc.c:1646  */
    break;

  case 601:
#line 5070 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SOURCE", SYN_CLAUSE_22, &check_pic_duplicate);
  }
#line 10029 "parser.c" /* yacc.c:1646  */
    break;

  case 602:
#line 5077 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GROUP", SYN_CLAUSE_23, &check_pic_duplicate);
  }
#line 10037 "parser.c" /* yacc.c:1646  */
    break;

  case 603:
#line 5084 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("USAGE", SYN_CLAUSE_24, &check_pic_duplicate);
  }
#line 10045 "parser.c" /* yacc.c:1646  */
    break;

  case 605:
#line 5093 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 10056 "parser.c" /* yacc.c:1646  */
    break;

  case 606:
#line 5100 "parser.y" /* yacc.c:1646  */
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
#line 10072 "parser.c" /* yacc.c:1646  */
    break;

  case 612:
#line 5125 "parser.y" /* yacc.c:1646  */
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
#line 10096 "parser.c" /* yacc.c:1646  */
    break;

  case 613:
#line 5145 "parser.y" /* yacc.c:1646  */
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
		cb_error (_("Relative LINE/COLUMN clause required with OCCURS"));
	}
  }
#line 10148 "parser.c" /* yacc.c:1646  */
    break;

  case 614:
#line 5193 "parser.y" /* yacc.c:1646  */
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
#line 10168 "parser.c" /* yacc.c:1646  */
    break;

  case 617:
#line 5216 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("BLANK LINE", COB_SCREEN_BLANK_LINE,
					 "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
#line 10177 "parser.c" /* yacc.c:1646  */
    break;

  case 618:
#line 5221 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN,
					 "BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
#line 10186 "parser.c" /* yacc.c:1646  */
    break;

  case 619:
#line 5226 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BELL", COB_SCREEN_BELL);
  }
#line 10194 "parser.c" /* yacc.c:1646  */
    break;

  case 620:
#line 5230 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
#line 10202 "parser.c" /* yacc.c:1646  */
    break;

  case 621:
#line 5234 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("ERASE EOL", COB_SCREEN_ERASE_EOL,
					 "ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
#line 10211 "parser.c" /* yacc.c:1646  */
    break;

  case 622:
#line 5239 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("ERASE EOS", COB_SCREEN_ERASE_EOS,
					 "ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
#line 10220 "parser.c" /* yacc.c:1646  */
    break;

  case 623:
#line 5244 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
					 "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 10229 "parser.c" /* yacc.c:1646  */
    break;

  case 624:
#line 5249 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr_with_conflict ("LOWLIGHT", COB_SCREEN_LOWLIGHT,
					 "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 10238 "parser.c" /* yacc.c:1646  */
    break;

  case 625:
#line 5254 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
#line 10246 "parser.c" /* yacc.c:1646  */
    break;

  case 626:
#line 5258 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
#line 10254 "parser.c" /* yacc.c:1646  */
    break;

  case 627:
#line 5262 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
	PENDING ("OVERLINE");
  }
#line 10263 "parser.c" /* yacc.c:1646  */
    break;

  case 628:
#line 5267 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("GRID", COB_SCREEN_GRID);
	PENDING ("GRID");
  }
#line 10272 "parser.c" /* yacc.c:1646  */
    break;

  case 629:
#line 5272 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
	PENDING ("LEFTLINE");
  }
#line 10281 "parser.c" /* yacc.c:1646  */
    break;

  case 630:
#line 5277 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("AUTO", COB_SCREEN_AUTO);
  }
#line 10289 "parser.c" /* yacc.c:1646  */
    break;

  case 631:
#line 5281 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("SECURE", COB_SCREEN_SECURE);
  }
#line 10297 "parser.c" /* yacc.c:1646  */
    break;

  case 632:
#line 5285 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  }
#line 10305 "parser.c" /* yacc.c:1646  */
    break;

  case 633:
#line 5289 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("FULL", COB_SCREEN_FULL);
  }
#line 10313 "parser.c" /* yacc.c:1646  */
    break;

  case 634:
#line 5293 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[0]);
  }
#line 10322 "parser.c" /* yacc.c:1646  */
    break;

  case 635:
#line 5298 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
#line 10330 "parser.c" /* yacc.c:1646  */
    break;

  case 636:
#line 5302 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
#line 10338 "parser.c" /* yacc.c:1646  */
    break;

  case 637:
#line 5306 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINE", SYN_CLAUSE_16, &check_pic_duplicate);
	current_field->screen_line = (yyvsp[0]);
  }
#line 10347 "parser.c" /* yacc.c:1646  */
    break;

  case 638:
#line 5311 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLUMN", SYN_CLAUSE_17, &check_pic_duplicate);
	current_field->screen_column = (yyvsp[0]);
  }
#line 10356 "parser.c" /* yacc.c:1646  */
    break;

  case 639:
#line 5316 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18, &check_pic_duplicate);
	current_field->screen_foreg = (yyvsp[0]);
  }
#line 10365 "parser.c" /* yacc.c:1646  */
    break;

  case 640:
#line 5321 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19, &check_pic_duplicate);
	current_field->screen_backg = (yyvsp[0]);
  }
#line 10374 "parser.c" /* yacc.c:1646  */
    break;

  case 649:
#line 5334 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));

	check_repeated ("USING", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[0]);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 10387 "parser.c" /* yacc.c:1646  */
    break;

  case 650:
#line 5343 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FROM", SYN_CLAUSE_21, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[0]);
  }
#line 10396 "parser.c" /* yacc.c:1646  */
    break;

  case 651:
#line 5348 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));

	check_repeated ("TO", SYN_CLAUSE_22, &check_pic_duplicate);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 10408 "parser.c" /* yacc.c:1646  */
    break;

  case 660:
#line 5379 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 10416 "parser.c" /* yacc.c:1646  */
    break;

  case 661:
#line 5383 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
#line 10424 "parser.c" /* yacc.c:1646  */
    break;

  case 662:
#line 5387 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
#line 10432 "parser.c" /* yacc.c:1646  */
    break;

  case 663:
#line 5394 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 10440 "parser.c" /* yacc.c:1646  */
    break;

  case 664:
#line 5398 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
#line 10448 "parser.c" /* yacc.c:1646  */
    break;

  case 665:
#line 5402 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
#line 10456 "parser.c" /* yacc.c:1646  */
    break;

  case 666:
#line 5410 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("OCCURS", SYN_CLAUSE_23, &check_pic_duplicate);
	current_field->occurs_max = cb_get_int ((yyvsp[-1]));
	current_field->occurs_min = current_field->occurs_max;
	current_field->indexes++;
	current_field->flag_occurs = 1;
  }
#line 10468 "parser.c" /* yacc.c:1646  */
    break;

  case 667:
#line 5421 "parser.y" /* yacc.c:1646  */
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  }
#line 10476 "parser.c" /* yacc.c:1646  */
    break;

  case 669:
#line 5430 "parser.y" /* yacc.c:1646  */
    {
	current_section = NULL;
	current_paragraph = NULL;
	check_pic_duplicate = 0;
	check_duplicate = 0;
	cobc_in_procedure = 1U;
	cb_set_system_names ();
	header_check |= COBC_HD_PROCEDURE_DIVISION;
  }
#line 10490 "parser.c" /* yacc.c:1646  */
    break;

  case 670:
#line 5440 "parser.y" /* yacc.c:1646  */
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
#line 10506 "parser.c" /* yacc.c:1646  */
    break;

  case 671:
#line 5452 "parser.y" /* yacc.c:1646  */
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
#line 10525 "parser.c" /* yacc.c:1646  */
    break;

  case 672:
#line 5467 "parser.y" /* yacc.c:1646  */
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
#line 10558 "parser.c" /* yacc.c:1646  */
    break;

  case 674:
#line 5500 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 10566 "parser.c" /* yacc.c:1646  */
    break;

  case 675:
#line 5504 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 10575 "parser.c" /* yacc.c:1646  */
    break;

  case 676:
#line 5509 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 10587 "parser.c" /* yacc.c:1646  */
    break;

  case 677:
#line 5517 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("CHAINING invalid in user FUNCTION"));
	} else {
		current_program->flag_chained = 1;
	}
  }
#line 10600 "parser.c" /* yacc.c:1646  */
    break;

  case 678:
#line 5526 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 10612 "parser.c" /* yacc.c:1646  */
    break;

  case 679:
#line 5536 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10618 "parser.c" /* yacc.c:1646  */
    break;

  case 680:
#line 5538 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 10624 "parser.c" /* yacc.c:1646  */
    break;

  case 681:
#line 5543 "parser.y" /* yacc.c:1646  */
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
#line 10641 "parser.c" /* yacc.c:1646  */
    break;

  case 683:
#line 5560 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 10649 "parser.c" /* yacc.c:1646  */
    break;

  case 684:
#line 5564 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error (_("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		PENDING (_("BY VALUE parameters"));
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 10662 "parser.c" /* yacc.c:1646  */
    break;

  case 686:
#line 5577 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO;
	}
  }
#line 10674 "parser.c" /* yacc.c:1646  */
    break;

  case 687:
#line 5585 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_4;
	}
  }
#line 10686 "parser.c" /* yacc.c:1646  */
    break;

  case 688:
#line 5593 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO | CB_SIZE_UNSIGNED;
	}
  }
#line 10698 "parser.c" /* yacc.c:1646  */
    break;

  case 689:
#line 5601 "parser.y" /* yacc.c:1646  */
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
#line 10731 "parser.c" /* yacc.c:1646  */
    break;

  case 690:
#line 5630 "parser.y" /* yacc.c:1646  */
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
#line 10764 "parser.c" /* yacc.c:1646  */
    break;

  case 691:
#line 5662 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 10772 "parser.c" /* yacc.c:1646  */
    break;

  case 692:
#line 5666 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
		(yyval) = cb_int0;
	} else {
		(yyval) = cb_int1;
	}
  }
#line 10785 "parser.c" /* yacc.c:1646  */
    break;

  case 693:
#line 5678 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
#line 10795 "parser.c" /* yacc.c:1646  */
    break;

  case 694:
#line 5684 "parser.y" /* yacc.c:1646  */
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
#line 10828 "parser.c" /* yacc.c:1646  */
    break;

  case 696:
#line 5716 "parser.y" /* yacc.c:1646  */
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
#line 10837 "parser.c" /* yacc.c:1646  */
    break;

  case 697:
#line 5722 "parser.y" /* yacc.c:1646  */
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
#line 10867 "parser.c" /* yacc.c:1646  */
    break;

  case 702:
#line 5760 "parser.y" /* yacc.c:1646  */
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
#line 10888 "parser.c" /* yacc.c:1646  */
    break;

  case 704:
#line 5778 "parser.y" /* yacc.c:1646  */
    {
	/* check_unreached = 0; */
  }
#line 10896 "parser.c" /* yacc.c:1646  */
    break;

  case 705:
#line 5788 "parser.y" /* yacc.c:1646  */
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
#line 10944 "parser.c" /* yacc.c:1646  */
    break;

  case 706:
#line 5832 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (CB_TREE (current_section));
  }
#line 10952 "parser.c" /* yacc.c:1646  */
    break;

  case 709:
#line 5843 "parser.y" /* yacc.c:1646  */
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
#line 11001 "parser.c" /* yacc.c:1646  */
    break;

  case 710:
#line 5891 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[0]), 0) != cb_error_node) {
		cb_error_x ((yyvsp[0]), _("Unknown statement '%s'"), CB_NAME ((yyvsp[0])));
	}
	YYERROR;
  }
#line 11014 "parser.c" /* yacc.c:1646  */
    break;

  case 711:
#line 5903 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11022 "parser.c" /* yacc.c:1646  */
    break;

  case 712:
#line 5907 "parser.y" /* yacc.c:1646  */
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
#line 11038 "parser.c" /* yacc.c:1646  */
    break;

  case 713:
#line 5925 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
#line 11048 "parser.c" /* yacc.c:1646  */
    break;

  case 714:
#line 5930 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  }
#line 11057 "parser.c" /* yacc.c:1646  */
    break;

  case 715:
#line 5935 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[-2]);
	current_statement = CB_STATEMENT ((yyvsp[-1]));
  }
#line 11067 "parser.c" /* yacc.c:1646  */
    break;

  case 716:
#line 5943 "parser.y" /* yacc.c:1646  */
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
#line 11098 "parser.c" /* yacc.c:1646  */
    break;

  case 717:
#line 5970 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11106 "parser.c" /* yacc.c:1646  */
    break;

  case 718:
#line 5974 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11114 "parser.c" /* yacc.c:1646  */
    break;

  case 768:
#line 6030 "parser.y" /* yacc.c:1646  */
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
#line 11132 "parser.c" /* yacc.c:1646  */
    break;

  case 769:
#line 6044 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cobc_cs_check = 0;
  }
#line 11141 "parser.c" /* yacc.c:1646  */
    break;

  case 770:
#line 6055 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ACCEPT", TERM_ACCEPT);
	if (cb_accept_update) {
		check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
	}
	if (cb_accept_auto) {
		check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
	}
  }
#line 11155 "parser.c" /* yacc.c:1646  */
    break;

  case 772:
#line 6070 "parser.y" /* yacc.c:1646  */
    {
	  check_duplicate = 0;
	  check_line_col_duplicate = 0;
	  line_column = NULL;
  }
#line 11165 "parser.c" /* yacc.c:1646  */
    break;

  case 773:
#line 6076 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept ((yyvsp[-3]), line_column, current_statement->attr_ptr);
  }
#line 11174 "parser.c" /* yacc.c:1646  */
    break;

  case 774:
#line 6081 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 0);
  }
#line 11182 "parser.c" /* yacc.c:1646  */
    break;

  case 775:
#line 6085 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 1);
  }
#line 11190 "parser.c" /* yacc.c:1646  */
    break;

  case 776:
#line 6089 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[-3]));
  }
#line 11199 "parser.c" /* yacc.c:1646  */
    break;

  case 777:
#line 6094 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[-2]));
  }
#line 11208 "parser.c" /* yacc.c:1646  */
    break;

  case 778:
#line 6099 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[-3]));
  }
#line 11217 "parser.c" /* yacc.c:1646  */
    break;

  case 779:
#line 6104 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[-2]));
  }
#line 11226 "parser.c" /* yacc.c:1646  */
    break;

  case 780:
#line 6109 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_day_of_week ((yyvsp[-2]));
  }
#line 11234 "parser.c" /* yacc.c:1646  */
    break;

  case 781:
#line 6113 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_escape_key ((yyvsp[-3]));
  }
#line 11242 "parser.c" /* yacc.c:1646  */
    break;

  case 782:
#line 6117 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_exception_status ((yyvsp[-3]));
  }
#line 11250 "parser.c" /* yacc.c:1646  */
    break;

  case 783:
#line 6121 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_time ((yyvsp[-2]));
  }
#line 11258 "parser.c" /* yacc.c:1646  */
    break;

  case 784:
#line 6125 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[-3]));
  }
#line 11267 "parser.c" /* yacc.c:1646  */
    break;

  case 785:
#line 6130 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_command_line ((yyvsp[-2]));
  }
#line 11275 "parser.c" /* yacc.c:1646  */
    break;

  case 786:
#line 6134 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_environment ((yyvsp[-3]));
  }
#line 11283 "parser.c" /* yacc.c:1646  */
    break;

  case 787:
#line 6138 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_get_environment ((yyvsp[-1]), (yyvsp[-4]));
  }
#line 11291 "parser.c" /* yacc.c:1646  */
    break;

  case 788:
#line 6142 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_number ((yyvsp[-2]));
  }
#line 11299 "parser.c" /* yacc.c:1646  */
    break;

  case 789:
#line 6146 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_value ((yyvsp[-3]));
  }
#line 11307 "parser.c" /* yacc.c:1646  */
    break;

  case 790:
#line 6150 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11315 "parser.c" /* yacc.c:1646  */
    break;

  case 791:
#line 6154 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_name ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11323 "parser.c" /* yacc.c:1646  */
    break;

  case 793:
#line 6162 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 11331 "parser.c" /* yacc.c:1646  */
    break;

  case 799:
#line 6180 "parser.y" /* yacc.c:1646  */
    {
	  check_repeated ("FROM CRT", SYN_CLAUSE_1, &check_duplicate);
  }
#line 11339 "parser.c" /* yacc.c:1646  */
    break;

  case 800:
#line 6184 "parser.y" /* yacc.c:1646  */
    {
	  check_repeated ("MODE IS BLOCK", SYN_CLAUSE_2, &check_duplicate);
  }
#line 11347 "parser.c" /* yacc.c:1646  */
    break;

  case 804:
#line 6197 "parser.y" /* yacc.c:1646  */
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
#line 11363 "parser.c" /* yacc.c:1646  */
    break;

  case 805:
#line 6209 "parser.y" /* yacc.c:1646  */
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
#line 11379 "parser.c" /* yacc.c:1646  */
    break;

  case 806:
#line 6221 "parser.y" /* yacc.c:1646  */
    {
	check_attr_with_conflict (_("AT screen-location"), SYN_CLAUSE_3,
				  _("LINE or COLUMN"), SYN_CLAUSE_1 | SYN_CLAUSE_2,
				  &check_line_col_duplicate);

	line_column = (yyvsp[0]);
  }
#line 11391 "parser.c" /* yacc.c:1646  */
    break;

  case 807:
#line 6231 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11397 "parser.c" /* yacc.c:1646  */
    break;

  case 808:
#line 6235 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11403 "parser.c" /* yacc.c:1646  */
    break;

  case 809:
#line 6236 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11409 "parser.c" /* yacc.c:1646  */
    break;

  case 810:
#line 6241 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11417 "parser.c" /* yacc.c:1646  */
    break;

  case 811:
#line 6248 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
  }
#line 11425 "parser.c" /* yacc.c:1646  */
    break;

  case 812:
#line 6252 "parser.y" /* yacc.c:1646  */
    {
	if (cb_accept_auto) {
		remove_attrib (COB_SCREEN_AUTO);
	}
  }
#line 11435 "parser.c" /* yacc.c:1646  */
    break;

  case 813:
#line 6258 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
#line 11443 "parser.c" /* yacc.c:1646  */
    break;

  case 814:
#line 6262 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
#line 11451 "parser.c" /* yacc.c:1646  */
    break;

  case 815:
#line 6266 "parser.y" /* yacc.c:1646  */
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
#line 11459 "parser.c" /* yacc.c:1646  */
    break;

  case 816:
#line 6270 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_FULL);
  }
#line 11467 "parser.c" /* yacc.c:1646  */
    break;

  case 817:
#line 6274 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 11477 "parser.c" /* yacc.c:1646  */
    break;

  case 818:
#line 6280 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LEFTLINE);
  }
#line 11485 "parser.c" /* yacc.c:1646  */
    break;

  case 819:
#line 6284 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWER);
  }
#line 11493 "parser.c" /* yacc.c:1646  */
    break;

  case 820:
#line 6288 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 11503 "parser.c" /* yacc.c:1646  */
    break;

  case 821:
#line 6294 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_NO_ECHO);
  }
#line 11511 "parser.c" /* yacc.c:1646  */
    break;

  case 822:
#line 6298 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
#line 11519 "parser.c" /* yacc.c:1646  */
    break;

  case 823:
#line 6302 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, (yyvsp[0]), NULL, COB_SCREEN_PROMPT);
  }
#line 11527 "parser.c" /* yacc.c:1646  */
    break;

  case 824:
#line 6306 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_PROMPT);
  }
#line 11535 "parser.c" /* yacc.c:1646  */
    break;

  case 825:
#line 6310 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REQUIRED);
  }
#line 11543 "parser.c" /* yacc.c:1646  */
    break;

  case 826:
#line 6314 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
#line 11551 "parser.c" /* yacc.c:1646  */
    break;

  case 827:
#line 6318 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_SECURE);
  }
#line 11559 "parser.c" /* yacc.c:1646  */
    break;

  case 828:
#line 6322 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 11567 "parser.c" /* yacc.c:1646  */
    break;

  case 829:
#line 6326 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 11575 "parser.c" /* yacc.c:1646  */
    break;

  case 830:
#line 6330 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
#line 11583 "parser.c" /* yacc.c:1646  */
    break;

  case 831:
#line 6334 "parser.y" /* yacc.c:1646  */
    {
	if (cb_accept_update) {
		remove_attrib (COB_SCREEN_UPDATE);
	}
  }
#line 11593 "parser.c" /* yacc.c:1646  */
    break;

  case 832:
#line 6340 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
  }
#line 11601 "parser.c" /* yacc.c:1646  */
    break;

  case 833:
#line 6344 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPPER);
  }
#line 11609 "parser.c" /* yacc.c:1646  */
    break;

  case 834:
#line 6348 "parser.y" /* yacc.c:1646  */
    {
	check_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, NULL, 0);
  }
#line 11617 "parser.c" /* yacc.c:1646  */
    break;

  case 835:
#line 6352 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 11625 "parser.c" /* yacc.c:1646  */
    break;

  case 836:
#line 6356 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, 0);
  }
#line 11633 "parser.c" /* yacc.c:1646  */
    break;

  case 837:
#line 6360 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
#line 11641 "parser.c" /* yacc.c:1646  */
    break;

  case 838:
#line 6364 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, (yyvsp[0]), NULL, NULL, 0);
  }
#line 11649 "parser.c" /* yacc.c:1646  */
    break;

  case 841:
#line 6376 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  }
#line 11657 "parser.c" /* yacc.c:1646  */
    break;

  case 842:
#line 6380 "parser.y" /* yacc.c:1646  */
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
#line 11672 "parser.c" /* yacc.c:1646  */
    break;

  case 843:
#line 6397 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ADD", TERM_ADD);
  }
#line 11680 "parser.c" /* yacc.c:1646  */
    break;

  case 845:
#line 6406 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '+', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 11688 "parser.c" /* yacc.c:1646  */
    break;

  case 846:
#line 6410 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list ((yyvsp[-4]), '+'));
  }
#line 11696 "parser.c" /* yacc.c:1646  */
    break;

  case 847:
#line 6414 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 11704 "parser.c" /* yacc.c:1646  */
    break;

  case 849:
#line 6421 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11712 "parser.c" /* yacc.c:1646  */
    break;

  case 850:
#line 6428 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  }
#line 11720 "parser.c" /* yacc.c:1646  */
    break;

  case 851:
#line 6432 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  }
#line 11728 "parser.c" /* yacc.c:1646  */
    break;

  case 852:
#line 6442 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  }
#line 11737 "parser.c" /* yacc.c:1646  */
    break;

  case 854:
#line 6451 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_allocate ((yyvsp[-2]), (yyvsp[0]), NULL, (yyvsp[-1]));
  }
#line 11745 "parser.c" /* yacc.c:1646  */
    break;

  case 855:
#line 6455 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		cb_error_x (CB_TREE (current_statement),
			    _("ALLOCATE CHARACTERS requires RETURNING clause"));
	} else {
		cb_emit_allocate (NULL, (yyvsp[0]), (yyvsp[-3]), (yyvsp[-1]));
	}
  }
#line 11758 "parser.c" /* yacc.c:1646  */
    break;

  case 856:
#line 6466 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 11764 "parser.c" /* yacc.c:1646  */
    break;

  case 857:
#line 6467 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11770 "parser.c" /* yacc.c:1646  */
    break;

  case 858:
#line 6475 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER statement");
  }
#line 11779 "parser.c" /* yacc.c:1646  */
    break;

  case 862:
#line 6489 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_alter ((yyvsp[-3]), (yyvsp[0]));
  }
#line 11787 "parser.c" /* yacc.c:1646  */
    break;

  case 865:
#line 6501 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
  }
#line 11796 "parser.c" /* yacc.c:1646  */
    break;

  case 867:
#line 6516 "parser.y" /* yacc.c:1646  */
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
#line 11811 "parser.c" /* yacc.c:1646  */
    break;

  case 868:
#line 6530 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 11820 "parser.c" /* yacc.c:1646  */
    break;

  case 869:
#line 6535 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STATIC_LINK);
	cobc_cs_check = 0;
  }
#line 11829 "parser.c" /* yacc.c:1646  */
    break;

  case 870:
#line 6540 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  }
#line 11838 "parser.c" /* yacc.c:1646  */
    break;

  case 871:
#line 6545 "parser.y" /* yacc.c:1646  */
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
#line 11859 "parser.c" /* yacc.c:1646  */
    break;

  case 872:
#line 6565 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11867 "parser.c" /* yacc.c:1646  */
    break;

  case 873:
#line 6569 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 11876 "parser.c" /* yacc.c:1646  */
    break;

  case 874:
#line 6574 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error_x (CB_TREE (current_statement),
			    _("Number of parameters exceeds maximum %d"),
			    COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 11889 "parser.c" /* yacc.c:1646  */
    break;

  case 875:
#line 6585 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11895 "parser.c" /* yacc.c:1646  */
    break;

  case 876:
#line 6587 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 11901 "parser.c" /* yacc.c:1646  */
    break;

  case 877:
#line 6592 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error_x (CB_TREE (current_statement),
			    _("OMITTED only allowed with BY REFERENCE"));
	}
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_null);
  }
#line 11913 "parser.c" /* yacc.c:1646  */
    break;

  case 878:
#line 6600 "parser.y" /* yacc.c:1646  */
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
#line 11939 "parser.c" /* yacc.c:1646  */
    break;

  case 880:
#line 6626 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 11947 "parser.c" /* yacc.c:1646  */
    break;

  case 881:
#line 6630 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY CONTENT");
	} else {
		call_mode = CB_CALL_BY_CONTENT;
	}
  }
#line 11960 "parser.c" /* yacc.c:1646  */
    break;

  case 882:
#line 6639 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 11973 "parser.c" /* yacc.c:1646  */
    break;

  case 883:
#line 6651 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11981 "parser.c" /* yacc.c:1646  */
    break;

  case 884:
#line 6655 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 11989 "parser.c" /* yacc.c:1646  */
    break;

  case 885:
#line 6659 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 11997 "parser.c" /* yacc.c:1646  */
    break;

  case 886:
#line 6663 "parser.y" /* yacc.c:1646  */
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
#line 12021 "parser.c" /* yacc.c:1646  */
    break;

  case 891:
#line 6696 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12029 "parser.c" /* yacc.c:1646  */
    break;

  case 892:
#line 6701 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12037 "parser.c" /* yacc.c:1646  */
    break;

  case 893:
#line 6706 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_call_overflow, "ON OVERFLOW clause");
	(yyval) = (yyvsp[0]);
  }
#line 12046 "parser.c" /* yacc.c:1646  */
    break;

  case 894:
#line 6714 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12054 "parser.c" /* yacc.c:1646  */
    break;

  case 895:
#line 6719 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12062 "parser.c" /* yacc.c:1646  */
    break;

  case 896:
#line 6726 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  }
#line 12070 "parser.c" /* yacc.c:1646  */
    break;

  case 897:
#line 6730 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  }
#line 12078 "parser.c" /* yacc.c:1646  */
    break;

  case 898:
#line 6740 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CANCEL", 0);
  }
#line 12086 "parser.c" /* yacc.c:1646  */
    break;

  case 900:
#line 6748 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 12094 "parser.c" /* yacc.c:1646  */
    break;

  case 901:
#line 6752 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 12102 "parser.c" /* yacc.c:1646  */
    break;

  case 902:
#line 6762 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CLOSE", 0);
  }
#line 12110 "parser.c" /* yacc.c:1646  */
    break;

  case 904:
#line 6770 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12119 "parser.c" /* yacc.c:1646  */
    break;

  case 905:
#line 6775 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12128 "parser.c" /* yacc.c:1646  */
    break;

  case 906:
#line 6782 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NORMAL); }
#line 12134 "parser.c" /* yacc.c:1646  */
    break;

  case 907:
#line 6783 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT); }
#line 12140 "parser.c" /* yacc.c:1646  */
    break;

  case 908:
#line 6784 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); }
#line 12146 "parser.c" /* yacc.c:1646  */
    break;

  case 909:
#line 6785 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); }
#line 12152 "parser.c" /* yacc.c:1646  */
    break;

  case 910:
#line 6786 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_LOCK); }
#line 12158 "parser.c" /* yacc.c:1646  */
    break;

  case 911:
#line 6794 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
#line 12166 "parser.c" /* yacc.c:1646  */
    break;

  case 913:
#line 6803 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-3]), 0, (yyvsp[-1]));
  }
#line 12174 "parser.c" /* yacc.c:1646  */
    break;

  case 914:
#line 6810 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  }
#line 12182 "parser.c" /* yacc.c:1646  */
    break;

  case 915:
#line 6814 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  }
#line 12190 "parser.c" /* yacc.c:1646  */
    break;

  case 916:
#line 6824 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
#line 12199 "parser.c" /* yacc.c:1646  */
    break;

  case 917:
#line 6835 "parser.y" /* yacc.c:1646  */
    {
	size_t	save_unreached;

	/* Do not check unreached for CONTINUE */
	save_unreached = check_unreached;
	check_unreached = 0;
	begin_statement ("CONTINUE", 0);
	cb_emit_continue ();
	check_unreached = (unsigned int) save_unreached;
  }
#line 12214 "parser.c" /* yacc.c:1646  */
    break;

  case 918:
#line 6852 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DELETE", TERM_DELETE);
  }
#line 12222 "parser.c" /* yacc.c:1646  */
    break;

  case 920:
#line 6861 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_delete ((yyvsp[-2]));
  }
#line 12230 "parser.c" /* yacc.c:1646  */
    break;

  case 922:
#line 6869 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 12239 "parser.c" /* yacc.c:1646  */
    break;

  case 923:
#line 6874 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 12248 "parser.c" /* yacc.c:1646  */
    break;

  case 924:
#line 6882 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  }
#line 12256 "parser.c" /* yacc.c:1646  */
    break;

  case 925:
#line 6886 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  }
#line 12264 "parser.c" /* yacc.c:1646  */
    break;

  case 926:
#line 6896 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
  }
#line 12273 "parser.c" /* yacc.c:1646  */
    break;

  case 928:
#line 6906 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_name ((yyvsp[-2]));
  }
#line 12281 "parser.c" /* yacc.c:1646  */
    break;

  case 929:
#line 6910 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_value ((yyvsp[-2]));
  }
#line 12289 "parser.c" /* yacc.c:1646  */
    break;

  case 930:
#line 6914 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arg_number ((yyvsp[-2]));
  }
#line 12297 "parser.c" /* yacc.c:1646  */
    break;

  case 931:
#line 6918 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_command_line ((yyvsp[-2]));
  }
#line 12305 "parser.c" /* yacc.c:1646  */
    break;

  case 933:
#line 6927 "parser.y" /* yacc.c:1646  */
    {
	  emit_default_displays_for_x_list ((struct cb_list *) (yyvsp[0]));
  }
#line 12313 "parser.c" /* yacc.c:1646  */
    break;

  case 934:
#line 6931 "parser.y" /* yacc.c:1646  */
    {
	  emit_default_displays_for_x_list ((struct cb_list *) (yyvsp[0]));
  }
#line 12321 "parser.c" /* yacc.c:1646  */
    break;

  case 937:
#line 6943 "parser.y" /* yacc.c:1646  */
    {
	check_duplicate = 0;
	check_line_col_duplicate = 0;
  	advancing_value = cb_int1;
	upon_value = NULL;
	line_column = NULL;
  }
#line 12333 "parser.c" /* yacc.c:1646  */
    break;

  case 938:
#line 6951 "parser.y" /* yacc.c:1646  */
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
#line 12391 "parser.c" /* yacc.c:1646  */
    break;

  case 939:
#line 7008 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12399 "parser.c" /* yacc.c:1646  */
    break;

  case 940:
#line 7012 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("DISPLAY OMITTED");
	(yyval) = cb_null;
  }
#line 12408 "parser.c" /* yacc.c:1646  */
    break;

  case 943:
#line 7025 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("UPON", SYN_CLAUSE_1, &check_duplicate);
  }
#line 12416 "parser.c" /* yacc.c:1646  */
    break;

  case 944:
#line 7029 "parser.y" /* yacc.c:1646  */
    {
 	check_repeated ("NO ADVANCING", SYN_CLAUSE_2, &check_duplicate);
	advancing_value = cb_int0;
  }
#line 12425 "parser.c" /* yacc.c:1646  */
    break;

  case 945:
#line 7034 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("MODE IS BLOCK", SYN_CLAUSE_3, &check_duplicate);
  }
#line 12433 "parser.c" /* yacc.c:1646  */
    break;

  case 948:
#line 7043 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_build_display_mnemonic ((yyvsp[0]));
  }
#line 12441 "parser.c" /* yacc.c:1646  */
    break;

  case 949:
#line 7047 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_build_display_name ((yyvsp[0]));
  }
#line 12449 "parser.c" /* yacc.c:1646  */
    break;

  case 950:
#line 7051 "parser.y" /* yacc.c:1646  */
    {
	upon_value = cb_int0;
  }
#line 12457 "parser.c" /* yacc.c:1646  */
    break;

  case 954:
#line 7064 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
#line 12465 "parser.c" /* yacc.c:1646  */
    break;

  case 955:
#line 7068 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "BLANK LINE", COB_SCREEN_BLANK_LINE,
				     "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
#line 12475 "parser.c" /* yacc.c:1646  */
    break;

  case 956:
#line 7074 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN,
				     "BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
#line 12485 "parser.c" /* yacc.c:1646  */
    break;

  case 957:
#line 7080 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
#line 12493 "parser.c" /* yacc.c:1646  */
    break;

  case 958:
#line 7084 "parser.y" /* yacc.c:1646  */
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
#line 12501 "parser.c" /* yacc.c:1646  */
    break;

  case 959:
#line 7088 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "ERASE EOL", COB_SCREEN_ERASE_EOL,
				     "ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
#line 12511 "parser.c" /* yacc.c:1646  */
    break;

  case 960:
#line 7094 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "ERASE EOS", COB_SCREEN_ERASE_EOS,
				     "ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
#line 12521 "parser.c" /* yacc.c:1646  */
    break;

  case 961:
#line 7100 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 12531 "parser.c" /* yacc.c:1646  */
    break;

  case 962:
#line 7106 "parser.y" /* yacc.c:1646  */
    {
	check_attribs_with_conflict (NULL, NULL, NULL, NULL, NULL, NULL,
				     "LOWLIGHT", COB_SCREEN_LOWLIGHT,
				     "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 12541 "parser.c" /* yacc.c:1646  */
    break;

  case 963:
#line 7112 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
#line 12549 "parser.c" /* yacc.c:1646  */
    break;

  case 964:
#line 7116 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
#line 12557 "parser.c" /* yacc.c:1646  */
    break;

  case 965:
#line 7120 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, (yyvsp[0]), 0);
  }
#line 12565 "parser.c" /* yacc.c:1646  */
    break;

  case 966:
#line 7124 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
#line 12573 "parser.c" /* yacc.c:1646  */
    break;

  case 967:
#line 7128 "parser.y" /* yacc.c:1646  */
    {
	check_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, NULL, 0);
  }
#line 12581 "parser.c" /* yacc.c:1646  */
    break;

  case 968:
#line 7132 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 12589 "parser.c" /* yacc.c:1646  */
    break;

  case 969:
#line 7136 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, 0);
  }
#line 12597 "parser.c" /* yacc.c:1646  */
    break;

  case 970:
#line 7140 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
#line 12605 "parser.c" /* yacc.c:1646  */
    break;

  case 971:
#line 7147 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  }
#line 12613 "parser.c" /* yacc.c:1646  */
    break;

  case 972:
#line 7151 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  }
#line 12621 "parser.c" /* yacc.c:1646  */
    break;

  case 973:
#line 7161 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
#line 12629 "parser.c" /* yacc.c:1646  */
    break;

  case 975:
#line 7170 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '/', (yyvsp[-3]));
  }
#line 12637 "parser.c" /* yacc.c:1646  */
    break;

  case 976:
#line 7174 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-3]), '/', (yyvsp[-5])));
  }
#line 12645 "parser.c" /* yacc.c:1646  */
    break;

  case 977:
#line 7178 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '/', (yyvsp[-3])));
  }
#line 12653 "parser.c" /* yacc.c:1646  */
    break;

  case 978:
#line 7182 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-5]), (yyvsp[-7]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 12661 "parser.c" /* yacc.c:1646  */
    break;

  case 979:
#line 7186 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-7]), (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 12669 "parser.c" /* yacc.c:1646  */
    break;

  case 980:
#line 7193 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  }
#line 12677 "parser.c" /* yacc.c:1646  */
    break;

  case 981:
#line 7197 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  }
#line 12685 "parser.c" /* yacc.c:1646  */
    break;

  case 982:
#line 7207 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
  }
#line 12694 "parser.c" /* yacc.c:1646  */
    break;

  case 984:
#line 7216 "parser.y" /* yacc.c:1646  */
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
#line 12710 "parser.c" /* yacc.c:1646  */
    break;

  case 985:
#line 7234 "parser.y" /* yacc.c:1646  */
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
#line 12733 "parser.c" /* yacc.c:1646  */
    break;

  case 987:
#line 7258 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_evaluate ((yyvsp[-1]), (yyvsp[0]));
	eval_level--;
  }
#line 12742 "parser.c" /* yacc.c:1646  */
    break;

  case 988:
#line 7265 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 12748 "parser.c" /* yacc.c:1646  */
    break;

  case 989:
#line 7267 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 12754 "parser.c" /* yacc.c:1646  */
    break;

  case 990:
#line 7272 "parser.y" /* yacc.c:1646  */
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
#line 12769 "parser.c" /* yacc.c:1646  */
    break;

  case 991:
#line 7283 "parser.y" /* yacc.c:1646  */
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
#line 12784 "parser.c" /* yacc.c:1646  */
    break;

  case 992:
#line 7294 "parser.y" /* yacc.c:1646  */
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
#line 12799 "parser.c" /* yacc.c:1646  */
    break;

  case 993:
#line 7308 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12807 "parser.c" /* yacc.c:1646  */
    break;

  case 994:
#line 7312 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12815 "parser.c" /* yacc.c:1646  */
    break;

  case 995:
#line 7318 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 12821 "parser.c" /* yacc.c:1646  */
    break;

  case 996:
#line 7320 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 12827 "parser.c" /* yacc.c:1646  */
    break;

  case 997:
#line 7326 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), (yyvsp[-1]));
	eval_inc2 = 0;
  }
#line 12836 "parser.c" /* yacc.c:1646  */
    break;

  case 998:
#line 7335 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), NULL);
	eval_inc2 = 0;
  }
#line 12845 "parser.c" /* yacc.c:1646  */
    break;

  case 999:
#line 7343 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
	eval_inc2 = 0;
  }
#line 12854 "parser.c" /* yacc.c:1646  */
    break;

  case 1000:
#line 7349 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
	eval_inc2 = 0;
  }
#line 12863 "parser.c" /* yacc.c:1646  */
    break;

  case 1001:
#line 7356 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 12869 "parser.c" /* yacc.c:1646  */
    break;

  case 1002:
#line 7358 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 12875 "parser.c" /* yacc.c:1646  */
    break;

  case 1003:
#line 7363 "parser.y" /* yacc.c:1646  */
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
#line 12941 "parser.c" /* yacc.c:1646  */
    break;

  case 1004:
#line 7424 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_any; eval_inc2++; }
#line 12947 "parser.c" /* yacc.c:1646  */
    break;

  case 1005:
#line 7425 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; eval_inc2++; }
#line 12953 "parser.c" /* yacc.c:1646  */
    break;

  case 1006:
#line 7426 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_false; eval_inc2++; }
#line 12959 "parser.c" /* yacc.c:1646  */
    break;

  case 1007:
#line 7430 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 12965 "parser.c" /* yacc.c:1646  */
    break;

  case 1008:
#line 7431 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12971 "parser.c" /* yacc.c:1646  */
    break;

  case 1009:
#line 7436 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  }
#line 12979 "parser.c" /* yacc.c:1646  */
    break;

  case 1010:
#line 7440 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  }
#line 12987 "parser.c" /* yacc.c:1646  */
    break;

  case 1011:
#line 7450 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
#line 12996 "parser.c" /* yacc.c:1646  */
    break;

  case 1012:
#line 7455 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 13004 "parser.c" /* yacc.c:1646  */
    break;

  case 1014:
#line 7463 "parser.y" /* yacc.c:1646  */
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
#line 13029 "parser.c" /* yacc.c:1646  */
    break;

  case 1015:
#line 7484 "parser.y" /* yacc.c:1646  */
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
#line 13047 "parser.c" /* yacc.c:1646  */
    break;

  case 1016:
#line 7498 "parser.y" /* yacc.c:1646  */
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
#line 13073 "parser.c" /* yacc.c:1646  */
    break;

  case 1017:
#line 7520 "parser.y" /* yacc.c:1646  */
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
#line 13099 "parser.c" /* yacc.c:1646  */
    break;

  case 1018:
#line 7542 "parser.y" /* yacc.c:1646  */
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
#line 13123 "parser.c" /* yacc.c:1646  */
    break;

  case 1019:
#line 7562 "parser.y" /* yacc.c:1646  */
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
#line 13147 "parser.c" /* yacc.c:1646  */
    break;

  case 1020:
#line 7584 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13153 "parser.c" /* yacc.c:1646  */
    break;

  case 1021:
#line 7585 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13159 "parser.c" /* yacc.c:1646  */
    break;

  case 1022:
#line 7593 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
#line 13168 "parser.c" /* yacc.c:1646  */
    break;

  case 1024:
#line 7602 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_free ((yyvsp[0]));
  }
#line 13176 "parser.c" /* yacc.c:1646  */
    break;

  case 1025:
#line 7612 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GENERATE", 0);
	PENDING("GENERATE");
  }
#line 13185 "parser.c" /* yacc.c:1646  */
    break;

  case 1028:
#line 7628 "parser.y" /* yacc.c:1646  */
    {
	if (!current_paragraph->flag_statement) {
		current_paragraph->flag_first_is_goto = 1;
	}
	begin_statement ("GO TO", 0);
	save_debug = start_debug;
	start_debug = 0;
  }
#line 13198 "parser.c" /* yacc.c:1646  */
    break;

  case 1030:
#line 7641 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_goto ((yyvsp[-1]), (yyvsp[0]));
	start_debug = save_debug;
  }
#line 13207 "parser.c" /* yacc.c:1646  */
    break;

  case 1031:
#line 7649 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 1;
	(yyval) = NULL;
  }
#line 13216 "parser.c" /* yacc.c:1646  */
    break;

  case 1032:
#line 7654 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	(yyval) = (yyvsp[0]);
  }
#line 13225 "parser.c" /* yacc.c:1646  */
    break;

  case 1033:
#line 7665 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GOBACK", 0);
	check_unreached = 1;
	if ((yyvsp[0]) != NULL) {
		cb_emit_move ((yyvsp[0]), CB_LIST_INIT (current_program->cb_return_code));
	}
	cb_emit_exit (1U);
  }
#line 13238 "parser.c" /* yacc.c:1646  */
    break;

  case 1034:
#line 7680 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("IF", TERM_IF);
  }
#line 13246 "parser.c" /* yacc.c:1646  */
    break;

  case 1036:
#line 7689 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 13254 "parser.c" /* yacc.c:1646  */
    break;

  case 1037:
#line 7693 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[0]));
  }
#line 13262 "parser.c" /* yacc.c:1646  */
    break;

  case 1038:
#line 7697 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[0]), NULL);
  }
#line 13270 "parser.c" /* yacc.c:1646  */
    break;

  case 1039:
#line 7704 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  }
#line 13278 "parser.c" /* yacc.c:1646  */
    break;

  case 1040:
#line 7708 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  }
#line 13286 "parser.c" /* yacc.c:1646  */
    break;

  case 1041:
#line 7718 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIALIZE", 0);
  }
#line 13294 "parser.c" /* yacc.c:1646  */
    break;

  case 1043:
#line 7727 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_initialize ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 13302 "parser.c" /* yacc.c:1646  */
    break;

  case 1044:
#line 7733 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13308 "parser.c" /* yacc.c:1646  */
    break;

  case 1045:
#line 7734 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 13314 "parser.c" /* yacc.c:1646  */
    break;

  case 1046:
#line 7738 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13320 "parser.c" /* yacc.c:1646  */
    break;

  case 1047:
#line 7739 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 13326 "parser.c" /* yacc.c:1646  */
    break;

  case 1048:
#line 7740 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); }
#line 13332 "parser.c" /* yacc.c:1646  */
    break;

  case 1049:
#line 7745 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13340 "parser.c" /* yacc.c:1646  */
    break;

  case 1050:
#line 7749 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13348 "parser.c" /* yacc.c:1646  */
    break;

  case 1051:
#line 7756 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13356 "parser.c" /* yacc.c:1646  */
    break;

  case 1052:
#line 7761 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
  }
#line 13364 "parser.c" /* yacc.c:1646  */
    break;

  case 1053:
#line 7768 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[0]));
  }
#line 13372 "parser.c" /* yacc.c:1646  */
    break;

  case 1054:
#line 7774 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); }
#line 13378 "parser.c" /* yacc.c:1646  */
    break;

  case 1055:
#line 7775 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); }
#line 13384 "parser.c" /* yacc.c:1646  */
    break;

  case 1056:
#line 7776 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); }
#line 13390 "parser.c" /* yacc.c:1646  */
    break;

  case 1057:
#line 7777 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
#line 13396 "parser.c" /* yacc.c:1646  */
    break;

  case 1058:
#line 7778 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
#line 13402 "parser.c" /* yacc.c:1646  */
    break;

  case 1059:
#line 7779 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); }
#line 13408 "parser.c" /* yacc.c:1646  */
    break;

  case 1060:
#line 7780 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
#line 13414 "parser.c" /* yacc.c:1646  */
    break;

  case 1061:
#line 7785 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13422 "parser.c" /* yacc.c:1646  */
    break;

  case 1062:
#line 7789 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_true;
  }
#line 13430 "parser.c" /* yacc.c:1646  */
    break;

  case 1063:
#line 7798 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIATE", 0);
	PENDING("INITIATE");
  }
#line 13439 "parser.c" /* yacc.c:1646  */
    break;

  case 1065:
#line 7807 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 13449 "parser.c" /* yacc.c:1646  */
    break;

  case 1066:
#line 7813 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 13459 "parser.c" /* yacc.c:1646  */
    break;

  case 1067:
#line 7824 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
#line 13468 "parser.c" /* yacc.c:1646  */
    break;

  case 1070:
#line 7837 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13476 "parser.c" /* yacc.c:1646  */
    break;

  case 1071:
#line 7841 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13484 "parser.c" /* yacc.c:1646  */
    break;

  case 1072:
#line 7845 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13492 "parser.c" /* yacc.c:1646  */
    break;

  case 1077:
#line 7861 "parser.y" /* yacc.c:1646  */
    {
	cb_init_tallying ();
  }
#line 13500 "parser.c" /* yacc.c:1646  */
    break;

  case 1078:
#line 7865 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_inspect ((yyvsp[-3]), (yyvsp[0]), cb_int0, 0);
	(yyval) = (yyvsp[-3]);
  }
#line 13509 "parser.c" /* yacc.c:1646  */
    break;

  case 1079:
#line 7875 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_inspect ((yyvsp[-2]), (yyvsp[0]), cb_int1, 1);
	inspect_keyword = 0;
  }
#line 13518 "parser.c" /* yacc.c:1646  */
    break;

  case 1080:
#line 7885 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
	cb_emit_inspect ((yyvsp[-5]), x, cb_int0, 2);
  }
#line 13528 "parser.c" /* yacc.c:1646  */
    break;

  case 1081:
#line 7893 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13534 "parser.c" /* yacc.c:1646  */
    break;

  case 1082:
#line 7894 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 13540 "parser.c" /* yacc.c:1646  */
    break;

  case 1083:
#line 7898 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_data ((yyvsp[-1])); }
#line 13546 "parser.c" /* yacc.c:1646  */
    break;

  case 1084:
#line 7899 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_characters ((yyvsp[0])); }
#line 13552 "parser.c" /* yacc.c:1646  */
    break;

  case 1085:
#line 7900 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_all (); }
#line 13558 "parser.c" /* yacc.c:1646  */
    break;

  case 1086:
#line 7901 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_leading (); }
#line 13564 "parser.c" /* yacc.c:1646  */
    break;

  case 1087:
#line 7902 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_trailing (); }
#line 13570 "parser.c" /* yacc.c:1646  */
    break;

  case 1088:
#line 7903 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_value ((yyvsp[-1]), (yyvsp[0])); }
#line 13576 "parser.c" /* yacc.c:1646  */
    break;

  case 1089:
#line 7907 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13582 "parser.c" /* yacc.c:1646  */
    break;

  case 1090:
#line 7908 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 13588 "parser.c" /* yacc.c:1646  */
    break;

  case 1091:
#line 7913 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[-1]), (yyvsp[0]));
	inspect_keyword = 0;
  }
#line 13597 "parser.c" /* yacc.c:1646  */
    break;

  case 1092:
#line 7918 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13605 "parser.c" /* yacc.c:1646  */
    break;

  case 1093:
#line 7924 "parser.y" /* yacc.c:1646  */
    { /* Nothing */ }
#line 13611 "parser.c" /* yacc.c:1646  */
    break;

  case 1094:
#line 7925 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 1; }
#line 13617 "parser.c" /* yacc.c:1646  */
    break;

  case 1095:
#line 7926 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 2; }
#line 13623 "parser.c" /* yacc.c:1646  */
    break;

  case 1096:
#line 7927 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 3; }
#line 13629 "parser.c" /* yacc.c:1646  */
    break;

  case 1097:
#line 7928 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 4; }
#line 13635 "parser.c" /* yacc.c:1646  */
    break;

  case 1098:
#line 7933 "parser.y" /* yacc.c:1646  */
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
#line 13661 "parser.c" /* yacc.c:1646  */
    break;

  case 1099:
#line 7960 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_inspect_region_start ();
  }
#line 13669 "parser.c" /* yacc.c:1646  */
    break;

  case 1100:
#line 7964 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13677 "parser.c" /* yacc.c:1646  */
    break;

  case 1101:
#line 7971 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-3]), CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[0])));
  }
#line 13685 "parser.c" /* yacc.c:1646  */
    break;

  case 1102:
#line 7975 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-3]), CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[0])));
  }
#line 13693 "parser.c" /* yacc.c:1646  */
    break;

  case 1103:
#line 7984 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
#line 13702 "parser.c" /* yacc.c:1646  */
    break;

  case 1105:
#line 7996 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MOVE", 0);
  }
#line 13710 "parser.c" /* yacc.c:1646  */
    break;

  case 1107:
#line 8004 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move ((yyvsp[-2]), (yyvsp[0]));
  }
#line 13718 "parser.c" /* yacc.c:1646  */
    break;

  case 1108:
#line 8008 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move_corresponding ((yyvsp[-2]), (yyvsp[0]));
  }
#line 13726 "parser.c" /* yacc.c:1646  */
    break;

  case 1109:
#line 8018 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
#line 13734 "parser.c" /* yacc.c:1646  */
    break;

  case 1111:
#line 8027 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '*', (yyvsp[-3]));
  }
#line 13742 "parser.c" /* yacc.c:1646  */
    break;

  case 1112:
#line 8031 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '*', (yyvsp[-3])));
  }
#line 13750 "parser.c" /* yacc.c:1646  */
    break;

  case 1113:
#line 8038 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  }
#line 13758 "parser.c" /* yacc.c:1646  */
    break;

  case 1114:
#line 8042 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  }
#line 13766 "parser.c" /* yacc.c:1646  */
    break;

  case 1115:
#line 8052 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("OPEN", 0);
  }
#line 13774 "parser.c" /* yacc.c:1646  */
    break;

  case 1117:
#line 8060 "parser.y" /* yacc.c:1646  */
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
#line 13799 "parser.c" /* yacc.c:1646  */
    break;

  case 1118:
#line 8081 "parser.y" /* yacc.c:1646  */
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
#line 13824 "parser.c" /* yacc.c:1646  */
    break;

  case 1119:
#line 8104 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_INPUT); }
#line 13830 "parser.c" /* yacc.c:1646  */
    break;

  case 1120:
#line 8105 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_OUTPUT); }
#line 13836 "parser.c" /* yacc.c:1646  */
    break;

  case 1121:
#line 8106 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_I_O); }
#line 13842 "parser.c" /* yacc.c:1646  */
    break;

  case 1122:
#line 8107 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_EXTEND); }
#line 13848 "parser.c" /* yacc.c:1646  */
    break;

  case 1123:
#line 8111 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13854 "parser.c" /* yacc.c:1646  */
    break;

  case 1124:
#line 8112 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13860 "parser.c" /* yacc.c:1646  */
    break;

  case 1125:
#line 8116 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13866 "parser.c" /* yacc.c:1646  */
    break;

  case 1126:
#line 8117 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13872 "parser.c" /* yacc.c:1646  */
    break;

  case 1127:
#line 8118 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 13878 "parser.c" /* yacc.c:1646  */
    break;

  case 1128:
#line 8120 "parser.y" /* yacc.c:1646  */
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  }
#line 13887 "parser.c" /* yacc.c:1646  */
    break;

  case 1129:
#line 8131 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 13898 "parser.c" /* yacc.c:1646  */
    break;

  case 1131:
#line 8142 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[0]), (yyvsp[-1]));
	start_debug = save_debug;
  }
#line 13907 "parser.c" /* yacc.c:1646  */
    break;

  case 1132:
#line 8147 "parser.y" /* yacc.c:1646  */
    {
	CB_ADD_TO_CHAIN ((yyvsp[0]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
  }
#line 13917 "parser.c" /* yacc.c:1646  */
    break;

  case 1133:
#line 8153 "parser.y" /* yacc.c:1646  */
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 13926 "parser.c" /* yacc.c:1646  */
    break;

  case 1134:
#line 8158 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[-1]), NULL);
	start_debug = save_debug;
  }
#line 13935 "parser.c" /* yacc.c:1646  */
    break;

  case 1135:
#line 8166 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-4) - (0)]), PERFORM);
	}
  }
#line 13947 "parser.c" /* yacc.c:1646  */
    break;

  case 1136:
#line 8174 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  }
#line 13955 "parser.c" /* yacc.c:1646  */
    break;

  case 1137:
#line 8181 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  }
#line 13963 "parser.c" /* yacc.c:1646  */
    break;

  case 1138:
#line 8185 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-2) - (1)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-2) - (1)]), PERFORM);
	}
	/* Put the dot token back into the stack for reparse */
	cb_unput_dot ();
  }
#line 13977 "parser.c" /* yacc.c:1646  */
    break;

  case 1139:
#line 8198 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[0]));
  }
#line 13988 "parser.c" /* yacc.c:1646  */
    break;

  case 1140:
#line 8205 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $3 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[-2]))->flag_decl_ok = 1;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14000 "parser.c" /* yacc.c:1646  */
    break;

  case 1141:
#line 8216 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_once (NULL);
  }
#line 14008 "parser.c" /* yacc.c:1646  */
    break;

  case 1142:
#line 8220 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_times ((yyvsp[-1]));
	current_program->loop_counter++;
  }
#line 14017 "parser.c" /* yacc.c:1646  */
    break;

  case 1143:
#line 8225 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_forever (NULL);
  }
#line 14025 "parser.c" /* yacc.c:1646  */
    break;

  case 1144:
#line 8229 "parser.y" /* yacc.c:1646  */
    {
	cb_tree varying;

	if (!(yyvsp[0])) {
		(yyval) = cb_build_perform_forever (NULL);
	} else {
		varying = CB_LIST_INIT (cb_build_perform_varying (NULL, NULL, NULL, (yyvsp[0])));
		(yyval) = cb_build_perform_until ((yyvsp[-2]), varying);
	}
  }
#line 14040 "parser.c" /* yacc.c:1646  */
    break;

  case 1145:
#line 8240 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_until ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14048 "parser.c" /* yacc.c:1646  */
    break;

  case 1146:
#line 8246 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 14054 "parser.c" /* yacc.c:1646  */
    break;

  case 1147:
#line 8247 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14060 "parser.c" /* yacc.c:1646  */
    break;

  case 1148:
#line 8251 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14066 "parser.c" /* yacc.c:1646  */
    break;

  case 1149:
#line 8252 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14072 "parser.c" /* yacc.c:1646  */
    break;

  case 1150:
#line 8255 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 14078 "parser.c" /* yacc.c:1646  */
    break;

  case 1151:
#line 8257 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 14084 "parser.c" /* yacc.c:1646  */
    break;

  case 1152:
#line 8262 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_varying ((yyvsp[-6]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 14092 "parser.c" /* yacc.c:1646  */
    break;

  case 1153:
#line 8272 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READ", TERM_READ);
  }
#line 14100 "parser.c" /* yacc.c:1646  */
    break;

  case 1155:
#line 8281 "parser.y" /* yacc.c:1646  */
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
#line 14128 "parser.c" /* yacc.c:1646  */
    break;

  case 1156:
#line 8307 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14134 "parser.c" /* yacc.c:1646  */
    break;

  case 1157:
#line 8308 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14140 "parser.c" /* yacc.c:1646  */
    break;

  case 1158:
#line 8313 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14148 "parser.c" /* yacc.c:1646  */
    break;

  case 1159:
#line 8317 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int3;
  }
#line 14156 "parser.c" /* yacc.c:1646  */
    break;

  case 1160:
#line 8321 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 14164 "parser.c" /* yacc.c:1646  */
    break;

  case 1161:
#line 8325 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 14172 "parser.c" /* yacc.c:1646  */
    break;

  case 1162:
#line 8329 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 14180 "parser.c" /* yacc.c:1646  */
    break;

  case 1163:
#line 8333 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int3;
  }
#line 14188 "parser.c" /* yacc.c:1646  */
    break;

  case 1164:
#line 8337 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int4;
  }
#line 14196 "parser.c" /* yacc.c:1646  */
    break;

  case 1165:
#line 8343 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14202 "parser.c" /* yacc.c:1646  */
    break;

  case 1166:
#line 8344 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14208 "parser.c" /* yacc.c:1646  */
    break;

  case 1169:
#line 8354 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  }
#line 14216 "parser.c" /* yacc.c:1646  */
    break;

  case 1170:
#line 8358 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  }
#line 14224 "parser.c" /* yacc.c:1646  */
    break;

  case 1171:
#line 8368 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
#line 14233 "parser.c" /* yacc.c:1646  */
    break;

  case 1172:
#line 8378 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RELEASE", 0);
  }
#line 14241 "parser.c" /* yacc.c:1646  */
    break;

  case 1174:
#line 8386 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_release ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14249 "parser.c" /* yacc.c:1646  */
    break;

  case 1175:
#line 8396 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
#line 14258 "parser.c" /* yacc.c:1646  */
    break;

  case 1176:
#line 8406 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RETURN", TERM_RETURN);
  }
#line 14266 "parser.c" /* yacc.c:1646  */
    break;

  case 1178:
#line 8415 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_return ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 14274 "parser.c" /* yacc.c:1646  */
    break;

  case 1179:
#line 8422 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  }
#line 14282 "parser.c" /* yacc.c:1646  */
    break;

  case 1180:
#line 8426 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  }
#line 14290 "parser.c" /* yacc.c:1646  */
    break;

  case 1181:
#line 8436 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 14301 "parser.c" /* yacc.c:1646  */
    break;

  case 1183:
#line 8448 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_rewrite ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
	start_debug = save_debug;
  }
#line 14310 "parser.c" /* yacc.c:1646  */
    break;

  case 1184:
#line 8456 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14318 "parser.c" /* yacc.c:1646  */
    break;

  case 1185:
#line 8460 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 14326 "parser.c" /* yacc.c:1646  */
    break;

  case 1186:
#line 8464 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 14334 "parser.c" /* yacc.c:1646  */
    break;

  case 1187:
#line 8471 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  }
#line 14342 "parser.c" /* yacc.c:1646  */
    break;

  case 1188:
#line 8475 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  }
#line 14350 "parser.c" /* yacc.c:1646  */
    break;

  case 1189:
#line 8485 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
#line 14359 "parser.c" /* yacc.c:1646  */
    break;

  case 1190:
#line 8496 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
#line 14367 "parser.c" /* yacc.c:1646  */
    break;

  case 1192:
#line 8505 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_search ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 14375 "parser.c" /* yacc.c:1646  */
    break;

  case 1193:
#line 8510 "parser.y" /* yacc.c:1646  */
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 14384 "parser.c" /* yacc.c:1646  */
    break;

  case 1194:
#line 8517 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14390 "parser.c" /* yacc.c:1646  */
    break;

  case 1195:
#line 8518 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14396 "parser.c" /* yacc.c:1646  */
    break;

  case 1196:
#line 8523 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14404 "parser.c" /* yacc.c:1646  */
    break;

  case 1197:
#line 8528 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14412 "parser.c" /* yacc.c:1646  */
    break;

  case 1198:
#line 8535 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 14420 "parser.c" /* yacc.c:1646  */
    break;

  case 1199:
#line 8539 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), (yyvsp[-1]));
  }
#line 14428 "parser.c" /* yacc.c:1646  */
    break;

  case 1200:
#line 8547 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_if_check_break ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14436 "parser.c" /* yacc.c:1646  */
    break;

  case 1201:
#line 8554 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  }
#line 14444 "parser.c" /* yacc.c:1646  */
    break;

  case 1202:
#line 8558 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  }
#line 14452 "parser.c" /* yacc.c:1646  */
    break;

  case 1203:
#line 8568 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SET", 0);
	setattr_val_on = 0;
	setattr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
#line 14463 "parser.c" /* yacc.c:1646  */
    break;

  case 1204:
#line 8575 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 14471 "parser.c" /* yacc.c:1646  */
    break;

  case 1211:
#line 8590 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 14477 "parser.c" /* yacc.c:1646  */
    break;

  case 1212:
#line 8591 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 14483 "parser.c" /* yacc.c:1646  */
    break;

  case 1213:
#line 8595 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 14489 "parser.c" /* yacc.c:1646  */
    break;

  case 1214:
#line 8596 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 14495 "parser.c" /* yacc.c:1646  */
    break;

  case 1215:
#line 8603 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_setenv ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14503 "parser.c" /* yacc.c:1646  */
    break;

  case 1216:
#line 8612 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_attribute ((yyvsp[-2]), setattr_val_on, setattr_val_off);
  }
#line 14511 "parser.c" /* yacc.c:1646  */
    break;

  case 1219:
#line 8624 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BELL);
  }
#line 14519 "parser.c" /* yacc.c:1646  */
    break;

  case 1220:
#line 8628 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BLINK);
  }
#line 14527 "parser.c" /* yacc.c:1646  */
    break;

  case 1221:
#line 8632 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_HIGHLIGHT);
	check_not_highlight_and_lowlight (setattr_val_on | setattr_val_off,
					  COB_SCREEN_HIGHLIGHT);
  }
#line 14537 "parser.c" /* yacc.c:1646  */
    break;

  case 1222:
#line 8638 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LOWLIGHT);
	check_not_highlight_and_lowlight (setattr_val_on | setattr_val_off,
					  COB_SCREEN_LOWLIGHT);
  }
#line 14547 "parser.c" /* yacc.c:1646  */
    break;

  case 1223:
#line 8644 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_REVERSE);
  }
#line 14555 "parser.c" /* yacc.c:1646  */
    break;

  case 1224:
#line 8648 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_UNDERLINE);
  }
#line 14563 "parser.c" /* yacc.c:1646  */
    break;

  case 1225:
#line 8652 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LEFTLINE);
  }
#line 14571 "parser.c" /* yacc.c:1646  */
    break;

  case 1226:
#line 8656 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_OVERLINE);
  }
#line 14579 "parser.c" /* yacc.c:1646  */
    break;

  case 1227:
#line 8665 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-3]), cb_build_ppointer ((yyvsp[0])));
  }
#line 14587 "parser.c" /* yacc.c:1646  */
    break;

  case 1228:
#line 8669 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14595 "parser.c" /* yacc.c:1646  */
    break;

  case 1229:
#line 8678 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_up_down ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 14603 "parser.c" /* yacc.c:1646  */
    break;

  case 1232:
#line 8692 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_on_off ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14611 "parser.c" /* yacc.c:1646  */
    break;

  case 1235:
#line 8706 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_true ((yyvsp[-2]));
  }
#line 14619 "parser.c" /* yacc.c:1646  */
    break;

  case 1236:
#line 8710 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_false ((yyvsp[-2]));
  }
#line 14627 "parser.c" /* yacc.c:1646  */
    break;

  case 1237:
#line 8720 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SORT", 0);
  }
#line 14635 "parser.c" /* yacc.c:1646  */
    break;

  case 1239:
#line 8728 "parser.y" /* yacc.c:1646  */
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
#line 14660 "parser.c" /* yacc.c:1646  */
    break;

  case 1240:
#line 8749 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2]) && CB_VALID_TREE ((yyvsp[-6]))) {
		cb_emit_sort_finish ((yyvsp[-6]));
	}
  }
#line 14670 "parser.c" /* yacc.c:1646  */
    break;

  case 1241:
#line 8758 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14678 "parser.c" /* yacc.c:1646  */
    break;

  case 1242:
#line 8763 "parser.y" /* yacc.c:1646  */
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
#line 14698 "parser.c" /* yacc.c:1646  */
    break;

  case 1243:
#line 8781 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14704 "parser.c" /* yacc.c:1646  */
    break;

  case 1244:
#line 8782 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 14710 "parser.c" /* yacc.c:1646  */
    break;

  case 1246:
#line 8787 "parser.y" /* yacc.c:1646  */
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  }
#line 14719 "parser.c" /* yacc.c:1646  */
    break;

  case 1247:
#line 8794 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 14725 "parser.c" /* yacc.c:1646  */
    break;

  case 1248:
#line 8795 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_ref ((yyvsp[0])); }
#line 14731 "parser.c" /* yacc.c:1646  */
    break;

  case 1249:
#line 8800 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) && CB_FILE_P (cb_ref ((yyvsp[0])))) {
		cb_error (_("File sort requires USING or INPUT PROCEDURE"));
	}
  }
#line 14741 "parser.c" /* yacc.c:1646  */
    break;

  case 1250:
#line 8806 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[-2])))) {
			cb_error (_("USING invalid with table SORT"));
		} else {
			cb_emit_sort_using ((yyvsp[-2]), (yyvsp[0]));
		}
	}
  }
#line 14755 "parser.c" /* yacc.c:1646  */
    break;

  case 1251:
#line 8816 "parser.y" /* yacc.c:1646  */
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
#line 14771 "parser.c" /* yacc.c:1646  */
    break;

  case 1252:
#line 8831 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("File sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
#line 14781 "parser.c" /* yacc.c:1646  */
    break;

  case 1253:
#line 8837 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (2)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (2)])))) {
			cb_error (_("GIVING invalid with table SORT"));
		} else {
			cb_emit_sort_giving ((yyvsp[(-1) - (2)]), (yyvsp[0]));
		}
	}
  }
#line 14795 "parser.c" /* yacc.c:1646  */
    break;

  case 1254:
#line 8847 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (4)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (4)])))) {
			cb_error (_("OUTPUT PROCEDURE invalid with table SORT"));
		} else {
			cb_emit_sort_output ((yyvsp[0]));
		}
	}
  }
#line 14809 "parser.c" /* yacc.c:1646  */
    break;

  case 1255:
#line 8863 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
#line 14818 "parser.c" /* yacc.c:1646  */
    break;

  case 1257:
#line 8873 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-1]) && !(yyvsp[-2])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SIZE/LENGTH invalid here"));
	} else {
		cb_emit_start ((yyvsp[-3]), start_tree, (yyvsp[-2]), (yyvsp[-1]));
	}
  }
#line 14831 "parser.c" /* yacc.c:1646  */
    break;

  case 1258:
#line 8885 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14839 "parser.c" /* yacc.c:1646  */
    break;

  case 1259:
#line 8889 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14847 "parser.c" /* yacc.c:1646  */
    break;

  case 1260:
#line 8896 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14855 "parser.c" /* yacc.c:1646  */
    break;

  case 1261:
#line 8900 "parser.y" /* yacc.c:1646  */
    {
	start_tree = (yyvsp[-1]);
	(yyval) = (yyvsp[0]);
  }
#line 14864 "parser.c" /* yacc.c:1646  */
    break;

  case 1262:
#line 8905 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  }
#line 14873 "parser.c" /* yacc.c:1646  */
    break;

  case 1263:
#line 8910 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  }
#line 14882 "parser.c" /* yacc.c:1646  */
    break;

  case 1264:
#line 8917 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_EQ); }
#line 14888 "parser.c" /* yacc.c:1646  */
    break;

  case 1265:
#line 8918 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LE : COB_GT); }
#line 14894 "parser.c" /* yacc.c:1646  */
    break;

  case 1266:
#line 8919 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GE : COB_LT); }
#line 14900 "parser.c" /* yacc.c:1646  */
    break;

  case 1267:
#line 8920 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LT : COB_GE); }
#line 14906 "parser.c" /* yacc.c:1646  */
    break;

  case 1268:
#line 8921 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GT : COB_LE); }
#line 14912 "parser.c" /* yacc.c:1646  */
    break;

  case 1269:
#line 8922 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_NE); }
#line 14918 "parser.c" /* yacc.c:1646  */
    break;

  case 1270:
#line 8927 "parser.y" /* yacc.c:1646  */
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition disallowed on START statement"));
  }
#line 14927 "parser.c" /* yacc.c:1646  */
    break;

  case 1273:
#line 8940 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  }
#line 14935 "parser.c" /* yacc.c:1646  */
    break;

  case 1274:
#line 8944 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  }
#line 14943 "parser.c" /* yacc.c:1646  */
    break;

  case 1275:
#line 8954 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP RUN", 0);
  }
#line 14951 "parser.c" /* yacc.c:1646  */
    break;

  case 1276:
#line 8958 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_stop_run ((yyvsp[0]));
	check_unreached = 1;
	cobc_cs_check = 0;
  }
#line 14961 "parser.c" /* yacc.c:1646  */
    break;

  case 1277:
#line 8964 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP", 0);
	cb_verify (cb_stop_literal_statement, "STOP literal");
	cb_emit_display (CB_LIST_INIT ((yyvsp[0])), cb_int0, cb_int1, NULL,
			 NULL);
	cb_emit_accept (cb_null, NULL, NULL);
	cobc_cs_check = 0;
  }
#line 14974 "parser.c" /* yacc.c:1646  */
    break;

  case 1278:
#line 8976 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->cb_return_code;
  }
#line 14982 "parser.c" /* yacc.c:1646  */
    break;

  case 1279:
#line 8980 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14990 "parser.c" /* yacc.c:1646  */
    break;

  case 1280:
#line 8984 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int1;
	}
  }
#line 15002 "parser.c" /* yacc.c:1646  */
    break;

  case 1281:
#line 8992 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int0;
	}
  }
#line 15014 "parser.c" /* yacc.c:1646  */
    break;

  case 1282:
#line 9003 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15022 "parser.c" /* yacc.c:1646  */
    break;

  case 1283:
#line 9007 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15030 "parser.c" /* yacc.c:1646  */
    break;

  case 1284:
#line 9013 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15036 "parser.c" /* yacc.c:1646  */
    break;

  case 1285:
#line 9014 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 15042 "parser.c" /* yacc.c:1646  */
    break;

  case 1286:
#line 9015 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 15048 "parser.c" /* yacc.c:1646  */
    break;

  case 1287:
#line 9016 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 15054 "parser.c" /* yacc.c:1646  */
    break;

  case 1288:
#line 9023 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STRING", TERM_STRING);
  }
#line 15062 "parser.c" /* yacc.c:1646  */
    break;

  case 1290:
#line 9032 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_string ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[-1]));
  }
#line 15070 "parser.c" /* yacc.c:1646  */
    break;

  case 1291:
#line 9038 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 15076 "parser.c" /* yacc.c:1646  */
    break;

  case 1292:
#line 9039 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 15082 "parser.c" /* yacc.c:1646  */
    break;

  case 1293:
#line 9043 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15088 "parser.c" /* yacc.c:1646  */
    break;

  case 1294:
#line 9044 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); }
#line 15094 "parser.c" /* yacc.c:1646  */
    break;

  case 1295:
#line 9045 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[0]), NULL); }
#line 15100 "parser.c" /* yacc.c:1646  */
    break;

  case 1296:
#line 9049 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15106 "parser.c" /* yacc.c:1646  */
    break;

  case 1297:
#line 9050 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15112 "parser.c" /* yacc.c:1646  */
    break;

  case 1298:
#line 9055 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  }
#line 15120 "parser.c" /* yacc.c:1646  */
    break;

  case 1299:
#line 9059 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  }
#line 15128 "parser.c" /* yacc.c:1646  */
    break;

  case 1300:
#line 9069 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
#line 15136 "parser.c" /* yacc.c:1646  */
    break;

  case 1302:
#line 9078 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '-', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 15144 "parser.c" /* yacc.c:1646  */
    break;

  case 1303:
#line 9082 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[-3]), (yyvsp[-5])), '-'));
  }
#line 15152 "parser.c" /* yacc.c:1646  */
    break;

  case 1304:
#line 9086 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 15160 "parser.c" /* yacc.c:1646  */
    break;

  case 1305:
#line 9093 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  }
#line 15168 "parser.c" /* yacc.c:1646  */
    break;

  case 1306:
#line 9097 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  }
#line 15176 "parser.c" /* yacc.c:1646  */
    break;

  case 1307:
#line 9107 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUPPRESS", 0);
	if (!in_declaratives) {
		cb_error_x (CB_TREE (current_statement),
			    _("SUPPRESS statement must be within DECLARATIVES"));
	}
	PENDING("SUPPRESS");
  }
#line 15189 "parser.c" /* yacc.c:1646  */
    break;

  case 1310:
#line 9125 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TERMINATE", 0);
	PENDING("TERMINATE");
  }
#line 15198 "parser.c" /* yacc.c:1646  */
    break;

  case 1312:
#line 9134 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 15208 "parser.c" /* yacc.c:1646  */
    break;

  case 1313:
#line 9140 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	}
  }
#line 15218 "parser.c" /* yacc.c:1646  */
    break;

  case 1314:
#line 9151 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TRANSFORM", 0);
  }
#line 15226 "parser.c" /* yacc.c:1646  */
    break;

  case 1316:
#line 9159 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[-2]), (yyvsp[0]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[-4]), x, cb_int0, 2);
  }
#line 15237 "parser.c" /* yacc.c:1646  */
    break;

  case 1317:
#line 9172 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNLOCK", 0);
  }
#line 15245 "parser.c" /* yacc.c:1646  */
    break;

  case 1319:
#line 9180 "parser.y" /* yacc.c:1646  */
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
#line 15260 "parser.c" /* yacc.c:1646  */
    break;

  case 1323:
#line 9203 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
#line 15268 "parser.c" /* yacc.c:1646  */
    break;

  case 1325:
#line 9213 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_unstring ((yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
  }
#line 15276 "parser.c" /* yacc.c:1646  */
    break;

  case 1326:
#line 9219 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15282 "parser.c" /* yacc.c:1646  */
    break;

  case 1327:
#line 9221 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15288 "parser.c" /* yacc.c:1646  */
    break;

  case 1328:
#line 9225 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 15294 "parser.c" /* yacc.c:1646  */
    break;

  case 1329:
#line 9227 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 15300 "parser.c" /* yacc.c:1646  */
    break;

  case 1330:
#line 9232 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[-1]), (yyvsp[0]));
  }
#line 15308 "parser.c" /* yacc.c:1646  */
    break;

  case 1331:
#line 9238 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 15314 "parser.c" /* yacc.c:1646  */
    break;

  case 1332:
#line 9240 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 15320 "parser.c" /* yacc.c:1646  */
    break;

  case 1333:
#line 9245 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_into ((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 15328 "parser.c" /* yacc.c:1646  */
    break;

  case 1334:
#line 9251 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15334 "parser.c" /* yacc.c:1646  */
    break;

  case 1335:
#line 9252 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15340 "parser.c" /* yacc.c:1646  */
    break;

  case 1336:
#line 9256 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15346 "parser.c" /* yacc.c:1646  */
    break;

  case 1337:
#line 9257 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15352 "parser.c" /* yacc.c:1646  */
    break;

  case 1338:
#line 9261 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15358 "parser.c" /* yacc.c:1646  */
    break;

  case 1339:
#line 9262 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15364 "parser.c" /* yacc.c:1646  */
    break;

  case 1340:
#line 9267 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  }
#line 15372 "parser.c" /* yacc.c:1646  */
    break;

  case 1341:
#line 9271 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  }
#line 15380 "parser.c" /* yacc.c:1646  */
    break;

  case 1342:
#line 9281 "parser.y" /* yacc.c:1646  */
    {
	skip_statements = 0;
	in_debugging = 0;
  }
#line 15389 "parser.c" /* yacc.c:1646  */
    break;

  case 1349:
#line 9299 "parser.y" /* yacc.c:1646  */
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
#line 15415 "parser.c" /* yacc.c:1646  */
    break;

  case 1350:
#line 9324 "parser.y" /* yacc.c:1646  */
    {
	use_global_ind = 0;
  }
#line 15423 "parser.c" /* yacc.c:1646  */
    break;

  case 1351:
#line 9328 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else {
		use_global_ind = 1;
		current_program->flag_global_use = 1;
	}
  }
#line 15436 "parser.c" /* yacc.c:1646  */
    break;

  case 1352:
#line 9340 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		l;

	for (l = (yyvsp[0]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			setup_use_file (CB_FILE (cb_ref (CB_VALUE (l))));
		}
	}
  }
#line 15450 "parser.c" /* yacc.c:1646  */
    break;

  case 1353:
#line 9350 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
#line 15459 "parser.c" /* yacc.c:1646  */
    break;

  case 1354:
#line 9355 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
#line 15468 "parser.c" /* yacc.c:1646  */
    break;

  case 1355:
#line 9360 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
#line 15477 "parser.c" /* yacc.c:1646  */
    break;

  case 1356:
#line 9365 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
#line 15486 "parser.c" /* yacc.c:1646  */
    break;

  case 1357:
#line 9373 "parser.y" /* yacc.c:1646  */
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
#line 15525 "parser.c" /* yacc.c:1646  */
    break;

  case 1360:
#line 9416 "parser.y" /* yacc.c:1646  */
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
#line 15569 "parser.c" /* yacc.c:1646  */
    break;

  case 1361:
#line 9456 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_debugging) {
		if (current_program->all_procedure) {
			cb_error (_("Duplicate USE DEBUGGING ON ALL PROCEDURES"));
		} else {
			current_program->all_procedure = current_section;
		}
	}
  }
#line 15583 "parser.c" /* yacc.c:1646  */
    break;

  case 1362:
#line 9466 "parser.y" /* yacc.c:1646  */
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
#line 15608 "parser.c" /* yacc.c:1646  */
    break;

  case 1367:
#line 9496 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "USE AT");
	}
  }
#line 15618 "parser.c" /* yacc.c:1646  */
    break;

  case 1368:
#line 9505 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	/* emit_entry ("_START", 0, NULL); */
	PENDING ("USE AT PROGRAM START");
  }
#line 15628 "parser.c" /* yacc.c:1646  */
    break;

  case 1369:
#line 9511 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	/* emit_entry ("_END", 0, NULL); */
	PENDING ("USE AT PROGRAM END");
  }
#line 15638 "parser.c" /* yacc.c:1646  */
    break;

  case 1370:
#line 9521 "parser.y" /* yacc.c:1646  */
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE BEFORE REPORTING"));
	PENDING ("USE BEFORE REPORTING");
  }
#line 15648 "parser.c" /* yacc.c:1646  */
    break;

  case 1371:
#line 9530 "parser.y" /* yacc.c:1646  */
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	PENDING ("USE AFTER EXCEPTION CONDITION");
  }
#line 15658 "parser.c" /* yacc.c:1646  */
    break;

  case 1374:
#line 9546 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 15669 "parser.c" /* yacc.c:1646  */
    break;

  case 1376:
#line 9558 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE ((yyvsp[-4]))) {
		cb_emit_write ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
	}
	start_debug = save_debug;
  }
#line 15680 "parser.c" /* yacc.c:1646  */
    break;

  case 1377:
#line 9567 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15686 "parser.c" /* yacc.c:1646  */
    break;

  case 1378:
#line 9568 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15692 "parser.c" /* yacc.c:1646  */
    break;

  case 1379:
#line 9573 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 15700 "parser.c" /* yacc.c:1646  */
    break;

  case 1380:
#line 9577 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 15708 "parser.c" /* yacc.c:1646  */
    break;

  case 1381:
#line 9581 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15716 "parser.c" /* yacc.c:1646  */
    break;

  case 1382:
#line 9585 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[-2]));
  }
#line 15724 "parser.c" /* yacc.c:1646  */
    break;

  case 1383:
#line 9591 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 15730 "parser.c" /* yacc.c:1646  */
    break;

  case 1384:
#line 9592 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_AFTER; }
#line 15736 "parser.c" /* yacc.c:1646  */
    break;

  case 1387:
#line 9602 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  }
#line 15744 "parser.c" /* yacc.c:1646  */
    break;

  case 1388:
#line 9606 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  }
#line 15752 "parser.c" /* yacc.c:1646  */
    break;

  case 1391:
#line 9623 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15761 "parser.c" /* yacc.c:1646  */
    break;

  case 1395:
#line 9638 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15770 "parser.c" /* yacc.c:1646  */
    break;

  case 1400:
#line 9656 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15779 "parser.c" /* yacc.c:1646  */
    break;

  case 1402:
#line 9666 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15788 "parser.c" /* yacc.c:1646  */
    break;

  case 1405:
#line 9681 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15797 "parser.c" /* yacc.c:1646  */
    break;

  case 1407:
#line 9691 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15806 "parser.c" /* yacc.c:1646  */
    break;

  case 1410:
#line 9708 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15815 "parser.c" /* yacc.c:1646  */
    break;

  case 1412:
#line 9719 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15824 "parser.c" /* yacc.c:1646  */
    break;

  case 1418:
#line 9742 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15833 "parser.c" /* yacc.c:1646  */
    break;

  case 1419:
#line 9751 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15842 "parser.c" /* yacc.c:1646  */
    break;

  case 1423:
#line 9768 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15851 "parser.c" /* yacc.c:1646  */
    break;

  case 1424:
#line 9777 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15860 "parser.c" /* yacc.c:1646  */
    break;

  case 1427:
#line 9794 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15869 "parser.c" /* yacc.c:1646  */
    break;

  case 1429:
#line 9804 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 15878 "parser.c" /* yacc.c:1646  */
    break;

  case 1430:
#line 9814 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_one;
  }
#line 15886 "parser.c" /* yacc.c:1646  */
    break;

  case 1431:
#line 9818 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 15894 "parser.c" /* yacc.c:1646  */
    break;

  case 1432:
#line 9828 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_cond ((yyvsp[0]));
  }
#line 15902 "parser.c" /* yacc.c:1646  */
    break;

  case 1433:
#line 9835 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_expr ((yyvsp[0]));
  }
#line 15910 "parser.c" /* yacc.c:1646  */
    break;

  case 1434:
#line 9841 "parser.y" /* yacc.c:1646  */
    {
	current_expr = NULL;
	cb_exp_line = cb_source_line;
  }
#line 15919 "parser.c" /* yacc.c:1646  */
    break;

  case 1435:
#line 9846 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_expr);
  }
#line 15927 "parser.c" /* yacc.c:1646  */
    break;

  case 1439:
#line 9859 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE_P ((yyvsp[0])) && CB_CLASS_NAME_P (cb_ref ((yyvsp[0])))) {
		push_expr ('C', (yyvsp[0]));
	} else {
		push_expr ('x', (yyvsp[0]));
	}
  }
#line 15939 "parser.c" /* yacc.c:1646  */
    break;

  case 1440:
#line 9867 "parser.y" /* yacc.c:1646  */
    { push_expr ('(', NULL); }
#line 15945 "parser.c" /* yacc.c:1646  */
    break;

  case 1441:
#line 9868 "parser.y" /* yacc.c:1646  */
    { push_expr (')', NULL); }
#line 15951 "parser.c" /* yacc.c:1646  */
    break;

  case 1442:
#line 9870 "parser.y" /* yacc.c:1646  */
    { push_expr ('+', NULL); }
#line 15957 "parser.c" /* yacc.c:1646  */
    break;

  case 1443:
#line 9871 "parser.y" /* yacc.c:1646  */
    { push_expr ('-', NULL); }
#line 15963 "parser.c" /* yacc.c:1646  */
    break;

  case 1444:
#line 9872 "parser.y" /* yacc.c:1646  */
    { push_expr ('*', NULL); }
#line 15969 "parser.c" /* yacc.c:1646  */
    break;

  case 1445:
#line 9873 "parser.y" /* yacc.c:1646  */
    { push_expr ('/', NULL); }
#line 15975 "parser.c" /* yacc.c:1646  */
    break;

  case 1446:
#line 9874 "parser.y" /* yacc.c:1646  */
    { push_expr ('^', NULL); }
#line 15981 "parser.c" /* yacc.c:1646  */
    break;

  case 1447:
#line 9876 "parser.y" /* yacc.c:1646  */
    { push_expr ('=', NULL); }
#line 15987 "parser.c" /* yacc.c:1646  */
    break;

  case 1448:
#line 9877 "parser.y" /* yacc.c:1646  */
    { push_expr ('>', NULL); }
#line 15993 "parser.c" /* yacc.c:1646  */
    break;

  case 1449:
#line 9878 "parser.y" /* yacc.c:1646  */
    { push_expr ('<', NULL); }
#line 15999 "parser.c" /* yacc.c:1646  */
    break;

  case 1450:
#line 9879 "parser.y" /* yacc.c:1646  */
    { push_expr (']', NULL); }
#line 16005 "parser.c" /* yacc.c:1646  */
    break;

  case 1451:
#line 9880 "parser.y" /* yacc.c:1646  */
    { push_expr ('[', NULL); }
#line 16011 "parser.c" /* yacc.c:1646  */
    break;

  case 1452:
#line 9881 "parser.y" /* yacc.c:1646  */
    { push_expr ('~', NULL); }
#line 16017 "parser.c" /* yacc.c:1646  */
    break;

  case 1453:
#line 9883 "parser.y" /* yacc.c:1646  */
    { push_expr ('!', NULL); }
#line 16023 "parser.c" /* yacc.c:1646  */
    break;

  case 1454:
#line 9884 "parser.y" /* yacc.c:1646  */
    { push_expr ('&', NULL); }
#line 16029 "parser.c" /* yacc.c:1646  */
    break;

  case 1455:
#line 9885 "parser.y" /* yacc.c:1646  */
    { push_expr ('|', NULL); }
#line 16035 "parser.c" /* yacc.c:1646  */
    break;

  case 1456:
#line 9887 "parser.y" /* yacc.c:1646  */
    { push_expr ('O', NULL); }
#line 16041 "parser.c" /* yacc.c:1646  */
    break;

  case 1457:
#line 9888 "parser.y" /* yacc.c:1646  */
    { push_expr ('9', NULL); }
#line 16047 "parser.c" /* yacc.c:1646  */
    break;

  case 1458:
#line 9889 "parser.y" /* yacc.c:1646  */
    { push_expr ('A', NULL); }
#line 16053 "parser.c" /* yacc.c:1646  */
    break;

  case 1459:
#line 9890 "parser.y" /* yacc.c:1646  */
    { push_expr ('L', NULL); }
#line 16059 "parser.c" /* yacc.c:1646  */
    break;

  case 1460:
#line 9891 "parser.y" /* yacc.c:1646  */
    { push_expr ('U', NULL); }
#line 16065 "parser.c" /* yacc.c:1646  */
    break;

  case 1461:
#line 9894 "parser.y" /* yacc.c:1646  */
    { push_expr ('P', NULL); }
#line 16071 "parser.c" /* yacc.c:1646  */
    break;

  case 1462:
#line 9895 "parser.y" /* yacc.c:1646  */
    { push_expr ('N', NULL); }
#line 16077 "parser.c" /* yacc.c:1646  */
    break;

  case 1471:
#line 9925 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16085 "parser.c" /* yacc.c:1646  */
    break;

  case 1472:
#line 9929 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 16093 "parser.c" /* yacc.c:1646  */
    break;

  case 1476:
#line 9940 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '+', (yyvsp[0])); }
#line 16099 "parser.c" /* yacc.c:1646  */
    break;

  case 1477:
#line 9941 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '-', (yyvsp[0])); }
#line 16105 "parser.c" /* yacc.c:1646  */
    break;

  case 1478:
#line 9942 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16111 "parser.c" /* yacc.c:1646  */
    break;

  case 1479:
#line 9946 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '*', (yyvsp[0])); }
#line 16117 "parser.c" /* yacc.c:1646  */
    break;

  case 1480:
#line 9947 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '/', (yyvsp[0])); }
#line 16123 "parser.c" /* yacc.c:1646  */
    break;

  case 1481:
#line 9948 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16129 "parser.c" /* yacc.c:1646  */
    break;

  case 1482:
#line 9953 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_binary_op ((yyvsp[-2]), '^', (yyvsp[0]));
  }
#line 16137 "parser.c" /* yacc.c:1646  */
    break;

  case 1483:
#line 9956 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16143 "parser.c" /* yacc.c:1646  */
    break;

  case 1484:
#line 9960 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16149 "parser.c" /* yacc.c:1646  */
    break;

  case 1485:
#line 9961 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[0])); }
#line 16155 "parser.c" /* yacc.c:1646  */
    break;

  case 1486:
#line 9962 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16161 "parser.c" /* yacc.c:1646  */
    break;

  case 1487:
#line 9965 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 16167 "parser.c" /* yacc.c:1646  */
    break;

  case 1488:
#line 9966 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16173 "parser.c" /* yacc.c:1646  */
    break;

  case 1489:
#line 9977 "parser.y" /* yacc.c:1646  */
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
#line 16189 "parser.c" /* yacc.c:1646  */
    break;

  case 1490:
#line 9989 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_FILE (cb_ref ((yyvsp[0])))->linage_ctr;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16202 "parser.c" /* yacc.c:1646  */
    break;

  case 1491:
#line 9998 "parser.y" /* yacc.c:1646  */
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
#line 16218 "parser.c" /* yacc.c:1646  */
    break;

  case 1492:
#line 10010 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->line_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16231 "parser.c" /* yacc.c:1646  */
    break;

  case 1493:
#line 10019 "parser.y" /* yacc.c:1646  */
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
#line 16247 "parser.c" /* yacc.c:1646  */
    break;

  case 1494:
#line 10031 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->page_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16260 "parser.c" /* yacc.c:1646  */
    break;

  case 1495:
#line 10045 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16266 "parser.c" /* yacc.c:1646  */
    break;

  case 1496:
#line 10047 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 16272 "parser.c" /* yacc.c:1646  */
    break;

  case 1497:
#line 10052 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-1]));
  }
#line 16280 "parser.c" /* yacc.c:1646  */
    break;

  case 1498:
#line 10060 "parser.y" /* yacc.c:1646  */
    { cb_build_identifier ((yyvsp[0]), 0); }
#line 16286 "parser.c" /* yacc.c:1646  */
    break;

  case 1499:
#line 10067 "parser.y" /* yacc.c:1646  */
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
#line 16305 "parser.c" /* yacc.c:1646  */
    break;

  case 1500:
#line 10087 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16313 "parser.c" /* yacc.c:1646  */
    break;

  case 1501:
#line 10091 "parser.y" /* yacc.c:1646  */
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
#line 16335 "parser.c" /* yacc.c:1646  */
    break;

  case 1502:
#line 10112 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16348 "parser.c" /* yacc.c:1646  */
    break;

  case 1503:
#line 10153 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16361 "parser.c" /* yacc.c:1646  */
    break;

  case 1504:
#line 10166 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 16367 "parser.c" /* yacc.c:1646  */
    break;

  case 1505:
#line 10168 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 16373 "parser.c" /* yacc.c:1646  */
    break;

  case 1506:
#line 10172 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16379 "parser.c" /* yacc.c:1646  */
    break;

  case 1507:
#line 10178 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16385 "parser.c" /* yacc.c:1646  */
    break;

  case 1508:
#line 10180 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 16391 "parser.c" /* yacc.c:1646  */
    break;

  case 1509:
#line 10185 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE ((yyval))->offset = CB_TREE (current_section);
	CB_REFERENCE ((yyval))->flag_in_decl = !!in_declaratives;
	CB_REFERENCE ((yyval))->section = current_section;
	CB_REFERENCE ((yyval))->paragraph = current_paragraph;
	CB_ADD_TO_CHAIN ((yyval), current_program->label_list);
  }
#line 16404 "parser.c" /* yacc.c:1646  */
    break;

  case 1512:
#line 10199 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 16412 "parser.c" /* yacc.c:1646  */
    break;

  case 1513:
#line 10206 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[0]))->data));
	(yyval)->source_file = (yyvsp[0])->source_file;
	(yyval)->source_line = (yyvsp[0])->source_line;
  }
#line 16422 "parser.c" /* yacc.c:1646  */
    break;

  case 1514:
#line 10216 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 16428 "parser.c" /* yacc.c:1646  */
    break;

  case 1515:
#line 10217 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 16434 "parser.c" /* yacc.c:1646  */
    break;

  case 1516:
#line 10222 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 16443 "parser.c" /* yacc.c:1646  */
    break;

  case 1517:
#line 10230 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 16452 "parser.c" /* yacc.c:1646  */
    break;

  case 1518:
#line 10238 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16460 "parser.c" /* yacc.c:1646  */
    break;

  case 1519:
#line 10242 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16468 "parser.c" /* yacc.c:1646  */
    break;

  case 1520:
#line 10249 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 16478 "parser.c" /* yacc.c:1646  */
    break;

  case 1523:
#line 10265 "parser.y" /* yacc.c:1646  */
    {
	if (CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[0]);
	}
  }
#line 16491 "parser.c" /* yacc.c:1646  */
    break;

  case 1524:
#line 10279 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE ((yyvsp[0]))->flag_duped || CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = NULL;
	} else {
		CB_WORD_COUNT ((yyvsp[0]))++;
		(yyval) = (yyvsp[0]);
	}
  }
#line 16505 "parser.c" /* yacc.c:1646  */
    break;

  case 1525:
#line 10296 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16513 "parser.c" /* yacc.c:1646  */
    break;

  case 1526:
#line 10300 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16521 "parser.c" /* yacc.c:1646  */
    break;

  case 1529:
#line 10309 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 16529 "parser.c" /* yacc.c:1646  */
    break;

  case 1530:
#line 10315 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16535 "parser.c" /* yacc.c:1646  */
    break;

  case 1531:
#line 10316 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16541 "parser.c" /* yacc.c:1646  */
    break;

  case 1532:
#line 10321 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16549 "parser.c" /* yacc.c:1646  */
    break;

  case 1533:
#line 10325 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16557 "parser.c" /* yacc.c:1646  */
    break;

  case 1538:
#line 10336 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16565 "parser.c" /* yacc.c:1646  */
    break;

  case 1539:
#line 10340 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16573 "parser.c" /* yacc.c:1646  */
    break;

  case 1540:
#line 10344 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16581 "parser.c" /* yacc.c:1646  */
    break;

  case 1541:
#line 10348 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_ppointer ((yyvsp[0]));
  }
#line 16589 "parser.c" /* yacc.c:1646  */
    break;

  case 1542:
#line 10352 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 16597 "parser.c" /* yacc.c:1646  */
    break;

  case 1543:
#line 10356 "parser.y" /* yacc.c:1646  */
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
#line 16619 "parser.c" /* yacc.c:1646  */
    break;

  case 1544:
#line 10377 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16627 "parser.c" /* yacc.c:1646  */
    break;

  case 1545:
#line 10381 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16635 "parser.c" /* yacc.c:1646  */
    break;

  case 1553:
#line 10398 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16643 "parser.c" /* yacc.c:1646  */
    break;

  case 1554:
#line 10402 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16651 "parser.c" /* yacc.c:1646  */
    break;

  case 1555:
#line 10406 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16659 "parser.c" /* yacc.c:1646  */
    break;

  case 1564:
#line 10440 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 16667 "parser.c" /* yacc.c:1646  */
    break;

  case 1566:
#line 10448 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 16675 "parser.c" /* yacc.c:1646  */
    break;

  case 1569:
#line 10457 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 16683 "parser.c" /* yacc.c:1646  */
    break;

  case 1571:
#line 10462 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_zero;
  }
#line 16691 "parser.c" /* yacc.c:1646  */
    break;

  case 1572:
#line 10469 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 16699 "parser.c" /* yacc.c:1646  */
    break;

  case 1574:
#line 10477 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 16707 "parser.c" /* yacc.c:1646  */
    break;

  case 1576:
#line 10485 "parser.y" /* yacc.c:1646  */
    {
	check_not_88_level ((yyvsp[0]));
  }
#line 16715 "parser.c" /* yacc.c:1646  */
    break;

  case 1579:
#line 10495 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 0); }
#line 16721 "parser.c" /* yacc.c:1646  */
    break;

  case 1580:
#line 10499 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 1); }
#line 16727 "parser.c" /* yacc.c:1646  */
    break;

  case 1581:
#line 10503 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16733 "parser.c" /* yacc.c:1646  */
    break;

  case 1582:
#line 10504 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 16739 "parser.c" /* yacc.c:1646  */
    break;

  case 1583:
#line 10508 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 0); }
#line 16745 "parser.c" /* yacc.c:1646  */
    break;

  case 1584:
#line 10513 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 16756 "parser.c" /* yacc.c:1646  */
    break;

  case 1585:
#line 10520 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 16767 "parser.c" /* yacc.c:1646  */
    break;

  case 1586:
#line 10527 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 16778 "parser.c" /* yacc.c:1646  */
    break;

  case 1587:
#line 10534 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 16789 "parser.c" /* yacc.c:1646  */
    break;

  case 1588:
#line 10544 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_identifier ((yyvsp[0]), 0);
  }
#line 16797 "parser.c" /* yacc.c:1646  */
    break;

  case 1589:
#line 10551 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (CB_REFERENCE_P ((yyvsp[-2]))) {
		CB_REFERENCE ((yyvsp[-2]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 16811 "parser.c" /* yacc.c:1646  */
    break;

  case 1590:
#line 10561 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 16825 "parser.c" /* yacc.c:1646  */
    break;

  case 1591:
#line 10571 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 16839 "parser.c" /* yacc.c:1646  */
    break;

  case 1592:
#line 10581 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (CB_REFERENCE_P ((yyvsp[0]))) {
		CB_REFERENCE ((yyvsp[0]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 16853 "parser.c" /* yacc.c:1646  */
    break;

  case 1593:
#line 10594 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 16861 "parser.c" /* yacc.c:1646  */
    break;

  case 1594:
#line 10598 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 16870 "parser.c" /* yacc.c:1646  */
    break;

  case 1595:
#line 10606 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-3]))->subs = cb_list_reverse ((yyvsp[-1]));
  }
#line 16879 "parser.c" /* yacc.c:1646  */
    break;

  case 1596:
#line 10614 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-4]))->offset = (yyvsp[-2]);
  }
#line 16887 "parser.c" /* yacc.c:1646  */
    break;

  case 1597:
#line 10618 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-5]))->offset = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-5]))->length = (yyvsp[-1]);
  }
#line 16896 "parser.c" /* yacc.c:1646  */
    break;

  case 1598:
#line 10628 "parser.y" /* yacc.c:1646  */
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
#line 16911 "parser.c" /* yacc.c:1646  */
    break;

  case 1599:
#line 10642 "parser.y" /* yacc.c:1646  */
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
#line 16935 "parser.c" /* yacc.c:1646  */
    break;

  case 1600:
#line 10665 "parser.y" /* yacc.c:1646  */
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
#line 16958 "parser.c" /* yacc.c:1646  */
    break;

  case 1601:
#line 10687 "parser.y" /* yacc.c:1646  */
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
#line 16978 "parser.c" /* yacc.c:1646  */
    break;

  case 1602:
#line 10702 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 16984 "parser.c" /* yacc.c:1646  */
    break;

  case 1603:
#line 10703 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 16990 "parser.c" /* yacc.c:1646  */
    break;

  case 1604:
#line 10704 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 16996 "parser.c" /* yacc.c:1646  */
    break;

  case 1605:
#line 10705 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 17002 "parser.c" /* yacc.c:1646  */
    break;

  case 1606:
#line 10706 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 17008 "parser.c" /* yacc.c:1646  */
    break;

  case 1607:
#line 10707 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 17014 "parser.c" /* yacc.c:1646  */
    break;

  case 1608:
#line 10712 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17022 "parser.c" /* yacc.c:1646  */
    break;

  case 1609:
#line 10716 "parser.y" /* yacc.c:1646  */
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
#line 17040 "parser.c" /* yacc.c:1646  */
    break;

  case 1610:
#line 10733 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17048 "parser.c" /* yacc.c:1646  */
    break;

  case 1611:
#line 10737 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_concat_literals ((yyvsp[-2]), (yyvsp[0]));
  }
#line 17056 "parser.c" /* yacc.c:1646  */
    break;

  case 1612:
#line 10743 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17062 "parser.c" /* yacc.c:1646  */
    break;

  case 1613:
#line 10744 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 17068 "parser.c" /* yacc.c:1646  */
    break;

  case 1614:
#line 10745 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 17074 "parser.c" /* yacc.c:1646  */
    break;

  case 1615:
#line 10746 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 17080 "parser.c" /* yacc.c:1646  */
    break;

  case 1616:
#line 10747 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 17086 "parser.c" /* yacc.c:1646  */
    break;

  case 1617:
#line 10748 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 17092 "parser.c" /* yacc.c:1646  */
    break;

  case 1618:
#line 10749 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 17098 "parser.c" /* yacc.c:1646  */
    break;

  case 1619:
#line 10756 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), NULL, (yyvsp[0]), 0);
  }
#line 17106 "parser.c" /* yacc.c:1646  */
    break;

  case 1620:
#line 10760 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), CB_LIST_INIT ((yyvsp[-2])), (yyvsp[0]), 0);
  }
#line 17114 "parser.c" /* yacc.c:1646  */
    break;

  case 1621:
#line 10764 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17122 "parser.c" /* yacc.c:1646  */
    break;

  case 1622:
#line 10768 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17130 "parser.c" /* yacc.c:1646  */
    break;

  case 1623:
#line 10772 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-3]), (yyvsp[-1]), NULL, 0);
  }
#line 17138 "parser.c" /* yacc.c:1646  */
    break;

  case 1624:
#line 10776 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17146 "parser.c" /* yacc.c:1646  */
    break;

  case 1625:
#line 10780 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17154 "parser.c" /* yacc.c:1646  */
    break;

  case 1626:
#line 10784 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17162 "parser.c" /* yacc.c:1646  */
    break;

  case 1627:
#line 10788 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17170 "parser.c" /* yacc.c:1646  */
    break;

  case 1628:
#line 10792 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17178 "parser.c" /* yacc.c:1646  */
    break;

  case 1629:
#line 10796 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 0);
  }
#line 17186 "parser.c" /* yacc.c:1646  */
    break;

  case 1630:
#line 10800 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 1);
  }
#line 17194 "parser.c" /* yacc.c:1646  */
    break;

  case 1640:
#line 10825 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17202 "parser.c" /* yacc.c:1646  */
    break;

  case 1641:
#line 10829 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), NULL);
  }
#line 17210 "parser.c" /* yacc.c:1646  */
    break;

  case 1642:
#line 10833 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 17218 "parser.c" /* yacc.c:1646  */
    break;

  case 1643:
#line 10840 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17226 "parser.c" /* yacc.c:1646  */
    break;

  case 1644:
#line 10844 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 17234 "parser.c" /* yacc.c:1646  */
    break;

  case 1645:
#line 10848 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17242 "parser.c" /* yacc.c:1646  */
    break;

  case 1646:
#line 10855 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_int0);
  }
#line 17253 "parser.c" /* yacc.c:1646  */
    break;

  case 1647:
#line 10862 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int1);
  }
#line 17264 "parser.c" /* yacc.c:1646  */
    break;

  case 1648:
#line 10869 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int2);
  }
#line 17275 "parser.c" /* yacc.c:1646  */
    break;

  case 1649:
#line 10879 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 17286 "parser.c" /* yacc.c:1646  */
    break;

  case 1650:
#line 10886 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, (yyvsp[0]));
  }
#line 17297 "parser.c" /* yacc.c:1646  */
    break;

  case 1651:
#line 10896 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 17308 "parser.c" /* yacc.c:1646  */
    break;

  case 1652:
#line 10903 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[0])));
  }
#line 17319 "parser.c" /* yacc.c:1646  */
    break;

  case 1653:
#line 10913 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 17327 "parser.c" /* yacc.c:1646  */
    break;

  case 1654:
#line 10917 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 4) {
		cb_error_x ((yyvsp[-2]), _("Cannot specify offset and SYSTEM-OFFSET at the same time."));
	}

	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 17341 "parser.c" /* yacc.c:1646  */
    break;

  case 1655:
#line 10930 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 17349 "parser.c" /* yacc.c:1646  */
    break;

  case 1656:
#line 10934 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 3) {
		cb_error_x ((yyvsp[-2]), _("Cannot specify offset and SYSTEM-OFFSET at the same time."));
	}

	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 17363 "parser.c" /* yacc.c:1646  */
    break;

  case 1657:
#line 10948 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 1;
  }
#line 17371 "parser.c" /* yacc.c:1646  */
    break;

  case 1658:
#line 10956 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17377 "parser.c" /* yacc.c:1646  */
    break;

  case 1659:
#line 10957 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17383 "parser.c" /* yacc.c:1646  */
    break;

  case 1660:
#line 10961 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17389 "parser.c" /* yacc.c:1646  */
    break;

  case 1661:
#line 10962 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17395 "parser.c" /* yacc.c:1646  */
    break;

  case 1662:
#line 10966 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17401 "parser.c" /* yacc.c:1646  */
    break;

  case 1663:
#line 10967 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17407 "parser.c" /* yacc.c:1646  */
    break;

  case 1664:
#line 10972 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17415 "parser.c" /* yacc.c:1646  */
    break;

  case 1665:
#line 10976 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17423 "parser.c" /* yacc.c:1646  */
    break;

  case 1666:
#line 10983 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17431 "parser.c" /* yacc.c:1646  */
    break;

  case 1667:
#line 10987 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17439 "parser.c" /* yacc.c:1646  */
    break;

  case 1668:
#line 10994 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17445 "parser.c" /* yacc.c:1646  */
    break;

  case 1669:
#line 10995 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17451 "parser.c" /* yacc.c:1646  */
    break;

  case 1670:
#line 10996 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 17457 "parser.c" /* yacc.c:1646  */
    break;

  case 1671:
#line 11000 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17463 "parser.c" /* yacc.c:1646  */
    break;

  case 1672:
#line 11001 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 17469 "parser.c" /* yacc.c:1646  */
    break;

  case 1673:
#line 11005 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (cb_flag_optional_file); }
#line 17475 "parser.c" /* yacc.c:1646  */
    break;

  case 1674:
#line 11006 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17481 "parser.c" /* yacc.c:1646  */
    break;

  case 1675:
#line 11007 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17487 "parser.c" /* yacc.c:1646  */
    break;

  case 1676:
#line 11012 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 17495 "parser.c" /* yacc.c:1646  */
    break;

  case 1677:
#line 11016 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int (COB_STORE_ROUND);
	}
	cobc_cs_check = 0;
  }
#line 17508 "parser.c" /* yacc.c:1646  */
    break;

  case 1678:
#line 11028 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 17517 "parser.c" /* yacc.c:1646  */
    break;

  case 1679:
#line 11033 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	cobc_cs_check = 0;
  }
#line 17526 "parser.c" /* yacc.c:1646  */
    break;

  case 1680:
#line 11041 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
#line 17534 "parser.c" /* yacc.c:1646  */
    break;

  case 1681:
#line 11045 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
#line 17542 "parser.c" /* yacc.c:1646  */
    break;

  case 1682:
#line 11049 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
#line 17550 "parser.c" /* yacc.c:1646  */
    break;

  case 1683:
#line 11053 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
#line 17558 "parser.c" /* yacc.c:1646  */
    break;

  case 1684:
#line 11057 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
#line 17566 "parser.c" /* yacc.c:1646  */
    break;

  case 1685:
#line 11061 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
#line 17574 "parser.c" /* yacc.c:1646  */
    break;

  case 1686:
#line 11065 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
#line 17582 "parser.c" /* yacc.c:1646  */
    break;

  case 1687:
#line 11069 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
#line 17590 "parser.c" /* yacc.c:1646  */
    break;

  case 1688:
#line 11075 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17596 "parser.c" /* yacc.c:1646  */
    break;

  case 1689:
#line 11076 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17602 "parser.c" /* yacc.c:1646  */
    break;


#line 17606 "parser.c" /* yacc.c:1646  */
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
#line 11247 "parser.y" /* yacc.c:1906  */

