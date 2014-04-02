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
#line 1 "Ccfg.ypp"

#include <stdlib.h>
#include <stdio.h>
#include <string>
#include<vector>
#include <cstring>
#include<iostream>
#include <utility>
#include <algorithm>
#include <map>

using namespace std;
int no_line;
struct symbol_table *current_symbol_table;


int yylex();
int yyparse();
int yywrap();

void yyerror(const char *s)
{

        string e="";
   fprintf(stderr, "line %d: %s %s",no_line , s,e.c_str());

}



/* Line 371 of yacc.c  */
#line 99 "Ccfg.tab.cpp"

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
   by #include "Ccfg.tab.hpp".  */
#ifndef YY_YY_CCFG_TAB_HPP_INCLUDED
# define YY_YY_CCFG_TAB_HPP_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
/* Line 387 of yacc.c  */
#line 33 "Ccfg.ypp"

	#include "resources.h"


/* Line 387 of yacc.c  */
#line 136 "Ccfg.tab.cpp"

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_STRUCT = 258,
     T_BREAK = 259,
     T_CONTINUE = 260,
     T_TYPEDEF = 261,
     T_CHAR = 262,
     T_DOUBLE = 263,
     T_INT = 264,
     T_FLOAT = 265,
     T_LONG_LONG = 266,
     T_FOR = 267,
     T_IF = 268,
     T_ELSE = 269,
     T_WHILE = 270,
     T_GOTO = 271,
     T_RETURN = 272,
     T_PRINTF = 273,
     T_VOID = 274,
     T_SCANF = 275,
     T_SIZEOF = 276,
     T_UNSIGNED = 277,
     T_SIGNED = 278,
     T_CONST = 279,
     T_SHORT = 280,
     T_EXTERN = 281,
     T_LONG = 282,
     T_BOOL = 283,
     T_APOS = 284,
     T_DEC_FLOAT = 285,
     T_DEC_INT = 286,
     T_STRING = 287,
     T_HEADER = 288,
     ID = 289,
     T_MAIN = 290,
     T_AND = 291,
     T_GREATER_THAN_EQUAL = 292,
     T_LESS_THAN_EQUAL = 293,
     T_EQUAL_TEST = 294,
     T_NOT_EQUAL = 295,
     T_OR = 296,
     T_PLUS_SELF = 297,
     T_MINUS_SELF = 298,
     T_MULT_SELF = 299,
     T_DIVIDE_SELF = 300,
     T_THIS_POINTER = 301,
     T_ADD_ONE = 302,
     T_SUB_ONE = 303,
     T_IO_INT = 304,
     T_IO_LONG_LONG = 305,
     T_IO_STRING = 306,
     T_IO_FLOAT = 307,
     DEREF = 308,
     UMINUS = 309,
     UPLUS = 310
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 37 "Ccfg.ypp"

enum type_enum my_type;
long long integer;
long double real;
char lexeme[10000];
struct aaaa {
	int dimension;
	char var_name[100];
};
struct bbbb {
	char var_name[50][100];
	int dimension[50];
	int index;
};
struct bbbb init_struct;
struct aaaa tuple;

//Yet to include exponential numbers and hexadecimals.


/* Line 387 of yacc.c  */
#line 227 "Ccfg.tab.cpp"
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

#endif /* !YY_YY_CCFG_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 255 "Ccfg.tab.cpp"

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
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   204

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNRULES -- Number of states.  */
#define YYNSTATES  123

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   310

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,     2,     2,     2,    67,    60,     2,
      54,    74,    65,    63,    56,    64,    72,    66,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    76,
      62,    57,    61,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    55,     2,    73,    59,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    53,    58,    75,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    68,    70,
      71
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,     8,    12,    17,    21,    25,    30,
      32,    35,    37,    39,    41,    43,    45,    47,    49,    52,
      54,    59,    63,    68,    72,    77,    80,    82,    84,    88,
      90,    93,    95,    98,   100,   104,   106,   109,   113,   117,
     119,   121,   129,   137,   147,   153,   155,   159,   161,   165,
     168,   172,   174,   177,   180,   182,   186,   188,   190,   192,
     195,   200,   204,   208
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      78,     0,    -1,    79,    78,    -1,    79,    -1,    80,    97,
      76,    -1,     6,    80,    34,    76,    -1,    80,    83,    87,
      -1,    82,    83,    87,    -1,     3,    34,    87,    76,    -1,
      33,    -1,    80,    65,    -1,    81,    -1,    11,    -1,     9,
      -1,     7,    -1,    10,    -1,     8,    -1,    28,    -1,    82,
      65,    -1,    19,    -1,    34,    54,    84,    74,    -1,    34,
      54,    74,    -1,    35,    54,    84,    74,    -1,    35,    54,
      74,    -1,    80,    97,    56,    84,    -1,    80,    97,    -1,
      53,    -1,    75,    -1,    85,    88,    86,    -1,    89,    -1,
      89,    88,    -1,    89,    -1,    90,    76,    -1,    92,    -1,
      93,    56,    90,    -1,    93,    -1,    80,    91,    -1,    95,
      56,    91,    -1,    97,    56,    91,    -1,    95,    -1,    97,
      -1,    13,    54,    93,    74,    53,    88,    75,    -1,    13,
      54,    93,    74,    53,    14,    75,    -1,    12,    54,    90,
      76,    90,    76,    90,    74,    87,    -1,    15,    54,    90,
      74,    87,    -1,    94,    -1,    94,    63,    94,    -1,    95,
      -1,    94,    41,    94,    -1,    69,    94,    -1,    54,    94,
      74,    -1,    34,    -1,    63,    94,    -1,    64,    94,    -1,
      96,    -1,    34,    57,    94,    -1,    31,    -1,    30,    -1,
      34,    -1,    34,    98,    -1,    55,    34,    73,    98,    -1,
      55,    34,    73,    -1,    55,    31,    73,    -1,    55,    31,
      73,    98,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   152,   152,   153,   155,   156,   157,   158,   159,   160,
     163,   164,   166,   167,   168,   169,   170,   171,   173,   174,
     176,   177,   178,   179,   181,   182,   184,   196,   205,   206,
     209,   210,   213,   214,   216,   217,   218,   245,   256,   266,
     271,   278,   279,   280,   281,   283,   285,   308,   374,   382,
     383,   384,   400,   401,   402,   404,   411,   412,   415,   418,
     423,   424,   425,   426
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_STRUCT", "T_BREAK", "T_CONTINUE",
  "T_TYPEDEF", "T_CHAR", "T_DOUBLE", "T_INT", "T_FLOAT", "T_LONG_LONG",
  "T_FOR", "T_IF", "T_ELSE", "T_WHILE", "T_GOTO", "T_RETURN", "T_PRINTF",
  "T_VOID", "T_SCANF", "T_SIZEOF", "T_UNSIGNED", "T_SIGNED", "T_CONST",
  "T_SHORT", "T_EXTERN", "T_LONG", "T_BOOL", "T_APOS", "T_DEC_FLOAT",
  "T_DEC_INT", "T_STRING", "T_HEADER", "ID", "T_MAIN", "T_AND",
  "T_GREATER_THAN_EQUAL", "T_LESS_THAN_EQUAL", "T_EQUAL_TEST",
  "T_NOT_EQUAL", "T_OR", "T_PLUS_SELF", "T_MINUS_SELF", "T_MULT_SELF",
  "T_DIVIDE_SELF", "T_THIS_POINTER", "T_ADD_ONE", "T_SUB_ONE", "T_IO_INT",
  "T_IO_LONG_LONG", "T_IO_STRING", "T_IO_FLOAT", "'{'", "'('", "'['",
  "','", "'='", "'|'", "'^'", "'&'", "'>'", "'<'", "'+'", "'-'", "'*'",
  "'/'", "'%'", "DEREF", "'!'", "UMINUS", "UPLUS", "'.'", "']'", "')'",
  "'}'", "';'", "$accept", "code", "decl", "type", "basic", "void", "func",
  "args", "brac_open", "brac_close", "block", "M", "S", "S1", "init",
  "block_stmt", "stmt", "expr", "assign_stmt", "number", "identifier",
  "array", YY_NULL
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
     305,   306,   307,   123,    40,    91,    44,    61,   124,    94,
      38,    62,    60,    43,    45,    42,    47,    37,   308,    33,
     309,   310,    46,    93,    41,   125,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    77,    78,    78,    79,    79,    79,    79,    79,    79,
      80,    80,    81,    81,    81,    81,    81,    81,    82,    82,
      83,    83,    83,    83,    84,    84,    85,    86,    87,    87,
      88,    88,    89,    89,    90,    90,    90,    91,    91,    91,
      91,    92,    92,    92,    92,    93,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    95,    96,    96,    97,    97,
      98,    98,    98,    98
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     4,     3,     3,     4,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       4,     3,     4,     3,     4,     2,     1,     1,     3,     1,
       2,     1,     2,     1,     3,     1,     2,     3,     3,     1,
       1,     7,     7,     9,     5,     1,     3,     1,     3,     2,
       3,     1,     2,     2,     1,     3,     1,     1,     1,     2,
       4,     3,     3,     4
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    14,    16,    13,    15,    12,    19,    17,
       9,     0,     3,     0,    11,     0,     0,     0,     1,     2,
      58,     0,    10,     0,     0,     0,    18,     0,     0,     0,
       0,    57,    56,    51,    26,     0,     0,     0,     0,     0,
       0,     0,    29,     0,    33,    35,    45,    47,    54,     0,
       0,     0,    59,     0,     6,     4,     7,     0,     0,     0,
       0,     0,    52,    53,    49,    58,    36,    39,    40,     0,
      31,     8,    32,     0,     0,     0,     5,    21,     0,     0,
       0,     0,    23,     0,     0,     0,     0,    55,    50,     0,
       0,    27,    28,    30,    34,    48,    46,    58,    25,    20,
      62,    61,    22,     0,     0,     0,    37,    38,     0,    63,
      60,     0,     0,    44,    24,     0,     0,     0,     0,    42,
      41,     0,    43
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    11,    12,    39,    14,    15,    23,    79,    40,    92,
      41,    69,    42,    43,    66,    44,    45,    46,    47,    48,
      68,    52
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -53
static const yytype_int16 yypact[] =
{
     171,     8,   156,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,    56,   171,    14,   -53,    63,    13,     3,   -53,   -53,
      17,     4,   -53,    13,     9,    24,   -53,    13,    51,    52,
      57,   -53,   -53,    68,   -53,     1,     1,     1,     1,    47,
     107,    58,   -53,    60,   -53,    88,   -12,   -53,   -53,    69,
      -1,     5,   -53,     6,   -53,   -53,   -53,    93,     1,    93,
       1,   -11,   -53,   -53,   -53,     2,   -53,    90,    95,    74,
     107,   -53,   -53,    93,     1,     1,   -53,   -53,    61,    76,
      80,    82,   -53,    78,    83,    84,    86,   -12,   -53,   138,
     138,   -53,   -53,   -53,   -53,   110,   -53,   120,   127,   -53,
     120,   120,   -53,    93,   132,    13,   -53,   -53,   156,   -53,
     -53,   111,    79,   -53,   -53,    93,   113,   114,   112,   -53,
     -53,    13,   -53
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -53,   179,   -53,     0,   -53,   -53,   177,   -34,   -53,   -53,
     -22,   -52,   -37,   -19,   -44,   -53,   135,    94,   -28,   -53,
      -9,    39
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      13,    54,    17,    70,    24,    56,     3,     4,     5,     6,
       7,    67,    13,     3,     4,     5,     6,     7,    93,    83,
       3,     4,     5,     6,     7,    28,    29,     9,    30,    74,
      74,    31,    32,    70,     9,    33,    80,    49,    84,    81,
      86,     9,    16,    31,    32,   106,   107,    33,    20,    21,
      78,    75,    75,    78,    94,    35,    18,    51,    53,    60,
     117,    67,    67,    88,    36,    37,    34,    35,    22,    98,
      38,    50,    51,    77,   114,    70,    36,    37,    50,    22,
      82,    65,    38,   113,   111,    55,     3,     4,     5,     6,
       7,    28,    29,   116,    30,    97,   118,    25,    21,   122,
       3,     4,     5,     6,     7,    57,    58,     9,    78,    31,
      32,    59,    22,    33,     3,     4,     5,     6,     7,    28,
      29,     9,    30,    31,    32,    60,    22,    33,    26,    61,
      62,    63,    64,    35,    71,     9,    72,    31,    32,   109,
     110,    33,    36,    37,    73,    76,    89,    35,    38,    91,
      99,    90,   102,   100,    87,   101,    36,    37,   104,   103,
     105,    35,    38,     3,     4,     5,     6,     7,    95,    96,
      36,    37,    65,    75,     1,    51,    38,     2,     3,     4,
       5,     6,     7,   108,     9,   112,   121,   115,   119,   120,
       8,    19,    27,    85,     0,     0,     0,     0,     0,     9,
       0,     0,     0,     0,    10
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-53)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
       0,    23,     2,    40,    13,    27,     7,     8,     9,    10,
      11,    39,    12,     7,     8,     9,    10,    11,    70,    53,
       7,     8,     9,    10,    11,    12,    13,    28,    15,    41,
      41,    30,    31,    70,    28,    34,    31,    34,    57,    34,
      59,    28,    34,    30,    31,    89,    90,    34,    34,    35,
      50,    63,    63,    53,    73,    54,     0,    55,    54,    57,
     112,    89,    90,    74,    63,    64,    53,    54,    65,    78,
      69,    54,    55,    74,   108,   112,    63,    64,    54,    65,
      74,    34,    69,   105,   103,    76,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    34,   115,    34,    35,   121,
       7,     8,     9,    10,    11,    54,    54,    28,   108,    30,
      31,    54,    65,    34,     7,     8,     9,    10,    11,    12,
      13,    28,    15,    30,    31,    57,    65,    34,    65,    35,
      36,    37,    38,    54,    76,    28,    76,    30,    31,   100,
     101,    34,    63,    64,    56,    76,    56,    54,    69,    75,
      74,    56,    74,    73,    60,    73,    63,    64,    74,    76,
      74,    54,    69,     7,     8,     9,    10,    11,    74,    75,
      63,    64,    34,    63,     3,    55,    69,     6,     7,     8,
       9,    10,    11,    56,    28,    53,    74,    76,    75,    75,
      19,    12,    15,    58,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    33
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,     8,     9,    10,    11,    19,    28,
      33,    78,    79,    80,    81,    82,    34,    80,     0,    78,
      34,    35,    65,    83,    97,    34,    65,    83,    12,    13,
      15,    30,    31,    34,    53,    54,    63,    64,    69,    80,
      85,    87,    89,    90,    92,    93,    94,    95,    96,    34,
      54,    55,    98,    54,    87,    76,    87,    54,    54,    54,
      57,    94,    94,    94,    94,    34,    91,    95,    97,    88,
      89,    76,    76,    56,    41,    63,    76,    74,    80,    84,
      31,    34,    74,    84,    90,    93,    90,    94,    74,    56,
      56,    75,    86,    88,    90,    94,    94,    34,    97,    74,
      73,    73,    74,    76,    74,    74,    91,    91,    56,    98,
      98,    90,    53,    87,    84,    76,    14,    88,    90,    75,
      75,    74,    87
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
        case 11:
/* Line 1787 of yacc.c  */
#line 164 "Ccfg.ypp"
    {(yyval.my_type)=(yyvsp[(1) - (1)].my_type);}
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 166 "Ccfg.ypp"
    {(yyval.my_type)=Long_long;}
    break;

  case 13:
/* Line 1787 of yacc.c  */
#line 167 "Ccfg.ypp"
    {(yyval.my_type)=Int;}
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 168 "Ccfg.ypp"
    {(yyval.my_type)=Char;}
    break;

  case 15:
/* Line 1787 of yacc.c  */
#line 169 "Ccfg.ypp"
    {(yyval.my_type)=Float;}
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 170 "Ccfg.ypp"
    {(yyval.my_type)=Double;}
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 171 "Ccfg.ypp"
    {(yyval.my_type)=Bool;}
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 184 "Ccfg.ypp"
    { 
#ifdef debug
	printf("creating new symbol table\n");
#endif
				  struct symbol_table *temp = new  symbol_table;
				  current_symbol_table->children.push_back(temp); 
				  temp->parent = current_symbol_table;

				  current_symbol_table = temp;
				 
		 }
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 196 "Ccfg.ypp"
    {
#ifdef debug
	printf("destroying symbol table\n");
#endif
				  struct symbol_table *temp = current_symbol_table;
				  current_symbol_table = temp->parent;
				  delete temp;
		 }
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 218 "Ccfg.ypp"
    {
			
			struct llm temp;

			temp.my_type= (yyvsp[(1) - (2)].my_type); 
			for(int i=0;i<(yyvsp[(2) - (2)].init_struct).index;i++) {
				/* checking if variable is already declared */

						if(current_symbol_table->table.find(string( (yyvsp[(2) - (2)].init_struct).var_name[i])) != current_symbol_table->table.end())
							yyerror("error: redeclaration \n");
					
				/*   ------------------------------------ */
						else {
							temp.dimension = (yyvsp[(2) - (2)].init_struct).dimension[i];
							current_symbol_table->table[string((yyvsp[(2) - (2)].init_struct).var_name[i])]=(temp);
						}
			}
#ifdef debug
			printf("Variables declared \n"); 
				for(int i=0;i<(yyvsp[(2) - (2)].init_struct).index;i++) {
					printf("%s %d\n",(yyvsp[(2) - (2)].init_struct).var_name[i],(yyvsp[(2) - (2)].init_struct).dimension[i]);
				}
			#endif

	}
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 246 "Ccfg.ypp"
    {
								strcpy((yyval.init_struct).var_name[0],(yyvsp[(1) - (3)].tuple).var_name);
								(yyval.init_struct).dimension[0] = (yyvsp[(1) - (3)].tuple).dimension;
								(yyval.init_struct).index = 1;
								for(int i=0; i<(yyvsp[(3) - (3)].init_struct).index; i++) {
									(yyval.init_struct).dimension[(yyval.init_struct).index] = (yyvsp[(3) - (3)].init_struct).dimension[i];
									strcpy((yyval.init_struct).var_name[(yyval.init_struct).index],(yyvsp[(3) - (3)].init_struct).var_name[i]);
									(yyval.init_struct).index++;
								}
						}
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 256 "Ccfg.ypp"
    {
								strcpy((yyval.init_struct).var_name[0],(yyvsp[(1) - (3)].tuple).var_name);
								(yyval.init_struct).dimension[0] = (yyvsp[(1) - (3)].tuple).dimension;
								(yyval.init_struct).index = 1;
								for(int i=0; i<(yyvsp[(3) - (3)].init_struct).index; i++) {
									(yyval.init_struct).dimension[(yyval.init_struct).index] = (yyvsp[(3) - (3)].init_struct).dimension[i];
									strcpy((yyval.init_struct).var_name[(yyval.init_struct).index],(yyvsp[(3) - (3)].init_struct).var_name[i]);
									(yyval.init_struct).index++;
								}
							}
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 266 "Ccfg.ypp"
    {
						strcpy((yyval.init_struct).var_name[0],(yyvsp[(1) - (1)].tuple).var_name);
						(yyval.init_struct).dimension[0] = (yyvsp[(1) - (1)].tuple).dimension;
						(yyval.init_struct).index = 1;
					}
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 271 "Ccfg.ypp"
    {
					strcpy((yyval.init_struct).var_name[0],(yyvsp[(1) - (1)].tuple).var_name);
					(yyval.init_struct).dimension[0] = (yyvsp[(1) - (1)].tuple).dimension;
					(yyval.init_struct).index = 1;
				  }
    break;

  case 48:
/* Line 1787 of yacc.c  */
#line 374 "Ccfg.ypp"
    { 
						if(!((yyvsp[(1) - (3)].my_type)==Bool || (yyvsp[(1) - (3)].my_type)==Int || (yyvsp[(1) - (3)].my_type)==Long_long))
							yyerror("error: OR supports only bool,int,long long. left operand is \n");
						if(!((yyvsp[(3) - (3)].my_type)==Bool || (yyvsp[(3) - (3)].my_type)==Int || (yyvsp[(3) - (3)].my_type)==Long_long))
							yyerror("error: OR supports only bool,int,long long. right operand is \n");
						else 
							(yyval.my_type)=Bool;
					}
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 382 "Ccfg.ypp"
    {(yyval.my_type) = Bool;}
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 383 "Ccfg.ypp"
    {(yyval.my_type) = (yyvsp[(2) - (3)].my_type);}
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 384 "Ccfg.ypp"
    {
			struct symbol_table *temp = current_symbol_table;
			int flag = 1;
			while(flag) {
			           	if( temp->table.find(string( (yyvsp[(1) - (1)].lexeme))) != temp->table.end()){
						(yyval.my_type) = temp->table[string((yyvsp[(1) - (1)].lexeme))].my_type;
						flag = 0;
					
				}
				if(temp->parent==NULL&&flag==1) {
					yyerror("error: variable not declared\n");
					flag = 0;
				}
				temp = temp->parent;
			}
		  }
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 400 "Ccfg.ypp"
    {(yyval.my_type)=(yyvsp[(2) - (2)].my_type);}
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 401 "Ccfg.ypp"
    {(yyval.my_type)=(yyvsp[(2) - (2)].my_type);}
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 404 "Ccfg.ypp"
    {
							(yyval.tuple).dimension = 0;
							strcpy((yyval.tuple).var_name,(yyvsp[(1) - (3)].lexeme));

				}
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 415 "Ccfg.ypp"
    {  		strcpy((yyval.tuple).var_name,(yyvsp[(1) - (1)].lexeme));
							(yyval.tuple).dimension = 0;
					 }
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 418 "Ccfg.ypp"
    {
							strcpy((yyval.tuple).var_name,(yyvsp[(1) - (2)].lexeme));
							(yyval.tuple).dimension = (yyvsp[(2) - (2)].integer);
		}
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 423 "Ccfg.ypp"
    {(yyval.integer) = (yyvsp[(4) - (4)].integer) +1; printf("%s",(yyvsp[(2) - (4)].lexeme));}
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 424 "Ccfg.ypp"
    {(yyval.integer) = 1;}
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 425 "Ccfg.ypp"
    { (yyval.integer) = 1;}
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 426 "Ccfg.ypp"
    {(yyval.integer) = (yyvsp[(4) - (4)].integer) + 1;}
    break;


/* Line 1787 of yacc.c  */
#line 1842 "Ccfg.tab.cpp"
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
#line 428 "Ccfg.ypp"


int main()
{
		no_line = 1;
		current_symbol_table = new symbol_table;
		current_symbol_table->parent = NULL;
        yyparse();
		return 0;
}