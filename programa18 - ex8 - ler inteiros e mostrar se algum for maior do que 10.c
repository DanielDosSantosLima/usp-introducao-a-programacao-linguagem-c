#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar conectivos l�gicos: E (&&), OU(||)");
    printf("Tarefa: crie um programa que leia 2 n�meros inteiros e mostrar se algum deles for maior do que 10.");

    int numero1, numero2;

    printf("\nDigite o 1� n�mero: ");
    scanf("%d", &numero1);

    printf("\nDigite o 2� n�mero: ");
    scanf("%d", &numero2);

    if (numero1 > 10 || numero2 > 10) {
        printf("Pelo menos um dos n�meros � maior do que 10.");
    } else{
        printf("Nenhum dos n�meros � maior do que 10.");
    }

    return 0;
}




