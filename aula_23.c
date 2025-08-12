/*
    01 - Fazer um while que mostra o valor digitado
    até 10
    Autor: João Lucas Gomes
    Data da última modificação: 15/04/25
*/
#include <stdio.h>
int main()
{
    int num=0;
    while(num < 10)
    {
        printf("Digite um numero: ");
        scanf("%i", &num);
        printf("Voce digitou %i\n", num);
    }
    printf("Fim do programa!!!");

    return 0;
}