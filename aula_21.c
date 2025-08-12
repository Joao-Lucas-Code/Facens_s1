/*
    01 - Fazer um for que retorne um quadrado com a
    quantidade de asterisco que o usuario digitar
    Autor: João Lucas Gomes
    Data da última modificação: 01/04/25
*/
#include <stdio.h>

int main()
{
    int n1, c, i;

    printf("Digite o tamanho do quadrado: ");
    scanf("%i", &n1);

    for(c = 0; c < n1; c++)
    {
        for(i = 0; i < n1; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
