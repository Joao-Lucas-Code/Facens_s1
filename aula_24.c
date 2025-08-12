/*
    01 - Fazer um while soma dos valores
    Autor: João Lucas Gomes
    Data da última modificação: 15/04/25
*/
#include <stdio.h>
int main()
{
    int num=1, v=0;
    while(num != 0)
    {
        printf("Digite um numero: ");
        scanf("%i", &num);
        printf("Voce digitou %i\n", num);
        printf("A Soma total %i\n", v+= num);
    }
    printf("Fim do programa!!!");

    return 0;
}