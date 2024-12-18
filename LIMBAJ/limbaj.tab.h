/* A Bison parser, made by GNU Bison 3.8.2.  */

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

#ifndef YY_YY_LIMBAJ_TAB_H_INCLUDED
# define YY_YY_LIMBAJ_TAB_H_INCLUDED
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
    BGIN = 258,                    /* BGIN  */
    END = 259,                     /* END  */
    ASSIGN = 260,                  /* ASSIGN  */
    NR = 261,                      /* NR  */
    ID = 262,                      /* ID  */
    TYPE = 263,                    /* TYPE  */
    CLASS = 264,                   /* CLASS  */
    EMPTY_CLASS = 265,             /* EMPTY_CLASS  */
    IF = 266,                      /* IF  */
    ELSE = 267,                    /* ELSE  */
    WHILE = 268,                   /* WHILE  */
    FOR = 269,                     /* FOR  */
    EQUAL = 270,                   /* EQUAL  */
    LESS = 271,                    /* LESS  */
    LESS_EQUAL = 272,              /* LESS_EQUAL  */
    GREATER = 273,                 /* GREATER  */
    GREATER_EQUAL = 274,           /* GREATER_EQUAL  */
    NOT_EQUAL = 275,               /* NOT_EQUAL  */
    AND = 276,                     /* AND  */
    OR = 277,                      /* OR  */
    INCREMENT = 278,               /* INCREMENT  */
    DECREMENT = 279,               /* DECREMENT  */
    VOID = 280,                    /* VOID  */
    _TRUE = 281,                   /* _TRUE  */
    _FALSE = 282,                  /* _FALSE  */
    RETURN = 283,                  /* RETURN  */
    CLASS_ACCESS_MODIFIERS = 284,  /* CLASS_ACCESS_MODIFIERS  */
    CONSTRUCTOR = 285,             /* CONSTRUCTOR  */
    CLASS_CALL = 286,              /* CLASS_CALL  */
    PRINT = 287,                   /* PRINT  */
    TYPEOF = 288,                  /* TYPEOF  */
    PLUS = 289,                    /* PLUS  */
    MINUS = 290,                   /* MINUS  */
    DIV = 291,                     /* DIV  */
    MULTIPLICATION = 292,          /* MULTIPLICATION  */
    MODULO = 293,                  /* MODULO  */
    DESTRUCTOR = 294               /* DESTRUCTOR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "limbaj.y"

     char* string;

#line 107 "limbaj.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_LIMBAJ_TAB_H_INCLUDED  */
