#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");
    printf("Programa para cálculo de média entre valores");
    printf("\nCrie um algoritmo que leia 2 notas e mostre a média entre elas.");

    //criando variaveis
    float nota1, nota2, resultado;

    //inserindo variaveis
    //nota1
    printf("\n\nDigite a 1ª nota:");
    scanf("%f", &nota1);
    printf("Você digitou: %f", nota1);
    //nota2
    printf("\n\nDigite a 2ª nota:");
    scanf("%f", &nota2);
    printf("Você digitou: %f", nota2);

    //calculando resultado
    resultado = (nota1 + nota2)/2;
    printf("\n\nA média entre %f e %f é: %f", nota1, nota2, resultado);

}
