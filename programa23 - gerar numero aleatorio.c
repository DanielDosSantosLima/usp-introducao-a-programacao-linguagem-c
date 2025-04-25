#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){

    setlocale(LC_ALL,"");
    printf("Programa para gerar número aleatório");

    //Usa o tempo atual como semente
    srand(time(NULL));

    //Cria um número aleatório de 0 a 9
    int r = rand( ) % 10;

    //Imprime o número gerado
    printf("\nNúmero gerado: %d", r);

    return 0;
}
