#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void limpadorTerminal(){
    system("cls");
}

void itensMenu(){
    printf("AGENDA TELEFÔNICA\n\n");
    printf("1 - Adicionar Contato;\n");
    printf("2 - Remover Contato;\n");
    printf("3 - Consultar Contato;\n");
    printf("4 - Sair da Agenda;\n\n");
    printf("Selecione uma das opções: ");
}