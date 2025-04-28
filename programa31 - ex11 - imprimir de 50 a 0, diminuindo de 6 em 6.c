#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar while!");
    printf("Tarefa: crie um programa que imprima de 50 até 0, diminuindo de 6 em 6 \n");

    int i = 50;

    while (i > -1){
        printf("%d \n", i);
        i = i - 6;
    }

    return 0;
}
