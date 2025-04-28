#include <stdio.h>
#include <stdlib.h>
#define TAM 100

//Função principal do programa
void main(){

    //Imprime na tela
    printf("%d", TAM);

    int i;

    //Contagem até 100
    for(i = 1;i <= TAM;i++){
        printf("\n%d", i);
    }

    //Pausa o programa após executar
    system("pause");

}
