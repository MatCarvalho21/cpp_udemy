#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "functions.h"
#include <string.h>

void limpadorTerminal(){
    system("cls");
}

void itensMenu(){
    printf("\nAGENDA TELEFÔNICA\n\n");
    printf("1 - Adicionar Contato;\n");
    printf("2 - Remover Contato;\n");
    printf("3 - Consultar Contato;\n");
    printf("4 - Sair da Agenda;\n\n");
    printf("Selecione uma das opções: ");
}

int adicionaContato(contato *listaDeContatos, int *contador){
    if (*contador == 60){
        printf("CONTATO NÃO PÔDE SER ADICIONADO, POIS O LIMITE FOI ATINGIDO.");
    } else{
        char nome_[255], sobrenome_[255], email_[255], telefone_[255];

        limpadorTerminal();
        printf("Insira o primeiro nome do contato: ");
        setbuf(stdin, 0);
        fgets(nome_, 255, stdin);
        nome_[strlen(nome_) - 1] = '\0';
        strcpy(listaDeContatos[*contador].primeiroNome, nome_);

        limpadorTerminal();
        printf("Insira o último nome do contato: ");
        setbuf(stdin, 0);
        fgets(sobrenome_, 255, stdin);
        sobrenome_[strlen(sobrenome_) - 1] = '\0';
        strcpy(listaDeContatos[*contador].ultimoNome, sobrenome_);

        limpadorTerminal();
        printf("Insira o email do contato: ");
        setbuf(stdin, 0);
        fgets(email_, 255, stdin);
        email_[strlen(email_) - 1] = '\0';
        strcpy(listaDeContatos[*contador].email, email_);

        limpadorTerminal();
        printf("Insira o telefone do contato: ");
        setbuf(stdin, 0);
        fgets(telefone_, 255, stdin);
        telefone_[strlen(telefone_) - 1] = '\0';
        strcpy(listaDeContatos[*contador].telefone, telefone_);

        limpadorTerminal();
        printf("CONTATO ADICIONADO COM SUCESSO\n\n");

        return *contador + 1;
    }
}

void printaContatos(contato *listaDeContatos, int contador){
    for (int i = 0; i < contador; i++){
        printf("\nCONTATO %d ", i + 1);
        printf("\nNome Completo: %s %s", listaDeContatos[i].primeiroNome, listaDeContatos[i].ultimoNome);
        printf("\nEmail: %s", listaDeContatos[i].email);
        printf("\nTelefone: %s\n", listaDeContatos[i].telefone);
    }
}

int removeContato(contato *listaDeContatos, int *contador){
    bool teste = true;
    int opcao;

    limpadorTerminal();
    while(teste){
        printaContatos(listaDeContatos, *contador);
        printf("\nDigite o número do contato que você deseja remover: ");
        scanf("%d", &opcao);
        if (opcao >= 0 && opcao <= *contador){
            teste = false;

            for (int i = opcao - 1; i < *contador; i++){
                listaDeContatos[i] = listaDeContatos[i + 1];
            }

            limpadorTerminal();
            printf("CONTATO REMOVIDO COM SUCESSO\n\n");

        } else{
            limpadorTerminal();
            printf("SELECIONE UMA OPÇÃO VÁLIDA\n\n");
        }

    }

    return *contador - 1;
}