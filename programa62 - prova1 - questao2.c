#include <stdio.h>

    /*Questão 2: Crie uma nova função que receba o array a como argumento (pode
    receber mais argumentos), some todos os valores contidos nos elementos
    de a e armazene essa soma como último elemento de a.
    */

    void somaValoresVetor (int a[], int na){ //void, porque não precisa retornar nada. agora recebe o array a e o seu tamanho como parâmetros
        int soma = 0; // inicializa a soma
        for (int i = 0; i < na - 1; i++){ //percorre os valores do vetor, e -1 porque nele será armazenada a soma
            soma += a[i];
        }
        a[na - 1] = soma; //armazena o valor no último elemento
        printf("Soma dos elementos: %d \n", soma);
    }

    /* código antigo, e incorreto, porque a função estava
    int somaValoresVetor (){
        int soma = a[0] + a[1] + a[2} + a[3] + a[4];
        a[5] = soma;
    }
    */

int main(){
    int a[]={1, 2, 3, 4, 5, 0}; //adicionado o 0 no último item, para ser substituído pela soma
    int na = 6; // comprimento do array foi de 5 para 6 para adicionar o valor da soma

    somaValoresVetor(a, na); // chame aqui a sua função

    for (int i = 0; i < na; i++){ //para imprimir os valores do novo array
        printf("%d \n", a[i]);
    }

    return 0;
}
