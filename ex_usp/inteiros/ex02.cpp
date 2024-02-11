/*
Dado um número inteiro positivo n, calcular a soma dos n primeiros números inteiros positivos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

float somaNTermos(int valor){
    return ((valor + 1)*valor)/2;
}

int main(){
    cout << somaNTermos(4);
}