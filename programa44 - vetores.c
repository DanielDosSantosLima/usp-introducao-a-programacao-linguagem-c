#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAMANHO 2 // constante para vetor de char

int main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar vetores!\n");

    //Criando vetores
    int vetorInteiros[] = {1,2,3,4}; //tamanho 4
    float vetorFloat[] = {1.5,2.2,3.0}; //tamanho 3
    char vetorChar[] = {'a','b'}; // tamanho 2

    //Modificando valores
    vetorInteiros[3] = 9;
    vetorFloat[1] = 0.8;
    vetorChar[0] = 'l';

    //Modificando valores com uma variável
    int novoValor = 7;
    vetorInteiros [0] = novoValor;

    //Modificando com inserção de valores do usuário
    printf("Digite uma letra nova:\n");
    scanf(" %c", &vetorChar[1]);

    //Imprimindo vetores
    printf("\nVetor de Inteiros:\n");
    int i = 0;
    for (i = 0; i < 4; i++){
        printf("%d - ", vetorInteiros[i]);
    }

    printf("\nVetor de Float:\n");
    for (i = 0; i < 3; i++){
        printf("%.1f - ", vetorFloat[i]);
    }

    printf("\nVetor de Char:\n");
    for (i = 0; i < TAMANHO; i++){
        printf(" %c - ", vetorChar[i]);
    }

    //Lendo valores para todo o vetor
    printf("\nDigite Inteiros \n");
    for (i = 0; i < 4; i++){
        printf("Lendo em vetor[%d]:", i);
        scanf("%d", &vetorInteiros[i]);
    }

    //Imprimindo este vetor atualizado
    for (i = 0; i < 4; i++){
        printf("%d - ", vetorInteiros[i]);
    }

    return 0;
}
