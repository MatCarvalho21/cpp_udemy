#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <time.h>
#include <string>
#include <iostream>

// usando essa linha de código, não seria necessário declarar ao longo do código
using namespace std;

int main(){
    setlocale(LC_ALL, "");
    // essa é a forma em cpp de trabralhar com strings

    // define a variável
    std::string palavra;
    
    printf("Digite uma palavra: ");
    
    // recebe a palavra, assim como o scanf
    std::cin >> palavra;

    // printa a palavra
    std::cout << "\nA palavra inserida foi: " << palavra;
}