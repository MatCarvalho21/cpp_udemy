#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>
#include <new>

using namespace std;

int main(){
    // definindo variáveis
    int linhas = 3, colunas = 3;
    int **matriz;

    // alocando memórias para as linhas 
    matriz = (int **) new int(linhas);

    // alocando memórias para cada coluna
    for(int i = 0; i < linhas; i++){
        matriz[i] = (int *) new int(colunas);
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            matriz[i][j] = i * j;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
