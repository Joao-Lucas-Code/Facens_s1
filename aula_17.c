/*
    01 - Receber 10 números e mostrar o dobro de cada um deles.
    Autor: João Lucas Gomes
    Data da última modificação: 01/04/25
*/
#include <stdio.h>

int main()
{
    int i, num;
    for(i = 1; i <= 10; i++){
        printf("Digite o %do numero: ", i);
        scanf("%d", &num); // Armazena o valor em 'num', sem modificar 'i'
        printf("O dobro de %d e %d\n", num, num * 2);
    }
    return 0;
}