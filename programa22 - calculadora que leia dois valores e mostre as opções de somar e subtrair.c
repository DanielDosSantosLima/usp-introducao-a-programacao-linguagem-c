#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    setlocale(LC_ALL,"");
    //Programa pra trabalhar switch case (escolher 1 op��o, como um menu)
    //Tarefa: Crie um programa de calculadora, que leia dois valores e mostre as op��es de somar e subtrair. Ap�s selecionado o resultado, este ser� mostrado na tela, em um switch.

    printf("Programa de Calculadora!");

    float numero1, numero2;
    printf("\nDigite dois n�meros: \n");
    scanf("%f %f", &numero1, &numero2);
    printf("Voc� digitou os n�meros: %.02f e %.02f", numero1, numero2);

    float soma = numero1 + numero2;
    float subtracao = (numero1 - numero2);
    float valorabsoluto = abs(subtracao);

    int opcao;
    printf("\nEscolha a op��o desejada: ");
    printf("\n1 - Soma");
    printf("\n2 - Subtra��o");
    printf("\nOp��o escolhida: ");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            printf("Voc� escolheu a op��o 1 - Soma");
            printf("\nA soma desses n�meros �: %.02f", soma);
            break;
        case 2:
            printf("\nVoc� escolheu a op��o 2 - Subtra��o");
            printf("\nA subtra��o desses n�meros �: %.02f", valorabsoluto);
            break;
        default:
            printf("Op��o inv�lida. Digite novamente!");
            break;
    }

    return 0;
}
