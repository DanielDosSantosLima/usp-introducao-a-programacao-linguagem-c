#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar for!\n");
    printf("Tarefa: crie um programa em que o usu�rio informa o valor inicial, o valor final e de quanto em quanto o valor de i ser� modificado e imprima todos os valores no intervalo informado com os passos informados\n");

    printf("Digite um n�mero inicial: \n");
    int inicial;
    scanf("%d", &inicial);

    printf("Digite um n�mero final: \n");
    int ultimo;
    scanf("%d", &ultimo);

    printf("Digite um n�mero para ser o contador: \n");
    int contador;
    scanf("%d", &contador);

    int i = 0;

    for(i = inicial; i <= ultimo; i = i + contador){
        printf("%d \n", i);
    }

    return 0;
}


