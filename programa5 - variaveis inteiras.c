#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    printf("Programa para trabalhar variaveis inteiras\n\n");
    setlocale(LC_ALL,"");

    //Definindo vari�vel
    int a = 5;
    printf("%d", a);

    //Trabalhando concatena��o
    printf("\nO valor da vari�vel a �: %d", a);
    int b = 4;
    int c = 3;
    printf("\nO valor das vari�veis a, b e c �: %d, %d, e %d.", a, b, c);

    a = 15;
    printf("\nO novo valor de a �: %d", a);

    int d = 2, e;
    printf("\nEntre com um valor para e:");
    scanf("%d", &e);
    printf("O valor de e �: %d", e);
}
