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

#ifndef YY_YY_C_COMPILER_TAB_H_INCLUDED
# define YY_YY_C_COMPILER_TAB_H_INCLUDED
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
     T_INT = 258,
     T_FLOAT = 259,
     T_PLUS = 260,
     T_MINUS = 261,
     T_MULTIPLY = 262,
     T_DIVIDE = 263,
     T_LEFT = 264,
     T_RIGHT = 265,
     T_NEWLINE = 266,
     T_QUIT = 267,
     IDENTIFIER = 268,
     TYPE_IDENTIFIER = 269,
     FLOAT_CONSTANT = 270,
     INTEGER_CONSTANT = 271,
     CHARCTER_CONSTANT = 272,
     STRING_LITERAL = 273,
     PLUS = 274,
     MINUS = 275,
     PLUSPLUS = 276,
     MINUSMINUS = 277,
     BAR = 278,
     AMP = 279,
     BARBAR = 280,
     AMPAMP = 281,
     ARROW = 282,
     SEMICOLON = 283,
     LSS = 284,
     GTR = 285,
     LEQ = 286,
     REQ = 287,
     GEQ = 288,
     EQL = 289,
     NEQ = 290,
     DOTDOTDOT = 291,
     LP = 292,
     RP = 293,
     LB = 294,
     RB = 295,
     LR = 296,
     RR = 297,
     PERIOD = 298,
     COMMA = 299,
     EXCL = 300,
     STAR = 301,
     SLASH = 302,
     PERCENT = 303,
     ASSIGN = 304,
     COLON = 305,
     AUTO_SYM = 306,
     SIZEOF_SYM = 307,
     UNION_SYM = 308,
     STRUCT_SYM = 309,
     ENUM_SYM = 310,
     STATIC_SYM = 311,
     IF_SYM = 312,
     ELSE_SYM = 313,
     WHILE_SYM = 314,
     DO_SYM = 315,
     FOR_SYM = 316,
     CONTINUE_SYM = 317,
     BREAK_SYM = 318,
     RETURN_SYM = 319,
     SWITCH_SYM = 320,
     CASE_SYM = 321,
     DEFAULT_SYM = 322,
     TYPEDEF_SYM = 323
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 13 "c_compiler.y"

int ival;
float fval;


/* Line 2058 of yacc.c  */
#line 131 "c_compiler.tab.h"
} YYSTYPE;
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

#endif /* !YY_YY_C_COMPILER_TAB_H_INCLUDED  */
