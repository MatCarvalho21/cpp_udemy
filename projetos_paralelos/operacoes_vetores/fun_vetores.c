#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include "fun_vetores.h"
#include <math.h>

void limpadorTerminal(){
    system("cls");
}

int* alocaVetor(int numeroDeEntradas){
    int *ponteiroAuxiliar;
    ponteiroAuxiliar = (int*) malloc(numeroDeEntradas*sizeof(int));
    return ponteiroAuxiliar;
}

int* defineVetor(int numeroDeEntradas, int numeroVetor){
    int *vetor;
    vetor = alocaVetor(numeroDeEntradas);

    for(int i = 0; i < numeroDeEntradas; i++){
        limpadorTerminal();
        int valorEntrada;
        printf("Vetor %d - Digite o valor da entrada de número %d: ", numeroVetor, i + 1);
        scanf("%d", &valorEntrada);
        vetor[i] = valorEntrada;
    }

    return vetor;
}

void somaOuSubtracaoVetores(bool soma){
    limpadorTerminal();
    int numeroDeEntradas;
    printf("Digite o número de entradas dos vetores (devem ter o mesmo número de entradas): ");
    scanf("%d", &numeroDeEntradas);

    int *vetor_1, *vetor_2;
    vetor_1 = defineVetor(numeroDeEntradas, 1);
    vetor_2 = defineVetor(numeroDeEntradas, 2);

    int vetorResultado[numeroDeEntradas];
    for(int i = 0; i < numeroDeEntradas; i++){
        if (soma){
            vetorResultado[i] = vetor_1[i] + vetor_2[i];
        } else{
            vetorResultado[i] = vetor_1[i] - vetor_2[i];
        }
    }

    free(vetor_1);
    free(vetor_2);

    limpadorTerminal();
    if (soma){
        printf("Segue, abaixo, o vetor resultado da soma: \n");
    } else{
        printf("Segue, abaixo, o vetor resultado da subtração: \n");
    }

    for(int i = 0; i < numeroDeEntradas; i++){
        printf("\n%d", vetorResultado[i]);
    }

    free(vetorResultado);
}

void produtoEscalar(){
    limpadorTerminal();
    int numeroDeEntradas;
    printf("Digite o número de entradas dos vetores (devem ter o mesmo número de entradas): ");
    scanf("%d", &numeroDeEntradas);

    int *vetor_1, *vetor_2;
    vetor_1 = defineVetor(numeroDeEntradas, 1);
    vetor_2 = defineVetor(numeroDeEntradas, 2);

    int resultadoFinal = 0;

    for(int i = 0; i < numeroDeEntradas; i++){
        resultadoFinal = resultadoFinal + vetor_1[i] * vetor_2[i];
    }

    free(vetor_1);
    free(vetor_2);

    limpadorTerminal();
    printf("O resultado do produto escalar dos dois vetores é: %d.", resultadoFinal);
}

void moduloVetor(){
    limpadorTerminal();
    int numeroDeEntradas;
    printf("Digite o número de entradas do vetor: ");
    scanf("%d", &numeroDeEntradas);

    int *vetor_1;
    vetor_1 = defineVetor(numeroDeEntradas, 1);

    int resultadoFinal = 0;

    for(int i = 0; i < numeroDeEntradas; i++){
        resultadoFinal = resultadoFinal + vetor_1[i] * vetor_1[i];
    }

    free(vetor_1);

    limpadorTerminal();
    double out;
    out = sqrt(resultadoFinal);
    printf("O módulo do vetor é: %.2f.", out);
}