#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
    int tamanho, cont;

    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    // em cpp, assim que fazemos a alocação de memória, muito mais fácil e resumido
    int *ponteiroVetor = new int[tamanho]; // o ponteiro recebeu um endereço de memória para armazenar um vetor de int com determinadas entradas

    for(cont = 0; cont < tamanho; cont++){
        ponteiroVetor[cont] = cont * 2;
        cout << "\n" << ponteiroVetor[cont];
    }
}