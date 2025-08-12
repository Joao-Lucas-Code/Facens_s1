/*
    01 - Somar elementos de uma matriz
    Autor: João Lucas Gomes
    Data da última modificação: 27/05/25
*/
#include <stdio.h>
#define TAM 3

int main()
{
    int mat[TAM][TAM];
    int i, j, soma = 0;

    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("DIGITE O NUMERO [%d][%d]: ",i,j);
            scanf("%d", &mat[i][j]);
            soma += mat[i][j]; // soma os elementos
        }
    }

    printf("Soma dos elementos da matriz: %d\n", soma);

    return 0;
}
