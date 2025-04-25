#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar condicionais: if");
    printf("Tarefa: crie um programa que leia dois números inteiros e imprima na tela qual é o maior deles ou se são iguais");

    int numero1, numero2;

    printf("\nDigite o 1º número: ");
    scanf("%d", &numero1);

    printf("Digite o 2º número: ");
    scanf("%d", &numero2);

    if (numero1 > numero2){
        printf("O 1º número é maior que o 2º.");
    } else if (numero1 == numero2){
        printf("Os números são iguais.");
    } else{
        printf("O 2º número é maior que o 1º.");
    }

    return 0;
}


