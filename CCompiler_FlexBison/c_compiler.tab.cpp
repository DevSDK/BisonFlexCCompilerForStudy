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




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "c_compiler.y"

#include <stdio.h>
#include <stdlib.h>
#include "Types.h"
#include "SupportingFunctions.h"
extern int yylex();
extern int yyparse();
extern int line_no, syntax_err;
extern FILE* yyin;
void yyerror(const char* s);
extern A_NODE* root;

/* Line 371 of yacc.c  */
#line 81 "c_compiler.tab.cpp"

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "c_compiler.tab.h".  */
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

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 205 "c_compiler.tab.cpp"

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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   326

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  134
/* YYNRULES -- Number of states.  */
#define YYNSTATES  207

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   313

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      55,    56,    57,    58
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    15,    20,
      21,    25,    29,    31,    33,    36,    39,    41,    43,    45,
      46,    48,    49,    51,    53,    55,    57,    58,    59,    67,
      68,    69,    76,    79,    81,    83,    85,    88,    92,    94,
      98,   100,   106,   111,   114,   116,   120,   122,   126,   129,
     131,   133,   136,   138,   142,   147,   152,   153,   155,   157,
     161,   163,   167,   170,   173,   174,   176,   178,   180,   183,
     187,   191,   196,   200,   205,   207,   208,   210,   212,   216,
     218,   220,   222,   224,   226,   230,   232,   234,   238,   240,
     244,   246,   248,   250,   252,   256,   260,   262,   266,   270,
     274,   278,   280,   282,   286,   290,   292,   296,   300,   304,
     306,   311,   313,   316,   319,   322,   325,   328,   331,   334,
     337,   342,   344,   349,   354,   358,   362,   365,   368,   370,
     372,   374,   376,   378,   382
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      60,     0,    -1,    61,    -1,    62,    -1,    61,    62,    -1,
      63,    -1,    66,    -1,    -1,    67,    85,    64,    95,    -1,
      -1,    85,    65,    95,    -1,    67,    69,    18,    -1,    71,
      -1,    68,    -1,    71,    67,    -1,    68,    67,    -1,    41,
      -1,    46,    -1,    58,    -1,    -1,    70,    -1,    -1,    70,
      -1,    72,    -1,    82,    -1,     4,    -1,    -1,    -1,    77,
       3,    73,    31,    74,    78,    32,    -1,    -1,    -1,    77,
      75,    31,    76,    78,    32,    -1,    77,     3,    -1,    44,
      -1,    43,    -1,    79,    -1,    78,    79,    -1,    71,    80,
      18,    -1,    81,    -1,    80,    34,    81,    -1,    85,    -1,
      45,     3,    31,    83,    32,    -1,    45,    31,    83,    32,
      -1,    45,     3,    -1,    84,    -1,    83,    34,    84,    -1,
       3,    -1,     3,    39,   100,    -1,    86,    87,    -1,    87,
      -1,    36,    -1,    36,    86,    -1,     3,    -1,    27,    85,
      28,    -1,    87,    29,    98,    30,    -1,    87,    27,    88,
      28,    -1,    -1,    89,    -1,    90,    -1,    90,    34,    26,
      -1,    91,    -1,    90,    34,    91,    -1,    67,    85,    -1,
      67,    92,    -1,    -1,    93,    -1,    94,    -1,    86,    -1,
      86,    94,    -1,    27,    93,    28,    -1,    29,    98,    30,
      -1,    94,    29,    98,    30,    -1,    27,    88,    28,    -1,
      94,    27,    88,    28,    -1,    31,    -1,    -1,    97,    -1,
     102,    -1,    97,    34,   102,    -1,    99,    -1,   100,    -1,
     101,    -1,   102,    -1,   103,    -1,   115,    39,   102,    -1,
     104,    -1,   105,    -1,   104,    15,   105,    -1,   106,    -1,
     105,    16,   106,    -1,   107,    -1,   108,    -1,   109,    -1,
     110,    -1,   109,    24,   110,    -1,   109,    25,   110,    -1,
     111,    -1,   110,    19,   111,    -1,   110,    20,   111,    -1,
     110,    21,   111,    -1,   110,    23,   111,    -1,   112,    -1,
     113,    -1,   112,     9,   113,    -1,   112,    10,   113,    -1,
     114,    -1,   113,    36,   114,    -1,   113,    37,   114,    -1,
     113,    38,   114,    -1,   115,    -1,    27,   118,    28,   114,
      -1,   116,    -1,    11,   115,    -1,    12,   115,    -1,    14,
     114,    -1,    36,   114,    -1,    35,   114,    -1,    10,   114,
      -1,     9,   114,    -1,    42,   115,    -1,    42,    27,   118,
      28,    -1,   117,    -1,   116,    29,   100,    30,    -1,   116,
      27,    96,    28,    -1,   116,    33,     3,    -1,   116,    17,
       3,    -1,   116,    11,    -1,   116,    12,    -1,     3,    -1,
       6,    -1,     5,    -1,     7,    -1,     8,    -1,    27,   100,
      28,    -1,    67,    92,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    28,    28,    32,    33,    40,    41,    44,    44,    46,
      46,    59,    63,    64,    65,    66,    70,    71,    72,    74,
      76,    79,    81,    97,    98,    99,   103,   104,   102,   106,
     106,   106,   108,   112,   113,   116,   117,   120,   124,   125,
     129,   132,   135,   137,   142,   143,   146,   148,   153,   154,
     157,   158,   161,   162,   163,   165,   169,   171,   174,   175,
     179,   181,   185,   187,   190,   192,   195,   196,   197,   200,
     201,   202,   203,   204,   226,   260,   262,   265,   266,   269,
     272,   275,   278,   281,   282,   285,   288,   289,   293,   294,
     297,   300,   303,   306,   307,   308,   311,   312,   313,   314,
     315,   318,   321,   322,   323,   326,   327,   328,   329,   333,
     334,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   349,   350,   351,   352,   353,   354,   355,   358,   359,
     360,   361,   362,   363,   366
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "TYPE_IDENTIFIER",
  "FLOAT_CONSTANT", "INTEGER_CONSTANT", "CHARACTER_CONSTANT",
  "STRING_LITERAL", "PLUS", "MINUS", "PLUSPLUS", "MINUSMINUS", "BAR",
  "AMP", "BARBAR", "AMPAMP", "ARROW", "SEMICOLON", "LSS", "GTR", "LEQ",
  "REQ", "GEQ", "EQL", "NEQ", "DOTDOTDOT", "LP", "RP", "LB", "RB", "LR",
  "RR", "PERIOD", "COMMA", "EXCL", "STAR", "SLASH", "PERCENT", "ASSIGN",
  "COLON", "AUTO_SYM", "SIZEOF_SYM", "UNION_SYM", "STRUCT_SYM", "ENUM_SYM",
  "STATIC_SYM", "IF_SYM", "ELSE_SYM", "WHILE_SYM", "DO_SYM", "FOR_SYM",
  "CONTINUE_SYM", "BREAK_SYM", "RETURN_SYM", "SWITCH_SYM", "CASE_SYM",
  "DEFAULT_SYM", "TYPEDEF_SYM", "$accept", "program", "translation_unit",
  "external_declaration", "function_definition", "@1", "@2", "declaration",
  "declaration_specifiers", "storage_class_specifier",
  "init_declarator_list_opt", "init_declarator_list", "type_specifier",
  "struct_type_specifier", "@3", "@4", "@5", "@6", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "enum_type_specifier",
  "enumerator_list", "enumerator", "declarator", "pointer",
  "direct_declarator", "parameter_type_list_opt", "parameter_type_list",
  "parameter_list", "parameter_declaration", "abstract_declarator_opt",
  "abstract_declarator", "direct_abstract_declarator",
  "compound_statement", "arg_expression_list_opt", "arg_expression_list",
  "constant_expression_opt", "constant_expression", "expression",
  "comma_expression", "assignment_expression", "conditional_expression",
  "logical_or_expression", "logical_and_expression",
  "bitwise_or_expression", "bitwise_xor_expression",
  "bitwise_and_expression", "equality_expression", "relational_expression",
  "shift_expression", "additive_expression", "multiplicative_expression",
  "cast_expression", "unary_expression", "postfix_expression",
  "primary_expression", "type_name", YY_NULL
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
     305,   306,   307,   308,   309,   310,   311,   312,   313
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    61,    61,    62,    62,    64,    63,    65,
      63,    66,    67,    67,    67,    67,    68,    68,    68,    69,
      69,    70,    70,    71,    71,    71,    73,    74,    72,    75,
      76,    72,    72,    77,    77,    78,    78,    79,    80,    80,
      81,    82,    82,    82,    83,    83,    84,    84,    85,    85,
      86,    86,    87,    87,    87,    87,    88,    88,    89,    89,
      90,    90,    91,    91,    92,    92,    93,    93,    93,    94,
      94,    94,    94,    94,    95,    96,    96,    97,    97,    98,
      99,   100,   101,   102,   102,   103,   104,   104,   105,   105,
     106,   107,   108,   109,   109,   109,   110,   110,   110,   110,
     110,   111,   112,   112,   112,   113,   113,   113,   113,   114,
     114,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   116,   116,   116,   116,   116,   116,   116,   117,   117,
     117,   117,   117,   117,   118
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     0,     4,     0,
       3,     3,     1,     1,     2,     2,     1,     1,     1,     0,
       1,     0,     1,     1,     1,     1,     0,     0,     7,     0,
       0,     6,     2,     1,     1,     1,     2,     3,     1,     3,
       1,     5,     4,     2,     1,     3,     1,     3,     2,     1,
       1,     2,     1,     3,     4,     4,     0,     1,     1,     3,
       1,     3,     2,     2,     0,     1,     1,     1,     2,     3,
       3,     4,     3,     4,     1,     0,     1,     1,     3,     1,
       1,     1,     1,     1,     3,     1,     1,     3,     1,     3,
       1,     1,     1,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     1,     3,     3,     1,     3,     3,     3,     1,
       4,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       4,     1,     4,     4,     3,     3,     2,     2,     1,     1,
       1,     1,     1,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    52,    25,     0,    50,    16,    34,    33,     0,    17,
      18,     0,     2,     3,     5,     6,    19,    13,    12,    23,
      29,    24,     9,     0,    49,     0,    51,    43,     0,     1,
       4,     0,    20,     7,    15,    14,    32,     0,     0,    48,
      56,     0,    53,     0,    46,     0,    44,    11,     0,     0,
      30,    74,    10,    64,     0,    57,    58,    60,   128,   130,
     129,   131,   132,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,    80,    81,    82,    83,    85,    86,
      88,    90,    91,    92,    93,    96,   101,   102,   105,   109,
     111,   121,     0,     0,    42,     0,     8,    27,     0,    56,
       0,    62,    67,    63,    65,    66,    55,     0,   118,   109,
     117,     0,   112,   113,   114,    64,     0,     0,   116,   115,
       0,   119,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   126,   127,     0,
      75,     0,     0,    41,    47,    45,     0,     0,     0,    35,
       0,     0,     0,    68,    56,     0,    59,    61,    56,    67,
     134,   133,     0,     0,    87,    89,    94,    95,    97,    98,
      99,   100,   103,   104,   106,   107,   108,    84,   125,     0,
      76,    77,     0,   124,     0,     0,    38,    40,    31,    36,
      72,    69,    70,     0,     0,   110,   120,   123,     0,   122,
      28,    37,     0,    73,    71,    78,    39
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    48,    38,    15,    53,    17,
      31,    32,    18,    19,    49,   146,    37,    98,    20,   148,
     149,   185,   186,    21,    45,    46,    22,    23,    24,   150,
      55,    56,    57,   103,   104,   105,    52,   179,   180,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,   109,    90,    91,   117
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -130
static const yytype_int16 yypact[] =
{
     151,  -130,  -130,    63,    -6,  -130,  -130,  -130,    25,  -130,
    -130,    39,   151,  -130,  -130,  -130,    63,   189,   189,  -130,
      45,  -130,  -130,    28,    36,    40,  -130,    58,    68,  -130,
    -130,    76,  -130,  -130,  -130,  -130,    81,    92,    96,    36,
     189,   234,  -130,    68,    37,    50,  -130,  -130,    96,   107,
    -130,  -130,  -130,    64,    89,  -130,   111,  -130,  -130,  -130,
    -130,  -130,  -130,   234,   234,   246,   246,   234,   125,   234,
     234,   284,   117,  -130,  -130,  -130,  -130,  -130,   138,   149,
    -130,  -130,  -130,     9,    17,  -130,   133,     6,  -130,   134,
     129,  -130,    74,   234,  -130,    68,  -130,  -130,    66,   145,
     234,  -130,    18,  -130,  -130,    86,  -130,   178,  -130,  -130,
    -130,   234,  -130,  -130,  -130,    59,   148,   152,  -130,  -130,
     125,  -130,  -130,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,  -130,  -130,   174,
     234,   234,   176,  -130,  -130,  -130,    66,    63,    14,  -130,
     156,   157,   172,    86,   189,   234,  -130,  -130,   171,    97,
    -130,  -130,   234,   173,   149,  -130,    17,    17,  -130,  -130,
    -130,  -130,     6,     6,  -130,  -130,  -130,  -130,  -130,   177,
     179,  -130,   180,  -130,    60,     7,  -130,  -130,  -130,  -130,
    -130,  -130,  -130,   183,   188,  -130,  -130,  -130,   234,  -130,
    -130,  -130,    63,  -130,  -130,  -130,  -130
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -130,  -130,  -130,   194,  -130,  -130,  -130,  -130,     5,  -130,
    -130,  -130,   -97,  -130,  -130,  -130,  -130,  -130,  -130,    62,
    -124,  -130,    23,  -130,   184,   131,    -3,    -1,   -17,   -36,
    -130,  -130,   113,   116,   -83,   -82,   190,  -130,  -130,   -81,
    -130,   -58,  -130,  -129,  -130,  -130,   105,   126,  -130,  -130,
    -130,    38,    -8,  -130,    19,   -55,   -39,  -130,  -130,   139
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -27
static const yytype_int16 yytable[] =
{
      25,   147,    89,    26,    54,    16,    39,   177,   108,   110,
     116,   181,   114,    33,   118,   119,   151,    16,     2,   152,
     153,     1,    34,    35,   189,   201,   112,   113,    27,    89,
       4,     1,   121,   125,   126,   144,   127,   128,   129,    29,
     130,   202,   133,   134,   135,    99,   188,   100,    36,   147,
     101,   147,   102,   116,    89,     3,    28,     6,     7,     8,
     189,    89,   116,    40,     2,    41,     1,     1,    42,   205,
       2,    44,    89,   115,   194,   151,    93,   153,   174,   175,
     176,    89,    94,   182,    95,    39,   158,   147,   100,    43,
       3,    99,   200,   100,    47,     4,    25,    89,   102,     4,
       4,    89,    89,     6,     7,     8,   143,   195,    95,     6,
       7,     8,   -26,   154,   159,   155,    89,   106,   193,   168,
     169,   170,   171,    50,   158,   115,   100,    51,    58,     2,
      59,    60,    61,    62,    63,    64,    65,    66,    97,    67,
     137,   138,   131,   132,   187,   107,   139,   122,     1,     2,
     172,   173,    68,   123,     1,     2,   140,   159,   141,    89,
      69,    70,   142,   166,   167,   124,     5,    71,     6,     7,
       8,     9,    99,   136,   100,     2,   161,   178,     3,   183,
     162,     4,     2,    10,   190,   191,     5,     4,     6,     7,
       8,     9,     5,     2,     6,     7,     8,     9,   158,   187,
     100,   196,   192,    10,   156,   197,    30,     4,   184,    10,
     199,   203,     5,   198,     6,     7,     8,     9,   204,     5,
     157,     6,     7,     8,     9,   206,   145,    92,   164,    10,
       5,   160,     6,     7,     8,     9,    10,    58,    96,    59,
      60,    61,    62,    63,    64,    65,    66,    10,    67,    58,
     165,    59,    60,    61,    62,    63,    64,    65,    66,   163,
      67,    68,     0,     0,     0,     0,     0,     0,     0,    69,
      70,     0,     0,   111,     0,     0,    71,     0,     0,     0,
       0,    69,    70,     0,     0,     0,     0,    58,    71,    59,
      60,    61,    62,    63,    64,    65,    66,     0,    67,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   120,     0,     0,     0,     0,     0,     0,     0,    69,
      70,     0,     0,     0,     0,     0,    71
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-130)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       3,    98,    41,     4,    40,     0,    23,   136,    63,    64,
      68,   140,    67,    16,    69,    70,    99,    12,     4,   100,
     102,     3,    17,    18,   148,    18,    65,    66,     3,    68,
      36,     3,    71,    24,    25,    93,    19,    20,    21,     0,
      23,    34,    36,    37,    38,    27,    32,    29,     3,   146,
      53,   148,    53,   111,    93,    27,    31,    43,    44,    45,
     184,   100,   120,    27,     4,    29,     3,     3,    28,   198,
       4,     3,   111,    68,   155,   158,    39,   159,   133,   134,
     135,   120,    32,   141,    34,   102,    27,   184,    29,    31,
      27,    27,    32,    29,    18,    36,    99,   136,    99,    36,
      36,   140,   141,    43,    44,    45,    32,   162,    34,    43,
      44,    45,    31,    27,   115,    29,   155,    28,   154,   127,
     128,   129,   130,    31,    27,   120,    29,    31,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    31,    14,
      11,    12,     9,    10,   147,    34,    17,    30,     3,     4,
     131,   132,    27,    15,     3,     4,    27,   158,    29,   198,
      35,    36,    33,   125,   126,    16,    41,    42,    43,    44,
      45,    46,    27,    39,    29,     4,    28,     3,    27,     3,
      28,    36,     4,    58,    28,    28,    41,    36,    43,    44,
      45,    46,    41,     4,    43,    44,    45,    46,    27,   202,
      29,    28,    30,    58,    26,    28,    12,    36,   146,    58,
      30,    28,    41,    34,    43,    44,    45,    46,    30,    41,
     107,    43,    44,    45,    46,   202,    95,    43,   123,    58,
      41,   115,    43,    44,    45,    46,    58,     3,    48,     5,
       6,     7,     8,     9,    10,    11,    12,    58,    14,     3,
     124,     5,     6,     7,     8,     9,    10,    11,    12,   120,
      14,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    -1,    -1,    27,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    35,    36,    -1,    -1,    -1,    -1,     3,    42,     5,
       6,     7,     8,     9,    10,    11,    12,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    -1,    -1,    -1,    -1,    -1,    42
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    27,    36,    41,    43,    44,    45,    46,
      58,    60,    61,    62,    63,    66,    67,    68,    71,    72,
      77,    82,    85,    86,    87,    85,    86,     3,    31,     0,
      62,    69,    70,    85,    67,    67,     3,    75,    65,    87,
      27,    29,    28,    31,     3,    83,    84,    18,    64,    73,
      31,    31,    95,    67,    88,    89,    90,    91,     3,     5,
       6,     7,     8,     9,    10,    11,    12,    14,    27,    35,
      36,    42,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,    83,    39,    32,    34,    95,    31,    76,    27,
      29,    85,    86,    92,    93,    94,    28,    34,   114,   115,
     114,    27,   115,   115,   114,    67,   100,   118,   114,   114,
      27,   115,    30,    15,    16,    24,    25,    19,    20,    21,
      23,     9,    10,    36,    37,    38,    39,    11,    12,    17,
      27,    29,    33,    32,   100,    84,    74,    71,    78,    79,
      88,    93,    98,    94,    27,    29,    26,    91,    27,    86,
      92,    28,    28,   118,   105,   106,   110,   110,   111,   111,
     111,   111,   113,   113,   114,   114,   114,   102,     3,    96,
      97,   102,   100,     3,    78,    80,    81,    85,    32,    79,
      28,    28,    30,    88,    98,   114,    28,    28,    34,    30,
      32,    18,    34,    28,    30,   102,    81
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
        case 2:
/* Line 1792 of yacc.c  */
#line 29 "c_compiler.y"
    { root = makeNode(N_PROGRAM, NIL, (yyvsp[(1) - (1)]), NIL); checkForwaradReference();}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 32 "c_compiler.y"
    {(yyval) = (yyvsp[(1) - (1)]);}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 33 "c_compiler.y"
    {(yyval) = linkDeclaratorList((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 44 "c_compiler.y"
    {(yyval) = setFunctionDeclaratorSpecifier((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]));}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 45 "c_compiler.y"
    {(yyval)=setFunctionDeclaatorBody{(yyvsp[(3) - (4)]),(yyvsp[(4) - (4)])};}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 46 "c_compiler.y"
    {(yyval)=setFunctionDeclaratorSpecifier((yyvsp[(1) - (1)]), makeSpecifier(int_type,0));}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 47 "c_compiler.y"
    {(yyval)= setFunctionDeclaratorBody((yyvsp[(2) - (3)]),(yyvsp[(3) - (3)]));}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 60 "c_compiler.y"
    {(yyval)=setDeclaatorListSpecifier((yyvsp[(2) - (3)]),(yyvsp[(1) - (3)]));}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 65 "c_compiler.y"
    {(yyval) = updateSpecifier ((yyvsp[(2) - (2)]), 0, (yyvsp[(1) - (2)]));}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 67 "c_compiler.y"
    {(yyval)=updateSpecifier((yyvsp[(2) - (2)]),0,(yyvsp[(1) - (2)]));}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 70 "c_compiler.y"
    {(yyval)=S_AUTO;}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 71 "c_compiler.y"
    {(yyval)=S_STATIC;}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 72 "c_compiler.y"
    {(yyval)=S_;}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 76 "c_compiler.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 97 "c_compiler.y"
    {(yyval) = (yyvsp[(1) - (1)]);}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 98 "c_compiler.y"
    {(yyval) = (yyvsp[(1) - (1)]);}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 99 "c_compiler.y"
    {(yyval) = (yyvsp[(1) - (1)]);}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 103 "c_compiler.y"
    {(yyval)=setTypeStructOrEnumIdentifier((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), ID_STRUCT);}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 104 "c_compiler.y"
    {(yyval)= current_id; current_level++;}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 105 "c_compiler.y"
    {checkForwardReference();(yyval) = setTypeField((yyvsp[(3) - (7)]), (yyvsp[(6) - (7)])); current_level--; current_id = (yyvsp[(5) - (7)]);}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 106 "c_compiler.y"
    {(yyval) = makeType((yyvsp[(1) - (1)]));}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 106 "c_compiler.y"
    {(yyval) = current_id; current_level++;}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 107 "c_compiler.y"
    {checkForwardReference();(yyval) = setTypeField((yyvsp[(2) - (6)]), (yyvsp[(2) - (6)])); current_level--; current_id = (yyvsp[(4) - (6)]);}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 109 "c_compiler.y"
    {(yyval)=getTypeOfStructOrEnumRefIdentifier((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), ID_STRUCT);}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 112 "c_compiler.y"
    {(yyval)= T_STRUCT;}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 113 "c_compiler.y"
    {(yyval) = T_UNION;}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 116 "c_compiler.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 117 "c_compiler.y"
    {(yyval)=linkDeclaratorList((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 121 "c_compiler.y"
    {(yyval) = setStructDeclaratorListSpecifier((yyvsp[(2) - (3)]),(yyvsp[(1) - (3)]));}
    break;


/* Line 1792 of yacc.c  */
#line 1816 "c_compiler.tab.cpp"
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
#line 369 "c_compiler.y"

extern char * yytext;

void yyerror(const char* s) {
	syntax_err ++;
	printf("Line %d: %s near %s\n", line_no,s,yytext);
}