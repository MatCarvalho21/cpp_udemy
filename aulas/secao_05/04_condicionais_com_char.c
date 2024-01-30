#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

void main(){
    setlocale(LC_ALL, "");

    char letra = 'x';
    if (letra == 'x'){
        printf("Deu certo.");
    }

    // dessa forma é possível descobrir o código de cada símbolo
    printf("\nO código ASP da letra é: %d.", letra);

    // dessa forma podemos comparar letras/símbolos com inteiros, nesse caso o programa vai olhar para seu código
    if (letra == 120){
        printf("O código da letra é de fato 120.");
    }
}