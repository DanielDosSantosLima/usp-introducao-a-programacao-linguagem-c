#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char retornaLetra(){
    return 'x';
}


int main (){

    setlocale(LC_ALL,"");
    //printf("Programa para trabalhar fun��es de caracteres");

    printf("Ol�, mundo!\n");

    //Definindo vari�veis
    char letra;

    //Vari�vel recebendo fun��o
    letra = retornaLetra();

    //Imprimindo fun��o
    printf("%c", letra);

    return 0;
}

