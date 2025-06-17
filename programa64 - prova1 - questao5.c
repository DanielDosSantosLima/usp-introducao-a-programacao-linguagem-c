#include <stdio.h>

    /*
    Ajuste o programa abaixo. Crie uma função que recebe como argumento
    o array p (e outros argumentos, se necessário) e retorna o índice do
    elemento de maior valor. Ajuste a funç˜ao main para usar essa funç˜ao
    que você criou e imprimir na tela com um ’printf’ o valor que a função
    que você criou retorna. Dica: o ajuste consiste em declarar essa nova
    funç˜ao e mover algumas linhas do main para essa nova funç˜ao. (este
    exercício corresponde a refatorar o código, por exemplo, para usar essa
    mesma função para achar o elemento de maior valor de outros arrays).

    */

    int indiceMaiorElemento(int p[], int np){ //colocados o array p e o comprimento do array como parâmetros
       int indice = 0;
            for (int i = 1; i < np; i++){
                if (p[i] >= p[indice]){
                    indice = i;
                }
            }
            /* //código antigo, e incorreto, porque usava "indice" sem ter declarado, além de não servir para verificar o maior valor
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

    /* // código antigo, e incorreto, pois permaneceu na main. Agora foi movido para a função criada
    int i = 1;
    int indice = 0;
    for (int i = 1; i < np; i++){
        if (p[i] >= p[indice]){
            indice = i;
        }
    }
    */

    /* //código antigo, e incorreto, pois usava a função como variável
    indiceMaiorElemento = indice;
    */

    int indice = indiceMaiorElemento(p, np); //agora contém os parâmetros

    printf("Retorno do indice do elemento de maior valor: %d \n", indice); //trazido para baixo e acrescentado o %d e o indice, para exibir na tela

    return 0;
}
