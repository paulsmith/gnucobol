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


/* Substitute the variable and function names.  */
#define yyparse         ppparse
#define yylex           pplex
#define yyerror         pperror
#define yylval          pplval
#define yychar          ppchar
#define yydebug         ppdebug
#define yynerrs         ppnerrs

/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 29 "ppparse.y"

#include "config.h"

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define	COB_IN_PPPARSE	1
#include "cobc.h"

#ifndef	_STDLIB_H
#define	_STDLIB_H 1
#endif

#define pperror(x)	cb_error ("%s", x)

#define COND_EQ		0
#define COND_LT		1U
#define COND_GT		2U
#define COND_LE		3U
#define COND_GE		4U
#define COND_NE		5U

/* Local variables */

static struct cb_define_struct	*ppp_setvar_list;
static unsigned int		current_cmd;

#if	0	/* RXWRXW OPT */
static const char	* const compopts[] = {
	"ibm",
	"ibmcomp",
	"iso2002",
	"mf",
	"mfcomment",
	"sticky-linkage",
	"trunc",
	"noibmcomp",
	"nofold-copy-name",
	"nofoldcopyname",
	"nomfcomment",
	"nosticky-linkage",
	"notrunc"
};

static const char	* const varopts[] = {
	"fold-copy-name",
	"foldcopyname",
	"sourceformat",
	"trunc"
};
#endif

/* Local functions */

static char *
fix_filename (char *name)
{
	/* remove quotation from alphanumeric literals */
	if (name[0] == '\'' || name[0] == '\"') {
		name++;
		name[strlen (name) - 1] = 0;
	}
	return name;
}

static char *
fold_lower (char *name)
{
	unsigned char	*p;

	for (p = (unsigned char *)name; *p; p++) {
		if (isupper (*p)) {
			*p = (cob_u8_t)tolower (*p);
		}
	}
	return name;
}

static char *
fold_upper (char *name)
{
	unsigned char	*p;

	for (p = (unsigned char *)name; *p; p++) {
		if (islower (*p)) {
			*p = (cob_u8_t)toupper (*p);
		}
	}
	return name;
}

static struct cb_replace_list *
ppp_replace_list_add (struct cb_replace_list *list,
		     const struct cb_text_list *old_text,
		     const struct cb_text_list *new_text,
		     const unsigned int lead_or_trail)
{
	struct cb_replace_list *p;

	p = cobc_plex_malloc (sizeof (struct cb_replace_list));
	p->line_num = cb_source_line;
	p->old_text = old_text;
	p->new_text = new_text;
	p->lead_trail = lead_or_trail;
	if (!list) {
		p->last = p;
		return p;
	}
	list->last->next = p;
	list->last = p;
	return list;
}

static unsigned int
ppp_set_value (struct cb_define_struct *p, const char *value)
{
	const char	*s;
	size_t		size;
	unsigned int	dotseen;
	int		sign;
	int		int_part;
	int		dec_part;

	if (!value) {
		p->deftype = PLEX_DEF_NONE;
		p->value = NULL;
		p->sign = 0;
		p->int_part = 0;
		p->dec_part = 0;
		return 0;
	}

	if (*value == '"' || *value == '\'') {
		sign = *value;
		p->value = cobc_plex_strdup (value + 1);
		size = strlen (p->value) - 1;
		if (sign != p->value[size]) {
			p->value = NULL;
			p->deftype = PLEX_DEF_NONE;
			return 1;
		}
		p->value[size] = 0;
		p->deftype = PLEX_DEF_LIT;
		p->sign = 0;
		p->int_part = 0;
		p->dec_part = 0;
		return 0;
	}

	p->value = cobc_plex_strdup (value);
	p->deftype = PLEX_DEF_NUM;
	p->sign = 0;
	p->int_part = 0;
	p->dec_part = 0;

	sign = 0;
	if (*value == '+') {
		value++;
	} else if (*value == '-') {
		value++;
		sign = 1;
	}
	int_part = 0;
	dec_part = 0;
	size = 0;
	dotseen = 0;
	s = value;
	for ( ; *s; ++s, ++size) {
		if (*s == '.') {
			if (dotseen) {
				p->deftype = PLEX_DEF_NONE;
				return 1;
			}
			dotseen = 1;
			continue;
		}
		if (*s > '9' || *s < '0') {
			p->deftype = PLEX_DEF_NONE;
			return 1;
		}
		if (!dotseen) {
			int_part = (int_part * 10) + (*s - '0');
		} else {
			dec_part = (dec_part * 10) + (*s - '0');
		}
	}

	if (!int_part && !dec_part) {
		sign = 0;
	}
	p->sign = sign;
	p->int_part = int_part;
	p->dec_part = dec_part;
	return 0;
}

static unsigned int
ppp_compare_vals (const struct cb_define_struct *p1,
		 const struct cb_define_struct *p2,
		 const unsigned int cond)
{
	int	result;

	if (!p1 || !p2) {
		return 0;
	}
	if (p1->deftype != PLEX_DEF_LIT && p1->deftype != PLEX_DEF_NUM) {
		return 0;
	}
	if (p2->deftype != PLEX_DEF_LIT && p2->deftype != PLEX_DEF_NUM) {
		return 0;
	}
	if (p1->deftype != p2->deftype) {
		cb_warning (_("Directive comparison on different types"));
		return 0;
	}
	if (p1->deftype == PLEX_DEF_LIT) {
		result = strcmp (p1->value, p2->value);
	} else {
		if (p1->sign && !p2->sign) {
			result = -1;
		} else if (!p1->sign && p2->sign) {
			result = 1;
		} else if (p1->int_part < p2->int_part) {
			if (p1->sign) {
				result = 1;
			} else {
				result = -1;
			}
		} else if (p1->int_part > p2->int_part) {
			if (p1->sign) {
				result = -1;
			} else {
				result = 1;
			}
		} else if (p1->dec_part < p2->dec_part) {
			if (p1->sign) {
				result = 1;
			} else {
				result = -1;
			}
		} else if (p1->dec_part > p2->dec_part) {
			if (p1->sign) {
				result = -1;
			} else {
				result = 1;
			}
		} else {
			result = 0;
		}
	}
	switch (cond) {
	case COND_EQ:
		return (result == 0);
	case COND_LT:
		return (result < 0);
	case COND_GT:
		return (result > 0);
	case COND_LE:
		return (result <= 0);
	case COND_GE:
		return (result >= 0);
	case COND_NE:
		return (result != 0);
	default:
		break;
	}
	return 0;
}

static struct cb_define_struct *
ppp_define_add (struct cb_define_struct *list, const char *name,
	       const char *text, const unsigned int override)
{
	struct cb_define_struct	*p;
	struct cb_define_struct	*l;

	/* Check duplicate */
	for (l = list; l; l = l->next) {
		if (!strcasecmp (name, l->name)) {
			if (!override && l->deftype != PLEX_DEF_DEL) {
				cb_error (_("Duplicate define"));
				return NULL;
			}
			if (l->value) {
				l->value = NULL;
			}
			if (ppp_set_value (l, text)) {
				cb_error (_("Invalid constant"));
				return NULL;
			}
			return list;
		}
	}

	p = cobc_plex_malloc (sizeof (struct cb_define_struct));
	p->name = cobc_plex_strdup (name);
	if (ppp_set_value (p, text)) {
		cb_error (_("Invalid constant"));
		return NULL;
	}

	if (!list) {
		p->last = p;
		return p;
	}
	list->last->next = p;
	list->last = p;
	return list;
}

static void
ppp_define_del (const char *name)
{
	struct cb_define_struct	*l;

	for (l = ppp_setvar_list; l; l = l->next) {
		if (!strcmp (name, l->name)) {
			l->deftype = PLEX_DEF_DEL;
			if (l->value) {
				l->value = NULL;
			}
			l->sign = 0;
			l->int_part = 0;
			l->dec_part = 0;
			break;
		}
	}
}

static struct cb_define_struct *
ppp_search_lists (const char *name)
{
	struct cb_define_struct	*p;

	for (p = ppp_setvar_list; p; p = p->next) {
		if (!strcasecmp (name, p->name)) {
			if (p->deftype != PLEX_DEF_DEL) {
				return p;
			}
			break;
		}
	}
	return NULL;
}

static struct cb_text_list *
ppp_list_add (struct cb_text_list *list, const char *text)
{
	struct cb_text_list	*p;

	p = cobc_plex_malloc (sizeof (struct cb_text_list));
	p->text = cobc_plex_strdup (text);
	if (!list) {
		p->last = p;
		return p;
	}
	list->last->next = p;
	list->last = p;
	return list;
}

static unsigned int
ppp_search_comp_vars (const char *name)
{
#undef	CB_PARSE_DEF
#define	CB_PARSE_DEF(x,z)	if (!strcasecmp (name, x)) return (z);
#include "ppparse.def"
#undef	CB_PARSE_DEF
	return 0;
}

static unsigned int
ppp_check_needs_quote (const char *envval)
{
	const char	*s;
	size_t		size;
	unsigned int	dot_seen;
	unsigned int	sign_seen;

	/* Non-quoted value - Check if possible numeric */
	dot_seen = 0;
	sign_seen = 0;
	size = 0;
	s = envval;
	if (*s == '+' || *s == '-') {
		sign_seen = 1;
		size++;
		s++;
	}
	for (; *s; ++s) {
		if (*s == '.') {
			if (dot_seen) {
				break;
			}
			dot_seen = 1;
			size++;
			continue;
		}
		if (*s > '9' || *s < '0') {
			break;
		}
		size++;
	}

	if (*s || size <= (dot_seen + sign_seen)) {
		return 1;
	}
	return 0;
}

/* Global functions */

void
ppparse_clear_vars (const struct cb_define_struct *p)
{
	const struct cb_define_struct	*q;

	ppp_setvar_list = NULL;
	/* Set standard DEFINE's */
	if (cb_perform_osvs) {
		ppp_setvar_list = ppp_define_add (ppp_setvar_list,
						  "PERFORM-TYPE",
						  "'OSVS'", 0);
	} else {
		ppp_setvar_list = ppp_define_add (ppp_setvar_list,
						  "PERFORM-TYPE",
						  "'MF'", 0);
	}
	if (cb_ebcdic_sign) {
		ppp_setvar_list = ppp_define_add (ppp_setvar_list,
						  "SIGN",
						  "'EBCDIC'", 0);
	} else {
		ppp_setvar_list = ppp_define_add (ppp_setvar_list,
						  "SIGN",
						  "'ASCII'", 0);
	}
#ifdef	WORDS_BIGENDIAN
	ppp_setvar_list = ppp_define_add (ppp_setvar_list,
					  "ENDIAN",
					  "'BIG'", 0);
#else
	ppp_setvar_list = ppp_define_add (ppp_setvar_list,
					  "ENDIAN",
					  "'LITTLE'", 0);
#endif
#if	' ' == 0x20
	ppp_setvar_list = ppp_define_add (ppp_setvar_list,
					  "CHARSET",
					  "'ASCII'", 0);
#elif	' ' == 0x40
	ppp_setvar_list = ppp_define_add (ppp_setvar_list,
					  "CHARSET",
					  "'EBCDIC'", 0);
#else
	ppp_setvar_list = ppp_define_add (ppp_setvar_list,
					  "CHARSET",
					  "'UNKNOWN'", 0);
#endif
	/* Set DEFINE's from '-D' option(s) */
	for (q = p; q; q = q->next) {
		ppp_setvar_list = ppp_define_add (ppp_setvar_list,
						  q->name,
						  q->value, 0);
	}
}


/* Line 371 of yacc.c  */
#line 548 "ppparse.c"

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
   by #include "ppparse.h".  */
#ifndef YY_PP_PPPARSE_H_INCLUDED
# define YY_PP_PPPARSE_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int ppdebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOKEN_EOF = 0,
     ALSO = 258,
     BY = 259,
     COPY = 260,
     EQEQ = 261,
     IN = 262,
     LAST = 263,
     LEADING = 264,
     OF = 265,
     OFF = 266,
     PRINTING = 267,
     REPLACE = 268,
     REPLACING = 269,
     SUPPRESS = 270,
     TRAILING = 271,
     DOT = 272,
     GARBAGE = 273,
     PAGE_DIRECTIVE = 274,
     SOURCE_DIRECTIVE = 275,
     FORMAT = 276,
     IS = 277,
     FIXED = 278,
     FREE = 279,
     DEFINE_DIRECTIVE = 280,
     AS = 281,
     PARAMETER = 282,
     OVERRIDE = 283,
     SET_DIRECTIVE = 284,
     CONSTANT = 285,
     SOURCEFORMAT = 286,
     FOLDCOPYNAME = 287,
     NOFOLDCOPYNAME = 288,
     IF_DIRECTIVE = 289,
     ELSE_DIRECTIVE = 290,
     ENDIF_DIRECTIVE = 291,
     ELIF_DIRECTIVE = 292,
     GE = 293,
     LE = 294,
     LT = 295,
     GT = 296,
     EQ = 297,
     NE = 298,
     NOT = 299,
     THAN = 300,
     TO = 301,
     OR = 302,
     EQUAL = 303,
     GREATER = 304,
     LESS = 305,
     SET = 306,
     DEFINED = 307,
     TURN_DIRECTIVE = 308,
     ON = 309,
     CHECKING = 310,
     WITH = 311,
     LOCATION = 312,
     TERMINATOR = 313,
     TOKEN = 314,
     VARIABLE = 315,
     LITERAL = 316
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 502 "ppparse.y"

	char			*s;
	struct cb_text_list	*l;
	struct cb_replace_list	*r;
	struct cb_define_struct	*ds;
	unsigned int		ui;
	int			si;


/* Line 387 of yacc.c  */
#line 663 "ppparse.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE pplval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int ppparse (void *YYPARSE_PARAM);
#else
int ppparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int ppparse (void);
#else
int ppparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_PP_PPPARSE_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 691 "ppparse.c"

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   162

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNRULES -- Number of states.  */
#define YYNSTATES  182

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      62,    63,     2,     2,     2,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    10,    13,    16,    19,    22,
      25,    28,    31,    32,    36,    37,    41,    43,    45,    47,
      50,    55,    58,    62,    64,    68,    69,    72,    76,    78,
      80,    82,    86,    91,    96,   102,   104,   105,   109,   111,
     114,   115,   117,   120,   122,   125,   127,   132,   137,   143,
     149,   151,   153,   155,   157,   159,   165,   168,   174,   177,
     180,   182,   184,   186,   188,   190,   192,   198,   199,   202,
     204,   206,   207,   210,   211,   214,   218,   222,   226,   231,
     236,   242,   246,   248,   251,   255,   257,   261,   264,   268,
     270,   273,   275,   279,   283,   288,   290,   293,   295,   297,
     298,   300,   301,   303,   304,   306,   307,   309,   310,   312,
     313,   315,   316,   318,   319,   321,   322,   324,   325
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      65,     0,    -1,    -1,    65,    66,    -1,    85,    17,    -1,
      90,    17,    -1,    67,    58,    -1,    20,    73,    -1,    25,
      75,    -1,    29,    70,    -1,    53,    77,    -1,    19,    76,
      -1,    -1,    34,    68,    81,    -1,    -1,    37,    69,    81,
      -1,    35,    -1,    36,    -1,    71,    -1,    70,    71,    -1,
      30,    60,   104,    61,    -1,    60,    72,    -1,    31,   104,
      61,    -1,    33,    -1,    32,   104,    61,    -1,    -1,   104,
      61,    -1,   105,   106,    74,    -1,    23,    -1,    24,    -1,
      18,    -1,    60,   104,    11,    -1,    60,   104,    27,   100,
      -1,    60,   104,    61,   100,    -1,    30,    60,   104,    61,
     100,    -1,    82,    -1,    -1,    78,    55,    79,    -1,    60,
      -1,    78,    60,    -1,    -1,    11,    -1,    54,    80,    -1,
      80,    -1,    56,    57,    -1,    57,    -1,    60,   106,   101,
      52,    -1,    60,   106,   101,    51,    -1,    60,   106,   101,
      84,    83,    -1,    61,   106,   101,    84,    83,    -1,    82,
      -1,    60,    -1,    61,    -1,    61,    -1,    60,    -1,    49,
     108,    47,    48,   109,    -1,    49,   108,    -1,    50,   108,
      47,    48,   109,    -1,    50,   108,    -1,    48,   109,    -1,
      38,    -1,    41,    -1,    39,    -1,    40,    -1,    42,    -1,
      43,    -1,     5,    59,    86,    88,    89,    -1,    -1,    87,
      59,    -1,     7,    -1,    10,    -1,    -1,    15,   107,    -1,
      -1,    14,    91,    -1,    13,   102,    91,    -1,    13,   103,
      11,    -1,    92,     4,    93,    -1,    99,    94,     4,    95,
      -1,    91,    92,     4,    93,    -1,    91,    99,    94,     4,
      95,    -1,     6,    96,     6,    -1,    97,    -1,     6,     6,
      -1,     6,    96,     6,    -1,    97,    -1,     6,    59,     6,
      -1,     6,     6,    -1,     6,    59,     6,    -1,    59,    -1,
      96,    59,    -1,    59,    -1,    97,     7,    59,    -1,    97,
      10,    59,    -1,    97,    62,    98,    63,    -1,    59,    -1,
      98,    59,    -1,     9,    -1,    16,    -1,    -1,    28,    -1,
      -1,    44,    -1,    -1,     3,    -1,    -1,     8,    -1,    -1,
      26,    -1,    -1,    21,    -1,    -1,    22,    -1,    -1,    12,
      -1,    -1,    45,    -1,    -1,    46,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   607,   607,   608,   612,   613,   614,   618,   619,   620,
     621,   622,   624,   623,   629,   628,   633,   637,   644,   645,
     649,   659,   660,   684,   688,   716,   719,   726,   730,   734,
     738,   746,   750,   784,   793,   803,   810,   814,   821,   822,
     825,   827,   828,   829,   833,   834,   838,   845,   852,   862,
     877,   884,   885,   889,   902,   916,   920,   924,   928,   932,
     936,   940,   944,   948,   952,   956,   963,   986,   989,   996,
     997,  1000,  1001,  1006,  1009,  1016,  1020,  1027,  1031,  1035,
    1039,  1046,  1050,  1057,  1061,  1065,  1072,  1079,  1083,  1090,
    1094,  1101,  1105,  1112,  1119,  1134,  1138,  1146,  1150,  1160,
    1163,  1171,  1174,  1182,  1185,  1193,  1196,  1202,  1202,  1203,
    1203,  1204,  1204,  1205,  1205,  1206,  1206,  1207,  1207
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined", "ALSO", "BY", "COPY",
  "\"==\"", "IN", "LAST", "LEADING", "OF", "OFF", "PRINTING", "REPLACE",
  "REPLACING", "SUPPRESS", "TRAILING", "\".\"", "\"word\"",
  "PAGE_DIRECTIVE", "SOURCE_DIRECTIVE", "FORMAT", "IS", "FIXED", "FREE",
  "DEFINE_DIRECTIVE", "AS", "PARAMETER", "OVERRIDE", "SET_DIRECTIVE",
  "CONSTANT", "SOURCEFORMAT", "FOLDCOPYNAME", "NOFOLDCOPYNAME",
  "IF_DIRECTIVE", "ELSE_DIRECTIVE", "ENDIF_DIRECTIVE", "ELIF_DIRECTIVE",
  "\">=\"", "\"<=\"", "\"<\"", "\">\"", "\"=\"", "\"<>\"", "NOT", "THAN",
  "TO", "OR", "EQUAL", "GREATER", "LESS", "SET", "DEFINED",
  "TURN_DIRECTIVE", "ON", "CHECKING", "WITH", "LOCATION",
  "\"end of line\"", "\"Identifier or Literal\"", "\"Variable\"",
  "\"Literal\"", "'('", "')'", "$accept", "statement_list", "statement",
  "directive", "$@1", "$@2", "set_directive", "set_choice", "set_options",
  "source_directive", "format_type", "define_directive", "page_directive",
  "turn_directive", "ec_list", "on_or_off", "with_loc", "if_directive",
  "variable_or_literal", "object_id", "condition_clause", "copy_statement",
  "copy_in", "in_or_of", "copy_suppress", "copy_replacing",
  "replace_statement", "replacing_list", "text_src", "text_dst",
  "text_partial_src", "text_partial_dst", "token_list", "identifier",
  "subscripts", "lead_trail", "_override", "_not", "_also", "_last", "_as",
  "_format", "_is", "_printing", "_than", "_to", YY_NULL
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
     315,   316,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    65,    66,    66,    66,    67,    67,    67,
      67,    67,    68,    67,    69,    67,    67,    67,    70,    70,
      71,    71,    71,    71,    71,    72,    72,    73,    74,    74,
      74,    75,    75,    75,    75,    75,    76,    77,    78,    78,
      79,    79,    79,    79,    80,    80,    81,    81,    81,    81,
      81,    82,    82,    83,    83,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    85,    86,    86,    87,
      87,    88,    88,    89,    89,    90,    90,    91,    91,    91,
      91,    92,    92,    93,    93,    93,    94,    95,    95,    96,
      96,    97,    97,    97,    97,    98,    98,    99,    99,   100,
     100,   101,   101,   102,   102,   103,   103,   104,   104,   105,
     105,   106,   106,   107,   107,   108,   108,   109,   109
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     0,     3,     0,     3,     1,     1,     1,     2,
       4,     2,     3,     1,     3,     0,     2,     3,     1,     1,
       1,     3,     4,     4,     5,     1,     0,     3,     1,     2,
       0,     1,     2,     1,     2,     1,     4,     4,     5,     5,
       1,     1,     1,     1,     1,     5,     2,     5,     2,     2,
       1,     1,     1,     1,     1,     1,     5,     0,     2,     1,
       1,     0,     2,     0,     2,     3,     3,     3,     4,     4,
       5,     3,     1,     2,     3,     1,     3,     2,     3,     1,
       2,     1,     3,     3,     4,     1,     2,     1,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,   103,    36,   109,     0,     0,    12,
      16,    17,    14,     0,     3,     0,     0,     0,    67,   104,
     106,     0,     0,    11,   110,     7,   111,     0,   107,    52,
       8,    35,     0,   107,   107,    23,    25,     9,    18,     0,
       0,    38,    10,     0,     6,     4,     5,    69,    70,    71,
       0,     0,    97,    98,    91,    75,     0,    82,     0,    76,
     112,     0,   107,   108,     0,   107,     0,     0,    21,     0,
      19,   111,   111,    13,    50,    15,    40,    39,   113,    73,
      68,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30,    28,    29,    27,     0,    31,    99,    99,     0,
      22,    24,    26,   101,   101,    41,     0,     0,    45,    37,
      43,   114,    72,     0,    66,    81,    90,     0,     0,     0,
      77,    85,    92,    93,    95,     0,     0,     0,    99,   100,
      32,    33,    20,   102,     0,     0,    42,    44,    74,    79,
       0,    83,     0,    96,    94,    86,     0,    78,    34,    60,
      62,    63,    61,    64,    65,   117,   115,   115,    47,    46,
       0,     0,    80,    84,    87,     0,   118,    59,   116,    56,
      58,    54,    53,    48,    49,    88,     0,     0,   117,   117,
      55,    57
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    14,    15,    39,    40,    37,    38,    68,    25,
      94,    30,    23,    42,    43,   109,   110,    73,    74,   173,
     160,    16,    49,    50,    79,   114,    17,    55,    56,   120,
      90,   147,    82,    57,   125,    58,   130,   134,    21,    22,
      64,    26,    61,   112,   169,   167
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -86
static const yytype_int16 yypact[] =
{
     -86,     3,   -86,   -33,   105,   -86,    12,   -12,    46,   -86,
     -86,   -86,   -86,   -18,   -86,    49,    30,    41,    17,   -86,
     -86,     1,    52,   -86,   -86,   -86,    60,     9,     4,   -86,
     -86,   -86,    57,    83,    83,   -86,   -11,    46,   -86,    -9,
      -9,   -86,   -86,   -19,   -86,   -86,   -86,   -86,   -86,   100,
      61,    63,   -86,   -86,   -86,     1,   115,    -5,   117,   -86,
     -86,    11,    83,   -86,    -7,    83,    64,    65,   -86,    66,
     -86,   -13,    -3,   -86,   -86,   -86,    14,   -86,   109,   110,
     -86,   -86,     0,   124,   117,     5,    70,    71,    72,    73,
     129,   -86,   -86,   -86,   -86,    74,   -86,   106,   106,    75,
     -86,   -86,   -86,    93,    93,   -86,    24,    81,   -86,   -86,
     -86,   -86,   -86,     1,   -86,   -86,   -86,     5,   135,     6,
     -86,    -5,   -86,   -86,   -86,    55,   134,   136,   106,   -86,
     -86,   -86,   -86,   -86,    47,    62,   -86,   -86,     1,   -86,
     136,   -86,     7,   -86,   -86,   -86,     8,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,    95,    98,    98,   -86,   -86,
      13,    13,   -86,   -86,   -86,   138,   -86,   -86,   -86,    99,
     101,   -86,   -86,   -86,   -86,   -86,    97,   102,    95,    95,
     -86,   -86
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   112,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,    45,   107,   145,    -8,
      19,   -86,   -86,   -86,   -86,   -86,   -86,    42,   -55,    39,
      76,    18,    38,   -64,   -86,   -54,   -67,    58,   -86,   -86,
      10,   -86,    20,   -86,     2,   -85
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -108
static const yytype_int16 yytable[] =
{
      83,    84,    86,     2,    96,    87,   115,    51,     3,    60,
      52,   119,   141,   163,   164,    63,     4,    53,    27,    60,
      97,   121,     5,     6,    47,   105,    18,    48,     7,    91,
      63,   131,     8,    24,    92,    93,    76,     9,    10,    11,
      12,    77,    41,    66,    67,   -51,    69,    45,    28,    29,
    -107,    71,    72,   121,    98,   -52,    13,    88,    46,   116,
      54,   148,   -51,    59,    54,    81,   116,   165,   106,    62,
     107,   108,    95,   171,   172,    99,    32,    33,    34,    35,
     107,   108,    60,    83,    84,   149,   150,   151,   152,   153,
     154,   103,   104,   180,   181,   155,   156,   157,   158,   159,
     149,   150,   151,   152,   153,   154,    36,    44,    19,    63,
     155,   156,   157,    20,   143,    78,  -105,    65,   144,    85,
      80,   111,    81,    89,   113,   100,   101,   102,   117,   122,
     123,   124,   126,   127,   129,   128,   132,   133,   137,   140,
     145,   166,   146,   168,   175,   178,   176,    75,   177,    70,
     179,   136,    31,   174,   161,   138,   139,   142,   162,   170,
     118,     0,   135
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-86)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      55,    55,     7,     0,    11,    10,     6,     6,     5,    22,
       9,     6,     6,     6,     6,    26,    13,    16,    30,    22,
      27,    85,    19,    20,     7,    11,    59,    10,    25,    18,
      26,    98,    29,    21,    23,    24,    55,    34,    35,    36,
      37,    60,    60,    33,    34,    58,    36,    17,    60,    61,
      61,    60,    61,   117,    61,    58,    53,    62,    17,    59,
      59,   128,    58,    11,    59,    59,    59,    59,    54,    60,
      56,    57,    62,    60,    61,    65,    30,    31,    32,    33,
      56,    57,    22,   138,   138,    38,    39,    40,    41,    42,
      43,    71,    72,   178,   179,    48,    49,    50,    51,    52,
      38,    39,    40,    41,    42,    43,    60,    58,     3,    26,
      48,    49,    50,     8,    59,    15,    11,    60,    63,     4,
      59,    12,    59,     6,    14,    61,    61,    61,     4,    59,
      59,    59,    59,     4,    28,    61,    61,    44,    57,     4,
       6,    46,     6,    45,     6,    48,    47,    40,    47,    37,
      48,   106,     7,   161,   135,   113,   117,   119,   140,   157,
      84,    -1,   104
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    65,     0,     5,    13,    19,    20,    25,    29,    34,
      35,    36,    37,    53,    66,    67,    85,    90,    59,     3,
       8,   102,   103,    76,    21,    73,   105,    30,    60,    61,
      75,    82,    30,    31,    32,    33,    60,    70,    71,    68,
      69,    60,    77,    78,    58,    17,    17,     7,    10,    86,
      87,     6,     9,    16,    59,    91,    92,    97,    99,    11,
      22,   106,    60,    26,   104,    60,   104,   104,    72,   104,
      71,    60,    61,    81,    82,    81,    55,    60,    15,    88,
      59,    59,    96,    92,    99,     4,     7,    10,    62,     6,
      94,    18,    23,    24,    74,   104,    11,    27,    61,   104,
      61,    61,    61,   106,   106,    11,    54,    56,    57,    79,
      80,    12,   107,    14,    89,     6,    59,     4,    94,     6,
      93,    97,    59,    59,    59,    98,    59,     4,    61,    28,
     100,   100,    61,    44,   101,   101,    80,    57,    91,    93,
       4,     6,    96,    59,    63,     6,     6,    95,   100,    38,
      39,    40,    41,    42,    43,    48,    49,    50,    51,    52,
      84,    84,    95,     6,     6,    59,    46,   109,    45,   108,
     108,    60,    61,    83,    83,     6,    47,    47,    48,    48,
     109,   109
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
        case 12:
/* Line 1792 of yacc.c  */
#line 624 "ppparse.y"
    {
	current_cmd = PLEX_ACT_IF;
  }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 629 "ppparse.y"
    {
	current_cmd = PLEX_ACT_ELIF;
  }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 634 "ppparse.y"
    {
	plex_action_directive (PLEX_ACT_ELSE, 0);
  }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 638 "ppparse.y"
    {
	plex_action_directive (PLEX_ACT_END, 0);
  }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 650 "ppparse.y"
    {
	struct cb_define_struct	*p;

	p = ppp_define_add (ppp_setvar_list, (yyvsp[(2) - (4)].s), (yyvsp[(4) - (4)].s), 1);
	if (p) {
		ppp_setvar_list = p;
		fprintf (ppout, "#DEFLIT %s %s\n", (yyvsp[(2) - (4)].s), (yyvsp[(4) - (4)].s));
	}
  }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 661 "ppparse.y"
    {
	char	*p;
	size_t	size;
	int	quote;

	p = (yyvsp[(3) - (3)].s);
	if (*p == '\"' || *p == '\'') {
		quote = *p;
		p++;
		size = strlen (p) - 1;
		if (p[size] != quote) {
			cb_error (_("Invalid %s directive"), "SOURCEFORMAT");
		}
		p[size] = 0;
	}
	if (!strcasecmp (p, "FIXED")) {
		cb_source_format = CB_FORMAT_FIXED;
	} else if (!strcasecmp (p, "FREE")) {
		cb_source_format = CB_FORMAT_FREE;
	} else {
		cb_error (_("Invalid %s directive"), "SOURCEFORMAT");
	}
  }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 685 "ppparse.y"
    {
	cb_fold_copy = 0;
  }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 689 "ppparse.y"
    {
	char	*p;
	size_t	size;
	int	quote;

	p = (yyvsp[(3) - (3)].s);
	if (*p == '\"' || *p == '\'') {
		quote = *p;
		p++;
		size = strlen (p) - 1;
		if (p[size] != quote) {
			cb_error (_("Invalid %s directive"), "FOLD-COPY-NAME");
		}
		p[size] = 0;
	}
	if (!strcasecmp (p, "UPPER")) {
		cb_fold_copy = COB_FOLD_UPPER;
	} else if (!strcasecmp (p, "LOWER")) {
		cb_fold_copy = COB_FOLD_LOWER;
	} else {
		cb_error (_("Invalid %s directive"), "FOLD-COPY-NAME");
	}
  }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 716 "ppparse.y"
    {
	fprintf (ppout, "#OPTION %s\n", (yyvsp[(0) - (0)].s));
  }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 720 "ppparse.y"
    {
	fprintf (ppout, "#OPTION %s %s\n", (yyvsp[(0) - (2)].s), (yyvsp[(2) - (2)].s));
  }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 731 "ppparse.y"
    {
	cb_source_format = CB_FORMAT_FIXED;
  }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 735 "ppparse.y"
    {
	cb_source_format = CB_FORMAT_FREE;
  }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 739 "ppparse.y"
    {
	cb_error (_("Invalid %s directive"), "SOURCE");
	YYERROR;
  }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 747 "ppparse.y"
    {
	ppp_define_del ((yyvsp[(1) - (3)].s));
  }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 751 "ppparse.y"
    {
	char			*s;
	char			*q;
	struct cb_define_struct	*p;
	size_t			size;

	s = getenv ((yyvsp[(1) - (4)].s));
	q = NULL;
	if (s && *s && *s != ' ') {
		if (*s == '"' || *s == '\'') {
			size = strlen (s) - 1U;
			/* Ignore if improperly quoted */
			if (s[0] == s[size]) {
				q = s;
			}
		} else {
			if (ppp_check_needs_quote (s)) {
				/* Alphanumeric literal */
				q = cobc_plex_malloc (strlen (s) + 4U);
				sprintf (q, "'%s'", s);
			} else {
				/* Numeric literal */
				q = s;
			}
		}
	}
	if (q) {
		p = ppp_define_add (ppp_setvar_list, (yyvsp[(1) - (4)].s), q, (yyvsp[(4) - (4)].ui));
		if (p) {
			ppp_setvar_list = p;
		}
	}
  }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 785 "ppparse.y"
    {
	struct cb_define_struct	*p;

	p = ppp_define_add (ppp_setvar_list, (yyvsp[(1) - (4)].s), (yyvsp[(3) - (4)].s), (yyvsp[(4) - (4)].ui));
	if (p) {
		ppp_setvar_list = p;
	}
  }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 794 "ppparse.y"
    {
	struct cb_define_struct	*p;

	p = ppp_define_add (ppp_setvar_list, (yyvsp[(2) - (5)].s), (yyvsp[(4) - (5)].s), (yyvsp[(5) - (5)].ui));
	if (p) {
		ppp_setvar_list = p;
		fprintf (ppout, "#DEFLIT %s %s\n", (yyvsp[(2) - (5)].s), (yyvsp[(4) - (5)].s));
	}
  }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 804 "ppparse.y"
    {
	cb_error (_("Invalid %s directive"), "DEFINE/SET");
  }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 815 "ppparse.y"
    {
	cb_warning (_("%s directive not yet implemented"), "TURN");
  }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 839 "ppparse.y"
    {
	unsigned int		found;

	found = (ppp_search_lists ((yyvsp[(1) - (4)].s)) != NULL);
	plex_action_directive (current_cmd, found ^ (yyvsp[(3) - (4)].ui));
  }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 846 "ppparse.y"
    {
	unsigned int		found;

	found = ppp_search_comp_vars ((yyvsp[(1) - (4)].s));
	plex_action_directive (current_cmd, found ^ (yyvsp[(3) - (4)].ui));
  }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 853 "ppparse.y"
    {
	struct cb_define_struct	*p;
	unsigned int		found;

	found = 0;
	p = ppp_search_lists ((yyvsp[(1) - (5)].s));
	found = ppp_compare_vals (p, (yyvsp[(5) - (5)].ds), (yyvsp[(4) - (5)].ui));
	plex_action_directive (current_cmd, found ^ (yyvsp[(3) - (5)].ui));
  }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 863 "ppparse.y"
    {
	struct cb_define_struct	*p;
	unsigned int		found;

	found = 0;
	p = cobc_plex_malloc (sizeof (struct cb_define_struct));
	p->next = NULL;
	if (ppp_set_value (p, (yyvsp[(1) - (5)].s))) {
		cb_error (_("Invalid constant"));
	} else {
		found = ppp_compare_vals (p, (yyvsp[(5) - (5)].ds), (yyvsp[(4) - (5)].ui));
	}
	plex_action_directive (current_cmd, found ^ (yyvsp[(3) - (5)].ui));
  }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 878 "ppparse.y"
    {
	cb_error (_("Invalid %s directive"), "IF/ELIF");
  }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 890 "ppparse.y"
    {
	struct cb_define_struct	*p;

	p = cobc_plex_malloc (sizeof (struct cb_define_struct));
	p->next = NULL;
	if (ppp_set_value (p, (yyvsp[(1) - (1)].s))) {
		cb_error (_("Invalid constant"));
		(yyval.ds) = NULL;
	} else {
		(yyval.ds) = p;
	}
  }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 903 "ppparse.y"
    {
	struct cb_define_struct	*p;

	p = ppp_search_lists ((yyvsp[(1) - (1)].s));
	if (p != NULL && p->deftype != PLEX_DEF_NONE) {
		(yyval.ds) = p;
	} else {
		(yyval.ds) = NULL;
	}
  }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 917 "ppparse.y"
    {
	(yyval.ui) = COND_GE;
  }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 921 "ppparse.y"
    {
	(yyval.ui) = COND_GT;
  }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 925 "ppparse.y"
    {
	(yyval.ui) = COND_LE;
  }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 929 "ppparse.y"
    {
	(yyval.ui) = COND_LT;
  }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 933 "ppparse.y"
    {
	(yyval.ui) = COND_EQ;
  }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 937 "ppparse.y"
    {
	(yyval.ui) = COND_GE;
  }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 941 "ppparse.y"
    {
	(yyval.ui) = COND_GT;
  }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 945 "ppparse.y"
    {
	(yyval.ui) = COND_LE;
  }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 949 "ppparse.y"
    {
	(yyval.ui) = COND_LT;
  }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 953 "ppparse.y"
    {
	(yyval.ui) = COND_EQ;
  }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 957 "ppparse.y"
    {
	(yyval.ui) = COND_NE;
  }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 964 "ppparse.y"
    {
	fputc ('\n', ppout);
	(yyvsp[(2) - (5)].s) = fix_filename ((yyvsp[(2) - (5)].s));
	if (cb_fold_copy == COB_FOLD_LOWER) {
		(yyvsp[(2) - (5)].s) = fold_lower ((yyvsp[(2) - (5)].s));
	} else if (cb_fold_copy == COB_FOLD_UPPER) {
		(yyvsp[(2) - (5)].s) = fold_upper ((yyvsp[(2) - (5)].s));
	}
	if ((yyvsp[(3) - (5)].s)) {
		(yyvsp[(3) - (5)].s) = fix_filename ((yyvsp[(3) - (5)].s));
		if (cb_fold_copy == COB_FOLD_LOWER) {
			(yyvsp[(3) - (5)].s) = fold_lower ((yyvsp[(3) - (5)].s));
		} else if (cb_fold_copy == COB_FOLD_UPPER) {
			(yyvsp[(3) - (5)].s) = fold_upper ((yyvsp[(3) - (5)].s));
		}
	}
	ppcopy ((yyvsp[(2) - (5)].s), (yyvsp[(3) - (5)].s), (yyvsp[(5) - (5)].r));
  }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 986 "ppparse.y"
    {
	(yyval.s) = NULL;
  }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 990 "ppparse.y"
    {
	(yyval.s) = (yyvsp[(2) - (2)].s);
  }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 1006 "ppparse.y"
    {
	(yyval.r) = NULL;
  }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 1010 "ppparse.y"
    {
	(yyval.r) = (yyvsp[(2) - (2)].r);
  }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 1017 "ppparse.y"
    {
	pp_set_replace_list ((yyvsp[(3) - (3)].r), (yyvsp[(2) - (3)].ui));
  }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 1021 "ppparse.y"
    {
	pp_set_replace_list (NULL, (yyvsp[(2) - (3)].ui));
  }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 1028 "ppparse.y"
    {
	(yyval.r) = ppp_replace_list_add (NULL, (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].l), 0);
  }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 1032 "ppparse.y"
    {
	(yyval.r) = ppp_replace_list_add (NULL, (yyvsp[(2) - (4)].l), (yyvsp[(4) - (4)].l), (yyvsp[(1) - (4)].ui));
  }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 1036 "ppparse.y"
    {
	(yyval.r) = ppp_replace_list_add ((yyvsp[(1) - (4)].r), (yyvsp[(2) - (4)].l), (yyvsp[(4) - (4)].l), 0);
  }
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 1040 "ppparse.y"
    {
	(yyval.r) = ppp_replace_list_add ((yyvsp[(1) - (5)].r), (yyvsp[(3) - (5)].l), (yyvsp[(5) - (5)].l), (yyvsp[(2) - (5)].ui));
  }
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 1047 "ppparse.y"
    {
	(yyval.l) = (yyvsp[(2) - (3)].l);
  }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 1051 "ppparse.y"
    {
	(yyval.l) = (yyvsp[(1) - (1)].l);
  }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 1058 "ppparse.y"
    {
	(yyval.l) = NULL;
  }
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 1062 "ppparse.y"
    {
	(yyval.l) = (yyvsp[(2) - (3)].l);
  }
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 1066 "ppparse.y"
    {
	(yyval.l) = (yyvsp[(1) - (1)].l);
  }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 1073 "ppparse.y"
    {
	(yyval.l) = ppp_list_add (NULL, (yyvsp[(2) - (3)].s));
  }
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 1080 "ppparse.y"
    {
	(yyval.l) = NULL;
  }
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 1084 "ppparse.y"
    {
	(yyval.l) = ppp_list_add (NULL, (yyvsp[(2) - (3)].s));
  }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 1091 "ppparse.y"
    {
	(yyval.l) = ppp_list_add (NULL, (yyvsp[(1) - (1)].s));
  }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 1095 "ppparse.y"
    {
	(yyval.l) = ppp_list_add ((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].s));
  }
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 1102 "ppparse.y"
    {
	(yyval.l) = ppp_list_add (NULL, (yyvsp[(1) - (1)].s));
  }
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 1106 "ppparse.y"
    {
	(yyval.l) = ppp_list_add ((yyvsp[(1) - (3)].l), " ");
	(yyval.l) = ppp_list_add ((yyval.l), "IN");
	(yyval.l) = ppp_list_add ((yyval.l), " ");
	(yyval.l) = ppp_list_add ((yyval.l), (yyvsp[(3) - (3)].s));
  }
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 1113 "ppparse.y"
    {
	(yyval.l) = ppp_list_add ((yyvsp[(1) - (3)].l), " ");
	(yyval.l) = ppp_list_add ((yyval.l), "OF");
	(yyval.l) = ppp_list_add ((yyval.l), " ");
	(yyval.l) = ppp_list_add ((yyval.l), (yyvsp[(3) - (3)].s));
  }
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 1120 "ppparse.y"
    {
	struct cb_text_list *l;

	(yyval.l) = ppp_list_add ((yyvsp[(1) - (4)].l), " ");
	(yyval.l) = ppp_list_add ((yyval.l), "(");
	(yyvsp[(3) - (4)].l) = ppp_list_add ((yyvsp[(3) - (4)].l), ")");
	for (l = (yyval.l); l->next; l = l->next) {
		;
	}
	l->next = (yyvsp[(3) - (4)].l);
  }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 1135 "ppparse.y"
    {
	(yyval.l) = ppp_list_add (NULL, (yyvsp[(1) - (1)].s));
  }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 1139 "ppparse.y"
    {
	(yyval.l) = ppp_list_add ((yyvsp[(1) - (2)].l), " ");
	(yyval.l) = ppp_list_add ((yyval.l), (yyvsp[(2) - (2)].s));
  }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 1147 "ppparse.y"
    {
	(yyval.ui) = CB_REPLACE_LEADING;
  }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 1151 "ppparse.y"
    {
	(yyval.ui) = CB_REPLACE_TRAILING;
  }
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 1160 "ppparse.y"
    {
	(yyval.ui) = 0;
  }
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 1164 "ppparse.y"
    {
	(yyval.ui) = 1U;
  }
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 1171 "ppparse.y"
    {
	(yyval.ui) = 0;
  }
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 1175 "ppparse.y"
    {
	(yyval.ui) = 1U;
  }
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 1182 "ppparse.y"
    {
	(yyval.ui) = 0;
  }
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 1186 "ppparse.y"
    {
	(yyval.ui) = 1U;
  }
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 1193 "ppparse.y"
    {
	(yyval.ui) = 0;
  }
    break;

  case 106:
/* Line 1792 of yacc.c  */
#line 1197 "ppparse.y"
    {
	(yyval.ui) = 1U;
  }
    break;


/* Line 1792 of yacc.c  */
#line 2816 "ppparse.c"
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
#line 1209 "ppparse.y"

