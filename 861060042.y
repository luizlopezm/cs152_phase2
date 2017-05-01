/* Assignment: CS 152 Phase I
 * Spring Quarter 2017
 * Luiz Lopez Nunez
 * 861060042
 * Class: CS 152 
 * Section: 21
 */


%{
 #include <stdio.h>
 #include <stdlib.h>
 void yyerror(const char *msg);
 extern int currLine;
 extern int currPos;
 FILE * yyin;
%}

%union{
  double  nval;
  string  idval;
}

%error-verbose
%start program

/* Reserved Word Tokens */
%token FUNCTION BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY
%token END_BODY INTEGER ARRAY OF IF THEN ENDIF ELSE WHILE DO BEGINLOOP
%token ENDLOOP CONTINUE READ WRITE AND OR NOT TRUE FALSE RETURN

/* Arithmetic Operators */
%token SUB ADD MULT DIV MOD

/* Comparision Operators */
%token EQ NEQ LT GT LTE GTE

/* Ident and Num */
%token <nval> NUMBER
%token <idval> IDENT

/* Special Symbols */
%token SEMICOLON COLON COMMA L_PAREN R_PAREN L_SQUARE_BRACKET R_SQUARE_BRACKET ASSIGN

/* Precedence */
%left L_PAREN R_PAREN L_SQUARE_BRACKET R_SQUARE_BRACKET 
%left MULT DIV MOD SUB ADD
%left EQ NEQ LT GT LTE GTE AND OR
%right NOT ASSIGN 



%% 
program: function_start   {printf( "program -> function_start\n"); }
       ;


/* MAIN FUNCTION BLOCK */
function_start: function identifier semicolon beginparams d_loop endparams 
                beginlocals d_loop endlocals 
                beginbody s_loop endbody { printf( "function_start -> function indentifier semicolon beginparams d_loop endparams beginlocals d_loop endlocals beginbody s_loop endbody\n"); }
       ;

d_loop: d_loop declaration semicolon {printf( "d_loop -> d_loop declaration semicolon\n"); }
      | declaration semicolon {printf( "d_loop -> declaration semicolon\n"); }
       ;

s_loop: s_loop statement semicolon {printf( "s_loop -> s_loop statement semicolon\n"); }
      | statement semicolon {printf( "s_loop -> statement semicolon\n"); }
       ;



/* MAIN DECLARATION BLOCK */
declaration: id_loop colon integer {printf( "declaration -> id_loop colon integer\n"); }
           | id_loop colon array l_bracket number r_bracket of integer {printf( "declaration -> id_loop colon array array l_bracket number r_bracket of integer\n"); }
       ;

id_loop: id_loop identifier comma {printf( "id_loop -> id_loop identifier com,a\n"); }
       | identifier {printf( "id_loop -> identifier\n"); }
       ;







/*END of Parse*/
function: FUNCTION {printf( "function -> FUNCTION\n"); }
        ;

identifier: IDENT { printf( "identifier -> IDENT (%s)\n", $1); }
        ;

number: NUMBER { printf( "number -> NUMBER (%d)\n", $1); }
        ;

semicolon: SEMICOLON {printf( "semicolon -> SEMICOLON\n"); }
        ;

colon: COLON {printf( "colon -> COLON\n"); }
        ;

of: OF {printf( "of -> OF\n"); }
        ;

comma: COMMA {printf( "comma -> COMMA\n"); }
        ;        

beginparams: BEGIN_PARAMS {printf( "beginparams -> BEGIN_PARAMS\n"); }
        ;

endparams: END_PARAMS {printf( "endparams -> END_PARAMS\n"); }
        ;

beginlocals: BEGIN_LOCALS {printf( "beginlocals -> BEGIN_LOCALS\n"); }
        ;

endlocals: END_LOCALS {printf( "endlocals -> END_LOCALS\n"); }
        ;

beginbody: BEGIN_BODY {printf( "beginbody -> BEGIN_BODY\n"); }
        ;

endbody: END_BODY {printf( "endbody -> END_BODY\n"); }
        ;

integer:  INTEGER { printf( "integer -> INTEGER\n"); }
        ;

l_bracket: L_SQUARE_BRACKET {printf( "l_bracket -> L_SQUARE_BRACKET\n"); }
        ;

r_bracket: R_SQUARE_BRACKET {printf( "r_bracket -> R_SQUARE_BRACKET\n"); }
        ;

array:  ARRAY { printf( "array -> ARRAY\n"); }
        ;
%%

int main(int argc, char ** argv)
{
   if(argc >= 2)
   {
      yyin = fopen(argv[1], "r");
      if(yyin == NULL)
      {
         yyin = stdin;
      }
   }
   else
   {
      yyin = stdin;
   }
   yyparse();
}

void yyerror(const char *msg) {
   printf("** Line %d, position %d: %s\n", currLine, currPos, msg);
}