#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define LINHA 2
#define COLUNA 3

int main(){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar matrizes!");
    printf("\nValores inseridos pelo usuário!");

    int matriz[LINHA][COLUNA];
    int i, j;

    printf("\nDigite valores para uma matriz [2][3] (duas linhas e 3 colunas):\n");
    for (i = 0; i < LINHA; i++){
        for (j = 0; j < COLUNA; j++){
            printf("Posição [%d][%d]: ", i, j);
            scanf ("%d", &matriz[i][j]);
        }
    }

    printf("\nOs valores digitados foram:\n");
    for (i = 0; i < LINHA; i++){
        for (j = 0; j < COLUNA;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
