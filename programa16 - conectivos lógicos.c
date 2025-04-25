#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar onectivos lógicos: E (&&), OU(||)");
    printf("Tarefa: crie um programa que leia um número inteiro e imprima na tela se ele está entre 0 e 10");

    int numero1;

    printf("\nDigite o número: ");
    scanf("%d", &numero1);

    if (numero1 > 0 && numero1 < 10) {
        printf("O número está entre 0 e 10.");
    } else{
        printf("O número não está entre 0 e 10.");
    }

    return 0;
}



