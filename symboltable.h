#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define VAR 0
#define FUN 1

// Definicion de la tabla de simbolos

/*Nodo en la lista enlazada de lineas donde un simbolo fue utilizado*/
typedef struct line_node {
    int line;
    struct Line_node* next;
} line_of_usage;

/*Nodo en la lista enlazada que representa la tabla de simbolos*/
typedef struct symbol_node {
    char *name; /*Nombre del simbolo*/
    int type; /*Tipo del simbolo*/
    int size; /*Tamanho del simbolo*/
    int obligatory_argument_counter;
    int optional_argument_counter;
    int dimension; /*Tipos de datos basicos = 0, vectores = 1, matrices = 2, y asi ...*/
    unsigned int line_of_declaration; /*Donde el simbolo fue declarado*/
    line_of_usage *lines_of_usage; /*En que lines se utilizo el simbolo*/
    void *address; /*Direccion en memoria del simbolo*/
    unsigned int scope; /*mientras mas grande el valor, mas reducido el scope "menos global"*/
    struct symbol_node *next; /*Siguiente nodo de la lista*/
} symbol;

symbol* symbol_table = NULL;

// Operaciones de la tabla de simbolos
void print_symbols() {
    symbol *temp = symbol_table;
    printf("Elements in symbol table: ");
    while (temp != NULL) {
        if (temp->type == VAR) {
            printf("%s (%s, array: %s) -> ", temp->name, "VAR", temp->dimension == 1 ? "Yes" : "No");
        }
        else {
            printf("%s (%s, obligatory arguments: %d, optional_arguments: %d) -> ", temp->name, temp->type == VAR ? "VAR" : "FUN", temp->obligatory_argument_counter, temp->optional_argument_counter);
        } 
        temp = temp->next;
    }
}

symbol *put_symbol(char const *name, int type, int obligatory_arguments_counter, int optional_arguments_counter, int is_array) {
    symbol *sym = (symbol *) malloc(sizeof(symbol));
    sym->name = strdup(name);
    sym->type = type;
    sym->obligatory_argument_counter = obligatory_arguments_counter;
    sym->optional_argument_counter = optional_arguments_counter;
    sym->dimension = is_array;
    sym->next = symbol_table;
    symbol_table = sym;
    print_symbols();
    return sym;
}

symbol *get_symbol(char const *name) {
    for (symbol *s = symbol_table; s; s = s->next) {
        if (strcmp(s->name, name) == 0) {
            return s;
        }
    }
    return NULL;
}

int is_argument_count_correct(char *function_name, char *arguments) {
    /*
        Verifica si la cantidad de argumentos durante la llamada de una funcion es correcta.
        Se considera que una llamada es incorrecta si tiene menos argumentos que la cantidad de argumentos opcionales o 
        es mayor que la suma de argumentos opcionales y obligatorios.

        Retorna 0 si el checkeo falla o 1 si la llamada es correcta.
    */
    char *ptr = arguments;
    symbol *entry = get_symbol(function_name);
    int argument_count = 0;
    if (strlen(arguments) > 0) {
        // Existe por lo menos un argumento. Buscar si hay mas separados por comas.
        argument_count++;
        while ((ptr = strchr(ptr, ',')) != NULL) {
            argument_count++;
            ptr++;
        }
        printf("Argument count in function call: %d, obligatory: %d, optional: %d\n", argument_count, entry->obligatory_argument_counter, entry->optional_argument_counter);
        
    }
    if (argument_count > (entry->obligatory_argument_counter + entry->optional_argument_counter) ||
        argument_count < entry->optional_argument_counter) {
        return 0;
    }
    return 1;
}

int is_array_variable(char *variable_name) {
    printf("Variable %s\n", variable_name);
    symbol *entry = get_symbol(variable_name);
    printf("Variable %s %d\n", entry->name, entry->dimension);
    return entry->dimension;
}