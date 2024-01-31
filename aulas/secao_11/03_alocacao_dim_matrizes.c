#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    // definindo variáveis
    int linhas = 3, colunas = 3;
    int **matriz;

    // alocando memórias para as linhas 
    matriz = (int **) malloc(linhas * sizeof(int *));

    // alocando memórias para cada coluna
    for(int i = 0; i < linhas; i++){
        matriz[i] = (int *) malloc(colunas * sizeof(int));
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            matriz[i][j] = i * j;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // liberando o espaço da memória
    free(matriz);
}
