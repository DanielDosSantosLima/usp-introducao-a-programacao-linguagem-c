#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL,"");
    //No programa abaixo h� duas repeti��es aninhadas. Quantas vezes a
    //fun��o printf(...) � executada? Se poss�vel, execute o c�digo 1,0pt?
    //Explique 1,5pt.

    for (int i=0; i<10; i++){
        for (int j=0; j<i; j++){
            printf("%d, %d\n", i, j);
        }
    }
    return 0;
}

    //Resposta: printf � executada 45 vezes
