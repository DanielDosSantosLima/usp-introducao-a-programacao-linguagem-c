#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar vetores!\n");
    printf("Tarefa: crie um algoritmo que leia 3 valores para um vetor de 3 posições e depois calcule a média dos valores acessando o vetor.");

    float vetorFloat[3];

    //Usuário inserindo valores no vetor
    printf("\nDigite três números para o VetorFloat:\n");
    int i = 0;
    for (i = 0; i < 3; i++){
        scanf("%f", &vetorFloat[i]);
    }

    //Imprimindo os valores do vetor inseridos
    printf("\nVocê digitou os seguintes valores para o VetorFloat:\n");
    for (i = 0; i < 3; i++){
        printf("%.1f - ", vetorFloat[i]);
    }

    //Cálculo da média entre esses valores
    float soma = 0;
    for (i = 0; i < 3; i++){
        soma += vetorFloat[i];
    }
    printf("\nA soma entre esses valores é: %.1f", soma);
    printf("\nA média entre esses valores é: %.1f / 3 = %.1f", soma, soma/3);



    return 0;
}
