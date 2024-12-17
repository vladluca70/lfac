%{
#include <stdio.h>
#include "limbaj.tab.h"
%}
%option noyywrap
%%
"int"|"float"|"char"|"string" {yylval.string = strdup(yytext);return TYPE;}
"public"|"private"|"protected" {yylval.string = strdup(yytext);return CLASS_ACCESS_MODIFIERS;}
"void" {yylval.string = strdup(yytext);return VOID;}
"return" {yylval.string = strdup(yytext);return RETURN;}
"true" {yylval.string = strdup(yytext);return _TRUE;}
"false" {yylval.string = strdup(yytext);return _FALSE;}

"if" {yylval.string = strdup(yytext);return IF;}
"while" {yylval.string = strdup(yytext);return WHILE;}
"for" {yylval.string = strdup(yytext);return FOR;}
"else" {yylval.string = strdup(yytext);return ELSE;}

"==" {yylval.string = strdup(yytext);return EQUAL;}
">" {yylval.string = strdup(yytext);return GREATER;}
">=" {yylval.string = strdup(yytext);return GREATER_EQUAL;}
"<" {yylval.string = strdup(yytext);return LESS;}
"<=" {yylval.string = strdup(yytext);return LESS_EQUAL;}
"!=" {yylval.string = strdup(yytext);return NOT_EQUAL;}

"&&" {yylval.string = strdup(yytext);return AND;}
"||" {yylval.string = strdup(yytext);return OR;}

"++" {yylval.string = strdup(yytext);return INCREMENT;}
"--" {yylval.string = strdup(yytext);return DECREMENT;}
"->" {yylval.string = strdup(yytext);return CLASS_CALL;}

"class" {yylval.string = strdup(yytext);return CLASS;}
"empty_class" {yylval.string = strdup(yytext);return EMPTY_CLASS;}
"ctor" {yylval.string = strdup(yytext);return CONSTRUCTOR;}
"begin_progr" {return BGIN;}
"end_progr" {return END;}
[a-zA-Z][a-zA-Z0-9]* {yylval.string = strdup(yytext); return ID;}
":=" {return ASSIGN;}
[0-9]+ {return NR;}
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}

 
