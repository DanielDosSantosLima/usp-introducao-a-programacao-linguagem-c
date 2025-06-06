#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar ponteiros!");
    printf("\nEstudando ponteiros");

    //Variável
    int a = 20;

    //Memória é colocada numa ordem e é consumida. Memória é sequencial

    //Imprimindo o valor da variável
    printf("\nValor de a: %d", a);

    //Imprimindo o endereço de 'a'
    printf("\nEndereço de a: %d", &a); //imprime o endereço da variável a

    //Lendo o valor de uma variável 'a'
    printf("\nDigite um novo valor para a:\n");
    scanf("%d", &a);

    //Imprimindo o novo valor da variável 'a'
    printf("Novo valor de a: %d", a);

    //Variáveis armazenam valores!
    int b = 10;
    //Ponteiros armazenam posições na memória!
    int *ponteiro;
    //Ponteiro recebendo a posição na memória da variável 'b'
    ponteiro = &b; //ponteiro = &variável

    //Imprimindo o endereço de 'b'
    printf("\nEndereço de b: %d", &b);

    //Imprimindo o valor da variável 'b'
    printf("\nValor de b: %d", b);

    //Pode ser lido como "conteúdo apontado por"
    *ponteiro = 40;

    //Imprimindo o valor da variável 'b'
    printf("\nNovo valor de b: %d", b);

    //VARIÁVEL
    //[VALOR QUE ARMAZENA]
    //[POSIÇÃO NA MEMÓRIA]

    //PONTEIRO - acesso mais direto à memória do programa
    //[POSIÇÃO NA MEMÓRIA QUE ESTÁ ARMAZENADO]
    //[POSIÇÃO NA MEMÓRIA]

    return 0;
}
