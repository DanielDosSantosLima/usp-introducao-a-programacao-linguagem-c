#include <stdio.h>

char *uf[] = {
"Acre", "AC", "Alagoas", "AL", "Amapa", "AP",
"Amazonas", "AM", "Bahia", "BA", "Ceara", "CE",
"Espirito Santo", "ES", "Goias", "GO", "Maranhao",
"MA", "Mato-Grosso", "MT", "Mato Grosso do Sul",
"MS", "Minas Gerais", "MG", "Para", "PA", "Paraiba",
"PB", "Parana", "PR", "Pernambuco", "PE", "Piaui",
"PI", "Rio de Janeiro", "RJ", "Rio Grande do Norte",
"RN", "Rio Grande do Sul", "RS","Rondonia", "RO",
"Roraima", "RR", "Santa Catarina", "SC",
"Sao Paulo", "SP", "Sergipe", "SE", "Tocantins",
"TO", "Distrito Federal", "DF"};

int nuf = 27;

int main(){

    for (int i = 0; i < nuf; i++){
        printf("%d, %s, %s\n", i, uf[2*i+1], uf[2*i]);
    }

    return 0;
}
