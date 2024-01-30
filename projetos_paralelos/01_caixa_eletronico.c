#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "");
    char cpfUsuario[11], senhaUsuario[20];
    int opcaoUsuario;
    float saldoUsuario = 0;

    system("cls");
    printf("BEM-VINDO AO CAIXA ELETRÔNICO");
    printf("\nDigite o CPF (apenas números): ");
    scanf("%s", &cpfUsuario);
    printf("\nDigite sua senha: ");
    scanf("%s", &senhaUsuario);

    system("cls");
    while (true){
        printf("CPF Usuário: %s", cpfUsuario);
        printf("\n\nSelecione, agora, qual operação você deseja realizar: ");
        printf("\n1 - Consultar saldo;");
        printf("\n2 - Realizar saque;");
        printf("\n3 - Fazer depósito;");
        printf("\n4 - Sair da conta.");
        printf("\n\nSelecione sua opção: ");
        scanf("%d", &opcaoUsuario);
        
        switch(opcaoUsuario){

            case 1: // CONSULTA
                system("cls");
                printf("O seu saldo é de R$ %.2f.\n\n", saldoUsuario);
                break;

            case 2: // SAQUE
                float saqueUsuario;
                system("cls");
                printf("Insira o valor do saque: ");
                scanf("%f", &saqueUsuario);
                
                if (saqueUsuario <= saldoUsuario){
                    saldoUsuario = saldoUsuario - saqueUsuario;
                    system("cls");
                    printf("O seu novo saldo é de R$ %.2f.\n\n", saldoUsuario);
                } else{
                    system("cls");
                    printf("Saque negado, pois seu saldo é insuficiente. \n\n");
                }
                break;

            case 3: // DEPÓSITO
                system("cls");
                float depositoUsuario;
                printf("Insira o valor do depósito: ");
                scanf("%f", &depositoUsuario);
                saldoUsuario = saldoUsuario + depositoUsuario;
                system("cls");
                printf("O seu novo saldo é de R$ %.2f.\n\n", saldoUsuario);
                break;

            case 4: // LOGOUT
                main();
                break;

            default: // OPÇÃO INVÁLIDA
                system("cls");
                printf("Opção inválida selecionada, tente novamente. \n\n");
                break;
        }
    }
}