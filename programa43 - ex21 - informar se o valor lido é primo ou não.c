#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar la�os!");
    printf("\nTarefa: crie um algoritmo que informe se o valor lido � primo ou n�o!\n");

    printf("Digite um n�mero: \n");
    int numero;
    scanf("%d", &numero);

    int i = 0;
    int verificador = 0;

    for (i = 1; i<= numero; i++){
        if (numero % i == 0){
            verificador++;
        }
    }

    if (verificador == 2){
        printf("O n�mero � primo.\n");
    }   else {
            printf("O n�mero digitado n�o � primo, pois ele tem %d divisores.", verificador);
    }

    return 0;
}
