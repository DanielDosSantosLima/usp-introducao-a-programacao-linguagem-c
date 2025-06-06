#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Borda como separador
void desenhaBorda(){
    printf("|----------------------|");
   }

int main (){

    setlocale(LC_ALL,"");
    //printf("Programa para trabalhar funções vazias e sem retorno");

    desenhaBorda();
    printf("Olá, mundo!");
    desenhaBorda();

    return 0;
}
