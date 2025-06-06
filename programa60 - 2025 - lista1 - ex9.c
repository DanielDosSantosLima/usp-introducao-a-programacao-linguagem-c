#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Tamanhos em bytes dos tipos básicos em C:\n");
    printf("-----------------------------------------\n");
    printf("char: %zu byte(s)\n", sizeof(char));
    printf("int: %zu byte(s)\n", sizeof(int));
    printf("float: %zu byte(s)\n", sizeof(float));
    printf("double: %zu byte(s)\n", sizeof(double));
    printf("short int: %zu byte(s)\n", sizeof(short int));
    printf("long int: %zu byte(s)\n", sizeof(long int));

    return 0;
}
