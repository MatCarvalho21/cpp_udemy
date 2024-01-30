#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

void main(){
    setlocale(LC_ALL, "");

    float primeiroLado, segundoLado, terceiroLado;

    printf("Insira o valor do primeiro lado do triângulo: ");
    scanf("%f", &primeiroLado);
    printf("\nInsira o valor do segundo lado: ");
    scanf("%f", &segundoLado);
    printf("\nInsira o valor do terceiro lado: ");
    scanf("%f", &terceiroLado);

    if (primeiroLado == segundoLado && primeiroLado == terceiroLado){
        printf("\nEsse triângulo é equilátero.");
    } else{
        printf("\nEsse triângulo não é equilátero.");
    }
}