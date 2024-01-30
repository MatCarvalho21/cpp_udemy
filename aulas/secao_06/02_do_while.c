#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "");
    int a = 1;

    do{
        printf("\n%d", a);
        a++;
    } while(a<=10);

    /*
    A diferença de usar o do, é que ele será executado e depois 
    vai comparar. Caso a fosse 20, ele printaria 20 e depois verificaria, 
    impedindo o programa de imprimir 21.
    */
}