#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar while - decremento:\n");

    int i = 10;

    while( i > -1){

        printf("%d \n", i);
        i -= 1; //ou i = i - 1;
    }

    return 0;
}
