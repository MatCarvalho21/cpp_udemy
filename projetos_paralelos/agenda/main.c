#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "functions.h"
#include <locale.h>

#define MAX_CONTATOS 60

int main(){
    setlocale(LC_ALL, "");
    bool teste = true;
    int counter = 0;
    contato listaDeContatos[MAX_CONTATOS];

    limpadorTerminal();
    while(teste){
        // vai exibir os serviços no terminal
        itensMenu();

        // o usuário vai selecionar uma das opções
        int opcao;
        scanf("%d", &opcao);

        switch(opcao){

            // ADICIONAR CONTATO
            case 1:
                limpadorTerminal();
                counter = adicionaContato(listaDeContatos, &counter);
                break;

            // REMOVER CONTATO
            case 2:
                limpadorTerminal();
                counter = removeContato(listaDeContatos, &counter);
                break;

            // CONSULTAR CONTATO
            case 3:
                limpadorTerminal();
                printaContatos(listaDeContatos, counter);
                break;

            // SAIR DA AGENDA
            case 4:
                limpadorTerminal();
                teste = false;
                break;
            
            // OPÇÃO INVÁLIDA
            default:
                limpadorTerminal();
                printf("SELECIONE UMA OPÇÃO VÁLIDA\n\n");
                break;
        }

    }
}