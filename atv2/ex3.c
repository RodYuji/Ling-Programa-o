#include <stdio.h>
#include <windows.h> //BIBLIOTECA PARA SLEEP

float Depositar(float saldo, float valorDep){ //FUNÇÃO PARA DEPOSITO
    saldo += valorDep;
    printf("Realizado! O seu saldo foi para %.2f\n", saldo);
    return saldo;
}
float Sacar(float saldo, float valorSaque){ //FUNÇÃO PARA SAQUE
    saldo -= valorSaque;
    printf("Realizado! O seu saldo foi para %.2f\n", saldo);
    return saldo;
}
float Transferencia(float saldo, float valorTransf){ //FUNÇÃO PARA TRANSFERÊNCIA
    saldo -= valorTransf;
    printf("Realizado! Sua transferência de %.2f foi realizada!\n", valorTransf);
    saldo -= saldo*0.02;
    printf("A taxa de transferência é de 2 por cento de seu valor, portanto, seu saldo atual é de %.2f\n", saldo);
    return saldo;
}

int main(){
    float saldo = 1000.0;
    float valorDep, valorSaque, valorTransf;
    int func, num;
    printf("--- BEM-VINDO AO CAIXA ELETRÔNICO ---\n");
    while (1){
        printf("\n [1] Consultar saldo atual\n [2] Realizar depósitos\n [3] Realizar saques\n [4] Transferir entre contas\n [5] Sair do sistema\n"); //FUNCIONALIDADES
        printf("Qual operação deseja realizar: ");
        scanf("%d", &func);
        printf("--- CARREGANDO OPERAÇÃO ---\n");
        Sleep(2000); //SLEEP DE 2 SEGUNDOS
        if (func == 1){
            printf("Seu saldo atual é %.2f\n", saldo);
            Sleep(1000);
        } else if (func == 2){
            printf("Digite o valor para depositar: ");
            scanf("%f", &valorDep);
            if (valorDep > 0.01){ //VALIDAÇÃO
                saldo = Depositar(saldo, valorDep); //CHAMADA DA FUNÇÃO
                Sleep(1000);
            } else {
                printf("O valor mínimo para depósito é de 0,01 centavos. Tente novamente.\n");
                Sleep(1000);
            }
        } else if (func == 3){
            printf("Digite o valor para o sacar: ");
            scanf("%f", &valorSaque);
            if (valorSaque <= 500 && valorSaque < saldo){ //VALIDAÇÃO
                saldo = Sacar(saldo, valorSaque); //CHAMADA DA FUNÇÃO
                Sleep(1000);
            } else {
                printf("Saque indisponível. Verifique se o valor de saque é menor que 500 reais ou se o saldo é suficiente.\n");
                Sleep(1000);
            } 

        } else if (func == 4){
            printf("Digite o número da conta à ser transferida: ");
            scanf("%d", &num);
            printf("Digite o valor de transferência: ");
            scanf("%f", &valorTransf);
            if (valorTransf >= 2){ //VALIDAÇÃO
                saldo = Transferencia(saldo, valorTransf); //CHAMADA DA FUNÇÃO
                Sleep(1000);
            } else {
                printf("Transferência disponível. Verifique se o valor mínimo de 2 reis foi ultrapassado.\n");
            }
        } else if (func == 5){
            printf("ENCERRANDO ATIVIDADE...");
            break; //ENCERRAR O TRUE DO WHILE
        }
    }
    return 0;
}

     
