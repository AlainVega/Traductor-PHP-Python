%{
    
%}
/*Declaracion de los Tokens necesarios*/
/*  Palabras reservadas ademas etiquedas inicio php y fin php*/
%token SPHP EPHP DIG ID BOOL STR NAME FRC AS ARR APOP APUS ASUM ECHO
%token IF ELSE ELIF SWIH CASE BRK DFT FUNC WHIL RTN
/*  Simbolos aritmeticos, de asignacion, igualdad, desigualdad
    logicos, gramaticales, etc.*/
%token EQ SC CL CM PL MN DV ML MD CCTN EEQ NEQ GT LT GE LE AND OR
%token PPL MMN SOR NOT SQ1 SQ2 RD1 RD2 CR1 CR2

%%

%%