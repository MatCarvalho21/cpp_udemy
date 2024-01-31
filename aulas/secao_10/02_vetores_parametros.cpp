#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

void elevaVetorQuadrado(int *vetor, int numeroDeEntradas);

int main(){
    int vetor[5] = {1, 2, 3, 4, 5}; // alternativa para definir um vetor, serve para matrizes também
    elevaVetorQuadrado(vetor, 5); // na hora de passar como parâmetro, não é necessário o &

    for(int i = 0; i < 5; i++){
        cout << vetor[i] << "\n";
    }
}

// toda vez que um vetor é passado para uma função, ele é visto como um ponteiro
// dessa forma, não é necessário usar * toda vez que for se referir a ele dentro da função
void elevaVetorQuadrado(int *vetor, int numeroDeEntradas){
    for(int i = 0; i < numeroDeEntradas; i++){
        vetor[i] = (vetor[i]) * (vetor[i]);
    }
}