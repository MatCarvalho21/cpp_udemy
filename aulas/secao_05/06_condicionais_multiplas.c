#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

void main(){
    setlocale(LC_ALL, "");

    int a = 10;

    // conectivo and (&&) 
    if (a > 5 && a < 15){
        printf("A variável está entre 5 e 15.");
    }

    // conectivo or (||)
    if (a == 10 || a == 20){
        printf("\nA variável é 10 ou 20.");
    }

    // condicionais compostos
    if ((a >= 10 && a < 15) || a < 0){
        printf("\nA variável está entre 10 e 15, ou ela é um valor negativo.");
    }
}