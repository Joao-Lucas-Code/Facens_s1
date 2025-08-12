// Lista 4, Exercicio 4 [cite: 64]
// Receber 2 números inteiros e exibir todos os números inteiros existentes entre eles.
#include <stdio.h>

int main() 
{
    int num1, num2, i, inicio, fim;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    if (num1 == num2) 
    {
        printf("Os numeros sao iguais. Nao ha inteiros entre eles.\n");
        return 0;
    }

    if (num1 < num2) 
    {
        inicio = num1 + 1;
        fim = num2;
    } 
    else 
    {
        inicio = num2 + 1;
        fim = num1;
    }

    printf("Numeros inteiros entre %d e %d:\n", inicio, fim);

    for (i = inicio; i < fim; i++) 
    {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}