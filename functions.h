#include <stdio.h>

FILE *output_file;

void create_output_file() {
    output_file = fopen("output_file.py", "w");
}

char *create_declaration_string(char *declaration, char *expr) {
    
}