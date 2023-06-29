#include <stdio.h>
#include <string.h>
#include <stdlib.h>

FILE *output_file;

void create_output_file() {
    printf("Opened file.\n");
    output_file = fopen("output_file.py", "w");
}

char *format_variable(char *variable) {
    // Sacar el caracter '$' de la variable.
    variable[0] = '\0';
    variable++;
    printf("Formatted variable: %s\n", variable);
    return variable;
}

char *format_declaration(char *variable, char *expr) {
    // Para este punto, expr ya fue formateado asi que se puede agregar como tal.
    // Sacar el caracter '$' de la variable.
    char *formatted_variable = format_variable(variable);

    // Alocar memoria para el nuevo string.
    char *declaration = (char *) malloc(strlen(variable) + strlen(expr));

    // Poner en declaration la definicion de la variable con la expresion a la que es igual.
    strcat(declaration, formatted_variable);
    strcat(declaration, " = ");
    strcat(declaration, expr);
    printf("Formatted declaration: %s\n", declaration);
    return declaration;
}

char *format_operation(char *expr1, char *operat, char *expr2) {
    // Para este punto expr1 y expr2 ya fueron formateados asi que se pueden agregar como tal.
    char *operation = (char *) malloc(strlen(expr1) + strlen(operat) + strlen(expr2));

    // Formatear la operacion en base al operador (operat) pasado.
    strcat(operation, expr1);
    strcat(operation, operat);
    strcat(operation, expr2);
    printf("Formatted operation: %s\n", operation);
    return operation;
}

void write_declaration(char *declaration) {
    // Para este punto declaration ya fue formateado asi que se puede escribir en output_file.
    printf("Writing declaration: %s\n", declaration);
    fprintf(output_file, "%s\n", declaration);
}

char *format_echo(char *expr) {
    // Para este punto expr ya fue formateado asi que ahora debe ser agregado dentro de print().
    // El espacio extra es para esto.
    char *python_print = (char *) malloc(strlen(expr) + 10);
    strcat(python_print, "print(");
    strcat(python_print, expr);
    strcat(python_print, ")");
    return python_print;
}

void write_echo(char *echo) {
    fprintf(output_file, "%s\n", echo);
}