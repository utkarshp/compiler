/* A Bison parser, made by GNU Bison 3.0.2.  */

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "Ccfg.ypp" /* yacc.c:339  */

#include <stdlib.h>
#include <stdio.h>
#include <string>
#include<string.h>
#include<vector>
#include <cstring>
#include<iostream>
#include <utility>
#include <algorithm>
#include <map>
//#include "functions.h"

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"


using namespace std;
int no_line;
int totalerrs;
bool maindef;
struct symbol_table *current_symbol_table;
int max_index=0;
vector <struct code_element> global_code;
map <string, int> stackaddr;
string reg[32];
extern void codegen();
extern void create_mips();



int yylex();
int yyparse();
int yywrap();

int newTemp() {
	max_index++;
	return max_index;		
}


int check_keyword(string identifier);
void yyerror(const char *s,string color=KRED,string e="")
{
	if(color==KRED)
   		totalerrs++;
    fprintf(stderr, "%sline %d: %s %s%s",color.c_str(),no_line, s,e.c_str(),KNRM);

}

void *c;
FILE *text;
map <int,int> label_info;
int is_declaration = 0;
int global_scope = 1;



#line 131 "Ccfg.tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 67 "Ccfg.ypp" /* yacc.c:355  */

	#include "resources.h"

#line 165 "Ccfg.tab.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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
    T_PRINT_INT = 273,
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
    T_IO_INT = 291,
    T_IO_LONG_LONG = 292,
    T_IO_STRING = 293,
    T_IO_FLOAT = 294,
    T_MULT_SELF = 295,
    T_DIVIDE_SELF = 296,
    T_PLUS_SELF = 297,
    T_MINUS_SELF = 298,
    T_OR = 299,
    T_AND = 300,
    T_EQUAL_TEST = 301,
    T_NOT_EQUAL = 302,
    T_GREATER_THAN_EQUAL = 303,
    T_LESS_THAN_EQUAL = 304,
    DEREF = 305,
    UPLUS = 306,
    UMINUS = 307,
    T_ADD_ONE = 308,
    T_SUB_ONE = 309,
    T_THIS_POINTER = 310
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 71 "Ccfg.ypp" /* yacc.c:355  */

long long integer;
long double real;
char lexeme[10000];
struct lexemeNparam *lexemeNparamlist;
struct funcparams *paramlist;
struct attr *attributes;
//Yet to include exponential numbers and hexadecimals.

#line 243 "Ccfg.tab.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CCFG_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 258 "Ccfg.tab.cpp" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   421

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  190

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    66,     2,     2,     2,    64,    53,     2,
      41,    74,    62,    60,    43,    61,    72,    63,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    76,
      58,    48,    56,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    42,     2,    73,    52,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    40,    51,    75,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    44,    45,    46,    47,    49,
      50,    54,    55,    57,    59,    65,    67,    68,    69,    70,
      71,    77,    78
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   180,   180,   188,   197,   205,   207,   212,   218,   224,
     238,   243,   241,   289,   288,   336,   339,   344,   350,   357,
     358,   359,   360,   361,   362,   364,   370,   376,   391,   398,
     406,   415,   433,   444,   460,   471,   484,   488,   514,   528,
     545,   557,   563,   580,   590,   595,   610,   618,   618,   663,
     670,   677,   704,   723,   740,   750,   764,   780,   800,   796,
     835,   832,   866,   907,   956,   978,   999,  1020,  1041,  1062,
    1083,  1089,  1131,  1172,  1213,  1245,  1261,  1277,  1285,  1290,
    1341,  1343,  1345,  1363,  1369,  1380,  1392,  1476,  1485,  1493,
    1500,  1542,  1553,  1564,  1577
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_STRUCT", "T_BREAK", "T_CONTINUE",
  "T_TYPEDEF", "T_CHAR", "T_DOUBLE", "T_INT", "T_FLOAT", "T_LONG_LONG",
  "T_FOR", "T_IF", "T_ELSE", "T_WHILE", "T_GOTO", "T_RETURN",
  "T_PRINT_INT", "T_VOID", "T_SCANF", "T_SIZEOF", "T_UNSIGNED", "T_SIGNED",
  "T_CONST", "T_SHORT", "T_EXTERN", "T_LONG", "T_BOOL", "T_APOS",
  "T_DEC_FLOAT", "T_DEC_INT", "T_STRING", "T_HEADER", "ID", "T_MAIN",
  "T_IO_INT", "T_IO_LONG_LONG", "T_IO_STRING", "T_IO_FLOAT", "'{'", "'('",
  "'['", "','", "T_MULT_SELF", "T_DIVIDE_SELF", "T_PLUS_SELF",
  "T_MINUS_SELF", "'='", "T_OR", "T_AND", "'|'", "'^'", "'&'",
  "T_EQUAL_TEST", "T_NOT_EQUAL", "'>'", "T_GREATER_THAN_EQUAL", "'<'",
  "T_LESS_THAN_EQUAL", "'+'", "'-'", "'*'", "'/'", "'%'", "DEREF", "'!'",
  "UPLUS", "UMINUS", "T_ADD_ONE", "T_SUB_ONE", "T_THIS_POINTER", "'.'",
  "']'", "')'", "'}'", "';'", "\"true\"", "\"false\"", "$accept",
  "Marker_If", "Marker_Else", "Marker_For", "epsilon", "code1", "code",
  "decl", "$@1", "$@2", "type", "basic", "void", "func", "args",
  "brac_open", "brac_close", "block", "M", "S", "exprlist", "S1", "$@3",
  "init", "block_stmt", "$@4", "$@5", "expr", "assign_stmt", "number",
  "identifier", "array", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     123,    40,    91,    44,   295,   296,   297,   298,    61,   299,
     300,   124,    94,    38,   301,   302,    62,   303,    60,   304,
      43,    45,    42,    47,    37,   305,    33,   306,   307,   308,
     309,   310,    46,    93,    41,   125,    59,   311,   312
};
# endif

#define YYPACT_NINF -139

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-139)))

#define YYTABLE_NINF -9

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     114,   -23,   102,  -139,  -139,  -139,  -139,  -139,  -139,  -139,
    -139,    30,  -139,    32,   -26,  -139,    -6,   147,    -3,  -139,
     114,  -139,    33,    10,  -139,  -139,     3,    23,  -139,  -139,
      27,    40,  -139,   238,   238,  -139,  -139,    65,  -139,   238,
     238,   238,   238,   238,  -139,  -139,  -139,    24,   186,    28,
    -139,    38,  -139,   306,  -139,  -139,    68,    50,  -139,     6,
      19,  -139,    15,   147,  -139,   147,   225,   238,    93,   322,
     322,   238,   263,  -139,  -139,  -139,  -139,   103,    64,  -139,
    -139,  -139,  -139,  -139,  -139,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,  -139,  -139,    -1,
     -33,    67,    70,  -139,   -25,  -139,  -139,    69,   284,   225,
    -139,   -16,   322,  -139,   104,  -139,   105,    14,  -139,   186,
    -139,   225,   238,   238,   357,   357,   247,   247,   122,   122,
      20,    20,  -139,  -139,  -139,   322,  -139,   102,  -139,   104,
     104,  -139,  -139,   109,    77,   238,  -139,   103,   103,  -139,
    -139,   337,   348,    -1,  -139,  -139,   225,  -139,   109,   322,
    -139,  -139,  -139,    85,   186,  -139,  -139,    64,  -139,   225,
     149,   186,  -139,   152,  -139,    64,    96,  -139,   109,  -139,
     109,  -139,  -139,   186,  -139,    64,   186,  -139,    64,  -139
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    21,    23,    20,    22,    19,    26,    24,
      16,     0,     6,     5,     0,    18,     0,     0,     0,     1,
       0,     2,    89,     0,    17,    11,     0,     0,    25,    13,
       0,     0,     5,    50,     0,    88,    87,    89,    33,     0,
       0,     0,     0,     0,    41,    84,    85,    47,     0,     0,
      36,     0,    40,    46,    70,    82,    79,     0,     7,     0,
       0,    90,     0,     0,     9,     0,     0,     0,     0,    49,
      51,     5,     0,    80,    81,    83,    77,     0,     5,    38,
      15,    39,     5,     5,     5,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    28,     0,
       0,     0,     0,    30,     0,    12,    14,     0,     0,     0,
      44,     0,    43,    78,    89,    48,    54,    55,    34,     0,
      35,     0,     0,     0,    64,    69,    66,    68,    65,    67,
      62,    71,    72,    73,    74,    86,    32,     0,    27,    93,
      92,    29,     5,     0,     0,     0,    63,     0,     0,    37,
      45,    76,    75,     0,    94,    91,     0,     5,     0,    42,
      52,    53,    31,     0,     0,     5,     5,     5,    60,     0,
      56,     0,     5,     0,     3,     5,     0,     4,     0,    61,
       0,     5,     5,     0,    58,     5,     0,    57,     5,    59
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -139,   -13,  -139,  -139,   -67,  -139,   153,  -139,  -139,  -139,
       1,  -139,  -139,   151,   110,  -138,     4,   -28,   -98,   -11,
    -139,   -54,  -139,   -29,  -139,  -139,  -139,     5,   -70,  -139,
     -12,    -8
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   119,   173,   176,    21,    11,    12,    13,    63,    65,
      47,    15,    16,    25,   100,    48,   120,    49,    78,    79,
     111,    51,    77,   115,    52,   186,   171,    53,    54,    55,
      56,    61
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      20,    14,    26,    18,   110,   157,    50,   116,    22,    23,
     137,    17,   107,     3,     4,     5,     6,     7,   137,    68,
     165,    14,     3,     4,     5,     6,     7,   145,    27,    23,
      19,    57,    -8,   114,     9,   105,    24,   106,    69,    70,
     181,   138,   182,     9,    72,    73,    74,    75,    76,   141,
     101,    62,    50,   102,    50,   144,    28,   148,   146,    24,
      99,    24,    96,    99,    59,   117,   167,   150,    66,   121,
     122,   123,   108,   175,    59,    60,   112,   116,   116,    64,
      98,    67,    93,    94,    95,   185,    24,   136,   188,   103,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   163,   174,    80,   177,    71,    60,   149,     3,
       4,     5,     6,     7,    81,   172,    96,     1,   160,   161,
       2,     3,     4,     5,     6,     7,    97,   151,   152,   156,
       9,   154,   155,     8,   109,   117,   117,   114,   153,   118,
     139,   162,     9,   140,   164,   142,    60,    10,   147,    38,
     159,   158,   168,   169,     3,     4,     5,     6,     7,    30,
      31,   166,    32,    -5,    33,    34,   178,    29,   183,   184,
     180,   170,   104,    58,     0,     9,     0,    35,    36,   179,
       0,    37,    91,    92,    93,    94,    95,    38,    39,   187,
       0,     0,   189,     3,     4,     5,     6,     7,    30,    31,
       0,    32,     0,    33,    34,     0,     0,    40,    41,    42,
       0,     0,     0,    43,     9,     0,    35,    36,     0,     0,
      37,     0,     0,    44,    45,    46,     0,    39,     0,     0,
       0,     0,     3,     4,     5,     6,     7,     0,     0,     0,
       0,     0,    33,    34,     0,     0,    40,    41,    42,     0,
       0,     0,    43,     9,     0,    35,    36,     0,     0,    37,
       0,     0,    44,    45,    46,     0,    39,     0,    35,    36,
       0,     0,    37,     0,     0,     0,     0,     0,     0,    39,
       0,     0,     0,     0,     0,    40,    41,    42,     0,     0,
       0,    43,     0,     0,     0,     0,     0,     0,    40,    41,
      42,     0,    45,    46,    43,    89,    90,    91,    92,    93,
      94,    95,    83,    84,     0,    45,    46,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,     0,     0,
       0,     0,     0,    83,    84,     0,     0,   113,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    82,
       0,     0,     0,     0,     0,    83,    84,     0,   143,     0,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    83,    84,     0,     0,     0,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    84,     0,     0,
       0,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    87,    88,    89,    90,    91,    92,    93,
      94,    95
};

static const yytype_int16 yycheck[] =
{
      13,     0,    14,     2,    71,   143,    17,    77,    34,    35,
      43,    34,    66,     7,     8,     9,    10,    11,    43,    32,
     158,    20,     7,     8,     9,    10,    11,    43,    34,    35,
       0,    34,     0,    34,    28,    63,    62,    65,    33,    34,
     178,    74,   180,    28,    39,    40,    41,    42,    43,    74,
      31,    41,    63,    34,    65,   109,    62,    43,    74,    62,
      59,    62,    48,    62,    41,    77,   164,   121,    41,    82,
      83,    84,    67,   171,    41,    42,    71,   147,   148,    76,
      74,    41,    62,    63,    64,   183,    62,    99,   186,    74,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,   156,   170,    76,   172,    41,    42,   119,     7,
       8,     9,    10,    11,    76,   169,    48,     3,   147,   148,
       6,     7,     8,     9,    10,    11,    76,   122,   123,   142,
      28,   139,   140,    19,    41,   147,   148,    34,   137,    75,
      73,   153,    28,    73,   157,    76,    42,    33,    43,    40,
     145,    74,   165,   166,     7,     8,     9,    10,    11,    12,
      13,    76,    15,    14,    17,    18,    14,    16,   181,   182,
      74,   167,    62,    20,    -1,    28,    -1,    30,    31,   175,
      -1,    34,    60,    61,    62,    63,    64,    40,    41,   185,
      -1,    -1,   188,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    -1,    17,    18,    -1,    -1,    60,    61,    62,
      -1,    -1,    -1,    66,    28,    -1,    30,    31,    -1,    -1,
      34,    -1,    -1,    76,    77,    78,    -1,    41,    -1,    -1,
      -1,    -1,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    -1,    60,    61,    62,    -1,
      -1,    -1,    66,    28,    -1,    30,    31,    -1,    -1,    34,
      -1,    -1,    76,    77,    78,    -1,    41,    -1,    30,    31,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    -1,    -1,
      -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    -1,    77,    78,    66,    58,    59,    60,    61,    62,
      63,    64,    49,    50,    -1,    77,    78,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    -1,    49,    50,    -1,    -1,    74,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    43,
      -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    74,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    49,    50,    -1,    -1,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    50,    -1,    -1,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    56,    57,    58,    59,    60,    61,    62,
      63,    64
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,     8,     9,    10,    11,    19,    28,
      33,    84,    85,    86,    89,    90,    91,    34,    89,     0,
      80,    83,    34,    35,    62,    92,   109,    34,    62,    92,
      12,    13,    15,    17,    18,    30,    31,    34,    40,    41,
      60,    61,    62,    66,    76,    77,    78,    89,    94,    96,
      98,   100,   103,   106,   107,   108,   109,    34,    85,    41,
      42,   110,    41,    87,    76,    88,    41,    41,    80,   106,
     106,    41,   106,   106,   106,   106,   106,   101,    97,    98,
      76,    76,    43,    49,    50,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    48,    76,    74,    89,
      93,    31,    34,    74,    93,    96,    96,   100,   106,    41,
      83,    99,   106,    74,    34,   102,   107,   109,    75,    80,
      95,    80,    80,    80,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   109,    43,    74,    73,
      73,    74,    76,    74,   100,    43,    74,    43,    43,    98,
     100,   106,   106,    89,   110,   110,    80,    94,    74,   106,
     102,   102,   109,   100,    80,    94,    76,    97,    80,    80,
      95,   105,   100,    81,    83,    97,    82,    83,    14,    95,
      74,    94,    94,    80,    80,    97,   104,    95,    97,    95
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    79,    80,    81,    82,    83,    84,    85,    85,    86,
      86,    87,    86,    88,    86,    86,    86,    89,    89,    90,
      90,    90,    90,    90,    90,    91,    91,    92,    92,    92,
      92,    93,    93,    94,    95,    96,    96,    97,    97,    98,
      98,    98,    99,    99,    99,   100,   100,   101,   100,   100,
     100,   100,   102,   102,   102,   102,   103,   103,   104,   103,
     105,   103,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   107,   108,   108,   109,
     109,   110,   110,   110,   110
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     0,     1,     3,     1,     3,
       4,     0,     4,     0,     4,     4,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     4,     3,     4,
       3,     4,     2,     1,     1,     3,     1,     3,     1,     2,
       1,     1,     3,     1,     1,     4,     1,     0,     3,     2,
       1,     2,     3,     3,     1,     1,     8,    14,     0,    16,
       0,    10,     3,     4,     3,     3,     3,     3,     3,     3,
       1,     3,     3,     3,     3,     4,     4,     2,     3,     1,
       2,     2,     1,     2,     1,     1,     3,     1,     1,     1,
       2,     4,     3,     3,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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
      yychar = yylex ();
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
     '$$ = $1'.

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
#line 180 "Ccfg.ypp" /* yacc.c:1661  */
    {
				(yyval.integer) = global_code.size();
#ifdef debug
cout << "Marker if :" << (yyval.integer) << endl;
#endif

			}
#line 1529 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 3:
#line 188 "Ccfg.ypp" /* yacc.c:1661  */
    {
				(yyval.attributes) = new attr();
				(yyval.attributes)->nextlist = ((compiler *)c)->makelist(global_code.size());
				code_element temp;
				temp.data1 = Jump;

				global_code.push_back(temp);
			}
#line 1542 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 4:
#line 197 "Ccfg.ypp" /* yacc.c:1661  */
    {
				(yyval.integer) = global_code.size();
				code_element temp;
				temp.data1 = Jump;

				global_code.push_back(temp);
}
#line 1554 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 5:
#line 205 "Ccfg.ypp" /* yacc.c:1661  */
    {;}
#line 1560 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 6:
#line 208 "Ccfg.ypp" /* yacc.c:1661  */
    {
				((compiler *)c)->backpatch((yyvsp[0].attributes)->nextlist,global_code.size());
			}
#line 1568 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 7:
#line 212 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = new attr();
						(yyval.attributes)->nextlist = (yyvsp[0].attributes)->nextlist;
						((compiler *)c)->backpatch((yyvsp[-2].attributes)->nextlist,(yyvsp[-1].integer));
						free((yyvsp[-2].attributes));
						free((yyvsp[0].attributes));
						}
#line 1579 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 8:
#line 218 "Ccfg.ypp" /* yacc.c:1661  */
    {
				(yyval.attributes) = new attr();
				(yyval.attributes)->nextlist = (yyvsp[0].attributes)->nextlist;
			 	free((yyvsp[0].attributes));
			}
#line 1589 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 9:
#line 224 "Ccfg.ypp" /* yacc.c:1661  */
    {
							(yyval.attributes) = new attr();
							if(current_symbol_table->table.find(string( (yyvsp[-1].attributes)->var_name[0])) != current_symbol_table->table.end())
								yyerror("error: redeclaration \n");
							else
							{
								(yyvsp[-1].attributes)->my_type = (yyvsp[-2].attributes)->my_type;
								(yyvsp[-1].attributes)->dimension[0]= (yyvsp[-2].attributes)->dimension[0];
							} 
							

							free((yyvsp[-2].attributes));
							free((yyvsp[-1].attributes));
							}
#line 1608 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 10:
#line 238 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = new attr();

								free((yyvsp[-2].attributes));}
#line 1616 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 11:
#line 243 "Ccfg.ypp" /* yacc.c:1661  */
    {
		struct llm temp;

		temp.my_type= (yyvsp[-1].attributes)->my_type; 
		temp.dimension = (yyvsp[-1].attributes)->dimension[0];
		temp.funcline = global_code.size();
		int total = temp.paramlist.total = (yyvsp[0].lexemeNparamlist)->my_params.total;

		for (int i=0;i<total;i++)
		{
			temp.paramlist.dimension[i] = (yyvsp[0].lexemeNparamlist)->my_params.dimension[i];
			temp.paramlist.my_type[i] = (yyvsp[0].lexemeNparamlist)->my_params.my_type[i];
			temp.paramlist.my_args[i] = (yyvsp[0].lexemeNparamlist)->my_params.my_args[i];

		}

		current_symbol_table->table[(yyvsp[0].lexemeNparamlist)->lexeme]=(temp); 
		((compiler *)c)-> gencalleecode(1);
		
	}
#line 1641 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 12:
#line 264 "Ccfg.ypp" /* yacc.c:1661  */
    {
								(yyval.attributes) = new attr();
								if ((yyvsp[-3].attributes)->my_type == (yyvsp[0].attributes)->my_type)
								{
									if ((yyvsp[-3].attributes)->dimension[0] == (yyvsp[0].attributes)->dimension[0])
									{	/* Everything is fine. Enter in symbol table */
									}
									else
									{
										yyerror("Dimension Mismatch\n");
									}
								}
								else if((yyvsp[-3].attributes)->my_type == Void && !(yyvsp[0].attributes)->isreturn) ;
								else yyerror("Type mismatch: Return type doesn't match declared type\n");

								(yyval.attributes)->nextlist = (yyvsp[0].attributes)->nextlist;

								free((yyvsp[-3].attributes));
								free((yyvsp[-2].lexemeNparamlist));
								free((yyvsp[0].attributes));

								((compiler *)c)-> gencalleecode(0);
								((compiler *)c)-> writemipscode("jr","$ra");
								}
#line 1670 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 13:
#line 289 "Ccfg.ypp" /* yacc.c:1661  */
    {
		struct llm temp;

		temp.my_type= (yyvsp[-1].attributes)->my_type; 
		temp.dimension = (yyvsp[-1].attributes)->dimension[0];
		temp.funcline = global_code.size();
		int total = temp.paramlist.total = (yyvsp[0].lexemeNparamlist)->my_params.total;

		for (int i=0;i<total;i++)
		{
			temp.paramlist.dimension[i] = (yyvsp[0].lexemeNparamlist)->my_params.dimension[i];
			temp.paramlist.my_type[i] = (yyvsp[0].lexemeNparamlist)->my_params.my_type[i];
			temp.paramlist.my_args[i] = (yyvsp[0].lexemeNparamlist)->my_params.my_args[i];

		}

		current_symbol_table->table[(yyvsp[0].lexemeNparamlist)->lexeme]=(temp); 
		((compiler *)c)-> gencalleecode(1);

		
	}
#line 1696 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 14:
#line 311 "Ccfg.ypp" /* yacc.c:1661  */
    {
								(yyval.attributes) = new attr();
								if ((yyvsp[-3].attributes)->my_type == (yyvsp[0].attributes)->my_type && (yyvsp[0].attributes)->isreturn)
								{
									if ((yyvsp[-3].attributes)->dimension[0] == (yyvsp[0].attributes)->dimension[0])
									{	/* Everything is fine. Enter in symbol table */
									}
									else
									{
										yyerror("Dimension Mismatch\n");
									}
								}
								else if((yyvsp[-3].attributes)->my_type == Void && !(yyvsp[0].attributes)->isreturn) ;
								else yyerror("Type mismatch: Return type doesn't match declared type\n");

								(yyval.attributes)->nextlist = (yyvsp[0].attributes)->nextlist;


								free((yyvsp[-3].attributes));
								free((yyvsp[-2].lexemeNparamlist));
								free((yyvsp[0].attributes));

								((compiler *)c)-> gencalleecode(0);
								((compiler *)c)-> writemipscode("jr","$ra");
								}
#line 1726 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 15:
#line 336 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = new attr();
								free((yyvsp[-1].attributes));
								}
#line 1734 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 16:
#line 339 "Ccfg.ypp" /* yacc.c:1661  */
    {
									(yyval.attributes) = new attr();
}
#line 1742 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 17:
#line 344 "Ccfg.ypp" /* yacc.c:1661  */
    {
								(yyval.attributes) = new attr();
								(yyval.attributes)->my_type = (yyvsp[-1].attributes)->my_type;
								(yyval.attributes)->dimension[0] = (yyvsp[-1].attributes)->dimension[0]+1;
								free((yyvsp[-1].attributes));
								}
#line 1753 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 18:
#line 350 "Ccfg.ypp" /* yacc.c:1661  */
    {
				(yyval.attributes) = new attr(); 
				(yyval.attributes)->my_type=(yyvsp[0].attributes)->my_type; 
				(yyval.attributes)->dimension[0] = (yyvsp[0].attributes)->dimension[0];
				free((yyvsp[0].attributes));
				}
#line 1764 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 19:
#line 357 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = new attr();(yyval.attributes)->my_type=Long_long; (yyval.attributes)->dimension[0] = 0; }
#line 1770 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 20:
#line 358 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = new attr();(yyval.attributes)->my_type=Int; (yyval.attributes)->dimension[0] = 0; }
#line 1776 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 21:
#line 359 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = new attr();(yyval.attributes)->my_type=Char; (yyval.attributes)->dimension[0] = 0; }
#line 1782 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 22:
#line 360 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = new attr();(yyval.attributes)->my_type=Float; (yyval.attributes)->dimension[0] = 0; }
#line 1788 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 23:
#line 361 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = new attr();(yyval.attributes)->my_type=Double; (yyval.attributes)->dimension[0] = 0; }
#line 1794 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 24:
#line 362 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = new attr();(yyval.attributes)->my_type=Bool; (yyval.attributes)->dimension[0] = 0; }
#line 1800 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 25:
#line 364 "Ccfg.ypp" /* yacc.c:1661  */
    {
				(yyval.attributes) = new attr();
				(yyval.attributes)->my_type = (yyvsp[-1].attributes)->my_type;
				(yyval.attributes)->dimension[0] = (yyvsp[-1].attributes)->dimension[0]+1;
				free((yyvsp[-1].attributes));
				}
#line 1811 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 26:
#line 370 "Ccfg.ypp" /* yacc.c:1661  */
    {
				(yyval.attributes) = new attr();
				(yyval.attributes)->my_type = Void;
				(yyval.attributes)->dimension[0] = 0;
				}
#line 1821 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 27:
#line 376 "Ccfg.ypp" /* yacc.c:1661  */
    {
						(yyval.lexemeNparamlist) = new lexemeNparam();
						(yyval.lexemeNparamlist)->lexeme = string((yyvsp[-3].lexeme));
						int total = (yyval.lexemeNparamlist)->my_params.total = (yyvsp[-1].paramlist)->total;

						for (int i=0;i<total;i++)
						{
							(yyval.lexemeNparamlist)->my_params.dimension[i] = (yyvsp[-1].paramlist)->dimension[i];
							(yyval.lexemeNparamlist)->my_params.my_type[i] = (yyvsp[-1].paramlist)->my_type[i];
							(yyval.lexemeNparamlist)->my_params.my_args[i] = (yyvsp[-1].paramlist)->my_args[i];

						}

						free((yyvsp[-1].paramlist));
						}
#line 1841 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 28:
#line 391 "Ccfg.ypp" /* yacc.c:1661  */
    {
							(yyval.lexemeNparamlist) = new lexemeNparam();
							(yyval.lexemeNparamlist)->lexeme = string((yyvsp[-2].lexeme));
							(yyval.lexemeNparamlist)->my_params.total = 0;

							}
#line 1852 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 29:
#line 398 "Ccfg.ypp" /* yacc.c:1661  */
    {
							(yyval.lexemeNparamlist) = new lexemeNparam();
							(yyval.lexemeNparamlist)->lexeme = "main";
							if (!maindef)
								maindef = 1;
							else yyerror("Conflicting declaration of function main");
							 free((yyvsp[-1].paramlist));
							}
#line 1865 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 30:
#line 406 "Ccfg.ypp" /* yacc.c:1661  */
    {
							(yyval.lexemeNparamlist) = new lexemeNparam();
							(yyval.lexemeNparamlist)->lexeme = "main";
							if (!maindef)
								maindef = 1;
							else yyerror("Conflicting declaration of function main");

							}
#line 1878 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 31:
#line 415 "Ccfg.ypp" /* yacc.c:1661  */
    {
									(yyval.paramlist) = new funcparams();

									for (int i=0;i < (yyvsp[-3].paramlist)->total;i++)
									{
										(yyval.paramlist)->my_args[i] = (yyvsp[-3].paramlist)->my_args[i];
										(yyval.paramlist) -> my_type[i]  =    (yyvsp[-3].paramlist)-> my_type[i];
										(yyval.paramlist)->dimension[i] = (yyvsp[-3].paramlist)->dimension[i];
									}
									int total = (yyval.paramlist)->total = (yyvsp[-3].paramlist)->total+1;
									total--;
									(yyval.paramlist)->my_args[total] = (yyvsp[0].attributes)->place;
									(yyval.paramlist)->my_type[total] = (yyvsp[-1].attributes)->my_type;
									(yyval.paramlist)->dimension[total] = (yyvsp[-1].attributes)->dimension[0] + (yyvsp[0].attributes)->dimension[0];
									free((yyvsp[-3].paramlist)); 
									free((yyvsp[-1].attributes));
									delete (yyvsp[0].attributes);
								}
#line 1901 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 32:
#line 433 "Ccfg.ypp" /* yacc.c:1661  */
    {
							(yyval.paramlist) = new funcparams();
							int total = 0;
							(yyval.paramlist)->my_args[total] = (yyvsp[0].attributes)->place;
							(yyval.paramlist)->my_type[total] = (yyvsp[-1].attributes)->my_type;
							(yyval.paramlist)->dimension[total] = (yyvsp[-1].attributes)->dimension[0] + (yyvsp[0].attributes)->dimension[0];
							(yyval.paramlist)->total = 1;
							free((yyvsp[-1].attributes)); 
							free((yyvsp[0].attributes));
							}
#line 1916 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 33:
#line 444 "Ccfg.ypp" /* yacc.c:1661  */
    { 
					(yyval.attributes) = new attr();

					#ifdef debug2
						printf("creating new symbol table\n");
					#endif
				  struct symbol_table *temp = new  symbol_table;
				  current_symbol_table->children.push_back(temp); 
				  temp->scope_number = global_scope;
				  global_scope = global_scope + 1;
				  temp->parent = current_symbol_table;

				  current_symbol_table = temp;
				 
		 }
#line 1936 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 34:
#line 460 "Ccfg.ypp" /* yacc.c:1661  */
    {
				(yyval.attributes) = new attr();

				#ifdef debug
					printf("destroying symbol table\n");
				#endif
				  struct symbol_table *temp = current_symbol_table;
				  current_symbol_table = temp->parent;
				  delete temp;
		 }
#line 1951 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 35:
#line 471 "Ccfg.ypp" /* yacc.c:1661  */
    {	
									#ifdef debug
						 				cout << "block -> brac_open M brac_close \n";
						 			#endif
									(yyval.attributes) = new attr(); 
									(yyval.attributes)->my_type = (yyvsp[-1].attributes)->my_type;
									(yyval.attributes)->dimension[0] = (yyvsp[-1].attributes)->dimension[0];
									(yyval.attributes)->isreturn = (yyvsp[-1].attributes)->isreturn;
									(yyval.attributes)->nextlist = (yyvsp[-1].attributes)->nextlist;

									free((yyvsp[-1].attributes));
									}
#line 1968 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 36:
#line 484 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = new attr(); free((yyvsp[0].attributes));
}
#line 1975 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 37:
#line 489 "Ccfg.ypp" /* yacc.c:1661  */
    {
				(yyval.attributes) = new attr();
				#ifdef debug
					cout << "M -> S M\n";
				#endif

				if ((yyvsp[-2].attributes)->isreturn)
					(yyval.attributes)->my_type = (yyvsp[-2].attributes)->my_type;
				else if ((yyvsp[0].attributes)->isreturn)
					(yyval.attributes)->my_type = (yyvsp[0].attributes)->my_type;
				else (yyval.attributes)->my_type = Useless;
				(yyval.attributes)->dimension[0] = (yyvsp[-2].attributes)->dimension[0];
				(yyval.attributes)->isreturn = (yyvsp[-2].attributes)->isreturn || (yyvsp[0].attributes)->isreturn;
				
				if ((yyval.attributes)->my_type!=(yyvsp[0].attributes)->my_type && (yyvsp[-2].attributes)->isreturn && (yyvsp[0].attributes)->isreturn )
					yyerror("Different return types for same function\n");
#ifdef debug2
	printf("types are: %d %d\n",(yyval.attributes)->my_type,(yyvsp[0].attributes)->my_type);
#endif
				
				((compiler *)c)->backpatch((yyvsp[-2].attributes)->nextlist,(yyvsp[-1].integer));
				(yyval.attributes)->nextlist = (yyvsp[0].attributes)->nextlist;
				free((yyvsp[-2].attributes));
				free((yyvsp[0].attributes));
			}
#line 2005 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 38:
#line 514 "Ccfg.ypp" /* yacc.c:1661  */
    {
				#ifdef debug
						cout << "M -> S\n";
				#endif
				(yyval.attributes) = new attr();
				(yyval.attributes)->my_type = (yyvsp[0].attributes)->my_type;
				(yyval.attributes)->dimension[0] = (yyvsp[0].attributes)->dimension[0];	
				(yyval.attributes)->isreturn = (yyvsp[0].attributes)->isreturn;
				(yyval.attributes)->nextlist = (yyvsp[0].attributes)->nextlist;

				free((yyvsp[0].attributes));
				}
#line 2022 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 39:
#line 528 "Ccfg.ypp" /* yacc.c:1661  */
    {
				#ifdef debug
						cout << "S -> S1\n";
				#endif
				(yyval.attributes) = new attr();
				
				
				(yyval.attributes)->my_type = (yyvsp[-1].attributes)->my_type;
				(yyval.attributes)->isreturn = (yyvsp[-1].attributes)->isreturn;

				
				(yyval.attributes)->dimension[0] = (yyvsp[-1].attributes)->dimension[0];

				(yyval.attributes)->nextlist = (yyvsp[-1].attributes)->nextlist;

				free((yyvsp[-1].attributes));
			}
#line 2044 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 40:
#line 545 "Ccfg.ypp" /* yacc.c:1661  */
    {
					#ifdef debug
							cout << "S -> block_stmt\n";
					#endif
					(yyval.attributes) = new attr();
					(yyval.attributes)->my_type = (yyvsp[0].attributes)->my_type;
					(yyval.attributes)->isreturn = (yyvsp[0].attributes)->isreturn;

					(yyval.attributes)->nextlist = (yyvsp[0].attributes)->nextlist;
					(yyval.attributes)->dimension[0] = (yyvsp[0].attributes)->dimension[0];
					free((yyvsp[0].attributes));
					}
#line 2061 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 41:
#line 557 "Ccfg.ypp" /* yacc.c:1661  */
    {
				(yyval.attributes) = new attr();
	}
#line 2069 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 42:
#line 563 "Ccfg.ypp" /* yacc.c:1661  */
    {
				(yyval.paramlist) = new funcparams();
				for (int i=0;i < (yyvsp[-2].paramlist)->total;i++)
				{
					(yyval.paramlist)->my_args[i] = (yyvsp[-2].paramlist)->my_args[i];
					(yyval.paramlist) -> my_type[i]  =    (yyvsp[-2].paramlist)-> my_type[i];
					(yyval.paramlist)->dimension[i] = (yyvsp[-2].paramlist)->dimension[i];
				}
				int total = (yyval.paramlist)->total = (yyvsp[-2].paramlist)->total+1;
				total--;
				(yyval.paramlist)->my_args[total] = (yyvsp[0].attributes)->place;
				(yyval.paramlist)->my_type[total] = (yyvsp[0].attributes)->my_type;
				(yyval.paramlist)->dimension[total] = (yyvsp[0].attributes)->dimension[0];
				delete (yyvsp[-2].paramlist);
				delete (yyvsp[0].attributes);
	}
#line 2090 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 43:
#line 580 "Ccfg.ypp" /* yacc.c:1661  */
    {
				(yyval.paramlist) = new funcparams();
				int total = 0;
				(yyval.paramlist)->my_args[total] = (yyvsp[0].attributes)->place;
				(yyval.paramlist)->my_type[total] = (yyvsp[0].attributes)->my_type;
				(yyval.paramlist)->dimension[total] = (yyvsp[0].attributes)->dimension[0];
				(yyval.paramlist)->total = 1;
				delete (yyvsp[0].attributes);
	}
#line 2104 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 44:
#line 590 "Ccfg.ypp" /* yacc.c:1661  */
    {
				(yyval.paramlist) = new funcparams();
	}
#line 2112 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 45:
#line 595 "Ccfg.ypp" /* yacc.c:1661  */
    {
					(yyval.attributes) = new attr(); 
					(yyval.attributes)->my_type = (yyvsp[0].attributes)->my_type; 
					(yyval.attributes)->dimension[0] = (yyvsp[0].attributes)->dimension[0];
					(yyval.attributes)->isreturn = (yyvsp[0].attributes)->isreturn;

					((compiler *)c)->backpatch((yyvsp[-3].attributes)->truelist,(yyvsp[-1].integer));
					((compiler *)c)->backpatch((yyvsp[-3].attributes)->falselist,(yyvsp[-1].integer));
					(yyval.attributes)->truelist = (yyvsp[0].attributes)->truelist;
					(yyval.attributes)->falselist = (yyvsp[0].attributes)->falselist;

					free((yyvsp[-3].attributes));
					free((yyvsp[0].attributes));
				}
#line 2131 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 46:
#line 610 "Ccfg.ypp" /* yacc.c:1661  */
    {
				(yyval.attributes) = new attr(); 
				(yyval.attributes)->my_type = Bool;
				(yyval.attributes)->dimension[0]= (yyvsp[0].attributes)->dimension[0]; 
				(yyval.attributes)->truelist = (yyvsp[0].attributes)->truelist; 
				(yyval.attributes)->falselist = (yyvsp[0].attributes)->falselist; 
				free((yyvsp[0].attributes));
			}
#line 2144 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 47:
#line 618 "Ccfg.ypp" /* yacc.c:1661  */
    {is_declaration=1;}
#line 2150 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 48:
#line 618 "Ccfg.ypp" /* yacc.c:1661  */
    {
						is_declaration = 0;
			#ifdef debug
						 cout << "S1 -> type init\n";
			#endif
			(yyval.attributes) = new attr();
			struct llm temp;

			temp.my_type= (yyvsp[-2].attributes)->my_type; 
			for(int i=0;i<(yyvsp[0].attributes)->index;i++) {
				/* checking if variable is already declared */

						if(current_symbol_table->table.find(string( (yyvsp[0].attributes)->var_name[i])) != current_symbol_table->table.end())
							yyerror("error: redeclaration \n");
					
				/*   ------------------------------------ */
						else {
							temp.dimension = (yyvsp[0].attributes)->dimension[i];
							temp.element_size = (yyvsp[0].attributes)->element_size[i];
							if(temp.dimension==2) 
								temp.array_size = (yyvsp[0].attributes)->array_size[i];

							#ifdef debug2
								if(temp.dimension>=1) {
									printf("entering in symbol table with variable %s dimension %d and array_size %d\n",(yyvsp[0].attributes)->var_name[i],temp.dimension,temp.array_size);
								}
							#endif
							int j = check_keyword(string((yyvsp[0].attributes)->var_name[i])); // 1 if error
							if(j==1)
								yyerror("error: variable name cannot be a keyword \n");
							else if(j==0)
								current_symbol_table->table[string((yyvsp[0].attributes)->var_name[i])]=(temp);
						}

			}
			#ifdef debug
			printf("Variables declared \n"); 
				for(int i=0;i<(yyvsp[0].attributes)->index;i++) {
					printf("%s %d\n",(yyvsp[0].attributes)->var_name[i],(yyvsp[0].attributes)->dimension[i]);
				}
			#endif
				(yyval.attributes)->my_type = Useless;
				free((yyvsp[-2].attributes));
				free((yyvsp[0].attributes));
	}
#line 2200 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 49:
#line 663 "Ccfg.ypp" /* yacc.c:1661  */
    {
								(yyval.attributes) = new attr();
								(yyval.attributes)->isreturn = 1;
								(yyval.attributes)->my_type = (yyvsp[0].attributes)->my_type;
								(yyval.attributes)->dimension[0] = (yyvsp[0].attributes)->dimension[0];
								free((yyvsp[0].attributes));
								}
#line 2212 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 50:
#line 670 "Ccfg.ypp" /* yacc.c:1661  */
    {
								(yyval.attributes)->isreturn = 1;
								(yyval.attributes) = new attr();
								(yyval.attributes)->my_type = Void;
								(yyval.attributes)->dimension[0] = 0;
						
								}
#line 2224 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 51:
#line 677 "Ccfg.ypp" /* yacc.c:1661  */
    {
#ifdef debug2
cout << "printing rule\n";
#endif
									(yyval.attributes) = new attr();
									int t = newTemp();

									code_element temp;
									temp.data1 = Assignment;
									temp.data2 = "";
									temp.result.temp = t;
									temp.result.args_type = 2;
									temp.arg2 = (yyvsp[0].attributes)->place;
#ifdef debug2
cout << "IDENTIFIER is " << (yyvsp[0].attributes)->place.var << endl;
#endif
									global_code.push_back(temp) ;
									((compiler *)c)->writemipscode("move","$a0",",$"+to_string(t) );
									((compiler *)c)->writemipscode("li","$v0,","1");
									((compiler *)c)->writemipscode("syscall");
									delete (yyvsp[0].attributes);
#ifdef debug2

#endif
	}
#line 2254 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 52:
#line 705 "Ccfg.ypp" /* yacc.c:1661  */
    {
						 		#ifdef debug
						 				cout << "init -> assign_stmt ',' init\n";
						 		#endif
						 		(yyval.attributes) = new attr();
								strcpy((yyval.attributes)->var_name[0],(yyvsp[-2].attributes)->var_name[0]);
								(yyval.attributes)->dimension[0] = (yyvsp[-2].attributes)->dimension[0];
								(yyval.attributes)->index = 1;
								for(int i=0; i<(yyvsp[0].attributes)->index; i++) {
									(yyval.attributes)->dimension[(yyval.attributes)->index] = (yyvsp[0].attributes)->dimension[i];
									(yyval.attributes)->array_size[(yyval.attributes)->index] = (yyvsp[0].attributes)->array_size[i];
									(yyval.attributes)->element_size[(yyval.attributes)->index] = (yyvsp[0].attributes)->element_size[i];
									strcpy((yyval.attributes)->var_name[(yyval.attributes)->index],(yyvsp[0].attributes)->var_name[i]);
									(yyval.attributes)->index++;
								}
								free((yyvsp[-2].attributes));
								free((yyvsp[0].attributes));
						}
#line 2277 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 53:
#line 723 "Ccfg.ypp" /* yacc.c:1661  */
    {
								(yyval.attributes) = new attr();
								strcpy((yyval.attributes)->var_name[0],(yyvsp[-2].attributes)->var_name[0]);
								(yyval.attributes)->dimension[0] = (yyvsp[-2].attributes)->dimension[0];
								(yyval.attributes)->array_size[0] = (yyvsp[-2].attributes)->array_size[0];
								(yyval.attributes)->element_size[0] = (yyvsp[-2].attributes)->element_size[0];
								(yyval.attributes)->index = 1;
								for(int i=0; i<(yyvsp[0].attributes)->index; i++) {
									(yyval.attributes)->dimension[(yyval.attributes)->index] = (yyvsp[0].attributes)->dimension[i];
									(yyval.attributes)->array_size[(yyval.attributes)->index] = (yyvsp[0].attributes)->array_size[i];
									(yyval.attributes)->element_size[(yyval.attributes)->index] = (yyvsp[0].attributes)->element_size[i];
									strcpy((yyval.attributes)->var_name[(yyval.attributes)->index],(yyvsp[0].attributes)->var_name[i]);
									(yyval.attributes)->index++;
								}
								free((yyvsp[-2].attributes));
								free((yyvsp[0].attributes));
							}
#line 2299 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 54:
#line 740 "Ccfg.ypp" /* yacc.c:1661  */
    {
						#ifdef debug
						 				cout << "init -> assign_stmt\n";
						 		#endif
						(yyval.attributes) = new attr();
						strcpy((yyval.attributes)->var_name[0],(yyvsp[0].attributes)->var_name[0]);
						(yyval.attributes)->dimension[0] = (yyvsp[0].attributes)->dimension[0];
						(yyval.attributes)->index = 1;
						free((yyvsp[0].attributes));
					}
#line 2314 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 55:
#line 750 "Ccfg.ypp" /* yacc.c:1661  */
    {
					(yyval.attributes) = new attr();
					strcpy((yyval.attributes)->var_name[0],(yyvsp[0].attributes)->var_name[0]);
					(yyval.attributes)->dimension[0] = (yyvsp[0].attributes)->dimension[0];
					(yyval.attributes)->array_size[0] = (yyvsp[0].attributes)->array_size[0];
					(yyval.attributes)->element_size[0] = (yyvsp[0].attributes)->element_size[0];
					#ifdef debug2
								printf("%s has dimension %d\n",(yyval.attributes)->var_name[0],(yyvsp[0].attributes)->array_size[0]);
					#endif
					(yyval.attributes)->index = 1;
					free((yyvsp[0].attributes));
				  }
#line 2331 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 56:
#line 764 "Ccfg.ypp" /* yacc.c:1661  */
    {
											#ifdef debug
												cout << "block_expr : T_IF '('expr')' '{'M'}'";
											#endif
											(yyval.attributes) = new attr();
											if ((yyvsp[-5].attributes)->my_type != Bool) yyerror("condition is not bool inside if statement");
											(yyval.attributes)->my_type = (yyvsp[-1].attributes)->my_type;
											(yyval.attributes)->dimension[0]= (yyvsp[-1].attributes)->dimension[0];

											((compiler *)c)->backpatch((yyvsp[-5].attributes)->truelist, (yyvsp[-2].integer));
											(yyval.attributes)->nextlist = ((compiler *)c)->merge_list((yyvsp[-5].attributes)->falselist,(yyvsp[-1].attributes)->nextlist);
											
											delete (yyvsp[-3].attributes);
											delete (yyvsp[0].attributes);
 											free((yyvsp[-5].attributes)); free((yyvsp[-1].attributes));
}
#line 2352 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 57:
#line 781 "Ccfg.ypp" /* yacc.c:1661  */
    {
												(yyval.attributes) = new attr();
												if ((yyvsp[-11].attributes)->my_type != Bool) yyerror("Condition is not bool inside if statement\n");										
												((compiler *)c)->backpatch((yyvsp[-11].attributes)->truelist, (yyvsp[-8].integer));
												((compiler *)c)->backpatch((yyvsp[-11].attributes)->falselist, (yyvsp[-2].integer));
												vector <int> temp;
												temp = ((compiler *)c)->merge_list((yyvsp[-7].attributes)->nextlist, (yyvsp[-5].attributes)->nextlist);
												(yyval.attributes)->nextlist = ((compiler *)c)->merge_list(temp, (yyvsp[-1].attributes)->nextlist);
												
												delete (yyvsp[-9].attributes);
												delete (yyvsp[-6].attributes),delete (yyvsp[-3].attributes),delete (yyvsp[0].attributes);
	 											free((yyvsp[-11].attributes)); free((yyvsp[-7].attributes)); free((yyvsp[-1].attributes));
	 											free((yyvsp[-5].attributes));
	 										}
#line 2371 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 58:
#line 800 "Ccfg.ypp" /* yacc.c:1661  */
    {
		((compiler *)c)-> gencalleecode(1);
	}
#line 2379 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 59:
#line 804 "Ccfg.ypp" /* yacc.c:1661  */
    {
											(yyval.attributes) = new attr();
											
											if((yyvsp[-10].attributes)->my_type != Bool) yyerror("Condition not bool in For statement\n");

											(yyval.attributes)->my_type = (yyvsp[-1].attributes)->my_type;
											(yyval.attributes)->dimension[0]= (yyvsp[-1].attributes)->dimension[0];										
											
											(yyval.attributes)->nextlist = (yyvsp[-10].attributes)->falselist;
											((compiler *)c)->backpatch((yyvsp[-1].attributes)->nextlist, (yyvsp[-8].integer));
											global_code[(yyvsp[-6].integer)].result.int_val = (yyvsp[-11].integer);
											((compiler *)c)->backpatch((yyvsp[-10].attributes)->truelist, (yyvsp[-3].integer));
											code_element temp;
											temp.data1 = Jump;
											temp.result.int_val = (yyvsp[-8].integer);
											((compiler *)c)-> gencalleecode(0);
										

											global_code.push_back(temp);

											free((yyvsp[-13].attributes));
											free((yyvsp[-10].attributes));
											free((yyvsp[-7].attributes));
											free((yyvsp[-4].attributes));
											free((yyvsp[0].attributes));
											free((yyvsp[-1].attributes));
										}
#line 2411 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 60:
#line 835 "Ccfg.ypp" /* yacc.c:1661  */
    {
	((compiler *)c)-> gencalleecode(1);

}
#line 2420 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 61:
#line 839 "Ccfg.ypp" /* yacc.c:1661  */
    {
									(yyval.attributes) = new attr();

									if((yyvsp[-6].attributes)->my_type != Bool) yyerror("Condition not bool in While statement\n");
									
									(yyval.attributes)->my_type = (yyvsp[-1].attributes)->my_type;
									(yyval.attributes)->dimension[0]= (yyvsp[-1].attributes)->dimension[0];

									((compiler *)c)->backpatch((yyvsp[-1].attributes)->nextlist, (yyvsp[-8].integer));
									((compiler *)c)->backpatch((yyvsp[-6].attributes)->truelist, (yyvsp[-3].integer));
									(yyval.attributes)->nextlist = (yyvsp[-6].attributes)->falselist;
#ifdef debug
cout << "Marker if :" << (yyvsp[-3].integer) << endl;
#endif
									struct code_element temp;
									temp.data1 = Jump;
									temp.result.int_val = (yyvsp[-8].integer);
									((compiler *)c)-> gencalleecode(0);
									global_code.push_back(temp);

									delete (yyvsp[-4].attributes);
									delete (yyvsp[0].attributes); 
									free((yyvsp[-6].attributes));
									free((yyvsp[-1].attributes));
	}
#line 2450 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 62:
#line 866 "Ccfg.ypp" /* yacc.c:1661  */
    { 
						(yyval.attributes) = new attr();
						
						(yyval.attributes)->place.temp = newTemp();
						(yyval.attributes)->place.args_type = 2;
						struct code_element temp_code;
						temp_code.arg1 = (yyvsp[-2].attributes)->place;
						temp_code.arg2 = (yyvsp[0].attributes)->place;
						temp_code.result = (yyval.attributes)->place;
						temp_code.data2 = "+";
						temp_code.data1 = Assignment;

						(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[-2].attributes)->code.begin(),(yyvsp[-2].attributes)->code.end());
						(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[0].attributes)->code.begin(),(yyvsp[0].attributes)->code.end());
						(yyval.attributes)->code.push_back(temp_code);
						global_code.push_back(temp_code);



						#ifdef debug
							printf("in expr-> expr+expr\n");

						#endif

						if((yyvsp[-2].attributes)->my_type==Char || (yyvsp[-2].attributes)->my_type==Bool)
							yyerror("error: PLUS does not support bool and char\n");
						else if((yyvsp[0].attributes)->my_type==Char || (yyvsp[0].attributes)->my_type==Bool)
							yyerror("error: PLUS does not support bool and char\n");
						else {
							if((yyvsp[-2].attributes)->my_type==Double || (yyvsp[0].attributes)->my_type==Double )
								(yyval.attributes)->my_type=Double;
							else if((yyvsp[-2].attributes)->my_type==Float || (yyvsp[0].attributes)->my_type==Float)
								(yyval.attributes)->my_type=Float;
							else if((yyvsp[-2].attributes)->my_type==Long_long || (yyvsp[0].attributes)->my_type==Long_long)
								(yyval.attributes)->my_type=Long_long;
							else 
								(yyval.attributes)->my_type=(yyvsp[-2].attributes)->my_type;
						}
						free((yyvsp[-2].attributes));
						free((yyvsp[0].attributes));
					}
#line 2496 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 63:
#line 907 "Ccfg.ypp" /* yacc.c:1661  */
    {
								(yyval.attributes) = new attr(); 
								char *s;
								symbol_table *temp = current_symbol_table;
								while (temp->parent != NULL)
									temp = temp->parent;
								if (temp->table.find(string( (yyvsp[-3].lexeme))) != temp->table.end())
								{
									funcparams paramlist = temp->table[(string((yyvsp[-3].lexeme) ))].paramlist;
									if (paramlist.total != (yyvsp[-1].paramlist)->total)
									{
										sprintf(s,"%d arguments expected, %d given\n",paramlist.total,(yyvsp[-1].paramlist)->total);
										yyerror(s);
									}
								 
									else for (int i=0;i<paramlist.total;i++)
									{
										if (paramlist.my_type[i] != (yyvsp[-1].paramlist)->my_type[i])
										{
											sprintf(s,"Cannot convert %s to %s in argument %d of \
														function",((compiler *)c)->enumtostring((yyvsp[-1].paramlist)->\
														my_type[i]).c_str(), ((compiler *)c)->enumtostring(\
														paramlist.my_type[i]).c_str(),i );

											yyerror(s);
										}
									}
									((compiler *)c)->gencallercode(1,paramlist);
									code_element callerjump;
									callerjump.data1 = Jump;
									callerjump.result.int_val = temp->table[string((yyvsp[-3].lexeme))].funcline;
									printf("testing in func call%d\n",temp->table[string((yyvsp[-3].lexeme))].funcline);
									callerjump.result.args_type = 3;
									global_code.push_back(callerjump);
									((compiler *)c)->gencallercode(0,paramlist);

									int t=newTemp();
									callerjump.data1 = Assignment;
									callerjump.result.temp = t;
									callerjump.result.args_type = 2;
									callerjump.arg1.temp = 2;
									callerjump.arg1.args_type = 2;
									global_code.push_back(callerjump);

									(yyval.attributes)->place = callerjump.result;
								}								

								delete (yyvsp[-1].paramlist);
}
#line 2550 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 64:
#line 956 "Ccfg.ypp" /* yacc.c:1661  */
    {
						
						(yyval.attributes) = new attr;
						(yyval.attributes)->truelist = ((compiler *)c)->makelist(global_code.size());
						(yyval.attributes)->falselist = ((compiler *)c)->makelist(global_code.size()+1);
						struct code_element temp;
						temp.data1 = Jump;
						temp.data2 = "==";
						temp.arg1 = (yyvsp[-2].attributes)->place;
						temp.arg2 = (yyvsp[0].attributes)->place;

						global_code.push_back(temp);

						struct code_element temp2;
						temp2.data1 = Jump;

						global_code.push_back(temp2);

						(yyval.attributes)->my_type=Bool;
						free((yyvsp[-2].attributes));
						free((yyvsp[0].attributes));
					}
#line 2577 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 65:
#line 978 "Ccfg.ypp" /* yacc.c:1661  */
    {
						(yyval.attributes) = new attr;
						(yyval.attributes)->truelist = ((compiler *)c)->makelist(global_code.size());
						(yyval.attributes)->falselist = ((compiler *)c)->makelist(global_code.size()+1);
						struct code_element temp;
						temp.data1 = Jump;
						temp.data2 = "<";
						temp.arg1 = (yyvsp[-2].attributes)->place;
						temp.arg2 = (yyvsp[0].attributes)->place;

						global_code.push_back(temp);

						struct code_element temp2;
						temp2.data1 = Jump;

						global_code.push_back(temp2);

						(yyval.attributes)->my_type=Bool;
						free((yyvsp[-2].attributes));
						free((yyvsp[0].attributes));
					}
#line 2603 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 66:
#line 999 "Ccfg.ypp" /* yacc.c:1661  */
    {
						(yyval.attributes) = new attr;
						(yyval.attributes)->truelist = ((compiler *)c)->makelist(global_code.size());
						(yyval.attributes)->falselist = ((compiler *)c)->makelist(global_code.size()+1);
						struct code_element temp;
						temp.data1 = Jump;
						temp.data2 = ">";
						temp.arg1 = (yyvsp[-2].attributes)->place;
						temp.arg2 = (yyvsp[0].attributes)->place;

						global_code.push_back(temp);

						struct code_element temp2;
						temp2.data1 = Jump;

						global_code.push_back(temp2);

						(yyval.attributes)->my_type=Bool;
						free((yyvsp[-2].attributes));
						free((yyvsp[0].attributes));
					}
#line 2629 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 67:
#line 1020 "Ccfg.ypp" /* yacc.c:1661  */
    {
						(yyval.attributes) = new attr;
						(yyval.attributes)->truelist = ((compiler *)c)->makelist(global_code.size());
						(yyval.attributes)->falselist = ((compiler *)c)->makelist(global_code.size()+1);
						struct code_element temp;
						temp.data1 = Jump;
						temp.data2 = "<=";
						temp.arg1 = (yyvsp[-2].attributes)->place;
						temp.arg2 = (yyvsp[0].attributes)->place;

						global_code.push_back(temp);

						struct code_element temp2;
						temp2.data1 = Jump;

						global_code.push_back(temp2);

						(yyval.attributes)->my_type=Bool;
						free((yyvsp[-2].attributes));
						free((yyvsp[0].attributes));
					}
#line 2655 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 68:
#line 1041 "Ccfg.ypp" /* yacc.c:1661  */
    {
						(yyval.attributes) = new attr;
						(yyval.attributes)->truelist = ((compiler *)c)->makelist(global_code.size());
						(yyval.attributes)->falselist = ((compiler *)c)->makelist(global_code.size()+1);
						struct code_element temp;
						temp.data1 = Jump;
						temp.data2 = ">=";
						temp.arg1 = (yyvsp[-2].attributes)->place;
						temp.arg2 = (yyvsp[0].attributes)->place;

						global_code.push_back(temp);

						struct code_element temp2;
						temp2.data1 = Jump;

						global_code.push_back(temp2);

						(yyval.attributes)->my_type=Bool;
						free((yyvsp[-2].attributes));
						free((yyvsp[0].attributes));
					}
#line 2681 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 69:
#line 1062 "Ccfg.ypp" /* yacc.c:1661  */
    {
						(yyval.attributes) = new attr;
						(yyval.attributes)->truelist = ((compiler *)c)->makelist(global_code.size());
						(yyval.attributes)->falselist = ((compiler *)c)->makelist(global_code.size()+1);
						struct code_element temp;
						temp.data1 = Jump;
						temp.data2 = "!=";
						temp.arg1 = (yyvsp[-2].attributes)->place;
						temp.arg2 = (yyvsp[0].attributes)->place;

						global_code.push_back(temp);

						struct code_element temp2;
						temp2.data1 = Jump;

						global_code.push_back(temp2);

						(yyval.attributes)->my_type=Bool;
						free((yyvsp[-2].attributes));
						free((yyvsp[0].attributes));
					}
#line 2707 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 70:
#line 1083 "Ccfg.ypp" /* yacc.c:1661  */
    {
					(yyval.attributes) = new attr(); 
					(yyval.attributes)->my_type = (yyvsp[0].attributes)->my_type;
					(yyval.attributes)->dimension[0] = (yyvsp[0].attributes)->dimension[0];
					delete ((yyvsp[0].attributes));
}
#line 2718 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 71:
#line 1089 "Ccfg.ypp" /* yacc.c:1661  */
    { 
    					(yyval.attributes) = new attr();
						
						(yyval.attributes)->place.temp = newTemp();
						(yyval.attributes)->place.args_type = 2;
						struct code_element temp_code;
						temp_code.arg1 = (yyvsp[-2].attributes)->place;
						temp_code.arg2 = (yyvsp[0].attributes)->place;
						temp_code.result = (yyval.attributes)->place;
						temp_code.data2 = "-";
						temp_code.data1 = Assignment;

						(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[-2].attributes)->code.begin(),(yyvsp[-2].attributes)->code.end());
						(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[0].attributes)->code.begin(),(yyvsp[0].attributes)->code.end());
						(yyval.attributes)->code.push_back(temp_code);
						global_code.push_back(temp_code);



						#ifdef debug
							printf("in expr-> expr-expr\n");

						#endif

						if((yyvsp[-2].attributes)->my_type==Char || (yyvsp[-2].attributes)->my_type==Bool)
							yyerror("error: MINUS does not support bool and char\n");
						else if((yyvsp[0].attributes)->my_type==Char || (yyvsp[0].attributes)->my_type==Bool)
							yyerror("error: MINUS does not support bool and char\n");
						else {
							if((yyvsp[-2].attributes)->my_type==Double || (yyvsp[0].attributes)->my_type==Double )
								(yyval.attributes)->my_type=Double;
							else if((yyvsp[-2].attributes)->my_type==Float || (yyvsp[0].attributes)->my_type==Float)
								(yyval.attributes)->my_type=Float;
							else if((yyvsp[-2].attributes)->my_type==Long_long || (yyvsp[0].attributes)->my_type==Long_long)
								(yyval.attributes)->my_type=Long_long;
							else 
								(yyval.attributes)->my_type=(yyvsp[-2].attributes)->my_type;
						}
						free((yyvsp[-2].attributes));
						free((yyvsp[0].attributes));
					}
#line 2764 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 72:
#line 1131 "Ccfg.ypp" /* yacc.c:1661  */
    { 
						(yyval.attributes) = new attr();
						
						(yyval.attributes)->place.temp = newTemp();
						(yyval.attributes)->place.args_type = 2;
						struct code_element temp_code;
						temp_code.arg1 = (yyvsp[-2].attributes)->place;
						temp_code.arg2 = (yyvsp[0].attributes)->place;
						temp_code.result = (yyval.attributes)->place;
						temp_code.data2 = "*";
						temp_code.data1 = Assignment;

						(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[-2].attributes)->code.begin(),(yyvsp[-2].attributes)->code.end());
						(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[0].attributes)->code.begin(),(yyvsp[0].attributes)->code.end());
						(yyval.attributes)->code.push_back(temp_code);
						global_code.push_back(temp_code);



						#ifdef debug
							printf("in expr-> expr*expr\n");

						#endif

						if((yyvsp[-2].attributes)->my_type==Char || (yyvsp[-2].attributes)->my_type==Bool)
							yyerror("error: MULTIPLY does not support bool and char\n");
						else if((yyvsp[0].attributes)->my_type==Char || (yyvsp[0].attributes)->my_type==Bool)
							yyerror("error: MULTIPLY does not support bool and char\n");
						else {
							if((yyvsp[-2].attributes)->my_type==Double || (yyvsp[0].attributes)->my_type==Double )
								(yyval.attributes)->my_type=Double;
							else if((yyvsp[-2].attributes)->my_type==Float || (yyvsp[0].attributes)->my_type==Float)
								(yyval.attributes)->my_type=Float;
							else if((yyvsp[-2].attributes)->my_type==Long_long || (yyvsp[0].attributes)->my_type==Long_long)
								(yyval.attributes)->my_type=Long_long;
							else 
								(yyval.attributes)->my_type=(yyvsp[-2].attributes)->my_type;
						}
						free((yyvsp[-2].attributes));
						free((yyvsp[0].attributes));
					}
#line 2810 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 73:
#line 1172 "Ccfg.ypp" /* yacc.c:1661  */
    { 
    					(yyval.attributes) = new attr();
						
						(yyval.attributes)->place.temp = newTemp();
						(yyval.attributes)->place.args_type = 2;
						struct code_element temp_code;
						temp_code.arg1 = (yyvsp[-2].attributes)->place;
						temp_code.arg2 = (yyvsp[0].attributes)->place;
						temp_code.result = (yyval.attributes)->place;
						temp_code.data2 = "";
						temp_code.data1 = Assignment;

						(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[-2].attributes)->code.begin(),(yyvsp[-2].attributes)->code.end());
						(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[0].attributes)->code.begin(),(yyvsp[0].attributes)->code.end());
						(yyval.attributes)->code.push_back(temp_code);
						global_code.push_back(temp_code);



						#ifdef debug
							printf("in expr-> expr/expr\n");

						#endif

						if((yyvsp[-2].attributes)->my_type==Char || (yyvsp[-2].attributes)->my_type==Bool)
							yyerror("error: DIVIDE does not support bool and char\n");
						else if((yyvsp[0].attributes)->my_type==Char || (yyvsp[0].attributes)->my_type==Bool)
							yyerror("error: DIVIDE does not support bool and char\n");
						else {
							if(((yyvsp[-2].attributes)->my_type==Double) || ((yyvsp[0].attributes)->my_type==Double) )
								(yyval.attributes)->my_type=Double;
							else if((yyvsp[-2].attributes)->my_type==Float || (yyvsp[0].attributes)->my_type==Float)
								(yyval.attributes)->my_type=Float;
							else if((yyvsp[-2].attributes)->my_type==Long_long || (yyvsp[0].attributes)->my_type==Long_long)
								(yyval.attributes)->my_type=Long_long;
							else 
								(yyval.attributes)->my_type=(yyvsp[-2].attributes)->my_type;
						}
						free((yyvsp[-2].attributes));
						free((yyvsp[0].attributes));
					}
#line 2856 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 74:
#line 1213 "Ccfg.ypp" /* yacc.c:1661  */
    { 
						(yyval.attributes) = new attr();
						
						(yyval.attributes)->place.temp = newTemp();
						(yyval.attributes)->place.args_type = 2;
						struct code_element temp_code;
						temp_code.arg1 = (yyvsp[-2].attributes)->place;
						temp_code.arg2 = (yyvsp[0].attributes)->place;
						temp_code.result = (yyval.attributes)->place;
						temp_code.data2 = "%";
						temp_code.data1 = Assignment;

						(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[-2].attributes)->code.begin(),(yyvsp[-2].attributes)->code.end());
						(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[0].attributes)->code.begin(),(yyvsp[0].attributes)->code.end());
						(yyval.attributes)->code.push_back(temp_code);
						global_code.push_back(temp_code);



						#ifdef debug
							printf("in expr-> expr\%expr\n");
						#endif

						if(!((yyvsp[-2].attributes)->my_type==Int || (yyvsp[-2].attributes)->my_type==Long_long || (yyvsp[-2].attributes)->my_type==Bool))        /* Added Bool*/
							yyerror("error: MOD supports only bool,int,long long");
						else if(!((yyvsp[0].attributes)->my_type==Int || (yyvsp[0].attributes)->my_type==Long_long || (yyvsp[0].attributes)->my_type==Bool))
							yyerror("error: MOD supports only bool,int,long long");
						else
							(yyval.attributes)->my_type=(yyvsp[0].attributes)->my_type;
						free((yyvsp[-2].attributes));
						free((yyvsp[0].attributes));
					}
#line 2893 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 75:
#line 1245 "Ccfg.ypp" /* yacc.c:1661  */
    {
						(yyval.attributes) = new attr();
						((compiler *)c)->backpatch((yyvsp[-3].attributes)->truelist,(yyvsp[-1].integer));
						(yyval.attributes)->truelist = (yyvsp[0].attributes)->truelist;
						(yyval.attributes)->falselist = ((compiler *)c)->merge_list((yyvsp[-3].attributes)->falselist,(yyvsp[0].attributes)->falselist);


						if(!((yyvsp[-3].attributes)->my_type==Bool || (yyvsp[-3].attributes)->my_type==Int || (yyvsp[-3].attributes)->my_type==Long_long))
							yyerror("error: AND supports only bool,int,long long");
						else if(!((yyvsp[0].attributes)->my_type==Bool || (yyvsp[0].attributes)->my_type==Int || (yyvsp[0].attributes)->my_type==Long_long))
							yyerror("error: AND supports only bool,int,long long");
						else 
							(yyval.attributes)->my_type=Bool;
						free((yyvsp[-3].attributes));
						free((yyvsp[0].attributes));
					}
#line 2914 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 76:
#line 1261 "Ccfg.ypp" /* yacc.c:1661  */
    {	
						(yyval.attributes) = new attr();
 
						if(!((yyvsp[-3].attributes)->my_type==Bool || (yyvsp[-3].attributes)->my_type==Int || (yyvsp[-3].attributes)->my_type==Long_long))
							yyerror("error: OR supports only bool,int,long long. left operand is \n");
						else if(!((yyvsp[0].attributes)->my_type==Bool || (yyvsp[0].attributes)->my_type==Int || (yyvsp[0].attributes)->my_type==Long_long))
							yyerror("error: OR supports only bool,int,long long. right operand is \n");
						else 
							(yyval.attributes)->my_type=Bool;

						((compiler *)c)->backpatch((yyvsp[-3].attributes)->falselist,(yyvsp[-1].integer));
						(yyval.attributes)->truelist = ((compiler *)c)->merge_list((yyvsp[-3].attributes)->truelist,(yyvsp[0].attributes)->truelist);
						(yyval.attributes)->falselist = (yyvsp[0].attributes)->falselist;
						free((yyvsp[-3].attributes));
						free((yyvsp[0].attributes));
					}
#line 2935 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 77:
#line 1277 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = new attr();
					(yyval.attributes)->my_type = Bool;

					(yyval.attributes)->truelist = (yyvsp[0].attributes)->falselist;
					(yyval.attributes)->falselist = (yyvsp[0].attributes)->truelist;

					 free((yyvsp[0].attributes));
					 }
#line 2948 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 78:
#line 1285 "Ccfg.ypp" /* yacc.c:1661  */
    {
						(yyval.attributes) = new attr();
						(yyval.attributes)->my_type = (yyvsp[-1].attributes)->my_type; 
						free((yyvsp[-1].attributes));
					}
#line 2958 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 79:
#line 1290 "Ccfg.ypp" /* yacc.c:1661  */
    {
			(yyval.attributes) = new attr();
			(yyval.attributes)->place.var = (yyvsp[0].attributes)->place.var; 
			#ifdef debug2
				cout << "in expr -> identifier ";
				cout << (yyvsp[0].attributes)->place.var;
				printf("\n");
			#endif
			int scope = ((compiler *)c)->get_scope((yyvsp[0].attributes)->place.var);

			struct code_element temp_code;
			temp_code.data2 = "=";
			temp_code.result.temp = newTemp();
			temp_code.result.args_type = 2;
			temp_code.arg1 =  (yyvsp[0].attributes)->place;
			temp_code.arg1.var = (yyvsp[0].attributes)->place.var + "_" +to_string(scope);
			temp_code.arg1.args_type = 1;
			if((yyvsp[0].attributes)->dimension[0]==2) {
					temp_code.data2 = "[]";
					temp_code.data1 = Array;
					temp_code.arg2.temp = (yyvsp[0].attributes)->offset_temp_number;
					temp_code.arg2.args_type = 2;
			}
			else if((yyvsp[0].attributes)->dimension[0]==1) {
					temp_code.data2 = "[]";
					temp_code.data1 = Array;
					temp_code.arg2.temp = (yyvsp[0].attributes)->offset_temp_number;
					temp_code.arg2.args_type = 2;
			}
			global_code.push_back(temp_code);
			(yyval.attributes)->place  = temp_code.result; 

			struct symbol_table *temp = current_symbol_table;
			int flag = 1;
			while(flag) {
			           	if( temp->table.find(string( (yyvsp[0].attributes)->var_name[0])) != temp->table.end()){
						(yyval.attributes)->my_type = temp->table[string((yyvsp[0].attributes)->var_name[0])].my_type;
#ifdef debug
printf("expr-->identifier:\nidentifier is of type %d\n",(yyval.attributes)->my_type);
#endif
							flag = 0;
						(yyval.attributes)->dimension[0] = temp->table[string((yyvsp[0].attributes)->var_name[0])].dimension - (yyvsp[0].attributes)->dimension[0];
				}
				if(temp->parent==NULL && flag==1) {
					yyerror("error: variable not declared\n");
					flag = 0;
				}
				temp = temp->parent;
			}
			free((yyvsp[0].attributes));
		  }
#line 3014 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 80:
#line 1341 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = new attr();
(yyval.attributes)->my_type=(yyvsp[0].attributes)->my_type; free((yyvsp[0].attributes));}
#line 3021 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 81:
#line 1343 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = new attr();
(yyval.attributes)->my_type=(yyvsp[0].attributes)->my_type; free((yyvsp[0].attributes));}
#line 3028 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 82:
#line 1345 "Ccfg.ypp" /* yacc.c:1661  */
    {
				(yyval.attributes) = new attr();
				printf("args_type = %d\n",(yyvsp[0].attributes)->place.args_type);
				(yyval.attributes)->place = (yyvsp[0].attributes)->place;

				struct code_element temp_code;
				temp_code.data2 = "=";
				temp_code.result.temp = newTemp();
				temp_code.result.args_type = 2;
				temp_code.arg1 =  (yyvsp[0].attributes)->place;
				global_code.push_back(temp_code);

				(yyval.attributes)->place  = temp_code.result; 

				(yyval.attributes)->place.args_type = (yyval.attributes)->place.args_type;
				(yyval.attributes)->my_type = (yyvsp[0].attributes)->my_type;
				(yyval.attributes)->dimension[0] = 0;
			}
#line 3051 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 83:
#line 1363 "Ccfg.ypp" /* yacc.c:1661  */
    {
								(yyval.attributes) = new attr();
								(yyval.attributes)->my_type=(yyvsp[0].attributes)->my_type; 
								(yyval.attributes)->dimension[0] = (yyvsp[0].attributes)->dimension[0]+1;
								free((yyvsp[0].attributes));
								}
#line 3062 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 84:
#line 1369 "Ccfg.ypp" /* yacc.c:1661  */
    {
				(yyval.attributes) = new attr();
				(yyval.attributes)->truelist = ((compiler *)c)->makelist(global_code.size());

				struct code_element temp_code;
				temp_code.data1 = Jump;
				global_code.push_back(temp_code);
				(yyval.attributes)->my_type = Bool;

			}
#line 3077 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 85:
#line 1380 "Ccfg.ypp" /* yacc.c:1661  */
    {
				(yyval.attributes) = new attr();
				(yyval.attributes)->falselist = ((compiler *)c)->makelist(global_code.size());

				struct code_element temp_code;
				temp_code.data1 = Jump;
				global_code.push_back(temp_code);
				(yyval.attributes)->my_type = Bool;
	}
#line 3091 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 86:
#line 1392 "Ccfg.ypp" /* yacc.c:1661  */
    {
							
							(yyval.attributes) = new attr();
							(yyval.attributes)->my_type = Void;
							struct code_element temp_code;
							temp_code.arg1 = (yyvsp[0].attributes)->place;
							int scope = ((compiler *)c)->get_scope((yyvsp[-2].attributes)->place.var);
							temp_code.result = (yyvsp[-2].attributes)->place;
							temp_code.result.var = (yyvsp[-2].attributes)->place.var + "_" + to_string(scope);
							temp_code.result.args_type = 1;
							temp_code.data2 = "=";
							temp_code.data1 = Assignment;
							(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[0].attributes)->code.begin(),(yyvsp[0].attributes)->code.end());
							(yyval.attributes)->code.push_back(temp_code);
							if((yyvsp[-2].attributes)->dimension[0]==2) {
								temp_code.data2 = "[][]";
								temp_code.data1 = Array;
								printf("double array in assign_stmt -> identifier = expr offset %d\n",(yyvsp[-2].attributes)->offset_temp_number);
								temp_code.arg2.temp = (yyvsp[-2].attributes)->offset_temp_number;
								temp_code.arg2.args_type = 2;
							}
							else if((yyvsp[-2].attributes)->dimension[0]==1) {
								temp_code.data2 = "[]";
								temp_code.data1 = Array;
								temp_code.arg2.temp = (yyvsp[-2].attributes)->offset_temp_number;
								temp_code.arg2.args_type = 2;
							}
							#ifdef debug2
								printf("In assign_stmt -> identifier '=' expr\n");
								cout << temp_code.result.var;
							#endif 
							global_code.push_back(temp_code);


							#ifdef debug
								printf("===============CODE GENERATED====================\n");
								for(int i=0;i<global_code.size();i++) {
									if(global_code[i].data1==Jump) {
										cout << "jump instruction\n";
										continue;
									}
									cout << global_code[i].data2 << "\t";
									cout << "(" << global_code[i].arg1.var << "," << global_code[i].arg1.temp << "," << global_code[i].arg1.int_val << "," << global_code[i].arg1.float_val << "," << global_code[i].arg1.args_type << ")\t(" << global_code[i].arg2.var << ","<<global_code[i].arg2.temp << "," << global_code[i].arg2.int_val << "," << global_code[i].arg2.float_val << "," << global_code[i].arg2.args_type<<")\t(" << global_code[i].result.var << "," << global_code[i].result.temp << "," << global_code[i].result.int_val << "," << global_code[i].result.float_val << "," << global_code[i].result.args_type<< ")\n";

								}	
								printf("===============CODE GENERATION END====================\n");
							#endif 
	                       struct symbol_table *temp = current_symbol_table;
                       		int flag = 1;
                        	while(flag) {
                                        if( temp->table.find(string( (yyvsp[-2].attributes)->var_name[0])) != temp->table.end()){
                                                (yyval.attributes)->my_type = temp->table[string((yyvsp[-2].attributes)->var_name[0])].my_type;
                                                flag = 0;
						(yyval.attributes)->dimension[0] = temp->table[string((yyvsp[-2].attributes)->var_name[0])].dimension - (yyvsp[-2].attributes)->dimension[0];

                                	}
                                	if(temp->parent==NULL && flag==1) {
                                        	yyerror("error: variable not declared\n");
                                        	flag = 0;
                                	}
                                	temp = temp->parent;
                        	}
				enum type_enum t = (yyval.attributes)->my_type;
				enum type_enum tt = (yyvsp[0].attributes)->my_type; 
				if (t == Int && tt== Long_long)
					yyerror("Warning: assigning long long to an integer\n",KYEL);
				else if (t==Int && tt == Float)
					yyerror("Warning: assigning float to an int\n",KYEL);
				else if (t==Int && tt == Double)
					yyerror("Warning: assigning int to double\n",KYEL);
				else if (t==Float && tt == Double)
					yyerror("Warning: assigning float to a double\n",KYEL);
				else if (t==Long_long && tt == Float)
					yyerror("Warning: assigning long long to a float\n",KYEL);
				else if (t==Long_long && tt == Double)
					yyerror("Warning: assigning long long to a double\n",KYEL);
				else if (t != tt || (yyval.attributes)->dimension[0] != (yyvsp[0].attributes)->dimension[0] )
					yyerror("Warning: Type mismatch\n",KYEL);

				free((yyvsp[-2].attributes));
				free((yyvsp[0].attributes));

				}
#line 3179 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 87:
#line 1476 "Ccfg.ypp" /* yacc.c:1661  */
    {
						#ifdef debug 
							printf("number-> T_DEC_INT\n");
						#endif
						(yyval.attributes) = new attr();
						(yyval.attributes)->place.int_val = (yyvsp[0].integer);
						(yyval.attributes)->place.args_type = 3;
						(yyval.attributes)->my_type =Int;
					}
#line 3193 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 88:
#line 1485 "Ccfg.ypp" /* yacc.c:1661  */
    {
						(yyval.attributes) = new attr();
						(yyval.attributes)->place.float_val = (yyvsp[0].real);
						(yyval.attributes)->place.args_type = 4;
						(yyval.attributes)->my_type = Int;
					}
#line 3204 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 89:
#line 1493 "Ccfg.ypp" /* yacc.c:1661  */
    {  	
						(yyval.attributes) = new attr();
						(yyval.attributes)->place.var = (yyvsp[0].lexeme);
						(yyval.attributes)->place.args_type = 1;
						strcpy((yyval.attributes)->var_name[0],(yyvsp[0].lexeme));
							(yyval.attributes)->dimension[0] = 0;
					 }
#line 3216 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 90:
#line 1500 "Ccfg.ypp" /* yacc.c:1661  */
    {
							(yyval.attributes) = new attr();
							strcpy((yyval.attributes)->var_name[0],(yyvsp[-1].lexeme));
							(yyval.attributes)->place.var = (yyvsp[-1].lexeme);
							if(!is_declaration&& (yyvsp[0].attributes)->dimension[0]==2) {
								struct code_element temp;
								temp.result.temp = newTemp();
								temp.result.args_type = 2;
								temp.data2 = "=";
								temp.arg1.int_val = ((compiler *)c)->get_second_size((yyvsp[-1].lexeme));
								temp.arg1.args_type = 3;
								global_code.push_back(temp);

								temp.result.temp = newTemp();
								temp.data2 = "*";
								temp.arg1.temp = temp.result.temp-1;
								temp.arg1.args_type = 2;
								temp.arg2.temp = temp.result.temp-2;
								temp.arg2.args_type = 2;
								global_code.push_back(temp);

								temp.result.temp = newTemp();
								temp.data2 = "+";
								temp.arg1.temp = temp.result.temp-1;
								temp.arg1.args_type = 2;
								temp.arg2.temp = temp.result.temp-4;
								temp.arg2.args_type = 2;
								global_code.push_back(temp);

								(yyval.attributes)->offset_temp_number  = temp.result.temp;


							}
							(yyval.attributes)->dimension[0] = (yyvsp[0].attributes)->dimension[0];
							(yyval.attributes)->array_size[0] = (yyvsp[0].attributes)->array_size[0];
							(yyval.attributes)->element_size[0] = (yyvsp[0].attributes)->element_size[0];
							#ifdef debug2
								printf("is_declaration = %d \n",is_declaration);
							#endif
							free((yyvsp[0].attributes));
		}
#line 3262 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 91:
#line 1542 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = new attr(); (yyval.attributes)->dimension[0] = (yyvsp[0].attributes)->dimension[0] +1; printf("%s",(yyvsp[-2].lexeme)); free((yyvsp[0].attributes));
								if(!is_declaration) {
									struct code_element temp;
											temp.result.temp = newTemp();
											temp.result.args_type = 2;
											temp.data2 = "=";
											temp.arg1.var = (yyvsp[-2].lexeme);
											temp.arg1.args_type = 1;
											global_code.push_back(temp);
								}
}
#line 3278 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 92:
#line 1553 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = new attr(); (yyval.attributes)->dimension[0] = 1;
					if(!is_declaration) {
											struct code_element temp;
											temp.result.temp = newTemp();
											temp.result.args_type = 2;
											temp.data2 = "=";
											temp.arg1.var = (yyvsp[-1].lexeme);
											temp.arg1.args_type = 1;
											global_code.push_back(temp);
					}
				}
#line 3294 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 93:
#line 1564 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = new attr();  (yyval.attributes)->dimension[0] = 1; (yyval.attributes)->array_size[0] = (yyvsp[-1].integer);
							if(is_declaration)
								(yyval.attributes)->element_size[0] = (yyvsp[-1].integer);
							else {
								struct code_element temp;
								temp.result.temp = newTemp();
								temp.result.args_type = 2;
								temp.data2 = "=";
								temp.arg1.int_val = (yyvsp[-1].integer);
								temp.arg1.args_type = 3;
								global_code.push_back(temp);
							}
						}
#line 3312 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 94:
#line 1577 "Ccfg.ypp" /* yacc.c:1661  */
    {
									(yyval.attributes) = new attr(); (yyval.attributes)->dimension[0] = (yyvsp[0].attributes)->dimension[0] + 1; free((yyvsp[0].attributes));
									if((yyval.attributes)->dimension[0] == 2) {
										(yyval.attributes)->array_size[0] = (yyvsp[0].attributes)->array_size[0];
										if(is_declaration)
											(yyval.attributes)->element_size[0] =(yyvsp[-2].integer)*(yyvsp[0].attributes)->element_size[0];
										else {
											struct code_element temp;
											temp.result.temp = newTemp();
											temp.result.args_type = 2;
											temp.data2 = "=";
											temp.arg1.int_val = (yyvsp[-2].integer);
											temp.arg1.args_type = 3;
											global_code.push_back(temp);
										}
									}

							  }
#line 3335 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;


#line 3339 "Ccfg.tab.cpp" /* yacc.c:1661  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 1596 "Ccfg.ypp" /* yacc.c:1906  */


int check_keyword(string identifier)
{
	if(!identifier.compare("auto"))
		return 1;
	else if(!identifier.compare("break"))
		return 1;
	else if(!identifier.compare("case"))
                return 1;
	else if(!identifier.compare("char"))
                return 1;
	else if(!identifier.compare("const"))
                return 1;
	else if(!identifier.compare("continue"))
                return 1;
	 else if(!identifier.compare("default"))
                return 1;
	 else if(!identifier.compare("do"))
                return 1;
	 else if(!identifier.compare("double"))
                return 1;
	 else if(!identifier.compare("else"))
                return 1;
	 else if(!identifier.compare("enum"))
                return 1;
	 else if(!identifier.compare("extern"))
                return 1;
	 else if(!identifier.compare("float"))
                return 1;
	 else if(!identifier.compare("for"))
                return 1;
	 else if(!identifier.compare("goto"))
                return 1;
	 else if(!identifier.compare("if"))
                return 1;
	 else if(!identifier.compare("int"))
                return 1;
	 else if(!identifier.compare("long"))
                return 1;
	 else if(!identifier.compare("register"))
                return 1;
	 else if(!identifier.compare("return"))
                return 1;
	 else if(!identifier.compare("short"))
                return 1;
	 else if(!identifier.compare("signed"))
                return 1;
	 else if(!identifier.compare("sizeof"))
                return 1;
	 else if(!identifier.compare("static"))
                return 1;
	 else if(!identifier.compare("struct"))
                return 1;
	 else if(!identifier.compare("switch"))
                return 1;
	 else if(!identifier.compare("typedef"))
                return 1;
	 else if(!identifier.compare("union"))
                return 1;
	 else if(!identifier.compare("unsigned"))
                return 1;
	 else if(!identifier.compare("void"))
                return 1;
	 else if(!identifier.compare("volatile"))
                return 1;
	 else if(!identifier.compare("while"))
                return 1;
	else
		return 0; 
}

void wrg(args a)
{
	switch (a.args_type)
	{
		case 1: cout << a.var;
				break;
		case 2: cout << "t" << a.temp;
				break;
		case 3: cout << a.int_val;
				break;
		case 4: cout << a.float_val;
				break;				
	}
}


void print()
{
	for (int i=0;i<global_code.size();i++)
	{
		code_element a=global_code[i];
		cout << "l" << i << ":\t";
		if (a.data1==Assignment)
		{
			
			 wrg(a.result); cout << "= ";
			 wrg(a.arg1);
			 cout << " " << a.data2 << " ";
			 wrg(a.arg2);
		}
		else if(a.data1==Jump)
		{
			
			if (a.data2 == "") cout << "\t\tgoto " << a.result.int_val;
			else
			{ 
				cout << "if ";
			 	wrg(a.arg1);
			 	cout << " " << a.data2 << " ";
			 	wrg(a.arg2);
			 	cout << " then goto " << a.result.int_val;
			}
		}
		else if(a.data1 == Array)
		{
			
			wrg(a.result); cout << "=";
			wrg(a.arg1);
			cout << "["; wrg(a.arg2); cout << "]";
		}
		else if(a.data1==Mipscode)
		{
			cout << a.data2 << " " << a.arg1.var << " " << a.arg2.var << a.result.var;
		}
		cout << endl;
	}
}


int main()
{
		no_line = 1;
		maindef = 0;
		totalerrs = 0;
		global_scope = 1;
		current_symbol_table = new symbol_table;
		current_symbol_table->parent = NULL;
		current_symbol_table->scope_number = global_scope;
		global_scope = global_scope + 1;
		c = (void *) (new compiler);
        yyparse();

        if (!maindef) yyerror("main function not defined");
		print();
		if (totalerrs>0)
		{
			printf("%d errors found: No code generated\n",totalerrs);
		    //return 0;
		}
		codegen();
		print();
		//create_mips();
		return 0;
}
