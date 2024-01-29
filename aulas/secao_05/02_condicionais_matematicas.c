#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

    int a = 5, b = 10, c = 15;
    if (b > 12){
        printf("\nA variavel é maior do que 2.");
    } else if (b > a){
        printf("\nA variavel b é maior do que a variável a.");
    } else if (b >= c){
        printf("\nA variável b é maior ou igual à variável c.");
    }

    if (a != 10){
        printf("\nA variavel a vale %d e não é 10.", a);
    }
}