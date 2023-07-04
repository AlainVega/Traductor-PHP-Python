%{
    #include <stdio.h>
    #include "functions.h"
    int yylex(void);
    int yyerror(char *message);

    int tabcount = 0;
%}

%start program
%union
{
	int intval;
	char *id;
	char *str;	
}

/* Declaracion de los Tokens necesarios */
/* Palabras reservadas ademas etiquedas inicio php y fin php */
%token <str> ID STR NUM ECH BOOL NAME
%token SPHP EPHP FRC AS ARRY APOP APUS ASUM
        IF ELSE ELIF SWIH CASE BRK DFT FUNC WHIL FOR RTN PRNT

/* 
   Simbolos aritmeticos, de asignacion, igualdad, desigualdad
   logicos, gramaticales, etc. 
*/
%token EQ SC CL COMM PLUS MINS DIV MULT MOD CCTN EEQ NEQ GT LT GE LE AND OR
        PPL MMN SOR NOT OSQB CSQB OPRT CPRT OBRC CBRC

%type <str> expr declaration echo conditional parameters while for functionDefinition arguments argument defaultValue functionCall

/* 
   Las siguientes reglas de precedencia y asociatividad fueron sacadas de la
   documentación de PHP.
   https://www.gnu.org/software/bison/manual/bison.html#Precedence-Decl
*/
%left MOD MULT DIV PLUS MINS CCTN AND OR
%right EQ
%nonassoc GT LT GTE LTE NEQ EEQ

%%

program: SPHP {printf("Se encontro un tag de inicio de PHP\n"); create_output_file();} statements EPHP {printf("Se encontro el final del tag de PHP\n");};
statements: 
    %empty
    | statements statement
;
statement:
    declaration SC {printf("Se encontro una declaracion\n"); write_declaration($1);}
    | echo SC {printf("Se encontro un echo\n"); write_echo($1);}
    | conditional {printf("Se encontro una condicional\n"); write_if($1);}
    | while {printf("Se encontro un bucle while\n"); write_while($1);}
    | for {printf("Se encontro un bucle for\n"); write_for($1);}
    | functionDefinition {printf("Se encontro la definicion de una funcion\n"); write_function($1);}
;
declaration: ID EQ expr {$$=format_declaration($1, $3);};
echo: ECH expr {$$=format_echo($2, tabcount);};
conditional: 
    IF OPRT expr CPRT statementinifblock {printf("Se encontro un if\n"); tabcount++; $$=format_if($3);};
    | IF OPRT expr CPRT OBRC statementsinifblock CBRC {printf("Se encontro un if con bloque\n"); tabcount++; $$=format_if($3);}
    | IF OPRT expr CPRT OBRC statementsinifblock CBRC ELSE OBRC statementsinelseblock CBRC {printf("Se encontro un if else con bloque\n"); tabcount++; $$=format_if_else($3);}
;
statementsinifblock: 
    %empty
    | statementsinifblock statementinifblock {printf("Se redujo el scope\n"); tabcount--;}
;
/* TODO: Intentar hacer un array de instrucciones para despues poner en conditional con $4 */
statementinifblock:
    declaration SC {printf("Se encontro una declaracion dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array($1);}
    | echo SC {printf("Se encontro un echo dentro de un if\n"); add_statement_to_if_block_counter(); add_statement_to_array($1);}
;
statementsinelseblock: 
    %empty
    | statementsinelseblock statementinelseblock {printf("Se redujo el scope\n"); tabcount--;}
;
/* TODO: Intentar hacer un array de instrucciones para despues poner en conditional con $4 */
statementinelseblock:
    declaration SC {printf("Se encontro una declaracion dentro de un else\n"); write_declaration($1);}
    | echo SC {printf("Se encontro un echo dentro de un else\n"); add_statement_to_else_block_counter(); add_statement_to_array($1);}
    | conditional {printf("Se encontro una condicional dentro de un else\n"); write_if($1);}
;
block: OBRC statements CBRC {printf("Se encontro un bloque\n");};
while: WHIL OPRT expr CPRT OBRC statementsInWhileBlock CBRC {printf("Se encontro un while con bloque\n"); tabcount++; $$=format_while($3);};
statementsInWhileBlock: 
    %empty
    | statementsInWhileBlock statementInWhileBlock
;
statementInWhileBlock: 
    declaration SC {printf("Se encontro una declaracion dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array($1);}
    | echo SC {printf("Se encontro un echo dentro de un while\n"); add_statement_to_while_block_counter(); add_statement_to_array($1);}
    | conditional {printf("Se encontro una condicional dentro de un while\n");}
;
for: FOR OPRT expr SC expr SC expr CPRT block {printf("Se encontro un bucle for\n");};
functionDefinition: FUNC NAME OPRT arguments CPRT OBRC statementsInFunctionBlock CBRC {printf("Se encontro una funcion llamada: %s, con argumentos: %s\n", $2, $4); tabcount++; $$=format_function($4, $2);};
statementsInFunctionBlock: 
    %empty
    | statementsInFunctionBlock statementInFunctionBlock {printf("Se redujo el scope\n"); tabcount--;}
;
statementInFunctionBlock: 
    declaration SC {printf("Se encontro una declaracion dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array($1);}
    | echo SC {printf("Se encontro un echo dentro de una funcion\n"); add_statement_to_function_block_counter(); add_statement_to_array($1);}
;
expr: 
    NUM {$$=$1;}
    | STR {$$=$1;}
    | ID {printf("Se encontro una variable en una expresion\n"); $$=format_variable($1);}
    | BOOL {printf("Se encontro un booleano\n"); $$=format_boolean($1);}
    | functionCall {printf("Se encontro una llamada a funcion\n");}
    | expr PLUS expr {printf("Se encontro una suma\n"); $$=format_operation($1, " + ", $3);}
    | expr MINS expr {printf("Se encontro una resta\n"); $$=format_operation($1, " - ", $3);}
    | expr MULT expr {printf("Se encontro una multiplicacion\n"); $$=format_operation($1, " * ", $3);}
    | expr DIV expr {printf("Se encontro una division\n"); $$=format_operation($1, " / ", $3);}
    | expr CCTN expr {printf("Se encontro una concatenacion\n"); $$=format_operation($1, " + ", $3);}
    | expr AND expr {printf("Se encontro una conjuncion\n"); $$=format_operation($1, " and ", $3);}
    | expr OR expr {printf("Se encontro una disyuncion\n"); $$=format_operation($1, " or ", $3);}
    | expr GT expr {printf("Se encontro un mayor que \n"); $$=format_operation($1, " > ", $3);}
    | expr LT expr {printf("Se encontro un menor que \n"); $$=format_operation($1, " < ", $3);}
    | expr GTE expr {printf("Se encontro un mayor o igual que \n"); $$=format_operation($1, " >= ", $3);}
    | expr LTE expr {printf("Se encontro un menor o igual que \n"); $$=format_operation($1, " <= ", $3);}
    | expr EEQ expr {printf("Se encontro un igual que \n"); $$=format_operation($1, " == ", $3);}
    | expr NEQ expr {printf("Se encontro un diferente que \n"); $$=format_operation($1, " != ", $3);}
    | ARRY OPRT parameters CPRT {printf("Se encontro la definicion de un array con array()\n"); $$=format_array();}
    | OSQB parameters CSQB {printf("Se encontro la definicion de un array con []\n"); $$=format_array();}
;
functionCall: NAME OPRT arguments CPRT {printf("Se encontro una llamada a la funcion %s\n", $1); $$=format_function_call($1, $3);};
parameters:
    %empty {$$=NULL;}
    | expr {printf("Se encontro la expresion %s como un parametro\n", $1); $$=$1; add_param_to_queue($1);}
    | parameters COMM expr {printf("Se encontro una expresion (%s) separada por comas como parametros\n", $3); add_param_to_queue($3);}
;
arguments:
    %empty {$$="";}
    | argument 
;
argument: 
    argument COMM argument {$$=load_all_arguments($1, $3);}
    | ID {printf("Se encontro la variable %s como un argumento\n", $1); $$=format_variable($1);}
    | ID EQ defaultValue {printf("Se encontro la variable %s como un argumento, que tiene el valor por defecto %s\n", $1, $3); $$=format_default_argument(format_variable($1), $3);}
    | defaultValue /*uso para el caso de una llamada a funcion. Ej: f(1, "hola")*/
;
defaultValue:
    NUM {$$=$1;}
    | STR {$$=$1;}
    | BOOL {printf("Se encontro un booleano\n"); $$=format_boolean($1);}
;

%%

int main(int argc, char *argv[]) {
    return yyparse();
}

int yyerror(char *message) {
    printf("Error: %s\n", message);
    return -1;
}