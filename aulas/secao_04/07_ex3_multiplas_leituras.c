#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    float valor_1, valor_2, valor_3;
    printf("Insira, em sequência, o valor das três variáveis: ");
    scanf("%f %f %f", &valor_1, &valor_2, &valor_3);

    float resultado = valor_1 * valor_2* valor_3;
    printf("\nO resultado da multiplicação dos três valores é: %f.", resultado);

}
