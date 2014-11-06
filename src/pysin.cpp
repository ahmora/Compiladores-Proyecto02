/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison implementation for Yacc-like parsers in C
   
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
#define YYBISON_VERSION "2.7.12-4996"

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
#line 1 "pysin.y"

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "../lib/MAST.h"
#include "../lib/SymbolTable.hpp"

using namespace std;
#define YYDEBUG 1
int yylex(); 
int yyerror(const char *s) { printf ("\nError: %s\n", s); }

extern "C" FILE *yyin;

SymbolTable *st= new SymbolTable;
MAST *asTree= new MAST;


/* Line 371 of yacc.c  */
#line 87 "pysin.cpp"

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
   by #include "pysin.hpp".  */
#ifndef YY_YY_PYSIN_HPP_INCLUDED
# define YY_YY_PYSIN_HPP_INCLUDED
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
     FLOATNUMBER = 258,
     INTEGER = 259,
     STRING = 260,
     NAME = 261,
     DEDENT = 262,
     INDENT = 263,
     NEWLINE = 264,
     MAS = 265,
     MENOS = 266,
     POR = 267,
     ENTRE = 268,
     MOD = 269,
     DIV = 270,
     POT = 271,
     FALSE = 272,
     CLASS = 273,
     FINALLY = 274,
     IS = 275,
     RETURN = 276,
     NONE = 277,
     CONTINUE = 278,
     FOR = 279,
     LAMBDA = 280,
     TRY = 281,
     TRUE = 282,
     DEF = 283,
     FROM = 284,
     WHILE = 285,
     AND = 286,
     DEL = 287,
     NOT = 288,
     WITH = 289,
     AS = 290,
     ELIF = 291,
     IF = 292,
     OR = 293,
     ELSE = 294,
     IMPORT = 295,
     PASS = 296,
     BREAK = 297,
     EXCEPT = 298,
     IN = 299,
     PRINT = 300,
     COMMA = 301,
     DOT = 302,
     ASSIGN = 303,
     TWODOTS = 304,
     DOTCOMMA = 305,
     BINLEFT = 306,
     BINRIGHT = 307,
     ANDPAND = 308,
     PIPE = 309,
     EXP = 310,
     TILDE = 311,
     LESSTHAN = 312,
     MORETHAN = 313,
     LESSEQUAL = 314,
     MOREEQUAL = 315,
     EQUALS = 316,
     DIFFERENT = 317,
     PICOPARENTESIS = 318,
     OPENPAR = 319,
     CLOSEPAR = 320,
     OPENCOR = 321,
     CLOSECOR = 322,
     OPENKEY = 323,
     CLOSEKEY = 324,
     AT = 325,
     RIGHT = 326,
     MASIGUAL = 327,
     MENOSIGUAL = 328,
     PORIGUAL = 329,
     ENTREIGUAL = 330,
     DIVIGUAL = 331,
     MODIGUAL = 332,
     ANDIGUAL = 333,
     ORIGUAL = 334,
     EXPIGUAL = 335,
     BINRIGHTIGUAL = 336,
     BINLEFTIGUAL = 337,
     POTIGUAL = 338,
     GLOBAL = 339,
     APOSTROFE = 340
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 22 "pysin.y"

	int entero;
	double flotante;
	char caracter;
	char** cadena;
	Node* nodo;


/* Line 387 of yacc.c  */
#line 224 "pysin.cpp"
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

#endif /* !YY_YY_PYSIN_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 252 "pysin.cpp"

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

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   929

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  97
/* YYNRULES -- Number of rules.  */
#define YYNRULES  240
/* YYNRULES -- Number of states.  */
#define YYNSTATES  381

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   340

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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    13,    14,    16,    22,
      24,    27,    29,    33,    36,    38,    42,    45,    47,    50,
      54,    56,    58,    60,    62,    64,    66,    68,    70,    72,
      75,    77,    80,    83,    85,    89,    92,    94,    98,   101,
     103,   107,   110,   112,   116,   120,   123,   125,   129,   133,
     136,   138,   142,   146,   150,   154,   157,   160,   163,   165,
     168,   173,   175,   178,   181,   185,   189,   192,   195,   197,
     201,   203,   206,   210,   217,   220,   222,   226,   229,   231,
     235,   241,   246,   248,   250,   253,   257,   260,   264,   268,
     270,   274,   276,   281,   285,   288,   292,   296,   299,   302,
     304,   307,   309,   313,   316,   320,   322,   325,   328,   332,
     336,   339,   343,   347,   349,   351,   353,   355,   357,   359,
     361,   363,   368,   371,   375,   378,   380,   383,   385,   387,
     393,   396,   398,   401,   404,   408,   411,   415,   420,   426,
     428,   430,   432,   435,   439,   442,   446,   449,   453,   455,
     457,   459,   461,   470,   476,   478,   484,   492,   497,   507,
     514,   516,   521,   524,   526,   528,   530,   535,   539,   541,
     543,   545,   547,   549,   551,   555,   557,   560,   563,   565,
     569,   571,   573,   575,   577,   579,   581,   583,   585,   587,
     589,   591,   593,   595,   598,   601,   603,   607,   609,   613,
     616,   621,   623,   625,   628,   632,   636,   639,   641,   643,
     645,   647,   649,   651,   654,   656,   660,   664,   666,   672,
     675,   679,   682,   687,   693,   697,   700,   704,   710,   712,
     715,   721,   724,   728,   734,   736,   738,   742,   746,   749,
     753
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      87,     0,    -1,    88,    -1,    89,    -1,    88,     9,    -1,
      88,   151,    -1,    -1,    92,    -1,    92,    37,    92,    39,
      90,    -1,    92,    -1,    94,    93,    -1,    89,    -1,    93,
      38,    94,    -1,    96,    95,    -1,    89,    -1,    95,    31,
      96,    -1,    33,    96,    -1,    97,    -1,   100,    98,    -1,
      98,    99,   100,    -1,    89,    -1,    57,    -1,    58,    -1,
      61,    -1,    60,    -1,    59,    -1,    63,    -1,    62,    -1,
      44,    -1,    33,    44,    -1,    20,    -1,    20,    33,    -1,
     102,   101,    -1,    89,    -1,   101,    54,   102,    -1,   104,
     103,    -1,    89,    -1,   103,    55,   104,    -1,   106,   105,
      -1,    89,    -1,   105,    53,   106,    -1,   108,   107,    -1,
      89,    -1,   107,    52,   108,    -1,   107,    51,   108,    -1,
     110,   109,    -1,    89,    -1,   109,    10,   110,    -1,   109,
      11,   110,    -1,   112,   111,    -1,    89,    -1,   111,    12,
     112,    -1,   111,    13,   112,    -1,   111,    14,   112,    -1,
     111,    15,   112,    -1,    10,   112,    -1,    11,   112,    -1,
      56,   112,    -1,   113,    -1,   130,   114,    -1,   130,   114,
      16,   112,    -1,    89,    -1,   114,   115,    -1,    64,    65,
      -1,    64,   116,    65,    -1,    66,   124,    67,    -1,    47,
       6,    -1,   117,   118,    -1,    89,    -1,   117,   120,    46,
      -1,   120,    -1,   120,    46,    -1,    12,    90,   119,    -1,
      12,    90,   119,    46,    16,    90,    -1,    16,    90,    -1,
      89,    -1,   119,    46,   120,    -1,    90,   121,    -1,    90,
      -1,    90,    48,    90,    -1,    24,   128,    44,    92,   122,
      -1,    24,   128,    44,    92,    -1,   121,    -1,   123,    -1,
      37,    91,    -1,    37,    91,   122,    -1,   126,   125,    -1,
     126,   125,    46,    -1,   125,    46,   126,    -1,    89,    -1,
      47,    47,    47,    -1,    90,    -1,    90,    49,    90,   127,
      -1,    90,    49,    90,    -1,    90,    49,    -1,    90,    49,
     127,    -1,    49,    90,   127,    -1,    49,    90,    -1,    49,
     127,    -1,    49,    -1,    49,    90,    -1,    49,    -1,   100,
     129,    46,    -1,   100,   129,    -1,   129,    46,   100,    -1,
      89,    -1,    64,    65,    -1,    66,    67,    -1,    64,   138,
      65,    -1,    66,   137,    67,    -1,    68,    69,    -1,    68,
     132,    69,    -1,    85,   135,    85,    -1,     6,    -1,     4,
      -1,     3,    -1,   136,    -1,    22,    -1,   131,    -1,    27,
      -1,    17,    -1,    90,    49,    90,   133,    -1,    90,   121,
      -1,    90,   161,    46,    -1,    90,   161,    -1,   121,    -1,
     134,    46,    -1,   134,    -1,    89,    -1,   134,    46,    90,
      49,    90,    -1,    90,   161,    -1,     5,    -1,     5,   136,
      -1,    90,   139,    -1,    90,   161,   163,    -1,    90,   121,
      -1,    90,   161,   163,    -1,    24,   128,    44,   141,    -1,
      24,   128,    44,   141,   140,    -1,   139,    -1,   143,    -1,
      91,    -1,    91,   142,    -1,    91,   142,    46,    -1,    46,
      91,    -1,   142,    46,    91,    -1,    37,    91,    -1,    37,
      91,   140,    -1,   145,    -1,   147,    -1,   148,    -1,   174,
      -1,    37,    90,    49,   149,   146,    39,    49,   149,    -1,
      37,    90,    49,   149,   146,    -1,    89,    -1,   146,    36,
      90,    49,   149,    -1,    30,    90,    49,   149,    39,    49,
     149,    -1,    30,    90,    49,   149,    -1,    24,   128,    44,
     165,    49,   149,    39,    49,   149,    -1,    24,   128,    44,
     165,    49,   149,    -1,   152,    -1,     9,     8,   150,     7,
      -1,   150,   151,    -1,   151,    -1,   152,    -1,   144,    -1,
     153,   154,    50,     9,    -1,   153,   154,     9,    -1,   155,
      -1,   159,    -1,   166,    -1,   167,    -1,   168,    -1,   172,
      -1,   154,    50,   153,    -1,    89,    -1,   165,   156,    -1,
     158,   165,    -1,   157,    -1,   157,    48,   165,    -1,    89,
      -1,    72,    -1,    73,    -1,    74,    -1,    75,    -1,    77,
      -1,    78,    -1,    79,    -1,    80,    -1,    81,    -1,    82,
      -1,    83,    -1,    76,    -1,    45,   160,    -1,    45,   162,
      -1,    89,    -1,    90,   161,   163,    -1,    89,    -1,   161,
      46,    90,    -1,    52,    90,    -1,    52,    90,   164,   163,
      -1,    89,    -1,    46,    -1,    46,    90,    -1,   164,    46,
      90,    -1,    90,   161,   163,    -1,    32,   128,    -1,    41,
      -1,   169,    -1,   170,    -1,   171,    -1,    42,    -1,    23,
      -1,    21,   165,    -1,    21,    -1,    84,     6,   173,    -1,
     173,    46,     6,    -1,    89,    -1,    28,     6,   175,    49,
     149,    -1,    64,    65,    -1,    64,   176,    65,    -1,   177,
     178,    -1,   180,    48,    90,   179,    -1,   180,    48,    90,
     179,    46,    -1,   180,   179,    46,    -1,   180,   179,    -1,
     177,   180,    46,    -1,   177,   180,    48,    90,    46,    -1,
      89,    -1,    12,     6,    -1,    12,     6,    46,    16,     6,
      -1,    16,     6,    -1,   179,    46,   180,    -1,   179,    46,
     180,    48,    90,    -1,    89,    -1,     6,    -1,    64,   181,
      65,    -1,   180,   182,    46,    -1,   180,   182,    -1,   182,
      46,   180,    -1,    89,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    42,    42,    44,    45,    46,    50,    53,    54,    56,
      59,    61,    62,    65,    67,    68,    71,    72,    76,    79,
      80,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    96,    98,    99,   102,   104,   105,   108,   111,
     112,   115,   117,   118,   119,   123,   125,   126,   127,   133,
     135,   136,   137,   138,   139,   145,   146,   147,   148,   151,
     152,   154,   155,   158,   159,   160,   161,   164,   166,   167,
     169,   170,   171,   172,   173,   175,   176,   179,   180,   181,
     184,   185,   188,   189,   192,   193,   196,   197,   199,   200,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     215,   216,   219,   220,   222,   223,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   244,
     245,   252,   253,   254,   255,   258,   259,   260,   262,   263,
     266,   269,   270,   274,   275,   278,   279,   282,   283,   286,
     287,   290,   291,   292,   294,   295,   298,   299,   302,   303,
     304,   305,   308,   309,   311,   312,   315,   316,   319,   320,
     323,   324,   326,   327,   330,   331,   334,   335,   339,   340,
     341,   342,   343,   344,   346,   347,   351,   353,   354,   356,
     357,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   375,   376,   378,   379,   381,   382,   384,
     385,   387,   388,   390,   391,   395,   399,   401,   404,   405,
     406,   408,   410,   413,   414,   418,   420,   421,   426,   429,
     430,   434,   435,   436,   437,   438,   440,   441,   442,   444,
     445,   446,   448,   449,   450,   453,   454,   457,   458,   460,
     461
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FLOATNUMBER", "INTEGER", "STRING",
  "NAME", "DEDENT", "INDENT", "NEWLINE", "MAS", "MENOS", "POR", "ENTRE",
  "MOD", "DIV", "POT", "FALSE", "CLASS", "FINALLY", "IS", "RETURN", "NONE",
  "CONTINUE", "FOR", "LAMBDA", "TRY", "TRUE", "DEF", "FROM", "WHILE",
  "AND", "DEL", "NOT", "WITH", "AS", "ELIF", "IF", "OR", "ELSE", "IMPORT",
  "PASS", "BREAK", "EXCEPT", "IN", "PRINT", "COMMA", "DOT", "ASSIGN",
  "TWODOTS", "DOTCOMMA", "BINLEFT", "BINRIGHT", "ANDPAND", "PIPE", "EXP",
  "TILDE", "LESSTHAN", "MORETHAN", "LESSEQUAL", "MOREEQUAL", "EQUALS",
  "DIFFERENT", "PICOPARENTESIS", "OPENPAR", "CLOSEPAR", "OPENCOR",
  "CLOSECOR", "OPENKEY", "CLOSEKEY", "AT", "RIGHT", "MASIGUAL",
  "MENOSIGUAL", "PORIGUAL", "ENTREIGUAL", "DIVIGUAL", "MODIGUAL",
  "ANDIGUAL", "ORIGUAL", "EXPIGUAL", "BINRIGHTIGUAL", "BINLEFTIGUAL",
  "POTIGUAL", "GLOBAL", "APOSTROFE", "$accept", "file_input", "filein",
  "epsilon", "test", "old_test", "or_test", "or_andtest", "and_test",
  "and_nottest", "not_test", "comparison", "comp_op_expr_kleene",
  "comp_op", "expr", "pipexor_expr", "xor_expr", "andxor_expr", "and_expr",
  "andpandshift_expr", "shift_expr", "leftright_shift_expr",
  "arithmetic_expr", "sign_term", "term", "factor_operation", "factor",
  "power", "trailer_kleene", "trailer", "arglist", "argument_comma",
  "argument_multiple", "comma_argument", "argument", "comp_for",
  "comp_iter", "comp_if", "subscriptlist", "comma_subscript", "subscript",
  "sliceop", "exprlist", "expr_kleene", "atom", "boolean",
  "dictorsetmaker", "dictor_set_help", "dictor_set_help2", "testlist1",
  "string_plus", "listmaker", "testlist_comp", "list_for", "list_iter",
  "testlist_safe", "comma_old_test_plus", "list_if", "compound_stmt",
  "if_stmt", "elif_test_td_suite_kleene", "while_stmt", "for_stmt",
  "suite", "stmt_plus", "stmt", "simple_stmt", "small_stmt",
  "more_simple_stmt", "expr_stmt", "expr_stmt_at",
  "assign_testlist_kleene", "augassign", "print_stmt", "print_stmt1",
  "comma_test_kleene", "print_stmt2", "comma_one", "comma_test_plus",
  "testlist", "del_stmt", "pass_stmt", "flow_stmt", "break_stmt",
  "continue_stmt", "return_stmt", "global_stmt", "global_stmt_name",
  "funcdef", "parameters", "varargslist", "a", "b", "d", "fpdef", "fplist",
  "fpdef_kleene", YY_NULL
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    88,    88,    88,    89,    90,    90,    91,
      92,    93,    93,    94,    95,    95,    96,    96,    97,    98,
      98,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,   100,   101,   101,   102,   103,   103,   104,   105,
     105,   106,   107,   107,   107,   108,   109,   109,   109,   110,
     111,   111,   111,   111,   111,   112,   112,   112,   112,   113,
     113,   114,   114,   115,   115,   115,   115,   116,   117,   117,
     118,   118,   118,   118,   118,   119,   119,   120,   120,   120,
     121,   121,   122,   122,   123,   123,   124,   124,   125,   125,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     127,   127,   128,   128,   129,   129,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   131,
     131,   132,   132,   132,   132,   133,   133,   133,   134,   134,
     135,   136,   136,   137,   137,   138,   138,   139,   139,   140,
     140,   141,   141,   141,   142,   142,   143,   143,   144,   144,
     144,   144,   145,   145,   146,   146,   147,   147,   148,   148,
     149,   149,   150,   150,   151,   151,   152,   152,   153,   153,
     153,   153,   153,   153,   154,   154,   155,   156,   156,   157,
     157,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   159,   159,   160,   160,   161,   161,   162,
     162,   163,   163,   164,   164,   165,   166,   167,   168,   168,
     168,   169,   170,   171,   171,   172,   173,   173,   174,   175,
     175,   176,   176,   176,   176,   176,   177,   177,   177,   178,
     178,   178,   179,   179,   179,   180,   180,   181,   181,   182,
     182
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     0,     1,     5,     1,
       2,     1,     3,     2,     1,     3,     2,     1,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     2,     1,     3,     2,     1,     3,     2,     1,
       3,     2,     1,     3,     3,     2,     1,     3,     3,     2,
       1,     3,     3,     3,     3,     2,     2,     2,     1,     2,
       4,     1,     2,     2,     3,     3,     2,     2,     1,     3,
       1,     2,     3,     6,     2,     1,     3,     2,     1,     3,
       5,     4,     1,     1,     2,     3,     2,     3,     3,     1,
       3,     1,     4,     3,     2,     3,     3,     2,     2,     1,
       2,     1,     3,     2,     3,     1,     2,     2,     3,     3,
       2,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     2,     3,     2,     1,     2,     1,     1,     5,
       2,     1,     2,     2,     3,     2,     3,     4,     5,     1,
       1,     1,     2,     3,     2,     3,     2,     3,     1,     1,
       1,     1,     8,     5,     1,     5,     7,     4,     9,     6,
       1,     4,     2,     1,     1,     1,     4,     3,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     2,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     3,     1,     3,     2,
       4,     1,     1,     2,     3,     3,     2,     1,     1,     1,
       1,     1,     1,     2,     1,     3,     3,     1,     5,     2,
       3,     2,     4,     5,     3,     2,     3,     5,     1,     2,
       5,     2,     3,     5,     1,     1,     3,     3,     2,     3,
       1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,     2,     3,     1,   115,   114,   131,   113,     4,
       0,     0,   120,   214,   117,   212,     0,   119,     0,     0,
       0,     0,     0,   207,   211,     6,     0,     0,     0,     0,
       0,     0,     6,     7,     6,     6,    17,     6,     6,     6,
       6,     6,     6,     6,    58,     6,   118,   116,   165,   148,
     149,   150,     5,   164,     6,   168,   169,     6,   170,   171,
     172,   208,   209,   210,   173,   151,   132,    55,    56,   213,
       6,     0,     0,     0,   206,    16,     0,     0,   195,     6,
     193,   194,    57,   106,     6,     0,   107,     6,     0,   110,
       6,     0,     6,     6,     0,   197,     6,     0,    11,    10,
      14,    13,    20,    18,    33,    32,    36,    35,    39,    38,
      42,    41,    46,    45,    50,    49,    61,    59,   175,     0,
     181,   182,   183,   184,   192,   185,   186,   187,   188,   189,
     190,   191,   180,   176,   178,     0,   105,   103,     0,     6,
       0,     0,     0,   199,     6,     0,   135,     6,   108,     0,
     133,     6,   109,     0,   122,   124,   111,   217,   215,   130,
     112,   202,   201,   205,     0,     0,     0,    30,     0,    28,
      21,    22,    25,    24,    23,    27,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     6,     0,    62,   167,     0,     0,   177,   102,     0,
     235,     0,   219,   228,     0,     0,     6,     0,     0,   157,
     160,     6,     0,     6,   196,     0,   136,     0,   134,     6,
     123,     0,     0,   198,     0,    12,    15,    31,    29,    19,
      34,    37,    40,    44,    43,    47,    48,    51,    52,    53,
      54,    60,    66,    63,    68,     0,     0,     0,    99,    91,
       0,     6,   166,   174,   179,   104,     0,     6,     0,   220,
       0,     0,   221,     0,     0,   234,   225,   218,     0,     0,
     154,   153,   203,   202,   200,     0,     0,   128,   125,   121,
     127,   216,     8,    64,     0,     0,    78,    67,    70,     0,
     101,    97,    98,    94,    65,    89,    86,   159,   240,   238,
     236,   229,   231,   226,     0,     6,   224,     0,   163,     0,
       0,     0,   204,    81,   141,     9,   137,   126,     6,    74,
       0,    77,    69,    90,   100,    96,    93,    95,    87,     0,
     237,     0,     0,   222,   232,   161,   162,   156,     0,     0,
       0,    82,    80,    83,     0,   142,     0,   139,   138,   140,
       0,    75,    72,    79,    92,    88,     0,   239,     0,   227,
     223,     0,     0,   152,    84,   144,   143,   146,     0,     0,
     158,   230,   233,   155,    85,   145,   147,   129,     0,    76,
      73
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    95,    32,   314,    33,    99,    34,   101,
      35,    36,   103,   177,    37,   105,    38,   107,    39,   109,
      40,   111,    41,   113,    42,   115,    43,    44,   117,   193,
     245,   246,   287,   352,   288,   341,   342,   343,   250,   296,
     251,   292,    71,   137,    45,    46,    91,   279,   280,    94,
      47,    88,    85,   347,   348,   316,   345,   349,    48,    49,
     271,    50,    51,   209,   307,    52,   210,    54,   119,    55,
     133,   134,   135,    56,    80,    96,    81,   163,   213,    57,
      58,    59,    60,    61,    62,    63,    64,   158,    65,   140,
     204,   205,   262,   266,   334,   258,   299
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -267
static const yytype_int16 yypact[] =
{
    -267,    29,   311,  -267,  -267,  -267,  -267,    50,  -267,  -267,
     844,   844,  -267,   829,  -267,  -267,   844,  -267,    32,   829,
     844,   829,   829,  -267,  -267,   608,   844,   648,   674,   717,
      55,   829,  -267,    28,  -267,  -267,  -267,  -267,  -267,  -267,
    -267,  -267,  -267,  -267,  -267,  -267,  -267,  -267,  -267,  -267,
    -267,  -267,  -267,  -267,  -267,  -267,  -267,   843,  -267,  -267,
    -267,  -267,  -267,  -267,  -267,  -267,  -267,  -267,  -267,  -267,
    -267,    27,    44,    66,  -267,  -267,    69,   829,  -267,  -267,
    -267,  -267,  -267,  -267,    95,    57,  -267,    96,    63,  -267,
       3,    62,  -267,  -267,    51,  -267,    91,   829,  -267,   100,
    -267,   109,  -267,    33,  -267,    89,  -267,    99,  -267,    93,
    -267,    37,  -267,    88,  -267,    90,  -267,    21,  -267,     6,
    -267,  -267,  -267,  -267,  -267,  -267,  -267,  -267,  -267,  -267,
    -267,  -267,  -267,  -267,   102,   829,  -267,   111,   829,    17,
     112,   491,   491,   114,    91,   844,  -267,    91,  -267,   844,
    -267,    91,  -267,   829,  -267,   117,  -267,  -267,   118,   119,
    -267,   829,  -267,  -267,   127,   829,   829,   125,   123,  -267,
    -267,  -267,  -267,  -267,  -267,  -267,  -267,   844,   844,   844,
     844,   844,   844,   844,   844,   844,   844,   844,   844,   844,
     162,   104,   106,  -267,  -267,   539,   829,  -267,   844,   122,
    -267,    20,  -267,  -267,   110,    19,   128,   491,   169,   141,
    -267,  -267,   829,   135,  -267,   140,  -267,   142,  -267,    95,
     829,   181,   829,  -267,   829,  -267,  -267,  -267,  -267,  -267,
    -267,  -267,  -267,  -267,  -267,  -267,  -267,  -267,  -267,  -267,
    -267,  -267,  -267,  -267,  -267,   124,   582,   143,   743,   139,
     130,  -267,  -267,  -267,  -267,  -267,   491,  -267,   129,  -267,
     186,   189,  -267,    24,   829,  -267,   153,  -267,   443,   155,
    -267,    15,  -267,   829,  -267,   829,   829,  -267,  -267,  -267,
     156,  -267,  -267,  -267,   829,   829,     9,  -267,   160,   163,
     829,   158,  -267,   743,  -267,  -267,   166,   170,  -267,   167,
    -267,   168,  -267,  -267,   829,  -267,    20,   377,  -267,   491,
     829,   171,  -267,     4,   173,  -267,    12,   829,  -267,  -267,
     829,  -267,   152,  -267,  -267,  -267,   158,  -267,   106,   172,
      20,   206,   177,   180,   182,  -267,  -267,  -267,   179,   491,
     829,  -267,  -267,  -267,   829,   187,   829,  -267,  -267,  -267,
     183,  -267,   188,  -267,  -267,  -267,   491,  -267,   229,  -267,
      20,   829,   491,  -267,     4,  -267,   829,    12,   829,   809,
    -267,  -267,  -267,  -267,  -267,  -267,  -267,  -267,   829,  -267,
    -267
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -267,  -267,  -267,     5,   -19,  -266,   -93,  -267,    71,  -267,
      -7,  -267,  -267,  -267,     2,  -267,    59,  -267,    64,  -267,
      68,  -267,   -75,  -267,   -70,  -267,    53,  -267,  -267,  -267,
    -267,  -267,  -267,  -267,  -125,   -71,  -118,  -267,  -267,  -267,
     -79,  -259,    -4,  -267,  -267,  -267,  -267,  -267,  -267,  -267,
     243,  -267,  -267,   165,  -112,  -267,  -267,  -267,  -267,  -267,
    -267,  -267,  -267,  -131,  -267,  -247,    -1,    65,  -267,  -267,
    -267,  -267,  -267,  -267,  -267,    42,  -267,  -127,  -267,   -11,
    -267,  -267,  -267,  -267,  -267,  -267,  -267,  -267,  -267,  -267,
    -267,  -267,  -267,   -48,  -132,  -267,  -267
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -72
static const yytype_int16 yytable[] =
{
      73,    53,    69,    76,   164,     3,    79,   206,    84,    87,
      90,   211,    93,   146,    75,   194,    74,   214,    70,   154,
     216,   308,    70,   200,   218,   200,   200,   145,   145,     4,
      78,   260,   325,   145,   327,   261,   149,   189,    72,    98,
     100,   340,   102,   104,   106,   108,   110,   112,   114,   346,
     116,   310,   153,   167,   311,     7,   195,   320,   143,   118,
     336,    92,   132,    67,    68,    97,   168,   354,   190,   257,
     303,   138,   304,   263,   364,   136,   267,   169,   365,    82,
     367,   201,   202,   201,   201,   191,   274,   192,   181,   182,
     170,   171,   172,   173,   174,   175,   176,   157,   183,   184,
     375,   162,   185,   186,   187,   188,   233,   234,   139,     5,
       6,     7,     8,   235,   236,   141,    10,    11,   142,   145,
     149,   144,   148,    12,   197,   297,   147,   199,    14,   151,
     152,   156,   155,    17,   219,   159,   160,   161,   165,    21,
     166,   215,   223,   178,   203,   217,   180,    70,   278,   162,
     196,    70,   162,   247,   179,   248,   162,   198,   227,   226,
     212,   207,    26,   220,   221,   222,   224,   228,   242,   243,
      27,   256,    28,   249,    29,   259,   264,   268,   337,   229,
     269,   273,   313,   315,   275,   254,   276,   281,   293,   283,
     289,    31,   301,   272,   300,   302,   244,   294,   357,   306,
     255,   223,   317,   223,   309,   282,   322,   290,   363,   329,
     323,   265,   328,   330,   331,   321,   270,   -71,   162,   344,
     339,   356,   358,   359,   277,   370,   360,   286,   362,   291,
     361,   373,   368,   366,   369,   371,   225,   230,   237,   238,
     239,   240,   241,   231,   379,   305,   374,   315,   232,   355,
      66,   315,   150,   315,   312,   376,   295,   333,     0,     0,
     253,     0,   298,     0,     0,   318,   319,    53,     0,     0,
       0,   324,     0,   315,   326,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   332,     0,     0,     0,     0,
       0,   338,     0,     0,     0,     0,     0,     0,   350,     0,
       0,   353,     0,     0,     0,     0,    53,     0,     0,   249,
     265,     0,     0,     0,     5,     6,     7,     8,     0,     0,
       9,    10,    11,   351,     0,     0,     0,     0,    12,     0,
       0,     0,    13,    14,    15,    16,     0,     0,    17,    18,
       0,    19,   372,    20,    21,     0,     0,     0,    22,   377,
     286,     0,    23,    24,     0,     0,    25,     0,     0,   380,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,     0,    29,
       5,     6,     7,     8,   335,     0,     0,    10,    11,     0,
       0,     0,     0,     0,    12,    30,    31,     0,    13,    14,
      15,    16,     0,     0,    17,    18,     0,    19,     0,    20,
      21,     0,     0,     0,    22,     0,     0,     0,    23,    24,
       0,     0,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,     0,     0,     0,     0,     0,
       0,    27,     0,    28,     0,    29,     5,     6,     7,     8,
       0,     0,     0,    10,    11,     0,     0,     0,     0,     0,
      12,    30,    31,     0,    13,    14,    15,    16,     0,     0,
      17,    18,     0,    19,     0,    20,    21,     0,     0,     0,
      22,     0,     0,     0,    23,    24,     0,     0,    25,     0,
       0,     0,     0,     0,     5,     6,     7,     8,     0,    26,
     208,    10,    11,     0,     0,     0,     0,    27,    12,    28,
       0,    29,    13,    14,    15,     0,     0,     0,    17,     0,
       0,     0,     0,    20,    21,     0,     0,    30,    31,     0,
       0,     0,    23,    24,     0,     0,    25,     0,     0,     0,
       0,     0,     5,     6,     7,     8,     0,    26,   252,    10,
      11,     0,     0,     0,     0,    27,    12,    28,     0,    29,
      13,    14,    15,     0,     0,     0,    17,     0,     0,     0,
       0,    20,    21,     0,     0,    30,    31,     0,     0,     0,
      23,    24,     0,     0,    25,     5,     6,     7,     8,     0,
       0,     0,    10,    11,   284,    26,     0,     0,   285,    12,
       0,     0,     0,    27,    14,    28,     0,    29,     0,    17,
       0,     5,     6,     7,     8,    21,     0,     0,    10,    11,
       0,     0,     0,    30,    31,    12,     0,     0,     0,     0,
      14,     0,     0,     0,     0,    17,     0,     0,    26,     0,
       0,    21,     0,     0,     0,     0,    27,     0,    28,     0,
      29,     5,     6,     7,     8,     0,     0,     0,    10,    11,
      77,     0,     0,     0,    26,    12,     0,    31,     0,     0,
      14,     0,    27,     0,    28,    17,    29,     5,     6,     7,
       8,    21,     0,     0,    10,    11,     0,     0,     0,     0,
       0,    12,     0,    31,     0,     0,    14,     0,     0,     0,
       0,    17,     0,     0,    26,     0,     0,    21,     0,     0,
       0,     0,    27,    83,    28,     0,    29,     0,     0,     0,
       5,     6,     7,     8,     0,     0,     0,    10,    11,     0,
      26,     0,     0,    31,    12,     0,     0,     0,    27,    14,
      28,    86,    29,     0,    17,     0,     5,     6,     7,     8,
      21,     0,     0,    10,    11,     0,     0,     0,     0,    31,
      12,     0,     0,     0,     0,    14,     0,     0,     0,     0,
      17,     0,     0,    26,     0,     0,    21,     0,     0,     0,
       0,    27,     0,    28,     0,    29,    89,     0,     0,     0,
       0,     0,   290,     0,     0,     0,     0,     0,     0,    26,
       0,     0,    31,     0,     0,     0,     0,    27,     0,    28,
       0,    29,     5,     6,     7,     8,     0,     0,     0,    10,
      11,     0,     0,     0,     0,   378,    12,     0,    31,     0,
       0,    14,     5,     6,     7,     8,    17,     0,     0,    10,
      11,     0,    21,     0,     0,     0,    12,     5,     6,     7,
       8,    14,     0,     0,    10,    11,    17,     0,     0,     0,
       0,    12,    21,     0,     0,    26,    14,     0,     0,     0,
       0,    17,     0,    27,     0,    28,     0,    29,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,     0,     0,
       0,     0,     0,    27,    31,    28,     0,    29,     0,     0,
      26,     0,     0,     0,     0,     0,     0,     0,    27,     0,
      28,     0,    29,     0,    31,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,     0,     0,    31
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-267)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      19,     2,    13,    22,    97,     0,    25,   139,    27,    28,
      29,   142,    31,    84,    21,     9,    20,   144,    16,    90,
     147,   268,    20,     6,   151,     6,     6,    24,    24,     0,
      25,    12,   291,    24,   293,    16,    24,    16,     6,    34,
      35,    37,    37,    38,    39,    40,    41,    42,    43,    37,
      45,    36,    49,    20,    39,     5,    50,    48,    77,    54,
     307,     6,    57,    10,    11,    37,    33,   326,    47,   201,
      46,    44,    48,   205,   340,    70,   207,    44,   344,    26,
     346,    64,    65,    64,    64,    64,   213,    66,    51,    52,
      57,    58,    59,    60,    61,    62,    63,    92,    10,    11,
     366,    96,    12,    13,    14,    15,   181,   182,    64,     3,
       4,     5,     6,   183,   184,    49,    10,    11,    49,    24,
      24,    79,    65,    17,   135,   256,    84,   138,    22,    87,
      67,    69,    90,    27,   153,    93,    85,    46,    38,    33,
      31,   145,   161,    54,   139,   149,    53,   145,   219,   144,
      48,   149,   147,    47,    55,    49,   151,    46,    33,   166,
      46,    49,    56,    46,    46,    46,    39,    44,     6,    65,
      64,    49,    66,   192,    68,    65,    48,     8,   309,   177,
      39,    46,   275,   276,    44,   196,    44,     6,    49,    65,
      47,    85,     6,   212,    65,     6,   191,    67,   330,    46,
     198,   220,    46,   222,    49,   224,    46,    49,   339,    39,
      47,   206,    46,    46,    46,   286,   211,    65,   213,    46,
      49,    49,    16,    46,   219,   356,    46,   246,    49,   248,
      48,   362,    49,    46,    46,     6,   165,   178,   185,   186,
     187,   188,   189,   179,   369,   264,   364,   340,   180,   328,
       7,   344,    87,   346,   273,   367,   251,   305,    -1,    -1,
     195,    -1,   257,    -1,    -1,   284,   285,   268,    -1,    -1,
      -1,   290,    -1,   366,   293,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,
      -1,   310,    -1,    -1,    -1,    -1,    -1,    -1,   317,    -1,
      -1,   320,    -1,    -1,    -1,    -1,   307,    -1,    -1,   328,
     305,    -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,
       9,    10,    11,   318,    -1,    -1,    -1,    -1,    17,    -1,
      -1,    -1,    21,    22,    23,    24,    -1,    -1,    27,    28,
      -1,    30,   361,    32,    33,    -1,    -1,    -1,    37,   368,
     369,    -1,    41,    42,    -1,    -1,    45,    -1,    -1,   378,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    66,    -1,    68,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    17,    84,    85,    -1,    21,    22,
      23,    24,    -1,    -1,    27,    28,    -1,    30,    -1,    32,
      33,    -1,    -1,    -1,    37,    -1,    -1,    -1,    41,    42,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    66,    -1,    68,     3,     4,     5,     6,
      -1,    -1,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      17,    84,    85,    -1,    21,    22,    23,    24,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,    33,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    41,    42,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,    56,
       9,    10,    11,    -1,    -1,    -1,    -1,    64,    17,    66,
      -1,    68,    21,    22,    23,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    84,    85,    -1,
      -1,    -1,    41,    42,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    56,     9,    10,
      11,    -1,    -1,    -1,    -1,    64,    17,    66,    -1,    68,
      21,    22,    23,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    32,    33,    -1,    -1,    84,    85,    -1,    -1,    -1,
      41,    42,    -1,    -1,    45,     3,     4,     5,     6,    -1,
      -1,    -1,    10,    11,    12,    56,    -1,    -1,    16,    17,
      -1,    -1,    -1,    64,    22,    66,    -1,    68,    -1,    27,
      -1,     3,     4,     5,     6,    33,    -1,    -1,    10,    11,
      -1,    -1,    -1,    84,    85,    17,    -1,    -1,    -1,    -1,
      22,    -1,    -1,    -1,    -1,    27,    -1,    -1,    56,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    64,    -1,    66,    -1,
      68,     3,     4,     5,     6,    -1,    -1,    -1,    10,    11,
      52,    -1,    -1,    -1,    56,    17,    -1,    85,    -1,    -1,
      22,    -1,    64,    -1,    66,    27,    68,     3,     4,     5,
       6,    33,    -1,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    17,    -1,    85,    -1,    -1,    22,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    56,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    64,    65,    66,    -1,    68,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    10,    11,    -1,
      56,    -1,    -1,    85,    17,    -1,    -1,    -1,    64,    22,
      66,    67,    68,    -1,    27,    -1,     3,     4,     5,     6,
      33,    -1,    -1,    10,    11,    -1,    -1,    -1,    -1,    85,
      17,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    56,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    64,    -1,    66,    -1,    68,    69,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    64,    -1,    66,
      -1,    68,     3,     4,     5,     6,    -1,    -1,    -1,    10,
      11,    -1,    -1,    -1,    -1,    16,    17,    -1,    85,    -1,
      -1,    22,     3,     4,     5,     6,    27,    -1,    -1,    10,
      11,    -1,    33,    -1,    -1,    -1,    17,     3,     4,     5,
       6,    22,    -1,    -1,    10,    11,    27,    -1,    -1,    -1,
      -1,    17,    33,    -1,    -1,    56,    22,    -1,    -1,    -1,
      -1,    27,    -1,    64,    -1,    66,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    85,    66,    -1,    68,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      66,    -1,    68,    -1,    85,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    -1,    -1,    85
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    87,    88,    89,     0,     3,     4,     5,     6,     9,
      10,    11,    17,    21,    22,    23,    24,    27,    28,    30,
      32,    33,    37,    41,    42,    45,    56,    64,    66,    68,
      84,    85,    90,    92,    94,    96,    97,   100,   102,   104,
     106,   108,   110,   112,   113,   130,   131,   136,   144,   145,
     147,   148,   151,   152,   153,   155,   159,   165,   166,   167,
     168,   169,   170,   171,   172,   174,   136,   112,   112,   165,
     100,   128,     6,    90,   128,    96,    90,    52,    89,    90,
     160,   162,   112,    65,    90,   138,    67,    90,   137,    69,
      90,   132,     6,    90,   135,    89,   161,    37,    89,    93,
      89,    95,    89,    98,    89,   101,    89,   103,    89,   105,
      89,   107,    89,   109,    89,   111,    89,   114,    89,   154,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    89,   156,   157,   158,    89,   129,    44,    64,
     175,    49,    49,    90,   161,    24,   121,   161,    65,    24,
     139,   161,    67,    49,   121,   161,    69,    89,   173,   161,
      85,    46,    89,   163,    92,    38,    31,    20,    33,    44,
      57,    58,    59,    60,    61,    62,    63,    99,    54,    55,
      53,    51,    52,    10,    11,    12,    13,    14,    15,    16,
      47,    64,    66,   115,     9,    50,    48,   165,    46,   165,
       6,    64,    65,    89,   176,   177,   180,    49,     9,   149,
     152,   149,    46,   164,   163,   128,   163,   128,   163,    90,
      46,    46,    46,    90,    39,    94,    96,    33,    44,   100,
     102,   104,   106,   108,   108,   110,   110,   112,   112,   112,
     112,   112,     6,    65,    89,   116,   117,    47,    49,    90,
     124,   126,     9,   153,   165,   100,    49,   180,   181,    65,
      12,    16,   178,   180,    48,    89,   179,   149,     8,    39,
      89,   146,    90,    46,   163,    44,    44,    89,   121,   133,
     134,     6,    90,    65,    12,    16,    90,   118,   120,    47,
      49,    90,   127,    49,    67,    89,   125,   149,    89,   182,
      65,     6,     6,    46,    48,    90,    46,   150,   151,    49,
      36,    39,    90,    92,    91,    92,   141,    46,    90,    90,
      48,   121,    46,    47,    90,   127,    90,   127,    46,    39,
      46,    46,    90,   179,   180,     7,   151,   149,    90,    49,
      37,   121,   122,   123,    46,   142,    37,   139,   140,   143,
      90,    89,   119,    90,   127,   126,    49,   180,    16,    46,
      46,    48,    49,   149,    91,    91,    46,    91,    49,    46,
     149,     6,    90,   149,   122,    91,   140,    90,    16,   120,
      90
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
  YYUSE (yytype);
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

  YYUSE (yytype);
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
/* Line 1787 of yacc.c  */
#line 42 "pysin.y"
    {cout<<"\nCOMPILATION COMPLETE :)\n";}
    break;

  case 4:
/* Line 1787 of yacc.c  */
#line 45 "pysin.y"
    {cout<<"\n";}
    break;

  case 6:
/* Line 1787 of yacc.c  */
#line 50 "pysin.y"
    {/*Nada xD*/}
    break;

  case 7:
/* Line 1787 of yacc.c  */
#line 53 "pysin.y"
    {}
    break;

  case 8:
/* Line 1787 of yacc.c  */
#line 54 "pysin.y"
    {cout<<"IF __ ELSE __ ";}
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 59 "pysin.y"
    {}
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 61 "pysin.y"
    {}
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 62 "pysin.y"
    {cout<<"OR";}
    break;

  case 13:
/* Line 1787 of yacc.c  */
#line 65 "pysin.y"
    {}
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 67 "pysin.y"
    {}
    break;

  case 15:
/* Line 1787 of yacc.c  */
#line 68 "pysin.y"
    {cout<<"AND";}
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 71 "pysin.y"
    {cout<<"NOT";}
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 72 "pysin.y"
    {}
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 83 "pysin.y"
    {cout<<"<";}
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 84 "pysin.y"
    {cout<<">";}
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 85 "pysin.y"
    {cout<<"==";}
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 86 "pysin.y"
    {cout<<">=";}
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 87 "pysin.y"
    {cout<<"<=";}
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 88 "pysin.y"
    {cout<<"<>";}
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 89 "pysin.y"
    {cout<<"!=";}
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 90 "pysin.y"
    {cout<<"IN";}
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 91 "pysin.y"
    {cout<<"NOT IN";}
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 92 "pysin.y"
    {cout<<"IS";}
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 93 "pysin.y"
    {cout<<"IS NOT";}
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 96 "pysin.y"
    {}
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 98 "pysin.y"
    {}
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 102 "pysin.y"
    {}
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 104 "pysin.y"
    {}
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 108 "pysin.y"
    {}
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 111 "pysin.y"
    {}
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 115 "pysin.y"
    {}
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 117 "pysin.y"
    {}
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 118 "pysin.y"
    {cout<<">>";}
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 119 "pysin.y"
    {cout<<"<<";}
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 123 "pysin.y"
    {}
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 125 "pysin.y"
    {}
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 126 "pysin.y"
    {cout<<"Suma";}
    break;

  case 48:
/* Line 1787 of yacc.c  */
#line 127 "pysin.y"
    {cout<<"Resta";}
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 133 "pysin.y"
    {}
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 135 "pysin.y"
    {}
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 136 "pysin.y"
    {cout<<"Multiplicacion";}
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 137 "pysin.y"
    {cout<<"Division";}
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 138 "pysin.y"
    {cout<<"Modulo";}
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 139 "pysin.y"
    {cout<<"Division Entera";}
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 145 "pysin.y"
    {cout<<"SUMA";}
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 146 "pysin.y"
    {cout<<"RESTA";}
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 151 "pysin.y"
    {}
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 152 "pysin.y"
    {}
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 154 "pysin.y"
    {}
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 155 "pysin.y"
    {}
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 158 "pysin.y"
    {cout<<"()";}
    break;

  case 64:
/* Line 1787 of yacc.c  */
#line 159 "pysin.y"
    {cout<<"(ARGLIST)";}
    break;

  case 65:
/* Line 1787 of yacc.c  */
#line 160 "pysin.y"
    {cout<<"(SUBSCRIPTLIST)";}
    break;

  case 66:
/* Line 1787 of yacc.c  */
#line 161 "pysin.y"
    {cout<<".NAME";}
    break;

  case 69:
/* Line 1787 of yacc.c  */
#line 167 "pysin.y"
    {cout<<",";}
    break;

  case 71:
/* Line 1787 of yacc.c  */
#line 170 "pysin.y"
    {cout<<",";}
    break;

  case 72:
/* Line 1787 of yacc.c  */
#line 171 "pysin.y"
    {cout<<"*";}
    break;

  case 73:
/* Line 1787 of yacc.c  */
#line 172 "pysin.y"
    {cout<<"*";}
    break;

  case 74:
/* Line 1787 of yacc.c  */
#line 173 "pysin.y"
    {cout<<"**";}
    break;

  case 79:
/* Line 1787 of yacc.c  */
#line 181 "pysin.y"
    {cout<<"=";}
    break;

  case 80:
/* Line 1787 of yacc.c  */
#line 184 "pysin.y"
    {cout<<"FOR";}
    break;

  case 81:
/* Line 1787 of yacc.c  */
#line 185 "pysin.y"
    {cout<<"FOR";}
    break;

  case 84:
/* Line 1787 of yacc.c  */
#line 192 "pysin.y"
    {cout<<"IF";}
    break;

  case 85:
/* Line 1787 of yacc.c  */
#line 193 "pysin.y"
    {cout<<"IF";}
    break;

  case 92:
/* Line 1787 of yacc.c  */
#line 205 "pysin.y"
    {cout<<":";}
    break;

  case 93:
/* Line 1787 of yacc.c  */
#line 206 "pysin.y"
    {cout<<":";}
    break;

  case 94:
/* Line 1787 of yacc.c  */
#line 207 "pysin.y"
    {cout<<":";}
    break;

  case 95:
/* Line 1787 of yacc.c  */
#line 208 "pysin.y"
    {cout<<":";}
    break;

  case 96:
/* Line 1787 of yacc.c  */
#line 209 "pysin.y"
    {cout<<":";}
    break;

  case 97:
/* Line 1787 of yacc.c  */
#line 210 "pysin.y"
    {cout<<":";}
    break;

  case 98:
/* Line 1787 of yacc.c  */
#line 211 "pysin.y"
    {cout<<":";}
    break;

  case 99:
/* Line 1787 of yacc.c  */
#line 212 "pysin.y"
    {cout<<":";}
    break;

  case 100:
/* Line 1787 of yacc.c  */
#line 215 "pysin.y"
    {cout<<":";}
    break;

  case 101:
/* Line 1787 of yacc.c  */
#line 216 "pysin.y"
    {cout<<":";}
    break;

  case 113:
/* Line 1787 of yacc.c  */
#line 237 "pysin.y"
    {cout<<"IDENTIFICADOR";}
    break;

  case 114:
/* Line 1787 of yacc.c  */
#line 238 "pysin.y"
    {cout<<"INTEGER";}
    break;

  case 115:
/* Line 1787 of yacc.c  */
#line 239 "pysin.y"
    {cout<<"FLOATNUMBER";}
    break;

  case 116:
/* Line 1787 of yacc.c  */
#line 240 "pysin.y"
    {Node *strn = asTree->bStrNode((yyvsp[(1) - (1)].nodo)); (yyval.nodo)=strn;}
    break;

  case 117:
/* Line 1787 of yacc.c  */
#line 241 "pysin.y"
    {cout<<"NONE";}
    break;

  case 119:
/* Line 1787 of yacc.c  */
#line 244 "pysin.y"
    {cout<<"TRUE";}
    break;

  case 120:
/* Line 1787 of yacc.c  */
#line 245 "pysin.y"
    {cout<<"FALSE";}
    break;

  case 121:
/* Line 1787 of yacc.c  */
#line 252 "pysin.y"
    {cout<<":";}
    break;

  case 129:
/* Line 1787 of yacc.c  */
#line 263 "pysin.y"
    {cout<<":";}
    break;

  case 131:
/* Line 1787 of yacc.c  */
#line 269 "pysin.y"
    {}
    break;

  case 133:
/* Line 1787 of yacc.c  */
#line 274 "pysin.y"
    {}
    break;

  case 134:
/* Line 1787 of yacc.c  */
#line 275 "pysin.y"
    {}
    break;

  case 137:
/* Line 1787 of yacc.c  */
#line 282 "pysin.y"
    {cout<<"FOR";}
    break;

  case 138:
/* Line 1787 of yacc.c  */
#line 283 "pysin.y"
    {cout<<"FOR";}
    break;

  case 146:
/* Line 1787 of yacc.c  */
#line 298 "pysin.y"
    {cout<<"IF___";}
    break;

  case 147:
/* Line 1787 of yacc.c  */
#line 299 "pysin.y"
    {cout<<"IF___";}
    break;

  case 152:
/* Line 1787 of yacc.c  */
#line 308 "pysin.y"
    {cout<<"IF___:___ELSE:";}
    break;

  case 153:
/* Line 1787 of yacc.c  */
#line 309 "pysin.y"
    {cout<<"IF___:___";}
    break;

  case 155:
/* Line 1787 of yacc.c  */
#line 312 "pysin.y"
    {cout<<"ELIF___:";}
    break;

  case 156:
/* Line 1787 of yacc.c  */
#line 315 "pysin.y"
    {cout<<"WHILE___:___ ELSE :";}
    break;

  case 157:
/* Line 1787 of yacc.c  */
#line 316 "pysin.y"
    {cout<<"WHILE___:";}
    break;

  case 158:
/* Line 1787 of yacc.c  */
#line 319 "pysin.y"
    {cout<<"FOR";}
    break;

  case 159:
/* Line 1787 of yacc.c  */
#line 320 "pysin.y"
    {cout<<"FOR";}
    break;

  case 161:
/* Line 1787 of yacc.c  */
#line 324 "pysin.y"
    {cout<<"\nINDENT___DEDENT";}
    break;

  case 166:
/* Line 1787 of yacc.c  */
#line 334 "pysin.y"
    {cout<<";\n";}
    break;

  case 167:
/* Line 1787 of yacc.c  */
#line 335 "pysin.y"
    {cout<<"\n";}
    break;

  case 179:
/* Line 1787 of yacc.c  */
#line 356 "pysin.y"
    {cout<<"=";}
    break;

  case 181:
/* Line 1787 of yacc.c  */
#line 361 "pysin.y"
    {cout<<"+=";}
    break;

  case 182:
/* Line 1787 of yacc.c  */
#line 362 "pysin.y"
    {cout<<"-=";}
    break;

  case 183:
/* Line 1787 of yacc.c  */
#line 363 "pysin.y"
    {cout<<"*=";}
    break;

  case 184:
/* Line 1787 of yacc.c  */
#line 364 "pysin.y"
    {cout<<"/=";}
    break;

  case 185:
/* Line 1787 of yacc.c  */
#line 365 "pysin.y"
    {cout<<"%=";}
    break;

  case 186:
/* Line 1787 of yacc.c  */
#line 366 "pysin.y"
    {cout<<"&=";}
    break;

  case 187:
/* Line 1787 of yacc.c  */
#line 367 "pysin.y"
    {cout<<"|=";}
    break;

  case 188:
/* Line 1787 of yacc.c  */
#line 368 "pysin.y"
    {cout<<"^=";}
    break;

  case 189:
/* Line 1787 of yacc.c  */
#line 369 "pysin.y"
    {cout<<">>=";}
    break;

  case 190:
/* Line 1787 of yacc.c  */
#line 370 "pysin.y"
    {cout<<"<<=";}
    break;

  case 191:
/* Line 1787 of yacc.c  */
#line 371 "pysin.y"
    {cout<<"**=";}
    break;

  case 192:
/* Line 1787 of yacc.c  */
#line 372 "pysin.y"
    {cout<<"//=";}
    break;

  case 193:
/* Line 1787 of yacc.c  */
#line 375 "pysin.y"
    {cout<<"PRINT";}
    break;

  case 194:
/* Line 1787 of yacc.c  */
#line 376 "pysin.y"
    {cout<<"PRINT";}
    break;

  case 198:
/* Line 1787 of yacc.c  */
#line 382 "pysin.y"
    {cout<<",";}
    break;

  case 199:
/* Line 1787 of yacc.c  */
#line 384 "pysin.y"
    {cout<<">>";}
    break;

  case 200:
/* Line 1787 of yacc.c  */
#line 385 "pysin.y"
    {cout<<">>";}
    break;

  case 202:
/* Line 1787 of yacc.c  */
#line 388 "pysin.y"
    {cout<<",";}
    break;

  case 205:
/* Line 1787 of yacc.c  */
#line 395 "pysin.y"
    {}
    break;

  case 213:
/* Line 1787 of yacc.c  */
#line 413 "pysin.y"
    {cout<<"RETURN __";}
    break;

  case 214:
/* Line 1787 of yacc.c  */
#line 414 "pysin.y"
    {cout<<"RETURN";}
    break;

  case 218:
/* Line 1787 of yacc.c  */
#line 426 "pysin.y"
    {cout<<"DEF NAME(_):_\n";}
    break;


/* Line 1787 of yacc.c  */
#line 2701 "pysin.cpp"
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


/* Line 2050 of yacc.c  */
#line 463 "pysin.y"




