#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char retornaLetra(){
    return 'x';
}


int main (){

    setlocale(LC_ALL,"");
    //printf("Programa para trabalhar funções de caracteres");

    printf("Olá, mundo!\n");

    //Definindo variáveis
    char letra;

    //Variável recebendo função
    letra = retornaLetra();

    //Imprimindo função
    printf("%c", letra);

    return 0;
}

