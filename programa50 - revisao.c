#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    //Declarando variáveis e tipos
    int a;
    float b;
    char c;
    bool d;
    bool e;

    //Passando valores
    a = 10;
    b = 2.8;
    c = 'w';
    d = false;
    e = true;

    //Imprimndo valores
    printf("Imprimindo valores:");
    printf("\nValor: %d", a);
    printf("\nValor: %.1f", b);
    printf("\nValor: %c", c);
    printf("\nValor: %d", d);
    printf("\nValor: %d", e);

    return 0;

}
