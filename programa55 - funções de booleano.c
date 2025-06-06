#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

bool retornaBooleano(){
    return true;
}

int main (){

    setlocale(LC_ALL,"");
    //printf("Programa para trabalhar funções booleanas");

    printf("Olá, mundo!\n");

    //Definindo variáveis
    bool VerdadeiroOuFalso;

    //Variável recebendo função
    VerdadeiroOuFalso = retornaBooleano();

    //Imprimindo função
    printf("%d", VerdadeiroOuFalso); //irá retornar 1 para true e 0 para false

    //Se for verdadeiro executa o primeiro bloco
    if (VerdadeiroOuFalso){
        printf("\nÉ verdadeiro!");
    } else { //Se falso, executa o segundo bloco
        printf("\nÉ falso!");
    }

    return 0;
}

