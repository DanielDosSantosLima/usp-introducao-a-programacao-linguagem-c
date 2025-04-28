#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar for!\n");

    int i = 0;

    for(i = 10; i > 0; i--){

        printf("%d \n", i);

        /*Quando chega aqui, o código volta para
        a linha 12 e verifica se a condição
        i > 10 continua verdadeira, para
        executar o laço novamente ou sair */
    }


    return 0;
}


