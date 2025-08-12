// Lista 1, Exercicio 3 
// Receber um comprimento em metros, convertê-lo para centímetros e mostrar o resultado.

#include <stdio.h>

int main() {
    float metros, centimetros;

    printf("Digite o comprimento em metros: ");
    scanf("%f", &metros);

    centimetros = metros * 100;

    printf("%.2f metros equivalem a %.2f centimetros.\n", metros, centimetros);

    return 0;
}