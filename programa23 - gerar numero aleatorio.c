#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){

    setlocale(LC_ALL,"");
    printf("Programa para gerar n�mero aleat�rio");

    //Usa o tempo atual como semente
    srand(time(NULL));

    //Cria um n�mero aleat�rio de 0 a 9
    int r = rand( ) % 10;

    //Imprime o n�mero gerado
    printf("\nN�mero gerado: %d", r);

    return 0;
}
