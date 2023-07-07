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

char *format_declaration(char *variable, char *operat, char *expr) {
    // Para este punto, expr ya fue formateado asi que se puede agregar como tal.
    // Sacar el caracter '$' de la variable.
    char *formatted_variable = format_variable(variable);

    // Calculamos la longitud de los strings que utilizaremos
    size_t variable_length = strlen(formatted_variable);
    size_t expr_length = strlen(expr);
    size_t operat_length = strlen(operat);

    // Alocar memoria para el nuevo string.
    char *declaration = (char *) malloc(variable_length + expr_length + operat_length + 1);
    printf("logitud de expresion: %i\n", (int)expr_length);

    // Poner en declaration la definicion de la variable con la expresion a la que es igual.
    size_t sum = 0; //posicionador del puntero declaration, para agregar mas cadenas el final del string.

    // Concatenamos los strings
    memcpy(declaration + sum, formatted_variable, variable_length);
    sum += variable_length;
    memcpy(declaration + sum, operat, operat_length);
    sum += operat_length;
    memcpy(declaration + sum, expr, expr_length + 1);
    printf("Formatted declaration: %s\n", declaration);

    return declaration;
}

char *format_operation(char *expr1, char *operat, char *expr2) {
    // Calculamos la longitud de los strings que utilizaremos
    size_t expr1_length = strlen(expr1);
    size_t expr2_length = strlen(expr2);
    size_t operat_length = strlen(operat);

    // Para este punto expr1 y expr2 ya fueron formateados asi que se pueden agregar como tal.
    char *operation = (char *) malloc(expr1_length + operat_length + expr2_length + 1);

    // Formatear la operacion en base al operador (operat) pasado.
    size_t sum = 0; // Posicionador del puntero operation, para agregar mas strings al final de string.

    // Concetenamos los strings
    memcpy(operation + sum, expr1, expr1_length);
     sum += expr1_length;
    memcpy(operation + sum, operat, operat_length);
     sum += operat_length;
    memcpy(operation + sum, expr2, expr2_length + 1);
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
    size_t expr_length = strlen(expr);
    size_t tab_length = strlen("\t");
    size_t print_length = strlen("print(");
    size_t paren_length = strlen(")");

    // Alocamos memoria para el string resultado
    char *python_print = (char *) malloc(expr_length + tabcount*tab_length + print_length + paren_length + 1);
    size_t sum = 0; // Posicionador del puntero python_print para poder agregar mas strings al final del string.

    // Concatenamos los strings
    if (tabcount > 0) {
        for (int i = 0; i < tabcount; i++) {
            memcpy(python_print + sum, "\t", tab_length);
            sum += i*tab_length;
        }
    }
    memcpy(python_print + sum, "print(", print_length);
    sum += print_length;
    memcpy(python_print + sum, expr, expr_length);
    sum += expr_length;
    memcpy(python_print + sum, ")", paren_length + 1);

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
    write_statements_in_block(python_if, &statements_in_if_block);
    
    return python_if;
}

char *format_if_else(char *expr) {
    // Para este punto expr ya fue formateado asi que ahora sera encerrado entre parentesis y se le agregara un ':' segun la sintaxis de Python.
    // El espacio extra es para esto.
    char *python_if_else = (char *) malloc(strlen(expr) + 1000);

    /*
        Sacar primero los statements del else y finalmente del if debido a que tenemos un stack
        de statements, luego insertarlos en el orden invertido a python_if_elif_else.
    */
    char *python_else = (char *) malloc(1000);
    strcat(python_else, "\nelse:");
    write_statements_in_block(python_else, &statements_in_else_block);

    char *python_if = (char *) malloc(strlen(expr) + 1000);
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
    char *python_if_elif_else = (char *) malloc(strlen(exprif) + strlen(exprelseif) + 10000);
    
    /*
        Sacar primero los statements del else, luego del elif y finalmente del if debido a que tenemos un stack
        de statements, luego insertarlos en el orden invertido a python_if_elif_else.
    */
    char *python_else = (char *) malloc(1000);
    strcat(python_else, "\nelse:");
    write_statements_in_block(python_else, &statements_in_else_block);

    char *python_elif = (char *) malloc(strlen(exprelseif) + 1000);
    strcat(python_elif, "\nelif (");
    strcat(python_elif, exprelseif);
    strcat(python_elif, "):");
    write_statements_in_block(python_elif, &statements_in_elif_block);

    char *python_if = (char *) malloc(strlen(exprif) + 1000);
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
    char *python_while = (char *) malloc(strlen(expr) + 1000);
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
    // Definimos las logitudes de las cadenas que utilizaremos
    size_t id_length = strlen(id);
    size_t data_length = strlen(data);
    size_t equal_length = strlen(" = ");

    // Alocamos memoria para la cadena resultante.
    char *argument_formatted = (char *) malloc(id_length + data_length + equal_length +1);

    size_t sum = 0; //Posicionador del puntero argument_formatted, para agregar mas strings al final del string resultante.

    // Concatenamos los strings
    memcpy(argument_formatted + sum, id, id_length);
    sum += id_length; 
    memcpy(argument_formatted + sum, " = ", equal_length);
    sum += equal_length;
    memcpy(argument_formatted + sum, data, data_length + 1);

    return argument_formatted;
}

char *load_all_arguments(char *arg1, char *arg2) {
    // Definimos las longitudes de las cadenas que utilizaremos
    size_t arg1_length = strlen(arg1);
    size_t arg2_length = strlen(arg2);
    size_t comma_length = strlen(", ");

    // Alocamos memoria para al string resultado
    char *arguments = (char *) malloc(arg1_length + arg2_length + comma_length + 1);

    size_t sum = 0; // Posicionador del puntero arguments para agregar mas strings al final del string resultante.

    // Concatenamos los strings
    memcpy(arguments + sum, arg1, arg1_length);
    sum += arg1_length;
    memcpy(arguments + sum, ", ", comma_length);
    sum += comma_length;
    memcpy(arguments + sum, arg2, arg2_length);

    return arguments;
}

char *format_function(char *functionArguments, char* functionName) {
    char *python_function = (char *) malloc(strlen(functionArguments) + strlen(functionName) + 1000);
    
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

char *format_parameters() {
    char *param_list = (char *) malloc(elements_in_param_queue * 1000);
    param_list[0] = '\0';
    for (int i = 0; i < elements_in_param_queue; i++) {
        strcat(param_list, param_queue[i]);
        strcat(param_list, ", ");
    }
    elements_in_param_queue = 0;
    return param_list;
}

char *format_array() {
    char *param_list = (char *) malloc(elements_in_param_queue * 1000);
    strcat(param_list, "[");
    char *formatted_parameters = format_parameters();
    strcat(param_list, formatted_parameters);
    strcat(param_list, "]");
    elements_in_param_queue = 0;
    printf("Formatted array: %s\n", param_list);
    return param_list;
}

char *format_array_access(char *variable_name, char *number) {
    char *python_variable = format_variable(variable_name);
    variable_name[0] = '\0';
    char *array_access = (char *) malloc(strlen(python_variable) + strlen(number) + 100);
    strcat(array_access, python_variable);
    strcat(array_access, "[");
    strcat(array_access, number);
    strcat(array_access, "]");
    printf("Formatted array access: %s\n", array_access);
    return array_access;
}

char *format_array_push(char *array_variable_name) {
    char *python_variable = format_variable(array_variable_name);
    char *python_array_append = (char *) malloc(strlen(python_variable) + elements_in_param_queue * 1000);
    python_array_append[0] = '\0';
    strcat(python_array_append, python_variable);
    strcat(python_array_append, ".append(");
    strcat(python_array_append, format_parameters());
    strcat(python_array_append, ")");
    return python_array_append;
}

char *format_array_pop(char *array_variable_name) {
    char *python_variable = format_variable(array_variable_name);
    char *python_array_pop = (char *) malloc(strlen(python_variable) + elements_in_param_queue * 1000);
    python_array_pop[0] = '\0';
    strcat(python_array_pop, python_variable);
    strcat(python_array_pop, ".pop(");
    strcat(python_array_pop, format_parameters());
    strcat(python_array_pop, ")");
    return python_array_pop;
}
/*Para formatear: array_sum($array_variable)*/
char *format_array_sum(char *array_variable_name) {
    char *python_variable = format_variable(array_variable_name);
    char *python_array_sum = (char *) malloc(strlen(python_variable) + elements_in_param_queue * 1000);
    python_array_sum[0] = '\0';
    strcat(python_array_sum, "sum(");
    strcat(python_array_sum, python_variable);
    strcat(python_array_sum, format_parameters());
    strcat(python_array_sum, ")");
    return python_array_sum;
}
/*Para formatear: array_sum([1,2,3])*/
char *format_array_sum2() {
    char *python_array_sum = (char *) malloc(elements_in_param_queue * 1000);
    python_array_sum[0] = '\0';
    strcat(python_array_sum, "sum(");
    strcat(python_array_sum, format_parameters());
    strcat(python_array_sum, ")");
    return python_array_sum;
}

char *format_function_call(char *function_name, char *function_arguments){
    // Definimos las longitudes de las cadenas que utilizaremos
    size_t fun_name_length = strlen(function_name);
    size_t fun_args_length = strlen(function_arguments);
    size_t paren1_length = strlen("(");
    size_t paren2_length = strlen(")");

    // Alocamos memoria para el string resultante
    char *python_function_call = (char *) malloc(fun_name_length + fun_args_length + paren1_length + paren2_length + 1);

    size_t sum = 0; // Posicionador del puntero python_function_call para agregar mas strings al final del string
    
    // Concatenamos lo strings
    memcpy(python_function_call + sum, function_name, fun_name_length);
    sum += fun_name_length;
    memcpy(python_function_call + sum, "(", paren1_length);
    sum += paren1_length;
    memcpy(python_function_call + sum, function_arguments, fun_args_length);
    sum += fun_args_length;
    memcpy(python_function_call + sum, ")", paren2_length + 1);

    return python_function_call;
}

char *format_return(char *expr) {
    // Definimos las longitudes de las cadenas que usaremos
    size_t expr_length = strlen(expr);
    size_t return_length = strlen("return ");

    // Alocamos memoria para el string resultante
    char *python_return = (char *) malloc(expr_length + return_length + 1);

    size_t sum = 0; // Posicionador del puntero python_return para concatenar strings

    // Concatenamos los strings
    memcpy(python_return + sum, "return ", return_length);
    sum += return_length;
    memcpy(python_return + sum, expr, expr_length + 1);

    return python_return;
}

char *translate_return(char *expr) {
    // Definimos las longitudes de las cadenas que usaremos
    size_t expr_length = strlen(expr);
    size_t exit_length = strlen("exit(");
    size_t paren_length = strlen(")");

    // Alocamos memoria para el string resultante
    char *python_exit = (char *) malloc(expr_length + exit_length + paren_length + 1);

    size_t sum = 0; // Posicionador del puntero python_exit para concatenar strings

    // Concatenamos los strings
    memcpy(python_exit + sum, "exit(", exit_length);
    sum += exit_length;
    memcpy(python_exit + sum, expr, expr_length);
    sum += expr_length;
    memcpy(python_exit + sum, ")", paren_length + 1);

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
    // Definimos la logitud de las cadenas que utilizaremos
    size_t expr1_length = strlen(expr1);
    size_t expr2_length = strlen(expr2);
    size_t expr3_length = strlen(expr3);
    size_t if_length = strlen(" if ");
    size_t else_length = strlen(" else ");

    // Alocamos memoria suficiente para la expresion
    char *python_ternary = (char *) malloc(expr1_length + expr2_length + expr3_length + if_length + else_length + 1);

    size_t sum = 0; //posicionador del puntero python_ternary poder agregar mas cadenas

    // Concatenamos los strings.
    memcpy(python_ternary + sum, expr2, expr2_length);
    sum += expr2_length;
    memcpy(python_ternary + sum, " if ", if_length);
    sum += if_length;
    memcpy(python_ternary + sum, expr1, expr1_length);
    sum += expr1_length;
    memcpy(python_ternary + sum, " else ", else_length);
    sum += else_length;
    memcpy(python_ternary + sum, expr3, expr3_length + 1);

    return python_ternary;
}
/*Para el foreach de la forma:
$a = array(1, "hola");
foreach($a as $valor) {
    echo $valor;
}
*/
char *format_foreach1(char *arr_var, char *as_var) {
    char *python_foreach1 = (char *) malloc(strlen(arr_var) + strlen(arr_var) + 1000);
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
    char *python_foreach2 = (char *) malloc(strlen(parameters) + strlen(as_var) + 1000);
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
    char *python_for = (char *) malloc(strlen(declaration) + strlen(expr2) + strlen(expr3) + 2*strlen("\n") + strlen("while ") + strlen(":") + 1000);
    python_for[0] = '\0';

    strcat(python_for, declaration);
    strcat(python_for, "\n");
    strcat(python_for, "while ");
    strcat(python_for, expr2);
    strcat(python_for, ":");
    write_statements_in_block(python_for, &statements_in_for_block);
    strcat(python_for, "\n\t");
    strcat(python_for, expr3);

    return python_for;
}

void write_for(char *forpy) {
    printf("Writing for: %s\n", forpy);
    fprintf(output_file, "%s\n", forpy);
}

char *format_pre_increment(char *expr) {
    // Definimos las longitudes de los strings que utilizaremos
    size_t expr_length = strlen(expr);
    size_t paren1_length = strlen("(");
    size_t named_assig_length = strlen(" := ");
    size_t plus_one_length = strlen(" + 1");
    size_t paren2_length = strlen(")");

    // Alocamos memoria para el string resultado
    char *python_pre_increment = (char *) malloc(2*expr_length + paren1_length + named_assig_length + plus_one_length + paren2_length + 1);

    size_t sum = 0; // Posicionador del puntero python_pre_increment para concatenar strings.

    // Concatenamos los strings
    memcpy(python_pre_increment + sum, "(", paren1_length);
    sum += paren1_length;
    memcpy(python_pre_increment + sum, expr, expr_length);
    sum += expr_length;
    memcpy(python_pre_increment + sum, " := ", named_assig_length);
    sum += named_assig_length;
    memcpy(python_pre_increment + sum, expr, expr_length);
    sum += expr_length;
    memcpy(python_pre_increment + sum, " + 1", plus_one_length);
    sum += plus_one_length;
    memcpy(python_pre_increment + sum, ")", paren2_length + 1);

    return python_pre_increment;
}

char *format_post_increment(char *expr) {
    // Definimos las longitudes de los strings que utilizaremos
    size_t expr_length = strlen(expr);
    size_t paren_double_length = strlen("((");
    size_t named_assig_length = strlen(" := ");
    size_t plus_one_length = strlen(" + 1");
    size_t paren_in_length = strlen(")");
    size_t minus_one_length = strlen(" - 1)");

    // Alocamos memoria para el string resultado
    char *python_post_increment = (char *) malloc(2*expr_length + paren_double_length + named_assig_length + plus_one_length + paren_in_length + minus_one_length + 1);

    size_t sum = 0; // Posicionador del puntero python_post_increment para concatenar strings.

    // Concatenamos los strings
    memcpy(python_post_increment + sum, "((", paren_double_length);
    sum += paren_double_length;
    memcpy(python_post_increment + sum, expr, expr_length);
    sum += expr_length;
    memcpy(python_post_increment + sum, " := ", named_assig_length);
    sum += named_assig_length;
    memcpy(python_post_increment + sum, expr, expr_length);
    sum += expr_length;
    memcpy(python_post_increment + sum, " + 1", plus_one_length);
    sum += plus_one_length;
    memcpy(python_post_increment + sum, ")", paren_in_length);
    sum += paren_in_length;
    memcpy(python_post_increment + sum, " - 1)", minus_one_length + 1);

    return python_post_increment;
}

char *format_pre_decrement(char *expr) {
    // Definimos las longitudes de los strings que utilizaremos
    size_t expr_length = strlen(expr);
    size_t paren1_length = strlen("(");
    size_t named_assig_length = strlen(" := ");
    size_t minus_one_length = strlen(" - 1");
    size_t paren2_length = strlen(")");

    // Alocamos memoria para el string resultado
    char *python_pre_decrement = (char *) malloc(2*expr_length + paren1_length + named_assig_length + minus_one_length + paren2_length + 1);

    size_t sum = 0; // Posicionador del puntero python_pre_decrement para concatenar strings.

    // Concatenamos los strings
    memcpy(python_pre_decrement + sum, "(", paren1_length);
    sum += paren1_length;
    memcpy(python_pre_decrement + sum, expr, expr_length);
    sum += expr_length;
    memcpy(python_pre_decrement + sum, " := ", named_assig_length);
    sum += named_assig_length;
    memcpy(python_pre_decrement + sum, expr, expr_length);
    sum += expr_length;
    memcpy(python_pre_decrement + sum, " - 1", minus_one_length);
    sum += minus_one_length;
    memcpy(python_pre_decrement + sum, ")", paren2_length + 1);
    return python_pre_decrement;
}

char *format_post_decrement(char *expr) {
    // Definimos las longitudes de los strings que utilizaremos
    size_t expr_length = strlen(expr);
    size_t paren_double_length = strlen("((");
    size_t named_assig_length = strlen(" := ");
    size_t minus_one_length = strlen(" - 1");
    size_t paren_in_length = strlen(")");
    size_t plus_one_length = strlen(" + 1)");

    // Alocamos memoria para el string resultado
    char *python_post_decrement = (char *) malloc(2*expr_length + paren_double_length + named_assig_length + minus_one_length + paren_in_length + plus_one_length + 1);

    size_t sum = 0; // Posicionador del puntero python_post_decrement para concatenar strings.

    // Concatenamos los strings
    memcpy(python_post_decrement + sum, "((", paren_double_length);
    sum += paren_double_length;
    memcpy(python_post_decrement + sum, expr, expr_length);
    sum += expr_length;
    memcpy(python_post_decrement + sum, " := ", named_assig_length);
    sum += named_assig_length;
    memcpy(python_post_decrement + sum, expr, expr_length);
    sum += expr_length;
    memcpy(python_post_decrement + sum, " - 1", minus_one_length);
    sum += minus_one_length;
    memcpy(python_post_decrement + sum, ")", paren_in_length);
    sum += paren_in_length;
    memcpy(python_post_decrement + sum, " + 1)", plus_one_length + 1);

    return python_post_decrement;
}  

char *format_anonymous_function(char *arguments, char *line) {
    // Definimos las longitudes de los strings que utilizaremos
    size_t arguments_length = strlen(arguments);
    size_t line_length = strlen(line);
    size_t lambda_length = strlen("lambda ");
    size_t colon_length = strlen(" : ");

    // Alocamos memoria para el string resultado
    char *python_lambda_function = (char *) malloc(arguments_length + lambda_length + colon_length + line_length);

    size_t sum = 0; // Posicionador del puntero python_lambda_function para concatenar strings.

    // Concatenamos los strings
    memcpy(python_lambda_function + sum, "lambda ", lambda_length);
    sum += lambda_length;
    memcpy(python_lambda_function + sum, arguments, arguments_length);
    sum += arguments_length;
    memcpy(python_lambda_function + sum, " : ", colon_length);
    sum += colon_length;
    memcpy(python_lambda_function + sum, line, line_length + 1);
    printf("fun %s, longitud: %i\n", python_lambda_function, (int)strlen(python_lambda_function));

    return python_lambda_function;
}

char *format_int_cast(char *expr) {
    // Definimos las longitudes de las cadenas a utilizar
    size_t expr_length = strlen(expr);
    size_t int_paren1_length = strlen("int(");
    size_t paren2_length = strlen(")");

    // Alocamos memoria para el string resulado
    char *python_int_cast = (char *) malloc(expr_length + int_paren1_length + paren2_length + 1);

    size_t sum = 0; //Posicionador del puntero python_int_cast para concatenar strings

    // Concatenamos strings
    memcpy(python_int_cast + sum, "int(", int_paren1_length);
    sum += int_paren1_length;
    memcpy(python_int_cast + sum, expr, expr_length);
    sum += expr_length;
    memcpy(python_int_cast + sum, ")", paren2_length);

    return python_int_cast;
}

char *format_float_cast(char *expr) {
    // Definimos las longitudes de las cadenas a utilizar
    size_t expr_length = strlen(expr);
    size_t float_paren1_length = strlen("float(");
    size_t paren2_length = strlen(")");

    // Alocamos memoria para el string resulado
    char *python_float_cast = (char *) malloc(expr_length + float_paren1_length + paren2_length + 1);

    size_t sum = 0; //Posicionador del puntero python_float_cast para concatenar strings

    // Concatenamos strings
    memcpy(python_float_cast + sum, "float(", float_paren1_length);
    sum += float_paren1_length;
    memcpy(python_float_cast + sum, expr, expr_length);
    sum += expr_length;
    memcpy(python_float_cast + sum, ")", paren2_length);

    return python_float_cast;
}

char *format_bool_cast(char *expr) {
    // Definimos las longitudes de las cadenas a utilizar
    size_t expr_length = strlen(expr);
    size_t bool_paren1_length = strlen("bool(");
    size_t paren2_length = strlen(")");

    // Alocamos memoria para el string resulado
    char *python_bool_cast = (char *) malloc(expr_length + bool_paren1_length + paren2_length + 1);

    size_t sum = 0; //Posicionador del puntero python_bool_cast para concatenar strings

    // Concatenamos strings
    memcpy(python_bool_cast + sum, "bool(", bool_paren1_length);
    sum += bool_paren1_length;
    memcpy(python_bool_cast + sum, expr, expr_length);
    sum += expr_length;
    memcpy(python_bool_cast + sum, ")", paren2_length);

    return python_bool_cast;
}

char *format_string_cast(char *expr) {
    // Definimos las longitudes de las cadenas a utilizar
    size_t expr_length = strlen(expr);
    size_t string_paren1_length = strlen("str(");
    size_t paren2_length = strlen(")");

    // Alocamos memoria para el string resulado
    char *python_string_cast = (char *) malloc(expr_length + string_paren1_length + paren2_length + 1);

    size_t sum = 0; //Posicionador del puntero python_string_cast para concatenar strings

    // Concatenamos strings
    memcpy(python_string_cast + sum, "str(", string_paren1_length);
    sum += string_paren1_length;
    memcpy(python_string_cast + sum, expr, expr_length);
    sum += expr_length;
    memcpy(python_string_cast + sum, ")", paren2_length);

    return python_string_cast;
}

char *format_array_cast(char *expr) {
    // Definimos las longitudes de las cadenas a utilizar
    size_t expr_length = strlen(expr);
    size_t array_paren1_length = strlen("list(");
    size_t paren2_length = strlen(")");

    // Alocamos memoria para el string resulado
    char *python_array_cast = (char *) malloc(expr_length + array_paren1_length + paren2_length + 1);

    size_t sum = 0; //Posicionador del puntero python_array_cast para concatenar strings

    // Concatenamos strings
    memcpy(python_array_cast + sum, "list(", array_paren1_length);
    sum += array_paren1_length;
    memcpy(python_array_cast + sum, expr, expr_length);
    sum += expr_length;
    memcpy(python_array_cast + sum, ")", paren2_length);

    return python_array_cast;
}
