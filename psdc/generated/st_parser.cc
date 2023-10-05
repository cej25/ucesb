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
#line 32 "st_parser.y" /* yacc.c:337  */

#define YYERROR_VERBOSE

#define YYTYPE_INT16 int

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#include "c_struct.hh"
#include "file_line.hh"
#include "parse_error.hh"
#include "node.hh"

int yylex(void);

int yyparse(void);

void yyerror(const char *s);

extern int yylineno;

void print_lineno(FILE* fid,int internal);

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

#define CURR_FILE_LINE file_line(yylineno)


#line 112 "generated/y.tab.c" /* yacc.c:337  */
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
    STRUCT = 262,
    UNION = 263,
    CLASS = 264,
    PUBLIC = 265,
    MULTI = 266,
    UNIT = 267,
    TOGGLE = 268
  };
#endif
/* Tokens.  */
#define INTEGER 258
#define DOUBLE 259
#define STRING 260
#define IDENTIFIER 261
#define STRUCT 262
#define UNION 263
#define CLASS 264
#define PUBLIC 265
#define MULTI 266
#define UNIT 267
#define TOGGLE 268

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 74 "st_parser.y" /* yacc.c:352  */

  // What we get from the lexer:

  double  fValue;              /* double value */
  int     iValue;              /* integer value */
  const char *strValue;        /* string */

  // We generate internally:

  def_node       *node;
  def_node_list  *nodes;

  c_struct_def   *str_def;
  c_struct_item_list  *str_item_list;
  c_struct_item  *str_item;

  c_typename     *item_type;

  c_array_ind    *array_list;

  c_arg_list     *arg_list;
  c_arg          *arg;

  //c_bitfield_item_list *bitfield_list;
  //c_bitfield_item *bitfield;

  c_base_class_list *base_list;


#line 211 "generated/y.tab.c" /* yacc.c:352  */
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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   96

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  25
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  50
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  91

#define YYUNDEFTOK  2
#define YYMAXUTOK   268

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
      19,    20,     2,     2,    18,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    17,    14,
      21,     2,    22,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    23,     2,    24,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    15,     2,    16,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   174,   174,   175,   179,   180,   185,   186,   196,   197,
     206,   207,   208,   212,   213,   217,   218,   222,   226,   227,
     231,   232,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   248,   249,   253,   257,   258,   262,   266,   267,   271,
     272,   276,   277,   281,   282,   283,   287,   288,   292,   293,
     297
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "DOUBLE", "STRING",
  "IDENTIFIER", "STRUCT", "UNION", "CLASS", "PUBLIC", "MULTI", "UNIT",
  "TOGGLE", "';'", "'{'", "'}'", "':'", "','", "'('", "')'", "'<'", "'>'",
  "'['", "']'", "$accept", "program", "stmt_list", "stmt",
  "struct_definition", "struct_or_class", "ident_null", "base_class_list",
  "base_class", "struct_item_list_null", "struct_item_list", "struct_item",
  "struct_member", "unit", "typename_null", "typename",
  "item_toggle_typename", "item_typename", "argument_list", "argument",
  "array_spec_list_null", "array_spec_list", "array_spec", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,    59,   123,   125,    58,    44,    40,
      41,    60,    62,    91,    93
};
# endif

#define YYPACT_NINF -58

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-58)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      24,   -58,   -58,   -58,   -58,    10,    24,   -58,   -58,     5,
     -58,   -58,   -58,    -3,    19,    11,    31,    21,    26,     2,
      25,   -58,   -58,    29,    11,   -58,   -10,    40,   -58,    41,
       8,   -58,     3,   -58,    42,    43,    44,   -58,    32,   -58,
      49,    50,    23,    -9,   -58,   -58,   -58,    11,    31,   -58,
      33,    35,    17,   -58,   -58,    37,   -58,    33,    53,    45,
      36,   -58,    52,   -58,    47,   -58,    46,   -58,   -58,    33,
      57,     3,   -58,   -58,    51,    48,   -58,   -58,    55,   -58,
      44,    54,   -58,   -58,   -58,   -58,    33,    33,    56,   -58,
     -58
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,    10,    11,    12,     6,     0,     2,     4,     7,    34,
       1,     5,    36,     0,    35,    18,     0,    39,     0,     0,
       0,    23,    24,     0,    19,    20,     0,     0,    37,     0,
       0,    15,     0,    22,     0,     0,    13,    21,     0,    25,
       0,     0,     0,     0,    48,    31,    17,    18,     0,    45,
      46,     0,     0,    41,    32,     0,    14,    46,     0,     0,
       0,    26,     0,    27,     0,    49,     0,    16,    43,    47,
       0,     0,    40,    38,     0,     0,    29,    50,     0,    28,
      13,     0,    42,     8,    33,    30,    46,    46,     0,    44,
       9
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -58,   -58,   -58,    58,    28,   -58,   -14,   -58,    27,    20,
     -58,    59,   -58,    30,   -58,   -58,    60,    61,   -58,     0,
     -57,    62,   -42
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     5,     6,     7,    22,     9,    57,    30,    31,    23,
      24,    25,    26,    42,    13,    14,    27,    28,    52,    53,
      68,    69,    44
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      74,    65,    38,    38,    39,    63,    49,    40,    17,    50,
      10,    12,    15,    41,    41,    20,    51,    17,     1,     2,
       3,    18,    19,    47,    20,    21,    48,    65,     8,    88,
      89,     1,     2,     3,     8,    71,    16,    61,     4,    72,
      62,    29,    32,    33,    35,    36,    45,    46,    54,    17,
      56,    58,    59,    60,    70,    78,    41,    73,    75,    76,
      77,    79,    80,    81,    11,    83,    86,    66,    84,    85,
      90,    82,     0,    64,    87,    67,     0,     0,     0,    34,
       0,     0,     0,    37,     0,     0,     0,     0,    43,     0,
       0,     0,     0,     0,     0,     0,    55
};

static const yytype_int8 yycheck[] =
{
      57,    43,    12,    12,    14,    14,     3,    17,     6,     6,
       0,     6,    15,    23,    23,    13,    13,     6,     7,     8,
       9,    10,    11,    15,    13,    14,    18,    69,     0,    86,
      87,     7,     8,     9,     6,    18,    17,    14,    14,    22,
      17,    10,    21,    17,    19,    16,     6,     6,     6,     6,
       6,    19,     3,     3,    19,     3,    23,    20,     5,    14,
      24,    14,    16,     6,     6,    14,    80,    47,    20,    14,
      14,    71,    -1,    43,    20,    48,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,     8,     9,    14,    26,    27,    28,    29,    30,
       0,    28,     6,    39,    40,    15,    17,     6,    10,    11,
      13,    14,    29,    34,    35,    36,    37,    41,    42,    10,
      32,    33,    21,    17,    41,    19,    16,    36,    12,    14,
      17,    23,    38,    46,    47,     6,     6,    15,    18,     3,
       6,    13,    43,    44,     6,    42,     6,    31,    19,     3,
       3,    14,    17,    14,    38,    47,    34,    33,    45,    46,
      19,    18,    22,    20,    45,     5,    14,    24,     3,    14,
      16,     6,    44,    14,    20,    14,    31,    20,    45,    45,
      14
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    25,    26,    26,    27,    27,    28,    28,    29,    29,
      30,    30,    30,    31,    31,    32,    32,    33,    34,    34,
      35,    35,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    37,    37,    38,    39,    39,    40,    41,    41,    42,
      42,    43,    43,    44,    44,    44,    45,    45,    46,    46,
      47
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     8,    10,
       1,     1,     1,     0,     1,     1,     3,     2,     0,     1,
       1,     2,     2,     1,     1,     2,     3,     3,     4,     4,
       5,     2,     3,     4,     0,     1,     1,     1,     4,     1,
       4,     1,     3,     2,     5,     1,     0,     1,     1,     2,
       3
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
#line 174 "st_parser.y" /* yacc.c:1652  */
    { append_list(&all_definitions,(yyvsp[0].nodes)); }
#line 1365 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 4:
#line 179 "st_parser.y" /* yacc.c:1652  */
    { (yyval.nodes) = create_list((yyvsp[0].node)); }
#line 1371 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 180 "st_parser.y" /* yacc.c:1652  */
    { (yyval.nodes) = append_list((yyvsp[-1].nodes),(yyvsp[0].node)); }
#line 1377 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 185 "st_parser.y" /* yacc.c:1652  */
    { (yyval.node) = NULL; }
#line 1383 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 186 "st_parser.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].str_def); }
#line 1389 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 8:
#line 196 "st_parser.y" /* yacc.c:1652  */
    { (yyval.str_def) = new c_struct_def(CURR_FILE_LINE,(yyvsp[-7].iValue),(yyvsp[-6].item_type),NULL,(yyvsp[-4].str_item_list),(yyvsp[-2].strValue),(yyvsp[-1].array_list)); }
#line 1395 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 197 "st_parser.y" /* yacc.c:1652  */
    { (yyval.str_def) = new c_struct_def(CURR_FILE_LINE,(yyvsp[-9].iValue),(yyvsp[-8].item_type),(yyvsp[-6].base_list),(yyvsp[-4].str_item_list),(yyvsp[-2].strValue),(yyvsp[-1].array_list)); }
#line 1401 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 206 "st_parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = C_STR_STRUCT; }
#line 1407 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 207 "st_parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = C_STR_UNION; }
#line 1413 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 208 "st_parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = C_STR_CLASS; }
#line 1419 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 212 "st_parser.y" /* yacc.c:1652  */
    { (yyval.strValue) = NULL; }
#line 1425 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 213 "st_parser.y" /* yacc.c:1652  */
    { (yyval.strValue) = (yyvsp[0].strValue); }
#line 1431 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 217 "st_parser.y" /* yacc.c:1652  */
    { (yyval.base_list) = create_list((yyvsp[0].strValue)); }
#line 1437 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 218 "st_parser.y" /* yacc.c:1652  */
    { (yyval.base_list) = append_list((yyvsp[-2].base_list),(yyvsp[0].strValue)); }
#line 1443 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 222 "st_parser.y" /* yacc.c:1652  */
    { (yyval.strValue) = (yyvsp[0].strValue); }
#line 1449 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 226 "st_parser.y" /* yacc.c:1652  */
    { null_list(&(yyval.str_item_list)); }
#line 1455 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 227 "st_parser.y" /* yacc.c:1652  */
    { (yyval.str_item_list) = (yyvsp[0].str_item_list); }
#line 1461 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 231 "st_parser.y" /* yacc.c:1652  */
    { (yyval.str_item_list) = create_list((yyvsp[0].str_item)); }
#line 1467 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 232 "st_parser.y" /* yacc.c:1652  */
    { (yyval.str_item_list) = append_list((yyvsp[-1].str_item_list),(yyvsp[0].str_item)); }
#line 1473 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 236 "st_parser.y" /* yacc.c:1652  */
    { (yyval.str_item) = NULL; /* silenty ignore */ }
#line 1479 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 237 "st_parser.y" /* yacc.c:1652  */
    { (yyval.str_item) = NULL; /* silenty ignore */ }
#line 1485 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 238 "st_parser.y" /* yacc.c:1652  */
    { (yyval.str_item) = (yyvsp[0].str_def); }
#line 1491 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 239 "st_parser.y" /* yacc.c:1652  */
    { (yyval.str_item) = (yyvsp[-1].str_item); }
#line 1497 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 240 "st_parser.y" /* yacc.c:1652  */
    { (yyval.str_item) = (yyvsp[-2].str_item); (yyvsp[-2].str_item)->set_unit((yyvsp[-1].strValue)); }
#line 1503 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 241 "st_parser.y" /* yacc.c:1652  */
    { (yyval.str_item) = (yyvsp[-2].str_item); (yyvsp[-2].str_item)->set_array_ind((yyvsp[-1].array_list)); }
#line 1509 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 242 "st_parser.y" /* yacc.c:1652  */
    { (yyval.str_item) = (yyvsp[-3].str_item); (yyvsp[-3].str_item)->set_array_ind((yyvsp[-2].array_list)); (yyvsp[-3].str_item)->set_unit((yyvsp[-1].strValue)); }
#line 1515 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 243 "st_parser.y" /* yacc.c:1652  */
    { (yyvsp[-3].str_item)->set_bitfield((yyvsp[-1].iValue)); (yyval.str_item) = (yyvsp[-3].str_item); }
#line 1521 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 244 "st_parser.y" /* yacc.c:1652  */
    { (yyvsp[-4].str_item)->set_bitfield((yyvsp[-1].iValue)); (yyvsp[-4].str_item)->set_unit((yyvsp[-3].strValue)); (yyval.str_item) = (yyvsp[-4].str_item); }
#line 1527 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 248 "st_parser.y" /* yacc.c:1652  */
    { (yyval.str_item) = new c_struct_member(CURR_FILE_LINE,(yyvsp[-1].item_type),(yyvsp[0].strValue),NULL,0,0); }
#line 1533 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 32:
#line 249 "st_parser.y" /* yacc.c:1652  */
    { (yyval.str_item) = new c_struct_member(CURR_FILE_LINE,(yyvsp[-1].item_type),(yyvsp[0].strValue),NULL,0,1); }
#line 1539 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 253 "st_parser.y" /* yacc.c:1652  */
    { insert_prefix_units_exp(CURR_FILE_LINE,(yyvsp[-1].strValue)); (yyval.strValue) = (yyvsp[-1].strValue); }
#line 1545 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 257 "st_parser.y" /* yacc.c:1652  */
    { (yyval.item_type) = NULL; }
#line 1551 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 258 "st_parser.y" /* yacc.c:1652  */
    { (yyval.item_type) = (yyvsp[0].item_type); }
#line 1557 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 262 "st_parser.y" /* yacc.c:1652  */
    { (yyval.item_type) = new c_typename(CURR_FILE_LINE,(yyvsp[0].strValue)); }
#line 1563 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 266 "st_parser.y" /* yacc.c:1652  */
    { (yyval.item_type) = (yyvsp[0].item_type); }
#line 1569 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 267 "st_parser.y" /* yacc.c:1652  */
    { (yyvsp[-1].item_type)->set_toggle(); (yyval.item_type) = (yyvsp[-1].item_type); }
#line 1575 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 271 "st_parser.y" /* yacc.c:1652  */
    { (yyval.item_type) = new c_typename(CURR_FILE_LINE,(yyvsp[0].strValue)); }
#line 1581 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 272 "st_parser.y" /* yacc.c:1652  */
    { (yyval.item_type) = new c_typename_template(CURR_FILE_LINE,(yyvsp[-3].strValue),(yyvsp[-1].arg_list)); }
#line 1587 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 276 "st_parser.y" /* yacc.c:1652  */
    { (yyval.arg_list) = create_list((yyvsp[0].arg)); }
#line 1593 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 277 "st_parser.y" /* yacc.c:1652  */
    { (yyval.arg_list) = append_list((yyvsp[-2].arg_list),(yyvsp[0].arg)); }
#line 1599 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 281 "st_parser.y" /* yacc.c:1652  */
    { (yyval.arg) = new c_arg_named(CURR_FILE_LINE,(yyvsp[-1].strValue),(yyvsp[0].array_list),false); }
#line 1605 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 282 "st_parser.y" /* yacc.c:1652  */
    { (yyval.arg) = new c_arg_named(CURR_FILE_LINE,(yyvsp[-2].strValue),(yyvsp[0].array_list),true); }
#line 1611 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 283 "st_parser.y" /* yacc.c:1652  */
    { (yyval.arg) = new c_arg_const(CURR_FILE_LINE,(yyvsp[0].iValue)); }
#line 1617 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 287 "st_parser.y" /* yacc.c:1652  */
    { (yyval.array_list) = NULL; }
#line 1623 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 288 "st_parser.y" /* yacc.c:1652  */
    { (yyval.array_list) = (yyvsp[0].array_list); }
#line 1629 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 292 "st_parser.y" /* yacc.c:1652  */
    { (yyval.array_list) = new c_array_ind; (yyval.array_list)->push_back((yyvsp[0].iValue)); }
#line 1635 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 293 "st_parser.y" /* yacc.c:1652  */
    { (yyvsp[-1].array_list)->push_back((yyvsp[0].iValue)); (yyval.array_list) = (yyvsp[-1].array_list); }
#line 1641 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 297 "st_parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = (yyvsp[-1].iValue); }
#line 1647 "generated/y.tab.c" /* yacc.c:1652  */
    break;


#line 1651 "generated/y.tab.c" /* yacc.c:1652  */
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
#line 347 "st_parser.y" /* yacc.c:1918  */


void yyerror(const char *s) {
  print_lineno(stderr,yylineno);
  fprintf(stderr," %s\n", s);
/*
  Current.first_line   = Rhs[1].first_line;
  Current.first_column = Rhs[1].first_column;
  Current.last_line    = Rhs[N].last_line;
  Current.last_column  = Rhs[N].last_column;
*/
}

bool parse_definitions()
{
  // yylloc.first_line = yylloc.last_line = 1;
  // yylloc.first_column = yylloc.last_column = 0;

  return yyparse() == 0;
}
