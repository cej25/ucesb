/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
#line 90 "parser.y" /* yacc.c:1921  */

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


#line 232 "generated/y.tab.h" /* yacc.c:1921  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GENERATED_Y_TAB_H_INCLUDED  */
