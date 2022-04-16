
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
#line 1 "project.y"

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
extern FILE *yyin,*yyout;
int i,f=0;
typedef struct variable {
			char *str;
	    		int n;
			}array;
array store[1000];
void variable (array *p, char *s, int n);
void valassig (char *s, int n);
int count = 1,cnt = 1,sw=0;
int q=0,prev=0;
float fl;
 

/* Line 189 of yacc.c  */
#line 93 "project.tab.c"

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
     VAR = 258,
     STR = 259,
     NUM = 260,
     MAIN = 261,
     IF = 262,
     ELSE = 263,
     ELIF = 264,
     TO = 265,
     FOR = 266,
     INT = 267,
     DOUBLE = 268,
     FLOAT = 269,
     CHAR = 270,
     DO = 271,
     WHILE = 272,
     HEADER = 273,
     ID = 274,
     VD = 275,
     LN = 276,
     TAN = 277,
     SIN = 278,
     COS = 279,
     UP = 280,
     UM = 281,
     GT = 282,
     GE = 283,
     LT = 284,
     LE = 285,
     MIN = 286,
     PLUS = 287,
     MUL = 288,
     DIV = 289,
     AND = 290,
     OR = 291,
     NOT = 292,
     EQ = 293,
     NQ = 294,
     CASE = 295,
     DEFAULT = 296,
     STRNG = 297,
     SHOW = 298,
     INPUT = 299,
     SWITCH = 300,
     STRNGG = 301,
     PRIME = 302,
     RET = 303,
     FACTORIAL = 304,
     GCD = 305,
     TUT = 306,
     FUNC = 307
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 23 "project.y"

	 int number;
        char *string;



/* Line 214 of yacc.c  */
#line 188 "project.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 200 "project.tab.c"

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   922

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNRULES -- Number of states.  */
#define YYNSTATES  224

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    63,     2,     2,     2,     2,     2,     2,
      61,    62,    57,    55,    64,    56,     2,    58,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    65,    67,
      53,    69,    54,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    68,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    59,     2,    60,    66,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    11,    14,    16,    19,    21,    24,    26,
      28,    30,    32,    34,    36,    38,    40,    42,    44,    46,
      48,    50,    56,    62,    68,    72,    74,    75,    81,    85,
      88,    91,    93,    94,    98,   102,   105,   108,   110,   113,
     115,   118,   119,   125,   130,   131,   135,   137,   140,   147,
     150,   151,   152,   161,   168,   174,   177,   179,   184,   188,
     195,   201,   203,   210,   215,   221,   224,   228,   230,   232,
     236,   240,   244,   248,   252,   256,   260,   263,   266,   270,
     274,   278,   282,   285,   289,   293,   298,   303,   308,   313,
     317,   324,   327,   329,   334,   340,   342,   344,   346,   348,
     352,   356,   358,   362,   366,   370
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      71,     0,    -1,    72,    73,    84,     6,    59,    74,    60,
      -1,    72,    18,    -1,    18,    -1,    73,    82,    -1,    82,
      -1,    74,    75,    -1,    75,    -1,    97,    -1,    82,    -1,
     102,    -1,    91,    -1,    89,    -1,    93,    -1,   107,    -1,
      94,    -1,    76,    -1,    78,    -1,   104,    -1,    81,    -1,
      47,    61,   100,    62,    63,    -1,    49,    61,   100,    62,
      63,    -1,    44,    61,    77,    62,    63,    -1,    77,    64,
       3,    -1,     3,    -1,    -1,    43,    53,    79,    54,    63,
      -1,    79,    77,    80,    -1,    77,    80,    -1,    80,     4,
      -1,     4,    -1,    -1,    48,     5,    63,    -1,    48,     3,
      63,    -1,    51,    83,    -1,    83,    42,    -1,    42,    -1,
      84,    85,    -1,    85,    -1,    86,    99,    -1,    -1,   103,
       3,    61,    87,    62,    -1,   103,     3,    61,    62,    -1,
      -1,    88,    64,    87,    -1,    88,    -1,   103,     3,    -1,
      52,     3,    61,    90,    62,    63,    -1,    90,     3,    -1,
      -1,    -1,    11,     3,    65,   100,    10,   100,    99,    92,
      -1,    17,    61,   100,    62,    16,    99,    -1,    45,    65,
      59,    95,    60,    -1,    95,    96,    -1,    96,    -1,    40,
     100,    66,   101,    -1,    41,    66,   101,    -1,     7,   100,
      59,    97,    60,    98,    -1,     7,   100,    59,    97,    60,
      -1,   100,    -1,     9,   100,    59,    97,    60,    98,    -1,
       8,    59,    97,    60,    -1,     9,   100,    59,    97,    60,
      -1,    75,    67,    -1,    59,    74,    60,    -1,     5,    -1,
       3,    -1,   100,    32,   100,    -1,   100,    31,   100,    -1,
     100,    33,   100,    -1,   100,    34,   100,    -1,   100,    29,
     100,    -1,   100,    27,   100,    -1,    61,   100,    62,    -1,
     100,    25,    -1,   100,    26,    -1,   100,    28,   100,    -1,
     100,    30,   100,    -1,   100,    35,   100,    -1,   100,    36,
     100,    -1,    37,   100,    -1,   100,    38,   100,    -1,   100,
      39,   100,    -1,    23,    61,   100,    62,    -1,    24,    61,
     100,    62,    -1,    22,    61,   100,    62,    -1,    21,    61,
     100,    62,    -1,   100,    68,   100,    -1,    50,    61,   100,
      64,   100,    62,    -1,   101,   102,    -1,   102,    -1,     3,
      69,   100,    63,    -1,     3,    61,     3,    62,    63,    -1,
      12,    -1,    15,    -1,    14,    -1,    13,    -1,   103,   105,
      63,    -1,   105,    64,   106,    -1,   106,    -1,     3,    69,
     100,    -1,   103,   108,    63,    -1,   108,    64,     3,    -1,
       3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    40,    40,    42,    43,    46,    47,    50,    51,    54,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    96,   113,   116,   117,   118,   124,   127,   128,
     131,   132,   133,   137,   138,   140,   142,   143,   147,   148,
     150,   153,   157,   173,   193,   194,   195,   200,   204,   210,
     223,   228,   228,   242,   248,   255,   256,   259,   267,   278,
     290,   296,   300,   309,   313,   323,   324,   330,   331,   343,
     346,   347,   348,   356,   357,   358,   359,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     378,   398,   399,   401,   413,   426,   427,   428,   429,   434,
     437,   438,   441,   457,   459,   476
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VAR", "STR", "NUM", "MAIN", "IF",
  "ELSE", "ELIF", "TO", "FOR", "INT", "DOUBLE", "FLOAT", "CHAR", "DO",
  "WHILE", "HEADER", "ID", "VD", "LN", "TAN", "SIN", "COS", "UP", "UM",
  "GT", "GE", "LT", "LE", "MIN", "PLUS", "MUL", "DIV", "AND", "OR", "NOT",
  "EQ", "NQ", "CASE", "DEFAULT", "STRNG", "SHOW", "INPUT", "SWITCH",
  "STRNGG", "PRIME", "RET", "FACTORIAL", "GCD", "TUT", "FUNC", "'<'",
  "'>'", "'+'", "'-'", "'*'", "'/'", "'{'", "'}'", "'('", "')'", "'!'",
  "','", "':'", "'~'", "';'", "'^'", "'='", "$accept", "program",
  "headers", "comments", "statements", "statement", "in", "varr", "out",
  "vuu", "str", "retn", "comment", "cnt", "functions", "function", "head",
  "param", "parameter", "function_call", "call_param", "for_statement",
  "$@1", "while_statement", "switch_statement", "cases", "case",
  "if_statement", "else_if", "tail", "exp", "assign", "assig", "type",
  "dec", "var1", "v1", "declaration", "VAR1", 0
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
     305,   306,   307,    60,    62,    43,    45,    42,    47,   123,
     125,    40,    41,    33,    44,    58,   126,    59,    94,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    71,    72,    72,    73,    73,    74,    74,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    76,    77,    77,    77,    78,    79,    79,
      80,    80,    80,    81,    81,    82,    83,    83,    84,    84,
      85,    85,    86,    86,    87,    87,    87,    88,    89,    90,
      90,    92,    91,    93,    94,    95,    95,    96,    96,    97,
      97,    97,    98,    98,    98,    99,    99,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   101,   101,   102,   102,   103,   103,   103,   103,   104,
     105,   105,   106,   107,   108,   108
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     7,     2,     1,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     5,     5,     3,     1,     0,     5,     3,     2,
       2,     1,     0,     3,     3,     2,     2,     1,     2,     1,
       2,     0,     5,     4,     0,     3,     1,     2,     6,     2,
       0,     0,     8,     6,     5,     2,     1,     4,     3,     6,
       5,     1,     6,     4,     5,     2,     3,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     3,     3,
       3,     3,     2,     3,     3,     4,     4,     4,     4,     3,
       6,     2,     1,     4,     5,     1,     1,     1,     1,     3,
       3,     1,     3,     3,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,     0,     1,     3,     0,    41,     6,    37,
      35,    95,    98,    97,    96,     5,     0,    39,     0,     0,
      36,     0,    38,    68,    67,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    17,    18,    20,    10,    13,    12,
      14,    16,     9,    40,    61,    11,     0,    19,    15,     0,
       0,     0,     0,    68,     0,     0,     0,     0,     0,     0,
       0,    82,    26,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     0,    65,    76,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     105,     0,   101,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,    32,    26,     0,     0,
       0,    34,    33,     0,     0,    50,    66,     7,    75,    74,
      78,    73,    79,    70,    69,    71,    72,    80,    81,    83,
      84,    89,     0,    99,     0,   103,     0,    43,     0,    46,
       0,     2,     0,    93,     0,     0,     0,    88,    87,    85,
      86,    31,     0,    29,     0,    32,     0,     0,     0,     0,
      56,     0,     0,     0,     0,   102,     0,   100,   104,    42,
      44,    47,    94,    60,     0,     0,    24,    30,    27,    28,
      23,     0,     0,    54,    55,    21,    22,     0,    49,     0,
      45,     0,     0,    59,     0,    53,     0,     0,    58,    92,
      90,    48,     0,     0,    51,    57,    91,     0,     0,    52,
      63,     0,    64,    62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     7,    81,    43,    44,   116,    45,   117,
     163,    46,    47,    10,    16,    17,    18,   148,   149,    48,
     174,    49,   219,    50,    51,   169,   170,    52,   203,    53,
      54,   208,    55,    56,    57,   101,   102,    58,   103
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -180
static const yytype_int16 yypact[] =
{
      28,  -180,    49,   -13,  -180,  -180,   -27,     7,  -180,  -180,
      14,  -180,  -180,  -180,  -180,  -180,   132,  -180,    78,    76,
    -180,    29,  -180,   -55,  -180,   404,    91,    42,    43,    44,
      47,    48,   404,    57,    50,    51,    52,    54,    53,    58,
     104,   319,   404,    64,  -180,  -180,  -180,  -180,  -180,  -180,
    -180,  -180,  -180,  -180,   854,  -180,   115,  -180,  -180,    59,
     319,   121,   404,  -180,   441,    67,   404,   404,   404,   404,
     404,   854,   130,   130,    75,   404,    72,    73,   404,   404,
      79,   217,  -180,   456,  -180,  -180,  -180,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
      74,   -24,  -180,    -3,    20,   268,    87,   500,   399,   404,
     515,   559,   574,   618,   633,  -180,    12,     1,    16,    46,
     677,  -180,  -180,   692,   736,  -180,  -180,  -180,  -180,   854,
     854,   854,   854,   854,   854,   854,   854,   854,   854,   854,
     854,   854,   404,  -180,   138,  -180,   147,  -180,    89,    90,
     149,  -180,    92,  -180,    93,   362,   140,  -180,  -180,  -180,
    -180,  -180,   154,   156,    95,    12,    99,   404,    98,   -32,
    -180,   103,   105,   404,    15,   854,    74,  -180,  -180,  -180,
      11,  -180,  -180,    88,   404,    78,  -180,  -180,  -180,   156,
    -180,   751,   164,  -180,  -180,  -180,  -180,   795,  -180,   113,
    -180,   119,   404,  -180,   158,  -180,   164,   -55,   164,  -180,
    -180,  -180,   399,   810,  -180,   164,  -180,   139,   399,  -180,
    -180,   144,    88,  -180
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -180,  -180,  -180,  -180,   151,   -30,  -180,   -70,  -180,  -180,
      33,  -180,    45,  -180,  -180,   184,  -180,    32,  -180,  -180,
    -180,  -180,  -180,  -180,  -180,  -180,    56,  -106,    -9,  -173,
     -25,     8,  -179,    -6,  -180,  -180,    71,  -180,  -180
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      64,    19,   154,   118,   115,     5,    61,    71,   167,   168,
      19,    82,   205,   209,    62,     9,   161,    83,   198,    11,
      12,    13,    14,    11,    12,    13,    14,   209,   193,   216,
      82,   214,    11,    12,    13,    14,   216,   107,     6,   143,
     144,   110,   111,   112,   113,   114,     1,   165,     8,     4,
     120,   127,    15,   123,   124,   164,    20,    76,     6,    77,
     145,   146,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   127,   162,   199,   166,    59,
     162,    23,   147,    24,   155,    25,   167,   168,    60,    26,
      11,    12,    13,    14,    65,    27,   201,   202,   150,    28,
      29,    30,    31,    66,    67,    68,   217,    80,    69,    70,
      72,    73,   221,    75,    78,    32,    74,   175,   100,    79,
     104,    33,    34,    35,   106,    36,    37,    38,    39,     6,
      40,    84,   109,   115,   119,   121,   122,    41,    21,    42,
     125,   176,   191,   142,    11,    12,    13,    14,   197,   152,
     178,   179,   181,   183,   180,   182,   185,   186,   188,   204,
     187,    23,   190,    24,   192,    25,   195,   207,   196,    26,
      11,    12,    13,    14,   150,    27,   211,   213,   212,    28,
      29,    30,    31,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    32,    97,    98,   189,   220,
      22,    33,    34,    35,   222,    36,    37,    38,    39,     6,
      40,   105,   200,   223,   215,   177,     0,    41,     0,    42,
      23,     0,    24,     0,    25,   194,    99,     0,    26,    11,
      12,    13,    14,     0,    27,     0,     0,     0,    28,    29,
      30,    31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,     0,     0,     0,     0,     0,
      33,    34,    35,     0,    36,    37,    38,    39,     6,    40,
       0,    23,     0,    24,     0,    25,     0,   126,    42,    26,
      11,    12,    13,    14,     0,    27,     0,     0,     0,    28,
      29,    30,    31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,     0,     0,     0,     0,
       0,    33,    34,    35,     0,    36,    37,    38,    39,     6,
      40,     0,    23,     0,    24,     0,    25,     0,   151,    42,
      26,    11,    12,    13,    14,     0,    27,     0,     0,     0,
      28,    29,    30,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,     0,     0,     0,
       0,     0,    33,    34,    35,     0,    36,    37,    38,    39,
       6,    40,   184,     0,     0,     0,     0,     0,     0,     0,
      42,     0,     0,     0,     0,     0,     0,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,     0,
      97,    98,    63,     0,    24,     0,    25,    63,     0,    24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,    29,    30,    31,     0,    28,    29,    30,    31,     0,
      99,     0,     0,     0,     0,     0,    32,     0,     0,     0,
       0,    32,     0,     0,     0,     0,     0,     0,     0,    39,
       0,     0,     0,     0,    39,     0,     0,     0,     0,     0,
      42,     0,     0,     0,     0,    42,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,     0,    97,
      98,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,     0,    97,    98,     0,     0,     0,     0,
     108,     0,     0,     0,     0,     0,     0,     0,     0,    99,
       0,     0,     0,     0,     0,     0,     0,     0,   128,     0,
       0,     0,     0,     0,    99,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,     0,    97,    98,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,     0,    97,    98,     0,     0,     0,     0,     0,
       0,     0,     0,   153,     0,     0,     0,     0,    99,     0,
       0,     0,     0,     0,     0,     0,     0,   156,     0,     0,
       0,     0,     0,    99,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,     0,    97,    98,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,     0,    97,    98,     0,     0,     0,     0,     0,     0,
       0,   157,     0,     0,     0,     0,     0,    99,     0,     0,
       0,     0,     0,     0,     0,     0,   158,     0,     0,     0,
       0,     0,    99,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,     0,    97,    98,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
       0,    97,    98,     0,     0,     0,     0,     0,     0,     0,
     159,     0,     0,     0,     0,     0,    99,     0,     0,     0,
       0,     0,     0,     0,     0,   160,     0,     0,     0,     0,
       0,    99,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,     0,    97,    98,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,     0,
      97,    98,     0,     0,     0,     0,     0,     0,     0,   171,
       0,     0,     0,     0,     0,    99,     0,     0,     0,     0,
       0,     0,     0,     0,   172,     0,     0,     0,     0,     0,
      99,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,     0,    97,    98,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,     0,    97,
      98,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     173,     0,     0,     0,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   206,     0,    99,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,     0,    97,    98,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,     0,    97,    98,
       0,     0,     0,     0,     0,     0,     0,   210,     0,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,   218,
       0,     0,     0,     0,     0,     0,     0,     0,    99,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,     0,    97,    98,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    99
};

static const yytype_int16 yycheck[] =
{
      25,     7,   108,    73,     3,    18,    61,    32,    40,    41,
      16,    41,   185,   192,    69,    42,     4,    42,     3,    12,
      13,    14,    15,    12,    13,    14,    15,   206,    60,   208,
      60,   204,    12,    13,    14,    15,   215,    62,    51,    63,
      64,    66,    67,    68,    69,    70,    18,   117,     3,     0,
      75,    81,     7,    78,    79,    54,    42,     3,    51,     5,
      63,    64,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   105,    64,    62,    62,     3,
      64,     3,    62,     5,   109,     7,    40,    41,    59,    11,
      12,    13,    14,    15,     3,    17,     8,     9,   104,    21,
      22,    23,    24,    61,    61,    61,   212,     3,    61,    61,
      53,    61,   218,    61,    61,    37,    65,   142,     3,    61,
      61,    43,    44,    45,     3,    47,    48,    49,    50,    51,
      52,    67,    65,     3,    59,    63,    63,    59,     6,    61,
      61,     3,   167,    69,    12,    13,    14,    15,   173,    62,
       3,    62,     3,    60,    64,    63,    16,     3,    63,   184,
       4,     3,    63,     5,    66,     7,    63,     3,    63,    11,
      12,    13,    14,    15,   180,    17,    63,   202,    59,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,   165,    60,
      16,    43,    44,    45,    60,    47,    48,    49,    50,    51,
      52,    60,   180,   222,   206,   144,    -1,    59,    -1,    61,
       3,    -1,     5,    -1,     7,   169,    68,    -1,    11,    12,
      13,    14,    15,    -1,    17,    -1,    -1,    -1,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      43,    44,    45,    -1,    47,    48,    49,    50,    51,    52,
      -1,     3,    -1,     5,    -1,     7,    -1,    60,    61,    11,
      12,    13,    14,    15,    -1,    17,    -1,    -1,    -1,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    43,    44,    45,    -1,    47,    48,    49,    50,    51,
      52,    -1,     3,    -1,     5,    -1,     7,    -1,    60,    61,
      11,    12,    13,    14,    15,    -1,    17,    -1,    -1,    -1,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    43,    44,    45,    -1,    47,    48,    49,    50,
      51,    52,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      38,    39,     3,    -1,     5,    -1,     7,     3,    -1,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    -1,    21,    22,    23,    24,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    61,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    38,
      39,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    38,    39,    -1,    -1,    -1,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    68,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    38,    39,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    38,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    -1,    68,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    38,    39,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    -1,    68,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    38,    39,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      -1,    68,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    38,    39,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      68,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    38,    39,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    38,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    68,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    38,    39,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    38,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    18,    71,    72,     0,    18,    51,    73,    82,    42,
      83,    12,    13,    14,    15,    82,    84,    85,    86,   103,
      42,     6,    85,     3,     5,     7,    11,    17,    21,    22,
      23,    24,    37,    43,    44,    45,    47,    48,    49,    50,
      52,    59,    61,    75,    76,    78,    81,    82,    89,    91,
      93,    94,    97,    99,   100,   102,   103,   104,   107,     3,
      59,    61,    69,     3,   100,     3,    61,    61,    61,    61,
      61,   100,    53,    61,    65,    61,     3,     5,    61,    61,
       3,    74,    75,   100,    67,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    38,    39,    68,
       3,   105,   106,   108,    61,    74,     3,   100,    59,    65,
     100,   100,   100,   100,   100,     3,    77,    79,    77,    59,
     100,    63,    63,   100,   100,    61,    60,    75,    62,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,    69,    63,    64,    63,    64,    62,    87,    88,
     103,    60,    62,    63,    97,   100,    62,    62,    62,    62,
      62,     4,    64,    80,    54,    77,    62,    40,    41,    95,
      96,    62,    62,    64,    90,   100,     3,   106,     3,    62,
      64,     3,    63,    60,    10,    16,     3,     4,    63,    80,
      63,   100,    66,    60,    96,    63,    63,   100,     3,    62,
      87,     8,     9,    98,   100,    99,    66,     3,   101,   102,
      62,    63,    59,   100,    99,   101,   102,    97,    59,    92,
      60,    97,    60,    98
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
#line 40 "project.y"
    { printf("Compilation Completed Successfully!!");}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 42 "project.y"
    {  printf("Header Library Declared Here\n");  ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 43 "project.y"
    {  printf("Header LIbrary Declared Here\n");  ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 54 "project.y"
    {
			printf("\n===>The Value Of IF-ELSE Condition is:::  %d",(yyvsp[(1) - (1)].number));
	;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 68 "project.y"
    {
									
										int n, i, fg = 0;

										if ((yyvsp[(3) - (5)].number) == 1) 
									    {
									      printf("1 is neither a prime nor a composite number\n");
									    }
									    else {
									    for(i = 2; i < (yyvsp[(3) - (5)].number); ++i)
									    {
									        // condition for nonprime number
									        if((yyvsp[(3) - (5)].number)%i == 0)
									        {
									            fg = 1;
									            break;
									        }
									    }
									    }
									    
									    
									        if (fg == 0)
									          printf("%d is a prime number\n", (yyvsp[(3) - (5)].number));
									        else
									          printf("%d is not a prime number\n", (yyvsp[(3) - (5)].number));
									   
									    
								 ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 96 "project.y"
    {
									int a=1 ,i;
										for(i=1;i<=(yyvsp[(3) - (5)].number);i++)
										{
											a=a*i;
										}
										
									printf("Factorial  of %d is %d\n",(yyvsp[(3) - (5)].number),a); 
								 ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 113 "project.y"
    { printf(" was read from console \n ");;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 116 "project.y"
    { printf(" , (%s) variable  ",(yyvsp[(3) - (3)].string));;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 117 "project.y"
    { printf(" (%s) variable ",(yyvsp[(1) - (1)].string));;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 124 "project.y"
    { printf(" was displayed\n");;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 131 "project.y"
    { printf(" %s  ",(yyvsp[(2) - (2)].string));;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 132 "project.y"
    { printf(" %s  ",(yyvsp[(1) - (1)].string));;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 140 "project.y"
    {printf("This is a COMMENT\n");}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 150 "project.y"
    { 
            printf("\n===> Function Ends Successfully\n\n"); 
            ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 157 "project.y"
    {
    if(check((yyvsp[(2) - (5)].string)))
						{
							printf("\nERROR: (%s) Used Before \n", (yyvsp[(2) - (5)].string) );
						
						}
						else
						{
							printf("This Function Name With  Parameter \n");
							variable(&store[count],(yyvsp[(2) - (5)].string), count);
							q=1;
							count++;
							
						}
    
    ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 173 "project.y"
    {
     if(check((yyvsp[(2) - (4)].string)))
					{
							printf("\nERROR: (%s) Used Before \n", (yyvsp[(2) - (4)].string) );
						
						}
						else
						{
							printf("This Function Name Without  Parameter \n");
							variable(&store[count],(yyvsp[(2) - (4)].string), count);
							q=1;
							count++;
							
						}
    
    ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 204 "project.y"
    { 
        				if(check((yyvsp[(2) - (6)].string))){ printf("\n===>Function is Called Here \n");}
        				else {printf("===>Function Not Defined \n");}
        ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 211 "project.y"
    {
		
			if(check((yyvsp[(2) - (2)].string))){
					
					printf("\n(%s) parameter ",(yyvsp[(2) - (2)].string));
					
				
			}else{
					printf("ERROR: (%s) Variable Not DEclared   ",(yyvsp[(2) - (2)].string)); 
					
					}
		;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 228 "project.y"
    {
             printf("\n==>For Loop Works SUccessfully\n");
             ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 232 "project.y"
    { 
            
            int i;
            for(i=(yyvsp[(4) - (8)].number);i<=(yyvsp[(6) - (8)].number);i++)
            {
            	printf("\nFOR LOOP at Value %d ",i);
            }
            ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 243 "project.y"
    {
             printf("\n==>While Loop Works SUccessfully\n");
             ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 249 "project.y"
    {
		sw=0;
		printf("==>Switch Ends Here");
	;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 259 "project.y"
    {
							if((yyvsp[(2) - (4)].number))
							{
								printf("  Value In SWITCH CASE\n" ); 
								sw++;
							}
						;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 267 "project.y"
    { if(sw == 0)
							{
								printf("Value In DEFAULT CASE\n");
								sw=0;
							}
						;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 278 "project.y"
    {
            		if((yyvsp[(2) - (6)].number) ) {
						(yyval.number)=(yyvsp[(4) - (6)].number);
						}

					else
					{
					(yyval.number)=(yyvsp[(6) - (6)].number);
					}	
						
				;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 291 "project.y"
    {
            		if((yyvsp[(2) - (5)].number)) {
						(yyval.number)=(yyvsp[(4) - (5)].number);
						}
				;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 300 "project.y"
    {
        
        	if((yyvsp[(2) - (6)].number)) {
						(yyval.number) =(yyvsp[(4) - (6)].number);
						}
			else{
					(yyval.number)=(yyvsp[(6) - (6)].number);
			}
        ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 309 "project.y"
    {
       
        	(yyval.number)=(yyvsp[(3) - (4)].number);
        ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 313 "project.y"
    {
        
        	(yyval.number)=(yyvsp[(4) - (5)].number);
        ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 330 "project.y"
    {(yyval.number)=(yyvsp[(1) - (1)].number);;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 331 "project.y"
    { 
		 int i = 1;
		 char *name = store[i].str;
		    while (name) {
			        if (strcmp(name, (yyvsp[(1) - (1)].string)) == 0){
						(yyval.number)=store[i].n;
						break;
				            }
					name = store[++i].str;
				}

;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 343 "project.y"
    {
    		(yyval.number)=(yyvsp[(1) - (3)].number)+(yyvsp[(3) - (3)].number);
    		;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 346 "project.y"
    {(yyval.number)=(yyvsp[(1) - (3)].number)-(yyvsp[(3) - (3)].number);;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 347 "project.y"
    {(yyval.number)=(yyvsp[(1) - (3)].number)*(yyvsp[(3) - (3)].number);;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 348 "project.y"
    {if((yyvsp[(3) - (3)].number))
    {
        (yyval.number)=(yyvsp[(1) - (3)].number)/(yyvsp[(3) - (3)].number);
        } else
            {
            (yyval.number)=0;
            printf("\nInvalid Syntax");
            };}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 356 "project.y"
    {(yyval.number)=(yyvsp[(1) - (3)].number) < (yyvsp[(3) - (3)].number);;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 357 "project.y"
    {(yyval.number)=(yyvsp[(1) - (3)].number) > (yyvsp[(3) - (3)].number);;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 358 "project.y"
    {(yyval.number)=(yyvsp[(2) - (3)].number);;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 359 "project.y"
    { 
    						(yyval.number)=(yyvsp[(1) - (2)].number) + 1; 
    		;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 362 "project.y"
    { (yyval.number)=(yyvsp[(1) - (2)].number)- 1; ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 363 "project.y"
    {(yyval.number)=(yyvsp[(1) - (3)].number) >= (yyvsp[(3) - (3)].number);;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 364 "project.y"
    {(yyval.number)=(yyvsp[(1) - (3)].number) >= (yyvsp[(3) - (3)].number);;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 365 "project.y"
    {(yyval.number)=(yyvsp[(1) - (3)].number) && (yyvsp[(3) - (3)].number);;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 366 "project.y"
    {(yyval.number)=(yyvsp[(1) - (3)].number) || (yyvsp[(3) - (3)].number);;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 367 "project.y"
    {(yyval.number)=!(yyvsp[(2) - (2)].number);;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 368 "project.y"
    {(yyval.number)=(yyvsp[(1) - (3)].number)==(yyvsp[(3) - (3)].number);;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 369 "project.y"
    {(yyval.number)=(yyvsp[(1) - (3)].number)!=(yyvsp[(3) - (3)].number);;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 370 "project.y"
    { fl=sin((yyvsp[(3) - (4)].number) * 3.14 / 180); printf(" Sine value of %d is %.5g\n",(yyvsp[(3) - (4)].number),fl); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 371 "project.y"
    { fl=cos((yyvsp[(3) - (4)].number) * 3.14 / 180); printf(" Cos value of %d is %.5g\n",(yyvsp[(3) - (4)].number),fl); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 372 "project.y"
    { fl=tan((yyvsp[(3) - (4)].number) *3.14 / 180); printf(" Tan value of %d is %.5g\n",(yyvsp[(3) - (4)].number),fl); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 373 "project.y"
    { fl=log((yyvsp[(3) - (4)].number)); printf(" ln value of %d is %.5g\n",(yyvsp[(3) - (4)].number),fl); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 374 "project.y"
    {
										(yyval.number) = pow((yyvsp[(1) - (3)].number),(yyvsp[(3) - (3)].number));
									    
											;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 378 "project.y"
    {

								int i,n1,n2,gcd;
								n1=(yyvsp[(3) - (6)].number);
								n2=(yyvsp[(5) - (6)].number);
						       for(i=1; i <= n1 && i <= n2; ++i)
    							{
        
        							if(n1%i==0 && n2%i==0)
            							gcd = i;
    							}
    							printf("G.C.D of %d and %d is %d", n1, n2, gcd);


	;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 401 "project.y"
    {
			if(check((yyvsp[(1) - (4)].string))){
					
					valassig ((yyvsp[(1) - (4)].string),(yyvsp[(3) - (4)].number));
					printf("\nValue of the Variable (%s)= %d\t\n",(yyvsp[(1) - (4)].string),(yyvsp[(3) - (4)].number));
					
				
			}else{
					printf("\n(%s) Variable Not DEclared\n",(yyvsp[(1) - (4)].string)); 
					}
		
		;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 413 "project.y"
    {
					if(check((yyvsp[(1) - (5)].string))){
					    printf("\nValue of the Variable (%s)= %s\t",(yyvsp[(1) - (5)].string),(yyvsp[(3) - (5)].string));
					
					}
					else{
					printf("\n(%s) Variable Not DEclared\n",(yyvsp[(1) - (5)].string)); 
					}
		;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 441 "project.y"
    {
				if(check((yyvsp[(1) - (3)].string))){
					

					printf("\n(%s) Variable  DEclared Before \n",(yyvsp[(1) - (3)].string));
					
					
				
			}else{ 
					valassig ((yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].number));
					printf("\nValue of the Variable (%s)= %d\t\n",(yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].number));
					}
					;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 457 "project.y"
    {	
;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 459 "project.y"
    { 

						if(check((yyvsp[(3) - (3)].string)))
						{
							printf("\nERROR:Multiple Declaration Of (%s) \n", (yyvsp[(3) - (3)].string) );
						
						}
						else
						{
							printf("(%s) Variable Declared\n",(yyvsp[(3) - (3)].string));
							variable(&store[count],(yyvsp[(3) - (3)].string), count);
							q=1;
							count++;
							
						}
					;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 476 "project.y"
    {

						if(check((yyvsp[(1) - (1)].string)))
						{
							printf("\nERROR:Multiple Declaration Of (%s) \n", (yyvsp[(1) - (1)].string) );
						}
						else
						{
							printf("(%s) Variable Declared\n",(yyvsp[(1) - (1)].string));
							variable(&store[count],(yyvsp[(1) - (1)].string), count);
							count++;

							
						}
			;}
    break;



/* Line 1455 of yacc.c  */
#line 2382 "project.tab.c"
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
#line 492 "project.y"


    void variable(array *p, char *s, int n)
				{
				  p->str = s;
				  p->n = n;
				}
   void valassig(char *s, int num)
				{
				    int i = 1;
				    char *name = store[i].str;
				    while (name) {
				        if (strcmp(name, s) == 0){
					store[i].n=num;
						break;
				            }
					name = store[++i].str;
				}
			}

				int check(char *key)
				{
				
				    int i = 1;
				    char *name = store[i].str;
				    while (name) {
				        if (strcmp(name, key) == 0){

				            return i;}

				        name = store[++i].str;
					

				    }
				    return 0;
				}

				

int main()
{
    yyin=freopen("in.txt","r",stdin);
	yyout=freopen("out.txt","w",stdout);

    yyparse();

    fclose(yyin);
 	fclose(yyout);
    return 0;
}
void yyerror(char *s)
{
    printf("%s\n",s);
}
int yywrap()
{
    return 1;
}

