/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_NUM = 258,                   /* T_NUM  */
    T_ID = 259,                    /* T_ID  */
    T_PUBLIC = 260,                /* T_PUBLIC  */
    T_PRIVATE = 261,               /* T_PRIVATE  */
    T_PROTECTED = 262,             /* T_PROTECTED  */
    T_STATIC = 263,                /* T_STATIC  */
    T_VOID = 264,                  /* T_VOID  */
    T_CLASS = 265,                 /* T_CLASS  */
    T_IMPORT = 266,                /* T_IMPORT  */
    T_WHILE = 267,                 /* T_WHILE  */
    T_MAIN = 268,                  /* T_MAIN  */
    T_DO = 269,                    /* T_DO  */
    T_FOR = 270,                   /* T_FOR  */
    T_IF = 271,                    /* T_IF  */
    T_INT = 272,                   /* T_INT  */
    T_FLOAT = 273,                 /* T_FLOAT  */
    T_LONG = 274,                  /* T_LONG  */
    T_DOUBLE = 275,                /* T_DOUBLE  */
    T_BOOLEAN = 276,               /* T_BOOLEAN  */
    T_CHAR = 277,                  /* T_CHAR  */
    T_S_PLUSEQ = 278,              /* T_S_PLUSEQ  */
    T_S_MINUSEQ = 279,             /* T_S_MINUSEQ  */
    T_S_MULTEQ = 280,              /* T_S_MULTEQ  */
    T_S_DIVEQ = 281,               /* T_S_DIVEQ  */
    T_TRUE = 282,                  /* T_TRUE  */
    T_FALSE = 283,                 /* T_FALSE  */
    T_S_EQ = 284,                  /* T_S_EQ  */
    T_S_PLUS = 285,                /* T_S_PLUS  */
    T_S_MINUS = 286,               /* T_S_MINUS  */
    T_S_MULT = 287,                /* T_S_MULT  */
    T_S_DIV = 288,                 /* T_S_DIV  */
    T_U_DECR = 289,                /* T_U_DECR  */
    T_U_INCR = 290,                /* T_U_INCR  */
    T_GEQ = 291,                   /* T_GEQ  */
    T_LEQ = 292,                   /* T_LEQ  */
    T_LE = 293,                    /* T_LE  */
    T_GE = 294,                    /* T_GE  */
    T_ASSG = 295,                  /* T_ASSG  */
    T_NE = 296                     /* T_NE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define T_NUM 258
#define T_ID 259
#define T_PUBLIC 260
#define T_PRIVATE 261
#define T_PROTECTED 262
#define T_STATIC 263
#define T_VOID 264
#define T_CLASS 265
#define T_IMPORT 266
#define T_WHILE 267
#define T_MAIN 268
#define T_DO 269
#define T_FOR 270
#define T_IF 271
#define T_INT 272
#define T_FLOAT 273
#define T_LONG 274
#define T_DOUBLE 275
#define T_BOOLEAN 276
#define T_CHAR 277
#define T_S_PLUSEQ 278
#define T_S_MINUSEQ 279
#define T_S_MULTEQ 280
#define T_S_DIVEQ 281
#define T_TRUE 282
#define T_FALSE 283
#define T_S_EQ 284
#define T_S_PLUS 285
#define T_S_MINUS 286
#define T_S_MULT 287
#define T_S_DIV 288
#define T_U_DECR 289
#define T_U_INCR 290
#define T_GEQ 291
#define T_LEQ 292
#define T_LE 293
#define T_GE 294
#define T_ASSG 295
#define T_NE 296

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "yacc.y"

	int integer;
	char *string;

#line 154 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
