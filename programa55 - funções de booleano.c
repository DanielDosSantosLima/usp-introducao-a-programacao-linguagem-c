#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

bool retornaBooleano(){
    return true;
}

int main (){

    setlocale(LC_ALL,"");
    //printf("Programa para trabalhar fun��es booleanas");

    printf("Ol�, mundo!\n");

    //Definindo vari�veis
    bool VerdadeiroOuFalso;

    //Vari�vel recebendo fun��o
    VerdadeiroOuFalso = retornaBooleano();

    //Imprimindo fun��o
    printf("%d", VerdadeiroOuFalso); //ir� retornar 1 para true e 0 para false

    //Se for verdadeiro executa o primeiro bloco
    if (VerdadeiroOuFalso){
        printf("\n� verdadeiro!");
    } else { //Se falso, executa o segundo bloco
        printf("\n� falso!");
    }

    return 0;
}

