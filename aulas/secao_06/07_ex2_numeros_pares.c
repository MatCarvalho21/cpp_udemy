#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "");
    int a;

    for (a = 10; a <= 20; a = a + 2){
        printf("\n%d", a);
    }

}