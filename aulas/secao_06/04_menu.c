#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "");
    int opcao = 0;
    while (opcao != 1 && opcao != 2 && opcao != 3){
        printf("\nSelecione uma opção: ");
        printf("\n1 - Opção 1");
        printf("\n2 - Opção 2");
        printf("\n3 - Opção 3\n");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("\nOpção 1 foi escolhida!");
                break;
            case 2:
                printf("\nOpção 2 foi escolhida!");
                break;
            case 3:
                printf("\nOpção 3 foi escolhida!");
                break;
            default:
                printf("\nOpção inválida.");
                break;
        }
    }
}