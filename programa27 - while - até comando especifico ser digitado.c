#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar while - digita��o de comando espec�fico:\n");

    int i = 0;

    while( i != 10){

        printf("Digite 10: \n");
        scanf("%d", &i);
    }

    printf("Fim!");

    return 0;
}
