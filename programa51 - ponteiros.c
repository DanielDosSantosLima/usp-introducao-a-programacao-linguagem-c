#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar ponteiros!");
    printf("\nEstudando ponteiros");

    //Vari�vel
    int a = 20;

    //Mem�ria � colocada numa ordem e � consumida. Mem�ria � sequencial

    //Imprimindo o valor da vari�vel
    printf("\nValor de a: %d", a);

    //Imprimindo o endere�o de 'a'
    printf("\nEndere�o de a: %d", &a); //imprime o endere�o da vari�vel a

    //Lendo o valor de uma vari�vel 'a'
    printf("\nDigite um novo valor para a:\n");
    scanf("%d", &a);

    //Imprimindo o novo valor da vari�vel 'a'
    printf("Novo valor de a: %d", a);

    //Vari�veis armazenam valores!
    int b = 10;
    //Ponteiros armazenam posi��es na mem�ria!
    int *ponteiro;
    //Ponteiro recebendo a posi��o na mem�ria da vari�vel 'b'
    ponteiro = &b; //ponteiro = &vari�vel

    //Imprimindo o endere�o de 'b'
    printf("\nEndere�o de b: %d", &b);

    //Imprimindo o valor da vari�vel 'b'
    printf("\nValor de b: %d", b);

    //Pode ser lido como "conte�do apontado por"
    *ponteiro = 40;

    //Imprimindo o valor da vari�vel 'b'
    printf("\nNovo valor de b: %d", b);

    //VARI�VEL
    //[VALOR QUE ARMAZENA]
    //[POSI��O NA MEM�RIA]

    //PONTEIRO - acesso mais direto � mem�ria do programa
    //[POSI��O NA MEM�RIA QUE EST� ARMAZENADO]
    //[POSI��O NA MEM�RIA]

    return 0;
}
