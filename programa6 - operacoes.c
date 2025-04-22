#include <stdio.h>
#include <stdlib.h>

void main (){

    //Programa para trabalhar operações
    int a = 6, b = 3;

    printf("O valor de a eh: %d", a);
    printf("\nO valor de b eh: %d", b);

    //soma
    printf("\n\nSoma");
    printf("\nA soma de a e b eh: %d.", a+b);
    printf("\nA soma de %d e %d eh: %d.", a, b, a+b);

    //subtracao
    printf("\n\nSubtracao");
    printf("\nA subtracao de a e b eh: %d.", a-b);
    printf("\nA subtracao de %d e %d eh: %d.", a, b, a-b);

    //multiplicacao
    printf("\n\nMultiplicacao");
    printf("\nA multiplicacao de a e b eh: %d.", a*b);
    printf("\nA multiplicacao de %d e %d eh: %d.", a, b, a*b);

    //divisao
    printf("\n\nDivisao");
    printf("\nA divisao de a e b eh: %d.", a/b);
    printf("\nA divisao de %d e %d eh: %d.", a, b, a/b);

    //resto da divisao
    printf("\n\nResto da Divisao");
    printf("\nO resto da divisao de a e b eh: %d.", a%b);
    printf("\nO resto da divisao de %d e %d eh: %d.", a, b, a%b);


    //valor absoluto
    printf("\n\nValor Absoluto");
    printf("\nO valor absoluto de -6 eh: %d", abs(-6));

}
