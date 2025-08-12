#include <stdio.h>

int main() {
    char nome[100], curso[100];
    int idade, ano_nascimento;

    printf("=== PROGRAMA DE APRESENTÇÃO ===\n");
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("Digite seu curso: ");
    scanf(" %99[^\n]", curso);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    ano_nascimento = 2025 - idade;
    printf("Mensagem Bem-Vindo(a)\n");
    printf("Saudações %s", nome);
    printf("Você tem %d anos e estuda %s.\n", idade, curso);
    printf("Você nasceu aproximadamente em %d", ano_nascimento);
    return 0;
}