#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar while!");
    printf("Tarefa: crie um programa que imprima os pares de 10 at� o n�mero informado pelo usu�rio \n");

    int i = 10;
    int maximo;

    printf("\nDigite um valor m�ximo: ");
    scanf("%d", &maximo);

    while (i <= maximo){

        if ( i % 2 == 0){
            printf("%d \n", i);
        }
        i = i + 1;

       /* OU printf("%d \n", i);
        i = i + 2;  (sem precisar do if) */
    }

    return 0;
}

