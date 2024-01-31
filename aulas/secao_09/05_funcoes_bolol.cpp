#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

bool verificaPares(int valor);

int main(){
    bool teste;
    for(int i = 0; i < 10; i++){
        teste = verificaPares(i);
        if(teste){
            cout << i << "é um número par.\n";
        }else{
            cout << i << "é um número ímpar.\n";
        }
    }
}

bool verificaPares(int valor){
    if(valor % 2 == 0){
        return true;
    } else{
        return false;
    }
}