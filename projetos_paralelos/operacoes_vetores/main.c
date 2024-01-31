#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include "fun_vetores.h"

int main(){
    setlocale(LC_ALL, "");
    int opcaoSelecionada;

    printf("CALCULADORA DE VETORES \n");
    printf("\n1 - Somar vetores;");
    printf("\n2 - Subtrair vetores;");
    printf("\n3 - Produto escalar;");
    printf("\n4 - Módulo;\n");
    printf("\nSelecione uma opção: ");
    scanf("%d", &opcaoSelecionada);

    bool teste;
    switch(opcaoSelecionada){
        case 1:
            teste = true;
            somaOuSubtracaoVetores(teste);
            break;
        case 2:
            teste = false;
            somaOuSubtracaoVetores(teste);
            break;
        case 3:
            produtoEscalar();
            break;
        case 4:
            moduloVetor();
            break;
        default:
            break;
    }

}