// Lista 3, Exercicio 4 [cite: 50, 51]
// Receber três números e dizer se existe algum número repetido entre eles.
// Em caso afirmativo, mostre qual o número esta repetido.

#include <stdio.h>

int main() 
{
    float num1, num2, num3;
    int repetido = 0;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%f", &num3);

    if (num1 == num2 && num1 == num3) {
        printf("O numero %.2f esta repetido (tres vezes).\n", num1);
        repetido = 1;
    } else if (num1 == num2) {
        printf("O numero %.2f esta repetido.\n", num1);
        repetido = 1;
    } else if (num1 == num3) {
        printf("O numero %.2f esta repetido.\n", num1);
        repetido = 1;
    } else if (num2 == num3) {
        printf("O numero %.2f esta repetido.\n", num2);
        repetido = 1;
    }

    if (!repetido) 
    {
        printf("Nao ha numeros repetidos entre os tres.\n");
    }

    return 0;
}
