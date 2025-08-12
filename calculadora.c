#include <stdio.h>

int main (){
    int num1, num2, soma, multi, divi, sub, escolha, result;
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
        soma = num1 + num2;
        result = soma;
    } else if (escolha == 2){
        sub = num1 - num2;
        result = sub;   
    } else if (escolha ==3){
        multi = num1 * num2;
        result = multi;
    } else if (escolha == 4){
        divi = num1/num2;
        result = divi;
    } else {
        printf("Escolha Inválida\n");
    } 

    printf("O resultado da sua operação é: %d", result);


}