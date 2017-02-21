/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
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
     LISTING_DIRECTIVE = 275,
     SOURCE_DIRECTIVE = 276,
     FORMAT = 277,
     IS = 278,
     FIXED = 279,
     FREE = 280,
     VARIABLE = 281,
     CALL_DIRECTIVE = 282,
     COBOL = 283,
     TOK_EXTERN = 284,
     STDCALL = 285,
     STATIC = 286,
     DEFINE_DIRECTIVE = 287,
     AS = 288,
     PARAMETER = 289,
     OVERRIDE = 290,
     SET_DIRECTIVE = 291,
     CONSTANT = 292,
     SOURCEFORMAT = 293,
     FOLDCOPYNAME = 294,
     NOFOLDCOPYNAME = 295,
     IF_DIRECTIVE = 296,
     ELSE_DIRECTIVE = 297,
     ENDIF_DIRECTIVE = 298,
     ELIF_DIRECTIVE = 299,
     GE = 300,
     LE = 301,
     LT = 302,
     GT = 303,
     EQ = 304,
     NE = 305,
     NOT = 306,
     THAN = 307,
     TO = 308,
     OR = 309,
     EQUAL = 310,
     GREATER = 311,
     LESS = 312,
     SET = 313,
     DEFINED = 314,
     TURN_DIRECTIVE = 315,
     ON = 316,
     CHECKING = 317,
     WITH = 318,
     LOCATION = 319,
     TERMINATOR = 320,
     TOKEN = 321,
     VARIABLE_NAME = 322,
     LITERAL = 323
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 509 "ppparse.y"

	char			*s;
	struct cb_text_list	*l;
	struct cb_replace_list	*r;
	struct cb_define_struct	*ds;
	unsigned int		ui;
	int			si;


/* Line 2058 of yacc.c  */
#line 136 "ppparse.h"
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
