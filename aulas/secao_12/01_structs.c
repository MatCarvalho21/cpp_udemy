#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct palavra{
    int ordem;
    char texto[255];
};

int main(){
    // criando uma 'instância' da struct
    struct palavra primeiraPalavra;

    // definindo um 'atributo' das structs
    primeiraPalavra.ordem = 0;
    strcpy(primeiraPalavra.texto, "Matheus"); // uma forma de definir strings

    // acessando um 'atributo' das structs
    printf("Ordem: %d\n", primeiraPalavra.ordem);
    printf("Palavra: %s\n", primeiraPalavra.texto);

    // vetor de structs 
    struct palavra listaDePalavras[3];

    for(int i = 0; i < 3; i++){
        listaDePalavras[i].ordem = i;
        strcpy(listaDePalavras[i].texto, "Matheus");
        printf("Ordem: %d\n", listaDePalavras[i].ordem);
        printf("Palavra: %s\n", listaDePalavras[i].texto);
    }
}