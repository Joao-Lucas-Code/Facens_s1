// Lista 2, Exercicio 6 [cite: 34, 35]
// Receber dois números e os apresente em ordem crescente.
// Utilize apenas a estrutura de decisão if, ou seja, sem o opcional else.

#include <stdio.h>

int main() {
    float num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Numeros em ordem crescente: ");
    if (num1 < num2) {
        printf("%.2f, %.2f\n", num1, num2);
    }
    if (num2 < num1) {
        printf("%.2f, %.2f\n", num2, num1);
    }
    if (num1 == num2) {
        printf("%.2f, %.2f (sao iguais)\n", num1, num2);
    }

    return 0;
}