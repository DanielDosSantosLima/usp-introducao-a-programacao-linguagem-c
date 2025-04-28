#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAMANHO 10

int main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar constantes!");
    printf("\nTarefa: contar até 10");

    printf("\nImprimindo o tamanho da constante: %d\n", TAMANHO);

    printf("Contar até 10:\n");

    int i = 0;
    for (i = 1; i <= TAMANHO; i++){
        printf("%d\n", i);
    }

    return 0;
}
