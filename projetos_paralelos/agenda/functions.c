#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "functions.h"
#include <string.h>

/*
 * Função: limpadorTerminal
 * ------------------------
 * Limpa a tela do terminal. A implementação pode variar dependendo do sistema operacional.
 */

void limpadorTerminal(){
    // Chama o sistema para limpar a tela do terminal. A implementação depende do sistema operacional.
    system("cls");
}

/*
 * Função: itensMenu
 * -----------------
 * Exibe o menu principal da agenda telefônica no terminal.
 */

void itensMenu(){
    // Imprime as opções do menu no terminal para o usuário.
    printf("\nAGENDA TELEFÔNICA\n\n");
    printf("1 - Adicionar Contato;\n");
    printf("2 - Remover Contato;\n");
    printf("3 - Consultar Contato;\n");
    printf("4 - Sair da Agenda;\n\n");
    printf("Selecione uma das opções: ");
}

/*
 * Função: adicionaContato
 * -----------------------
 * Adiciona um novo contato à lista de contatos.
 *
 * Parametros:
 *   - listaDeContatos: Ponteiro para o array de contatos.
 *   - contador: Ponteiro para a variável que armazena o número atual de contatos.
 *
 * Retorna:
 *   - O novo valor de contador após adicionar o contato.
 */

int adicionaContato(contato *listaDeContatos, int *contador){
    // Verifica se o limite máximo de contatos foi atingido.
    if (*contador == 60){
        printf("CONTATO NÃO PÔDE SER ADICIONADO, POIS O LIMITE FOI ATINGIDO.");
    } else{
        // Declaração de variáveis para armazenar informações do novo contato.
        char nome_[255], sobrenome_[255], email_[255], telefone_[255];

        // Solicita e armazena o primeiro nome do contato.
        limpadorTerminal();
        printf("Insira o primeiro nome do contato: ");
        setbuf(stdin, 0); // Limpa o buffer do stdin para evitar comportamentos inesperados.
        fgets(nome_, 255, stdin); // Lê a entrada do usuário (até 255 caracteres) e armazena em 'nome_'.
        nome_[strlen(nome_) - 1] = '\0'; // Remove o caractere de nova linha (se existir) ao final da string 'nome_'.
        strcpy(listaDeContatos[*contador].primeiroNome, nome_); // Copia o conteúdo de 'nome_' para o campo 'primeiroNome' na estrutura de contato.

        // Solicita e armazena o último nome do contato.
        limpadorTerminal();
        printf("Insira o último nome do contato: ");
        setbuf(stdin, 0);
        fgets(sobrenome_, 255, stdin);
        sobrenome_[strlen(sobrenome_) - 1] = '\0';
        strcpy(listaDeContatos[*contador].ultimoNome, sobrenome_);

        // Solicita e armazena o email do contato.
        limpadorTerminal();
        printf("Insira o email do contato: ");
        setbuf(stdin, 0);
        fgets(email_, 255, stdin);
        email_[strlen(email_) - 1] = '\0';
        strcpy(listaDeContatos[*contador].email, email_);

        // Solicita e armazena o telefone do contato.
        limpadorTerminal();
        printf("Insira o telefone do contato: ");
        setbuf(stdin, 0);
        fgets(telefone_, 255, stdin);
        telefone_[strlen(telefone_) - 1] = '\0';
        strcpy(listaDeContatos[*contador].telefone, telefone_);

        // Exibe mensagem de sucesso e incrementa o contador de contatos.
        limpadorTerminal();
        printf("CONTATO ADICIONADO COM SUCESSO\n\n");

        return *contador + 1;
    }
}

/*
 * Função: printaContatos
 * -----------------------
 * Exibe todos os contatos presentes na lista de contatos.
 *
 * Parametros:
 *   - listaDeContatos: Ponteiro para o array de contatos.
 *   - contador: Número atual de contatos na lista.
 */

void printaContatos(contato *listaDeContatos, int contador){
    // Itera sobre todos os contatos presentes na lista.
    for (int i = 0; i < contador; i++){
        // Imprime informações sobre o contato atual.
        printf("\nCONTATO %d ", i + 1);
        printf("\nNome Completo: %s %s", listaDeContatos[i].primeiroNome, listaDeContatos[i].ultimoNome);
        printf("\nEmail: %s", listaDeContatos[i].email);
        printf("\nTelefone: %s\n", listaDeContatos[i].telefone);
    }
}

/*
 * Função: removeContato
 * ---------------------
 * Remove um contato da lista de contatos com base no número fornecido pelo usuário.
 *
 * Parametros:
 *   - listaDeContatos: Ponteiro para o array de contatos.
 *   - contador: Ponteiro para a variável que armazena o número atual de contatos.
 *
 * Retorna:
 *   - O novo valor de contador após remover o contato.
 */

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