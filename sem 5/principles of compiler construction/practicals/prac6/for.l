%{
#include "forloop.tab.h"
%}
num	[0-9]+
id	[a-zA-Z]+
bop	=|<|>|!=|<=|>=|==|&&|"||"|[+-/*]
uop	"++"|"--"
%%
"do"	{return DO;}
"while"	{return WHILE;}
"for"	{return FOR;}
"if"	{return IF;}
"else"	{return ELSE;}
{bop}	{return BOP;}
{uop}	{return UOP;}
{num}	{return NUMBER;}
{id}	{return ID;}
[ \n\t]	; /*reject whitespaces*/
.	{return *yytext;}
%%
int yywrap(){return 1;}