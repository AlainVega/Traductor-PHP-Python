%{
    #include <stdio.h>
    #include "functions.h"
    int yylex(void);
    int yyerror(char *message);
%}

%start program

/* Declaracion de los Tokens necesarios */
/* Palabras reservadas ademas etiquedas inicio php y fin php */
%token SPHP EPHP NUM ID BOOL STR NAME FRC AS ARR APOP APUS ASUM ECH
        IF ELSE ELIF SWIH CASE BRK DFT FUNC WHIL RTN PRNT

/* Simbolos aritmeticos, de asignacion, igualdad, desigualdad
   logicos, gramaticales, etc. */
%token EQ SC CL CM PLUS MINS DIV MULT MD CCTN EEQ NEQ GT LT GE LE AND OR
        PPL MMN SOR NOT SQ1 SQ2 RD1 RD2 CR1 CR2

%%

program: SPHP lines EPHP {create_output_file();};
lines: 
    %empty
    | lines line
;
line:
    declaration SC {printf("Se encontro una declaracion\n");}
;
declaration: ID EQ expr;
expr: 
    NUM {$$=$1;}
    | STR {$$=$1;}
    | ID {$$=$1;}
    | expr PLUS expr {printf("Se encontro una suma\n");}
    | expr MINS expr {printf("Se encontro una resta\n");}
    | expr MULT expr {printf("Se encontro una multiplicacion\n");}
    | expr DIV expr {printf("Se encontro una division\n");}
    | expr CCTN expr {printf("Se encontro una concatenacion\n");}
;

%%

int main(int argc, char *argv[]) {
    return yyparse();
}

int yyerror(char *message) {
    printf("Error: %s\n", message);
    return -1;
}