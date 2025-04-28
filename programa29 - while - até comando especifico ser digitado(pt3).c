#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar while - digitação de comando específico:\n");

    int a = 0;
    int b = 0;

    while((a < 10) || (b < 10)){

        printf("\nDigite dois valores maiores ou iguais a 10.");
        printf("\nDigite um valor para a: \n");
        scanf("%d", &a);

        printf("\nDigite um valor para b: \n");
        scanf("%d", &b);
    }

    printf("Fim!");

    return 0;
}

