#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define LINHA 2
#define COLUNA 3
#define TAM 2

int main(){

    printf("Programa para trabalhar matrizes!");
    printf("\nEntendendo matrizes.");

    //Lembrando: não pode misturar tipos de dados, mesma regra que em vetores/arrays
    //Sem definir
    int vetorInt[][2] = {{1,2},{3,4}}; // índices 0 e 1
    //Tamanho definido usando DEFINE
    int vetorInteiros[LINHA][COLUNA] = {{1,2,3},{4,5,6}}; // índices 0 e 1

    //Definindo tamanho
    float vetorFloat[2][2] = {{1.5,2.2},{3.0,1.2}}; //índices 0 e 1

    //Definindo tamanho com variável/constante
    char vetorChar[TAM][TAM] = {{'a','b'},{'c','d'}}; //índices 0 e 1

    //Percorrer matriz de Inteiros
    printf("Imprimindo matriz VetorInteiros:\n");
    int i, j;
    for (i = 0; i < LINHA; i++){
        for (j = 0; j < COLUNA; j++){
            printf("%d ", vetorInteiros[i][j]);
        }
        printf("\n");

    }

    return 0;
}
