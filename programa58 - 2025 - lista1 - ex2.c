#include <stdio.h>
#include <locale.h>

/*2. O programa abaixo escreve na tela os nomes e siglas das UF do Brasil.
Em cada linha escreve a sigla e o nome associado. Adapte o programa
para que escreva na tela somente as linhas relativas �s UFs cuja terceira
letra do nome seja 'o'. nota: por simplicidade, os caracteres acentuados
e o 'c' foram substitu�dos.
*/

char *uf [ ] = { //siglas em uf[0,2,4...] nos �ndices pares, enquanto que nomes est�o em uf[1,3,5...] nos �ndices �mpares
"Acre" , "AC" , "Alagoas" , "AL" , "Amap�" , "AP" , "Amazonas" ,
"AM" , "Bahia" , "BA" , "Cear�" , "CE" , "Esp�rito Santo" ,
"ES" , "Goi�s" , "GO" , "Maranh�o" , "MA" , "Mato Grosso" ,
"MT" ,"Mato Grosso do Sul" , "MS" , "Minas Gerais" ,
"MG" , "Par�" , "PA" , "Para�ba" , "PI" , "Rio de Janeiro" ,
"RJ" , "Rio Grande do Norte" , "RN" , "Rio Grande do Sul" ,
"RS" , "Rond�nia" , "RO" , "Roraima" , "RR" ,
"Santa Catarina" , "SC" , "S�o Paulo", "SP" , "Sergipe" ,
"SE" , "Tocantins" , "TO" , "Distrito Federal" , "DF" } ;

int nuf = 27;

int main ( ) {

    setlocale(LC_ALL,"");

    /* For que mostra todos os elementos do char
    for (int i =0; i < nuf ; i++) {
        printf ("%d , %s , %s \n", i , uf[2*i +1] , uf[2*i]);
    }
    */

    for ( int i = 0 ; i < nuf ; i++) {
        if (uf[2*i][2] == 'o'){
            printf ("%d , %s , %s \n", i , uf[2*i +1] , uf[2*i]);
        }
    }

    return 0 ;
}
