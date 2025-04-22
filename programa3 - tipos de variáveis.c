#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    // Programa para trabalhar vari�veis
    setlocale(LC_ALL,"");

    printf("Trabalhando com inteiros!\n \n");
    int a = 3;
    int b = 6;
    //imprimir
    printf("Os valores de a e b s�o: %d e %d.", a, b);
    printf("\nA soma dos valores �: %d + %d = %d.", a, b, a+b);
    printf("\nEntre com um novo valor para a:");
    //ler
    scanf("%d", &a);
    //imprimir
    printf("O novo valor de a �: %d.", a);
    printf("\nA nova soma dos valores �: %d + %d = %d.", a, b, a+b);

    printf("\n\nTrabalhando com decimais!\n");
    float c = 5.5;
    float d = 4.9;
    //imprimir
    printf("\nO valor de c �: %f.", c);
    printf("\nO valor de d �: %f.", d);
    printf("\nA soma dos valores �: %f + %f = %f.", c, d, c+d);
    printf("\nEntre com um novo valor para d:");
    //ler
    scanf("%f", &d);
    //imprimir
    printf("O novo valor de d �: %f.", d);
    printf("\nA nova soma dos valores �: %f + %f = %f.", c, d, c+d);

    //limpando buffer
    fflush(stdin);

    printf("\n\nTrabalhando com caracteres/letras (char)!\n");
    char e = 'e';
    char f = 'f';
    //imprimir
    printf("\nO valor de e �: %c.", e);
    printf("\nO valor de f �: %c.", f);
    printf("\nEntre com um novo valor para f:");
    //ler
    scanf("%c", &f);
    //imprimir
    printf("O novo valor de f �: %c.", f);

    return 0;
}

