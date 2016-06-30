/** Файл содержит основанный на Bison LALR-парсер,
    способный проверить принадлежность входных данных грамматике языка.

    Основано на https://github.com/bingmann/flex-bison-cpp-example/blob/master/src/parser.yy
    */

%start s

%{
#include <stdio.h>
#include "globals.h"

/*
    Функция для вывода сообщения об ошибке должна быть определена вручную.
    При этом мы определяем checker_error вместо yyerror,
    так как ранее применили директиву %name-prefix
*/
void checker_error (char const *s) {
    ++g_errorsCount;
    fprintf (stderr, "Error: %s\n", s);
}
%}

/* Директива вызовет генерацию файла с объявлениями токенов.
   Генератор парсеров должен знать целочисленные коды токенов,
   чтобы сгенерировать таблицу разбора. */
%defines

/* Префикс будет добавлен к идентификаторам генерируемых функций */
%name-prefix "checker_"

/* Подробные сообщения об ошибках разбора по грамматике. */
%error-verbose

%token MAIN				 "Main"
%token FUNCTION 		 "Function"
%token READ				 "Read"
%token PRINT			 "Print"
%token DO 				 "Do"
%token WHILE 			 "While"
%token FOR 			 	 "For"
%token ELSE 			 "Else"
%token ELIF 			 "Elif"
%token IF 				 "If"
%token OR 				 "Or"
%token AND 				 "And"
%token CONST 			 "Const"
%token TYPENAME 		 "type name"
%token FLOAT 			 "Float"
%token INT				 "Int"
%token CHAR 			 "Char"
%token STRING 			 "String"
%token FUNCTIONID		 "function id"
%token ID 				 "id"
%token LESSOREQUAL 		 "<="
%token GREATEROREQUAL 	 ">="
%token EQUAL 			 "=="
%token NOTEQUAL 		 "!="
%token PLUSANDASSIGN 	 "+="
%token MINUSANDASSIGN	 "-="
%token MULTIPLYANDASSIGN "*="
%token DIVIDEANDASSIGN   "/="
%token MODULOANDASSIGN 	 "%="
%token INCREMENT 		 "++"
%token DECREMENT 		 "--"
%token NEWLINE 			 "new line"

/* %left, %right, %nonassoc и %precedence управляют разрешением
   приоритета операторов и правил ассоциативности

   Документация Bison: http://www.gnu.org/software/bison/manual/bison.html#Precedence-Decl
*/
%left '=' PLUSANDASSIGN MINUSANDASSIGN MULTIPLYANDASSIGN DIVIDEANDASSIGN MODULOANDASSIGN
%left EQUALS NOTEQUALS '<' '>' LESSOREQUAL GREATEROREQUAL
%left OR
%left AND
%left '+' '-'
%left '*' '/' '%'
%left INCREMENT DECREMENT
%left '!'

%% /* Грамматические правила */

s : function_list MAIN '{' statements '}'

function_list : function_list function | epsilon

function : FUNCTION FUNCTIONID '(' argument_list ')'

argument_list :

epsilon :

statements :