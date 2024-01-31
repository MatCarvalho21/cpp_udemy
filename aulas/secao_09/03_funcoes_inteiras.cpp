#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

// essa é uma alternativa para definir a função depois da main
// basta definir a função antes e constru-lá depois
int quadrado(int numero);

int main(){
    for(int i = 0; i < 101; i++){
        cout << quadrado(i) << "\n";
    }
}

// ainda não foi passado no curso, mas é assim que se cria uma função com um parâmetro
int quadrado(int numero){
    return numero*numero;
}