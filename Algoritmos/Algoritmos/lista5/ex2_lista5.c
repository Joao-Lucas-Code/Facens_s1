// Lista 5, Exercicio 2 [cite: 68]
// Receber 10 números e, ao final, informar quantos são positivos e quantos são negativos.
// (Considerar zero como não positivo e não negativo para esta contagem, ou especificar)
// O comum é: Positivo > 0, Negativo < 0. Zero é nulo.
// Se a intenção for "não-negativos" vs "negativos", o zero entra no primeiro grupo.
// Vou considerar: Positivos (>0), Negativos (<0). Zero não entra em nenhuma das contagens.

#include <stdio.h>

int main() 
{
    float numero;
    int i;
    int contPositivos = 0;
    int contNegativos = 0;

    printf("Digite 10 numeros\n");
    for (i = 0; i < 10; i++) 
    {
        printf("Numero %d: ", i + 1);
        scanf("%f", &numero);
        if (numero > 0) 
        {
            contPositivos++;
        } 
        else if (numero < 0)
        {
            contNegativos++;
        }
    }

    printf("\nResultados:\n");
    printf("Quantidade de numeros positivos: %d\n", contPositivos);
    printf("Quantidade de numeros negativos: %d\n", contNegativos);

    return 0;
}