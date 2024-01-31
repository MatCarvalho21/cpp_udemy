#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main(){
    // criando uma matriz 2x2
    int matriz[2][2];

    // alterando as entradas da matriz (identidade)
    matriz[0][0] = 1;
    matriz[0][1] = 0;
    matriz[1][0] = 0;
    matriz[1][1] = 1;

    // percorrendo os elementos da matriz linha a linha
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            // duas formas de printar elementos
            printf("\n%d\n", matriz[i][j]);
            cout <<  matriz[i][j] << "\n";
        }
    }

    cout << "Digite um valor para alterar o primeiro elemento da matriz: ";
    cin >> matriz[0][0];
    cout << "\n" << matriz[0][0];
}