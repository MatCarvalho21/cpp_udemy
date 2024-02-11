/*
Uma loja de discos anota diariamente durante o mês de março a quantidade de discos vendidos. 
Determinar em que dia desse mês ocorreu a maior venda e qual foi a quantidade de discos vendida nesse dia.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

void verificadorDeVendas(int *vetor, int numeroDeEntradas){
    int valorFinal = 0;
    int dia = 0;
    for (int i = 0; i < numeroDeEntradas; i++){
        if (valorFinal < vetor[i]){
            valorFinal = vetor[i];
            dia = i;
        }
    }
    cout << "A maior venda foi feita no dia " << dia << " de marco, quando foram vendidos " << valorFinal << " discos.\n";
}

int main(){
    int vetorDeVendas[30] = {23, 45, 12, 87, 34, 56, 91, 10, 74, 28, 53, 17, 60, 38, 82, 49, 95, 63, 42, 76, 19, 31, 67, 88, 25, 50, 84, 36, 70, 14};
    verificadorDeVendas(vetorDeVendas, 30);
}