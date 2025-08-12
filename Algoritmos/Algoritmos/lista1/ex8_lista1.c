// Lista 1, Exercicio 8 [cite: 13, 14]
// Calcular e exibir o perímetro de uma circunferência recebendo seu raio.
// A fórmula para o cálculo é C = 2 * PI * r (utilizar PI = 3.14).

#include <stdio.h>

int main() {
    float raio, perimetro;
    const float PI = 3.14;

    printf("Digite o raio da circunferencia: ");
    scanf("%f", &raio);

    perimetro = 2 * PI * raio;

    printf("O perimetro da circunferencia com raio %.2f e: %.2f\n", raio, perimetro);

    return 0;
}