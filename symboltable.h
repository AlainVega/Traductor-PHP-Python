#include <stdio.h>
#include <stdlib.h>

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
    int dimension; /*Tipos de datos basicos = 0, vectores = 1, matrices = 2, y asi ...*/
    unsigned int line_of_declaration; /*Donde el simbolo fue declarado*/
    line_of_usage *lines_of_usage; /*En que lines se utilizo el simbolo*/
    void *address; /*Direccion en memoria del simbolo*/
    unsigned int scope; /*mientras mas grande el valor, mas reducido el scope "menos global"*/
    struct symbol_node *next; /*Siguiente nodo de la lista*/
} symbol;

symbol* symbol_table = NULL; 

// Operaciones de la tabla de simbolos
