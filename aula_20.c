/*
    01 - Fazer dois for retornar matrizes
    Autor: João Lucas Gomes
    Data da última modificação: 01/04/25
*/
#include <stdio.h>

int main()
{
    int l, c;

    for(c = 0;c <= 4; c++)
    {
        printf("(0:%i) ", c);
    }
    printf("\n");
    c = 0;
    for(l = 1; l <= 4; l++)
    {
        printf("(%i:%i) ", l, c);
        c += 1;
    }
    return 0;
}