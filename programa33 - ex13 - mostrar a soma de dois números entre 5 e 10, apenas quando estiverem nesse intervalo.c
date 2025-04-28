#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar while!");
    printf("\nTarefa: crie um programa que mostre a soma de dois números entre 5 e 10, apenas quando estiverem nesse intervalo\n");

    int numero1 = 0;
    int numero2 = 0;

    while (!(numero1 >=5 && numero1 <=10) || !(numero2 >=5 && numero2 <=10)){

        printf("\nDigite dois números entre 5 e 10\n");
        scanf("%d %d", &numero1, &numero2);
    }

    int soma = numero1 + numero2;
    printf("\nA soma desses dois números é: %d + %d = %d", numero1, numero2, soma);

    return 0;
}


