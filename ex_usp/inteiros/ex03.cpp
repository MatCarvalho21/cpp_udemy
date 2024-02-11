/*
Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.

Exemplo: Para n=4 a saída deverá ser 1,3,5,7.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

void primeirosNImpares(int valor){
    int valorInicial = 1;
    while (valor > 0){
        cout << valorInicial;
        valorInicial = valorInicial + 2;
        if (valor != 1){
            cout << ", ";
        }
        valor--;
    }
}

int main(){
    primeirosNImpares(20);
}