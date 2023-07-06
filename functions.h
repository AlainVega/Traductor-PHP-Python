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
int statements_in_elif_block = 0;
int statements_in_else_block = 0;
int statements_in_while_block = 0;
int statements_in_function_block = 0;
int statements_in_foreach_block = 0;
int statements_in_for_block = 0;


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

void add_statement_to_elif_block_counter() {
    ++statements_in_elif_block;
}

void add_statement_to_else_block_counter() {
    ++statements_in_else_block;
}

void add_statement_to_while_block_counter() {
    ++statements_in_while_block;
}

void add_statement_to_function_block_counter() {
    ++statements_in_function_block;
}

void add_statement_to_foreach_block_counter() {
    ++statements_in_foreach_block;
}

void add_statement_to_for_block_counter() {
    ++statements_in_for_block;
}

void substract_statement_to_if_block_counter() {
    --statements_in_if_block;
}

void substract_statement_to_elif_block_counter() {
    --statements_in_elif_block;
}

void substract_statement_to_else_block_counter() {
    --statements_in_else_block;
}

void substract_statement_to_while_block_counter() {
    --statements_in_while_block;
}

void substract_statement_to_function_block_counter() {
    --statements_in_function_block;
}

void substract_statement_to_foreach_block_counter() {
    --statements_in_foreach_block;
}

void substract_statement_to_for_block_counter() {
    --statements_in_for_block;
}

void add_param_to_queue(char *param) {
    strcpy(param_queue[elements_in_param_queue], param);
    printf("Added the following statement to param queue: %s\n", param_queue[elements_in_param_queue]);
    printf("Elements in param_queue: %d\n", elements_in_param_queue + 1);
    elements_in_param_queue++;
}

void write_statements_in_block(char *first_line, int *statement_counter) {
    // first_line se refiere a la primera linea que puede ser un if (), for (), else o while.
    // El resto de las lineas representan los statements dentro de un bloque.
    char *statements[100];
    if (*statement_counter > 0) {
        for (int i = *statement_counter - 1; i >= 0; i--) {
            char *statement = take_statement_from_array();
            statements[i] = statement;
        }
        
        for (int i = 0; *statement_counter > i; i++) {
            strcat(first_line, "\n\t");
            strcat(first_line, statements[i]);
        }
    }
    else if (*statement_counter == 0) {
        strcat(first_line, "\n\tpass");
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
    // a = lambda b, c, d="nada" : (b := b + 1) - cA
    // Alocar memoria para el nuevo string.
    char *declaration = malloc(strlen(variable) + strlen(expr) + 1000);
    printf("logitud de expresion: %i\n", (int)strlen(expr));
    // Poner en declaration la definicion de la variable con la expresion a la que es igual.
    strcat(declaration, formatted_variable);
    strcat(declaration, " = ");
    strcat(declaration, expr);
    printf("Formatted declaration: %s\n", declaration);
    return declaration;
}

char *format_operation(char *expr1, char *operat, char *expr2) {
    // Para este punto expr1 y expr2 ya fueron formateados asi que se pueden agregar como tal.
    char *operation = malloc(strlen(expr1) + strlen(operat) + strlen(expr2));

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

void write_expression(char *expr) {
    printf("Writing declaration: %s\n", expr);
    fprintf(output_file, "%s\n", expr);
}

char *format_echo(char *expr, int tabcount) {
    // Para este punto expr ya fue formateado asi que ahora debe ser agregado dentro de print().
    // El espacio extra es para esto.
    char *python_print = malloc(strlen(expr) + tabcount + 10);
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
    char *python_if = malloc(strlen(expr) + 1000);
    strcat(python_if, "if (");
    strcat(python_if, expr);
    strcat(python_if, "):");
    write_statements_in_block(python_if, &statements_in_if_block);
    
    return python_if;
}

char *format_if_else(char *expr) {
    // Para este punto expr ya fue formateado asi que ahora sera encerrado entre parentesis y se le agregara un ':' segun la sintaxis de Python.
    // El espacio extra es para esto.
    char *python_if_else = malloc(strlen(expr) + 1000);

    /*
        Sacar primero los statements del else y finalmente del if debido a que tenemos un stack
        de statements, luego insertarlos en el orden invertido a python_if_elif_else.
    */
    char *python_else = malloc(1000);
    strcat(python_else, "\nelse:");
    write_statements_in_block(python_else, &statements_in_else_block);

    char *python_if = malloc(strlen(expr) + 1000);
    strcat(python_if, "if (");
    strcat(python_if, expr);
    strcat(python_if, "):");
    write_statements_in_block(python_if, &statements_in_if_block);
    
    strcat(python_if_else, python_if);
    strcat(python_if_else, python_else);

    return python_if_else;
}

char *format_if_elseif_else(char *exprif, char *exprelseif) {
    // Puntero a char con el if entero.
    char *python_if_elif_else = malloc(strlen(exprif) + strlen(exprelseif) + 10000);
    
    /*
        Sacar primero los statements del else, luego del elif y finalmente del if debido a que tenemos un stack
        de statements, luego insertarlos en el orden invertido a python_if_elif_else.
    */
    char *python_else = malloc(1000);
    strcat(python_else, "\nelse:");
    write_statements_in_block(python_else, &statements_in_else_block);

    char *python_elif = malloc(strlen(exprelseif) + 1000);
    strcat(python_elif, "\nelif (");
    strcat(python_elif, exprelseif);
    strcat(python_elif, "):");
    write_statements_in_block(python_elif, &statements_in_elif_block);

    char *python_if = malloc(strlen(exprif) + 1000);
    strcat(python_if, "if (");
    strcat(python_if, exprif);
    strcat(python_if, "):");
    write_statements_in_block(python_if, &statements_in_if_block);

    strcat(python_if_elif_else, python_if);
    strcat(python_if_elif_else, python_elif);
    strcat(python_if_elif_else, python_else);

    return python_if_elif_else;
}

void write_if(char *ifcondition) {
    // Para este punto declaration ya fue formateado asi que se puede escribir en output_file.
    printf("Writing if condition: %s\n", ifcondition);
    fprintf(output_file, "%s\n", ifcondition);
}

char *format_while(char *expr) {
    // Para este punto expr ya fue formateado asi que ahora sera encerrado entre parentesis y se le agregara un ':' segun la sintaxis de Python.
    // El espacio extra es para esto.
    char *python_while = malloc(strlen(expr) + 1000);
    strcat(python_while, "while (");
    strcat(python_while, expr);
    strcat(python_while, "):");
    write_statements_in_block(python_while, &statements_in_while_block);

    return python_while;
}

void write_while(char *while_loop) {
    printf("Writing while loop: %s\n", while_loop);
    fprintf(output_file, "%s\n", while_loop);
}

char *format_default_argument(char *id, char *data) {
    char *argument_formatted = malloc(strlen(id) + strlen(data) + 1);
    strcat(argument_formatted, id);
    strcat(argument_formatted, "=");
    strcat(argument_formatted, data);
    return argument_formatted;
}

char *load_all_arguments(char *arg1, char *arg2) {
    char *arguments = malloc(strlen(arg1) + strlen(arg2) + 2);
    strcat(arguments, arg1);
    strcat(arguments, ", ");
    strcat(arguments, arg2);
    return arguments;
}

char *format_function(char *functionArguments, char* functionName) {
    char *python_function = malloc(strlen(functionArguments) + strlen(functionName) + 1000);
    
    strcat(python_function, "def ");
    strcat(python_function, functionName);
    strcat(python_function, "(");
    strcat(python_function, functionArguments);
    strcat(python_function, ")");
    strcat(python_function, ":");
    write_statements_in_block(python_function, &statements_in_function_block);

    return python_function;
}

void write_function(char *function) {
    printf("Writing function: %s\n", function);
    fprintf(output_file, "%s\n", function);
}

char *format_array() {
    char *param_list = malloc(elements_in_param_queue * 1000);
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

char *format_array_access(char *variable_name, char *number) {
    char *python_variable = format_variable(variable_name);
    variable_name[0] = '\0';
    char *array_access = malloc(strlen(python_variable) + strlen(number) + 100);
    strcat(array_access, python_variable);
    strcat(array_access, "[");
    strcat(array_access, number);
    strcat(array_access, "]");
    printf("Formatted array access: %s\n", array_access);
    return array_access;
}

char *format_function_call(char *function_name, char *function_arguments){
    char *python_function_call = malloc(strlen(function_name) + strlen(function_arguments) + 2);
    strcat(python_function_call, function_name);
    strcat(python_function_call, "(");
    strcat(python_function_call, function_arguments);
    strcat(python_function_call, ")");
    return python_function_call;
}

char *format_return(char *expr) {
    char *python_return = malloc(strlen(expr) + 7);
    strcat(python_return, "return ");
    strcat(python_return, expr);
    return python_return;
}

char *translate_return(char *expr) {
    char *python_exit = malloc(strlen(expr) + 6);
    strcat(python_exit, "exit(");
    strcat(python_exit, expr);
    strcat(python_exit, ")");
    return python_exit;
}

void write_return(char *python_return) {
    printf("Writing return statement: %s\n", python_return);
    fprintf(output_file, "%s\n", python_return);
}

char *format_one_line_comment(char *comment) {
    //Para este punto el comentario es php valido, asi que puede empezar con / o #
    if (comment[0] == '/') { // Este tipo de comentario
        comment[0] = '\0';
        comment[1] = '#';
        return ++comment;
    } else { // Comentario estilo python, empieza con #
        return comment;
    }
}

void write_one_line_comment(char *comment) {
    printf("Writing comment line: %s\n", comment);
    fprintf(output_file, "%s\n", comment);
}

char *format_ternary_operator(char *expr1, char *expr2, char *expr3) {
    char *python_ternary = malloc(strlen(expr1) + strlen(expr2)+ strlen(expr3) + 100);
    strcat(python_ternary, expr2);
    strcat(python_ternary, " if ");
    strcat(python_ternary, expr1);
    strcat(python_ternary, " else ");
    strcat(python_ternary, expr3);
    return python_ternary;
}
/*Para el foreach de la forma:
$a = array(1, "hola");
foreach($a as $valor) {
    echo $valor;
}
*/
char *format_foreach1(char *arr_var, char *as_var) {
    char *python_foreach1 = malloc(strlen(arr_var) + strlen(arr_var) + 1000);
    strcat(python_foreach1, "for ");
    strcat(python_foreach1, as_var);
    strcat(python_foreach1, " in ");
    strcat(python_foreach1, arr_var);
    strcat(python_foreach1, ":");
    write_statements_in_block(python_foreach1, &statements_in_foreach_block);

    return python_foreach1;
}

/*Para el foreach de la forma:
foreach([1, "hola"] as $valor) {
    echo $valor;
}
o de la forma:
foreach(array(1, "hola") as $valor) {
    echo $valor;
}
*/
char *format_foreach2(char *parameters, char *as_var) {
    char *python_foreach2 = malloc(strlen(parameters) + strlen(as_var) + 1000);
    strcat(python_foreach2, "for ");
    strcat(python_foreach2, as_var);
    strcat(python_foreach2, " in [");
    strcat(python_foreach2, parameters);
    strcat(python_foreach2, "]:");
    write_statements_in_block(python_foreach2, &statements_in_foreach_block);

    return python_foreach2;
}

void write_foreach(char *foreach) {
    printf("Writing foreach: %s\n", foreach);
    fprintf(output_file, "%s\n", foreach);
}

char *poner_variable(char *declaration) {
    // Sacar la variable definida y retornar eso
    return "i";
}

char *poner_iterable(char *expr) {
    // Implementar la logica para definir el iterable equivalente en python
    return "range(10)";
}

char *format_for(char *declaration, char *expr2, char *expr3) {
    char *python_for = malloc(strlen(declaration) + strlen(expr2) + strlen(expr3) + 1000);
    strcat(python_for, "for ");
    strcat(python_for, poner_variable(declaration));
    strcat(python_for, " in ");
    strcat(python_for, poner_iterable(expr2));
    strcat(python_for, ":");
    write_statements_in_block(python_for, &statements_in_for_block);

    return python_for;
}

void write_for(char *forpy) {
    printf("Writing for: %s\n", forpy);
    fprintf(output_file, "%s\n", forpy);
}

char *format_pre_increment(char *expr) {
    char *python_pre_increment =  malloc(strlen(expr) + strlen("(") + strlen(" := ") + strlen(" + 1") + strlen(")") + 20);
    strcat(python_pre_increment, "(");
    strcat(python_pre_increment, expr);
    strcat(python_pre_increment, " := ");
    strcat(python_pre_increment, expr);
    strcat(python_pre_increment, " + 1");
    strcat(python_pre_increment, ")");
    return python_pre_increment;
}

char *format_post_increment(char *expr) {
    char *python_post_increment = malloc(strlen(expr) + 20);
    strcat(python_post_increment, "((");
    strcat(python_post_increment, expr);
    strcat(python_post_increment, " := ");
    strcat(python_post_increment, expr);
    strcat(python_post_increment, " + 1");
    strcat(python_post_increment, ")");
    strcat(python_post_increment, " - 1)");
    return python_post_increment;
}

char *format_pre_decrement(char *expr) {
    char *python_pre_decrement = malloc(strlen(expr) + 20);
    strcat(python_pre_decrement, "(");
    strcat(python_pre_decrement, expr);
    strcat(python_pre_decrement, " := ");
    strcat(python_pre_decrement, expr);
    strcat(python_pre_decrement, " - 1");
    strcat(python_pre_decrement, ")");
    return python_pre_decrement;
}

char *format_post_decrement(char *expr) {
    char *python_post_decrement = malloc(strlen(expr) + 20);
    strcat(python_post_decrement, "((");
    strcat(python_post_decrement, expr);
    strcat(python_post_decrement, " := ");
    strcat(python_post_decrement, expr);
    strcat(python_post_decrement, " - 1");
    strcat(python_post_decrement, ")");
    strcat(python_post_decrement, " + 1)");
    return python_post_decrement;
}  

char *format_anonymous_function(char *arguments, char *line) {
    char *python_lambda_function = malloc(strlen(arguments) + strlen(line) + 15);
    strcat(python_lambda_function, "lambda ");
    strcat(python_lambda_function, arguments);
    strcat(python_lambda_function, " : ");
    strcat(python_lambda_function, line);
    printf("fun %s, longitud: %i\n", python_lambda_function, (int)strlen(python_lambda_function));
    return python_lambda_function;
}