#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

// aloca memória para um vetor do tamanho passado
int* alocaVetor(int tamanho){
    int *ponteiroAuxiliar;
    // a função malloc reserva um espaço na memória do tamahno passado
    // como era um vetor de inteiros, eu passo o número de entradas e multiplico pelo tamanho de um inteiros
    // a função sizeof vai retornar o tamahno de um tipo
    // colocar (int*) força o retorno de um endereço e atribui ao ponteiroAuxiliar
    ponteiroAuxiliar = (int*) malloc(tamanho*sizeof(int));

    return ponteiroAuxiliar;
}

int main(){
    setlocale(LC_ALL, "");

    // quero criar um vetor dinâmico, com tamanho variável
    // dessa forma vou criar um ponteiro que vai receber o endereço desse vetor
    int *ponteiroDoVetor, tamanhoVetor;

    // o usuário está passando qual o tamanho do vetor
    cout << "Insira o tamanho do vetor: ";
    cin >> tamanhoVetor;

    // vamos definir o nosso ponteiro vazio, como o endereço de um vetor do tamanho indicado
    // a função recebe o número de entradas e reserva um espaço na memória para um vetor daquele tamanho
    ponteiroDoVetor = alocaVetor(tamanhoVetor);

    for(int i = 0; i < tamanhoVetor; i++){
        ponteiroDoVetor[i] = i*10;
    }

    for(int i = 0; i < tamanhoVetor; i++){
        cout << "\n" << ponteiroDoVetor[i];
    }

    // após usar o vetor nas aplicações necessárias, a função free
    // vai liberar o espaço na memória que foi alocado para o vetor
    free(ponteiroDoVetor);

}