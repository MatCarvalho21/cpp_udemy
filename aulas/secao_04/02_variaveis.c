#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    /*
    para printar o valor de uma variável interira, vamos formular a string
    e passar %d, como segundo parâmetro da função, passamos a própria variável
    OBS.: LEMBRANDO QUE ISSO SÓ FUNCIONA PARA VARIÁVEIS INTEIRAS
    */

    int a = 10;
    printf("O valor da minha variável é: %d. \n", a);
    // vai funcionar como, mais ou menos, como o input em python
    printf("Insira um novo valor para a variável: ");
    // atribui um novo valor a variável a, buscando a referência dela na memória
    scanf("%d", &a);
    printf("O valor da minha variável, agora, é: %d. \n", a);

    float b = 10.5;
    // para variáveis floats temos o %f
    printf("O valor da minha variável é: %f. \n", b);
    printf("Insira um novo valor para a variável: ");
    scanf("%f", &b);
    printf("O valor da minha variável, agora, é: %f. \n", b);

    char letra = 'a';
    // para variáveis do tipo char, vamos usar %c
    printf("O valor da minha variável é: %c. \n", letra);
    printf("Insira um novo valor para a variável: ");
    // vai limpar o buffer (memória temporária de leitura)
    fflush(stdin);
    scanf("%c", &letra);
    printf("O valor da minha variável, agora, é: %c. \n", letra);

    printf("É asssim \nque se \npula uma \nlinha.");
}
