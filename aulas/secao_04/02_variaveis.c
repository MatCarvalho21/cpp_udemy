#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    /*
    para printar o valor de uma vari�vel interira, vamos formular a string
    e passar %d, como segundo par�metro da fun��o, passamos a pr�pria vari�vel
    OBS.: LEMBRANDO QUE ISSO S� FUNCIONA PARA VARI�VEIS INTEIRAS
    */

    int a = 10;
    printf("O valor da minha vari�vel �: %d. \n", a);
    // vai funcionar como, mais ou menos, como o input em python
    printf("Insira um novo valor para a vari�vel: ");
    // atribui um novo valor a vari�vel a, buscando a refer�ncia dela na mem�ria
    scanf("%d", &a);
    printf("O valor da minha vari�vel, agora, �: %d. \n", a);

    float b = 10.5;
    // para vari�veis floats temos o %f
    printf("O valor da minha vari�vel �: %f. \n", b);
    printf("Insira um novo valor para a vari�vel: ");
    scanf("%f", &b);
    printf("O valor da minha vari�vel, agora, �: %f. \n", b);

    char letra = 'a';
    // para vari�veis do tipo char, vamos usar %c
    printf("O valor da minha vari�vel �: %c. \n", letra);
    printf("Insira um novo valor para a vari�vel: ");
    // vai limpar o buffer (mem�ria tempor�ria de leitura)
    fflush(stdin);
    scanf("%c", &letra);
    printf("O valor da minha vari�vel, agora, �: %c. \n", letra);

    printf("� asssim \nque se \npula uma \nlinha.");
}
