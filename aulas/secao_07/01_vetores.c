#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "");

    // definindo um vetor
    int vetor[3];

    // alterando as entradas
    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;

    // acessando os elementos
    for (int i = 0; i < 3; i++){
        printf("\nA entrada de número %d é %d.", i, vetor[i]);
    }
}