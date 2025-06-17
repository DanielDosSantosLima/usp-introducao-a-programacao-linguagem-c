#include <stdio.h>

    /*Questão 3:
    O array p contém o preço, em unidades monetárias, de itens que podem
    ser comprados. Cada item é representado por um índice. Por exemplo:
    o item de índice 0 tem preço 1, o item de índice 1 tem preço 2, o item
    de índice 2 tem preço 3, ..., o item de índice 14 tem preço 9.
    Em sua conta-corrente digital você tem 15 unidades monetárias de saldo.
    Complete o programa para que se passe por todos os itens, verificando,
    a cada item, se este pode ser comprado com o saldo. Caso o item possa
    ser comprado, escreve na tela a mensagem ”item i comprado pelo preço
    p[i]” com i e p[i] devidamente substituídos pelos valores do programa e
    o preço do item deve ser subtraído do saldo. Caso o item n˜ao possa ser
    comprado, n˜ao faz nada. Em seguida, verifica o próximo item, ... Isto
    deve ser repetido até que n˜ao haja mais itens a verificar.
    */

int main(){
    int p[] = {1,2,3,2,1,7,8,9,4,5,6,7,8,1,9};
    int np = 15;
    int saldo = 15;
    int i = 0;
    //saldo terá pelos valores[índices]: 15[0], 14[1], 12[2], 9[3], 7[4], 6[5], 2[8], 1[13].

    printf ("Saldo inicial: %d \n", saldo); //acrescentado para visualização do saldo inicial
    for (i = 0; i < np; i++){
        if (saldo >= p[i]){
            saldo = saldo -p[i];
            printf("\nItem %d comprado pelo preco %d", i, p[i]);
            printf("\nSaldo atual: %d \n", saldo); //acrescentado para visualização do saldo após cada compra
        }
    }

    return 0;
}
