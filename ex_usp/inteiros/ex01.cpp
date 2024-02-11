/*
Dada uma seqüência de números inteiros não-nulos, seguida por 0, imprimir seus quadrados.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

void printaQuadrados(int *vetor, int numeroDeEntradas){
    for(int i = 0; i < numeroDeEntradas; i++){
        if (vetor[i] != 0){
            cout << vetor[i]*vetor[i] << "\n";
        } else{
            i = numeroDeEntradas;
        }
    }
}

int main(){
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 0, 10};
    printaQuadrados(vetor, 9);
}