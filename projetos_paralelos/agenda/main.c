#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "functions.h"

int main(){
    bool teste = true;
    int counter = 0;

    limpadorTerminal();
    while(teste){
        // vai exibir os serviços no terminal
        itensMenu();

        contato listaDeContatos[60];

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
                break;

            // CONSULTAR CONTATO
            case 3:
                limpadorTerminal();
                for (int i = 0; i <= counter; i++){
                    printf("\n%s\n", listaDeContatos[i].primeiroNome);
                }
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