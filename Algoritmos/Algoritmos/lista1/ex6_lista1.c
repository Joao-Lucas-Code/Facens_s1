// Lista 1, Exercicio 6 
// Receber base e altura de um triângulo, calcular sua área e exibir o valor calculado.
// Formula: Area = (base * altura) / 2

#include <stdio.h>

int main() {
    float base, altura, area;

    printf("Digite a base do triangulo: ");
    scanf("%f", &base);

    printf("Digite preconceived altura do triangulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("A area do triangulo com base %.2f e altura %.2f e: %.2f\n", base, altura, area);

    return 0;
}