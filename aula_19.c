/*
    01 - Receber 10 números e informar se cada um
    deles é negativo, positivo ou nulo
    Autor: João Lucas Gomes
    Data da última modificação: 01/04/25
*/
#include <stdio.h>

int main()
{
    int i, num;

    for(i = 1; i <= 10; i++){
        printf("Digite um numero: ");
        scanf("%i", &num);

        if (num < 0)
        printf("O %d e negativo\n", num);

        else if (num > 0)
        printf("O %d e positivo\n", num);

        else
        printf("O numero e nulo\n");
    }

    return 0;
}