%{

#include "grammar.gen.h"
#define yylex checker_lex

%}

INT ("+"|"-")?(("0"|[1-9][0-9]*))
FLOAT ({INT})"."([0-9]+)
FUNCTIONID [A-Z]+
BOOL true|false
STRING \".*\"
TYPENAME Int|Float|Bool|Char|String
ID [a-zA-Z][a-zA-Z0-9]*
CHAR \'.\'
OPEN ("{"[ \t]*"\n")|("\n"[ \t]*"{"[ \t]*"\n")
CLOSE ("}"[ \t]*"\n")|("\n"[ \t]*"}"[ \t]*"\n")


/* Опция, необходимая для языков с препроцессорами и #include,
   в нашем случае не нужна */
%option noyywrap

%%
"Return" return RETURN;
"List" return LIST;
"Of" return OF;
"Main" return MAIN;
"Function" return FUNCTION;
"Read" return READ;
"Print" return PRINT;
"Do" return DO;
"While" return WHILE;
"For" return FOR;
"Else" return ELSE;
"Elif" return ELIF;
"If" return IF;
"Or" return OR;
"And" return AND;
"Const" return CONST;
{TYPENAME} return TYPENAME;
{FLOAT}	return FLOAT;
{INT}	return INT;
{CHAR}	return CHAR;
{BOOL}	return BOOL;
{STRING} return STRING;
{FUNCTIONID} return FUNCTIONID;
{ID} return ID;
"<=" return LESSOREQUAL;
"<" return '<';
">=" return GREATEROREQUAL;
">" return '>';
"==" return EQUAL;
"!=" return NOTEQUAL;
"!" return '!';
"=" return '=';
"+" return '+';
"-" return '-';
"*" return '*';
"/" return '/';
"%" return '%';
"+=" return PLUSANDASSIGN;
"-=" return MINUSANDASSIGN;
"*=" return MULTIPLYANDASSIGN;
"/=" return DIVIDEANDASSIGN;
"%=" return MODULOANDASSIGN;
"++" return INCREMENT;
"--" return DECREMENT;
{OPEN} return OPEN;
{CLOSE} return CLOSE;
"{" return '{';
"}" return '}';
"(" return '(';
")" return ')';
"[" return '[';
"]" return ']';
"," return ',';
"\'" return '\'';
"\"" return '\"';
"\n" return NEWLINE;
[ \t]+ ;
