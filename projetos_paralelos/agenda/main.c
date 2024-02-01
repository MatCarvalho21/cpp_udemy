#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "functions.h"

int main(){
    bool *teste = true;

    limpadorTerminal();
    while(teste){
        // vai exibir os serviços no terminal
        itensMenu();

        int counter = 0;
        contato listaDeContatos[60];

        // o usuário vai selecionar uma das opções
        int opcao;
        scanf("%d", &opcao);

        switch(opcao){

            // ADICIONAR CONTATO
            case 1:
                limpadorTerminal();
                adicionaContato(listaDeContatos, &counter);
                break;

            // REMOVER CONTATO
            case 2:
                break;

            // CONSULTAR CONTATO
            case 3:
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