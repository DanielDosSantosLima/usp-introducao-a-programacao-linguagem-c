#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar for!\n");

    int i = 0;

    for(i = 10; i > 0; i--){

        printf("%d \n", i);

        /*Quando chega aqui, o c�digo volta para
        a linha 12 e verifica se a condi��o
        i > 10 continua verdadeira, para
        executar o la�o novamente ou sair */
    }


    return 0;
}


