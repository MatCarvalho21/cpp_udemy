#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

void elevaAoQuadrado(int *enderecoDoValor);
int retornaQuadrado(int valor);

int main(){
    int a = 10;

    // sem ponteiro
    a = retornaQuadrado(a);

    // com ponteiro
    elevaAoQuadrado(&a);

    /*
    note que não foi necessário uma atribuição
    foi passado um endereço na memória e a função
    alterou diretamente o seu valor, isso é uma
    vantagem quando falamos de otimização de memória
    */
}

void elevaAoQuadrado(int *enderecoDoValor){
    *enderecoDoValor = (*enderecoDoValor) * (*enderecoDoValor);
}

int retornaQuadrado(int valor){
    return valor*valor;
}