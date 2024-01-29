#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int a = 6, b = 3;

    // SOMA
    printf("Soma de %d e %d é: %d.\n", a, b, a + b);

    // SUBTRAÇÃO
    printf("Subtração de %d e %d é: %d.\n", a, b, a - b);

    // DIVISÃO
    printf("A divisão de %d e %d é: %d.\n", a, b, a/b);

    // MULTIPLICAÇÃO
    printf("A multiplicação de %d e %d é: %d.\n", a, b, a*b);

    // RESTO DA DIVISÃO
    printf("O resto da divisão de %d e %d é: %d.\n", a, b, a%b);

    // VALOR ABSOLUTO
    printf("O valor absoluto é de -3 é: %d.\n", abs(-3));
}
