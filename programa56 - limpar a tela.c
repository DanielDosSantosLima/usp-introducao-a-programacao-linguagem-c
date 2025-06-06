#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void limpaTela(){
    system("CLS");
}

int main (){

    setlocale(LC_ALL,"");
    //printf("Programa para limpar a tela");

    int a;
    printf("Digite um valor para 'a': \n");
    scanf("%d", &a);
    limpaTela();

    printf("O valor digitado foi: %d", a);
    printf("\nFim do programa!\n");

    return 0;
}

