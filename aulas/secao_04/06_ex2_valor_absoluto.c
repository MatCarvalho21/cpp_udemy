#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    float nota_1, nota_2, diferenca;

    printf("Insira o valor da primeira nota: ");
    scanf("%f", &nota_1);
    printf("\nInsira o valor da segunda nota: ");
    scanf("%f", &nota_2);
    diferenca = abs(nota_1 - nota_2);
    printf("\nO valor absoluto da diferença entre as notas é : %f.", diferenca);
}
