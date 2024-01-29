#include <stdio.h>
#include <stdlib.h>
# include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int a = 20, b;

    // CONCATENANDO
    printf("O valor da minha variável é: %d, mas o valor dela ao quadrado é: %d.\n", a, a*a);
    // esse processo de criar várias referências na string e ir passando as variáveis em sequência é importante

    // para mudar o valor, não preciso declarar o tipo dela novamente
    a = 15;

    printf("Insira o valor da variável b: ");
    scanf("%d", &b);
    printf("O valor da minha variável é: %d, mas o valor dela ao quadrado é: %d.\n", b, b*b);

    // vai pausar a execução do programa
    system("pause");
}
