/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "yacc.y"

	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>

	int yylex(void);
	void yyerror(char *);
	
	int scope=0;
	extern int lines;
	
	char buffer[100];
	int ln = 0, tempno = 0;
	int jumpno = 0;

	int assignop = -1;		//assignment operator == += -=
	int unaryop = -1;		//unary operator type
	int exprno = -1;		//FOR loop , 3rd expression
	int m = 0;				//string length for buffer

	int paramno = 0;		//Number of parameters

	char intbuf[20];
	char secIDbuf[20];


#line 98 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 239 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INTEGER_LITERAL = 3,            /* INTEGER_LITERAL  */
  YYSYMBOL_FLOAT_LITERAL = 4,              /* FLOAT_LITERAL  */
  YYSYMBOL_CHARACTER_LITERAL = 5,          /* CHARACTER_LITERAL  */
  YYSYMBOL_STRING_LITERAL = 6,             /* STRING_LITERAL  */
  YYSYMBOL_FOR = 7,                        /* FOR  */
  YYSYMBOL_IDENTIFIER = 8,                 /* IDENTIFIER  */
  YYSYMBOL_9_ = 9,                         /* '+'  */
  YYSYMBOL_10_ = 10,                       /* '-'  */
  YYSYMBOL_11_ = 11,                       /* '/'  */
  YYSYMBOL_12_ = 12,                       /* '*'  */
  YYSYMBOL_13_ = 13,                       /* '%'  */
  YYSYMBOL_14_ = 14,                       /* '='  */
  YYSYMBOL_UMINUS = 15,                    /* UMINUS  */
  YYSYMBOL_PUBLIC = 16,                    /* PUBLIC  */
  YYSYMBOL_PRIVATE = 17,                   /* PRIVATE  */
  YYSYMBOL_PROTECTED = 18,                 /* PROTECTED  */
  YYSYMBOL_STATIC = 19,                    /* STATIC  */
  YYSYMBOL_VOID = 20,                      /* VOID  */
  YYSYMBOL_CLASS = 21,                     /* CLASS  */
  YYSYMBOL_IMPORT = 22,                    /* IMPORT  */
  YYSYMBOL_WHILE = 23,                     /* WHILE  */
  YYSYMBOL_MAIN = 24,                      /* MAIN  */
  YYSYMBOL_DO = 25,                        /* DO  */
  YYSYMBOL_INT = 26,                       /* INT  */
  YYSYMBOL_FLOAT = 27,                     /* FLOAT  */
  YYSYMBOL_LONG = 28,                      /* LONG  */
  YYSYMBOL_DOUBLE = 29,                    /* DOUBLE  */
  YYSYMBOL_BOOLEAN = 30,                   /* BOOLEAN  */
  YYSYMBOL_CHAR = 31,                      /* CHAR  */
  YYSYMBOL_RETURN = 32,                    /* RETURN  */
  YYSYMBOL_IF = 33,                        /* IF  */
  YYSYMBOL_ELSE = 34,                      /* ELSE  */
  YYSYMBOL_THEN = 35,                      /* THEN  */
  YYSYMBOL_INC_OP = 36,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 37,                    /* DEC_OP  */
  YYSYMBOL_LE_OP = 38,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 39,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 40,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 41,                     /* NE_OP  */
  YYSYMBOL_MUL_ASSIGN = 42,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 43,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 44,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 45,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 46,                /* SUB_ASSIGN  */
  YYSYMBOL_TRUE = 47,                      /* TRUE  */
  YYSYMBOL_FALSE = 48,                     /* FALSE  */
  YYSYMBOL_49_ = 49,                       /* ';'  */
  YYSYMBOL_50_ = 50,                       /* '{'  */
  YYSYMBOL_51_ = 51,                       /* '}'  */
  YYSYMBOL_52_ = 52,                       /* '('  */
  YYSYMBOL_53_ = 53,                       /* ')'  */
  YYSYMBOL_54_ = 54,                       /* ','  */
  YYSYMBOL_55_ = 55,                       /* '?'  */
  YYSYMBOL_56_ = 56,                       /* ':'  */
  YYSYMBOL_57_ = 57,                       /* '!'  */
  YYSYMBOL_58_ = 58,                       /* '~'  */
  YYSYMBOL_59_INC_OP_ = 59,                /* "INC_OP"  */
  YYSYMBOL_60_DEC_OP_ = 60,                /* "DEC_OP"  */
  YYSYMBOL_61_ = 61,                       /* '<'  */
  YYSYMBOL_62_ = 62,                       /* '>'  */
  YYSYMBOL_YYACCEPT = 63,                  /* $accept  */
  YYSYMBOL_start_aug = 64,                 /* start_aug  */
  YYSYMBOL_import_stmt = 65,               /* import_stmt  */
  YYSYMBOL_class_def = 66,                 /* class_def  */
  YYSYMBOL_class_head = 67,                /* class_head  */
  YYSYMBOL_declaration = 68,               /* declaration  */
  YYSYMBOL_modifier = 69,                  /* modifier  */
  YYSYMBOL_main_stmt = 70,                 /* main_stmt  */
  YYSYMBOL_compound_statement = 71,        /* compound_statement  */
  YYSYMBOL_block_item_list = 72,           /* block_item_list  */
  YYSYMBOL_block_item = 73,                /* block_item  */
  YYSYMBOL_statement = 74,                 /* statement  */
  YYSYMBOL_conditional_statement = 75,     /* conditional_statement  */
  YYSYMBOL_76_1 = 76,                      /* $@1  */
  YYSYMBOL_77_2 = 77,                      /* $@2  */
  YYSYMBOL_iteration_statement = 78,       /* iteration_statement  */
  YYSYMBOL_79_3 = 79,                      /* $@3  */
  YYSYMBOL_80_4 = 80,                      /* $@4  */
  YYSYMBOL_81_5 = 81,                      /* $@5  */
  YYSYMBOL_82_6 = 82,                      /* $@6  */
  YYSYMBOL_83_7 = 83,                      /* $@7  */
  YYSYMBOL_84_8 = 84,                      /* $@8  */
  YYSYMBOL_expr = 85,                      /* expr  */
  YYSYMBOL_type_specifier = 86,            /* type_specifier  */
  YYSYMBOL_init_declarator_list = 87,      /* init_declarator_list  */
  YYSYMBOL_init_declarator = 88,           /* init_declarator  */
  YYSYMBOL_assignment_expression = 89,     /* assignment_expression  */
  YYSYMBOL_assignment_operator = 90,       /* assignment_operator  */
  YYSYMBOL_conditional_expression = 91,    /* conditional_expression  */
  YYSYMBOL_92_9 = 92,                      /* $@9  */
  YYSYMBOL_93_10 = 93,                     /* $@10  */
  YYSYMBOL_expression_statement = 94,      /* expression_statement  */
  YYSYMBOL_expression = 95,                /* expression  */
  YYSYMBOL_primary_expression = 96,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 97,        /* postfix_expression  */
  YYSYMBOL_unary_expression = 98,          /* unary_expression  */
  YYSYMBOL_unary_operator = 99,            /* unary_operator  */
  YYSYMBOL_equality_expression = 100,      /* equality_expression  */
  YYSYMBOL_relational_expression = 101,    /* relational_expression  */
  YYSYMBOL_additive_expression = 102,      /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 103, /* multiplicative_expression  */
  YYSYMBOL_function_call = 104,            /* function_call  */
  YYSYMBOL_declarator = 105,               /* declarator  */
  YYSYMBOL_parameter_list = 106,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 107,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 108           /* identifier_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   258

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  119
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  202

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   299


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,     2,     2,     2,    13,     2,     2,
      52,    53,    12,     9,    54,    10,     2,    11,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    56,    49,
      61,    14,    62,    55,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,    51,    58,     2,     2,     2,
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
       5,     6,     7,     8,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    59,    60
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    74,    74,    75,    79,    80,    85,    89,    93,    97,
      98,    99,   100,   101,   105,   109,   110,   114,   115,   119,
     120,   121,   122,   126,   127,   128,   129,   133,   133,   133,
     140,   145,   139,   256,   261,   256,   272,   272,   272,   276,
     279,   286,   293,   300,   307,   318,   328,   338,   348,   361,
     374,   387,   403,   404,   405,   406,   407,   411,   412,   416,
     426,   430,   431,   484,   485,   486,   487,   488,   489,   493,
     495,   501,   494,   519,   520,   524,   525,   530,   531,   532,
     533,   534,   539,   540,   548,   560,   561,   594,   595,   596,
     597,   598,   599,   604,   605,   613,   625,   626,   634,   642,
     650,   662,   663,   671,   683,   684,   692,   700,   711,   717,
     725,   731,   735,   736,   741,   742,   747,   748,   753,   757
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INTEGER_LITERAL",
  "FLOAT_LITERAL", "CHARACTER_LITERAL", "STRING_LITERAL", "FOR",
  "IDENTIFIER", "'+'", "'-'", "'/'", "'*'", "'%'", "'='", "UMINUS",
  "PUBLIC", "PRIVATE", "PROTECTED", "STATIC", "VOID", "CLASS", "IMPORT",
  "WHILE", "MAIN", "DO", "INT", "FLOAT", "LONG", "DOUBLE", "BOOLEAN",
  "CHAR", "RETURN", "IF", "ELSE", "THEN", "INC_OP", "DEC_OP", "LE_OP",
  "GE_OP", "EQ_OP", "NE_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "TRUE", "FALSE", "';'", "'{'", "'}'", "'('",
  "')'", "','", "'?'", "':'", "'!'", "'~'", "\"INC_OP\"", "\"DEC_OP\"",
  "'<'", "'>'", "$accept", "start_aug", "import_stmt", "class_def",
  "class_head", "declaration", "modifier", "main_stmt",
  "compound_statement", "block_item_list", "block_item", "statement",
  "conditional_statement", "$@1", "$@2", "iteration_statement", "$@3",
  "$@4", "$@5", "$@6", "$@7", "$@8", "expr", "type_specifier",
  "init_declarator_list", "init_declarator", "assignment_expression",
  "assignment_operator", "conditional_expression", "$@9", "$@10",
  "expression_statement", "expression", "primary_expression",
  "postfix_expression", "unary_expression", "unary_operator",
  "equality_expression", "relational_expression", "additive_expression",
  "multiplicative_expression", "function_call", "declarator",
  "parameter_list", "parameter_declaration", "identifier_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,    43,
      45,    47,    42,    37,    61,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,    59,
     123,   125,    40,    41,    44,    63,    58,    33,   126,   298,
     299,    60,    62
};
#endif

#define YYPACT_NINF (-112)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-114)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     168,  -112,  -112,  -112,  -112,  -112,    -4,    14,   182,  -112,
       0,   -18,  -112,    19,  -112,    38,  -112,  -112,   -16,    26,
    -112,   199,   199,    -1,   199,  -112,    55,    49,    50,    57,
      85,  -112,  -112,  -112,  -112,    64,    67,  -112,  -112,    73,
    -112,  -112,  -112,  -112,  -112,  -112,    15,    77,  -112,  -112,
     154,  -112,  -112,  -112,  -112,  -112,  -112,   123,  -112,  -112,
    -112,  -112,   101,  -112,  -112,  -112,   -32,  -112,    60,   151,
     154,   -25,    43,   130,    58,    92,   102,    15,  -112,     3,
    -112,  -112,  -112,   138,  -112,  -112,   157,     5,  -112,  -112,
     154,  -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,   154,
    -112,   154,   154,   113,   154,   154,   154,   154,   154,   154,
     154,   154,   154,  -112,    94,  -112,   154,   166,   154,  -112,
     154,  -112,   101,  -112,  -112,  -112,    43,    43,   154,   130,
     130,   130,   130,    58,    58,  -112,  -112,  -112,  -112,   153,
     195,   172,  -112,   174,    15,  -112,   179,    25,  -112,  -112,
     178,  -112,  -112,   194,   183,   228,  -112,   184,   154,  -112,
     185,  -112,  -112,    21,     3,  -112,     3,   154,   124,   230,
     231,   187,  -112,   189,  -112,  -112,   235,  -112,  -112,   241,
     242,   243,   244,  -112,  -112,     3,   200,   167,  -112,  -112,
    -112,  -112,  -112,  -112,   245,   247,   248,   249,  -112,  -112,
    -112,  -112
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     9,    11,    12,    10,    13,     0,     0,     0,     3,
       0,     0,     1,     0,     2,     0,     6,     4,     0,     0,
       5,     0,     0,     0,     0,     7,     0,     0,     0,     0,
       0,    14,    78,    79,    80,     0,    77,    87,    88,     0,
      36,    52,    53,    54,    55,    56,     0,     0,    73,    15,
       0,    89,    90,    91,    92,    19,    23,     0,    17,    20,
      26,    25,     0,    75,    61,    24,     0,    82,    85,   104,
       0,    69,    93,    96,   101,     0,     0,     0,    33,     0,
      77,    21,    27,     0,    16,    18,    60,     0,    57,    74,
       0,    83,    84,    63,    66,    67,    68,    64,    65,     0,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,     0,    30,     0,     0,     0,    81,
       0,     8,     0,    76,    62,   104,    94,    95,     0,    99,
     100,    97,    98,   102,   103,   106,   105,   107,   118,   109,
     117,     0,   114,     0,     0,    34,     0,     0,    59,    58,
      71,   116,   111,     0,   108,     0,    31,     0,     0,    28,
       0,   115,   119,    39,     0,    37,     0,     0,     0,     0,
       0,     0,    35,     0,    29,    72,     0,    40,    41,     0,
       0,     0,     0,    42,    43,     0,     0,     0,    46,    47,
      44,    45,    32,    38,     0,     0,     0,     0,    48,    49,
      51,    50
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -112,  -112,  -112,   246,  -112,  -112,    62,  -112,   224,  -112,
     198,   -79,  -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,
    -112,  -112,  -112,  -105,  -112,   134,   -22,  -112,  -111,  -112,
    -112,   -45,   -48,  -112,  -112,   -67,  -112,   139,   128,   103,
     125,  -112,  -112,  -112,   105,  -112
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     7,     8,     9,    16,    55,    10,    23,    56,    57,
      58,    59,    60,   118,   166,    61,   144,   163,   116,   157,
      79,   173,   171,    62,    87,    88,    63,    99,    64,   103,
     160,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,   141,   142,   143
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     117,    81,    83,   100,    11,   145,    32,    33,    34,   140,
      35,    80,    37,    38,    12,   101,   102,    89,    32,    33,
      34,    15,    90,    80,    37,    38,    39,    18,    40,   168,
     -70,    17,   115,    20,   125,   125,    47,   125,   125,   125,
     125,   125,   125,   135,   136,   137,    19,   165,   140,   125,
      25,   125,    48,    30,   121,    50,   175,   169,   170,   122,
      51,    52,    53,    54,    48,   101,   102,    50,   123,   110,
     111,   112,    51,    52,    53,    54,    21,   124,   159,    27,
     150,   104,   105,    22,    24,   172,    26,   174,    32,    33,
      34,   125,    35,    36,    37,    38,    91,    92,   148,   156,
     125,    28,   138,    29,   106,   107,   192,    30,    39,    86,
      40,    41,    42,    43,    44,    45,    77,    46,    47,  -110,
      41,    42,    43,    44,    45,    78,    32,    33,    34,    82,
      35,    36,    37,    38,    48,    30,    49,    50,   176,   108,
     109,   113,    51,    52,    53,    54,    39,   139,    40,    41,
      42,    43,    44,    45,   114,    46,    47,    32,    33,    34,
     177,   178,    80,    37,    38,    93,   179,   180,   128,   181,
     182,   120,    48,    30,    84,    50,   194,   195,   196,   197,
      51,    52,    53,    54,     1,     2,     3,     4,     5,   146,
       6,   119,    90,    94,    95,    96,    97,    98,     1,     2,
       3,     4,     5,   151,    13,  -113,    50,   129,   130,   131,
     132,    51,    52,    53,    54,     1,     2,     3,     4,     5,
      41,    42,    43,    44,    45,   152,   153,   154,   155,   126,
     127,   158,    90,   133,   134,  -112,   162,   164,   183,   184,
     185,   167,   186,   187,   188,   189,   190,   191,   198,   193,
     199,   200,   201,    31,    14,    85,   149,   147,   161
};

static const yytype_uint8 yycheck[] =
{
      79,    46,    50,    70,     8,   116,     3,     4,     5,   114,
       7,     8,     9,    10,     0,    40,    41,    49,     3,     4,
       5,    21,    54,     8,     9,    10,    23,     8,    25,     8,
      55,    49,    77,    49,   101,   102,    33,   104,   105,   106,
     107,   108,   109,   110,   111,   112,     8,   158,   153,   116,
      51,   118,    49,    50,    49,    52,   167,    36,    37,    54,
      57,    58,    59,    60,    49,    40,    41,    52,    90,    11,
      12,    13,    57,    58,    59,    60,    50,    99,    53,    24,
     128,    38,    39,    21,    22,   164,    24,   166,     3,     4,
       5,   158,     7,     8,     9,    10,    36,    37,   120,   144,
     167,    52,     8,    53,    61,    62,   185,    50,    23,     8,
      25,    26,    27,    28,    29,    30,    52,    32,    33,    52,
      26,    27,    28,    29,    30,    52,     3,     4,     5,    52,
       7,     8,     9,    10,    49,    50,    51,    52,    14,     9,
      10,    49,    57,    58,    59,    60,    23,    53,    25,    26,
      27,    28,    29,    30,    52,    32,    33,     3,     4,     5,
      36,    37,     8,     9,    10,    14,    42,    43,    55,    45,
      46,    14,    49,    50,    51,    52,     9,    10,    11,    12,
      57,    58,    59,    60,    16,    17,    18,    19,    20,    23,
      22,    53,    54,    42,    43,    44,    45,    46,    16,    17,
      18,    19,    20,     8,    22,    52,    52,   104,   105,   106,
     107,    57,    58,    59,    60,    16,    17,    18,    19,    20,
      26,    27,    28,    29,    30,    53,    54,    53,    54,   101,
     102,    52,    54,   108,   109,    52,     8,    53,     8,     8,
      53,    56,    53,     8,     3,     3,     3,     3,     3,    49,
       3,     3,     3,    29,     8,    57,   122,   118,   153
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    16,    17,    18,    19,    20,    22,    64,    65,    66,
      69,     8,     0,    22,    66,    21,    67,    49,     8,     8,
      49,    50,    69,    70,    69,    51,    69,    24,    52,    53,
      50,    71,     3,     4,     5,     7,     8,     9,    10,    23,
      25,    26,    27,    28,    29,    30,    32,    33,    49,    51,
      52,    57,    58,    59,    60,    68,    71,    72,    73,    74,
      75,    78,    86,    89,    91,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,    52,    52,    83,
       8,    94,    52,    95,    51,    73,     8,    87,    88,    49,
      54,    36,    37,    14,    42,    43,    44,    45,    46,    90,
      98,    40,    41,    92,    38,    39,    61,    62,     9,    10,
      11,    12,    13,    49,    52,    94,    81,    74,    76,    53,
      14,    49,    54,    89,    89,    98,   101,   101,    55,   102,
     102,   102,   102,   103,   103,    98,    98,    98,     8,    53,
      86,   106,   107,   108,    79,    91,    23,   100,    89,    88,
      95,     8,    53,    54,    53,    54,    94,    82,    52,    53,
      93,   107,     8,    80,    53,    91,    77,    56,     8,    36,
      37,    85,    74,    84,    74,    91,    14,    36,    37,    42,
      43,    45,    46,     8,     8,    53,    53,     8,     3,     3,
       3,     3,    74,    49,     9,    10,    11,    12,     3,     3,
       3,     3
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    63,    64,    64,    65,    65,    66,    67,    68,    69,
      69,    69,    69,    69,    70,    71,    71,    72,    72,    73,
      73,    73,    73,    74,    74,    74,    74,    76,    77,    75,
      79,    80,    78,    81,    82,    78,    83,    84,    78,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    86,    86,    86,    86,    86,    87,    87,    88,
      88,    89,    89,    90,    90,    90,    90,    90,    90,    91,
      92,    93,    91,    94,    94,    95,    95,    96,    96,    96,
      96,    96,    97,    97,    97,    98,    98,    99,    99,    99,
      99,    99,    99,   100,   100,   100,   101,   101,   101,   101,
     101,   102,   102,   102,   103,   103,   103,   103,   104,   104,
     105,   105,   105,   105,   106,   106,   107,   107,   108,   108
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     3,     4,     2,     5,     3,     1,
       1,     1,     1,     1,     7,     2,     3,     1,     2,     1,
       1,     2,     2,     1,     1,     1,     1,     0,     0,     7,
       0,     0,     9,     0,     0,     7,     0,     0,     9,     0,
       2,     2,     2,     2,     3,     3,     3,     3,     5,     5,
       5,     5,     1,     1,     1,     1,     1,     1,     3,     3,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       0,     0,     7,     1,     2,     1,     3,     1,     1,     1,
       1,     3,     1,     2,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     4,     3,
       1,     4,     4,     3,     1,     3,     2,     1,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
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
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
  case 2: /* start_aug: import_stmt class_def  */
#line 74 "yacc.y"
                                                        {	exit(0);	}
#line 1497 "y.tab.c"
    break;

  case 3: /* start_aug: class_def  */
#line 75 "yacc.y"
                                                                {	exit(0);	}
#line 1503 "y.tab.c"
    break;

  case 27: /* $@1: %empty  */
#line 133 "yacc.y"
                        {	printf("\n");	}
#line 1509 "y.tab.c"
    break;

  case 28: /* $@2: %empty  */
#line 133 "yacc.y"
                                                                                {	printf("ifFalse t%d goto JUMP%d\n", --tempno, jumpno);	tempno++;}
#line 1515 "y.tab.c"
    break;

  case 29: /* conditional_statement: IF '(' $@1 equality_expression ')' $@2 statement  */
#line 134 "yacc.y"
                        { 	printf("JUMP%d:\n\n",jumpno++);	}
#line 1521 "y.tab.c"
    break;

  case 30: /* $@3: %empty  */
#line 140 "yacc.y"
                { 
			printf("\nLabel%d:\n", ln);
			ln++;
		}
#line 1530 "y.tab.c"
    break;

  case 31: /* $@4: %empty  */
#line 145 "yacc.y"
                {
			printf("ifFalse t%d goto Label%d\n", tempno, ln);
			tempno++;
		}
#line 1539 "y.tab.c"
    break;

  case 32: /* iteration_statement: FOR '(' expression_statement $@3 expression_statement $@4 expr ')' statement  */
#line 150 "yacc.y"
                {
			switch(exprno){
				case 0:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s + 1\n",buffer, (yyvsp[-2].String_value));
						printf("%s = %s\n", (yyvsp[-2].String_value), buffer);
						break;

				case 1:	
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s - 1\n",buffer, (yyvsp[-2].String_value));
						printf("%s = %s\n", (yyvsp[-2].String_value), buffer);
						break;

				case 2:	
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s + 1\n",buffer, (yyvsp[-2].String_value));
						printf("%s = %s\n", (yyvsp[-2].String_value), buffer);
						break;

				case 3:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s - 1\n",buffer, (yyvsp[-2].String_value));
						printf("%s = %s\n", (yyvsp[-2].String_value), buffer);
						break;

				case 4:						
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s + %s\n",buffer, (yyvsp[-2].String_value), intbuf);
						printf("%s = %s\n", (yyvsp[-2].String_value), buffer);
						break;

				case 5:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s - %s\n",buffer, (yyvsp[-2].String_value), intbuf);
						printf("%s = %s\n", (yyvsp[-2].String_value), buffer);
						break;

				case 6:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s * %s\n",buffer, (yyvsp[-2].String_value), intbuf);
						printf("%s = %s\n", (yyvsp[-2].String_value), buffer);
						break;

				case 7:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s / %s\n",buffer, (yyvsp[-2].String_value), intbuf);
						printf("%s = %s\n", (yyvsp[-2].String_value), buffer);
						break;

				case 8:	
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s + %s\n",buffer, secIDbuf, intbuf);
						printf("%s = %s\n", (yyvsp[-2].String_value), buffer);
						break;

				case 9:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s - %s\n",buffer, secIDbuf, intbuf);
						printf("%s = %s\n", (yyvsp[-2].String_value), buffer);
						break;

				case 10:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s * %s\n",buffer, secIDbuf, intbuf);
						printf("%s = %s\n", (yyvsp[-2].String_value), buffer);
						break;

				case 11:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s / %s\n",buffer, secIDbuf, intbuf);
						printf("%s = %s\n", (yyvsp[-2].String_value), buffer);
						break;
				case 12:
						break;
			}
			exprno = -1;
			printf("goto Label%d\n", --ln);
			ln++;
			printf("Label%d:\n\n", ln);
			ln++;
		}
#line 1650 "y.tab.c"
    break;

  case 33: /* $@5: %empty  */
#line 256 "yacc.y"
                    {
					printf("Label%d:\n", ln);
					ln++;
				}
#line 1659 "y.tab.c"
    break;

  case 34: /* $@6: %empty  */
#line 261 "yacc.y"
                                {
					printf("ifFalse t%d goto Label%d\n", --tempno, ln);
					tempno++;
				}
#line 1668 "y.tab.c"
    break;

  case 35: /* iteration_statement: WHILE '(' $@5 conditional_expression $@6 ')' statement  */
#line 266 "yacc.y"
                                {
					printf("goto Label%d\n", --ln);
					ln++;
					printf("Label%d:\n\n", ln);
					ln++;
				}
#line 1679 "y.tab.c"
    break;

  case 36: /* $@7: %empty  */
#line 272 "yacc.y"
             {printf("Label%d:\n", ln); ln++; }
#line 1685 "y.tab.c"
    break;

  case 37: /* $@8: %empty  */
#line 272 "yacc.y"
                                                                                           {
																						printf("ifFalse t%d goto Label%d\n", --tempno, ln); 	}
#line 1692 "y.tab.c"
    break;

  case 39: /* expr: %empty  */
#line 276 "yacc.y"
                {
			exprno = 12;
		}
#line 1700 "y.tab.c"
    break;

  case 40: /* expr: IDENTIFIER INC_OP  */
#line 280 "yacc.y"
                {  
			exprno = 0;
			m = strlen((yyvsp[-1].String_value));
			strncpy((yyval.String_value), (yyvsp[-1].String_value), m);
			(yyval.String_value)[m] = '\0';
		}
#line 1711 "y.tab.c"
    break;

  case 41: /* expr: IDENTIFIER DEC_OP  */
#line 287 "yacc.y"
                {  
			exprno = 1;
			m = strlen((yyvsp[-1].String_value));
			strncpy((yyval.String_value), (yyvsp[-1].String_value), m);
			(yyval.String_value)[m] = '\0';
		}
#line 1722 "y.tab.c"
    break;

  case 42: /* expr: INC_OP IDENTIFIER  */
#line 294 "yacc.y"
                {  
			exprno = 2;
			m = strlen((yyvsp[0].String_value));
			strncpy((yyval.String_value), (yyvsp[0].String_value), m);
			(yyval.String_value)[m] = '\0';
		}
#line 1733 "y.tab.c"
    break;

  case 43: /* expr: DEC_OP IDENTIFIER  */
#line 301 "yacc.y"
                {  
			exprno = 3; 
			m = strlen((yyvsp[0].String_value));
			strncpy((yyval.String_value), (yyvsp[0].String_value), m);
			(yyval.String_value)[m] = '\0';
		}
#line 1744 "y.tab.c"
    break;

  case 44: /* expr: IDENTIFIER ADD_ASSIGN INTEGER_LITERAL  */
#line 308 "yacc.y"
                {  
			exprno = 4; 
			m = strlen((yyvsp[-2].String_value));
			strncpy((yyval.String_value), (yyvsp[-2].String_value), m);
			(yyval.String_value)[m] = '\0';
			m = strlen((yyvsp[0].String_value));
			strncpy(intbuf, (yyvsp[0].String_value), m);
			intbuf[m] = '\0';

		}
#line 1759 "y.tab.c"
    break;

  case 45: /* expr: IDENTIFIER SUB_ASSIGN INTEGER_LITERAL  */
#line 319 "yacc.y"
                {  
			exprno = 5;
			m = strlen((yyvsp[-2].String_value));
			strncpy((yyval.String_value), (yyvsp[-2].String_value), m);
			(yyval.String_value)[m] = '\0';
			m = strlen((yyvsp[0].String_value));
			strncpy(intbuf, (yyvsp[0].String_value), m);
			intbuf[m] = '\0';
		}
#line 1773 "y.tab.c"
    break;

  case 46: /* expr: IDENTIFIER MUL_ASSIGN INTEGER_LITERAL  */
#line 329 "yacc.y"
                {  
			exprno = 6;
			m = strlen((yyvsp[-2].String_value));
			strncpy((yyval.String_value), (yyvsp[-2].String_value), m);
			(yyval.String_value)[m] = '\0';
			m = strlen((yyvsp[0].String_value));
			strncpy(intbuf, (yyvsp[0].String_value), m);
			intbuf[m] = '\0';
		}
#line 1787 "y.tab.c"
    break;

  case 47: /* expr: IDENTIFIER DIV_ASSIGN INTEGER_LITERAL  */
#line 339 "yacc.y"
                {  
			exprno = 7; 
			m = strlen((yyvsp[-2].String_value));
			strncpy((yyval.String_value), (yyvsp[-2].String_value), m);
			(yyval.String_value)[m] = '\0';
			m = strlen((yyvsp[0].String_value));
			strncpy(intbuf, (yyvsp[0].String_value), m);
			intbuf[m] = '\0';
		}
#line 1801 "y.tab.c"
    break;

  case 48: /* expr: IDENTIFIER '=' IDENTIFIER '+' INTEGER_LITERAL  */
#line 349 "yacc.y"
                {  
			exprno = 8;
			m = strlen((yyvsp[-4].String_value));
			strncpy((yyval.String_value), (yyvsp[-4].String_value), m);
			(yyval.String_value)[m] = '\0';
			m = strlen((yyvsp[0].String_value));
			strncpy(intbuf, (yyvsp[0].String_value), m);
			intbuf[m] = '\0';
			m = strlen((yyvsp[-2].String_value));
			strncpy(secIDbuf, (yyvsp[-2].String_value), m);
			secIDbuf[m] = '\0';
		}
#line 1818 "y.tab.c"
    break;

  case 49: /* expr: IDENTIFIER '=' IDENTIFIER '-' INTEGER_LITERAL  */
#line 362 "yacc.y"
                {  
			exprno = 9;
			m = strlen((yyvsp[-4].String_value));
			strncpy((yyval.String_value), (yyvsp[-4].String_value), m);
			(yyval.String_value)[m] = '\0';
			m = strlen((yyvsp[0].String_value));
			strncpy(intbuf, (yyvsp[0].String_value), m);
			intbuf[m] = '\0';
			m = strlen((yyvsp[-2].String_value));
			strncpy(secIDbuf, (yyvsp[-2].String_value), m);
			secIDbuf[m] = '\0';
		}
#line 1835 "y.tab.c"
    break;

  case 50: /* expr: IDENTIFIER '=' IDENTIFIER '*' INTEGER_LITERAL  */
#line 375 "yacc.y"
                {  
			exprno = 10; 
			m = strlen((yyvsp[-4].String_value));
			strncpy((yyval.String_value), (yyvsp[-4].String_value), m);
			(yyval.String_value)[m] = '\0';
			m = strlen((yyvsp[0].String_value));
			strncpy(intbuf, (yyvsp[0].String_value), m);
			intbuf[m] = '\0';
			m = strlen((yyvsp[-2].String_value));
			strncpy(secIDbuf, (yyvsp[-2].String_value), m);
			secIDbuf[m] = '\0';
		}
#line 1852 "y.tab.c"
    break;

  case 51: /* expr: IDENTIFIER '=' IDENTIFIER '/' INTEGER_LITERAL  */
#line 388 "yacc.y"
                {  
			exprno = 11; 
			m = strlen((yyvsp[-4].String_value));
			strncpy((yyval.String_value), (yyvsp[-4].String_value), m);
			(yyval.String_value)[m] = '\0';
			m = strlen((yyvsp[0].String_value));
			strncpy(intbuf, (yyvsp[0].String_value), m);
			intbuf[m] = '\0';
			m = strlen((yyvsp[-2].String_value));
			strncpy(secIDbuf, (yyvsp[-2].String_value), m);
			secIDbuf[m] = '\0';
		}
#line 1869 "y.tab.c"
    break;

  case 59: /* init_declarator: IDENTIFIER '=' assignment_expression  */
#line 417 "yacc.y"
                {
			if(tempno > 0){
				printf("%s = t%d\n", (yyvsp[-2].String_value), --tempno);
				tempno++;
			}
			else if(tempno == 0){
				printf("%s = %s\n", (yyvsp[-2].String_value), (yyvsp[0].String_value)); 
			}
		}
#line 1883 "y.tab.c"
    break;

  case 61: /* assignment_expression: conditional_expression  */
#line 430 "yacc.y"
                                                {	strcpy((yyval.String_value), (yyvsp[0].String_value)); }
#line 1889 "y.tab.c"
    break;

  case 62: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 432 "yacc.y"
                {
			switch(assignop){
				case 0: 
						printf("%s = %s\n", (yyvsp[-2].String_value), (yyvsp[0].String_value)); 
						break;
						
				case 1: 
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s + %s\n",buffer, (yyvsp[-2].String_value), (yyvsp[0].String_value));
						printf("%s = t%d\n", (yyvsp[-2].String_value), --tempno); 
						tempno++;
						break;
				case 2:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s - %s\n",buffer, (yyvsp[-2].String_value), (yyvsp[0].String_value));
						printf("%s = t%d\n", (yyvsp[-2].String_value), --tempno); 
						tempno++;
						break;
				case 3:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s * %s\n",buffer, (yyvsp[-2].String_value), (yyvsp[0].String_value));
						printf("%s = t%d\n", (yyvsp[-2].String_value), --tempno);
						tempno++;
						break;
				case 4:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s / %s\n",buffer, (yyvsp[-2].String_value), (yyvsp[0].String_value));
						printf("%s = t%d\n", (yyvsp[-2].String_value), --tempno); 
						tempno++;
						break;
				case 5:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s %c %s\n",buffer, (yyvsp[-2].String_value), '%',(yyvsp[0].String_value));
						printf("%s = t%d\n", (yyvsp[-2].String_value), --tempno); 
						tempno++;
						break;
			}
			assignop = -1;
		}
#line 1943 "y.tab.c"
    break;

  case 63: /* assignment_operator: '='  */
#line 484 "yacc.y"
                                { assignop = 0; 	}
#line 1949 "y.tab.c"
    break;

  case 64: /* assignment_operator: ADD_ASSIGN  */
#line 485 "yacc.y"
                        { assignop = 1; 	}
#line 1955 "y.tab.c"
    break;

  case 65: /* assignment_operator: SUB_ASSIGN  */
#line 486 "yacc.y"
                        { assignop = 2; 	}
#line 1961 "y.tab.c"
    break;

  case 66: /* assignment_operator: MUL_ASSIGN  */
#line 487 "yacc.y"
                        { assignop = 3; 	}
#line 1967 "y.tab.c"
    break;

  case 67: /* assignment_operator: DIV_ASSIGN  */
#line 488 "yacc.y"
                        { assignop = 4; 	}
#line 1973 "y.tab.c"
    break;

  case 68: /* assignment_operator: MOD_ASSIGN  */
#line 489 "yacc.y"
                        { assignop = 5; 	}
#line 1979 "y.tab.c"
    break;

  case 69: /* conditional_expression: equality_expression  */
#line 493 "yacc.y"
                                {	strcpy((yyval.String_value), (yyvsp[0].String_value));  }
#line 1985 "y.tab.c"
    break;

  case 70: /* $@9: %empty  */
#line 495 "yacc.y"
                { 
			printf("ifFalse t%d goto L%d\n", --tempno, ln);
			tempno++;		
			ln++;
		}
#line 1995 "y.tab.c"
    break;

  case 71: /* $@10: %empty  */
#line 501 "yacc.y"
                {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			printf("%s = %s\n", buffer, (yyvsp[0].String_value));
			printf("goto Label%d\n", ln);
			printf("Label%d:\n", --ln);
			ln++;
		}
#line 2009 "y.tab.c"
    break;

  case 72: /* conditional_expression: equality_expression $@9 '?' expression $@10 ':' conditional_expression  */
#line 511 "yacc.y"
                {
			printf( "%s = %s\n", buffer, (yyvsp[0].String_value));
			printf("Label%d:\n", ln);
			ln++;
		}
#line 2019 "y.tab.c"
    break;

  case 75: /* expression: assignment_expression  */
#line 524 "yacc.y"
                                        {	strcpy((yyval.String_value), (yyvsp[0].String_value)); }
#line 2025 "y.tab.c"
    break;

  case 77: /* primary_expression: IDENTIFIER  */
#line 530 "yacc.y"
                                                {	strcpy((yyval.String_value), (yyvsp[0].String_value)); 	}
#line 2031 "y.tab.c"
    break;

  case 78: /* primary_expression: INTEGER_LITERAL  */
#line 531 "yacc.y"
                                                {	strcpy((yyval.String_value), (yyvsp[0].String_value)); 	}
#line 2037 "y.tab.c"
    break;

  case 79: /* primary_expression: FLOAT_LITERAL  */
#line 532 "yacc.y"
                                                {	strcpy((yyval.String_value), (yyvsp[0].String_value)); 	}
#line 2043 "y.tab.c"
    break;

  case 80: /* primary_expression: CHARACTER_LITERAL  */
#line 533 "yacc.y"
                                                {	strcpy((yyval.String_value), (yyvsp[0].String_value)); 	}
#line 2049 "y.tab.c"
    break;

  case 81: /* primary_expression: '(' expression ')'  */
#line 534 "yacc.y"
                                        {	strcpy((yyval.String_value), (yyvsp[-1].String_value)); 	}
#line 2055 "y.tab.c"
    break;

  case 82: /* postfix_expression: primary_expression  */
#line 539 "yacc.y"
                                        {	strcpy((yyval.String_value), (yyvsp[0].String_value)); }
#line 2061 "y.tab.c"
    break;

  case 83: /* postfix_expression: postfix_expression INC_OP  */
#line 541 "yacc.y"
                {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			printf("%s = %s + 1\n",buffer, (yyvsp[-1].String_value));
			printf("%s = %s\n", (yyvsp[-1].String_value), buffer);
		}
#line 2073 "y.tab.c"
    break;

  case 84: /* postfix_expression: postfix_expression DEC_OP  */
#line 549 "yacc.y"
                {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			printf("%s = %s - 1\n",buffer, (yyvsp[-1].String_value));
			printf("%s = %s\n", (yyvsp[-1].String_value), buffer);
		}
#line 2085 "y.tab.c"
    break;

  case 85: /* unary_expression: postfix_expression  */
#line 560 "yacc.y"
                                                        {	strcpy((yyval.String_value), (yyvsp[0].String_value)); }
#line 2091 "y.tab.c"
    break;

  case 86: /* unary_expression: unary_operator unary_expression  */
#line 562 "yacc.y"
                {
			switch(unaryop){
				case 1: 
						sprintf(buffer,"t%d",tempno++);	
						m = strlen(buffer);
						buffer[m] = '\0';					
						printf("%s = -%s\n",buffer, (yyvsp[0].String_value));	
						strncpy((yyval.String_value), buffer, m+1);						
						break;

				case 4: 
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s + 1\n",buffer, (yyvsp[0].String_value));
						strncpy((yyval.String_value), buffer, m+1);		//check out
						break;

				case 5:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						printf("%s = %s - 1\n",buffer, (yyvsp[0].String_value));
						strncpy((yyval.String_value), buffer, m+1);		//check out
						break;
			}
			unaryop = -1;
		}
#line 2124 "y.tab.c"
    break;

  case 87: /* unary_operator: '+'  */
#line 594 "yacc.y"
                        {	unaryop = 0; }
#line 2130 "y.tab.c"
    break;

  case 88: /* unary_operator: '-'  */
#line 595 "yacc.y"
                        {	unaryop = 1; }
#line 2136 "y.tab.c"
    break;

  case 89: /* unary_operator: '!'  */
#line 596 "yacc.y"
                        {	unaryop = 2; }
#line 2142 "y.tab.c"
    break;

  case 90: /* unary_operator: '~'  */
#line 597 "yacc.y"
                        {	unaryop = 3; }
#line 2148 "y.tab.c"
    break;

  case 91: /* unary_operator: "INC_OP"  */
#line 598 "yacc.y"
                        {	unaryop = 4; }
#line 2154 "y.tab.c"
    break;

  case 92: /* unary_operator: "DEC_OP"  */
#line 599 "yacc.y"
                        {	unaryop = 5; }
#line 2160 "y.tab.c"
    break;

  case 93: /* equality_expression: relational_expression  */
#line 604 "yacc.y"
                                        {	strcpy((yyval.String_value), (yyvsp[0].String_value)); }
#line 2166 "y.tab.c"
    break;

  case 94: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 606 "yacc.y"
                {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			printf("%s = %s == %s\n", buffer, (yyvsp[-2].String_value), (yyvsp[0].String_value));
			strncpy((yyval.String_value), buffer, m+1);		//check out
		}
#line 2178 "y.tab.c"
    break;

  case 95: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 614 "yacc.y"
                {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			printf("%s = %s != %s\n",buffer, (yyvsp[-2].String_value), (yyvsp[0].String_value));
			strncpy((yyval.String_value), buffer, m+1);		//check out
		}
#line 2190 "y.tab.c"
    break;

  case 96: /* relational_expression: additive_expression  */
#line 625 "yacc.y"
                                        {	strcpy((yyval.String_value), (yyvsp[0].String_value)); }
#line 2196 "y.tab.c"
    break;

  case 97: /* relational_expression: relational_expression '<' additive_expression  */
#line 627 "yacc.y"
                {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			printf("%s = %s < %s\n",buffer, (yyvsp[-2].String_value), (yyvsp[0].String_value));
			strncpy((yyval.String_value), buffer, m+1);		//check out
		}
#line 2208 "y.tab.c"
    break;

  case 98: /* relational_expression: relational_expression '>' additive_expression  */
#line 635 "yacc.y"
                {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			printf("%s = %s > %s\n",buffer, (yyvsp[-2].String_value), (yyvsp[0].String_value));
			strncpy((yyval.String_value), buffer, m+1);		//check out
		}
#line 2220 "y.tab.c"
    break;

  case 99: /* relational_expression: relational_expression LE_OP additive_expression  */
#line 643 "yacc.y"
                {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			printf("%s = %s <= %s\n",buffer, (yyvsp[-2].String_value), (yyvsp[0].String_value));
			strncpy((yyval.String_value), buffer, m+1);		//check out
		}
#line 2232 "y.tab.c"
    break;

  case 100: /* relational_expression: relational_expression GE_OP additive_expression  */
#line 651 "yacc.y"
                {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			printf("%s = %s >= %s\n",buffer, (yyvsp[-2].String_value), (yyvsp[0].String_value));
			strncpy((yyval.String_value), buffer, m+1);		//check out
		}
#line 2244 "y.tab.c"
    break;

  case 101: /* additive_expression: multiplicative_expression  */
#line 662 "yacc.y"
                                                {	strcpy((yyval.String_value), (yyvsp[0].String_value)); }
#line 2250 "y.tab.c"
    break;

  case 102: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 664 "yacc.y"
                {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			printf("%s = %s + %s\n",buffer, (yyvsp[-2].String_value), (yyvsp[0].String_value));
			strncpy((yyval.String_value), buffer, m+1);		//check out
		}
#line 2262 "y.tab.c"
    break;

  case 103: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 672 "yacc.y"
                {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			printf("%s = %s - %s\n",buffer, (yyvsp[-2].String_value), (yyvsp[0].String_value));
			strncpy((yyval.String_value), buffer, m+1);		//check out
		}
#line 2274 "y.tab.c"
    break;

  case 105: /* multiplicative_expression: multiplicative_expression '*' unary_expression  */
#line 685 "yacc.y"
                {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			printf("%s = %s * %s\n",buffer, (yyvsp[-2].String_value), (yyvsp[0].String_value));
			strncpy((yyval.String_value), buffer, m+1);		//check out
		}
#line 2286 "y.tab.c"
    break;

  case 106: /* multiplicative_expression: multiplicative_expression '/' unary_expression  */
#line 693 "yacc.y"
                {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			printf("%s = %s / %s\n",buffer, (yyvsp[-2].String_value), (yyvsp[0].String_value));
			strncpy((yyval.String_value), buffer, m+1);		//check out
		}
#line 2298 "y.tab.c"
    break;

  case 107: /* multiplicative_expression: multiplicative_expression '%' unary_expression  */
#line 701 "yacc.y"
                {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			printf("%s = %s %c %s\n",buffer, (yyvsp[-2].String_value), '%',(yyvsp[0].String_value));
			strncpy((yyval.String_value), buffer, m+1);		//check out
		}
#line 2310 "y.tab.c"
    break;

  case 108: /* function_call: declarator '(' identifier_list ')'  */
#line 712 "yacc.y"
                {
			paramno++;	
			printf("Function_Call(%s, %d)\n", (yyvsp[-3].String_value), paramno);	
			paramno = 0;	
		}
#line 2320 "y.tab.c"
    break;

  case 109: /* function_call: declarator '(' ')'  */
#line 718 "yacc.y"
                {
			printf("Function_Call(%s, 0)\n", (yyvsp[-2].String_value));	
		}
#line 2328 "y.tab.c"
    break;

  case 110: /* declarator: IDENTIFIER  */
#line 726 "yacc.y"
                { 
			m = strlen((yyvsp[0].String_value));
			strncpy((yyval.String_value), (yyvsp[0].String_value), m);	
			(yyval.String_value)[m] = '\0';
		}
#line 2338 "y.tab.c"
    break;

  case 111: /* declarator: declarator '(' parameter_list ')'  */
#line 732 "yacc.y"
                {
			
		}
#line 2346 "y.tab.c"
    break;

  case 118: /* identifier_list: IDENTIFIER  */
#line 754 "yacc.y"
                {
			printf("Parameter %s\n", (yyvsp[0].String_value));
		}
#line 2354 "y.tab.c"
    break;

  case 119: /* identifier_list: identifier_list ',' IDENTIFIER  */
#line 758 "yacc.y"
                {
			printf("Parameter %s\n", (yyvsp[0].String_value));
			paramno++;
		}
#line 2363 "y.tab.c"
    break;


#line 2367 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 763 "yacc.y"


void yyerror(char *s) 
{
	fprintf(stderr, "%s\n", s);
}

int main()
{
	yyparse();
	return 0;
}


