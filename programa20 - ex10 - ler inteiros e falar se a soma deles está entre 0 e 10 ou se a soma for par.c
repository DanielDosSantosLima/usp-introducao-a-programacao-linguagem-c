#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    setlocale(LC_ALL,"");
    //Programa pra trabalhar condicionais
    //Tarefa: criar um programa para ler inteiros e falar se a soma deles est� entre 0 e 10 ou se a soma for par

    int numero1, numero2;
    printf("Entre com dois numeros inteiros:");
    scanf("%d %d", &numero1, &numero2);

    int soma = numero1 + numero2;
    if((soma >= 0 && soma <= 10) || (soma %2 == 0)){
        printf("A soma dos n�meros est� entre 0 e 10 OU a soma � par.");
    } else{
        printf("A soma n�o est� entre 0 e 10 E n�o � par.");
    }

    return 0;
}
