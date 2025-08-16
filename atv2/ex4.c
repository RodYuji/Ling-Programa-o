#include <stdio.h>
#include <windows.h> //BIBLIOTECA PARA SLEEP
#include <ctype.h> //BIBLIOTECA PARA TRANSOFMRAÇÃO DE LETRAS

int main(){
    float altura, peso, imc;
    int idade;
    char sexo;

    printf("Digite sua altura em metros: "); //ENTRADA DE DADOS
    scanf("%f", &altura);
    printf("Digite seu peso em quilogramas: ");
    scanf("%f", &peso);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu sexo [M/F]: "); //ENTRADA DE SEXO
    scanf(" %c", &sexo);
    sexo = toupper(sexo); //TRANSFORMARÇÃO DA LETRA MINÚSCULA PARA MAIÚSCULA
    if (altura >= 0 && peso >= 0 && idade >= 0){
        printf("\n --- TABELA DE CLASSIFICAÇÃO ---\n");
        printf(" Abaixo do peso: IMC < 18,5\n Peso normal: 18,5 <= IMC < 25,0\n Sobrepeso: 25,0 <= IMC < 30,0\n Obesidade grau I: 30,0 <= IMC < 35,0\n Obesidade grau II: 35,0 <= IMC < 40,0\n Obesidade grau III: IMC >= 40\n"); //TABELA
        printf("\n--- CALCULANDO O SEU IMC ---\n");
        Sleep(2000); //SLEEP
        imc = peso/(altura*altura);
        printf("Seu IMC é de %.2f.\n", imc); //CLASSIFICAÇÃO DO IMC
        if (imc >= 40){
            printf("Você possui Obesidade Grau III.\n");
        } else if (imc < 40 && imc >= 35){
            printf("Você possui Obesidade Grau II\n");
        } else if (imc < 35 && imc >= 30){
            printf("Você possui Obesidade Grau I\n");
        } else if (imc < 30 && imc >= 25){
            printf("Você está Sobrepeso\n");
        } else if (imc < 25 && imc >= 18.5){
            printf("Você está no Peso Ideal\n");
        } else {
            printf("Você está Abaixo do Peso\n");
        }
        printf("\n --- RECOMENDAÇÕES ---\n"); 
        if (sexo == 'M' && imc >= 25){  //RECOMENDAÇÕES POR SEXO
            printf("Para você de sexo Masculino com Sobrepeso/Obesidade, é recomendado que realize exercícios de força.\n");
        } else if (sexo == 'F' && imc >= 25){
            printf("Para você de sexo Feminino com Sobrepeso/Obesidade, é recomendado que realize exercícios aeróbicos.\n");
        } else {
            printf("Sem recomendações! Continue assim!\n");
        }
        if (idade >= 60 && imc < 18.5){ //RECOMENDAÇÕES POR IDADE
            printf("Para você Idoso Abaixo do Peso, é recomendado que você procure um geriatra.\n");
        } else if (idade <= 25 && imc >= 30){
            printf("pra você Jovem com Obesidade, é recomendado que você procure um nutricionista.\n");
        }
    } else {
        printf("IMC incalculável, tente novamente.");
    }
    return 0;
}