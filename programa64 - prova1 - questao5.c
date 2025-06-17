#include <stdio.h>

    /*
    Ajuste o programa abaixo. Crie uma fun��o que recebe como argumento
    o array p (e outros argumentos, se necess�rio) e retorna o �ndice do
    elemento de maior valor. Ajuste a fun�ao main para usar essa fun�ao
    que voc� criou e imprimir na tela com um �printf� o valor que a fun��o
    que voc� criou retorna. Dica: o ajuste consiste em declarar essa nova
    fun�ao e mover algumas linhas do main para essa nova fun�ao. (este
    exerc�cio corresponde a refatorar o c�digo, por exemplo, para usar essa
    mesma fun��o para achar o elemento de maior valor de outros arrays).

    */

    int indiceMaiorElemento(int p[], int np){ //colocados o array p e o comprimento do array como par�metros
       int indice = 0;
            for (int i = 1; i < np; i++){
                if (p[i] >= p[indice]){
                    indice = i;
                }
            }
            /* //c�digo antigo, e incorreto, porque usava "indice" sem ter declarado, al�m de n�o servir para verificar o maior valor
            for(int j = 1; j <= np; j++){
                if (indice == p[j]){
                    printf("Elemento %d - indice %d",indice, j);
                }
            }
        */
    return indice;
    }

int main(){
    int p[] = {1,2,3,2,1,7,8,9,4,5,6,7,8,1,9};
    int np = 15;

    /* // c�digo antigo, e incorreto, pois permaneceu na main. Agora foi movido para a fun��o criada
    int i = 1;
    int indice = 0;
    for (int i = 1; i < np; i++){
        if (p[i] >= p[indice]){
            indice = i;
        }
    }
    */

    /* //c�digo antigo, e incorreto, pois usava a fun��o como vari�vel
    indiceMaiorElemento = indice;
    */

    int indice = indiceMaiorElemento(p, np); //agora cont�m os par�metros

    printf("Retorno do indice do elemento de maior valor: %d \n", indice); //trazido para baixo e acrescentado o %d e o indice, para exibir na tela

    return 0;
}
