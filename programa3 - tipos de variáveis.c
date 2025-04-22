#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    // Programa para trabalhar variáveis
    setlocale(LC_ALL,"");

    printf("Trabalhando com inteiros!\n \n");
    int a = 3;
    int b = 6;
    //imprimir
    printf("Os valores de a e b são: %d e %d.", a, b);
    printf("\nA soma dos valores é: %d + %d = %d.", a, b, a+b);
    printf("\nEntre com um novo valor para a:");
    //ler
    scanf("%d", &a);
    //imprimir
    printf("O novo valor de a é: %d.", a);
    printf("\nA nova soma dos valores é: %d + %d = %d.", a, b, a+b);

    printf("\n\nTrabalhando com decimais!\n");
    float c = 5.5;
    float d = 4.9;
    //imprimir
    printf("\nO valor de c é: %f.", c);
    printf("\nO valor de d é: %f.", d);
    printf("\nA soma dos valores é: %f + %f = %f.", c, d, c+d);
    printf("\nEntre com um novo valor para d:");
    //ler
    scanf("%f", &d);
    //imprimir
    printf("O novo valor de d é: %f.", d);
    printf("\nA nova soma dos valores é: %f + %f = %f.", c, d, c+d);

    //limpando buffer
    fflush(stdin);

    printf("\n\nTrabalhando com caracteres/letras (char)!\n");
    char e = 'e';
    char f = 'f';
    //imprimir
    printf("\nO valor de e é: %c.", e);
    printf("\nO valor de f é: %c.", f);
    printf("\nEntre com um novo valor para f:");
    //ler
    scanf("%c", &f);
    //imprimir
    printf("O novo valor de f é: %c.", f);

    return 0;
}

