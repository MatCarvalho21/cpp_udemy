#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    float primeira_nota = 0, segunda_nota = 0;
    printf("Insira o valor da sua primeira nota: ");
    scanf("%f", &primeira_nota);


    printf("\nInsira o valor da segunda nota: ");
    scanf("%f", &segunda_nota);

    float media = (primeira_nota + segunda_nota)/2;
    printf("\nA média entre as duas notas é: %f.", media);
}
