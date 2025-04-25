#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar condicionais: if");
    printf("Tarefa: crie um programa que leia dois números inteiros e imprima na tela se a soma deles é maior, igual ou menor que 10");

    int numero1, numero2, soma;

    printf("\nDigite o 1º número: ");
    scanf("%d", &numero1);

    printf("Digite o 2º número: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    if (soma > 10){
        printf("A soma é maior do que 10.");
    } else if (soma == 10){
        printf("A soma é igual a 10.");
    } else{
        printf("A soma é menor do que 10");
    }

    return 0;
}

