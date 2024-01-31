#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "");
    // defino um vetor de char com 255 entradas
    char palavra[255];

    // limpo o buffer para garantir
    setbuf(stdin, 0);
    
    // faço a leitura da inserção do usuário
    printf("Digite sua palavra:");
    fgets(palavra, 255, stdin);

    // dessa forma, eu garanto que a variável palavra vai ter apenas o número de casas necessárias, não as 255
    palavra[strlen(palavra) - 1] = '\0';

    // print simples, %s serve para strings
    printf("%s", palavra);
}