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
    FORM = 258,                    /* FORM  */
    META = 259,                    /* META  */
    AUTHOR = 260,                  /* AUTHOR  */
    SECTION = 261,                 /* SECTION  */
    FIELD = 262,                   /* FIELD  */
    VALIDATE = 263,                /* VALIDATE  */
    IF = 264,                      /* IF  */
    REQUIRED = 265,                /* REQUIRED  */
    PATTERN = 266,                 /* PATTERN  */
    DEFAULT = 267,                 /* DEFAULT  */
    MIN = 268,                     /* MIN  */
    MAX = 269,                     /* MAX  */
    ROWS = 270,                    /* ROWS  */
    COLS = 271,                    /* COLS  */
    ACCEPT = 272,                  /* ACCEPT  */
    OPTIONS = 273,                 /* OPTIONS  */
    EQUALS = 274,                  /* EQUALS  */
    COLON = 275,                   /* COLON  */
    SEMICOLON = 276,               /* SEMICOLON  */
    LBRACE = 277,                  /* LBRACE  */
    RBRACE = 278,                  /* RBRACE  */
    LBRACKET = 279,                /* LBRACKET  */
    RBRACKET = 280,                /* RBRACKET  */
    COMMA = 281,                   /* COMMA  */
    LT = 282,                      /* LT  */
    GT = 283,                      /* GT  */
    EQ = 284,                      /* EQ  */
    NEQ = 285,                     /* NEQ  */
    LE = 286,                      /* LE  */
    GE = 287,                      /* GE  */
    AND = 288,                     /* AND  */
    OR = 289,                      /* OR  */
    BOOLEAN = 290,                 /* BOOLEAN  */
    NUM = 291,                     /* NUM  */
    STRING = 292,                  /* STRING  */
    IDENTIFIER = 293,              /* IDENTIFIER  */
    TYPE = 294                     /* TYPE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define FORM 258
#define META 259
#define AUTHOR 260
#define SECTION 261
#define FIELD 262
#define VALIDATE 263
#define IF 264
#define REQUIRED 265
#define PATTERN 266
#define DEFAULT 267
#define MIN 268
#define MAX 269
#define ROWS 270
#define COLS 271
#define ACCEPT 272
#define OPTIONS 273
#define EQUALS 274
#define COLON 275
#define SEMICOLON 276
#define LBRACE 277
#define RBRACE 278
#define LBRACKET 279
#define RBRACKET 280
#define COMMA 281
#define LT 282
#define GT 283
#define EQ 284
#define NEQ 285
#define LE 286
#define GE 287
#define AND 288
#define OR 289
#define BOOLEAN 290
#define NUM 291
#define STRING 292
#define IDENTIFIER 293
#define TYPE 294

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 19 "yacc.y"

    char *string;
    int number;
    int boolean;
    FieldType field_type;
    Form *form;
    Section *section;
    Field *field;
    Option *option;

#line 156 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
