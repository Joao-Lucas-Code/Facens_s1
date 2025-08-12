/*
    01 - Receber três números e mostrar qual é o maior deles.
    Autor: João Lucas Gomes
    Data da última modificação: 25/03/25
*/
#include <stdio.h>

int main() {
    int num1, num2, num3, maior;

    // Entrada dos números
    printf("Digite três números: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    maior = num1; // Suponhetando que o primeiro é o maior

    if (num2 > maior) {
        maior = num2;
    }
    if (num3 > maior) {
        maior = num3;
    }

    printf("O maior número é: %d\n", maior); // Saída do maior número

    return 0;
}