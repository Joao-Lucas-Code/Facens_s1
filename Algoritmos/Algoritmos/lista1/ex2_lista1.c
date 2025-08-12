// Lista 1, Exercicio 2
// Receber dois valores, calcular sua média aritmética e exibir o resultado.

#include <stdio.h>

int main() {
    float valor1, valor2, media;

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    media = (valor1 + valor2) / 2;

    printf("A media aritmetica entre %.2f e %.2f e: %.2f\n", valor1, valor2, media);

    return 0;
}