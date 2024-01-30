#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "");

    // FAZER A CONTAGEM REGRESSIVA USANDO AS TRÊS MANEIRAS
    
    int a;

    for(a = 10; a >= 1; a--){
        printf("\n%d", a);
    } 

    a = 10;
    do{
        printf("\n%d", a);
        a--;
    } while(a >= 1);

    a = 10;
    while(a >= 1){
        printf("\n%d", a);
        a--;
    }
}