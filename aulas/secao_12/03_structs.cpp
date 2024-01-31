#include <stdio.h>
#include <string.h>
#include <iostream>
#include <new>

using namespace std;

struct Fruta{
    string cor;
    string nome;
};

int main(){
    // ponteiro para struct
    Fruta *primeiraFruta = new Fruta;

    primeiraFruta -> cor = "Amarela";
    primeiraFruta -> nome = "Banana";

    cout << "Nome: " << primeiraFruta -> nome << "\n";
    cout << "Cor: " << primeiraFruta -> cor << "\n";

    Fruta *listaDeFrutas = new Fruta[3];

    listaDeFrutas[0].cor = "Laranja";
    listaDeFrutas[0].nome = "Laranja";

    listaDeFrutas[1].cor = "Verde";
    listaDeFrutas[1].nome = "Limão";

    listaDeFrutas[2].cor = "Roxa";
    listaDeFrutas[2].nome = "Uva";

    for(int i = 0; i < 3; i++){
        cout << "Nome: " << listaDeFrutas[i].nome << "\n";
        cout << "Cor: " << listaDeFrutas[i].cor << "\n";
    }

}