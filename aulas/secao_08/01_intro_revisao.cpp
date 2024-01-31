#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
    // definindo variáveis (principais tipagens)
    int a;
    char letra;
    float c;
    bool teste;

    // atribuindo valores
    a = 10;
    letra = 'm';
    c = 2.58585;
    teste = true;

    // imprimindo os valores C
    printf("\n%d", a);
    printf("\n%c", letra);
    printf("\n%.3f", c); // posso decidir quantas casas decimais eu quero mostrar
    printf("\n%d", teste); // vai mostrar 1 ou 0 (da mesma forma que letras mostram o código asp)
    
    // imprimindo os valores C++
    cout << "\n" << a;
    cout << "\n" << letra;
    cout << "\n" << c;
    cout << "\n" << teste;

    // lendo valores C 
    printf("\nInsira um valor para a variável inteira: ");
    scanf("%d", &a);

    // lendo valores C++
    cout << "\nInsira um valor para a variável inteira: ";
    cin >> a;

    return 0;
} 