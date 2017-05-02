/* Assignment: CS 152 Phase II
 * Spring Quarter 2017
 * Luiz Lopez Nunez
 * 861060042
 * Class: CS 152 
 * Section: 21
 */

%{   
   #include "y.tab.h"
   #include <string.h>
   #include <stdio.h>
   #include <stdlib.h>
   int Line = 1, Pos = 1;
%}
NUM (\.[0-9]+)|([0-9]+(\.[0-9]*)?([eE][+-]?[0-9]+)?)
      /*Borrowed ID Format from online Github Repo*/
ID [A-Za-z](([A-Za-z]|[0-9]|_)*([A-Za-z]|[0-9]))?

%%
   /*Arithmetic Operators*/

"-"   {Pos += yyleng;  return SUB;}
"+"   {Pos += yyleng;  return ADD;}
"*"   {Pos += yyleng;  return MULT;}
"/"   {Pos += yyleng;  return DIV; }
"%"   {Pos += yyleng;  return MOD;}

   /*Comparision Operators*/
"=="  {Pos += yyleng;  return EQ;}
"<>"  {Pos += yyleng;  return NEQ;}
"<"   {Pos += yyleng;  return LT;}
">"   {Pos += yyleng;  return GT;}
"<="  {Pos += yyleng;  return LTE;}
">="  {Pos += yyleng;  return GTE;}

   /*Reserved Words*/
"function"        {Pos += yyleng;     return FUNCTION;}
"beginparams"     {Pos += yyleng;     return BEGIN_PARAMS;}
"endparams"       {Pos += yyleng;     return END_PARAMS;}
"beginlocals"     {Pos += yyleng;     return BEGIN_LOCALS;}
"endlocals"       {Pos += yyleng;     return END_LOCALS;}
"beginbody"       {Pos += yyleng;     return BEGIN_BODY;}
"endbody"         {Pos += yyleng;     return END_BODY;}
"integer"         {Pos += yyleng;     return INTEGER;}
"array"           {Pos += yyleng;     return ARRAY;}
"of"              {Pos += yyleng;     return OF;}
"if"              {Pos += yyleng;     return IF;}
"then"            {Pos += yyleng;     return THEN;}
"endif"           {Pos += yyleng;     return ENDIF;}
"else"            {Pos += yyleng;     return ELSE;}
"while"           {Pos += yyleng;     return WHILE;}
"do"              {Pos += yyleng;     return DO;}
"beginloop"       {Pos += yyleng;     return BEGINLOOP;}
"endloop"         {Pos += yyleng;     return ENDLOOP;}
"continue"        {Pos += yyleng;     return CONTINUE;}
"read"            {Pos += yyleng;     return READ;}
"write"           {Pos += yyleng;     return WRITE;}
"and"             {Pos += yyleng;     return AND;}
"or"              {Pos += yyleng;     return OR;}
"not"             {Pos += yyleng;     return NOT;}
"true"            {Pos += yyleng;     return TRUE;}
"false"           {Pos += yyleng;     return FALSE;}
"return"          {Pos += yyleng;     return RETURN;}

   /*Indentifiers and numbers*/

{NUM}             {Pos += yyleng; yylval.nval = atof(yytext); return NUMBER;}
{NUM}+{ID}        {printf("Error at line %d, column %d: indentifier \"%s\" must begin with a letter\n", Line, Pos, yytext); exit(0);}
"_"+{ID}          {printf("Error at line %d, column %d: indentifier \"%s\" cannot start with an underscore\n", Line, Pos, yytext); exit(0);}
{ID}"_"+          {printf("Error at line %d, column %d: indentifier \"%s\" cannot end with an underscore\n", Line, Pos, yytext); exit(0);}

{ID}              { Pos += yyleng; yylval.idval = strdup(yytext); return IDENT;}

   /*Speacial Cases*/
";"   {Pos += yyleng;   return SEMICOLON;}
":"   {Pos += yyleng;   return COLON;}
","   {Pos += yyleng;   return COMMA;}
"("   {Pos += yyleng;   return L_PAREN;}
")"   {Pos += yyleng;   return R_PAREN;}
"["   {Pos += yyleng;   return L_SQUARE_BRACKET;}
"]"   {Pos += yyleng;   return R_SQUARE_BRACKET;}
":="  {Pos += yyleng;   return ASSIGN;}

"\n"           {Line++; Pos = 1;} /*Clean Up*/
[ \t]+         {Pos += yyleng;}
.              {printf("Error at line %d, column %d: unrecognized symbol \"%s\"\n", Line, Pos, yytext); exit(0);}
##.*            {Pos += yyleng;} /*Clean Up COMMENT*/
%%

