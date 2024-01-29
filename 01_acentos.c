#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // this is a requiremet

void main(){
    // this is another one
    setlocale(LC_ALL, "");

    printf("Olá, mundo.");
}
