#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar laços!");
    printf("\nTarefa: crie um algoritmo que imprima os números pares de 10 a 20!\n");

    int i = 0;

    for(i = 10; i <= 20; i = i + 2){
        if (i % 2 == 0){
            printf("%d\n", i);
        }
    }

    return 0;
}
