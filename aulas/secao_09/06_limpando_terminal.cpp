#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

void limpadorDeTerminal();

int main(){
    // é um programa sem fim, mas apenas para provar um ponto
    for(int i = 0; i < 1000; i++){
        cout << i << "\n";
        if(i == 999){
            limpadorDeTerminal();
            i = 0;
        }
    }
}

void limpadorDeTerminal(){
    system("cls");
} 

