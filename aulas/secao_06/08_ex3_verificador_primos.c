#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "");

    int valorAnalisado;
    printf("Digite o valor a ser analisado: ");
    scanf("%d", &valorAnalisado);

    if(valorAnalisado <= 1){
        printf("\nO número inserido não é primo, pois ele é menor ou igual a 1.");
    }else if (valorAnalisado % 2 == 0 && valorAnalisado > 1){
        printf("\nO número inserido não é primo, pois ele é par.");
    } else{
        int verificador = 0;
        int teste;

        for (teste = 3; teste < valorAnalisado; teste = teste + 2){
            if (valorAnalisado % teste == 0){
                verificador = 1;
            }
        }

        if (verificador == 1){
            printf("\nO número inserido não é primo.");
        } else{
            printf("\nO número inserido é primo.");
        }
    }

}
