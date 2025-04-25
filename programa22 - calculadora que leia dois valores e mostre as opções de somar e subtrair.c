#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    setlocale(LC_ALL,"");
    //Programa pra trabalhar switch case (escolher 1 opção, como um menu)
    //Tarefa: Crie um programa de calculadora, que leia dois valores e mostre as opções de somar e subtrair. Após selecionado o resultado, este será mostrado na tela, em um switch.

    printf("Programa de Calculadora!");

    float numero1, numero2;
    printf("\nDigite dois números: \n");
    scanf("%f %f", &numero1, &numero2);
    printf("Você digitou os números: %.02f e %.02f", numero1, numero2);

    float soma = numero1 + numero2;
    float subtracao = (numero1 - numero2);
    float valorabsoluto = abs(subtracao);

    int opcao;
    printf("\nEscolha a opção desejada: ");
    printf("\n1 - Soma");
    printf("\n2 - Subtração");
    printf("\nOpção escolhida: ");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            printf("Você escolheu a opção 1 - Soma");
            printf("\nA soma desses números é: %.02f", soma);
            break;
        case 2:
            printf("\nVocê escolheu a opção 2 - Subtração");
            printf("\nA subtração desses números é: %.02f", valorabsoluto);
            break;
        default:
            printf("Opção inválida. Digite novamente!");
            break;
    }

    return 0;
}
