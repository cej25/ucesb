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
#line 80 "tdcpm_parser.y" /* yacc.c:1921  */

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

#line 122 "generated/y.tab.h" /* yacc.c:1921  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GENERATED_Y_TAB_H_INCLUDED  */
