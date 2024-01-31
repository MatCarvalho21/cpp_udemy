#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

// uma função que reliza uma tarefa simples, mas sem nenhum retorno
// note que ela precisa estar definida em uma posição anterior da sua chamada, no caso o bloco main
void printSeparador(){
    printf("\n|------------------------------------|\n");
}

int main(){
    for(int i = 0; i < 5; i++){
        printSeparador();
    }
}