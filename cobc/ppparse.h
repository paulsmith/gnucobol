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
/* Line 2058 of yacc.c  */
#line 502 "ppparse.y"

	char			*s;
	struct cb_text_list	*l;
	struct cb_replace_list	*r;
	struct cb_define_struct	*ds;
	unsigned int		ui;
	int			si;


/* Line 2058 of yacc.c  */
#line 129 "ppparse.h"
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
