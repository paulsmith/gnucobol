/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
    PAGE_DIRECTIVE = 274,
    LISTING_DIRECTIVE = 275,
    SOURCE_DIRECTIVE = 276,
    FORMAT = 277,
    IS = 278,
    FIXED = 279,
    FREE = 280,
    DEFINE_DIRECTIVE = 281,
    AS = 282,
    PARAMETER = 283,
    OVERRIDE = 284,
    SET_DIRECTIVE = 285,
    CONSTANT = 286,
    SOURCEFORMAT = 287,
    FOLDCOPYNAME = 288,
    NOFOLDCOPYNAME = 289,
    IF_DIRECTIVE = 290,
    ELSE_DIRECTIVE = 291,
    ENDIF_DIRECTIVE = 292,
    ELIF_DIRECTIVE = 293,
    GE = 294,
    LE = 295,
    LT = 296,
    GT = 297,
    EQ = 298,
    NE = 299,
    NOT = 300,
    THAN = 301,
    TO = 302,
    OR = 303,
    EQUAL = 304,
    GREATER = 305,
    LESS = 306,
    SET = 307,
    DEFINED = 308,
    TURN_DIRECTIVE = 309,
    ON = 310,
    CHECKING = 311,
    WITH = 312,
    LOCATION = 313,
    TERMINATOR = 314,
    TOKEN = 315,
    VARIABLE = 316,
    LITERAL = 317
  };
#endif
/* Tokens.  */
#define TOKEN_EOF 0
#define ALSO 258
#define BY 259
#define COPY 260
#define EQEQ 261
#define IN 262
#define LAST 263
#define LEADING 264
#define OF 265
#define OFF 266
#define PRINTING 267
#define REPLACE 268
#define REPLACING 269
#define SUPPRESS 270
#define TRAILING 271
#define DOT 272
#define GARBAGE 273
#define PAGE_DIRECTIVE 274
#define LISTING_DIRECTIVE 275
#define SOURCE_DIRECTIVE 276
#define FORMAT 277
#define IS 278
#define FIXED 279
#define FREE 280
#define DEFINE_DIRECTIVE 281
#define AS 282
#define PARAMETER 283
#define OVERRIDE 284
#define SET_DIRECTIVE 285
#define CONSTANT 286
#define SOURCEFORMAT 287
#define FOLDCOPYNAME 288
#define NOFOLDCOPYNAME 289
#define IF_DIRECTIVE 290
#define ELSE_DIRECTIVE 291
#define ENDIF_DIRECTIVE 292
#define ELIF_DIRECTIVE 293
#define GE 294
#define LE 295
#define LT 296
#define GT 297
#define EQ 298
#define NE 299
#define NOT 300
#define THAN 301
#define TO 302
#define OR 303
#define EQUAL 304
#define GREATER 305
#define LESS 306
#define SET 307
#define DEFINED 308
#define TURN_DIRECTIVE 309
#define ON 310
#define CHECKING 311
#define WITH 312
#define LOCATION 313
#define TERMINATOR 314
#define TOKEN 315
#define VARIABLE 316
#define LITERAL 317

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 502 "ppparse.y" /* yacc.c:1909  */

	char			*s;
	struct cb_text_list	*l;
	struct cb_replace_list	*r;
	struct cb_define_struct	*ds;
	unsigned int		ui;
	int			si;

#line 189 "ppparse.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE pplval;

int ppparse (void);

#endif /* !YY_PP_PPPARSE_H_INCLUDED  */
