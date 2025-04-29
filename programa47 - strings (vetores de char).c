#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar strings (vetores de char)!\n");

    printf("\nAlgumas formas de armazenar strings são:");
    char palavra1[] = "boi"; // índice 4 = 3 letras + \0
    char palavra2[13] = "bala de goma"; // índice 13 = 12 caracteres + \0
    char palavra3[] = {'a','b','c','d','\0'}; // índice 5 = 4 letras + \0
    char palavra4[] = {'f','o','n','e','\0'}; // índice 5 = 4 letras + \0
    char palavra5[6];

    //Imprimir strings sem espaço:
    printf("\n%s\n", palavra1);

    //Imprimir strings com espaço:
    puts(palavra2);

    //Antes de ler, é ideal limpar o buffer com
    fflush(stdin);

    //Ler strings sem espaço:
    printf("\nDigite uma palavra com seis letras:");
    scanf("%s", &palavra5);
    printf("Você digitou a string: '%s'.", palavra5);

    //Ler strings com espaço:
    char fruta[255]; //exemplo: maçã gala
    fflush(stdin);
    printf("\nDigite o nome de uma fruta: \n");
    fgets(fruta, sizeof(fruta), stdin);

    //Imprimindo a fruta lida (string com espaço:
    printf("\nFruta lida: \n");
    puts(fruta);

    return 0;
}
