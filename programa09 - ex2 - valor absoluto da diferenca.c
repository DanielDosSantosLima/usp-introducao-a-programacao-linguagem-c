#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");
    printf("Programa para calcular valor absoluto da diferença");
    printf("\nTarefa: Crie um algoritmo que leia 2 notas e mostre o valor absoluto da diferença entre elas");

    float nota1, nota2, diferenca, valorabsoluto;

    printf("\nDigite a 1ª nota:");
    scanf("%f", &nota1);
    printf("A 1ª nota é: %f", nota1);

    printf("\nDigite a 2ª nota:");
    scanf("%f", &nota2);
    printf("A 2ª nota é: %f", nota2);

    diferenca = nota1-nota2;
    printf("\nA diferença entre as notas é: %f", diferenca);

    valorabsoluto = abs(diferenca);
    printf("\nO valor absoluto da diferença entre as notas é: %f", valorabsoluto);

    return 0;
}
