#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int a = 6, b = 3;

    // SOMA
    printf("Soma de %d e %d �: %d.\n", a, b, a + b);

    // SUBTRA��O
    printf("Subtra��o de %d e %d �: %d.\n", a, b, a - b);

    // DIVIS�O
    printf("A divis�o de %d e %d �: %d.\n", a, b, a/b);

    // MULTIPLICA��O
    printf("A multiplica��o de %d e %d �: %d.\n", a, b, a*b);

    // RESTO DA DIVIS�O
    printf("O resto da divis�o de %d e %d �: %d.\n", a, b, a%b);

    // VALOR ABSOLUTO
    printf("O valor absoluto � de -3 �: %d.\n", abs(-3));
}
