#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar do while!");

    int i = 10;

    do{
        printf("\nVai ser executado ao menos uma vez.");
        printf("\nMesmo que a condição seja falsa.");
    } while ( i < 5);

    //do while é usado para executar o código ao menos uma vez
    return 0;
}
