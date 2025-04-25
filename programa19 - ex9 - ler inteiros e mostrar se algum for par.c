#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    setlocale(LC_ALL,"");
    //Programa pra trabalhar condicionais
    //Tarefa: criar um programa para ler inteiros e falar se algum for par

    int numero1, numero2;
    printf("Entre com dois numeros inteiros:");
    scanf("%d %d", &numero1, &numero2);

    if(numero1 %2 == 0 || numero2 %2 == 0){
        printf("Pelo menos um dos números é par.");
    }   else{
        printf("Nenhum dos números é par.");
    }

    return 0;
}
