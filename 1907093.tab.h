
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUMBER = 258,
     VARIABLE = 259,
     INTEZAR = 260,
     FLOT = 261,
     STR = 262,
     CHARAC = 263,
     BOOL = 264,
     LONG = 265,
     IF = 266,
     ELSE = 267,
     ELSIF = 268,
     FOO = 269,
     UNTIL = 270,
     COLON = 271,
     WHILE = 272,
     RET = 273,
     FACTORIAL = 274,
     PRIME = 275,
     BRK = 276,
     CONTINUE = 277,
     CONSTANT = 278,
     FUNCT = 279,
     STATIC = 280,
     TRY = 281,
     CATCH = 282,
     SEMI = 283,
     COMMA = 284,
     SINGLE_LINE_COMMENT = 285,
     MULTI_LINE_COMMENT = 286,
     MATH_SINE = 287,
     MIN = 288,
     OPEN_BRACKET = 289,
     CLOSE_BRACKET = 290,
     OPEN_SECOND_BRACKET = 291,
     CLOSE_SECOND_BRACKET = 292,
     OPEN_THIRD_BRACKET = 293,
     CLOSE_THIRD_BRACKET = 294,
     INPUT = 295,
     OUTPUT = 296,
     INPINT = 297,
     INPFLOT = 298,
     LOGIC_OR = 299,
     LOGIC_AND = 300,
     BITWISE_OPERATOR = 301,
     ASSIGNMENT_OPERATOR = 302,
     COMPARISON_OPERATOR = 303,
     INCREMENT_OPERATOR = 304,
     DECREMENT_OPERATOR = 305,
     POWER_OPERATOR = 306,
     ADD_OPRTR = 307,
     MINUS_OPRTR = 308,
     MULTIPLY_OPRTR = 309,
     DIVISION_OPRTR = 310,
     HEADERR = 311,
     FUNC = 312,
     MATH_FLOOR = 313,
     MATH_CEIL = 314,
     MATH_ABS = 315,
     MATH_COSINE = 316,
     MATH_TAN = 317,
     MATH_POW = 318,
     ICONST = 319,
     FCONST = 320,
     CCONST = 321,
     UMPERSAND = 322
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 25 "1907093.y"

        int number;
        char *string;
        float fval;
        double dag;



/* Line 1676 of yacc.c  */
#line 128 "1907093.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


