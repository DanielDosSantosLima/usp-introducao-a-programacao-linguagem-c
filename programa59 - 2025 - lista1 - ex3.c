#include <stdio.h>
#include <locale.h>

/*

Enunciado da questão 3

*/

char *uf [ ] = { //siglas em uf[0,2,4...] nos índices pares, enquanto que nomes estão em uf[1,3,5...] nos índices ímpares
"Acre" , "AC" , "Alagoas" , "AL" , "Amapá" , "AP" , "Amazonas" ,
"AM" , "Bahia" , "BA" , "Ceará" , "CE" , "Espírito Santo" ,
"ES" , "Goiás" , "GO" , "Maranhão" , "MA" , "Mato Grosso" ,
"MT" ,"Mato Grosso do Sul" , "MS" , "Minas Gerais" ,
"MG" , "Pará" , "PA" , "Paraíba" , "PI" , "Rio de Janeiro" ,
"RJ" , "Rio Grande do Norte" , "RN" , "Rio Grande do Sul" ,
"RS" , "Rondônia" , "RO" , "Roraima" , "RR" ,
"Santa Catarina" , "SC" , "São Paulo", "SP" , "Sergipe" ,
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
