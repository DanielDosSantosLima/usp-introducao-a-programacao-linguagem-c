#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");
    printf("Programa para c�lculo de m�dia entre valores");
    printf("\nCrie um algoritmo que leia 2 notas e mostre a m�dia entre elas.");

    //criando variaveis
    float nota1, nota2, resultado;

    //inserindo variaveis
    //nota1
    printf("\n\nDigite a 1� nota:");
    scanf("%f", &nota1);
    printf("Voc� digitou: %f", nota1);
    //nota2
    printf("\n\nDigite a 2� nota:");
    scanf("%f", &nota2);
    printf("Voc� digitou: %f", nota2);

    //calculando resultado
    resultado = (nota1 + nota2)/2;
    printf("\n\nA m�dia entre %f e %f �: %f", nota1, nota2, resultado);

}
