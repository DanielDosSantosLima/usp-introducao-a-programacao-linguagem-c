#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar constantes!");
    printf("\nTarefa: crie um algoritmo que imprima os n�meros de 10 at� 0 de forma regressiva, de tr�s jeitos: while, do while e for");
    printf("Usando FOR:\n");

    int i = 10;

    for(i = 10; i >= 0; i--){
        printf("%d\n", i);
    }

    return 0;
}
