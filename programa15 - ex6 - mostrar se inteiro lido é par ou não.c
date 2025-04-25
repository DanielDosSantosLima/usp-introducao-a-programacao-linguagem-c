#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar condicionais: if");
    printf("Tarefa: crie um programa que leia um número inteiro e mostre se ele é par ou não");

    int numero1;

    printf("\nDigite o número: ");
    scanf("%d", &numero1);

    if (numero1 % 2 == 0){
        printf("O número é par.");
    } else{
        printf("O número é ímpar.");
    }

    return 0;
}



