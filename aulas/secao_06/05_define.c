#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <time.h>

// constantes são variáveis que NUNCA vão mudar durante o código
#define TAM 10 // o programa impede que constantes sejam alteradas ao longo do código

int main(){
    setlocale(LC_ALL, "");
    printf("\n%d", TAM);
}