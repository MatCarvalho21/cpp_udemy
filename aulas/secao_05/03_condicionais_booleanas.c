#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main(){
    setlocale(LC_ALL, "");

    bool a = true;
    bool b = false;

    if (a){
        printf("A variável a é igual a 'true'.");
    } else{
        printf("A variável a é igual a 'false'.");
    }

    // o sinal antes da variável, ou de uma operação lógica, inverte a variável, logo !b é true 
    if (!b){
        printf("A variável b é igual a 'false'.");
    } else{
        printf("A variável b é igual a 'true'.");
    }
}