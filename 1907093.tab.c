
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "1907093.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <malloc.h>
    
    #include <math.h>
    int cnt=1,cntt=0,val,track=0;
      typedef struct entry {
    	char *str;
    	int n;
	}storage;
         storage store[1000],sym[1000];
	void insert (storage *p, char *s, int n);
	int cnt2=1; 
	void insert2 (storage *p, char *s, int n);
    extern FILE *yyin;
    extern FILE *yyout;
    extern int Current_Line;
    extern int yylex();
    void yyerror();
  


/* Line 189 of yacc.c  */
#line 98 "1907093.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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

/* Line 214 of yacc.c  */
#line 25 "1907093.y"

        int number;
        char *string;
        float fval;
        double dag;



/* Line 214 of yacc.c  */
#line 210 "1907093.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 222 "1907093.tab.c"

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
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   475

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNRULES -- Number of states.  */
#define YYNSTATES  196

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   324

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    10,    13,    16,    19,    21,    25,
      27,    29,    31,    33,    35,    37,    39,    43,    47,    49,
      51,    54,    57,    60,    62,    67,    71,    73,    75,    79,
      86,    90,    92,    95,    97,    98,   100,   102,   104,   106,
     109,   112,   114,   117,   119,   127,   134,   141,   147,   148,
     151,   152,   164,   170,   173,   177,   181,   185,   189,   193,
     197,   200,   203,   207,   211,   215,   219,   221,   223,   226,
     228,   230,   231,   233,   235,   236,   238,   243,   249,   255,
     261,   266,   268,   270,   271,   275,   277,   279,   280,   283,
     285,   288,   295,   297,   300,   302,   303,   307,   309,   312,
     318,   320,   321,   323,   324,   328
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      71,     0,    -1,    72,    83,    99,    -1,    31,    71,    -1,
      56,    71,    -1,    30,    71,    -1,    72,    73,    -1,    73,
      -1,    74,    75,    28,    -1,     5,    -1,     6,    -1,     7,
      -1,     8,    -1,     9,    -1,    10,    -1,    76,    -1,    75,
      29,    76,    -1,    75,    29,    79,    -1,    79,    -1,     4,
      -1,    77,     4,    -1,     4,    78,    -1,    77,    54,    -1,
      54,    -1,    78,    38,    91,    39,    -1,    38,    91,    39,
      -1,    80,    -1,    81,    -1,     4,    47,     3,    -1,     4,
      78,    47,    36,    82,    37,    -1,    82,    29,    93,    -1,
      93,    -1,    83,    84,    -1,    84,    -1,    -1,    85,    -1,
      88,    -1,    89,    -1,    94,    -1,    22,    28,    -1,    21,
      28,    -1,    95,    -1,    96,    28,    -1,    95,    -1,    11,
      34,    91,    35,    90,    86,    87,    -1,    11,    34,    91,
      35,    90,    87,    -1,    86,    13,    34,    91,    35,    90,
      -1,    13,    34,    91,    35,    90,    -1,    -1,    12,    90,
      -1,    -1,    14,    34,    91,    28,    15,    16,     3,    28,
      91,    35,    90,    -1,    17,    34,    91,    35,    90,    -1,
      84,    28,    -1,    34,    83,    35,    -1,    91,    52,    91,
      -1,    91,    53,    91,    -1,    91,    54,    91,    -1,    91,
      55,    91,    -1,    34,    91,    35,    -1,     4,    49,    -1,
      50,     4,    -1,    91,    44,    91,    -1,    91,    45,    91,
      -1,    91,    48,    91,    -1,    91,    47,    91,    -1,     9,
      -1,    76,    -1,    92,    93,    -1,    96,    -1,     3,    -1,
      -1,    68,    -1,    69,    -1,    -1,     3,    -1,    76,    47,
      91,    28,    -1,    32,    38,     3,    39,    28,    -1,    19,
      34,    91,    35,    28,    -1,    20,    34,    91,    35,    28,
      -1,     4,    34,    97,    35,    -1,    98,    -1,     7,    -1,
      -1,    98,    29,    91,    -1,    91,    -1,   100,    -1,    -1,
     100,   101,    -1,   101,    -1,   102,   107,    -1,    24,   103,
       4,    34,   104,    35,    -1,    74,    -1,    74,    77,    -1,
     105,    -1,    -1,   105,    29,   106,    -1,   106,    -1,    74,
      76,    -1,    34,   108,   109,   110,    35,    -1,    72,    -1,
      -1,    83,    -1,    -1,    18,    91,    28,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    52,    52,    53,    54,    55,    57,    58,    61,    76,
      77,    78,    79,    80,    81,    84,    85,    86,    87,    90,
      95,    96,    99,    99,   100,   101,   104,   104,   105,   107,
     108,   108,   110,   110,   110,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   124,   125,   129,   130,   130,   134,
     135,   138,   145,   147,   148,   153,   156,   158,   160,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   177,   177,   178,   180,   181,   186,   190,   198,
     232,   234,   234,   234,   236,   236,   240,   241,   244,   244,
     246,   248,   250,   250,   252,   253,   255,   255,   256,   259,
     261,   262,   264,   265,   268,   269
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "VARIABLE", "INTEZAR", "FLOT",
  "STR", "CHARAC", "BOOL", "LONG", "IF", "ELSE", "ELSIF", "FOO", "UNTIL",
  "COLON", "WHILE", "RET", "FACTORIAL", "PRIME", "BRK", "CONTINUE",
  "CONSTANT", "FUNCT", "STATIC", "TRY", "CATCH", "SEMI", "COMMA",
  "SINGLE_LINE_COMMENT", "MULTI_LINE_COMMENT", "MATH_SINE", "MIN",
  "OPEN_BRACKET", "CLOSE_BRACKET", "OPEN_SECOND_BRACKET",
  "CLOSE_SECOND_BRACKET", "OPEN_THIRD_BRACKET", "CLOSE_THIRD_BRACKET",
  "INPUT", "OUTPUT", "INPINT", "INPFLOT", "LOGIC_OR", "LOGIC_AND",
  "BITWISE_OPERATOR", "ASSIGNMENT_OPERATOR", "COMPARISON_OPERATOR",
  "INCREMENT_OPERATOR", "DECREMENT_OPERATOR", "POWER_OPERATOR",
  "ADD_OPRTR", "MINUS_OPRTR", "MULTIPLY_OPRTR", "DIVISION_OPRTR",
  "HEADERR", "FUNC", "MATH_FLOOR", "MATH_CEIL", "MATH_ABS", "MATH_COSINE",
  "MATH_TAN", "MATH_POW", "ICONST", "FCONST", "CCONST", "UMPERSAND",
  "\"+\"", "\"-\"", "$accept", "program", "declarations", "declaration",
  "type", "name", "var", "pointer", "array", "init", "var_init",
  "array_init", "values", "statements", "statement", "if_block",
  "else_if_part", "else_part", "for_block", "while_block", "extra",
  "expression", "sign", "constant", "assignment", "built_func",
  "func_call", "Parameters", "Parameterone", "func_kafka", "functionGenz",
  "function", "function_er_matha", "return_type", "func_er_variable",
  "varaiable_gula", "sesh_variable", "function_er_bhitor",
  "bhitore_declare", "bhitore_statement", "Ki_return_korbe", 0
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    71,    71,    71,    71,    72,    72,    73,    74,
      74,    74,    74,    74,    74,    75,    75,    75,    75,    76,
      76,    76,    77,    77,    78,    78,    79,    79,    80,    81,
      82,    82,    83,    83,    83,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    85,    85,    86,    86,    86,    87,
      87,    88,    89,    90,    90,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    92,    92,    92,    93,    94,    95,    95,    95,
      96,    97,    97,    97,    98,    98,    99,    99,   100,   100,
     101,   102,   103,   103,   104,   104,   105,   105,   106,   107,
     108,   108,   109,   109,   110,   110
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     2,     2,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     1,     1,
       2,     2,     2,     1,     4,     3,     1,     1,     3,     6,
       3,     1,     2,     1,     0,     1,     1,     1,     1,     2,
       2,     1,     2,     1,     7,     6,     6,     5,     0,     2,
       0,    11,     5,     2,     3,     3,     3,     3,     3,     3,
       2,     2,     3,     3,     3,     3,     1,     1,     2,     1,
       1,     0,     1,     1,     0,     1,     4,     5,     5,     5,
       4,     1,     1,     0,     3,     1,     1,     0,     2,     1,
       2,     6,     1,     2,     1,     0,     3,     1,     2,     5,
       1,     0,     1,     0,     3,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     9,    10,    11,    12,    13,    14,     0,     0,     0,
       0,    34,     7,     0,     5,     3,     4,     1,    19,     0,
       0,     0,     0,     0,     0,     0,     0,    23,     6,     0,
       0,    87,    33,    35,    36,    37,    38,    41,     0,    19,
       0,    15,    18,    26,    27,    71,    71,    21,    71,    71,
      71,    71,    71,    40,    39,     0,    71,    20,    22,     0,
      32,     2,    86,    89,     0,    42,     0,    21,     8,     0,
      70,    19,    82,    66,    71,     0,    72,    73,    67,    85,
       0,    69,     0,    81,     0,    71,     0,     0,     0,     0,
       0,     0,     0,    92,     0,    88,   101,    90,    28,     0,
      16,    17,    60,     0,    61,    71,    71,    71,    71,    71,
      71,    71,    71,    75,    68,    80,    71,    25,     0,     0,
       0,     0,     0,     0,     0,    76,    93,     0,   100,    34,
       0,    59,    62,    63,    65,    64,    55,    56,    57,    58,
      84,    24,    34,     0,    48,     0,    52,    78,    79,    77,
      95,   102,   105,     0,    31,     0,    53,     0,     0,    50,
      45,     0,     0,     0,    94,    97,    71,     0,     0,    29,
      54,    49,    71,     0,    44,     0,    19,    98,    91,     0,
       0,    99,    30,     0,    71,    71,    96,   104,     0,     0,
       0,    47,     0,     0,    46,    51
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    12,    13,    40,    78,    30,    47,    42,
      43,    44,   153,    31,   143,    33,   159,   160,    34,    35,
     144,    79,    80,   114,    36,    37,    81,    82,    83,    61,
      62,    63,    64,    94,   163,   164,   165,    97,   129,   152,
     167
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -120
static const yytype_int16 yypact[] =
{
      38,  -120,  -120,  -120,  -120,  -120,  -120,    38,    38,    38,
      18,   182,  -120,     3,  -120,  -120,  -120,  -120,    -3,   -15,
       7,    25,    31,    33,    11,    48,    41,  -120,  -120,    42,
       8,   196,  -120,  -120,  -120,  -120,  -120,  -120,    52,   -30,
       5,  -120,  -120,  -120,  -120,     6,   103,    53,   103,   103,
     103,   103,   103,  -120,  -120,    87,   103,  -120,  -120,    91,
    -120,  -120,    69,  -120,    68,  -120,   100,    16,  -120,     3,
    -120,    17,  -120,  -120,   103,   101,  -120,  -120,  -120,   420,
     106,  -120,    79,    75,   396,   103,   286,   111,   300,   314,
     328,    76,   259,    62,   113,  -120,    91,  -120,  -120,    84,
    -120,  -120,  -120,   342,  -120,   103,   103,   103,   103,   103,
     103,   103,   103,  -120,  -120,  -120,   103,  -120,   408,   220,
     108,   220,    99,   102,   105,  -120,    96,   104,    91,   264,
     106,  -120,   420,   420,   420,   420,    81,    81,   131,   131,
     420,  -120,   264,   124,    24,   138,  -120,  -120,  -120,  -120,
      91,   264,   144,     1,  -120,   244,  -120,   220,   133,    40,
    -120,   165,    10,   134,   141,  -120,   103,   139,   106,  -120,
    -120,  -120,   103,   149,  -120,   145,   156,  -120,  -120,    91,
     272,  -120,  -120,   356,   103,   103,  -120,  -120,   220,   370,
     384,  -120,   220,   220,  -120,  -120
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -120,    63,   109,    -6,   -55,  -120,   -11,   115,   158,   126,
    -120,  -120,  -120,  -113,   -10,  -120,  -120,    39,  -120,  -120,
    -115,   -24,  -120,  -119,  -120,  -120,    -8,  -120,  -120,  -120,
    -120,   147,  -120,  -120,  -120,  -120,    27,  -120,  -120,  -120,
    -120
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      29,    32,    41,    38,    93,    28,   146,    39,    46,    70,
      71,   154,    57,    72,   176,    73,   151,    66,    17,    48,
      29,    60,    84,    38,    86,    87,    88,    89,    90,   155,
     168,    45,    92,    68,    69,    46,   157,   158,   169,    53,
      74,    49,   171,     1,     2,     3,     4,     5,     6,   182,
     103,    45,   157,   173,    85,    46,    75,    27,   100,    50,
      27,   118,    58,    99,    27,    51,   102,    52,     7,     8,
      14,    15,    16,   191,    76,    77,    54,   194,   195,    55,
      65,   132,   133,   134,   135,   136,   137,   138,   139,    56,
      91,    85,   140,    59,     9,   162,     1,     2,     3,     4,
       5,     6,    96,    98,   116,   104,    70,    71,    29,   113,
      29,    38,    73,    38,   115,   124,    27,   127,    29,    32,
     130,    38,    28,   145,   162,   105,   106,   147,   107,   108,
     148,    29,    32,   149,    38,   111,   112,    74,   150,   120,
      29,    60,   180,    38,    29,    60,    29,    38,   183,    38,
      58,   177,   156,    75,   161,   105,   106,    27,   107,   108,
     189,   190,   166,   109,   110,   111,   112,   172,   175,   178,
     179,    76,    77,   185,   181,   105,   106,    29,   107,   108,
      38,    29,    29,   184,    38,    38,    18,     1,     2,     3,
       4,     5,     6,    19,    46,   101,    20,    67,   174,    21,
      18,    22,    23,    24,    25,   128,   186,    19,   126,    95,
      20,     0,     0,    21,    26,    22,    23,    24,    25,     0,
      59,     0,     0,     0,    18,     0,     0,     0,    26,     0,
       0,    19,     0,     0,    20,     0,    27,    21,     0,    22,
      23,    24,    25,     0,     0,     0,     0,     0,    18,     0,
      27,     0,    26,     0,   142,    19,     0,     0,    20,     0,
       0,    21,     0,    22,    23,    24,    25,     0,    18,     0,
       0,     0,     0,     0,    27,    19,    26,     0,    20,   170,
       0,    21,     0,    22,    23,    24,    25,   125,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
     187,     0,     0,   105,   106,     0,   107,   108,     0,     0,
       0,   109,   110,   111,   112,     0,   105,   106,    27,   107,
     108,   119,     0,     0,   109,   110,   111,   112,     0,     0,
     105,   106,     0,   107,   108,   121,     0,     0,   109,   110,
     111,   112,     0,     0,   105,   106,     0,   107,   108,   122,
       0,     0,   109,   110,   111,   112,     0,     0,   105,   106,
       0,   107,   108,   123,     0,     0,   109,   110,   111,   112,
       0,     0,   105,   106,     0,   107,   108,   131,     0,     0,
     109,   110,   111,   112,     0,     0,   105,   106,     0,   107,
     108,   188,     0,     0,   109,   110,   111,   112,     0,     0,
     105,   106,     0,   107,   108,   192,     0,     0,   109,   110,
     111,   112,     0,     0,   105,   106,     0,   107,   108,   193,
       0,     0,   109,   110,   111,   112,     0,     0,   105,   106,
       0,   107,   108,     0,     0,   117,   109,   110,   111,   112,
     105,   106,     0,   107,   108,     0,     0,   141,   109,   110,
     111,   112,   105,   106,     0,   107,   108,     0,     0,     0,
     109,   110,   111,   112,   105,   106,     0,   107,   108,     0,
       0,     0,   109,   110,   111,   112
};

static const yytype_int16 yycheck[] =
{
      11,    11,    13,    11,    59,    11,   121,     4,    38,     3,
       4,   130,     4,     7,     4,     9,   129,    47,     0,    34,
      31,    31,    46,    31,    48,    49,    50,    51,    52,   142,
      29,    34,    56,    28,    29,    38,    12,    13,    37,    28,
      34,    34,   157,     5,     6,     7,     8,     9,    10,   168,
      74,    34,    12,    13,    38,    38,    50,    54,    69,    34,
      54,    85,    54,    47,    54,    34,    49,    34,    30,    31,
       7,     8,     9,   188,    68,    69,    28,   192,   193,    38,
      28,   105,   106,   107,   108,   109,   110,   111,   112,    47,
       3,    38,   116,    24,    56,   150,     5,     6,     7,     8,
       9,    10,    34,     3,    29,     4,     3,     4,   119,     3,
     121,   119,     9,   121,    35,    39,    54,     4,   129,   129,
      36,   129,   128,    15,   179,    44,    45,    28,    47,    48,
      28,   142,   142,    28,   142,    54,    55,    34,    34,    28,
     151,   151,   166,   151,   155,   155,   157,   155,   172,   157,
      54,   162,    28,    50,    16,    44,    45,    54,    47,    48,
     184,   185,    18,    52,    53,    54,    55,    34,     3,    35,
      29,    68,    69,    28,    35,    44,    45,   188,    47,    48,
     188,   192,   193,    34,   192,   193,     4,     5,     6,     7,
       8,     9,    10,    11,    38,    69,    14,    39,   159,    17,
       4,    19,    20,    21,    22,    96,   179,    11,    93,    62,
      14,    -1,    -1,    17,    32,    19,    20,    21,    22,    -1,
      24,    -1,    -1,    -1,     4,    -1,    -1,    -1,    32,    -1,
      -1,    11,    -1,    -1,    14,    -1,    54,    17,    -1,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,     4,    -1,
      54,    -1,    32,    -1,    34,    11,    -1,    -1,    14,    -1,
      -1,    17,    -1,    19,    20,    21,    22,    -1,     4,    -1,
      -1,    -1,    -1,    -1,    54,    11,    32,    -1,    14,    35,
      -1,    17,    -1,    19,    20,    21,    22,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    54,    -1,
      28,    -1,    -1,    44,    45,    -1,    47,    48,    -1,    -1,
      -1,    52,    53,    54,    55,    -1,    44,    45,    54,    47,
      48,    35,    -1,    -1,    52,    53,    54,    55,    -1,    -1,
      44,    45,    -1,    47,    48,    35,    -1,    -1,    52,    53,
      54,    55,    -1,    -1,    44,    45,    -1,    47,    48,    35,
      -1,    -1,    52,    53,    54,    55,    -1,    -1,    44,    45,
      -1,    47,    48,    35,    -1,    -1,    52,    53,    54,    55,
      -1,    -1,    44,    45,    -1,    47,    48,    35,    -1,    -1,
      52,    53,    54,    55,    -1,    -1,    44,    45,    -1,    47,
      48,    35,    -1,    -1,    52,    53,    54,    55,    -1,    -1,
      44,    45,    -1,    47,    48,    35,    -1,    -1,    52,    53,
      54,    55,    -1,    -1,    44,    45,    -1,    47,    48,    35,
      -1,    -1,    52,    53,    54,    55,    -1,    -1,    44,    45,
      -1,    47,    48,    -1,    -1,    39,    52,    53,    54,    55,
      44,    45,    -1,    47,    48,    -1,    -1,    39,    52,    53,
      54,    55,    44,    45,    -1,    47,    48,    -1,    -1,    -1,
      52,    53,    54,    55,    44,    45,    -1,    47,    48,    -1,
      -1,    -1,    52,    53,    54,    55
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,     7,     8,     9,    10,    30,    31,    56,
      71,    72,    73,    74,    71,    71,    71,     0,     4,    11,
      14,    17,    19,    20,    21,    22,    32,    54,    73,    76,
      77,    83,    84,    85,    88,    89,    94,    95,    96,     4,
      75,    76,    79,    80,    81,    34,    38,    78,    34,    34,
      34,    34,    34,    28,    28,    38,    47,     4,    54,    24,
      84,    99,   100,   101,   102,    28,    47,    78,    28,    29,
       3,     4,     7,     9,    34,    50,    68,    69,    76,    91,
      92,    96,    97,    98,    91,    38,    91,    91,    91,    91,
      91,     3,    91,    74,   103,   101,    34,   107,     3,    47,
      76,    79,    49,    91,     4,    44,    45,    47,    48,    52,
      53,    54,    55,     3,    93,    35,    29,    39,    91,    35,
      28,    35,    35,    35,    39,    28,    77,     4,    72,   108,
      36,    35,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    39,    34,    84,    90,    15,    90,    28,    28,    28,
      34,    83,   109,    82,    93,    83,    28,    12,    13,    86,
      87,    16,    74,   104,   105,   106,    18,   110,    29,    37,
      35,    90,    34,    13,    87,     3,     4,    76,    35,    29,
      91,    35,    93,    91,    34,    28,   106,    28,    35,    91,
      91,    90,    35,    35,    90,    90
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
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

/* Prevent warnings from -Wmissing-prototypes.  */
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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

/* Line 1455 of yacc.c  */
#line 52 "1907093.y"
    {printf("Compiled success\n");;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 53 "1907093.y"
    { printf("multi line comment\n"); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 54 "1907093.y"
    { printf("headerrr\n"); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 55 "1907093.y"
    { printf("single line comment\n"); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 61 "1907093.y"
    {
                        if(number_for_key((yyvsp[(2) - (3)].string)))
						{
							printf("ERROR!!!%s is already declared\n", (yyvsp[(2) - (3)].string) );
						}
						else
						{
                             printf("Variable of type %s with name %s (one or more) declared\n",(yyvsp[(1) - (3)].string),(yyvsp[(2) - (3)].string));
							insert(&store[cnt],(yyvsp[(2) - (3)].string), cnt);
							cnt++;
							
						}

              ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 76 "1907093.y"
    { (yyval.string) = "integer"; ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 77 "1907093.y"
    { (yyval.string) = "Float"; ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 78 "1907093.y"
    { (yyval.string) = "string"; ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 79 "1907093.y"
    { (yyval.string) = "character"; ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 80 "1907093.y"
    { (yyval.string) = "boolean"; ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 81 "1907093.y"
    { (yyval.string) = "long"; ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 84 "1907093.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 85 "1907093.y"
    { (yyval.string) = (yyvsp[(3) - (3)].string); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 86 "1907093.y"
    { (yyval.string) = (yyvsp[(3) - (3)].string); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 87 "1907093.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 90 "1907093.y"
    {   if(number_for_key((yyvsp[(1) - (1)].string))==0)
						{
							printf("ERROR!!!%s is not  declared before\n", (yyvsp[(1) - (1)].string) );
						}
;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 95 "1907093.y"
    {printf("pointer variable\n");;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 96 "1907093.y"
    {printf("array type\n");;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 100 "1907093.y"
    {printf("array type\n");;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 101 "1907093.y"
    {printf("array type\n");;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 105 "1907093.y"
    {printf("Initialization of %s with value = %d\n",(yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].number));;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 107 "1907093.y"
    {printf("array Initialization\n");;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 119 "1907093.y"
    {printf("built in function\n");;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 124 "1907093.y"
    {printf("If block\n");;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 129 "1907093.y"
    {printf("elsif found\n");;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 130 "1907093.y"
    {printf("elseif found\n");;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 138 "1907093.y"
    {int i;
                                                                                                                    for(i=0;i<(yyvsp[(7) - (11)].number);i++)
						                                                                                               {
						                          	                                                                   printf("For loop found %d\n",i);
						                                                                                                }
                                                                                                                        ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 145 "1907093.y"
    {printf("while loop found\n");;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 153 "1907093.y"
    { (yyval.fval) = (yyvsp[(1) - (3)].fval) + (yyvsp[(3) - (3)].fval);
      printf("%f + %f = %f\n", (yyvsp[(1) - (3)].fval), (yyvsp[(3) - (3)].fval), (yyval.fval)); // Print addition operation
     ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 156 "1907093.y"
    { (yyval.fval) = (yyvsp[(1) - (3)].fval) - (yyvsp[(3) - (3)].fval);
    printf("%f - %f = %f\n", (yyvsp[(1) - (3)].fval), (yyvsp[(3) - (3)].fval), (yyval.fval)); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 158 "1907093.y"
    { (yyval.fval) = (yyvsp[(1) - (3)].fval) * (yyvsp[(3) - (3)].fval);
    printf("%f * %f = %f\n", (yyvsp[(1) - (3)].fval), (yyvsp[(3) - (3)].fval), (yyval.fval)); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 160 "1907093.y"
    { (yyval.fval) = (yyvsp[(1) - (3)].fval) / (yyvsp[(3) - (3)].fval);
    printf("%f / %f = %f\n", (yyvsp[(1) - (3)].fval), (yyvsp[(3) - (3)].fval), (yyval.fval)); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 173 "1907093.y"
    { (yyval.fval) = (yyvsp[(1) - (1)].number); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 186 "1907093.y"
    {
                             double x = (double)(yyvsp[(3) - (5)].number);double ans = sin(((yyvsp[(3) - (5)].number) * 3.1416) / 180.0);
                             printf("%f\n", (float)ans);
                              ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 190 "1907093.y"
    {
                                                          int ans=1 ,i;
						                             for(i=(yyvsp[(3) - (5)].fval);i>0;i--)
						                               {
						                          	   ans=ans*i;
						                              }
						                                printf("factorial of %d is %d\n",(yyvsp[(3) - (5)].fval),ans)
                                                        ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 198 "1907093.y"
    {
                                                         int check(int n)
                                                        {
                                                          if(n==1)
                                                         {
                                                           return 0;
                                                         }
                                                        if(n==2)
                                                        {
                                                             return 1;
                                                         }
                                                        if(n%2==0)
                                                        {
                                                          return 0;
                                                        }
                                                      int m = sqrt(n);
                                                     for(int i=3;i<=m+2;i+=2)
                                                       {
                                                          if(n%i==0)
                                                            {
                                                        return 0;
                                                           }
                                                        }
                                                      return 1;
                                                       }
                                                   int n=(yyvsp[(3) - (5)].fval);
                                                  if(check(n)) 
                                                  {printf("%d is Prime.\n",(yyvsp[(3) - (5)].fval));} 
                                                   else
                                                {printf("%d is not prime.\n",(yyvsp[(3) - (5)].fval));}
                                                       ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 232 "1907093.y"
    {printf("function call found\n");;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 240 "1907093.y"
    {printf("function defined\n");;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 268 "1907093.y"
    {printf("function return\n");;}
    break;



/* Line 1455 of yacc.c  */
#line 2003 "1907093.tab.c"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
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



/* Line 1675 of yacc.c  */
#line 272 "1907093.y"


void insert(storage *p, char *s, int n)
{
  p->str = s;
  p->n = n;
}

int number_for_key(char *key)
{
    int i = 1;
    char *name = store[i].str;
    while (name) {
        if (strcmp(name, key) == 0)
            return store[i].n;
        name = store[++i].str;
    }
    return 0;
}

void yyerror(char *s)
{
	fprintf(stderr, "error: %s\nAt line : %d\n",s,Current_Line);
}

int main(void) {
freopen("input1.txt","r",stdin);
freopen("output1.txt","w",stdout);
yyparse();
}


