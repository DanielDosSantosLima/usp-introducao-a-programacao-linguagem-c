#include <stdio.h>
#include <stdlib.h>
#define TAM 100

//Fun��o principal do programa
void main(){

    //Imprime na tela
    printf("%d", TAM);

    int i;

    //Contagem at� 100
    for(i = 1;i <= TAM;i++){
        printf("\n%d", i);
    }

    //Pausa o programa ap�s executar
    system("pause");

}
