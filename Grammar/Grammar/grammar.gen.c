
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

/* Substitute the variable and function names.  */
#define yyparse         checker_parse
#define yylex           checker_lex
#define yyerror         checker_error
#define yylval          checker_lval
#define yychar          checker_char
#define yydebug         checker_debug
#define yynerrs         checker_nerrs


/* Copy the first part of user declarations.  */


#include <stdio.h>
#include "globals.h"

/*
    Функция для вывода сообщения об ошибке должна быть определена вручную.
    При этом мы определяем checker_error вместо yyerror,
    так как ранее применили директиву %name-prefix
*/
void checker_error (char const *s) {
    ++g_errorsCount;
    fprintf (stderr, "Error: %s\n", s);
}



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
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
     RETURN = 258,
     LIST = 259,
     OF = 260,
     MAIN = 261,
     FUNCTION = 262,
     READ = 263,
     PRINT = 264,
     DO = 265,
     WHILE = 266,
     FOR = 267,
     ELSE = 268,
     ELIF = 269,
     IF = 270,
     OR = 271,
     AND = 272,
     CONST = 273,
     TYPENAME = 274,
     FLOAT = 275,
     INT = 276,
     CHAR = 277,
     BOOL = 278,
     STRING = 279,
     FUNCTIONID = 280,
     ID = 281,
     LESSOREQUAL = 282,
     GREATEROREQUAL = 283,
     EQUAL = 284,
     NOTEQUAL = 285,
     PLUSANDASSIGN = 286,
     MINUSANDASSIGN = 287,
     MULTIPLYANDASSIGN = 288,
     DIVIDEANDASSIGN = 289,
     MODULOANDASSIGN = 290,
     INCREMENT = 291,
     DECREMENT = 292,
     OPEN = 293,
     CLOSE = 294,
     NEWLINE = 295,
     NOTEQUALS = 296,
     EQUALS = 297
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */



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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   823

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNRULES -- Number of states.  */
#define YYNSTATES  225

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,     2,     2,    50,     2,     2,
      53,    54,    48,    46,    55,    47,     2,    49,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      42,    41,    43,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    56,     2,    57,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    52,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    44,    45
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    14,    20,    25,    28,    30,    39,
      47,    49,    54,    58,    60,    63,    65,    67,    69,    71,
      77,    83,    86,    92,    95,    98,   100,   102,   105,   108,
     112,   120,   123,   125,   133,   138,   146,   156,   170,   182,
     186,   188,   190,   192,   196,   200,   204,   208,   212,   214,
     218,   222,   225,   229,   233,   237,   241,   245,   249,   253,
     257,   261,   265,   269,   273,   276,   279,   284,   286,   288,
     294,   298,   301,   307,   314,   319,   323,   327,   329,   332,
     335,   337,   341,   343,   345,   347,   349,   351,   353,   355,
     357,   359,   361,   363,   365
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,    60,     6,    38,    64,    39,    -1,     6,
      38,    64,    39,    -1,    60,     6,    38,    64,    52,    -1,
       6,    38,    64,    52,    -1,    60,    61,    -1,    61,    -1,
       7,    25,    53,    63,    54,    38,    64,    39,    -1,     7,
      25,    53,    54,    38,    64,    39,    -1,    40,    -1,    25,
      53,    84,    54,    -1,    63,    55,    26,    -1,    26,    -1,
      64,    65,    -1,    65,    -1,    66,    -1,    71,    -1,    72,
      -1,     8,    53,    88,    54,    40,    -1,     9,    53,    88,
      54,    40,    -1,    74,    40,    -1,     3,    53,    88,    54,
      40,    -1,    77,    40,    -1,    78,    40,    -1,    40,    -1,
      67,    -1,    67,    68,    -1,    67,    70,    -1,    67,    68,
      70,    -1,    15,    53,    76,    54,    38,    64,    39,    -1,
      68,    69,    -1,    69,    -1,    14,    53,    76,    54,    38,
      64,    39,    -1,    13,    38,    64,    39,    -1,    11,    53,
      76,    54,    38,    64,    39,    -1,    10,    38,    64,    39,
      11,    53,    76,    54,    40,    -1,    12,    53,    26,    41,
      91,    55,    76,    55,    77,    54,    38,    64,    39,    -1,
      12,    53,    26,    55,    76,    55,    77,    54,    38,    64,
      39,    -1,    53,    74,    54,    -1,    75,    -1,    76,    -1,
      88,    -1,    75,    46,    88,    -1,    75,    47,    88,    -1,
      75,    48,    88,    -1,    75,    49,    88,    -1,    75,    50,
      88,    -1,    88,    -1,    76,    43,    88,    -1,    76,    42,
      88,    -1,    51,    76,    -1,    76,    28,    88,    -1,    76,
      27,    88,    -1,    76,    29,    88,    -1,    76,    30,    88,
      -1,    76,    17,    88,    -1,    76,    16,    88,    -1,    88,
      41,    88,    -1,    88,    31,    88,    -1,    88,    32,    88,
      -1,    88,    34,    88,    -1,    88,    33,    88,    -1,    88,
      35,    88,    -1,    88,    36,    -1,    88,    37,    -1,    18,
      26,    41,    88,    -1,    79,    -1,    82,    -1,    26,    53,
      75,    54,    80,    -1,    81,     5,    19,    -1,     5,    19,
      -1,     5,     4,    53,    75,    54,    -1,    81,     5,     4,
      53,    75,    54,    -1,    26,    53,    75,    54,    -1,    42,
      84,    43,    -1,    84,    55,    88,    -1,    88,    -1,    26,
      86,    -1,    86,    87,    -1,    87,    -1,    56,    75,    57,
      -1,    26,    -1,    89,    -1,    85,    -1,    73,    -1,    83,
      -1,    62,    -1,    24,    -1,    90,    -1,    91,    -1,    22,
      -1,    23,    -1,    21,    -1,    20,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    90,    90,    91,    92,    93,    95,    95,    97,    98,
      99,   101,   104,   104,   106,   106,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   121,   122,   123,   124,
     126,   128,   128,   130,   132,   137,   138,   140,   141,   145,
     147,   148,   150,   151,   152,   153,   154,   155,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   180,   181,   183,
     185,   185,   187,   188,   190,   193,   195,   195,   197,   199,
     199,   201,   204,   204,   204,   204,   204,   204,   206,   206,
     208,   208,   208,   210,   210
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\"Return\"", "\"List\"", "\"Of\"",
  "\"Main\"", "\"Function\"", "\"Read\"", "\"Print\"", "\"Do\"",
  "\"While\"", "\"For\"", "\"Else\"", "\"Elif\"", "\"If\"", "\"Or\"",
  "\"And\"", "\"Const\"", "\"type name\"", "\"Float\"", "\"Int\"",
  "\"Char\"", "\"bool\"", "\"String\"", "\"function id\"", "\"id\"",
  "\"<=\"", "\">=\"", "\"==\"", "\"!=\"", "\"+=\"", "\"-=\"", "\"*=\"",
  "\"/=\"", "\"%=\"", "\"++\"", "\"--\"", "\"{\"", "\"}\"", "\"new line\"",
  "'='", "'<'", "'>'", "NOTEQUALS", "EQUALS", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'!'", "'}'", "'('", "')'", "','", "'['", "']'", "$accept", "s",
  "function_list", "function", "fuction_call", "argument_list",
  "statement_list", "statement", "if_statement", "one_if_statement",
  "elif_statement", "one_elif_statement", "one_else_statement",
  "while_statement", "for_statement", "paren_expr", "expression",
  "arithmetic_expression", "bool_expression", "assignment_expression",
  "init_expression", "list_init_expression", "of_type", "of_list",
  "string_init_expression", "init_list_row", "list_row", "index",
  "multidimensional_index", "one_dimensional_index", "data", "list_type",
  "atomic_type", "numeric_type", 0
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
     295,    61,    60,    62,   296,   297,    43,    45,    42,    47,
      37,    33,   125,    40,    41,    44,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    59,    59,    59,    60,    60,    61,    61,
      61,    62,    63,    63,    64,    64,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    66,    66,    66,    66,
      67,    68,    68,    69,    70,    71,    71,    72,    72,    73,
      74,    74,    75,    75,    75,    75,    75,    75,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    78,    78,    79,
      80,    80,    81,    81,    82,    83,    84,    84,    85,    86,
      86,    87,    88,    88,    88,    88,    88,    88,    89,    89,
      90,    90,    90,    91,    91
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     4,     5,     4,     2,     1,     8,     7,
       1,     4,     3,     1,     2,     1,     1,     1,     1,     5,
       5,     2,     5,     2,     2,     1,     1,     2,     2,     3,
       7,     2,     1,     7,     4,     7,     9,    13,    11,     3,
       1,     1,     1,     3,     3,     3,     3,     3,     1,     3,
       3,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     4,     1,     1,     5,
       3,     2,     5,     6,     4,     3,     3,     1,     2,     2,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    10,     0,     0,     7,     0,     0,     1,
       0,     6,     0,     0,     0,     0,     0,     0,     0,     0,
      94,    93,    91,    92,    88,     0,    82,    25,     0,     0,
       0,    87,     0,    15,    16,    26,    17,    18,    85,     0,
      40,    41,     0,     0,    67,    68,    86,    84,    48,    83,
      89,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,    80,    82,     0,    77,
      51,    48,     0,    48,     3,     5,    14,     0,     0,    27,
      32,    28,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    23,    24,     0,     0,
       0,     0,     0,    64,    65,     0,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    79,    75,     0,    39,     0,     0,    31,    29,
      43,    44,    45,    46,    47,    57,    56,    53,    52,    54,
      55,    50,    49,    59,    60,    62,    61,    63,    58,     0,
       0,     0,     2,     4,     0,     0,     0,     0,     0,     0,
       0,     0,    66,    11,    74,    81,    76,     0,     0,     0,
       0,    12,    22,    19,    20,     0,     0,     0,     0,     0,
       0,    69,     0,    34,     0,     9,     0,     0,     0,     0,
       0,     0,     0,    71,     0,     0,     8,     0,    35,     0,
       0,     0,    30,     0,     0,    70,     0,     0,     0,     0,
       0,     0,    33,    36,     0,     0,    72,     0,     0,     0,
      73,     0,    38,     0,    37
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,    31,   108,    32,    33,    34,    35,
      79,    80,    81,    36,    37,    38,    39,    40,    41,    42,
      43,    44,   181,   182,    45,    46,    68,    47,    65,    66,
      48,    49,    50,    51
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -179
static const yytype_int16 yypact[] =
{
       1,   -24,   -19,  -179,    43,     4,  -179,   691,    -7,  -179,
      10,  -179,    -3,    -1,    17,    16,    23,    36,    48,    80,
    -179,  -179,  -179,  -179,  -179,    57,   -40,  -179,   287,   770,
     770,  -179,   185,  -179,  -179,    71,  -179,  -179,  -179,    74,
     274,   202,    76,    79,  -179,  -179,  -179,  -179,   228,  -179,
    -179,  -179,    -9,   691,   287,   287,   287,   691,   770,    89,
     770,    81,   287,   287,   287,    64,  -179,    64,    -4,  -179,
      50,  -179,    82,   166,  -179,  -179,  -179,    90,    78,    71,
    -179,  -179,  -179,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   287,   287,   287,  -179,  -179,   287,   287,
     287,   287,   287,  -179,  -179,   287,  -179,    91,    32,   231,
      85,    88,    99,   277,   707,    14,   711,   287,    44,   304,
    -179,    77,  -179,  -179,   287,  -179,   691,   770,  -179,  -179,
    -179,  -179,  -179,  -179,  -179,  -179,  -179,  -179,  -179,  -179,
    -179,  -179,  -179,  -179,  -179,  -179,  -179,  -179,  -179,   691,
     105,   132,  -179,  -179,   121,   124,   125,   155,   130,    92,
     770,   133,  -179,  -179,   165,  -179,  -179,   323,   729,   369,
     691,  -179,  -179,  -179,  -179,   119,   691,   118,    66,   691,
      28,  -179,   170,  -179,   140,  -179,   415,   770,   461,   770,
       0,   507,   126,  -179,    30,   691,  -179,   746,  -179,    75,
     128,   114,  -179,   287,   127,  -179,   553,   145,     0,   148,
     321,   287,  -179,  -179,   135,   691,  -179,   350,   152,   599,
    -179,   691,  -179,   645,  -179
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -179,  -179,  -179,   187,  -179,  -179,   -38,   -32,  -179,  -179,
    -179,   120,   122,  -179,  -179,  -179,   168,   -59,   -20,  -178,
    -179,  -179,  -179,  -179,  -179,  -179,   142,  -179,  -179,   137,
     -27,  -179,  -179,    58
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -43
static const yytype_int16 yytable[] =
{
      76,    69,    71,    73,   119,   121,     8,     1,     2,    70,
      10,     2,   200,    63,     7,   109,    64,   106,    19,   113,
      20,    21,    22,    23,    24,    25,    67,   110,   111,   112,
     214,    71,   192,    71,   204,    69,   120,   120,   114,   123,
     116,     3,    28,     9,     3,   107,    52,   193,    53,   205,
      54,   124,    55,    30,    57,   159,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   160,
      56,   143,   144,   145,   146,   147,    58,    76,   148,    92,
      93,    76,    88,    89,    77,    78,   150,   151,   167,    59,
     162,    88,    89,    90,    91,    92,    93,   166,   163,   124,
      71,    60,    90,    91,    92,    93,    61,   168,    94,    95,
      62,   169,    20,    21,    82,   115,    96,    94,    95,    97,
      64,   190,   117,    83,    84,    85,    86,    87,   126,   149,
     208,   127,   186,    71,   165,    76,   125,    76,   188,   154,
     178,   191,   155,   170,   210,    98,    99,   100,   101,   102,
     103,   104,   217,   156,    76,   105,    76,   206,   171,    76,
      71,   172,    71,   201,   173,   174,   175,   197,   176,   199,
     180,   179,   187,   189,    76,   194,   120,   219,   195,   203,
     211,   201,   209,   223,   120,   213,   215,    76,    12,   218,
     221,    76,    11,    13,    14,    15,    16,    17,    72,   128,
      18,   129,   122,    19,   118,    20,    21,    22,    23,    24,
      25,    26,   -42,   -42,   -42,   -42,   -42,   177,    88,    89,
     -42,     0,     0,     0,    74,    27,     0,    28,     0,    90,
      91,    92,    93,     0,    12,     0,    29,    75,    30,    13,
      14,    15,    16,    17,    94,    95,    18,     0,     0,    19,
       0,    20,    21,    22,    23,    24,    25,    26,     0,    98,
      99,   100,   101,   102,   103,   104,     0,     0,   -42,   105,
     152,    27,     0,    28,   -42,   -42,   -42,   -42,   -42,     0,
      12,     0,    29,   153,    30,    13,    14,    15,    16,    17,
       0,     0,    18,     0,     0,    19,     0,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    67,     0,     0,   157,    27,     0,    28,
      83,    84,    85,    86,    87,     0,    12,     0,    29,    28,
      30,    13,    14,    15,    16,    17,     0,     0,    18,     0,
      30,    19,     0,    20,    21,    22,    23,    24,    25,    26,
      83,    84,    85,    86,    87,     0,     0,     0,   164,     0,
       0,     0,   183,    27,     0,    28,     0,    83,    84,    85,
      86,    87,    12,     0,    29,   216,    30,    13,    14,    15,
      16,    17,     0,     0,    18,     0,     0,    19,     0,    20,
      21,    22,    23,    24,    25,    26,    83,    84,    85,    86,
      87,     0,     0,     0,   220,     0,     0,     0,   185,    27,
       0,    28,     0,     0,     0,     0,     0,     0,    12,     0,
      29,     0,    30,    13,    14,    15,    16,    17,     0,     0,
      18,     0,     0,    19,     0,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   196,    27,     0,    28,     0,     0,
       0,     0,     0,     0,    12,     0,    29,     0,    30,    13,
      14,    15,    16,    17,     0,     0,    18,     0,     0,    19,
       0,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     198,    27,     0,    28,     0,     0,     0,     0,     0,     0,
      12,     0,    29,     0,    30,    13,    14,    15,    16,    17,
       0,     0,    18,     0,     0,    19,     0,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   202,    27,     0,    28,
       0,     0,     0,     0,     0,     0,    12,     0,    29,     0,
      30,    13,    14,    15,    16,    17,     0,     0,    18,     0,
       0,    19,     0,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   212,    27,     0,    28,     0,     0,     0,     0,
       0,     0,    12,     0,    29,     0,    30,    13,    14,    15,
      16,    17,     0,     0,    18,     0,     0,    19,     0,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   222,    27,
       0,    28,     0,     0,     0,     0,     0,     0,    12,     0,
      29,     0,    30,    13,    14,    15,    16,    17,     0,     0,
      18,     0,     0,    19,     0,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   224,    27,     0,    28,     0,     0,
       0,     0,     0,     0,    12,     0,    29,     0,    30,    13,
      14,    15,    16,    17,     0,     0,    18,     0,     0,    19,
       0,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,    88,    89,     0,     0,    88,    89,     0,
       0,    27,     0,    28,    90,    91,    92,    93,    90,    91,
      92,    93,    29,     0,    30,    88,    89,     0,     0,    94,
      95,     0,     0,    94,    95,     0,    90,    91,    92,    93,
       0,   158,    88,    89,     0,   161,     0,     0,     0,     0,
       0,    94,    95,    90,    91,    92,    93,     0,     0,     0,
       0,     0,     0,   184,     0,     0,     0,     0,    94,    95,
      20,    21,    22,    23,    24,    25,    67,     0,     0,     0,
     207,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,     0,     0,     0,
       0,    29,     0,    30
};

static const yytype_int16 yycheck[] =
{
      32,    28,    29,    30,    63,    64,    25,     6,     7,    29,
       6,     7,   190,    53,    38,    53,    56,    26,    18,    57,
      20,    21,    22,    23,    24,    25,    26,    54,    55,    56,
     208,    58,     4,    60,     4,    62,    63,    64,    58,    43,
      60,    40,    42,     0,    40,    54,    53,    19,    38,    19,
      53,    55,    53,    53,    38,    41,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    55,
      53,    98,    99,   100,   101,   102,    53,   109,   105,    29,
      30,   113,    16,    17,    13,    14,    54,    55,   126,    53,
     117,    16,    17,    27,    28,    29,    30,   124,    54,    55,
     127,    53,    27,    28,    29,    30,    26,   127,    42,    43,
      53,   149,    20,    21,    40,    26,    40,    42,    43,    40,
      56,    55,    41,    46,    47,    48,    49,    50,    38,    38,
      55,    53,   170,   160,    57,   167,    54,   169,   176,    54,
     160,   179,    54,    38,   203,    31,    32,    33,    34,    35,
      36,    37,   211,    54,   186,    41,   188,   195,    26,   191,
     187,    40,   189,   190,    40,    40,    11,   187,    38,   189,
       5,    38,    53,    55,   206,     5,   203,   215,    38,    53,
      53,   208,    54,   221,   211,    40,    38,   219,     3,    54,
      38,   223,     5,     8,     9,    10,    11,    12,    30,    79,
      15,    79,    65,    18,    62,    20,    21,    22,    23,    24,
      25,    26,    46,    47,    48,    49,    50,   159,    16,    17,
      54,    -1,    -1,    -1,    39,    40,    -1,    42,    -1,    27,
      28,    29,    30,    -1,     3,    -1,    51,    52,    53,     8,
       9,    10,    11,    12,    42,    43,    15,    -1,    -1,    18,
      -1,    20,    21,    22,    23,    24,    25,    26,    -1,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    40,    41,
      39,    40,    -1,    42,    46,    47,    48,    49,    50,    -1,
       3,    -1,    51,    52,    53,     8,     9,    10,    11,    12,
      -1,    -1,    15,    -1,    -1,    18,    -1,    20,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,    26,    -1,    -1,    39,    40,    -1,    42,
      46,    47,    48,    49,    50,    -1,     3,    -1,    51,    42,
      53,     8,     9,    10,    11,    12,    -1,    -1,    15,    -1,
      53,    18,    -1,    20,    21,    22,    23,    24,    25,    26,
      46,    47,    48,    49,    50,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    39,    40,    -1,    42,    -1,    46,    47,    48,
      49,    50,     3,    -1,    51,    54,    53,     8,     9,    10,
      11,    12,    -1,    -1,    15,    -1,    -1,    18,    -1,    20,
      21,    22,    23,    24,    25,    26,    46,    47,    48,    49,
      50,    -1,    -1,    -1,    54,    -1,    -1,    -1,    39,    40,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      51,    -1,    53,     8,     9,    10,    11,    12,    -1,    -1,
      15,    -1,    -1,    18,    -1,    20,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    51,    -1,    53,     8,
       9,    10,    11,    12,    -1,    -1,    15,    -1,    -1,    18,
      -1,    20,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    51,    -1,    53,     8,     9,    10,    11,    12,
      -1,    -1,    15,    -1,    -1,    18,    -1,    20,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    51,    -1,
      53,     8,     9,    10,    11,    12,    -1,    -1,    15,    -1,
      -1,    18,    -1,    20,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    51,    -1,    53,     8,     9,    10,
      11,    12,    -1,    -1,    15,    -1,    -1,    18,    -1,    20,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      51,    -1,    53,     8,     9,    10,    11,    12,    -1,    -1,
      15,    -1,    -1,    18,    -1,    20,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    51,    -1,    53,     8,
       9,    10,    11,    12,    -1,    -1,    15,    -1,    -1,    18,
      -1,    20,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    -1,    16,    17,    -1,    -1,    16,    17,    -1,
      -1,    40,    -1,    42,    27,    28,    29,    30,    27,    28,
      29,    30,    51,    -1,    53,    16,    17,    -1,    -1,    42,
      43,    -1,    -1,    42,    43,    -1,    27,    28,    29,    30,
      -1,    54,    16,    17,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    42,    43,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    42,    43,
      20,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    53
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,    40,    59,    60,    61,    38,    25,     0,
       6,    61,     3,     8,     9,    10,    11,    12,    15,    18,
      20,    21,    22,    23,    24,    25,    26,    40,    42,    51,
      53,    62,    64,    65,    66,    67,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    82,    83,    85,    88,    89,
      90,    91,    53,    38,    53,    53,    53,    38,    53,    53,
      53,    26,    53,    53,    56,    86,    87,    26,    84,    88,
      76,    88,    74,    88,    39,    52,    65,    13,    14,    68,
      69,    70,    40,    46,    47,    48,    49,    50,    16,    17,
      27,    28,    29,    30,    42,    43,    40,    40,    31,    32,
      33,    34,    35,    36,    37,    41,    26,    54,    63,    64,
      88,    88,    88,    64,    76,    26,    76,    41,    84,    75,
      88,    75,    87,    43,    55,    54,    38,    53,    69,    70,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    38,
      54,    55,    39,    52,    54,    54,    54,    39,    54,    41,
      55,    54,    88,    54,    54,    57,    88,    64,    76,    64,
      38,    26,    40,    40,    40,    11,    38,    91,    76,    38,
       5,    80,    81,    39,    54,    39,    64,    53,    64,    55,
      55,    64,     4,    19,     5,    38,    39,    76,    39,    76,
      77,    88,    39,    53,     4,    19,    64,    54,    55,    54,
      75,    53,    39,    40,    77,    38,    54,    75,    54,    64,
      54,    38,    39,    64,    39
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



