#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar conectivos l�gicos: E (&&), OU(||)");
    printf("Tarefa: crie um programa que leia 3 n�meros inteiros e imprima na tela se os 3 s�o maiores do que 10.");

    int numero1, numero2, numero3;

    printf("\nDigite o 1� n�mero: ");
    scanf("%d", &numero1);

    printf("\nDigite o 2� n�mero: ");
    scanf("%d", &numero2);

    printf("\nDigite o 3� n�mero: ");
    scanf("%d", &numero3);

    if (numero1 > 10 && numero2 > 10 && numero3 > 10) {
        printf("Os tr�s n�meros s�o maiores do que 10.");
    } else{
        printf("Pelo menos um dos n�meros n�o � maior do que 10.");
    }

    return 0;
}



