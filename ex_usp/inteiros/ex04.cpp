/*
Dados um inteiro x e um inteiro não-negativo n, calcular x^n.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

void teste(int valor, int expoente){
    if (expoente > 0){
        int valorFinal = valor;
        int teste = 1;

        if (expoente == 1){
            cout << valorFinal << "\n";
        }

        while (teste < expoente){
            valorFinal = valorFinal*valor;
            teste++;
            if (teste == expoente){
                cout << valorFinal << "\n";
            }
        }

    } else if (expoente == 0){
        cout << "1\n";
    } else{
        cout << "O expoente deve ser maior ou igual a zero.\n";
    }
}

int main(){
    int i = -1;
    while(i <= 10){
        teste(4, i);
        i++;
    }
}