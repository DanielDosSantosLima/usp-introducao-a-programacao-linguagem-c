#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar condicionais: if");
    printf("Tarefa: crie um programa que leia dois n�meros inteiros e imprima na tela qual � o maior deles ou se s�o iguais");

    int numero1, numero2;

    printf("\nDigite o 1� n�mero: ");
    scanf("%d", &numero1);

    printf("Digite o 2� n�mero: ");
    scanf("%d", &numero2);

    if (numero1 > numero2){
        printf("O 1� n�mero � maior que o 2�.");
    } else if (numero1 == numero2){
        printf("Os n�meros s�o iguais.");
    } else{
        printf("O 2� n�mero � maior que o 1�.");
    }

    return 0;
}


