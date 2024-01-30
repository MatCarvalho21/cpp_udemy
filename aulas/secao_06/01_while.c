#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "");

    int a = 1;
    while(a <= 10){
        printf("%d\n", a);
        a++; // a = a + 1
    }

    while(a >= 1){
        printf("%d\n", a);
        a--; // a = a -1 
    }

}