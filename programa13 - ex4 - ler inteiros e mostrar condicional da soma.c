#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar condicionais: if");
    printf("Tarefa: crie um programa que leia dois n�meros inteiros e imprima na tela se a soma deles � maior, igual ou menor que 10");

    int numero1, numero2, soma;

    printf("\nDigite o 1� n�mero: ");
    scanf("%d", &numero1);

    printf("Digite o 2� n�mero: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    if (soma > 10){
        printf("A soma � maior do que 10.");
    } else if (soma == 10){
        printf("A soma � igual a 10.");
    } else{
        printf("A soma � menor do que 10");
    }

    return 0;
}

