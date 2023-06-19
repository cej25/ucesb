/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 32 "tdcpm_parser.y" /* yacc.c:337  */

#define YYERROR_VERBOSE

#define YYTYPE_INT16 int

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#include "../tdcpm_defs.h"
#include "../tdcpm_string_table.h"
#include "../tdcpm_var_name.h"
#include "../tdcpm_units.h"
#include "../tdcpm_tspec_table.h"
#include "../tdcpm_file_line.h"

/* #include "parse_error.hh" */
/* #include "file_line.hh" */

int yylex(void);

int yyparse(void);

void yyerror(const char *s);

extern int yylineno;

/*
struct md_ident_fl
{
 public:
  md_ident_fl(const char *id,const file_line &loc)
  {
    _id   = id;
    _loc = loc;
  }

 public:
  const char *_id;
  file_line   _loc;
};
*/

#define CURR_FILE_LINE file_line(yylineno)


#line 117 "generated/y.tab.c" /* yacc.c:337  */
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
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
   by #include "y.tab.h".  */
#ifndef YY_YY_GENERATED_Y_TAB_H_INCLUDED
# define YY_YY_GENERATED_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INTEGER = 258,
    DOUBLE = 259,
    STRING = 260,
    IDENTIFIER = 261,
    VALUE_UNIT = 262,
    UNIT = 263,
    KW_DEF = 264,
    KW_DEF_UNIT = 265,
    KW_VALID = 266,
    KW_START = 267,
    KW_END = 268,
    KW_WR = 269,
    UMINUS = 270
  };
#endif
/* Tokens.  */
#define INTEGER 258
#define DOUBLE 259
#define STRING 260
#define IDENTIFIER 261
#define VALUE_UNIT 262
#define UNIT 263
#define KW_DEF 264
#define KW_DEF_UNIT 265
#define KW_VALID 266
#define KW_START 267
#define KW_END 268
#define KW_WR 269
#define UMINUS 270

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 80 "tdcpm_parser.y" /* yacc.c:352  */

  /* What we get from the lexer: */

  double  fValue;               /* double value */
  int     iValue;               /* integer value */
  tdcpm_string_index   str_idx; /* string */

  /* We generate internally: */

  tdcpm_vect_node     *vect_node;

  tdcpm_var_name      *var;

  tdcpm_vect_var_names *vect_var;

  tdcpm_unit_index     unit;

  tdcpm_unit_build     unit_build;

  tdcpm_vect_units    *vect_unit;

  tdcpm_dbl_unit       dbl_unit;

  tdcpm_dbl_unit_build dbl_unit_build;

  tdcpm_vect_dbl_units *vect_dbl_unit;

  tdcpm_vect_table_lines *vect_table_line;

  tdcpm_table            *table;

  tdcpm_tspec_index    tspec;

#line 224 "generated/y.tab.c" /* yacc.c:352  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GENERATED_Y_TAB_H_INCLUDED  */



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
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
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
#  define YYSIZE_T unsigned
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   213

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  108
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  171

#define YYUNDEFTOK  2
#define YYMAXUTOK   270

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      24,    26,    17,    15,    25,    16,    27,    18,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    31,    20,
       2,    21,     2,     2,    30,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    28,     2,    29,    32,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    22,     2,    23,     2,     2,     2,     2,
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
      19
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   205,   205,   206,   210,   211,   219,   220,   221,   225,
     226,   233,   234,   235,   242,   246,   250,   254,   261,   270,
     282,   299,   300,   301,   307,   311,   312,   317,   318,   328,
     329,   333,   334,   338,   339,   345,   347,   353,   354,   355,
     356,   357,   358,   359,   368,   374,   376,   378,   385,   394,
     395,   396,   397,   401,   402,   407,   409,   416,   420,   421,
     422,   423,   427,   428,   433,   440,   441,   446,   447,   451,
     452,   459,   460,   461,   462,   467,   468,   473,   475,   480,
     511,   512,   514,   515,   526,   537,   544,   551,   560,   567,
     572,   576,   581,   586,   591,   592,   599,   603,   608,   619,
     620,   625,   633,   634,   646,   648,   652,   654,   656
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "DOUBLE", "STRING",
  "IDENTIFIER", "VALUE_UNIT", "UNIT", "KW_DEF", "KW_DEF_UNIT", "KW_VALID",
  "KW_START", "KW_END", "KW_WR", "'+'", "'-'", "'*'", "'/'", "UMINUS",
  "';'", "'='", "'{'", "'}'", "'('", "','", "')'", "'.'", "'['", "']'",
  "'@'", "':'", "'^'", "$accept", "program", "pgm_stmt_list", "pgm_stmt",
  "stmt_list", "stmt", "calib_param", "valid_range", "var_def", "unit_def",
  "tspec", "var_or_name", "var_ident_rec", "var_ident",
  "array_spec_list_null", "array_spec_list", "array_spec",
  "array_index_list", "array_index", "value_table", "header_idents",
  "header_idents_list_null", "header_idents_list", "header_ident",
  "header_units", "header_units_list_null", "header_units_list",
  "header_unit", "value_vector_lines", "value_vector_line_comma",
  "value_vector_line", "value_vector_list", "value_vector_np",
  "value_vector_np_single", "value_unit", "value", "value_paren",
  "value_raw_unit", "value_raw", "unit", "unit_part", "unit_part_many",
  "unit_part_block", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,    43,    45,    42,    47,   270,
      59,    61,   123,   125,    40,    44,    41,    46,    91,    93,
      64,    58,    94
};
# endif

#define YYPACT_NINF -116

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-116)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     117,    76,    44,    64,    -7,  -116,    76,    28,   117,  -116,
    -116,  -116,  -116,  -116,  -116,   104,   122,  -116,    22,    22,
    -116,    76,  -116,   131,   150,   172,    76,  -116,  -116,    11,
       7,  -116,    22,    22,    22,    19,   161,   144,  -116,   132,
     132,  -116,  -116,   140,   147,  -116,  -116,  -116,   132,   132,
      71,   132,    58,  -116,    86,   167,   158,   165,  -116,  -116,
      14,  -116,  -116,  -116,   116,    22,  -116,    22,    22,    22,
      22,  -116,   169,   170,  -116,   172,  -116,  -116,   134,  -116,
      80,  -116,   149,  -116,   162,   164,   166,  -116,    77,    91,
      48,   146,   146,  -116,   171,  -116,   172,   132,   132,   114,
     114,     9,  -116,    14,  -116,  -116,   161,    43,    43,  -116,
    -116,  -116,  -116,   168,  -116,  -116,  -116,   132,  -116,   172,
    -116,     7,  -116,   174,   173,  -116,    14,  -116,   175,   176,
    -116,  -116,    72,    14,   177,   146,  -116,  -116,  -116,    94,
      94,  -116,    14,  -116,    14,  -116,    20,  -116,   178,  -116,
    -116,  -116,  -116,   132,    72,  -116,   145,    14,    14,    77,
    -116,   192,    42,  -116,  -116,  -116,   179,  -116,   135,  -116,
    -116
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,    29,     0,     0,     0,    11,     0,     0,     2,     4,
       6,    12,    13,     7,     8,     0,    24,    25,     0,     0,
      28,    30,    31,     0,     0,     0,    27,     1,     5,     0,
       0,    37,     0,     0,     0,     0,    35,     0,    32,     0,
       0,    21,    22,     0,     0,    95,    94,    93,     0,     0,
       0,     0,    49,    16,    45,     0,    77,    79,    89,    80,
      91,    26,    39,    38,     0,     0,    34,     0,     0,     0,
       0,    33,     0,     0,    23,     0,    82,    81,     0,     9,
       0,    75,     0,    50,    55,     0,    51,    53,    71,    58,
       0,     0,    46,    65,    67,    14,     0,     0,     0,     0,
       0,   104,   108,    92,   102,    44,    36,    40,    41,    42,
      43,    19,    20,     0,    17,    10,    15,     0,    90,     0,
      48,    52,    72,     0,    73,    96,     0,    59,     0,    60,
      62,    64,    97,    99,     0,    47,    66,    68,    78,    83,
      84,    85,    86,    87,    88,   105,     0,   103,     0,    76,
      56,    54,    69,    74,    98,    57,    61,     0,     0,    71,
     106,     0,     0,    63,   100,   101,     0,   107,     0,    70,
      18
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -116,  -116,  -116,   195,    45,   -49,  -116,  -116,  -116,  -116,
     -72,   -48,  -116,   180,  -116,    15,   -19,   187,    -2,  -116,
    -116,  -116,  -116,    85,  -116,  -116,  -116,    52,   118,   -83,
    -116,    53,   163,   -29,   120,   -43,  -116,  -116,  -116,  -116,
    -115,   -41,   -93
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    78,    10,    11,    12,    13,    14,
      44,    15,    16,    17,    20,    90,    22,    37,    36,    53,
      54,    85,    86,    87,    91,   128,   129,   130,    92,    93,
      94,   123,   124,    81,    56,    57,    58,    59,    60,   131,
     132,   133,   104
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      55,    79,    38,   113,    84,    76,    77,    38,    82,   136,
     147,   154,   145,     1,    45,    46,    21,    25,    47,   103,
     101,    26,   102,   160,   138,    31,    48,    49,    27,   115,
      62,    63,    64,    50,     6,    51,   161,    32,    33,    52,
     147,   146,   164,   165,    65,    66,    34,   150,     1,   147,
      23,   147,   136,     4,   139,   140,   141,   143,   142,   144,
      69,    70,     5,   106,     1,   107,   108,   109,   110,     6,
      24,    38,    18,    84,    45,    46,    19,     1,    47,   134,
      45,    46,     4,    83,    47,     6,    48,    49,   149,   157,
     158,     5,    48,    49,    31,    51,   125,   101,     6,   102,
      18,    51,   122,   116,    19,   117,    32,    33,    88,   126,
      18,    99,   100,    79,    89,    34,   127,    45,    46,   115,
     101,    47,   102,     1,   149,    29,     2,     3,     4,    48,
      49,    67,    68,    69,    70,    45,    46,     5,    51,    47,
       1,     1,   105,    74,     6,     4,     4,    48,    49,    30,
     125,   101,    39,   102,     5,     5,    51,   114,   170,    72,
      73,     6,     6,   126,    97,    98,    99,   100,    88,    65,
      18,    40,    75,    71,    19,   118,    67,    68,    69,    70,
      97,    98,    99,   100,    41,    42,    43,    95,    96,   111,
     112,   121,   119,   120,   148,   167,   137,   152,   153,   159,
     162,   156,   169,    28,   155,    35,   151,   168,   163,   135,
      61,     0,   166,    80
};

static const yytype_int16 yycheck[] =
{
      29,    50,    21,    75,    52,    48,    49,    26,    51,    92,
     103,   126,     3,     6,     3,     4,     1,    24,     7,    60,
       6,     6,     8,     3,    96,     3,    15,    16,     0,    78,
      32,    33,    34,    22,    27,    24,    16,    15,    16,    28,
     133,    32,   157,   158,    25,    26,    24,   119,     6,   142,
       6,   144,   135,    11,    97,    98,    99,   100,    99,   100,
      17,    18,    20,    65,     6,    67,    68,    69,    70,    27,
       6,    90,    24,   121,     3,     4,    28,     6,     7,    31,
       3,     4,    11,    25,     7,    27,    15,    16,   117,    17,
      18,    20,    15,    16,     3,    24,     5,     6,    27,     8,
      24,    24,    25,    23,    28,    25,    15,    16,    22,    18,
      24,    17,    18,   162,    28,    24,    25,     3,     4,   168,
       6,     7,     8,     6,   153,    21,     9,    10,    11,    15,
      16,    15,    16,    17,    18,     3,     4,    20,    24,     7,
       6,     6,    26,     3,    27,    11,    11,    15,    16,    27,
       5,     6,    21,     8,    20,    20,    24,    23,    23,    39,
      40,    27,    27,    18,    15,    16,    17,    18,    22,    25,
      24,    21,    25,    29,    28,    26,    15,    16,    17,    18,
      15,    16,    17,    18,    12,    13,    14,    20,    30,    20,
      20,    25,    30,    29,    26,     3,    25,    23,    25,    22,
      22,    25,    23,     8,    29,    18,   121,   162,   156,    91,
      30,    -1,   159,    50
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     9,    10,    11,    20,    27,    34,    35,    36,
      38,    39,    40,    41,    42,    44,    45,    46,    24,    28,
      47,    48,    49,     6,     6,    24,    48,     0,    36,    21,
      27,     3,    15,    16,    24,    50,    51,    50,    49,    21,
      21,    12,    13,    14,    43,     3,     4,     7,    15,    16,
      22,    24,    28,    52,    53,    66,    67,    68,    69,    70,
      71,    46,    51,    51,    51,    25,    26,    15,    16,    17,
      18,    29,    67,    67,     3,    25,    68,    68,    37,    38,
      65,    66,    68,    25,    44,    54,    55,    56,    22,    28,
      48,    57,    61,    62,    63,    20,    30,    15,    16,    17,
      18,     6,     8,    74,    75,    26,    51,    51,    51,    51,
      51,    20,    20,    43,    23,    38,    23,    25,    26,    30,
      29,    25,    25,    64,    65,     5,    18,    25,    58,    59,
      60,    72,    73,    74,    31,    61,    62,    25,    43,    68,
      68,    68,    74,    68,    74,     3,    32,    75,    26,    66,
      43,    56,    23,    25,    73,    29,    25,    17,    18,    22,
       3,    16,    22,    60,    73,    73,    64,     3,    37,    23,
      23
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    33,    34,    34,    35,    35,    36,    36,    36,    37,
      37,    38,    38,    38,    39,    39,    39,    39,    40,    41,
      42,    43,    43,    43,    44,    45,    45,    46,    46,    47,
      47,    48,    48,    49,    49,    50,    50,    51,    51,    51,
      51,    51,    51,    51,    51,    52,    52,    52,    53,    54,
      54,    54,    54,    55,    55,    56,    56,    57,    58,    58,
      58,    58,    59,    59,    60,    61,    61,    62,    62,    63,
      63,    64,    64,    64,    64,    65,    65,    66,    66,    67,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      69,    70,    70,    70,    71,    71,    72,    72,    72,    73,
      73,    73,    74,    74,    75,    75,    75,    75,    75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       2,     1,     1,     1,     4,     5,     3,     5,     9,     5,
       5,     1,     1,     2,     1,     1,     3,     2,     2,     0,
       1,     1,     2,     3,     3,     1,     3,     1,     2,     2,
       3,     3,     3,     3,     3,     1,     2,     3,     3,     0,
       1,     1,     2,     1,     3,     1,     3,     3,     0,     1,
       1,     2,     1,     3,     1,     1,     2,     1,     2,     3,
       5,     0,     1,     1,     2,     1,     3,     1,     3,     1,
       1,     2,     2,     3,     3,     3,     3,     3,     3,     1,
       3,     1,     2,     1,     1,     1,     1,     1,     2,     1,
       3,     3,     1,     2,     1,     2,     3,     4,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
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
  unsigned long yylno = yyrline[yyrule];
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
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
            else
              goto append;

          append:
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
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
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
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
# else /* defined YYSTACK_RELOCATE */
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
| yyreduce -- do a reduction.  |
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
#line 205 "tdcpm_parser.y" /* yacc.c:1652  */
    { tdcpm_vect_nodes_all((yyvsp[0].vect_node)); }
#line 1454 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 4:
#line 210 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_node) = (yyvsp[0].vect_node); }
#line 1460 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 211 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_node) = tdcpm_vect_node_join((yyvsp[-1].vect_node),(yyvsp[0].vect_node)); }
#line 1466 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 219 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_node) = (yyvsp[0].vect_node); }
#line 1472 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 220 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_node) = NULL; }
#line 1478 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 8:
#line 221 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_node) = NULL; }
#line 1484 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 225 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_node) = (yyvsp[0].vect_node); }
#line 1490 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 226 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_node) = tdcpm_vect_node_join((yyvsp[-1].vect_node),(yyvsp[0].vect_node)); }
#line 1496 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 233 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_node) = NULL; }
#line 1502 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 234 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_node) = (yyvsp[0].vect_node); }
#line 1508 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 235 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_node) = (yyvsp[0].vect_node); }
#line 1514 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 243 "tdcpm_parser.y" /* yacc.c:1652  */
    {
	    (yyval.vect_node) = tdcpm_node_new_vect((yyvsp[-3].var), (yyvsp[-1].vect_dbl_unit)/*, TDCPM_TSPEC_TYPE_NONE*/);
          }
#line 1522 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 247 "tdcpm_parser.y" /* yacc.c:1652  */
    {
	    (yyval.vect_node) = tdcpm_node_new_vect((yyvsp[-4].var), (yyvsp[-1].vect_dbl_unit)/*, TDCPM_TSPEC_TYPE_NONE*/);
          }
#line 1530 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 251 "tdcpm_parser.y" /* yacc.c:1652  */
    {
	    (yyval.vect_node) = tdcpm_node_new_table((yyvsp[-2].var), (yyvsp[0].table));
          }
#line 1538 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 255 "tdcpm_parser.y" /* yacc.c:1652  */
    {
	    (yyval.vect_node) = tdcpm_node_new_sub_node((yyvsp[-4].var), (yyvsp[-1].vect_node));
	  }
#line 1546 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 262 "tdcpm_parser.y" /* yacc.c:1652  */
    {
	    (yyval.vect_node) = tdcpm_node_new_valid_range((yyvsp[-6].tspec), (yyvsp[-4].tspec), (yyvsp[-1].vect_node));
	  }
#line 1554 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 271 "tdcpm_parser.y" /* yacc.c:1652  */
    {
	    tdcpm_dbl_unit_build dbl_unit;

	    dbl_unit._value = (yyvsp[-1].dbl_unit)._value;
	    dbl_unit._unit_bld = *tdcpm_unit_table_get((yyvsp[-1].dbl_unit)._unit_idx);
	    
	    tdcpm_insert_def_var((yyvsp[-3].str_idx), &dbl_unit, TDCPM_DEF_VAR_KIND_VAR);
	  }
#line 1567 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 283 "tdcpm_parser.y" /* yacc.c:1652  */
    {
	    tdcpm_dbl_unit_build dbl_unit;

	    dbl_unit._value = (yyvsp[-1].dbl_unit)._value;
	    dbl_unit._unit_bld = *tdcpm_unit_table_get((yyvsp[-1].dbl_unit)._unit_idx);

	    if (_tdcpm_parse_catch_unitdef)
	      *_tdcpm_parse_catch_unitdef = dbl_unit;
	    else	    
	      tdcpm_insert_def_var((yyvsp[-3].str_idx), &dbl_unit, TDCPM_DEF_VAR_KIND_UNIT);
	  }
#line 1583 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 299 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.tspec) = tdcpm_tspec_fixed(TDCPM_TSPEC_TYPE_START); }
#line 1589 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 300 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.tspec) = tdcpm_tspec_fixed(TDCPM_TSPEC_TYPE_END);   }
#line 1595 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 301 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.tspec) = tdcpm_tspec_wr((yyvsp[0].iValue)); }
#line 1601 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 307 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.var) = (yyvsp[0].var); }
#line 1607 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 311 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.var) = (yyvsp[0].var); }
#line 1613 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 312 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.var) = tdcpm_var_name_join((yyvsp[-2].var), (yyvsp[0].var)); }
#line 1619 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 317 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.var) = (yyvsp[0].var); }
#line 1625 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 319 "tdcpm_parser.y" /* yacc.c:1652  */
    {
	    tdcpm_var_name *tmp;
	    tmp = tdcpm_var_name_new();
	    tmp = tdcpm_var_name_name(tmp, (yyvsp[-1].str_idx));
	    (yyval.var) = tdcpm_var_name_join(tmp, (yyvsp[0].var));
	  }
#line 1636 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 328 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.var) = NULL; }
#line 1642 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 329 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.var) = (yyvsp[0].var); }
#line 1648 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 333 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.var) = (yyvsp[0].var); }
#line 1654 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 32:
#line 334 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.var) = tdcpm_var_name_join((yyvsp[-1].var), (yyvsp[0].var)); }
#line 1660 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 338 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.var) = tdcpm_var_name_off((yyvsp[-1].var), 0); }
#line 1666 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 339 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.var) = tdcpm_var_name_off((yyvsp[-1].var), 1); }
#line 1672 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 346 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.var) = tdcpm_var_name_index(tdcpm_var_name_new(),(yyvsp[0].iValue)); }
#line 1678 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 348 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.var) = tdcpm_var_name_index((yyvsp[-2].var), (yyvsp[0].iValue)); }
#line 1684 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 353 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = (yyvsp[0].iValue); }
#line 1690 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 354 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = -(yyvsp[0].iValue); }
#line 1696 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 355 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = (yyvsp[0].iValue); }
#line 1702 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 356 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = (yyvsp[-2].iValue) + (yyvsp[0].iValue); }
#line 1708 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 357 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = (yyvsp[-2].iValue) - (yyvsp[0].iValue); }
#line 1714 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 358 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = (yyvsp[-2].iValue) * (yyvsp[0].iValue); }
#line 1720 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 360 "tdcpm_parser.y" /* yacc.c:1652  */
    {
	    if ((yyvsp[0].iValue) == 0.0)
	      yyerror("Warning: Array index division by zero.");
	    if ((yyvsp[-2].iValue) % (yyvsp[0].iValue) != 0)
	      yyerror("Warning: Array index division gives "
		      "nonzero remainder.");
	    (yyval.iValue) = (yyvsp[-2].iValue) / (yyvsp[0].iValue);
	  }
#line 1733 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 368 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = (yyvsp[-1].iValue); }
#line 1739 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 375 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.table) = tdcpm_table_new((yyvsp[0].vect_var), NULL, NULL); }
#line 1745 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 377 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.table) = tdcpm_table_new((yyvsp[-1].vect_var), NULL, (yyvsp[0].vect_table_line)); }
#line 1751 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 379 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.table) = tdcpm_table_new((yyvsp[-2].vect_var), (yyvsp[-1].vect_dbl_unit), (yyvsp[0].vect_table_line)); }
#line 1757 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 385 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_var) = (yyvsp[-1].vect_var); }
#line 1763 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 394 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_var) = NULL; }
#line 1769 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 395 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_var) = NULL; }
#line 1775 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 396 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_var) = (yyvsp[0].vect_var); }
#line 1781 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 397 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_var) = (yyvsp[-1].vect_var); }
#line 1787 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 401 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_var) = (yyvsp[0].vect_var);}
#line 1793 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 403 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_var) = tdcpm_vect_var_names_join((yyvsp[-2].vect_var), (yyvsp[0].vect_var)); }
#line 1799 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 408 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_var) = tdcpm_vect_var_names_new((yyvsp[0].var), TDCPM_TSPEC_TYPE_NONE); }
#line 1805 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 410 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_var) = tdcpm_vect_var_names_new((yyvsp[-2].var), (yyvsp[0].tspec)); }
#line 1811 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 57:
#line 416 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_dbl_unit) = (yyvsp[-1].vect_dbl_unit); }
#line 1817 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 420 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_dbl_unit) = NULL; }
#line 1823 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 421 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_dbl_unit) = NULL; }
#line 1829 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 422 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_dbl_unit) = (yyvsp[0].vect_dbl_unit); }
#line 1835 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 423 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_dbl_unit) = (yyvsp[-1].vect_dbl_unit); }
#line 1841 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 427 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_dbl_unit) = (yyvsp[0].vect_dbl_unit); }
#line 1847 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 429 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_dbl_unit) = tdcpm_vect_dbl_units_join((yyvsp[-2].vect_dbl_unit), (yyvsp[0].vect_dbl_unit)); }
#line 1853 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 434 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_dbl_unit) = tdcpm_vect_dbl_units_new((yyvsp[0].dbl_unit), TDCPM_TSPEC_TYPE_NONE); }
#line 1859 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 440 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_table_line) = (yyvsp[0].vect_table_line); }
#line 1865 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 442 "tdcpm_parser.y" /* yacc.c:1652  */
    { tdcpm_vect_table_lines_join((yyvsp[-1].vect_table_line), (yyvsp[0].vect_table_line)); }
#line 1871 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 67:
#line 446 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_table_line) = (yyvsp[0].vect_table_line); }
#line 1877 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 447 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_table_line) = (yyvsp[-1].vect_table_line); }
#line 1883 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 451 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_table_line) = tdcpm_vect_table_line_new(NULL,(yyvsp[-1].vect_dbl_unit));}
#line 1889 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 453 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_table_line) = tdcpm_vect_table_line_new((yyvsp[-4].var), (yyvsp[-1].vect_dbl_unit)); }
#line 1895 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 71:
#line 459 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_dbl_unit) = NULL; }
#line 1901 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 72:
#line 460 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_dbl_unit) = NULL; }
#line 1907 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 461 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_dbl_unit) = (yyvsp[0].vect_dbl_unit); }
#line 1913 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 462 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_dbl_unit) = (yyvsp[-1].vect_dbl_unit); }
#line 1919 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 75:
#line 467 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_dbl_unit) = (yyvsp[0].vect_dbl_unit); }
#line 1925 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 76:
#line 469 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_dbl_unit) = tdcpm_vect_dbl_units_join((yyvsp[-2].vect_dbl_unit), (yyvsp[0].vect_dbl_unit)); }
#line 1931 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 77:
#line 474 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_dbl_unit) = tdcpm_vect_dbl_units_new((yyvsp[0].dbl_unit), TDCPM_TSPEC_TYPE_NONE); }
#line 1937 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 78:
#line 476 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.vect_dbl_unit) = tdcpm_vect_dbl_units_new((yyvsp[-2].dbl_unit), (yyvsp[0].tspec));}
#line 1943 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 79:
#line 481 "tdcpm_parser.y" /* yacc.c:1652  */
    {
	    (yyval.dbl_unit)._value = (yyvsp[0].dbl_unit_build)._value;
	    (yyval.dbl_unit)._unit_idx = tdcpm_unit_make_full(&(yyvsp[0].dbl_unit_build)._unit_bld, 1);
	  }
#line 1952 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 80:
#line 511 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.dbl_unit_build) = (yyvsp[0].dbl_unit_build);      }
#line 1958 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 81:
#line 512 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.dbl_unit_build)._value    = -(yyvsp[0].dbl_unit_build)._value;
	                            (yyval.dbl_unit_build)._unit_bld = (yyvsp[0].dbl_unit_build)._unit_bld; }
#line 1965 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 82:
#line 514 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.dbl_unit_build) = (yyvsp[0].dbl_unit_build);      }
#line 1971 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 83:
#line 516 "tdcpm_parser.y" /* yacc.c:1652  */
    {
	    double factor;
	    if (!tdcpm_unit_build_factor(&(yyvsp[-2].dbl_unit_build)._unit_bld, &(yyvsp[0].dbl_unit_build)._unit_bld,
					 &factor))
	      yyerror("Error: cannot add, unit mismatch between terms.");
	    (yyval.dbl_unit_build)._value = (yyvsp[-2].dbl_unit_build)._value + factor * (yyvsp[0].dbl_unit_build)._value;
	    (yyval.dbl_unit_build)._unit_bld = (yyvsp[-2].dbl_unit_build)._unit_bld;
	    /*printf ("*** %.2f + %.2f -> %.2f\n",
	      $1._value,$3._value,$$._value);*/
	  }
#line 1986 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 84:
#line 527 "tdcpm_parser.y" /* yacc.c:1652  */
    {
	    double factor;
	    if (!tdcpm_unit_build_factor(&(yyvsp[-2].dbl_unit_build)._unit_bld, &(yyvsp[0].dbl_unit_build)._unit_bld,
					 &factor))
	      yyerror("Error: cannot subtract, unit mismatch between terms.");
	    (yyval.dbl_unit_build)._value = (yyvsp[-2].dbl_unit_build)._value + factor * (yyvsp[0].dbl_unit_build)._value;
	    (yyval.dbl_unit_build)._unit_bld = (yyvsp[-2].dbl_unit_build)._unit_bld;
	    /*printf ("*** %.2f - %.2f -> %.2f\n",
	      $1._value,$3._value,$$._value);*/
          }
#line 2001 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 85:
#line 538 "tdcpm_parser.y" /* yacc.c:1652  */
    {
	    (yyval.dbl_unit_build)._value = (yyvsp[-2].dbl_unit_build)._value * (yyvsp[0].dbl_unit_build)._value;
	    tdcpm_unit_build_mul(&(yyval.dbl_unit_build)._unit_bld,&(yyvsp[-2].dbl_unit_build)._unit_bld,&(yyvsp[0].dbl_unit_build)._unit_bld,1);
	    /*printf ("*** %.2f * %.2f -> %.2f\n",
	      $1._value,$3._value,$$._value);*/
          }
#line 2012 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 86:
#line 545 "tdcpm_parser.y" /* yacc.c:1652  */
    {
	    (yyval.dbl_unit_build)._value = (yyvsp[-2].dbl_unit_build)._value * (yyvsp[0].dbl_unit_build)._value;
	    tdcpm_unit_build_mul(&(yyval.dbl_unit_build)._unit_bld,&(yyvsp[-2].dbl_unit_build)._unit_bld,&(yyvsp[0].dbl_unit_build)._unit_bld,1);
	    /*printf ("*** %.2f * unit -> %.2f\n",
	      $1._value,$$._value);*/
          }
#line 2023 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 87:
#line 552 "tdcpm_parser.y" /* yacc.c:1652  */
    {
	    if ((yyvsp[0].dbl_unit_build)._value == 0.0)
	      yyerror("Warning: Division by zero.");
	    (yyval.dbl_unit_build)._value = (yyvsp[-2].dbl_unit_build)._value / (yyvsp[0].dbl_unit_build)._value;
	    tdcpm_unit_build_mul(&(yyval.dbl_unit_build)._unit_bld,&(yyvsp[-2].dbl_unit_build)._unit_bld,&(yyvsp[0].dbl_unit_build)._unit_bld,-1);
	    /*printf ("*** %.2f / %.2f -> %.2f\n",
	      $1._value,$3._value,$$._value);*/
	  }
#line 2036 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 88:
#line 561 "tdcpm_parser.y" /* yacc.c:1652  */
    {
	    (yyval.dbl_unit_build)._value = (yyvsp[-2].dbl_unit_build)._value / (yyvsp[0].dbl_unit_build)._value;
	    tdcpm_unit_build_mul(&(yyval.dbl_unit_build)._unit_bld,&(yyvsp[-2].dbl_unit_build)._unit_bld,&(yyvsp[0].dbl_unit_build)._unit_bld,-1);
	    /*printf ("*** %.2f / unit -> %.2f\n",
	      $1._value,$$._value);*/
	  }
#line 2047 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 89:
#line 567 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.dbl_unit_build) = (yyvsp[0].dbl_unit_build); }
#line 2053 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 90:
#line 572 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.dbl_unit_build) = (yyvsp[-1].dbl_unit_build); }
#line 2059 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 91:
#line 577 "tdcpm_parser.y" /* yacc.c:1652  */
    {
	    (yyval.dbl_unit_build)._value = (yyvsp[0].fValue);
	    (yyval.dbl_unit_build)._unit_bld = _tdcpm_unit_build_none;
	  }
#line 2068 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 92:
#line 582 "tdcpm_parser.y" /* yacc.c:1652  */
    {
	    (yyval.dbl_unit_build)._value = (yyvsp[-1].fValue) * (yyvsp[0].dbl_unit_build)._value;
	    (yyval.dbl_unit_build)._unit_bld = (yyvsp[0].dbl_unit_build)._unit_bld;
	  }
#line 2077 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 93:
#line 586 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.dbl_unit_build) = (yyvsp[0].dbl_unit_build); }
#line 2083 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 94:
#line 591 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.fValue) = (yyvsp[0].fValue); }
#line 2089 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 95:
#line 592 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.fValue) = (yyvsp[0].iValue); }
#line 2095 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 96:
#line 600 "tdcpm_parser.y" /* yacc.c:1652  */
    {
	    tdcpm_unit_new_dissect(&(yyval.dbl_unit), (yyvsp[0].str_idx));
	  }
#line 2103 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 97:
#line 604 "tdcpm_parser.y" /* yacc.c:1652  */
    {
	    (yyval.dbl_unit)._value = (yyvsp[0].dbl_unit_build)._value;
	    (yyval.dbl_unit)._unit_idx = tdcpm_unit_make_full(&(yyvsp[0].dbl_unit_build)._unit_bld, 1);
	  }
#line 2112 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 98:
#line 609 "tdcpm_parser.y" /* yacc.c:1652  */
    {
	    tdcpm_unit_build tmp;
	    (yyval.dbl_unit)._value = 1. / (yyvsp[0].dbl_unit_build)._value;
	    tdcpm_unit_build_mul(&tmp,
				 &_tdcpm_unit_build_none,&(yyvsp[0].dbl_unit_build)._unit_bld,-1);
	    (yyval.dbl_unit)._unit_idx = tdcpm_unit_make_full(&tmp, 1);
	  }
#line 2124 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 99:
#line 619 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.dbl_unit_build) = (yyvsp[0].dbl_unit_build); }
#line 2130 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 100:
#line 621 "tdcpm_parser.y" /* yacc.c:1652  */
    {
	    (yyval.dbl_unit_build)._value = (yyvsp[-2].dbl_unit_build)._value * (yyvsp[0].dbl_unit_build)._value;
	    tdcpm_unit_build_mul(&(yyval.dbl_unit_build)._unit_bld,&(yyvsp[-2].dbl_unit_build)._unit_bld,&(yyvsp[0].dbl_unit_build)._unit_bld,1);
	  }
#line 2139 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 101:
#line 626 "tdcpm_parser.y" /* yacc.c:1652  */
    {
	    (yyval.dbl_unit_build)._value = (yyvsp[-2].dbl_unit_build)._value / (yyvsp[0].dbl_unit_build)._value;
	    tdcpm_unit_build_mul(&(yyval.dbl_unit_build)._unit_bld,&(yyvsp[-2].dbl_unit_build)._unit_bld,&(yyvsp[0].dbl_unit_build)._unit_bld,-1);
	  }
#line 2148 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 102:
#line 633 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.dbl_unit_build) = (yyvsp[0].dbl_unit_build); }
#line 2154 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 103:
#line 635 "tdcpm_parser.y" /* yacc.c:1652  */
    {
	    (yyval.dbl_unit_build)._value = (yyvsp[-1].dbl_unit_build)._value * (yyvsp[0].dbl_unit_build)._value;
	    tdcpm_unit_build_mul(&(yyval.dbl_unit_build)._unit_bld,&(yyvsp[-1].dbl_unit_build)._unit_bld,&(yyvsp[0].dbl_unit_build)._unit_bld,1);
	  }
#line 2163 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 104:
#line 647 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.dbl_unit_build)._value = 1; tdcpm_unit_build_new(&(yyval.dbl_unit_build)._unit_bld,(yyvsp[0].str_idx),1); }
#line 2169 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 105:
#line 649 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.dbl_unit_build)._value = 1; tdcpm_unit_build_new(&(yyval.dbl_unit_build)._unit_bld,(yyvsp[-1].str_idx),(yyvsp[0].iValue)); }
#line 2175 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 106:
#line 653 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.dbl_unit_build)._value = 1; tdcpm_unit_build_new(&(yyval.dbl_unit_build)._unit_bld,(yyvsp[-2].str_idx),(yyvsp[0].iValue)); }
#line 2181 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 107:
#line 655 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.dbl_unit_build)._value = 1; tdcpm_unit_build_new(&(yyval.dbl_unit_build)._unit_bld,(yyvsp[-3].str_idx),-(yyvsp[0].iValue)); }
#line 2187 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 108:
#line 657 "tdcpm_parser.y" /* yacc.c:1652  */
    { (yyval.dbl_unit_build) = (yyvsp[0].dbl_unit_build); }
#line 2193 "generated/y.tab.c" /* yacc.c:1652  */
    break;


#line 2197 "generated/y.tab.c" /* yacc.c:1652  */
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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
#line 662 "tdcpm_parser.y" /* yacc.c:1918  */


void yyerror(const char *s)
{
  const char *file;
  int line;
  
  tdcpm_lineno_get(yylineno, &file, &line);
  fprintf(stderr,"%s:%d: %s\n", file, line, s);
/*
  Current.first_line   = Rhs[1].first_line;
  Current.first_column = Rhs[1].first_column;
  Current.last_line    = Rhs[N].last_line;
  Current.last_column  = Rhs[N].last_column;
*/
  /*throw error();*/
  exit(1);
}

int parse_definitions()
{
  /* yylloc.first_line = yylloc.last_line = 1; */
  /* yylloc.first_column = yylloc.last_column = 0; */

  return yyparse() == 0;
}
