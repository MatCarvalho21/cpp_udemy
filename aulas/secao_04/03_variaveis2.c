#include <stdio.h>
#include <stdlib.h>
# include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int a = 20, b;

    // CONCATENANDO
    printf("O valor da minha vari�vel �: %d, mas o valor dela ao quadrado �: %d.\n", a, a*a);
    // esse processo de criar v�rias refer�ncias na string e ir passando as vari�veis em sequ�ncia � importante

    // para mudar o valor, n�o preciso declarar o tipo dela novamente
    a = 15;

    printf("Insira o valor da vari�vel b: ");
    scanf("%d", &b);
    printf("O valor da minha vari�vel �: %d, mas o valor dela ao quadrado �: %d.\n", b, b*b);

    // vai pausar a execu��o do programa
    system("pause");
}
