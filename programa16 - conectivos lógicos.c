#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar onectivos l�gicos: E (&&), OU(||)");
    printf("Tarefa: crie um programa que leia um n�mero inteiro e imprima na tela se ele est� entre 0 e 10");

    int numero1;

    printf("\nDigite o n�mero: ");
    scanf("%d", &numero1);

    if (numero1 > 0 && numero1 < 10) {
        printf("O n�mero est� entre 0 e 10.");
    } else{
        printf("O n�mero n�o est� entre 0 e 10.");
    }

    return 0;
}



