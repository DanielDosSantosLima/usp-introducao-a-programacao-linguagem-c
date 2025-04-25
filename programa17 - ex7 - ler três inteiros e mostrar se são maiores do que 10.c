#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar conectivos lógicos: E (&&), OU(||)");
    printf("Tarefa: crie um programa que leia 3 números inteiros e imprima na tela se os 3 são maiores do que 10.");

    int numero1, numero2, numero3;

    printf("\nDigite o 1º número: ");
    scanf("%d", &numero1);

    printf("\nDigite o 2º número: ");
    scanf("%d", &numero2);

    printf("\nDigite o 3º número: ");
    scanf("%d", &numero3);

    if (numero1 > 10 && numero2 > 10 && numero3 > 10) {
        printf("Os três números são maiores do que 10.");
    } else{
        printf("Pelo menos um dos números não é maior do que 10.");
    }

    return 0;
}



