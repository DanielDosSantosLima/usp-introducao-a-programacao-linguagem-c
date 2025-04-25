#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");
    printf("Programa para ler inteiros, multiplicar e armazenar");
    printf("\nTarefa: Crie um algoritmo que leia 3 números inteiros de uma só vez e coloque o resultado da multiplicação entre os 3 em uma variável própria, depois exiba essa variável.");

    int numero1, numero2, numero3;
    int multiplicacao;

    printf("\nDigite 3 números a serem multiplicados, teclando 'enter' entre eles:");
    scanf("%d %d %d", &numero1, &numero2, &numero3);
    printf("Você digitou os números: %d, %d e %d.", numero1, numero2, numero3);

    multiplicacao = numero1 * numero2 * numero3;
    printf("\nA multiplicacao entre esses três números é: %d * %d * %d = %d.", numero1, numero2, numero3, multiplicacao);

    return 0;
}
