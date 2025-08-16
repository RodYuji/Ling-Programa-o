//SISTEMA DE PONTUAÇÃO
#include <stdio.h>
#include <windows.h> //BIBLIOTECA PARA UTILIZAR SLEEP

int main(){
    int pont_inicial, pont_atual, pont_final;

    printf("Digite sua pontuação inicial: ");
    scanf("%d", &pont_inicial); //LÊ A PONTUAÇÃO
    printf("-------------------\n"); 
    if (pont_inicial >= 0){
        printf("NÍVEL 1\n --- CARREGANDO ---\n");
        Sleep(1000); //ESPERA POR 1 SEGUNDO 
        printf("Parabéns! Você passou de fase! +50 pontos!\n"); //PRIMEIRO REQUISITO
        pont_atual = pont_inicial; 
        pont_atual += 50; //SOMA DA PONTUAÇÃO
        printf("Sua pontuação passou de %d para %d!\n", pont_inicial, pont_atual);
        printf("-------------------\n");
        Sleep(2000);

        printf("NÍVEL 2\n --- CARREGANDO ---\n");
        Sleep(1000);
        printf("Incrível! Você adquiriu um novo item especial! 2x de Multiplicador de Pontos!\n"); //SEGUNDO REQUISITO
        pont_final = pont_atual; //PONT_FINAL ATUA COMO VARIÁVEL AUXILIAR
        pont_atual *= 2; //MULTIPLICAÇÃO DA PONTUAÇÃO
        printf("Sua pontuação passou de %d para %d!\n", pont_final, pont_atual);
        printf("-------------------\n");
        Sleep(2000);

        printf("NÍVEL 3\n --- CARREGANDO ---\n");
        Sleep(1000);
        printf("Ah não! Você perdeu uma vida! -30 pontos!\n"); //TERCEIRO REQUISITO
        pont_final = pont_atual; //VARIÁVEL AUXILIAR
        pont_atual -= 30; //SUBTRAÇÃO DA PONTUAÇÃO
        printf("Sua pontuação passou de %d para %d!\n", pont_final, pont_atual);
        printf("-------------------\n");
        Sleep(2000);

        printf("NÍVEL 4\n --- CARREGANDO ---\n");
        Sleep(1000);
        printf("Boa! Você atingiu um novo tempo recorde! +15 pontos!\n"); //QUARTO REQUISITO
        pont_final = pont_atual; //VARIÁVEL AUXILIAR
        pont_atual += 15; //ADIÇÃO DA PONTUAÇÃO
        printf("Sua pontuação passou de %d para %d!\n", pont_final, pont_atual);
        printf("-------------------\n");
        Sleep(2000);

        printf("NÍVEL 5\n --- CARREGANDO ---\n");
        Sleep(1000);
        printf("Ficou difícil? Você não conseguiu passar de fase de primeira! Seus pontos são divididos por 3!\n"); //QUINTO REQUISITO
        pont_final = pont_atual; //VARIÁVEL AUXILIAR
        pont_atual /= 3; //DIVISÃO INTEIRA DA PONTUAÇÃO
        printf("Sua pontuação passou de %d para %d!\n", pont_final, pont_atual);
        printf("-------------------\n");
        Sleep(2000);

        printf("NÍVEL 6\n --- CARREGANDO ---\n");
        Sleep(1000);
        printf("Isso aí! Você alncaçou a útlima fase! +100 pontos bônus!\n"); //SEXTO REQUISITO
        pont_final = pont_atual; //VARIÁVE AUXILIAR
        pont_atual += 100; //SOMA DA PONTUAÇÃO
        printf("Sua pontuação passou de %d para %d!\n", pont_final, pont_atual);
        printf("-------------------\n");
        Sleep(2000);

        printf("--- FIM DE JOGO ---\n");
        printf("Você começou com %d pontos e terminou com %d pontos!", pont_inicial, pont_final); //RESULTADO
} else {
    printf("Pontuação INVÁILDA!");
}
    return 0;
}