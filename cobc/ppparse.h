/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_PP_PPPARSE_H_INCLUDED
# define YY_PP_PPPARSE_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int ppdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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
    SOURCE_DIRECTIVE = 274,
    FORMAT = 275,
    IS = 276,
    FIXED = 277,
    FREE = 278,
    DEFINE_DIRECTIVE = 279,
    AS = 280,
    PARAMETER = 281,
    OVERRIDE = 282,
    SET_DIRECTIVE = 283,
    CONSTANT = 284,
    SOURCEFORMAT = 285,
    FOLDCOPYNAME = 286,
    NOFOLDCOPYNAME = 287,
    IF_DIRECTIVE = 288,
    ELSE_DIRECTIVE = 289,
    ENDIF_DIRECTIVE = 290,
    ELIF_DIRECTIVE = 291,
    GE = 292,
    LE = 293,
    LT = 294,
    GT = 295,
    EQ = 296,
    NE = 297,
    NOT = 298,
    THAN = 299,
    TO = 300,
    OR = 301,
    EQUAL = 302,
    GREATER = 303,
    LESS = 304,
    SET = 305,
    DEFINED = 306,
    TURN_DIRECTIVE = 307,
    ON = 308,
    CHECKING = 309,
    WITH = 310,
    LOCATION = 311,
    TERMINATOR = 312,
    TOKEN = 313,
    VARIABLE = 314,
    LITERAL = 315
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 501 "ppparse.y" /* yacc.c:1909  */

	char			*s;
	struct cb_text_list	*l;
	struct cb_replace_list	*r;
	struct cb_define_struct	*ds;
	unsigned int		ui;
	int			si;

#line 125 "ppparse.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE pplval;

int ppparse (void);

#endif /* !YY_PP_PPPARSE_H_INCLUDED  */
