#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Importante dizer que essas funções existem e sinalizás-la antes da main
int retornaInt();
float retornaFloat();

//Importante deixar a main no começo do programa
int main (){

    setlocale(LC_ALL,"");
    //printf("Programa para trabalhar funções inteiras ou funções numéricas");

    printf("Olá, mundo!\n");

    //Definindo variável int
    int a;

    //Passando o retorno de uma função para uma variável
    //Poderia fazer a = 10; mas faço:
    a = retornaInt();
    printf("\nFunção de Int:\n");
    printf("%d", a);

    //Definindo variável float
    float b;

    //Passando o retorno de uma função para uma variável
    b = retornaFloat();
    printf("\nFunção de Float:\n");
    printf("%.1f", b);

    return 0;
}

//Função que retorna 10
int retornaInt(){
    printf("Criei uma função!\n");
    return 10;
}

float retornaFloat(){
    return 5.5;
}
