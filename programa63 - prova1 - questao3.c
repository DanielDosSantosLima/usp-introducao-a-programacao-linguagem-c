#include <stdio.h>

    /*Quest�o 3:
    O array p cont�m o pre�o, em unidades monet�rias, de itens que podem
    ser comprados. Cada item � representado por um �ndice. Por exemplo:
    o item de �ndice 0 tem pre�o 1, o item de �ndice 1 tem pre�o 2, o item
    de �ndice 2 tem pre�o 3, ..., o item de �ndice 14 tem pre�o 9.
    Em sua conta-corrente digital voc� tem 15 unidades monet�rias de saldo.
    Complete o programa para que se passe por todos os itens, verificando,
    a cada item, se este pode ser comprado com o saldo. Caso o item possa
    ser comprado, escreve na tela a mensagem �item i comprado pelo pre�o
    p[i]� com i e p[i] devidamente substitu�dos pelos valores do programa e
    o pre�o do item deve ser subtra�do do saldo. Caso o item n�ao possa ser
    comprado, n�ao faz nada. Em seguida, verifica o pr�ximo item, ... Isto
    deve ser repetido at� que n�ao haja mais itens a verificar.
    */

int main(){
    int p[] = {1,2,3,2,1,7,8,9,4,5,6,7,8,1,9};
    int np = 15;
    int saldo = 15;
    int i = 0;
    //saldo ter� pelos valores[�ndices]: 15[0], 14[1], 12[2], 9[3], 7[4], 6[5], 2[8], 1[13].

    printf ("Saldo inicial: %d \n", saldo); //acrescentado para visualiza��o do saldo inicial
    for (i = 0; i < np; i++){
        if (saldo >= p[i]){
            saldo = saldo -p[i];
            printf("\nItem %d comprado pelo preco %d", i, p[i]);
            printf("\nSaldo atual: %d \n", saldo); //acrescentado para visualiza��o do saldo ap�s cada compra
        }
    }

    return 0;
}
