#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

    int a = 5;
    
    // essas são as estruturas de condicionais, ainda existe o swicht case
    if (a == 5){
        printf("A variável a é igual a 5.");
    } else if (a == 4) {
        printf("A variável a é igual a 4.");
    } else {
        printf("A variável não é igual nem a 4, nem a 5.");
    }
    
    if (a % 2 == 0){
        printf("\nEsse número é par.");
    } else {
        printf("\nEsse número é ímpar.");
    }

}