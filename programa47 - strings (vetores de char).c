#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar strings (vetores de char)!\n");

    printf("\nAlgumas formas de armazenar strings s�o:");
    char palavra1[] = "boi"; // �ndice 4 = 3 letras + \0
    char palavra2[13] = "bala de goma"; // �ndice 13 = 12 caracteres + \0
    char palavra3[] = {'a','b','c','d','\0'}; // �ndice 5 = 4 letras + \0
    char palavra4[] = {'f','o','n','e','\0'}; // �ndice 5 = 4 letras + \0
    char palavra5[6];

    //Imprimir strings sem espa�o:
    printf("\n%s\n", palavra1);

    //Imprimir strings com espa�o:
    puts(palavra2);

    //Antes de ler, � ideal limpar o buffer com
    fflush(stdin);

    //Ler strings sem espa�o:
    printf("\nDigite uma palavra com seis letras:");
    scanf("%s", &palavra5);
    printf("Voc� digitou a string: '%s'.", palavra5);

    //Ler strings com espa�o:
    char fruta[255]; //exemplo: ma�� gala
    fflush(stdin);
    printf("\nDigite o nome de uma fruta: \n");
    fgets(fruta, sizeof(fruta), stdin);

    //Imprimindo a fruta lida (string com espa�o:
    printf("\nFruta lida: \n");
    puts(fruta);

    return 0;
}
