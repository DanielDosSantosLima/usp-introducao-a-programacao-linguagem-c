#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");
    printf("Programa para calcular valor absoluto da diferen�a");
    printf("\nTarefa: Crie um algoritmo que leia 2 notas e mostre o valor absoluto da diferen�a entre elas");

    float nota1, nota2, diferenca, valorabsoluto;

    printf("\nDigite a 1� nota:");
    scanf("%f", &nota1);
    printf("A 1� nota �: %f", nota1);

    printf("\nDigite a 2� nota:");
    scanf("%f", &nota2);
    printf("A 2� nota �: %f", nota2);

    diferenca = nota1-nota2;
    printf("\nA diferen�a entre as notas �: %f", diferenca);

    valorabsoluto = abs(diferenca);
    printf("\nO valor absoluto da diferen�a entre as notas �: %f", valorabsoluto);

    return 0;
}
