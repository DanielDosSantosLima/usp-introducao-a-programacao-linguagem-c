#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar vetores!\n");
    printf("Tarefa: crie um algoritmo que leia 3 valores para um vetor de 3 posi��es e depois calcule a m�dia dos valores acessando o vetor.");

    float vetorFloat[3];

    //Usu�rio inserindo valores no vetor
    printf("\nDigite tr�s n�meros para o VetorFloat:\n");
    int i = 0;
    for (i = 0; i < 3; i++){
        scanf("%f", &vetorFloat[i]);
    }

    //Imprimindo os valores do vetor inseridos
    printf("\nVoc� digitou os seguintes valores para o VetorFloat:\n");
    for (i = 0; i < 3; i++){
        printf("%.1f - ", vetorFloat[i]);
    }

    //C�lculo da m�dia entre esses valores
    float soma = 0;
    for (i = 0; i < 3; i++){
        soma += vetorFloat[i];
    }
    printf("\nA soma entre esses valores �: %.1f", soma);
    printf("\nA m�dia entre esses valores �: %.1f / 3 = %.1f", soma, soma/3);



    return 0;
}
