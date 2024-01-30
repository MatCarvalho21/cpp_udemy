#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "");

    int cont;
    for(cont = 1; cont <=10; cont++){
        printf("\n5 X %d = %d", cont, cont*5);
    }

    for(cont = 0; cont <= 10; cont = cont + 2){
        printf("\n%d", cont);
    }

}