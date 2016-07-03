
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     RETURN = 258,
     LIST = 259,
     OF = 260,
     MAIN = 261,
     FUNCTION = 262,
     READ = 263,
     PRINT = 264,
     DO = 265,
     WHILE = 266,
     FOR = 267,
     ELSE = 268,
     ELIF = 269,
     IF = 270,
     OR = 271,
     AND = 272,
     CONST = 273,
     TYPENAME = 274,
     FLOAT = 275,
     INT = 276,
     CHAR = 277,
     BOOL = 278,
     STRING = 279,
     FUNCTIONID = 280,
     ID = 281,
     LESSOREQUAL = 282,
     GREATEROREQUAL = 283,
     EQUAL = 284,
     NOTEQUAL = 285,
     PLUSANDASSIGN = 286,
     MINUSANDASSIGN = 287,
     MULTIPLYANDASSIGN = 288,
     DIVIDEANDASSIGN = 289,
     MODULOANDASSIGN = 290,
     INCREMENT = 291,
     DECREMENT = 292,
     OPEN = 293,
     CLOSE = 294,
     NEWLINE = 295,
     NOTEQUALS = 296,
     EQUALS = 297
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE checker_lval;


