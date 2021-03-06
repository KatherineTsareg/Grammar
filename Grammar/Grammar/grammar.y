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
%token COMMENT			 "comment"
%token MULTILINECOMMENT	 "multiline comment"
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

s : function_list MAIN construction
  | MAIN construction

construction : OPEN statement_list CLOSE
			 | OPEN CLOSE

function_list : function_list function | function

function : FUNCTION FUNCTIONID '(' argument_list ')' construction
		 | FUNCTION FUNCTIONID '(' ')' construction
		 | NEWLINE

fuction_call : FUNCTIONID '(' list_row ')'
 
 
argument_list : argument_list ',' ID | ID

statement_list : statement_list statement | statement

statement : if_statement
		  | while_statement
		  | for_statement
		  | READ '(' data ')' NEWLINE
		  | PRINT '(' data ')' NEWLINE
		  | expression NEWLINE
		  | RETURN '(' data ')' NEWLINE
		  | assignment_expression NEWLINE
		  | init_expression NEWLINE
		  | NEWLINE

		  
/*---------условные выражения-----------*/
if_statement : one_if_statement
			 | one_if_statement elif_statement
			 | one_if_statement one_else_statement
			 | one_if_statement elif_statement one_else_statement

one_if_statement : IF '(' bool_expression ')' construction	 

elif_statement : elif_statement one_elif_statement | one_elif_statement

one_elif_statement : ELIF '(' bool_expression ')' construction

one_else_statement : ELSE construction
/*--------------------------------------*/


/*---------------циклы------------------*/
while_statement : WHILE '(' bool_expression ')' construction
				| DO construction WHILE '(' bool_expression ')' NEWLINE

for_statement : FOR '(' ID '=' numeric_type ',' bool_expression ',' assignment_expression ')' construction
			  | FOR '(' ID ',' bool_expression ',' assignment_expression ')' construction

/*---------------------------------------*/

paren_expr : '(' expression ')'

expression : arithmetic_expression
		   | bool_expression					   
	   
arithmetic_expression : data
					  | arithmetic_expression '+' data
					  | arithmetic_expression '-' data
					  | arithmetic_expression '*' data
					  | arithmetic_expression '/' data
					  | arithmetic_expression '%' data

bool_expression : data
				| bool_expression '>' data 
				| bool_expression '<' data
				| '!' bool_expression 
				| bool_expression GREATEROREQUAL data 
				| bool_expression LESSOREQUAL data 
				| bool_expression EQUAL data 
				| bool_expression NOTEQUAL data 
				| bool_expression AND data
				| bool_expression OR data				


assignment_expression : data '=' data
					  | data PLUSANDASSIGN data
					  | data MINUSANDASSIGN data
					  | data DIVIDEANDASSIGN data
					  | data MULTIPLYANDASSIGN data
					  | data MODULOANDASSIGN data
					  | data INCREMENT
					  | data DECREMENT
					  | CONST ID '=' data
					  

init_expression : list_init_expression
				| string_init_expression

list_init_expression : ID '(' arithmetic_expression ')' of_type

of_type : of_list OF TYPENAME | OF TYPENAME

of_list : OF LIST '(' arithmetic_expression ')'
		| of_list OF LIST '(' arithmetic_expression ')'
					 
string_init_expression : ID '(' arithmetic_expression ')'
					   
/*-----------------массивы------------*/
init_list_row : '<' list_row '>'

list_row : list_row ',' data | data

index : ID multidimensional_index

multidimensional_index : multidimensional_index one_dimensional_index | one_dimensional_index

one_dimensional_index : '[' arithmetic_expression ']'
/*-------------------------------------*/

data : ID | list_type | index | paren_expr | init_list_row | fuction_call

list_type : STRING | atomic_type

atomic_type : numeric_type | CHAR | BOOL

numeric_type : INT | FLOAT


