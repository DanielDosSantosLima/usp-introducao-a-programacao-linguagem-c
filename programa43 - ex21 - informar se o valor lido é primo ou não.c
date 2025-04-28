#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL,"");
    printf("Programa para trabalhar laços!");
    printf("\nTarefa: crie um algoritmo que informe se o valor lido é primo ou não!\n");

    printf("Digite um número: \n");
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
        printf("O número é primo.\n");
    }   else {
            printf("O número digitado não é primo, pois ele tem %d divisores.", verificador);
    }

    return 0;
}
