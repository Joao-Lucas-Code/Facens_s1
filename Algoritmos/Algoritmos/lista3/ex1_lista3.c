// Lista 3, Exercicio 1
// Receber um número e informar se ele é positivo, negativo ou nulo.

#include <stdio.h>

int main() {
    float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    if (numero > 0) {
        printf("O numero %.2f e positivo.\n", numero);
    } else if (numero < 0) {
        printf("O numero %.2f e negativo.\n", numero);
    } else {
        printf("O numero e nulo (zero).\n");
    }

    return 0;
}