#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");
    printf("Programa para ler inteiros, multiplicar e armazenar");
    printf("\nTarefa: Crie um algoritmo que leia 3 n�meros inteiros de uma s� vez e coloque o resultado da multiplica��o entre os 3 em uma vari�vel pr�pria, depois exiba essa vari�vel.");

    int numero1, numero2, numero3;
    int multiplicacao;

    printf("\nDigite 3 n�meros a serem multiplicados, teclando 'enter' entre eles:");
    scanf("%d %d %d", &numero1, &numero2, &numero3);
    printf("Voc� digitou os n�meros: %d, %d e %d.", numero1, numero2, numero3);

    multiplicacao = numero1 * numero2 * numero3;
    printf("\nA multiplicacao entre esses tr�s n�meros �: %d * %d * %d = %d.", numero1, numero2, numero3, multiplicacao);

    return 0;
}
