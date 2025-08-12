// Lista 4, Exercicio 3
// Receber 10 números e informar se cada um deles é negativo, positivo ou nulo.

#include <stdio.h>

int main() 
{
    float numero;
    int i;

    printf("Digite 10 numeros:\n");
    for (i = 0; i < 10; i++) 
    {
        printf("Numero %d: ", i + 1);
        scanf("%f", &numero);
        if (numero > 0) 
        {
            printf("%.2f e positivo.\n", numero);
        } 
        else if (numero < 0) 
        {
            printf("%.2f e negativo.\n", numero);
        } 
        else 
        {
            printf("%.2f e nulo.\n", numero);
        }
    }

    return 0;
}