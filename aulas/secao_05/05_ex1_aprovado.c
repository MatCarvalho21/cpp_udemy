#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

void main(){
    setlocale(LC_ALL, "");
    float primeiraNota, segundaNota, terceiraNota;

    printf("Insira a sua primeira nota: ");
    scanf("%f", &primeiraNota);
    printf("\nInsira a sua segunda nota: ");
    scanf("%f", &segundaNota);
    printf("\nInsira a sua terceira, e última, nota: ");
    scanf("%f", &terceiraNota);

    float media = (primeiraNota + segundaNota + terceiraNota) / 3;
    if (media >= 7){
        printf("Sua média foi de %f e, por isso, você foi aprovado.", media);
    } else {
        printf("Sua média foi inferior a 7 e, por isso, você foi reprovado.");
    }
}