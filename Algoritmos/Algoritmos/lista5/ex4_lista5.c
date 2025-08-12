// Lista 5, Exercicio 4 [cite: 70]
// Receber 10 números e, ao final, informar qual é o maior e o menor deles.
#include <stdio.h>

int main() 
{
    float numero, maior, menor;
    int i;

    printf("Digite o 1 numero: ");
    scanf("%f", &numero);
    maior = numero; 
    menor = numero;

    for (i = 1; i < 10; i++) 
    {
        printf("Digite o %d numero: ", i + 1);
        scanf("%f", &numero);
        if (numero > maior) 
        {
            maior = numero;
        }
        if (numero < menor) 
        {
            menor = numero;
        }
    }

    printf("\nO maior numero informado foi: %.2f\n", maior);
    printf("O menor numero informado foi: %.2f\n", menor);

    return 0;
}