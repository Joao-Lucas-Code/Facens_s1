// Lista 1, Exercicio 7 [cite: 12]
// Receber uma temperatura em Fahrenheit e convertê-la para Celsius
// através da seguinte fórmula: Celsius = (Fahrenheit - 32) / 1.8. Exibir o valor em Celsius.

#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) / 1.8;

    printf("%.2f graus Fahrenheit equivalem a %.2f graus Celsius.\n", fahrenheit, celsius);

    return 0;
}