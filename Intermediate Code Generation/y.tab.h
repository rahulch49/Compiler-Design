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
    INTEGER_LITERAL = 258,         /* INTEGER_LITERAL  */
    FLOAT_LITERAL = 259,           /* FLOAT_LITERAL  */
    CHARACTER_LITERAL = 260,       /* CHARACTER_LITERAL  */
    STRING_LITERAL = 261,          /* STRING_LITERAL  */
    FOR = 262,                     /* FOR  */
    IDENTIFIER = 263,              /* IDENTIFIER  */
    UMINUS = 264,                  /* UMINUS  */
    PUBLIC = 265,                  /* PUBLIC  */
    PRIVATE = 266,                 /* PRIVATE  */
    PROTECTED = 267,               /* PROTECTED  */
    STATIC = 268,                  /* STATIC  */
    VOID = 269,                    /* VOID  */
    CLASS = 270,                   /* CLASS  */
    IMPORT = 271,                  /* IMPORT  */
    WHILE = 272,                   /* WHILE  */
    MAIN = 273,                    /* MAIN  */
    DO = 274,                      /* DO  */
    INT = 275,                     /* INT  */
    FLOAT = 276,                   /* FLOAT  */
    LONG = 277,                    /* LONG  */
    DOUBLE = 278,                  /* DOUBLE  */
    BOOLEAN = 279,                 /* BOOLEAN  */
    CHAR = 280,                    /* CHAR  */
    RETURN = 281,                  /* RETURN  */
    IF = 282,                      /* IF  */
    ELSE = 283,                    /* ELSE  */
    THEN = 284,                    /* THEN  */
    INC_OP = 285,                  /* INC_OP  */
    DEC_OP = 286,                  /* DEC_OP  */
    LE_OP = 287,                   /* LE_OP  */
    GE_OP = 288,                   /* GE_OP  */
    EQ_OP = 289,                   /* EQ_OP  */
    NE_OP = 290,                   /* NE_OP  */
    MUL_ASSIGN = 291,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 292,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 293,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 294,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 295,              /* SUB_ASSIGN  */
    TRUE = 296,                    /* TRUE  */
    FALSE = 297                    /* FALSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INTEGER_LITERAL 258
#define FLOAT_LITERAL 259
#define CHARACTER_LITERAL 260
#define STRING_LITERAL 261
#define FOR 262
#define IDENTIFIER 263
#define UMINUS 264
#define PUBLIC 265
#define PRIVATE 266
#define PROTECTED 267
#define STATIC 268
#define VOID 269
#define CLASS 270
#define IMPORT 271
#define WHILE 272
#define MAIN 273
#define DO 274
#define INT 275
#define FLOAT 276
#define LONG 277
#define DOUBLE 278
#define BOOLEAN 279
#define CHAR 280
#define RETURN 281
#define IF 282
#define ELSE 283
#define THEN 284
#define INC_OP 285
#define DEC_OP 286
#define LE_OP 287
#define GE_OP 288
#define EQ_OP 289
#define NE_OP 290
#define MUL_ASSIGN 291
#define DIV_ASSIGN 292
#define MOD_ASSIGN 293
#define ADD_ASSIGN 294
#define SUB_ASSIGN 295
#define TRUE 296
#define FALSE 297

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 29 "yacc.y"

	char String_value[300];

#line 155 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
