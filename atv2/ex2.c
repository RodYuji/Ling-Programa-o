#include <stdio.h>
#include <windows.h>
#include <stdbool.h>

int main (){
    float n1, n2, n3, media, freq;
    bool aprovacao_media = true, aprovacao_freq = true;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    printf("Digite sua frequência (0 - 1,0): ");
    scanf("%f", &freq);
    printf("--- CALCULANDO FREQUÊNCIA ---\n");
    Sleep(1000);

    if (freq <= 1 && freq >= 0){
        if (freq >= 0.75){
            printf("Parabéns! Você foi aprovado por frequência!\n");
        } else {
            printf("Você foi reprovado por frequência.\n");
            aprovacao_freq = false;
        }
    }

    Sleep(1000);
    printf("--- CALCULANDO MÉDIA ---\n");
    Sleep(1000); //1 SEGUNDO
    media = (n1 + n2 + n3) / 3; //CÁLCULO DA MÉDIA
    printf("Sua média é: %.2f\n", media);

    if (media >= 0 && media <= 10){ //VALIDAÇÃO MÉDIA
        if (media >= 5){
            printf("Parabéns! Você foi aprovado por média!\n");
        } else {
            printf("Você foi reprovado por média.\n");
            aprovacao_media = false;
        }
        Sleep(1000);
        printf("--- CALCULANDO CONCEITO ---\n");
        Sleep(1000);
        printf(" A: 9,0 <= Média <= 10,0\n B: 7,0 <= Média < 9,0\n C: 5,0 <= Média < 7,0\n D: Média < 5\n");
        if (media >= 9 && media <= 10){
            printf("Parabéns! Seu conceito é A!\n");
        } else if (media < 9 && media >= 7){
            printf("Você foi bem! Seu conceito é B");
        } else if (media < 7 && media >= 5){
            printf("Você tem que melhorar! Seu conceito é C\n");
        } else {
            printf("Estude mais! Seu conceito é D...\n");
        }
    } else {
        printf("Média inválida\n");
    } 
    printf("-----------------------------\n");
    if (aprovacao_freq && aprovacao_media) {
        printf("Dito isso, você foi aprovado tanto por MÉDIA, quanto por FREQUÊNCIA!\n");
    } else {
        printf("Dito isso, você foi reprovado no semestre...\n");
    }



}