#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main(){
    setlocale(LC_ALL, "");

    int opcaoSelecionada;
    float primeiroValor, segundoValor;

    printf("Insira o primeiro valor: ");
    scanf("%f", &primeiroValor);
    printf("\nInsira o segundo valor: ");
    scanf("%f", &segundoValor);

    printf("\nSelecione agora a sua operação: \n1 - Soma \n2 - Subtração \n3 - Multiplicação \n4 - Divisão \nOpção Selecionada: ");
    scanf("%d", &opcaoSelecionada);

    switch(opcaoSelecionada){
        case 1:
            printf("\nA soma entre %f e %f é: %f.", primeiroValor, segundoValor, primeiroValor + segundoValor);
            break;
        case 2:
            printf("\nA subtração entre %f e %f é: %f.", primeiroValor, segundoValor, primeiroValor - segundoValor);
            break;
        case 3:
            printf("\nA multiplicação entre %f e %f é: %f.", primeiroValor, segundoValor, primeiroValor * segundoValor);
            break;
        case 4:
            printf("\nA divisão entre %f e %f é: %f.", primeiroValor, segundoValor, primeiroValor / segundoValor);
            break;
        default:
            printf("\nA opção selecionada foi inválida.");
            break;
    }
}