#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar for!\n");
    printf("Tarefa: crie um programa que mostre a soma de todos os n�meros de 0 a 10, adicionando o valor atual de i numa vari�vel soma, a cada repeti��o do la�o for\n");

    int i = 0;
    int soma = 0;

    for(i = 0; i <= 10; i++){
        printf("+ %d \n", i);
        printf("%d \n", soma = soma + i);

    }


    return 0;
}


