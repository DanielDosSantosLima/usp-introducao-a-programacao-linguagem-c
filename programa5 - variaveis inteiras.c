#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    printf("Programa para trabalhar variaveis inteiras\n\n");
    setlocale(LC_ALL,"");

    //Definindo variável
    int a = 5;
    printf("%d", a);

    //Trabalhando concatenação
    printf("\nO valor da variável a é: %d", a);
    int b = 4;
    int c = 3;
    printf("\nO valor das variáveis a, b e c é: %d, %d, e %d.", a, b, c);

    a = 15;
    printf("\nO novo valor de a é: %d", a);

    int d = 2, e;
    printf("\nEntre com um valor para e:");
    scanf("%d", &e);
    printf("O valor de e é: %d", e);
}
