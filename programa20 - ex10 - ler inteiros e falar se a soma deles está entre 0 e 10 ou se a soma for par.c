#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    setlocale(LC_ALL,"");
    //Programa pra trabalhar condicionais
    //Tarefa: criar um programa para ler inteiros e falar se a soma deles está entre 0 e 10 ou se a soma for par

    int numero1, numero2;
    printf("Entre com dois numeros inteiros:");
    scanf("%d %d", &numero1, &numero2);

    int soma = numero1 + numero2;
    if((soma >= 0 && soma <= 10) || (soma %2 == 0)){
        printf("A soma dos números está entre 0 e 10 OU a soma é par.");
    } else{
        printf("A soma não está entre 0 e 10 E não é par.");
    }

    return 0;
}
