/* Assignment: CS 152 Phase II
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
 int yylex();
 extern int Line;
 extern int Pos;
 FILE * yyin;
%}

%union{
  double  nval;
  char  *idval;
}


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

%error-verbose
%start prog_start

%%
prog_start: prog_start  func_start { printf( "prog_start ->  prog_start func_start\n"); }
          | func_start { printf( "prog_start -> func_start\n"); }
       ;

func_start: function identifier semicolon beginparams dt_loop endparams beginlocals dt_loop endlocals beginbody s_loop endbody { printf( "prog_start -> function indentifier semicolon beginparams dt_loop endparams beginlocals dt_loop endlocals beginbody s_loop endbody\n"); }
       ;

dt_loop: d_loop {printf( "dt_loop -> d_loop\n"); }
       | /* epsilon */ { printf( "dt_loop -> epsilon\n"); }

d_loop: d_loop declaration semicolon {printf( "d_loop -> d_loop declaration semicolon\n"); }
      | declaration semicolon {printf( "d_loop -> declaration semicolon\n"); }
      ;


s_loop: s_loop statement semicolon {printf( "s_loop -> s_loop statement semicolon\n"); }
      | statement semicolon {printf( "s_loop -> statement semicolon\n"); }
       ;



/* MAIN DECLARATION BLOCK */
declaration: id_loop colon integer {printf( "declaration -> id_loop colon integer\n"); }
           | id_loop colon array l_bracket number r_bracket of integer {printf( "declaration -> id_loop colon array l_bracket number r_bracket of integer\n"); }
       ;

id_loop: id_loop identifier comma {printf( "id_loop -> id_loop identifier comma\n"); }
       | identifier {printf( "id_loop -> identifier\n"); }
       ;


/*Boolean Expression*/
bool_expr: relation_and_expr {printf( "bool_expr -> relation_and_expr\n"); }
         | relation_and_expr b_loop {printf( "bool_expr -> relation_and_expr b_loop\n"); }
       ;

b_loop: b_loop or relation_and_expr {printf( "b_loop -> b_loop or relation_and_expr\n"); }
      | or relation_and_expr {printf( "b_loop -> or relation_and_expr\n"); }
       ;

relation_and_expr: relation_expr {printf( "relation_and_expr -> relation_expr\n"); }
                 | relation_expr r_loop {printf( "relation_and_expr -> relation_expr r_loop\n"); }
       ; 

r_loop: r_loop and relation_expr {printf( "r_loop -> r_loop and relation_expr\n"); }
      | and relation_expr {printf( "r_loop -> and relation_expr\n"); }
       ;

relation_expr: r_block {printf( "relation_expr -> r_block\n"); }
             | not r_block {printf( "relation_expr -> not r_block\n"); }
       ;

r_block: expression comp expression {printf( "r_block -> expression comp expression\n"); }  
       | true {printf( "r_block -> true\n"); }
       | false {printf( "r_block -> false\n"); }
       | l_paren bool_expr r_paren {printf( "l_paren bool_expr r_paren\n"); }
       ;


/*Expressions*/
expression: mutiplicative_expr {printf( "expression -> mutiplicative_expr\n"); }
          | mutiplicative_expr e_loop {printf( "expression -> mutiplicative_expr b_loop\n"); }
       ;

e_loop: e_loop add mutiplicative_expr {printf( "e_loop -> e_loop add mutiplicative_expr\n"); }
      | e_loop sub mutiplicative_expr {printf( "e_loop -> e_loop sub mutiplicative_expr\n"); }
      | add mutiplicative_expr {printf( "s_loop -> add mutiplicative_expr\n"); }
      | sub mutiplicative_expr {printf( "s_loop -> add mutiplicative_expr\n"); }
       ;

mutiplicative_expr: term {printf( "mutiplicative_expr -> term\n"); }
                  | term m_loop {printf( "mutiplicative_expr -> term m_loop\n"); }

m_loop: m_loop mult term {printf( "m_loop -> m_loop mult term\n"); }
      | m_loop div term {printf( "m_loop -> m_loop div term\n"); }
      | m_loop mod term {printf( "m_loop -> m_loop mod term\n"); }
      | mult term {printf( "m_loop -> mult term\n"); }
      | div term {printf( "m_loop -> div term\n"); }
      | mod term {printf( "m_loop -> mod term\n"); }
       ;

term: sub term_b1 {printf( "term -> sub term_b1\n"); }
    | term_b1 {printf( "term -> term_b1\n"); }
    | term_b2 {printf( "term -> term_b2\n"); }
    ;

term_b1: var {printf( "term_b1 -> var\n"); }
       | number {printf( "term_b1 -> number\n"); }
       | l_paren expression r_paren {printf( "term_b1 -> l_paren expression r_paren\n"); }
       ;

term_b2: identifier l_paren r_paren {printf( "term_b2 -> identifier l_paren r_paren\n"); }
       | identifier l_paren t_loop r_paren {printf( "term_b2 -> identifier l_paren t_loop r_paren\n"); }
       ;

t_loop: expression {printf( "t_loop -> expression\n"); }
      | expression comma t_loop {printf( "t_loop -> expression comma t_loop\n"); }
      ;




/*Statement BLOCK*/
statement: var assign expression  {printf( "statement -> var assign expression\n"); }
         | continue {printf( "statement -> continue\n"); }
         | return expression {printf( "statement -> return expression\n"); }
         | read var_loop {printf( "statement -> read var_loop\n"); }
         | write var_loop {printf( "statement -> write var_loop\n"); }
         | do beginloop s_loop endloop while bool_expr {printf( "statement -> do beginloop s_loop endloop while bool_expr\n"); }
         | while bool_expr beginloop s_loop bool_expr {printf( "statement -> while bool_expr beginloop s_loop bool_expr\n"); }
         | if bool_expr then s_loop if_loop {printf( "statement -> if bool_expr then s_loop if_loop\n"); }
      ;



if_loop: endif {printf( "if_loop -> endif\n"); }
       | else s_loop endif {printf( "if_loop -> else s_loop endif\n"); }
      ;

var_loop: var comma var_loop {printf( "var_loop -> var comma var_loop\n"); }
        | var {printf( "var_loop -> var\n"); }
      ;

/*Comparison*/
comp: eq {printf( "comp -> eq\n"); }
    | neq {printf( "comp -> neq\n"); }
    | lt {printf( "comp -> lt\n"); }
    | gt {printf( "comp -> gt\n"); }
    | lte {printf( "comp -> lte\n"); }
    | gte {printf( "comp -> gte\n"); }
    ;

/*Variables*/
var: identifier {printf( "var -> identifier\n"); }
   | identifier l_bracket expression r_bracket {printf( "var -> identifier l_bracket expression r_bracket\n"); }
   ;


/*END of Parse*/
function: FUNCTION {printf( "function -> FUNCTION\n"); }
        ;

continue: CONTINUE {printf( "continue -> CONTINUE\n"); }
        ; 

return: RETURN {printf( "return -> RETURN\n"); }
        ; 

read: READ {printf( "read -> READ\n"); }
        ;  

while: WHILE {printf( "while -> WHILE\n"); }
        ;  

do: DO {printf( "do -> DO\n"); }
        ; 

if: IF {printf( "if -> IF\n"); }
        ;

then: THEN {printf( "then -> THEN\n"); }
        ;  

else: ELSE {printf( "else -> ELSE\n"); }
        ; 

endif: ENDIF {printf( "endif -> ENDIF\n"); }
        ; 

beginloop: BEGINLOOP {printf( "beginloop -> BEGINLOOP\n"); }
        ; 

endloop: ENDLOOP {printf( "endloop -> ENDLOOP\n"); }
        ; 

write: WRITE {printf( "write -> WRITE\n"); }
        ;    

identifier: IDENT { printf( "identifier -> IDENT (%s)\n", $1); }
        ;

number: NUMBER { printf( "number -> NUMBER (%f)\n", $1); }
        ;

semicolon: SEMICOLON {printf( "semicolon -> SEMICOLON\n"); }
        ;

assign: ASSIGN {printf( "assign -> ASSIGN\n"); }
        ;        

colon: COLON {printf( "colon -> COLON\n"); }
        ;

of: OF {printf( "of -> OF\n"); }
        ;

or: OR {printf( "or -> OR\n"); }
        ;

and: AND {printf( "and -> AND\n"); }
        ;

add: ADD {printf( "add -> ADD\n"); }
        ;

sub: SUB {printf( "sub -> SUB\n"); }
        ;

mult: MULT {printf( "mult -> MULT\n"); }
        ;

div: DIV {printf( "div -> DIV\n"); }
        ;

mod: MOD {printf( "mod -> MOD\n"); }
        ;

not: NOT {printf( "not -> NOT\n"); }
        ;

true: TRUE {printf( "true -> TRUE\n"); }
        ;

false: FALSE {printf( "false -> FALSE\n"); }
        ;

l_paren: L_PAREN {printf( "l_paren -> L_PAREN\n"); }
        ;

r_paren: R_PAREN {printf( "l_paren -> R_PAREN\n"); }
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

eq:  EQ { printf( "eq -> EQ\n"); }
        ;

neq:  NEQ { printf( "neq -> NEQ\n"); }
        ;

lt:  LT { printf( "lt -> LT\n"); }
        ;

gt:  GT { printf( "gt -> GT\n"); }
        ;

lte:  LTE { printf( "lte -> LTE\n"); }
        ;

gte:  GTE { printf( "gte -> GTE\n"); }
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

   return 0;
}

void yyerror(const char *msg) {
   printf("** Line %d, position %d: %s\n", Line, Pos, msg);
}