// Lista 2, Exercicio 1
// Receber um número e informar se ele é negativo ou não é negativo.

#include <stdio.h>

int main() {
    float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    if (numero < 0) 
    {
        printf("O numero %.2f e negativo.\n", numero);
    } 
    else 
    {
        printf("O numero %.2f nao e negativo.\n", numero);
    }
    
    return 0;
}