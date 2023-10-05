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
#line 32 "parser.y" /* yacc.c:337  */

#define YYERROR_VERBOSE

#define YYTYPE_INT16 int

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#include "definitions.hh"
#include "parse_error.hh"

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

int _signal_spec_order_index = 0;

#define CURR_SIGNAL_COUNT (_signal_spec_order_index++)

int _struct_item_order_index = 0;

#define CURR_ITEM_COUNT (_struct_item_order_index++)

#define CHECK_INDEX(index,max) { \
  { if ((index) <  0)     ERROR_LOC(CURR_FILE_LINE,"Variable index may not be negative (%d).\n",(index)); } \
  { if ((index) >= (max)) ERROR_LOC(CURR_FILE_LINE,"Cowardly refusing variable index (%d) >= %d.\n",(index),(max)); } \
}

#define CHECK_ARRAY_SIZE(index,max) { \
  { if ((index) <= 0)     ERROR_LOC(CURR_FILE_LINE,"Array size may not be negative (%d).\n",(index)); } \
  { if ((index) > (max)) ERROR_LOC(CURR_FILE_LINE,"Cowardly refusing array size (%d) > %d.\n",(index),(max)); } \
}


#line 128 "generated/y.tab.c" /* yacc.c:337  */
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
    INTEGER_RANGE = 259,
    DOUBLE = 260,
    STRING = 261,
    IDENTIFIER = 262,
    EVENT = 263,
    STICKY_EVENT = 264,
    SUBEVENT = 265,
    SIGNAL = 266,
    STICKY = 267,
    TOGGLE = 268,
    UINT64 = 269,
    UINT32 = 270,
    UINT16 = 271,
    UINT8 = 272,
    T_IF = 273,
    T_ELSE = 274,
    T_LIST = 275,
    T_SEVERAL = 276,
    T_OPTIONAL = 277,
    T_SELECT = 278,
    T_MULTI = 279,
    T_EXTERNAL = 280,
    T_NOREVISIT = 281,
    T_REVISIT = 282,
    T_IGNORE_UNKNOWN_SUBEVENT = 283,
    T_STATIC_CAST = 284,
    T_LOR = 285,
    T_LAND = 286,
    T_SHL = 287,
    T_SHR = 288,
    T_LE = 289,
    T_GE = 290,
    T_EQ = 291,
    T_NEQ = 292,
    MATCH = 293,
    CHECK = 294,
    RANGE = 295,
    ENCODE = 296,
    NOENCODE = 297,
    EXTERNAL = 298,
    MEMBER = 299,
    ZERO_SUPPRESS = 300,
    ZERO_SUPPRESS_LIST = 301,
    ZERO_SUPPRESS_MULTI = 302,
    NO_INDEX_LIST = 303,
    APPEND_LIST = 304,
    FIRST_EVENT = 305,
    LAST_EVENT = 306,
    MARK = 307,
    MARK_COUNT = 308,
    CHECK_COUNT = 309,
    MATCH_END = 310,
    ULNOT = 311,
    UMINUS = 312
  };
#endif
/* Tokens.  */
#define INTEGER 258
#define INTEGER_RANGE 259
#define DOUBLE 260
#define STRING 261
#define IDENTIFIER 262
#define EVENT 263
#define STICKY_EVENT 264
#define SUBEVENT 265
#define SIGNAL 266
#define STICKY 267
#define TOGGLE 268
#define UINT64 269
#define UINT32 270
#define UINT16 271
#define UINT8 272
#define T_IF 273
#define T_ELSE 274
#define T_LIST 275
#define T_SEVERAL 276
#define T_OPTIONAL 277
#define T_SELECT 278
#define T_MULTI 279
#define T_EXTERNAL 280
#define T_NOREVISIT 281
#define T_REVISIT 282
#define T_IGNORE_UNKNOWN_SUBEVENT 283
#define T_STATIC_CAST 284
#define T_LOR 285
#define T_LAND 286
#define T_SHL 287
#define T_SHR 288
#define T_LE 289
#define T_GE 290
#define T_EQ 291
#define T_NEQ 292
#define MATCH 293
#define CHECK 294
#define RANGE 295
#define ENCODE 296
#define NOENCODE 297
#define EXTERNAL 298
#define MEMBER 299
#define ZERO_SUPPRESS 300
#define ZERO_SUPPRESS_LIST 301
#define ZERO_SUPPRESS_MULTI 302
#define NO_INDEX_LIST 303
#define APPEND_LIST 304
#define FIRST_EVENT 305
#define LAST_EVENT 306
#define MARK 307
#define MARK_COUNT 308
#define CHECK_COUNT 309
#define MATCH_END 310
#define ULNOT 311
#define UMINUS 312

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 90 "parser.y" /* yacc.c:352  */

  // What we get from the lexer:

  double  fValue;              /* double value */
  int     iValue;              /* integer value */
  const char *strValue;        /* string */

  int_range iRange;

  // We generate internally:

  def_node       *node;
  def_node_list  *nodes;

  struct_cond    *str_cond;
  //struct_several *str_several;
  struct_select  *str_select;
  struct_member  *str_member;
  struct_mark    *str_mark;
  struct_check_count *str_check;
  struct_decl    *str_decl;
  struct_decl_list *str_decl_list;
  struct_list    *str_list;

  struct_item    *str_item;

  struct_item_list *str_body;
  struct_header    *str_header;

  struct_definition *str_def;
  event_definition *ev_def;

  variable       *var;
  var_name       *var_n;

  sm_flags       *sm_flag;

  bits_spec_list *bits_list;
  bits_spec      *bits_item;

  encode_spec_base *encode_base;
  encode_spec      *encode;
  encode_spec_list *encode_list;

  param_list *par_list;
  param      *par_item;
  argument_list   *arg_list;
  argument        *arg_item;

  bits_condition  *bits_cond;

  signal_spec     *sig;
  signal_info     *sig_info;

  signal_spec_ident_var *sig_id_var;
  signal_spec_types *sig_types;
  signal_spec_type_unit *sig_type_unit;


#line 345 "generated/y.tab.c" /* yacc.c:352  */
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
#define YYFINAL  24
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1081

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  66
/* YYNRULES -- Number of rules.  */
#define YYNRULES  178
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  398

#define YYUNDEFTOK  2
#define YYMAXUTOK   312

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
       2,     2,     2,    79,     2,     2,     2,    65,    58,     2,
      71,    72,    63,    61,    73,    62,    75,    64,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    80,    68,
      59,    74,    60,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    76,     2,    77,    57,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,    56,    70,    78,     2,     2,     2,
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
      55,    66,    67
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   336,   336,   337,   341,   342,   347,   348,   349,   350,
     351,   360,   361,   365,   369,   370,   374,   375,   379,   380,
     384,   385,   389,   390,   391,   392,   394,   395,   396,   397,
     398,   399,   400,   404,   408,   409,   413,   417,   418,   422,
     423,   427,   428,   432,   433,   437,   441,   442,   446,   447,
     451,   452,   453,   454,   458,   462,   467,   468,   469,   478,
     482,   483,   484,   490,   491,   495,   496,   500,   501,   502,
     506,   507,   508,   512,   513,   516,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   551,   564,   565,   569,   570,   574,   575,   581,   582,
     586,   587,   591,   600,   601,   602,   606,   607,   608,   612,
     613,   617,   618,   619,   620,   621,   625,   626,   630,   631,
     635,   639,   640,   644,   648,   649,   650,   654,   655,   656,
     657,   661,   662,   666,   667,   668,   669,   670,   674,   675,
     679,   680,   681,   682,   688,   689,   693,   700,   709,   717,
     730,   740,   747,   754,   756,   761,   762,   766,   767,   772,
     776,   777,   781,   782,   783,   793,   798,   803,   810
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "INTEGER_RANGE", "DOUBLE",
  "STRING", "IDENTIFIER", "EVENT", "STICKY_EVENT", "SUBEVENT", "SIGNAL",
  "STICKY", "TOGGLE", "UINT64", "UINT32", "UINT16", "UINT8", "T_IF",
  "T_ELSE", "T_LIST", "T_SEVERAL", "T_OPTIONAL", "T_SELECT", "T_MULTI",
  "T_EXTERNAL", "T_NOREVISIT", "T_REVISIT", "T_IGNORE_UNKNOWN_SUBEVENT",
  "T_STATIC_CAST", "T_LOR", "T_LAND", "T_SHL", "T_SHR", "T_LE", "T_GE",
  "T_EQ", "T_NEQ", "MATCH", "CHECK", "RANGE", "ENCODE", "NOENCODE",
  "EXTERNAL", "MEMBER", "ZERO_SUPPRESS", "ZERO_SUPPRESS_LIST",
  "ZERO_SUPPRESS_MULTI", "NO_INDEX_LIST", "APPEND_LIST", "FIRST_EVENT",
  "LAST_EVENT", "MARK", "MARK_COUNT", "CHECK_COUNT", "MATCH_END", "'|'",
  "'^'", "'&'", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "ULNOT",
  "UMINUS", "';'", "'{'", "'}'", "'('", "')'", "','", "'='", "'.'", "'['",
  "']'", "'~'", "'!'", "':'", "$accept", "program", "stmt_list", "stmt",
  "event_definition", "event_definition_body", "structure_definition",
  "structure_header", "structure_body_null", "structure_body",
  "structure_item", "member_item", "mark_count_item", "check_count_item",
  "event_declared_item_list", "event_declared_item",
  "declared_item_list_null", "declared_item_list", "declared_item",
  "declared_item_multi_ext", "declared_item_multi_ext_list",
  "declared_item_multi_ext_item", "list_item", "select_item",
  "select_flag", "conditional_item", "conditional_else_item",
  "var_or_const_or_external", "var_or_const", "var_named",
  "var_named_single_indexed", "var_named_single", "var_expr",
  "var_eval_int_const", "param_list_null", "param_list", "param_item",
  "arg_list_null", "arg_list", "arg_item", "data_item", "data_item_flag",
  "noencode", "zero_suppress", "encode_item_list", "cond_or_encode_item",
  "encode_item", "encode_flags", "cond_encode_item",
  "cond_encode_else_item", "data_item_size", "data_item_bits_list",
  "data_item_bits", "bits_range", "bits_condition", "signal_or_sticky",
  "signal", "signal_ident_var", "signal_ident_null", "signal_types",
  "signal_type", "signal_type_unit", "signal_tags", "signal_tag_list",
  "signal_tag", "signal_info", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   124,    94,    38,    60,
      62,    43,    45,    42,    47,    37,   311,   312,    59,   123,
     125,    40,    41,    44,    61,    46,    91,    93,   126,    33,
      58
};
# endif

#define YYPACT_NINF -362

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-362)))

#define YYTABLE_NINF -47

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     140,    -4,     6,     6,     8,  -362,  -362,    48,  -362,   107,
     140,  -362,  -362,  -362,    51,    59,    92,    98,   139,   218,
    -362,  -362,   172,   112,  -362,  -362,   208,   203,  -362,  -362,
     108,   119,   124,  -362,  -362,  -362,  -362,  -362,   130,   111,
    -362,  -362,   177,   147,  -362,   127,  -362,   132,   134,  -362,
    -362,    24,   135,   138,   152,   153,   154,   133,  -362,   195,
     283,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,
     197,  -362,   174,   261,   187,   200,   -31,  -362,  -362,   199,
     201,   266,   -26,  -362,   114,  -362,   139,  -362,  -362,  -362,
     204,   205,  -362,  -362,   114,    71,  -362,  -362,   206,   270,
     274,   275,   276,   114,  -362,  -362,  -362,  -362,  -362,  -362,
    -362,   277,   278,  -362,   279,   114,   114,   281,    45,   117,
     216,   219,    13,  -362,  -362,   -10,   232,   286,   114,   114,
     114,   114,   114,  -362,  -362,  -362,  -362,   957,  -362,  -362,
     114,   287,   657,   262,   137,   221,   253,   177,   239,   240,
     533,   271,  -362,   242,   243,   244,   245,   216,    16,  -362,
     246,   248,   312,  -362,  -362,   249,   278,    45,  -362,   278,
     114,   315,  -362,  -362,  -362,   674,  -362,  -362,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   252,   254,   257,   278,
     260,   137,  -362,   114,  -362,   250,   191,   263,   264,   326,
    -362,    46,  -362,   269,   272,  -362,   267,   117,  -362,  -362,
    -362,   282,   284,  -362,   273,   294,  -362,   449,   967,   194,
     194,   157,   157,  1016,  1016,  1001,  1009,   602,   157,   157,
      77,    77,  -362,  -362,  -362,   258,   350,   435,   299,  -362,
    -362,   461,   288,  -362,  -362,   289,  -362,   291,  -362,  -362,
     295,  -362,    78,   354,   357,    16,   297,   117,  -362,    52,
     296,   114,   298,   306,   314,  -362,   321,   114,   316,   350,
     114,   302,   364,   308,   310,    10,  -362,     5,   322,   323,
     324,  -362,   325,   278,   114,   328,   114,   330,   350,   374,
     717,   114,    96,   327,  -362,   329,  -362,  -362,   335,  -362,
      -2,  -362,  -362,  -362,  -362,   333,     9,   114,  -362,  -362,
    -362,  -362,  -362,   734,  -362,   957,  -362,  -362,     2,  -362,
     338,   497,   336,  -362,   114,   114,  -362,  -362,  -362,  -362,
     116,   337,  -362,   435,  -362,   435,  -362,   342,   551,   777,
     345,   355,   360,   361,   362,   365,   366,   359,   397,  -362,
     114,   356,   114,   114,   114,   421,  -362,  -362,  -362,  -362,
    -362,   794,     7,   837,   854,   595,   363,  -362,     0,  -362,
    -362,   114,   428,   418,   897,   367,   -19,  -362,  -362,   114,
       7,  -362,   613,     3,   114,  -362,   914,  -362
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     0,     0,   154,   155,     0,     6,     0,
       2,     4,     7,     8,     0,     0,     0,     0,   102,    46,
      11,    12,     0,     0,     1,     5,   116,     0,     9,    10,
     106,     0,   103,   104,    50,    51,    53,    52,     0,    46,
      37,    40,     0,    47,    48,     0,    15,     0,     0,   118,
     117,    56,     0,     0,     0,     0,     0,     0,    22,     0,
     116,    20,    28,    29,    30,    27,    24,    25,    26,    23,
       0,    31,     0,     0,     0,     0,     0,   172,   173,     0,
       0,     0,     0,   170,     0,    17,     0,    39,    13,    38,
      73,     0,    49,    16,     0,     0,    57,    58,     0,     0,
       0,     0,     0,     0,    32,    14,    21,   137,   138,   139,
     140,     0,   162,   174,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   169,    66,    73,     0,     0,     0,     0,
       0,     0,     0,    76,    63,    65,    67,   101,   107,   105,
       0,     0,     0,     0,    41,    70,   131,     0,     0,     0,
       0,   119,   161,     0,     0,     0,     0,   165,     0,   166,
       0,     0,   167,   163,   165,     0,     0,     0,   171,     0,
       0,     0,    64,    78,    77,     0,    79,    80,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    42,    43,     0,   132,     0,   121,     0,     0,     0,
     120,     0,   175,     0,     0,   176,     0,     0,   156,   168,
     160,     0,     0,    68,     0,     0,    81,    82,    83,    93,
      92,    96,    97,    98,    99,    90,    91,    89,    94,    95,
      84,    85,    86,    87,    88,    74,   108,   116,     0,    55,
      44,     0,     0,   122,   123,     0,   125,     0,    34,    35,
       0,   113,     0,     0,     0,     0,     0,     0,   158,    74,
       0,     0,     0,     0,   109,   110,   116,     0,    71,     0,
       0,     0,     0,     0,     0,     0,   141,     0,     0,     0,
       0,   157,     0,     0,     0,     0,     0,     0,     0,    62,
       0,     0,     0,     0,    33,     0,   148,   149,     0,   114,
       0,   126,   128,   129,   142,     0,     0,     0,   178,   177,
     164,   159,    69,     0,    75,   112,    45,   111,     0,    59,
       0,     0,     0,   124,     0,     0,   115,   127,   144,   143,
       0,     0,   100,   116,    61,   116,    72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   116,   116,   130,
       0,     0,     0,     0,     0,     0,   146,   147,   145,    60,
      54,     0,     0,     0,     0,     0,     0,    36,     0,   151,
     150,     0,     0,   136,     0,     0,     0,   133,   152,     0,
       0,   135,     0,     0,     0,   134,     0,   153
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -362,  -362,  -362,   429,  -362,   440,  -362,   437,  -362,  -237,
     -59,  -362,  -362,  -362,  -362,   406,  -362,  -362,   -15,  -362,
    -362,   403,  -362,  -362,  -362,   120,  -362,  -362,   352,   -97,
    -362,   -35,   -94,  -113,  -362,  -362,   368,  -362,   184,   166,
    -362,  -362,  -362,  -362,  -361,  -267,  -268,  -362,  -362,  -362,
     396,  -362,   183,  -362,  -362,  -362,  -362,   -62,  -362,  -114,
    -362,  -152,  -362,  -362,   347,  -362
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    12,    20,    13,    14,    59,    60,
      61,    62,    63,    64,    39,    40,   200,   201,    65,    42,
      43,    44,    66,    67,    98,    68,   329,   133,   134,   135,
     146,   136,   137,   138,    31,    32,    33,   273,   274,   275,
      69,    70,   211,   257,   310,   311,    71,   205,   313,   387,
     159,   285,   286,   287,   355,    15,    16,    79,    80,   161,
     162,   163,    81,    82,    83,    17
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     142,   106,   154,   155,    41,   165,   216,    91,   315,   150,
     276,   378,   316,   283,   284,   152,   308,   312,   308,   121,
      47,   308,    52,   164,    41,   308,    73,   196,   308,   393,
     107,   108,   109,   110,   173,   174,   175,   176,   177,    52,
     116,    52,   312,   337,    52,    96,    97,   122,    52,   117,
     390,    52,   157,   222,   123,     1,   160,   224,     4,   107,
     108,   109,   110,    77,    78,   169,   170,    18,   336,   152,
     383,   343,   223,   395,   124,    19,   317,   339,   125,    22,
     309,   283,   284,   340,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   248,   266,   312,   221,   357,    24,   358,   251,
     312,   337,   206,   290,   261,   262,   158,   124,   391,   124,
      26,   125,   312,   125,   164,   312,   337,   293,   271,   202,
      27,   107,   108,   109,   110,    34,    35,    36,    37,    38,
     193,   194,   195,   126,   -46,   126,    30,     1,     2,     3,
       4,     5,     6,   292,   350,   351,   352,   127,   295,   127,
      28,    34,    35,    36,    37,     7,    29,   303,   332,   298,
     353,    34,    35,    36,    37,   128,   129,   128,   129,    45,
      46,    88,    84,   300,    90,   130,   250,   130,   158,   180,
     181,    85,   131,   132,   131,   132,   322,    86,    87,    93,
     323,   104,   325,    94,   341,    95,    99,   331,     8,   100,
      72,   107,   108,   109,   110,   -46,    73,   106,   191,   192,
     193,   194,   195,   101,   102,   103,    47,   354,    48,    49,
      50,    51,    34,    35,    36,    37,   253,   254,   255,   256,
     348,   349,    34,    35,    36,    37,    38,   112,    74,    52,
      75,    76,    53,    77,    78,   191,   192,   193,   194,   195,
      54,    55,    56,    57,   113,   105,   371,   114,   373,   374,
     375,   115,   118,   120,   119,   144,    58,   145,   -18,   141,
     140,   147,   148,   149,   151,   125,   153,   384,   156,   166,
     -46,   171,   167,   172,   197,   392,   199,   203,   106,   106,
     396,    47,   204,    48,    49,    50,    51,    34,    35,    36,
      37,   207,   208,   210,   212,   213,   214,   215,   219,   217,
     218,   220,   225,   252,    52,   246,   247,    53,   -46,   245,
     249,   258,   259,   260,   271,    54,    55,    56,    57,    47,
     265,    48,    49,    50,    51,    34,    35,    36,    37,   263,
     269,    58,   264,   -19,   270,   267,   268,   272,   277,   279,
     280,   288,    52,   281,   289,    53,   -46,   294,   282,   291,
     304,   305,   296,    54,    55,    56,    57,    47,   297,    48,
      49,    50,    51,    34,    35,    36,    37,   298,   306,    58,
     307,   299,   301,   328,   318,   319,   320,   321,   326,   333,
      52,   338,   334,    53,   -46,   324,   335,   345,   347,   356,
     359,    54,    55,    56,    57,    47,   362,    48,    49,    50,
      51,    34,    35,    36,    37,   372,   363,    58,   376,   369,
     366,   364,   365,   367,   368,   385,   382,   386,    52,    25,
     389,    53,   -46,    21,    23,    89,    92,   143,   344,    54,
      55,    56,    57,    47,   139,    48,    49,    50,    51,    34,
      35,    36,    37,   302,   327,    58,   111,   370,   314,   168,
       0,     0,     0,     0,     0,     0,    52,     0,     0,    53,
     179,   180,   181,   182,   183,   184,   185,    54,    55,    56,
      57,   178,   179,   180,   181,   182,   183,   184,   185,     0,
       0,     0,     0,    58,     0,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,     0,     0,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   178,   179,   180,
     181,   182,   183,   184,   185,     0,     0,     0,   278,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   178,   179,   180,   181,   182,   183,   184,
     185,     0,     0,     0,   346,     0,     0,     0,     0,     0,
       0,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,     0,
       0,     0,     0,     0,     0,     0,   209,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,     0,     0,     0,
       0,     0,     0,     0,   360,   178,   179,   180,   181,   182,
     183,   184,   185,     0,   180,   181,   182,   183,   184,   185,
       0,     0,     0,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   189,   190,   191,   192,   193,   194,   195,   381,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,     0,
       0,     0,     0,     0,     0,     0,   394,   178,   179,   180,
     181,   182,   183,   184,   185,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   178,   179,   180,   181,   182,   183,
     184,   185,     0,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,     0,     0,     0,     0,     0,     0,   198,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
       0,     0,     0,     0,     0,     0,   226,   178,   179,   180,
     181,   182,   183,   184,   185,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   178,   179,   180,   181,   182,   183,
     184,   185,     0,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,     0,     0,     0,     0,     0,     0,   330,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
       0,     0,     0,     0,     0,     0,   342,   178,   179,   180,
     181,   182,   183,   184,   185,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   178,   179,   180,   181,   182,   183,
     184,   185,     0,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,     0,     0,     0,     0,     0,     0,   361,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
       0,     0,     0,     0,     0,     0,   377,   178,   179,   180,
     181,   182,   183,   184,   185,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   178,   179,   180,   181,   182,   183,
     184,   185,     0,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,     0,     0,     0,     0,     0,     0,   379,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
       0,     0,     0,     0,     0,     0,   380,   178,   179,   180,
     181,   182,   183,   184,   185,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   178,   179,   180,   181,   182,   183,
     184,   185,     0,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,     0,     0,     0,     0,     0,     0,   388,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
       0,     0,     0,     0,     0,     0,   397,   178,   179,   180,
     181,   182,   183,   184,   185,     0,     0,     0,     0,   180,
     181,   182,   183,   184,   185,     0,     0,     0,     0,     0,
       0,     0,     0,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   180,   181,   182,   183,   184,   185,     0,
       0,   180,   181,   182,   183,   184,   185,     0,   180,   181,
     182,   183,     0,     0,     0,     0,     0,     0,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   188,   189,   190,
     191,   192,   193,   194,   195,   189,   190,   191,   192,   193,
     194,   195
};

static const yytype_int16 yycheck[] =
{
      94,    60,   115,   116,    19,   119,   158,    42,     3,   103,
     247,   372,     7,     3,     4,   112,    18,   285,    18,    81,
      18,    18,    41,     7,    39,    18,    13,   140,    18,   390,
      14,    15,    16,    17,   128,   129,   130,   131,   132,    41,
      71,    41,   310,   310,    41,    21,    22,    73,    41,    80,
      69,    41,     7,   167,    80,     7,   118,   170,    10,    14,
      15,    16,    17,    50,    51,    75,    76,    71,    70,   166,
      70,    69,   169,    70,     3,    69,    71,    68,     7,    71,
      70,     3,     4,    74,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   199,   217,   372,   167,   343,     0,   345,   203,
     378,   378,   147,   265,    68,    69,    71,     3,   386,     3,
      69,     7,   390,     7,     7,   393,   393,    75,    76,   144,
      71,    14,    15,    16,    17,    24,    25,    26,    27,    28,
      63,    64,    65,    29,     7,    29,     7,     7,     8,     9,
      10,    11,    12,   267,    38,    39,    40,    43,   271,    43,
      68,    24,    25,    26,    27,    25,    68,   280,    72,    73,
      54,    24,    25,    26,    27,    61,    62,    61,    62,     7,
      68,    70,    74,   277,     7,    71,   201,    71,    71,    32,
      33,    72,    78,    79,    78,    79,   293,    73,    68,    72,
     294,    68,   296,    71,   317,    71,    71,   301,    68,    71,
       7,    14,    15,    16,    17,     7,    13,   276,    61,    62,
      63,    64,    65,    71,    71,    71,    18,   340,    20,    21,
      22,    23,    24,    25,    26,    27,    45,    46,    47,    48,
     334,   335,    24,    25,    26,    27,    28,    73,    45,    41,
      47,    48,    44,    50,    51,    61,    62,    63,    64,    65,
      52,    53,    54,    55,     3,    70,   360,    80,   362,   363,
     364,    71,    73,     7,    73,    69,    68,     7,    70,    74,
      76,     7,     7,     7,     7,     7,     7,   381,     7,    73,
       7,    59,    73,     7,     7,   389,    34,    76,   357,   358,
     394,    18,    49,    20,    21,    22,    23,    24,    25,    26,
      27,    72,    72,    42,    72,    72,    72,    72,     6,    73,
      72,    72,     7,    73,    41,    71,    69,    44,     7,    77,
      70,    68,    68,     7,    76,    52,    53,    54,    55,    18,
      73,    20,    21,    22,    23,    24,    25,    26,    27,    80,
      77,    68,    80,    70,    60,    73,    72,     7,    59,    71,
      71,     7,    41,    72,     7,    44,     7,    71,    73,    72,
      68,     7,    74,    52,    53,    54,    55,    18,    72,    20,
      21,    22,    23,    24,    25,    26,    27,    73,    80,    68,
      80,    70,    76,    19,    72,    72,    72,    72,    68,    72,
      41,    68,    73,    44,     7,    77,    71,    69,    72,    72,
      68,    52,    53,    54,    55,    18,    71,    20,    21,    22,
      23,    24,    25,    26,    27,    69,    71,    68,     7,    70,
      68,    71,    71,    68,    68,     7,    73,    19,    41,    10,
      73,    44,     7,     3,     7,    39,    43,    95,   328,    52,
      53,    54,    55,    18,    86,    20,    21,    22,    23,    24,
      25,    26,    27,   279,   298,    68,    70,    70,   285,   122,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    44,
      31,    32,    33,    34,    35,    36,    37,    52,    53,    54,
      55,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    68,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    59,    60,    61,    62,    63,    64,    65,    73,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    32,    33,    34,    35,    36,    37,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    58,    59,    60,
      61,    62,    63,    64,    65,    59,    60,    61,    62,    63,
      64,    65
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,     8,     9,    10,    11,    12,    25,    68,    82,
      83,    84,    85,    87,    88,   136,   137,   146,    71,    69,
      86,    86,    71,    88,     0,    84,    69,    71,    68,    68,
       7,   115,   116,   117,    24,    25,    26,    27,    28,    95,
      96,    99,   100,   101,   102,     7,    68,    18,    20,    21,
      22,    23,    41,    44,    52,    53,    54,    55,    68,    89,
      90,    91,    92,    93,    94,    99,   103,   104,   106,   121,
     122,   127,     7,    13,    45,    47,    48,    50,    51,   138,
     139,   143,   144,   145,    74,    72,    73,    68,    70,    96,
       7,   112,   102,    72,    71,    71,    21,    22,   105,    71,
      71,    71,    71,    71,    68,    70,    91,    14,    15,    16,
      17,   131,    73,     3,    80,    71,    71,    80,    73,    73,
       7,   138,    73,    80,     3,     7,    29,    43,    61,    62,
      71,    78,    79,   108,   109,   110,   112,   113,   114,   117,
      76,    74,   113,   109,    69,     7,   111,     7,     7,     7,
     113,     7,   110,     7,   114,   114,     7,     7,    71,   131,
     138,   140,   141,   142,     7,   140,    73,    73,   145,    75,
      76,    59,     7,   113,   113,   113,   113,   113,    30,    31,
      32,    33,    34,    35,    36,    37,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,   114,     7,    72,    34,
      97,    98,    99,    76,    49,   128,   112,    72,    72,    73,
      42,   123,    72,    72,    72,    72,   142,    73,    72,     6,
      72,   138,   140,   110,   114,     7,    72,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,    77,    71,    69,   110,    70,
      99,   113,    73,    45,    46,    47,    48,   124,    68,    68,
       7,    68,    69,    80,    80,    73,   140,    73,    72,    77,
      60,    76,     7,   118,   119,   120,    90,    59,    77,    71,
      71,    72,    73,     3,     4,   132,   133,   134,     7,     7,
     142,    72,   140,    75,    71,   114,    74,    72,    73,    70,
     113,    76,   119,   114,    68,     7,    80,    80,    18,    70,
     125,   126,   127,   129,   133,     3,     7,    71,    72,    72,
      72,    72,   110,   113,    77,   113,    68,   120,    19,   107,
      72,   113,    72,    72,    73,    71,    70,   126,    68,    68,
      74,   114,    72,    69,   106,    69,    77,    72,   113,   113,
      38,    39,    40,    54,   114,   135,    72,    90,    90,    68,
      73,    72,    71,    71,    71,    71,    68,    68,    68,    70,
      70,   113,    69,   113,   113,   113,     7,    72,   125,    72,
      72,    73,    73,    70,   113,     7,    19,   130,    72,    73,
      69,   127,   113,   125,    73,    70,   113,    72
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    81,    82,    82,    83,    83,    84,    84,    84,    84,
      84,    85,    85,    86,    87,    87,    88,    88,    89,    89,
      90,    90,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    92,    93,    93,    94,    95,    95,    96,
      96,    97,    97,    98,    98,    99,   100,   100,   101,   101,
     102,   102,   102,   102,   103,   104,   105,   105,   105,   106,
     107,   107,   107,   108,   108,   109,   109,   110,   110,   110,
     111,   111,   111,   112,   112,   112,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   114,   115,   115,   116,   116,   117,   117,   118,   118,
     119,   119,   120,   121,   121,   121,   122,   122,   122,   123,
     123,   124,   124,   124,   124,   124,   125,   125,   126,   126,
     127,   128,   128,   129,   130,   130,   130,   131,   131,   131,
     131,   132,   132,   133,   133,   133,   133,   133,   134,   134,
     135,   135,   135,   135,   136,   136,   137,   137,   137,   137,
     137,   138,   139,   140,   140,   141,   141,   142,   142,   143,
     144,   144,   145,   145,   145,   146,   146,   146,   146
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     2,
       2,     2,     2,     3,     4,     3,     4,     4,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     7,     5,     5,    12,     1,     2,     2,
       1,     0,     1,     1,     2,     8,     0,     1,     1,     2,
       1,     1,     1,     1,    11,     5,     0,     1,     1,     8,
       4,     2,     0,     1,     2,     1,     1,     1,     3,     6,
       1,     4,     7,     1,     4,     7,     1,     2,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       7,     1,     0,     1,     1,     3,     1,     3,     0,     1,
       1,     3,     3,     5,     7,     8,     0,     1,     1,     0,
       1,     0,     1,     1,     4,     1,     1,     2,     1,     1,
      10,     0,     1,     8,     4,     2,     0,     1,     1,     1,
       1,     1,     2,     3,     3,     5,     5,     5,     2,     2,
       4,     4,     6,    10,     1,     1,     6,     8,     7,     9,
       6,     3,     2,     1,     5,     1,     1,     1,     2,     2,
       1,     3,     1,     1,     2,     6,     6,     9,     9
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
#line 336 "parser.y" /* yacc.c:1652  */
    { append_list(&all_definitions,(yyvsp[0].nodes)); }
#line 1865 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 4:
#line 341 "parser.y" /* yacc.c:1652  */
    { (yyval.nodes) = create_list((yyvsp[0].node)); }
#line 1871 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 342 "parser.y" /* yacc.c:1652  */
    { (yyval.nodes) = append_list((yyvsp[-1].nodes),(yyvsp[0].node)); }
#line 1877 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 347 "parser.y" /* yacc.c:1652  */
    { (yyval.node) = NULL; }
#line 1883 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 348 "parser.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].ev_def); }
#line 1889 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 8:
#line 349 "parser.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].str_def); }
#line 1895 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 350 "parser.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[-1].sig); }
#line 1901 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 351 "parser.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[-1].sig_info); }
#line 1907 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 360 "parser.y" /* yacc.c:1652  */
    { (yyval.ev_def) = (yyvsp[0].ev_def); }
#line 1913 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 361 "parser.y" /* yacc.c:1652  */
    { (yyvsp[0].ev_def)->_opts |= EVENT_OPTS_STICKY; (yyval.ev_def) = (yyvsp[0].ev_def); }
#line 1919 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 365 "parser.y" /* yacc.c:1652  */
    { event_definition *event = new event_definition(CURR_FILE_LINE,(yyvsp[-1].str_decl_list)); check_valid_opts((yyvsp[-1].str_decl_list),STRUCT_DECL_OPTS_REVISIT | EVENT_OPTS_IGNORE_UNKNOWN_SUBEVENT); (yyval.ev_def) = event; }
#line 1925 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 369 "parser.y" /* yacc.c:1652  */
    { (yyval.str_def) = new struct_definition(CURR_FILE_LINE,(yyvsp[-3].str_header),(yyvsp[-1].str_body)); }
#line 1931 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 370 "parser.y" /* yacc.c:1652  */
    { (yyval.str_def) = new struct_definition(CURR_FILE_LINE,(yyvsp[-1].str_header),NULL,STRUCT_DEF_OPTS_EXTERNAL); }
#line 1937 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 374 "parser.y" /* yacc.c:1652  */
    { (yyval.str_header) = new struct_header_subevent((yyvsp[-1].strValue),new std::vector<param*>); }
#line 1943 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 375 "parser.y" /* yacc.c:1652  */
    { (yyval.str_header) = new struct_header_named((yyvsp[-3].strValue),(yyvsp[-1].par_list)); }
#line 1949 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 379 "parser.y" /* yacc.c:1652  */
    { null_list(&(yyval.str_body)); }
#line 1955 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 380 "parser.y" /* yacc.c:1652  */
    { (yyval.str_body) = (yyvsp[0].str_body); }
#line 1961 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 384 "parser.y" /* yacc.c:1652  */
    { (yyval.str_body) = create_list((yyvsp[0].str_item)); }
#line 1967 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 385 "parser.y" /* yacc.c:1652  */
    { (yyval.str_body) = append_list((yyvsp[-1].str_body),(yyvsp[0].str_item)); }
#line 1973 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 389 "parser.y" /* yacc.c:1652  */
    { (yyval.str_item) = NULL; }
#line 1979 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 390 "parser.y" /* yacc.c:1652  */
    { (yyval.str_item) = (yyvsp[0].str_item); }
#line 1985 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 391 "parser.y" /* yacc.c:1652  */
    { (yyval.str_item) = (yyvsp[0].str_list); }
#line 1991 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 392 "parser.y" /* yacc.c:1652  */
    { (yyval.str_item) = (yyvsp[0].str_select); }
#line 1997 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 394 "parser.y" /* yacc.c:1652  */
    { (yyval.str_item) = (yyvsp[0].str_cond); }
#line 2003 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 395 "parser.y" /* yacc.c:1652  */
    { (yyval.str_item) = (yyvsp[0].str_decl); (yyvsp[0].str_decl)->check_valid_opts(STRUCT_DECL_OPTS_MULTI | STRUCT_DECL_OPTS_EXTERNAL); }
#line 2009 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 396 "parser.y" /* yacc.c:1652  */
    { (yyval.str_item) = (yyvsp[0].str_member); }
#line 2015 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 397 "parser.y" /* yacc.c:1652  */
    { (yyval.str_item) = (yyvsp[0].str_mark); }
#line 2021 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 398 "parser.y" /* yacc.c:1652  */
    { (yyval.str_item) = (yyvsp[0].str_check); }
#line 2027 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 399 "parser.y" /* yacc.c:1652  */
    { struct_encode *encode = new struct_encode(CURR_FILE_LINE,(yyvsp[0].encode)); (yyval.str_item) = encode; }
#line 2033 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 32:
#line 400 "parser.y" /* yacc.c:1652  */
    { struct_match_end *end = new struct_match_end(CURR_FILE_LINE); (yyval.str_item) = end; }
#line 2039 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 404 "parser.y" /* yacc.c:1652  */
    { struct_member *member = new struct_member(CURR_FILE_LINE,(yyvsp[-4].strValue),(yyvsp[-3].var_n),(yyvsp[-2].sm_flag)); delete (yyvsp[-2].sm_flag); (yyval.str_member) = member; }
#line 2045 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 408 "parser.y" /* yacc.c:1652  */
    { struct_mark *mark = new struct_mark(CURR_FILE_LINE,(yyvsp[-2].strValue),STRUCT_MARK_FLAGS_GLOBAL); (yyval.str_mark) = mark; }
#line 2051 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 409 "parser.y" /* yacc.c:1652  */
    { struct_mark *mark = new struct_mark(CURR_FILE_LINE,(yyvsp[-2].strValue),0); (yyval.str_mark) = mark; }
#line 2057 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 413 "parser.y" /* yacc.c:1652  */
    { struct_check_count *check = new struct_check_count(CURR_FILE_LINE,(yyvsp[-9].var),(yyvsp[-7].strValue),(yyvsp[-5].strValue),(yyvsp[-3].var),(yyvsp[-1].var)); (yyval.str_check) = check; }
#line 2063 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 417 "parser.y" /* yacc.c:1652  */
    { (yyval.str_decl_list) = create_list((yyvsp[0].str_decl)); }
#line 2069 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 418 "parser.y" /* yacc.c:1652  */
    { (yyval.str_decl_list) = append_list((yyvsp[-1].str_decl_list),(yyvsp[0].str_decl)); }
#line 2075 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 422 "parser.y" /* yacc.c:1652  */
    { struct_decl *decl = new struct_decl(CURR_FILE_LINE,CURR_ITEM_COUNT,NULL,NULL,NULL,EVENT_OPTS_IGNORE_UNKNOWN_SUBEVENT); (yyval.str_decl) = decl; }
#line 2081 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 423 "parser.y" /* yacc.c:1652  */
    { (yyval.str_decl) = (yyvsp[0].str_decl); }
#line 2087 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 427 "parser.y" /* yacc.c:1652  */
    { null_list(&(yyval.str_decl_list)); }
#line 2093 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 428 "parser.y" /* yacc.c:1652  */
    { (yyval.str_decl_list) = (yyvsp[0].str_decl_list); }
#line 2099 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 432 "parser.y" /* yacc.c:1652  */
    { (yyval.str_decl_list) = create_list((yyvsp[0].str_decl)); }
#line 2105 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 433 "parser.y" /* yacc.c:1652  */
    { (yyval.str_decl_list) = append_list((yyvsp[-1].str_decl_list),(yyvsp[0].str_decl)); }
#line 2111 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 437 "parser.y" /* yacc.c:1652  */
    { struct_decl *decl = new struct_decl(CURR_FILE_LINE,CURR_ITEM_COUNT,(yyvsp[-6].var_n),(yyvsp[-4].strValue),(yyvsp[-2].arg_list),(yyvsp[-7].iValue)); (yyval.str_decl) = decl; }
#line 2117 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 441 "parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = 0; }
#line 2123 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 442 "parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = (yyvsp[0].iValue); }
#line 2129 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 446 "parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = (yyvsp[0].iValue); }
#line 2135 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 447 "parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = (yyvsp[-1].iValue) | (yyvsp[0].iValue); }
#line 2141 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 451 "parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = STRUCT_DECL_OPTS_MULTI; }
#line 2147 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 452 "parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = STRUCT_DECL_OPTS_EXTERNAL; }
#line 2153 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 453 "parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = STRUCT_DECL_OPTS_REVISIT; }
#line 2159 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 454 "parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = STRUCT_DECL_OPTS_NO_REVISIT; }
#line 2165 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 458 "parser.y" /* yacc.c:1652  */
    { struct_list *list = new struct_list(CURR_FILE_LINE,(yyvsp[-6].var_n),(yyvsp[-8].var),(yyvsp[-4].var),(yyvsp[-1].str_body)); (yyval.str_list) = list; }
#line 2171 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 462 "parser.y" /* yacc.c:1652  */
    { struct_select *select = new struct_select(CURR_FILE_LINE,(yyvsp[-1].str_decl_list),(yyvsp[-3].iValue)); check_valid_opts((yyvsp[-1].str_decl_list),STRUCT_DECL_OPTS_MULTI | STRUCT_DECL_OPTS_EXTERNAL | STRUCT_DECL_OPTS_NO_REVISIT); (yyval.str_select) = select; }
#line 2177 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 467 "parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = 0; }
#line 2183 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 57:
#line 468 "parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = SS_FLAGS_SEVERAL; }
#line 2189 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 469 "parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = SS_FLAGS_OPTIONAL; }
#line 2195 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 478 "parser.y" /* yacc.c:1652  */
    { struct_cond *cond = new struct_cond(CURR_FILE_LINE,(yyvsp[-5].var),(yyvsp[-2].str_body),(yyvsp[0].str_body)); (yyval.str_cond) = cond; }
#line 2201 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 482 "parser.y" /* yacc.c:1652  */
    { (yyval.str_body) = (yyvsp[-1].str_body); }
#line 2207 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 483 "parser.y" /* yacc.c:1652  */
    { (yyval.str_body) = create_list((struct_item*) (yyvsp[0].str_cond)); }
#line 2213 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 484 "parser.y" /* yacc.c:1652  */
    { (yyval.str_body) = NULL; }
#line 2219 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 490 "parser.y" /* yacc.c:1652  */
    { (yyval.var) = (yyvsp[0].var); }
#line 2225 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 491 "parser.y" /* yacc.c:1652  */
    { variable* var = new var_external(CURR_FILE_LINE,(yyvsp[0].strValue)); (yyval.var) = var; }
#line 2231 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 495 "parser.y" /* yacc.c:1652  */
    { (yyval.var) = (yyvsp[0].var_n); }
#line 2237 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 496 "parser.y" /* yacc.c:1652  */
    { variable* var = new var_const(CURR_FILE_LINE,(yyvsp[0].iValue)); (yyval.var) = var; }
#line 2243 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 67:
#line 500 "parser.y" /* yacc.c:1652  */
    { (yyval.var_n) = (yyvsp[0].var_n); }
#line 2249 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 501 "parser.y" /* yacc.c:1652  */
    { var_name* var = new var_sub(CURR_FILE_LINE,(yyvsp[-2].strValue),(yyvsp[0].var_n)); (yyval.var_n) = var; }
#line 2255 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 502 "parser.y" /* yacc.c:1652  */
    { CHECK_INDEX((yyvsp[-3].iValue),0x1000000); var_name* var = new var_sub(CURR_FILE_LINE,(yyvsp[-5].strValue),(yyvsp[0].var_n),(yyvsp[-3].iValue)); (yyval.var_n) = var; }
#line 2261 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 506 "parser.y" /* yacc.c:1652  */
    { var_name* var = new var_name(CURR_FILE_LINE,(yyvsp[0].strValue)); (yyval.var_n) = var; }
#line 2267 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 71:
#line 507 "parser.y" /* yacc.c:1652  */
    { var_indexed* var = new var_indexed(CURR_FILE_LINE,(yyvsp[-3].strValue),(yyvsp[-1].var)); (yyval.var_n) = var; }
#line 2273 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 72:
#line 508 "parser.y" /* yacc.c:1652  */
    { var_indexed* var = new var_indexed(CURR_FILE_LINE,(yyvsp[-6].strValue),(yyvsp[-1].var),(yyvsp[-4].var)); (yyval.var_n) = var; }
#line 2279 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 512 "parser.y" /* yacc.c:1652  */
    { var_name* var = new var_name(CURR_FILE_LINE,(yyvsp[0].strValue)); (yyval.var_n) = var; }
#line 2285 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 513 "parser.y" /* yacc.c:1652  */
    { CHECK_INDEX((yyvsp[-1].iValue),0x1000000);
                                       var_index* var = new var_index(CURR_FILE_LINE,(yyvsp[-3].strValue),(yyvsp[-1].iValue)); (yyval.var_n) = var;
                                     }
#line 2293 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 75:
#line 516 "parser.y" /* yacc.c:1652  */
    { CHECK_INDEX((yyvsp[-1].iValue),0x1000000);
	                               CHECK_INDEX((yyvsp[-4].iValue),0x1000);
                                       var_index* var = new var_index(CURR_FILE_LINE,(yyvsp[-6].strValue),(yyvsp[-1].iValue),(yyvsp[-4].iValue)); (yyval.var_n) = var;
                                     }
#line 2302 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 76:
#line 523 "parser.y" /* yacc.c:1652  */
    { (yyval.var) = (yyvsp[0].var); }
#line 2308 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 77:
#line 524 "parser.y" /* yacc.c:1652  */
    { var_expr* var = new var_expr(CURR_FILE_LINE,NULL,(yyvsp[0].var),VAR_OP_NEG); (yyval.var) = var; }
#line 2314 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 78:
#line 525 "parser.y" /* yacc.c:1652  */
    { (yyval.var) = (yyvsp[0].var); }
#line 2320 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 79:
#line 526 "parser.y" /* yacc.c:1652  */
    { var_expr* var = new var_expr(CURR_FILE_LINE,NULL,(yyvsp[0].var),VAR_OP_NOT); (yyval.var) = var; }
#line 2326 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 80:
#line 527 "parser.y" /* yacc.c:1652  */
    { var_expr* var = new var_expr(CURR_FILE_LINE,NULL,(yyvsp[0].var),VAR_OP_LNOT); (yyval.var) = var; }
#line 2332 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 81:
#line 528 "parser.y" /* yacc.c:1652  */
    { (yyval.var) = (yyvsp[-1].var); }
#line 2338 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 82:
#line 529 "parser.y" /* yacc.c:1652  */
    { var_expr* var = new var_expr(CURR_FILE_LINE,(yyvsp[-2].var),(yyvsp[0].var),VAR_OP_LOR ); (yyval.var) = var; }
#line 2344 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 83:
#line 530 "parser.y" /* yacc.c:1652  */
    { var_expr* var = new var_expr(CURR_FILE_LINE,(yyvsp[-2].var),(yyvsp[0].var),VAR_OP_LAND); (yyval.var) = var; }
#line 2350 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 84:
#line 531 "parser.y" /* yacc.c:1652  */
    { var_expr* var = new var_expr(CURR_FILE_LINE,(yyvsp[-2].var),(yyvsp[0].var),VAR_OP_ADD); (yyval.var) = var; }
#line 2356 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 85:
#line 532 "parser.y" /* yacc.c:1652  */
    { var_expr* var = new var_expr(CURR_FILE_LINE,(yyvsp[-2].var),(yyvsp[0].var),VAR_OP_SUB); (yyval.var) = var; }
#line 2362 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 86:
#line 533 "parser.y" /* yacc.c:1652  */
    { var_expr* var = new var_expr(CURR_FILE_LINE,(yyvsp[-2].var),(yyvsp[0].var),VAR_OP_MUL); (yyval.var) = var; }
#line 2368 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 87:
#line 534 "parser.y" /* yacc.c:1652  */
    { var_expr* var = new var_expr(CURR_FILE_LINE,(yyvsp[-2].var),(yyvsp[0].var),VAR_OP_DIV); (yyval.var) = var; }
#line 2374 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 88:
#line 535 "parser.y" /* yacc.c:1652  */
    { var_expr* var = new var_expr(CURR_FILE_LINE,(yyvsp[-2].var),(yyvsp[0].var),VAR_OP_REM); (yyval.var) = var; }
#line 2380 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 89:
#line 536 "parser.y" /* yacc.c:1652  */
    { var_expr* var = new var_expr(CURR_FILE_LINE,(yyvsp[-2].var),(yyvsp[0].var),VAR_OP_AND); (yyval.var) = var; }
#line 2386 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 90:
#line 537 "parser.y" /* yacc.c:1652  */
    { var_expr* var = new var_expr(CURR_FILE_LINE,(yyvsp[-2].var),(yyvsp[0].var),VAR_OP_OR ); (yyval.var) = var; }
#line 2392 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 91:
#line 538 "parser.y" /* yacc.c:1652  */
    { var_expr* var = new var_expr(CURR_FILE_LINE,(yyvsp[-2].var),(yyvsp[0].var),VAR_OP_XOR); (yyval.var) = var; }
#line 2398 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 92:
#line 539 "parser.y" /* yacc.c:1652  */
    { var_expr* var = new var_expr(CURR_FILE_LINE,(yyvsp[-2].var),(yyvsp[0].var),VAR_OP_SHR); (yyval.var) = var; }
#line 2404 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 93:
#line 540 "parser.y" /* yacc.c:1652  */
    { var_expr* var = new var_expr(CURR_FILE_LINE,(yyvsp[-2].var),(yyvsp[0].var),VAR_OP_SHL); (yyval.var) = var; }
#line 2410 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 94:
#line 541 "parser.y" /* yacc.c:1652  */
    { var_expr* var = new var_expr(CURR_FILE_LINE,(yyvsp[-2].var),(yyvsp[0].var),VAR_OP_LS); (yyval.var) = var; }
#line 2416 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 95:
#line 542 "parser.y" /* yacc.c:1652  */
    { var_expr* var = new var_expr(CURR_FILE_LINE,(yyvsp[-2].var),(yyvsp[0].var),VAR_OP_GR); (yyval.var) = var; }
#line 2422 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 96:
#line 543 "parser.y" /* yacc.c:1652  */
    { var_expr* var = new var_expr(CURR_FILE_LINE,(yyvsp[-2].var),(yyvsp[0].var),VAR_OP_LE); (yyval.var) = var; }
#line 2428 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 97:
#line 544 "parser.y" /* yacc.c:1652  */
    { var_expr* var = new var_expr(CURR_FILE_LINE,(yyvsp[-2].var),(yyvsp[0].var),VAR_OP_GE); (yyval.var) = var; }
#line 2434 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 98:
#line 545 "parser.y" /* yacc.c:1652  */
    { var_expr* var = new var_expr(CURR_FILE_LINE,(yyvsp[-2].var),(yyvsp[0].var),VAR_OP_EQ); (yyval.var) = var; }
#line 2440 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 99:
#line 546 "parser.y" /* yacc.c:1652  */
    { var_expr* var = new var_expr(CURR_FILE_LINE,(yyvsp[-2].var),(yyvsp[0].var),VAR_OP_NEQ); (yyval.var) = var; }
#line 2446 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 100:
#line 547 "parser.y" /* yacc.c:1652  */
    { var_cast* var = new var_cast(CURR_FILE_LINE,(yyvsp[-4].strValue),(yyvsp[-1].var)); (yyval.var) = var; }
#line 2452 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 101:
#line 551 "parser.y" /* yacc.c:1652  */
    { uint32 result;
	    if (!(yyvsp[0].var)->eval(NULL, &result)) {
	      ERROR_LOC((yyvsp[0].var)->_loc, "Expression does not evaluate to an integer constant.");
	    }
	    (yyval.iValue) = result;
	  }
#line 2463 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 102:
#line 564 "parser.y" /* yacc.c:1652  */
    { null_list(&(yyval.par_list)); }
#line 2469 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 103:
#line 565 "parser.y" /* yacc.c:1652  */
    { (yyval.par_list) = (yyvsp[0].par_list); }
#line 2475 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 104:
#line 569 "parser.y" /* yacc.c:1652  */
    { (yyval.par_list) = create_list((yyvsp[0].par_item)); }
#line 2481 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 105:
#line 570 "parser.y" /* yacc.c:1652  */
    { (yyval.par_list) = append_list((yyvsp[-2].par_list),(yyvsp[0].par_item)); }
#line 2487 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 106:
#line 574 "parser.y" /* yacc.c:1652  */
    { param* par = new param((yyvsp[0].strValue)); (yyval.par_item) = par; }
#line 2493 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 107:
#line 575 "parser.y" /* yacc.c:1652  */
    { param* par = new param((yyvsp[-2].strValue),new const32((yyvsp[0].iValue))); (yyval.par_item) = par; }
#line 2499 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 108:
#line 581 "parser.y" /* yacc.c:1652  */
    { null_list(&(yyval.arg_list)); }
#line 2505 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 109:
#line 582 "parser.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2511 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 110:
#line 586 "parser.y" /* yacc.c:1652  */
    { (yyval.arg_list) = create_list((yyvsp[0].arg_item)); }
#line 2517 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 111:
#line 587 "parser.y" /* yacc.c:1652  */
    { (yyval.arg_list) = append_list((yyvsp[-2].arg_list),(yyvsp[0].arg_item)); }
#line 2523 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 112:
#line 591 "parser.y" /* yacc.c:1652  */
    { argument* arg = new argument((yyvsp[-2].strValue),(yyvsp[0].var)); (yyval.arg_item) = arg; }
#line 2529 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 113:
#line 600 "parser.y" /* yacc.c:1652  */
    { struct_data *item = new struct_data(CURR_FILE_LINE,(yyvsp[-3].iValue),(yyvsp[-2].strValue),(yyvsp[-1].iValue) | (yyvsp[-4].iValue),NULL,NULL); (yyval.str_item) = item; }
#line 2535 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 114:
#line 601 "parser.y" /* yacc.c:1652  */
    { struct_data *item = new struct_data(CURR_FILE_LINE,(yyvsp[-5].iValue),(yyvsp[-4].strValue),(yyvsp[-3].iValue) | (yyvsp[-6].iValue),(yyvsp[-1].bits_list),NULL); (yyval.str_item) = item; }
#line 2541 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 115:
#line 602 "parser.y" /* yacc.c:1652  */
    { struct_data *item = new struct_data(CURR_FILE_LINE,(yyvsp[-6].iValue),(yyvsp[-5].strValue),(yyvsp[-4].iValue) | (yyvsp[-7].iValue),(yyvsp[-2].bits_list),(yyvsp[-1].encode_list)); (yyval.str_item) = item; }
#line 2547 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 116:
#line 606 "parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = 0; }
#line 2553 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 117:
#line 607 "parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = SD_FLAGS_OPTIONAL; }
#line 2559 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 118:
#line 608 "parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = SD_FLAGS_SEVERAL; }
#line 2565 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 119:
#line 612 "parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = 0; }
#line 2571 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 120:
#line 613 "parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = SD_FLAGS_NOENCODE; }
#line 2577 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 121:
#line 617 "parser.y" /* yacc.c:1652  */
    { (yyval.sm_flag) = new sm_flags(0); }
#line 2583 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 122:
#line 618 "parser.y" /* yacc.c:1652  */
    { (yyval.sm_flag) = new sm_flags(SM_FLAGS_ZERO_SUPPRESS); }
#line 2589 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 123:
#line 619 "parser.y" /* yacc.c:1652  */
    { (yyval.sm_flag) = new sm_flags(SM_FLAGS_ZERO_SUPPRESS_LIST); }
#line 2595 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 124:
#line 620 "parser.y" /* yacc.c:1652  */
    { CHECK_ARRAY_SIZE((yyvsp[-1].iValue),0x10000); (yyval.sm_flag) = new sm_flags(SM_FLAGS_ZERO_SUPPRESS_MULTI,(yyvsp[-1].iValue)); }
#line 2601 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 125:
#line 621 "parser.y" /* yacc.c:1652  */
    { (yyval.sm_flag) = new sm_flags(SM_FLAGS_NO_INDEX_LIST); }
#line 2607 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 126:
#line 625 "parser.y" /* yacc.c:1652  */
    { (yyval.encode_list) = create_list((encode_spec_base*) (yyvsp[0].encode_base)); }
#line 2613 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 127:
#line 626 "parser.y" /* yacc.c:1652  */
    { (yyval.encode_list) = append_list((yyvsp[-1].encode_list),(yyvsp[0].encode_base)); }
#line 2619 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 128:
#line 630 "parser.y" /* yacc.c:1652  */
    { (yyval.encode_base) = (yyvsp[0].encode); }
#line 2625 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 129:
#line 631 "parser.y" /* yacc.c:1652  */
    { (yyval.encode_base) = (yyvsp[0].encode_base); }
#line 2631 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 130:
#line 635 "parser.y" /* yacc.c:1652  */
    { encode_spec *encode = new encode_spec(CURR_FILE_LINE,(yyvsp[-7].var_n),(yyvsp[-3].arg_list),(yyvsp[-6].iValue)); (yyval.encode) = encode; }
#line 2637 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 131:
#line 639 "parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = 0; }
#line 2643 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 132:
#line 640 "parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = ES_APPEND_LIST; }
#line 2649 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 133:
#line 644 "parser.y" /* yacc.c:1652  */
    { encode_cond *cond = new encode_cond(CURR_FILE_LINE,(yyvsp[-5].var),(yyvsp[-2].encode_list),(yyvsp[0].encode_list)); (yyval.encode_base) = cond; }
#line 2655 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 134:
#line 648 "parser.y" /* yacc.c:1652  */
    { (yyval.encode_list) = (yyvsp[-1].encode_list); }
#line 2661 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 135:
#line 649 "parser.y" /* yacc.c:1652  */
    { (yyval.encode_list) = create_list((encode_spec_base*) (yyvsp[0].encode)); }
#line 2667 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 136:
#line 650 "parser.y" /* yacc.c:1652  */
    { (yyval.encode_list) = NULL; }
#line 2673 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 137:
#line 654 "parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = 64; }
#line 2679 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 138:
#line 655 "parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = 32; }
#line 2685 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 139:
#line 656 "parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = 16; }
#line 2691 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 140:
#line 657 "parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = 8;  }
#line 2697 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 141:
#line 661 "parser.y" /* yacc.c:1652  */
    { (yyval.bits_list) = create_set((yyvsp[0].bits_item)); }
#line 2703 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 142:
#line 662 "parser.y" /* yacc.c:1652  */
    { if (!insert_set(&(yyval.bits_list),(yyvsp[-1].bits_list),(yyvsp[0].bits_item)) ) ERROR_LOC(CURR_FILE_LINE,"Bits are overlapping.\n"); }
#line 2709 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 143:
#line 666 "parser.y" /* yacc.c:1652  */
    { bits_spec *bits = new bits_spec((yyvsp[-2].iRange),(yyvsp[-1].strValue),NULL); (yyval.bits_item) = bits; }
#line 2715 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 144:
#line 667 "parser.y" /* yacc.c:1652  */
    { bits_spec *bits = new bits_spec((yyvsp[-2].iRange),NULL,new bits_cond_check(CURR_FILE_LINE,new var_const(CURR_FILE_LINE,(yyvsp[-1].iValue)))); (yyval.bits_item) = bits; }
#line 2721 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 145:
#line 668 "parser.y" /* yacc.c:1652  */
    { bits_spec *bits = new bits_spec((yyvsp[-4].iRange),NULL,new bits_cond_check(CURR_FILE_LINE,new var_const(CURR_FILE_LINE,(yyvsp[-2].iValue)))); (yyval.bits_item) = bits; }
#line 2727 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 146:
#line 669 "parser.y" /* yacc.c:1652  */
    { bits_spec *bits = new bits_spec((yyvsp[-4].iRange),(yyvsp[-3].strValue),new bits_cond_check(CURR_FILE_LINE,new var_const(CURR_FILE_LINE,(yyvsp[-1].iValue)))); (yyval.bits_item) = bits; }
#line 2733 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 147:
#line 670 "parser.y" /* yacc.c:1652  */
    { bits_spec *bits = new bits_spec((yyvsp[-4].iRange),(yyvsp[-3].strValue),(yyvsp[-1].bits_cond)); (yyval.bits_item) = bits; }
#line 2739 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 148:
#line 674 "parser.y" /* yacc.c:1652  */
    { (yyval.iRange)._min = (yyvsp[-1].iValue); (yyval.iRange)._max = (yyvsp[-1].iValue); }
#line 2745 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 149:
#line 675 "parser.y" /* yacc.c:1652  */
    { (yyval.iRange) = (yyvsp[-1].iRange); }
#line 2751 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 150:
#line 679 "parser.y" /* yacc.c:1652  */
    { bits_condition *cond = new bits_cond_check(CURR_FILE_LINE,(yyvsp[-1].var)); (yyval.bits_cond) = cond; }
#line 2757 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 151:
#line 680 "parser.y" /* yacc.c:1652  */
    { bits_condition *cond = new bits_cond_match(CURR_FILE_LINE,(yyvsp[-1].var)); (yyval.bits_cond) = cond; }
#line 2763 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 152:
#line 681 "parser.y" /* yacc.c:1652  */
    { bits_condition *cond = new bits_cond_range(CURR_FILE_LINE,(yyvsp[-3].var),(yyvsp[-1].var)); (yyval.bits_cond) = cond; }
#line 2769 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 153:
#line 682 "parser.y" /* yacc.c:1652  */
    { bits_condition *cond = new bits_cond_check_count(CURR_FILE_LINE,(yyvsp[-7].strValue),(yyvsp[-5].strValue),(yyvsp[-3].var),(yyvsp[-1].var)); (yyval.bits_cond) = cond; }
#line 2775 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 154:
#line 688 "parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = 0; }
#line 2781 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 155:
#line 689 "parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = EVENT_OPTS_STICKY; }
#line 2787 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 156:
#line 694 "parser.y" /* yacc.c:1652  */
    { signal_spec* signal =
		new signal_spec(CURR_FILE_LINE,CURR_SIGNAL_COUNT,
				(yyvsp[-5].iValue),
				(yyvsp[-3].sig_id_var)->_name,(yyvsp[-3].sig_id_var)->_ident,(yyvsp[-1].sig_types),0);
	      delete (yyvsp[-3].sig_id_var); (yyval.sig) = signal;
	    }
#line 2798 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 157:
#line 702 "parser.y" /* yacc.c:1652  */
    { signal_spec* signal =
		new signal_spec_range(CURR_FILE_LINE,CURR_SIGNAL_COUNT,
				      (yyvsp[-7].iValue),
				      (yyvsp[-5].sig_id_var)->_name,(yyvsp[-5].sig_id_var)->_ident,
				      (yyvsp[-3].sig_id_var)->_name,(yyvsp[-3].sig_id_var)->_ident,(yyvsp[-1].sig_types),0);
	      delete (yyvsp[-5].sig_id_var); delete (yyvsp[-3].sig_id_var); (yyval.sig) = signal;
	    }
#line 2810 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 158:
#line 711 "parser.y" /* yacc.c:1652  */
    { signal_spec* signal =
		new signal_spec(CURR_FILE_LINE,CURR_SIGNAL_COUNT,
				(yyvsp[-6].iValue),
				(yyvsp[-3].sig_id_var)->_name,(yyvsp[-3].sig_id_var)->_ident,(yyvsp[-1].sig_types),(yyvsp[-4].iValue));
	      delete (yyvsp[-3].sig_id_var); (yyval.sig) = signal;
	    }
#line 2821 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 159:
#line 720 "parser.y" /* yacc.c:1652  */
    { signal_spec* signal =
		new signal_spec_range(CURR_FILE_LINE,CURR_SIGNAL_COUNT,
				      (yyvsp[-8].iValue),
				      (yyvsp[-5].sig_id_var)->_name,(yyvsp[-5].sig_id_var)->_ident,
				      (yyvsp[-3].sig_id_var)->_name,(yyvsp[-3].sig_id_var)->_ident,(yyvsp[-1].sig_types),(yyvsp[-6].iValue));
	      delete (yyvsp[-5].sig_id_var); delete (yyvsp[-3].sig_id_var); (yyval.sig) = signal;
	    }
#line 2833 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 160:
#line 731 "parser.y" /* yacc.c:1652  */
    { signal_spec* signal =
		new signal_spec(CURR_FILE_LINE,CURR_SIGNAL_COUNT,
				(yyvsp[-5].iValue),
				(yyvsp[-3].sig_id_var)->_name,(yyvsp[-3].sig_id_var)->_ident,(yyvsp[-1].sig_types),0);
	      delete (yyvsp[-3].sig_id_var); (yyval.sig) = signal;
	    }
#line 2844 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 161:
#line 741 "parser.y" /* yacc.c:1652  */
    { signal_spec_ident_var* idvar =
		new signal_spec_ident_var((yyvsp[-2].strValue),(yyvsp[0].var_n)); (yyval.sig_id_var) = idvar;
	    }
#line 2852 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 162:
#line 748 "parser.y" /* yacc.c:1652  */
    { signal_spec_ident_var* idvar =
		new signal_spec_ident_var((yyvsp[-1].strValue),NULL); (yyval.sig_id_var) = idvar;
	    }
#line 2860 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 163:
#line 755 "parser.y" /* yacc.c:1652  */
    { (yyval.sig_types) = new signal_spec_types((yyvsp[0].sig_type_unit)); }
#line 2866 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 164:
#line 757 "parser.y" /* yacc.c:1652  */
    { (yyval.sig_types) = new signal_spec_types((yyvsp[-3].sig_type_unit),(yyvsp[-1].sig_type_unit)); }
#line 2872 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 165:
#line 761 "parser.y" /* yacc.c:1652  */
    { (yyval.strValue) = (yyvsp[0].strValue); }
#line 2878 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 166:
#line 762 "parser.y" /* yacc.c:1652  */
    { (yyval.strValue) = data_item_size_to_signal_type((yyvsp[0].iValue)); }
#line 2884 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 167:
#line 766 "parser.y" /* yacc.c:1652  */
    { (yyval.sig_type_unit) = new signal_spec_type_unit((yyvsp[0].strValue)); }
#line 2890 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 168:
#line 767 "parser.y" /* yacc.c:1652  */
    { insert_prefix_units_exp(CURR_FILE_LINE,(yyvsp[0].strValue));
	                        (yyval.sig_type_unit) = new signal_spec_type_unit((yyvsp[-1].strValue),(yyvsp[0].strValue)); }
#line 2897 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 169:
#line 772 "parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = (yyvsp[-1].iValue); }
#line 2903 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 170:
#line 776 "parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = (yyvsp[0].iValue); }
#line 2909 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 171:
#line 777 "parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = (yyvsp[-2].iValue) | (yyvsp[0].iValue); }
#line 2915 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 172:
#line 781 "parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = SIGNAL_TAG_FIRST_EVENT; }
#line 2921 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 173:
#line 782 "parser.y" /* yacc.c:1652  */
    { (yyval.iValue) = SIGNAL_TAG_LAST_EVENT; }
#line 2927 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 174:
#line 783 "parser.y" /* yacc.c:1652  */
    { 
	    if ((yyvsp[0].iValue) == 1)      { (yyval.iValue) = SIGNAL_TAG_TOGGLE_1; }
	    else if ((yyvsp[0].iValue) == 2) { (yyval.iValue) = SIGNAL_TAG_TOGGLE_2; }
	    else {	    
	      ERROR_LOC(CURR_FILE_LINE, "Toggle # must be 1 or 2.");
	    }
	  }
#line 2939 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 175:
#line 794 "parser.y" /* yacc.c:1652  */
    { signal_info* signal =
		new signal_info(CURR_FILE_LINE,CURR_SIGNAL_COUNT,(yyvsp[-5].iValue),
				(yyvsp[-1].strValue),SIGNAL_INFO_ZERO_SUPPRESS); (yyval.sig_info) = signal;
	    }
#line 2948 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 176:
#line 799 "parser.y" /* yacc.c:1652  */
    { signal_info* signal =
		new signal_info(CURR_FILE_LINE,CURR_SIGNAL_COUNT,(yyvsp[-5].iValue),
				(yyvsp[-1].strValue),SIGNAL_INFO_NO_INDEX_LIST); (yyval.sig_info) = signal;
	    }
#line 2957 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 177:
#line 805 "parser.y" /* yacc.c:1652  */
    { signal_info* signal =
		new signal_info(CURR_FILE_LINE,CURR_SIGNAL_COUNT,(yyvsp[-8].iValue),
				add_index_to_identifier((yyvsp[-1].strValue),(yyvsp[-4].iValue)),
				SIGNAL_INFO_NO_INDEX_LIST); (yyval.sig_info) = signal;
	    }
#line 2967 "generated/y.tab.c" /* yacc.c:1652  */
    break;

  case 178:
#line 812 "parser.y" /* yacc.c:1652  */
    { CHECK_ARRAY_SIZE((yyvsp[-4].iValue),0x10000);
	      signal_info* signal =
		new signal_info(CURR_FILE_LINE,CURR_SIGNAL_COUNT,(yyvsp[-8].iValue),
				(yyvsp[-1].strValue),SIGNAL_INFO_ZERO_SUPPRESS_MULTI,(yyvsp[-4].iValue));
	      (yyval.sig_info) = signal;
	    }
#line 2978 "generated/y.tab.c" /* yacc.c:1652  */
    break;


#line 2982 "generated/y.tab.c" /* yacc.c:1652  */
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
#line 859 "parser.y" /* yacc.c:1918  */


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
