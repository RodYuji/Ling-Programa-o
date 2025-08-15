#include <stdio.h>

int main (){
    int num1, num2, escolha, result;
    printf("=== CALCULADORA ===\n");
    printf("Digite o primerio número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite a operação desejada: \n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    if (escolha == 1){
        result = num1 + num2;
        printf("O resultado da sua operação é: %d", result);
    } else if (escolha == 2){
        result = num1 - num2;  
        printf("O resultado da sua operação é: %d", result);
    } else if (escolha ==3){
        result = num1 * num2;
        printf("O resultado da sua operação é: %d", result);
    } else if (escolha == 4){
        if (num2 != 0){
        result = num1/num2;
        printf("O resultado da sua operação é: %d", result);
        } else {
            printf("Divisão por zero é inexistente");
        }
    } else {
        printf("Escolha Inválida\n");
    }


}