// Lista 5, Exercicio 1
// Solicitar quantos números o usuário deseja informar, receber cada um
// deles e mostrar a média aritmética no final.

#include <stdio.h>

int main() 
{
    int quantidade, i;
    float numero, soma = 0, media;

    printf("Quantos numeros voce deseja informar? ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) 
    {
        printf("A quantidade deve ser um numero positivo.\n");
        return 1;
    }

    printf("Digite os %d numeros\n", quantidade);
    for (i = 0; i < quantidade; i++) 
    {
        printf("Numero %d: ", i + 1);
        scanf("%f", &numero);
        soma += numero;
    }

    media = soma / quantidade;
    printf("A media aritmetica dos numeros informados e: %.2f\n", media);

    return 0;
}