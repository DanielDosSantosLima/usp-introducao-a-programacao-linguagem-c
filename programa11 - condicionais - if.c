#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar condicionais: if");
    printf("Tarefa: programa que exibe se pessoa � maior ou menor de idade");

    int idade;

    printf("\nDigite a idade da pessoa:");
    scanf("%d", &idade);

    if (idade >= 18){
        printf("\nA pessoa � maior de idade.");
    } else{
        printf("\nA pessoa � menor de idade.");
    }

    return 0;
}
