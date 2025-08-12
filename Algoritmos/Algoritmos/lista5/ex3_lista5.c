// Lista 5, Exercicio 3 [cite: 69]
// Solicitar quantos números o usuário deseja informar, receber cada um
// deles e mostrar a média aritmética dos valores positivos no final.
#include <stdio.h>

int main() 
{
    int quantidadeTotal, i;
    float numero, somaPositivos = 0;
    int contPositivos = 0;
    float mediaPositivos;

    printf("Quantos numeros voce deseja informar? ");
    scanf("%d", &quantidadeTotal);

    if (quantidadeTotal <= 0) 
    {
        printf("A quantidade deve ser um numero positivo.\n");
        return 1;
    }

    printf("Digite os %d numeros\n", quantidadeTotal);
    for (i = 0; i < quantidadeTotal; i++) 
    {
        printf("Numero %d: ", i + 1);
        scanf("%f", &numero);
        if (numero > 0) 
        {
            somaPositivos += numero;
            contPositivos++;
        }
    }

    if (contPositivos > 0) 
    {
        mediaPositivos = somaPositivos / contPositivos;
        printf("A media aritmetica dos valores positivos e: %.2f\n", mediaPositivos);
    } 
    else if (contPositivos < 0)
    {
        printf("Nenhum valor positivo foi informado.\n");
    }

    return 0;
}