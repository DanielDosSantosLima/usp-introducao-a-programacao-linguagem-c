#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    setlocale(LC_ALL,"");
    //Programa pra trabalhar switch case (escolher 1 op��o, como um menu)
    //Funcionamento do switch case

    printf("Menu de Cafeteria:");
    printf("\n1 - Espresso");
    printf("\n2 - Cappucino");
    printf("\n3 - Latte");

    int opcao;
    printf("\nDigite a op��o de caf� desejada: ");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            printf("\nVoc� escolheu a op��o 1 - Espresso");
            break;
        case 2:
            printf("\nVoc� escolheu a op��o 2 - Cappuccino");
            break;
        case 3:
            printf("\nVoc� escolheu a op��o 3 - Latte");
            break;
        default:
            printf("Op��o inv�lida. Digite novamente!");
            break;
    }

    return 0;
}
