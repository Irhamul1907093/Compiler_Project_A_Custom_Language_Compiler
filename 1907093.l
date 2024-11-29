%{
#include <stdio.h>
#include <string.h>
#include "1907093.tab.h" // Include the Bison-generated header file

int Current_Line=1;

FILE *output_file;
void yyerror();
%}

single      ("#")[^\n]*
multiline    ("#*")(.|\n)*("*#")
varia         [a-zA-Z_][a-zA-Z_0-9]{0,14}




logic_xor_oprtr      ("xor")
bits_and_oprtr   ("&")
bits_or_oprtr   ("|")
bitswise_left_oprtr  (">>")
bitswise_right_oprtr  ("<<")



number        [0-9]*[.]?[0-9]+
digit         [0-9]
ICONST      "[0-9]{digit}*"
FCONST      "{digit}*"."{digit}+"
CCONST      (\'cc\')|(\'\\[nftrbv]\')


%%

"Lib.Include{stdio}.h"      {return HEADERR;}

{number}           { 
    yylval.number=atoi(yytext);
    return NUMBER;}
{multiline} { 
    return MULTI_LINE_COMMENT;
}
{single} {
    return SINGLE_LINE_COMMENT;
}

"intezar"          {return INTEZAR ;}
"flot"             {return FLOT ;}
"str"              {return STR;}
"charac"           {return CHARAC;}
"true"|"false"     { return BOOL;}
"long"             {return LONG;}
"if"               { return IF;}
"else"             {return ELSE;}
"elsif"            {return ELSIF;}
"foo"              {return FOO;}
"wheel"            {return WHILE;}
"brk"              {return BRK;}
"continue"           {return CONTINUE;}
"constant"         {return CONSTANT;}
"ret"              {return RET;}
"static"           {return STATIC;}
"try"              {return TRY;}
"catch"            {return CATCH;}
"UDFUNC"           {return FUNCT;}

"("             {return OPEN_BRACKET; }
")"             {return CLOSE_BRACKET; }
"{"             {return OPEN_SECOND_BRACKET; }
"}"             {return CLOSE_SECOND_BRACKET; }
"["             {return OPEN_THIRD_BRACKET; }
"]"             {return CLOSE_THIRD_BRACKET; }
";"             {return SEMI; }
","             {return COMMA; }
">>"            {return INPUT; }
"<<"            {return OUTPUT; }
"="             {return ASSIGNMENT_OPERATOR;}
"&"             {return UMPERSAND;}
"or"            {return LOGIC_OR;}
"and"           {return LOGIC_AND;}
"factorial"        {  return FACTORIAL; }
"isPrime"          {return PRIME;}
"SIN"    {return MATH_SINE;}
"min"      {return MIN ;}
"until"    {return UNTIL;}
"::"       {return COLON;}


{varia}          {
    yylval.string= strdup(yytext);
    return VARIABLE;}


">"|"<"|">="|"<="|"=="       { return COMPARISON_OPERATOR; } 

"++"              {return INCREMENT_OPERATOR; }
"--"              { return DECREMENT_OPERATOR; }
"**"              { return POWER_OPERATOR; }  
"+"               {return ADD_OPRTR; }
"-"               { return MINUS_OPRTR; }
"*"               { return MULTIPLY_OPRTR; }
"/"               { return DIVISION_OPRTR; }
{ICONST}          { return ICONST; }
{FCONST}          { return FCONST; }
{CCONST}          { return CCONST; }


"[func][:][a-zA-Z0-9]+"             {return FUNC;}
"myFunc:FLOOR"                       {return MATH_FLOOR;}
"myFunc:CEIL"                        {return MATH_CEIL;}
"myFunc:ABS"                         {return MATH_ABS;}


"myFunc:COS"                         {return MATH_COSINE;}
"myFunc:TAN"                         {return MATH_TAN;}
"myFunc:POW"                         {return MATH_POW;}

"inpi"                          {return INPINT;}
"inpf"                          {return INPFLOT;}

"\n"          { Current_Line += 1; }
[ \t\r\f]+    /* eat up whitespace */

.        { yyerror("Unrecognized character"); }

%%


int yywrap()
{
    return 1;
}
