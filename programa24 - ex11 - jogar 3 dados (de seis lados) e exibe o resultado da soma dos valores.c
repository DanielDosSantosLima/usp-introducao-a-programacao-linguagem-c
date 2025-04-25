#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar números aleatórios");
    printf("\nTarefa: crie um programa que jogue 3 dados (de seis lados) aleatórios e exiba o resultado da soma desses 3 valores gerados na tela");

    //Usa o tempo atual como semente
    srand(time(NULL));

    //Cria números aleatórios de 0 a 6
    printf("\nDado 1:");
    int dado1 = (rand( ) % 6)+1;
    printf("\nNúmero gerado: %d", dado1);

    printf("\nDado 2:");
    int dado2 = (rand( ) % 6)+1;
    printf("\nNúmero gerado: %d", dado2);

    printf("\nDado 3:");
    int dado3 = (rand( ) % 6)+1;
    printf("\nNúmero gerado: %d", dado3);

    //Soma os resultados gerados
    int resultado = dado1 + dado2 + dado3;
    printf("\nSoma dos valores gerados: %d + %d + %d = %d", dado1, dado2, dado3, resultado);

    return 0;
}
