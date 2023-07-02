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
%token <str> ID STR NUM ECH
%token SPHP EPHP BOOL NAME FRC AS ARR APOP APUS ASUM
        IF ELSE ELIF SWIH CASE BRK DFT FUNC WHIL FOR RTN PRNT

/* 
   Simbolos aritmeticos, de asignacion, igualdad, desigualdad
   logicos, gramaticales, etc. 
*/
%token EQ SC CL CM PLUS MINS DIV MULT MOD CCTN EEQ NEQ GT LT GE LE AND OR
        PPL MMN SOR NOT SQ1 SQ2 OPRT CPRT OBRC CBRC

%type <str> expr declaration echo conditional statementinifblock statementsinifblock

/* 
   Las siguientes reglas de precedencia y asociatividad fueron sacadas de la
   documentación de PHP.
   https://www.gnu.org/software/bison/manual/bison.html#Precedence-Decl
*/
%left MOD MULT DIV PLUS MINS CCTN AND OR
%right EQ
%nonassoc GT LT GTE LTE

%%

program: SPHP {printf("Se encontro un tag de inicio de PHP\n"); create_output_file();} statements EPHP {printf("Se encontro el final del tag de PHP\n");};
statements: 
    %empty
    | statements statement
;
statement:
    declaration SC {printf("Se encontro una declaracion\n"); write_declaration($1);}
    | echo SC {printf("Se encontro un echo\n"); write_echo($1, tabcount);}
    | conditional {printf("Se encontro una condicional\n"); write_if($1);}
    | while
    | for
;
declaration: ID EQ expr {$$=format_declaration($1, $3);};
echo: ECH expr {$$=format_echo($2, tabcount);};
conditional: 
    IF OPRT expr CPRT statementinifblock {printf("Se encontro un if\n"); tabcount++; $$=format_if($3);};
    | IF OPRT expr CPRT OBRC statementsinifblock CBRC {printf("Se encontro un if con bloque\n"); tabcount++; $$=format_if($3);};
statementsinifblock: 
    %empty
    | statementsinifblock statementinifblock {printf("Se redujo el scope\n"); tabcount--; $$=format}
;
/* TODO: Intentar hacer un array de instrucciones para despues poner en conditional con $4 */
statementinifblock:
    declaration SC {printf("Se encontro una declaracion\n"); write_declaration($1);}
    | echo SC {printf("Se encontro un echo\n"); char *formatted_echo = format_echo($1, tabcount); add_instruction_to_array(formatted_echo)}
    | conditional {printf("Se encontro una condicional\n"); write_if($1);}
;
block: OBRC statements CBRC {printf("Se encontro un bloque\n");};
while: WHIL OPRT expr CPRT block {printf("Se encontro un bucle while\n");}
for: FOR OPRT expr SC expr SC expr CPRT block {printf("Se encontro un bucle for\n");}
expr: 
    NUM {$$=$1;}
    | STR {$$=$1;}
    | ID {printf("Se encontro una variable en una declaracion\n"); $$=format_variable($1);}
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
;

%%

int main(int argc, char *argv[]) {
    return yyparse();
}

int yyerror(char *message) {
    printf("Error: %s\n", message);
    return -1;
}