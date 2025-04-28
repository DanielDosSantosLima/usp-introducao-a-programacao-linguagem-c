#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar for!\n");
    printf("Tarefa: crie um programa que mostre a tabuada de um número informado pelo usuário\n");

    printf("Tabuada!\n");
    printf("Digite um número: \n");

    int numero;
    scanf("%d", &numero);

    int i = 0;

    for(i = 0; i <= 10; i++){
        printf("%d x %d = %d\n", numero, i, i * numero);
    }

    return 0;
}


