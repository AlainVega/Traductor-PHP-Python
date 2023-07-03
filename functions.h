#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

FILE *output_file;
int elements_in_stack = 0;
char statement_stack[50][1000];
int elements_in_param_queue = 0;
char param_queue[50][1000];
int statements_in_if_block = 0;
int statements_in_else_block = 0;
int statements_in_while_block = 0;

void create_output_file() {
    output_file = fopen("output_file.py", "w");
}

void add_statement_to_array(char *statement) {
    strcpy(statement_stack[elements_in_stack], statement);
    printf("Added the following statement to stack: %s\n", statement_stack[elements_in_stack]);
    elements_in_stack++;
}

char *take_statement_from_array() {
    printf("Took out the following statement from stack: %s\n", statement_stack[elements_in_stack - 1]);
    return statement_stack[--elements_in_stack];
}

void add_statement_to_if_block_counter() {
    ++statements_in_if_block;
}

void add_statement_to_else_block_counter() {
    ++statements_in_else_block;
}

void add_statement_to_while_block_counter() {
    ++statements_in_while_block;
}

void substract_statement_to_if_block_counter() {
    --statements_in_if_block;
}

void substract_statement_to_else_block_counter() {
    --statements_in_else_block;
}

void substract_statement_to_while_block_counter() {
    --statements_in_while_block;
}

void add_param_to_queue(char *param) {
    strcpy(param_queue[elements_in_param_queue], param);
    printf("Added the following statement to param queue: %s\n", param_queue[elements_in_param_queue]);
    printf("Elements in param_queue: %d\n", elements_in_param_queue);
    elements_in_param_queue++;
}

void write_statements_in_block(char *first_line, int *statement_counter) {
    // first_line se refiere a la primera linea que puede ser un if (), for (), else o while.
    // El resto de las lineas representan los statements dentro de un bloque.
    char *statements[100];
    for (int i = *statement_counter - 1; i >= 0; i--) {
        char *statement = take_statement_from_array();
        statements[i] = statement;
    }
    
    for (int i = 0; *statement_counter > i; i++) {
        strcat(first_line, "\n\t");
        strcat(first_line, statements[i]);
    }

    // Resetear el contador pasado a 0.
    *statement_counter = 0;
}

char *format_variable(char *variable) {
    // Sacar el caracter '$' de la variable.
    variable[0] = '\0';
    variable++;
    printf("Formatted variable: %s\n", variable);
    return variable;
}

char *format_boolean(char *boolean) {
    // Realizar comparacion case-insensitive y retornar True o False.
    if (strcasecmp("true", boolean) == 0) {
        return "True";
    }
    else if (strcasecmp("false", boolean) == 0) {
        return "False";
    }
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

char *format_echo(char *expr, int tabcount) {
    // Para este punto expr ya fue formateado asi que ahora debe ser agregado dentro de print().
    // El espacio extra es para esto.
    char *python_print = (char *) malloc(strlen(expr) + tabcount + 10);
    if (tabcount > 0) {
        for (int i = 0; i < tabcount; i++) {
            strcat(python_print, "\t");
        }
    }
    strcat(python_print, "print(");
    strcat(python_print, expr);
    strcat(python_print, ")");
    return python_print;
}

void write_echo(char *echo) {
    fprintf(output_file, "%s\n", echo);
}

char *format_if(char *expr) {
    // Para este punto expr ya fue formateado asi que ahora sera encerrado entre parentesis y se le agregara un ':' segun la sintaxis de Python.
    // El espacio extra es para esto.
    char *python_if = (char *) malloc(strlen(expr) + 1000);
    strcat(python_if, "if (");
    strcat(python_if, expr);
    strcat(python_if, "):");

    if (statements_in_if_block > 0) {
        write_statements_in_block(python_if, &statements_in_if_block);
    }
    
    return python_if;
}

char *format_if_else(char *expr) {
    // Para este punto expr ya fue formateado asi que ahora sera encerrado entre parentesis y se le agregara un ':' segun la sintaxis de Python.
    // El espacio extra es para esto.
    char *python_if_else = (char *) malloc(strlen(expr) + 1000);
    strcat(python_if_else, "if (");
    strcat(python_if_else, expr);
    strcat(python_if_else, "):");

    if (statements_in_if_block > 0) {
        write_statements_in_block(python_if_else, &statements_in_if_block);
    }

    // Ahora escribir el else.
    strcat(python_if_else, "\nelse:");

    if (statements_in_else_block > 0) {
        write_statements_in_block(python_if_else, &statements_in_else_block);
    }
    
    return python_if_else;
}

void write_if(char *ifcondition) {
    // Para este punto declaration ya fue formateado asi que se puede escribir en output_file.
    printf("Writing if condition: %s\n", ifcondition);
    fprintf(output_file, "%s\n", ifcondition);
}

char *format_while(char *expr) {
    // Para este punto expr ya fue formateado asi que ahora sera encerrado entre parentesis y se le agregara un ':' segun la sintaxis de Python.
    // El espacio extra es para esto.
    char *python_while = (char *) malloc(strlen(expr) + 1000);
    strcat(python_while, "while (");
    strcat(python_while, expr);
    strcat(python_while, "):");

    if (statements_in_while_block > 0) {
        write_statements_in_block(python_while, &statements_in_while_block);
    }

    return python_while;
}

void write_while(char *while_loop) {
    printf("Writing while loop: %s\n", while_loop);
    fprintf(output_file, "%s\n", while_loop);
}

/*Hacer primero el while y despues este*/
void write_for(char *for_loop) {
    printf("Writing for loop: %s\n", for_loop);
    fprintf(output_file, "%s\n", for_loop);
}

char *format_array() {
    char *param_list = (char *) malloc(elements_in_param_queue * 1000);
    strcat(param_list, "[");
    for (int i = 0; i < elements_in_param_queue; i++) {
        strcat(param_list, param_queue[i]);
        strcat(param_list, ", ");
    }
    strcat(param_list, "]");
    elements_in_param_queue = 0;
    printf("Formatted array: %s\n", param_list);
    return param_list;
}