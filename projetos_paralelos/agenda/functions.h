#ifndef FUNCTIONS
#define FUNCTIONS

typedef struct Contato{
    char primeiroNome[255];
    char ultimoNome[255];
    char email[255];
    char telefone[255];
} contato;

void limpadorTerminal();
void itensMenu();
int adicionaContato(contato *listaDeContatos, int *contador);
void printaContatos(contato *listaDeContatos, int contador);

#endif