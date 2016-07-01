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

%token RETURN			 "Return"
%token LIST				 "List"
%token OF				 "Of"
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
%token BOOL 			 "bool"
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
%token OPEN				 "{"
%token CLOSE			 "}"
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

s : function_list MAIN OPEN statement_list CLOSE

function_list : function_list function | epsilon

function : FUNCTION FUNCTIONID '(' argument_list ')' OPEN statement_list CLOSE
		 | FUNCTION FUNCTIONID '(' ')' OPEN statement_list CLOSE


		 
argument_list : argument_list ',' argument | argument

argument : type_name ID

epsilon : 

statement_list : statement_list statement | epsilon

statement : if_statement
		  | while_statement
		  | for_statement
		  | READ '(' data ')' NEWLINE
		  | PRINT '(' data ')' NEWLINE
		  | expression NEWLINE
		  | RETURN '(' data ')' NEWLINE
		  | assignment_expression NEWLINE
		  | init_expression NEWLINE

		  
/*---------условные выражения-----------*/
if_statement : one_if_statement
			 | one_if_statement elif_statement
			 | one_if_statement one_else_statement
			 | one_if_statement elif_statement one_else_statement

one_if_statement : IF '(' bool_expression ')' OPEN statement_list CLOSE	 

elif_statement : elif_statement one_elif_statement | one_elif_statement

one_elif_statement : ELIF '(' bool_expression ')' OPEN statement_list CLOSE

one_else_statement : ELSE OPEN statement_list CLOSE
/*--------------------------------------*/


/*---------------циклы------------------*/
while_statement : WHILE '(' bool_expression ')' OPEN statement_list CLOSE
				| DO OPEN statement_list CLOSE WHILE '(' bool_expression ')' NEWLINE

for_statement : FOR '(' ID '=' numeric_type ',' bool_expression ',' arithmetic_expression ')' OPEN statement_list CLOSE
			  | FOR '(' ID ',' bool_expression ',' arithmetic_expression ')' OPEN statement_list CLOSE

/*---------------------------------------*/

expression : '(' expression ')'
		   | arithmetic_expression
		   | bool_expression

init_expression : atomic_init_expression
				| list_init_expression
				| string_init_expression
		 		 
atomic_init_expression : ID '=' atomic_type 

list_init_expression : ID '(' arithmetic_expression ')' of_type
					 | ID '=' '<' list_type '>'

of_type : of_type OF TYPENAME | OF TYPENAME
					 
string_init_expression : ID '(' arithmetic_expression ')'
					   | ID '=' '"''"'
					   | ID '=' '"' str '"'					   

assignment_expression : ID '=' data
					  | ID '=' '<' list_type '>'
					  | ID '=' '"''"'
					  | ID '=' '"' str '"'
					  | ID PLUSANDASSIGN data
					  | ID MINUSANDASSIGN data
					  | ID DIVIDEANDASSIGN data
					  | ID MULTIPLYANDASSIGN data
					  | ID MODULOANDASSIGN data
					  | ID INCREMENT data
					  | ID DECREMENT data
	   
arithmetic_expression : data
					  | arithmetic_expression '+' data
					  | arithmetic_expression '-' data
					  | arithmetic_expression '*' data
					  | arithmetic_expression '/' data
					  | arithmetic_expression '%' data

bool_expression : data
				| bool_expression '>' data 
				| bool_expression '<' data
				| bool_expression '!' data 
				| bool_expression GREATEROREQUAL data 
				| bool_expression LESSOREQUAL data 
				| bool_expression EQUAL data 
				| bool_expression NOTEQUAL data 
				| bool_expression AND data
				| bool_expression OR data				

/*-----------------массивы------------*/
multidimensional_list : multidimensional_list one_dimensional_list | one_dimensional_list

one_dimensional_list : one_dimensional_list list_type | list_type

list_type : str | atomic_type
/*-------------------------------------*/

/*-----------------индексы-------------*/
index : ID multidimensional_index

multidimensional_index : multidimensional_index one_dimensional_index | one_dimensional_index

one_dimensional_index : '[' arithmetic_expression ']'
/*-------------------------------------*/

str : str CHAR | CHAR

atomic_type : numeric_type | CHAR | BOOL

numeric_type : INT | FLOAT

data : ID | list_type | index | multidimensional_list | expression

type_name : TYPENAME | LIST

