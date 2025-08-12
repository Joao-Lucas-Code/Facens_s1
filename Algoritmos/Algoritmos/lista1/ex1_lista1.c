// Lista 1, Exercicio 1
// Receber um número, calcular seu dobro e exibir o resultado.

#include <stdio.h>

int main() {
    float numero, dobro;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    dobro = numero * 2;

    printf("O dobro de %.2f e: %.2f\n", numero, dobro);

    return 0;
}