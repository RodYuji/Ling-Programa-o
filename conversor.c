#include <stdio.h>

int main (){
    float c, f, m, km, kg, lb;
    printf("=== CONVERSOR DE UNIDADES ===\n");
    printf("Digite o valor em Celsius: ");
    scanf("%f", &c);
    f = (c*9)/5 +32;
    printf("Digite o valor em metros: ");
    scanf("%f", &m);
    km = m/1000;
    printf("Digite o valor em quilogramas: ");
    scanf("%f", &kg);
    lb = kg * 2.20462;

    printf("=== RESULTADOS ===\n");
    printf("%.2f graus em Celsius são %.2f graus em Fahrenheit\n", c, f);
    printf("%.2f metros são %.2f quilômetros\n", m, km);
    printf("%.2f quilogramas são %.2f libras\n", kg, lb);

}