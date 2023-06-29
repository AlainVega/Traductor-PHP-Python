%{
    #include <stdio.h>
    #include "functions.h"
    int yylex(void);
    int yyerror(char *message);
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
        IF ELSE ELIF SWIH CASE BRK DFT FUNC WHIL RTN PRNT

/* 
   Simbolos aritmeticos, de asignacion, igualdad, desigualdad
   logicos, gramaticales, etc. 
*/
%token EQ SC CL CM PLUS MINS DIV MULT MOD CCTN EEQ NEQ GT LT GE LE AND OR
        PPL MMN SOR NOT SQ1 SQ2 RD1 RD2 CR1 CR2

%type <str> expr declaration echo

/* 
   Las siguientes reglas de precedencia y asociatividad fueron sacadas de la
   documentación de PHP.
   https://www.gnu.org/software/bison/manual/bison.html#Precedence-Decl
*/
%left MOD MULT DIV PLUS MINS CCTN AND OR
%right EQ

%%

program: SPHP {printf("Se encontro un tag de inicio de PHP\n"); create_output_file();} lines EPHP {printf("Se encontr el final del tag de PHP\n");};
lines: 
    %empty
    | lines line
;
line:
    declaration SC {printf("Se encontro una declaracion\n"); write_declaration($1);}
    | echo SC {printf("Se encontro un echo\n"); write_echo($1);}
;
declaration: ID EQ expr {$$=format_declaration($1, $3);};
echo: ECH expr {$$=format_echo($2);};
expr: 
    NUM {$$=$1;}
    | STR {$$=$1;}
    | ID {printf("Se encontro una variable en una declaracion\n"); $$=format_variable($1);}
    | expr PLUS expr {printf("Se encontro una suma\n"); $$=format_operation($1, " + ", $3);}
    | expr MINS expr {printf("Se encontro una resta\n"); $$=format_operation($1, " - ", $3);}
    | expr MULT expr {printf("Se encontro una multiplicacion\n"); $$=format_operation($1, " * ", $3);}
    | expr DIV expr {printf("Se encontro una division\n"); $$=format_operation($1, " / ", $3);}
    | expr CCTN expr {printf("Se encontro una concatenacion\n"); $$=format_operation($1, " + ", $3);}
;

%%

int main(int argc, char *argv[]) {
    return yyparse();
}

int yyerror(char *message) {
    printf("Error: %s\n", message);
    return -1;
}