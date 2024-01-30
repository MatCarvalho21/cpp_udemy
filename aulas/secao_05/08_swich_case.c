#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main(){
    setlocale(LC_ALL, "");
    
    int valor = 0;
    printf("Insira um valor: ");
    scanf("%d", &valor);

    switch(valor){
        case 1:
            printf("\nO valor escolhido foi 1.");
            break;
        case 2:
            printf("\nO valor escolhido foi 2.");
            break;
        case 3:
            printf("\nO valor escolhido foi 3.");
            break;
        case 4:
            printf("\nO valor escolhido foi 4.");
            break;
        default:
            printf("\nO valor escolhido não foi nenhum dos correspondentes.");
            break;
    }
}