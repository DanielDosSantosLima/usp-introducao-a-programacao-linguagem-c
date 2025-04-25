#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    setlocale(LC_ALL,"");
    //Programa pra trabalhar switch case (escolher 1 opção, como um menu)
    //Funcionamento do switch case

    printf("Menu de Cafeteria:");
    printf("\n1 - Espresso");
    printf("\n2 - Cappucino");
    printf("\n3 - Latte");

    int opcao;
    printf("\nDigite a opção de café desejada: ");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            printf("\nVocê escolheu a opção 1 - Espresso");
            break;
        case 2:
            printf("\nVocê escolheu a opção 2 - Cappuccino");
            break;
        case 3:
            printf("\nVocê escolheu a opção 3 - Latte");
            break;
        default:
            printf("Opção inválida. Digite novamente!");
            break;
    }

    return 0;
}
