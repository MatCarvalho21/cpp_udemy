#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// dessa forma, posso me referir a struct data de nascimento apenas como data, como se fosse um tipo
typedef struct DataDeNascimento{
    int dia;
    int mes;
    int ano;
} data;

struct Aluno{
    int id;
    data nascimento;
};

int main(){
    struct Aluno aluno1;

    aluno1.id = 25000;
    aluno1.nascimento.dia = 21;
    aluno1.nascimento.mes = 4;
    aluno1.nascimento.ano = 2004;

    printf("Aluno 1\n");
    printf("ID: %d\n", aluno1.id);
    printf("Data de Nascimento: %d/%d/%d", aluno1.nascimento.dia, aluno1.nascimento.mes, aluno1.nascimento.ano);
}