#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "functions.h"

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

void adicionaContato(contato *listaDeContatos, int *contador){
    if (*contador == 60){
        printf("CONTATO NÃO PÔDE SER ADICIONADO, POIS O LIMITE FOI ATINGIDO.");
    } else{
        char nome[255], sobrenome[255], email[255], telefone[255];

        limpadorTerminal();
        printf("Insira o primeiro nome do contato: ");
        setbuf(stdin, 0);
        fgets(nome, 255, stdin);
        nome[strlen(nome) - 1] = '\0';
        *listaDeContatos[*contador].primeiroNone = nome;

        limpadorTerminal();
        printf("Insira o último nome do contato: ");
        setbuf(stdin, 0);
        fgets(sobrenome, 255, stdin);
        sobrenome[strlen(sobrenome) - 1] = '\0';
        *listaDeContatos[*contador].ultimoNone = nome;

        limpadorTerminal();
        printf("Insira o email do contato: ");
        setbuf(stdin, 0);
        fgets(email, 255, stdin);
        email[strlen(email) - 1] = '\0';
        *listaDeContatos[*contador].email = nome;

        limpadorTerminal();
        printf("Insira o telefone do contato: ");
        setbuf(stdin, 0);
        fgets(telefone, 255, stdin);
        telefone[strlen(telefone) - 1] = '\0';
        *listaDeContatos[*contador].telefone = nome;

        limpadorTerminal();
        printf("CONTATO ADICIONADO COM SUCESSO\n\n");

        *contador++;
    }
}