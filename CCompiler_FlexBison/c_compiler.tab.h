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
     IDENTIFIER = 258,
     TYPE_IDENTIFIER = 259,
     FLOAT_CONSTANT = 260,
     INTEGER_CONSTANT = 261,
     CHARACTER_CONSTANT = 262,
     STRING_LITERAL = 263,
     PLUS = 264,
     MINUS = 265,
     PLUSPLUS = 266,
     MINUSMINUS = 267,
     BAR = 268,
     AMP = 269,
     BARBAR = 270,
     AMPAMP = 271,
     ARROW = 272,
     SEMICOLON = 273,
     LSS = 274,
     GTR = 275,
     LEQ = 276,
     REQ = 277,
     GEQ = 278,
     EQL = 279,
     NEQ = 280,
     DOTDOTDOT = 281,
     LP = 282,
     RP = 283,
     LB = 284,
     RB = 285,
     LR = 286,
     RR = 287,
     PERIOD = 288,
     COMMA = 289,
     EXCL = 290,
     STAR = 291,
     SLASH = 292,
     PERCENT = 293,
     ASSIGN = 294,
     COLON = 295,
     AUTO_SYM = 296,
     SIZEOF_SYM = 297,
     UNION_SYM = 298,
     STRUCT_SYM = 299,
     ENUM_SYM = 300,
     STATIC_SYM = 301,
     IF_SYM = 302,
     ELSE_SYM = 303,
     WHILE_SYM = 304,
     DO_SYM = 305,
     FOR_SYM = 306,
     CONTINUE_SYM = 307,
     BREAK_SYM = 308,
     RETURN_SYM = 309,
     SWITCH_SYM = 310,
     CASE_SYM = 311,
     DEFAULT_SYM = 312,
     TYPEDEF_SYM = 313
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

#endif /* !YY_YY_C_COMPILER_TAB_H_INCLUDED  */
