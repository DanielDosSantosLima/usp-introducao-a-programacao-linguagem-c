#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar condicionais: if");
    printf("Tarefa: crie um programa que leia um n�mero inteiro e mostre se ele � par ou n�o");

    int numero1;

    printf("\nDigite o n�mero: ");
    scanf("%d", &numero1);

    if (numero1 % 2 == 0){
        printf("O n�mero � par.");
    } else{
        printf("O n�mero � �mpar.");
    }

    return 0;
}



