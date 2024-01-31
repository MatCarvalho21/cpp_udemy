#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "");

    int vetorTeste[3];
    printf("\nInsira o primeiro valor: ");
    scanf("%d", &vetorTeste[0]);
    printf("\nInsira o segundo valor: ");
    scanf("%d", &vetorTeste[1]);
    printf("\nInsira o terceiro valor: ");
    scanf("%d", &vetorTeste[2]);

    float media = (vetorTeste[0]+vetorTeste[1]+vetorTeste[2])/3;
    printf("\nA média dos valores passado é: %f.", media);

}