#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main(){
    int matriz[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "\nDigite o valor na posição " << i << " " << j << " da matriz: ";
            cin >> matriz[i][j];
        }
    }

    int matrizFinal[3][3];

    cout << "\nApós inverter sua matriz, ela ficou da seguinte maneira: \n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matriz[2 - i][j] << " ";
            matrizFinal[i][j] = matriz[2 - i][j];
        }
        cout << "\n";
    }
}