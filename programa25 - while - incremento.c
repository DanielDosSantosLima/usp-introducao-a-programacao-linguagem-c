#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar while: \n");

    int i = 0;

    while (i <= 10){

        //Imprime e pula uma linha
        printf("%d \n", i);

        //Aumenta em 1 o valor do i atual
        i = i + 1;

        /*Aqui o código volta para a linha 12 e verifica
        se a condição i<=10 continua verdadeira, para
        executar o laço novamente ou sair */
    }

    return 0;
}
