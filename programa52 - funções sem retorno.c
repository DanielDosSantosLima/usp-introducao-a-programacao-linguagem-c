#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Borda como separador
void desenhaBorda(){
    printf("|----------------------|");
   }

int main (){

    setlocale(LC_ALL,"");
    //printf("Programa para trabalhar fun��es vazias e sem retorno");

    desenhaBorda();
    printf("Ol�, mundo!");
    desenhaBorda();

    return 0;
}
