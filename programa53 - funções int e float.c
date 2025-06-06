#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Importante dizer que essas fun��es existem e sinaliz�s-la antes da main
int retornaInt();
float retornaFloat();

//Importante deixar a main no come�o do programa
int main (){

    setlocale(LC_ALL,"");
    //printf("Programa para trabalhar fun��es inteiras ou fun��es num�ricas");

    printf("Ol�, mundo!\n");

    //Definindo vari�vel int
    int a;

    //Passando o retorno de uma fun��o para uma vari�vel
    //Poderia fazer a = 10; mas fa�o:
    a = retornaInt();
    printf("\nFun��o de Int:\n");
    printf("%d", a);

    //Definindo vari�vel float
    float b;

    //Passando o retorno de uma fun��o para uma vari�vel
    b = retornaFloat();
    printf("\nFun��o de Float:\n");
    printf("%.1f", b);

    return 0;
}

//Fun��o que retorna 10
int retornaInt(){
    printf("Criei uma fun��o!\n");
    return 10;
}

float retornaFloat(){
    return 5.5;
}
