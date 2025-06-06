#include <stdio.h>

char *texto = "https://support.microsoft.com/pt-\
br/topic/descri%C3%A7%C3%A3o-do-texto-lorem-\
ipsum-dolor-sit-amet-que-aparece-na-ajuda-do-\
windows-bf3b0a9e-8f6b-c2ab-edd9-41c1f9aa2ea0\
\nDescricao do texto \"Lorem ipsum dolor\
sit amet\" que aparece na Ajuda do Windows\n\
Sumario\nA frase \"Lorem ipsum dolor sit\
amet consectetur\" aparece na ajuda online\
do Microsoft Word. Essa frase parece ser\
originada de um idioma latino inteligente.\
Na verdade, eh uma tolice.\nMais Informacoes\
\nEmbora a frase seja tolice, ela tem uma\
historia longa. A frase foi usada por varios\
seculos por tipografos para...";

int main(){
    //Questão 1:
    //Ajustar o programa para contar as ocorrências de cada vogal (maiúsculas e minúsculas) em um texto e apresentar as contagens.

    //Iniciando o contador
    int i = 0;

    //Variáveis para cada vogal, ainda diferenciando maiúsculas de minúsculas, como feito na questão da prova
    int a = 0;
    int A = 0;
    int e = 0;
    int E = 0;
    int ii = 0; //usando ii para não confundir com o i do loop
    int I = 0;
    int o = 0;
    int O = 0;
    int u = 0;
    int U = 0;

    /* //Código antigo, e incorreto, pois utilizava ponteiros
    int *a = 0;
    int *A = 0;
    int *e = 0;
    int *E = 0;
    int *i = 0;
    int *I = 0;
    int *o = 0;
    int *O = 0;
    int *u = 0;
    int *U = 0;
    */

    while (texto [i] != '\0'){      //pesquisa no texto
        switch (texto[i]) {         //para encontrar as vogais e contá-las
            case 'a': a++;
                break;
            case 'A': A++;
                break;
            case 'e': e++;
                break;
            case 'E': E++;
                break;
            case 'i': ii++;
                break;
            case 'I': I++;
                break;
            case 'o': o++;
                break;
            case 'O': O++;
                break;
            case 'u': u++;
                break;
            case 'U': u++;
                break;
        }
        putchar (texto [i]); //Imprime caractere por caracter na tela, até completar o texto
        i++;
    }

    /* //Código antigo, e incorreto, pois usava ponteiros, criava um segmentation fault e utilizava muitos if's
    if(texto [i] == 'a'){
        *a ++;
    }
    if(texto [i] == 'A'){
        *A ++;
    }
    if(texto [i] == 'e'){
        *e ++;
    }
    if(texto [i] == 'E'){
        *E ++;
    }
    if(texto [i] == 'i'){
        *i ++;
    }
    if(texto [i] == 'I'){
        *I ++;
    }
    if(texto [i] == 'o'){
        *o ++;
    }
    if(texto [i] == 'O'){
        *O ++;
    }
    if(texto [i] == 'u'){
        *u ++;
    }
    if(texto [i] == 'U'){
        *U ++;
    */

    printf("\nContagens: \na: %d \nA: %d \ne: %d \nE: %d \ni: %d \nI: %d \no: %d \no: %d \nu: %d \nU: %d", a, A, e, E, ii, I, o, O, u, U);

    /*  //Código antigo, e incorreto, porque usava ponteiros
    printf("\nContagens: \n
           'a': %d \n
           'A': %d \n
           'e': %d \n
           'E': %d \n
           'i': %d \n
           'I': %d \n
           'o': %d \n
           'O': %d \n
           'u': %d \n
           'U': %d \n" ,
           *a, *A, *e, *E, *i, *I, *o, *O, *u, *U);
    */

    return 0;
}
