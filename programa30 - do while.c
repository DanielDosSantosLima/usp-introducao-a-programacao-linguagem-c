#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar do while!");

    int i = 10;

    do{
        printf("\nVai ser executado ao menos uma vez.");
        printf("\nMesmo que a condi��o seja falsa.");
    } while ( i < 5);

    //do while � usado para executar o c�digo ao menos uma vez
    return 0;
}
