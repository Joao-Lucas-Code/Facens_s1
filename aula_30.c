/*
    01 - ler 10 numeros inteiros e armazena-los em um vetor
    e mostrar qual e o maior e menor
    Autor: João Lucas Gomes
    Data da última modificação: 29/04/25
*/
#include <stdio.h>

int main()
{
    int numero[10], maior, menor;

    printf("Digite os 10 numeros:\n");
    for(int i = 0; i < 10; i++){
        printf("Numero %i: ", i+1);
        scanf("%i", &numero[i]);
    }
    maior = numero[0];
    menor = numero[0];

    for(int i = 1; i < 10; i++){
        if (numero[i] > maior)
            maior = numero[i];
        if (numero[i] < menor)
            menor = numero[i];
    }

    printf("\nO maior numero digitado foi %i\n", maior);
    printf("O menor numero digitado foi %i\n", menor);

    return 0;
}
