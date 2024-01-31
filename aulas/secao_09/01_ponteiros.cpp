#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
    // imprimindo o endereço das variáveis
    int a = 100;
    int b = 100;
    cout << &a;
    cout << "\n" << &b;
    /*
    note que mesmo que as variáveis tenham o mesmo valor,
    elas vão possuir endereços únicos na memória
    */
    // VARIÁVEIS ARMAZENAM VALORES
    // PONTEIROS ARMAZENAM POSIÇÕES NA MEMÓRIA

    // definindo ponteiro
    int *ponteiro;

    // ele vai receber um endereço de memória (no caso o da variável b)
    ponteiro = &b;

    //* pode ser lido como conteúdo apontado por 
    *ponteiro = 40; // "pegue o conteúdo apontado pelo ponteiro e transforme em 40 (b = 40)"
    
    cout << "\nEndereço: " << &b;
    cout << "\nValor: " << b;

    return 0;
}