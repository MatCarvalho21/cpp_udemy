#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "");

    // necessário para gerar o valor aleatório
    srand((unsigned)time(NULL));

    int limiteDoIntervalo = 10;
    
    // dessa forma eu vou receber um número aleatório entre 0 e 9
    int aleatorio = rand() % limiteDoIntervalo;
    printf("%d", aleatorio);

    // dessa forma vou receber um valor entre 1 e 10
    int aleatorio2 = (rand() % limiteDoIntervalo) + 1;
    printf("\n%d", aleatorio2);
}