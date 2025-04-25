#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar condicionais: if");
    printf("Tarefa: programa que exibe se pessoa é maior ou menor de idade");

    int idade;

    printf("\nDigite a idade da pessoa:");
    scanf("%d", &idade);

    if (idade <= 17){
        printf("A pessoa é menor de idade.");
    } else if (idade == 18){
        printf("Precisa fazer o alistamento militar.");
    } else {
        printf("A pessoa é maior de idade.");
    }

    return 0;
}
