#include <stdio.h>

    /*Quest�o 2: Crie uma nova fun��o que receba o array a como argumento (pode
    receber mais argumentos), some todos os valores contidos nos elementos
    de a e armazene essa soma como �ltimo elemento de a.
    */

    void somaValoresVetor (int a[], int na){ //void, porque n�o precisa retornar nada. agora recebe o array a e o seu tamanho como par�metros
        int soma = 0; // inicializa a soma
        for (int i = 0; i < na - 1; i++){ //percorre os valores do vetor, e -1 porque nele ser� armazenada a soma
            soma += a[i];
        }
        a[na - 1] = soma; //armazena o valor no �ltimo elemento
        printf("Soma dos elementos: %d \n", soma);
    }

    /* c�digo antigo, e incorreto, porque a fun��o estava
    int somaValoresVetor (){
        int soma = a[0] + a[1] + a[2} + a[3] + a[4];
        a[5] = soma;
    }
    */

int main(){
    int a[]={1, 2, 3, 4, 5, 0}; //adicionado o 0 no �ltimo item, para ser substitu�do pela soma
    int na = 6; // comprimento do array foi de 5 para 6 para adicionar o valor da soma

    somaValoresVetor(a, na); // chame aqui a sua fun��o

    for (int i = 0; i < na; i++){ //para imprimir os valores do novo array
        printf("%d \n", a[i]);
    }

    return 0;
}
