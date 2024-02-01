#ifndef FUNCTIONS
#define FUNCTIONS

typedef struct Contato{
    char primeiroNone[255];
    char ultimoNone[255];
    char email[255];
    char telefone[255];
} contato;

void limpadorTerminal();
void itensMenu();
void adicionaContato(contato *listaDeContatos, int *contador);

#endif