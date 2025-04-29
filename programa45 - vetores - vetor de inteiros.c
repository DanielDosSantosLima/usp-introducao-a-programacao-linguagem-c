#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar vetores!\n");
    printf("Trabalhando vetor de inteiros");

    //Criando vetores
    int vetorInteiros1[] = {1,2,3,4,5,6,7,8,9,10}; //tamanho 11
    int vetorInteiros2[4] = {55,66,77,88}; //tamanho 4

    //Modificando valores
    vetorInteiros1[0] = 0;

    //Modificando valores com uma variável
    int novoValor1 = 8;
    vetorInteiros1[1] = novoValor1;
    int novoValor2 = 44;
    vetorInteiros2[1] = novoValor2;

    //Modificando com inserção de valores do usuário
    printf("\nDigite um novo número para o VetorInteiros1:\n");
    scanf("%d", &vetorInteiros1[2]);

    //Imprimindo vetores
    printf("\nVetor de Inteiros1:\n");
    int i = 0;
    for (i = 0; i < 10; i++){
        printf("%d - ", vetorInteiros1[i]);
    }

    printf("\nVetor de Inteiros2:\n");
    for (i = 0; i < 4; i++){
        printf("%d - ", vetorInteiros2[i]);
    }

    //Lendo valores para todo o vetor
    printf("\nDigite Inteiros para o VetorInteiros2 \n");
    for (i = 0; i < 4; i++){
        printf("\nLendo em vetor[%d]:", i);
        scanf("%d", &vetorInteiros2[i]);
    }

    //Imprimindo este vetor atualizado
    for (i = 0; i < 4; i++){
        printf("%d - ", vetorInteiros2[i]);
    }

    return 0;
}
