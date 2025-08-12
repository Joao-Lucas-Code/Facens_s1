/*
    01 - Faça um programa que recebe uma matriz 4x3 e 
    mostre a matriz na tela em
    formato de tabela.
    Autor: João Lucas Gomes
    Data da última modificação: 27/05/25
*/
#include <stdio.h>

#define LINHAS 4
#define COLUNAS 3

int main() {
    int matriz[LINHAS][COLUNAS];
    int i, j;

    // Leitura dos elementos da matriz
    printf("Digite os elementos da matriz %dx%d:\n", LINHAS, COLUNAS);
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Exibição da matriz em formato de tabela
    printf("\nMatriz digitada:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%4d", matriz[i][j]); // imprime com espaçamento de 4 colunas
        }
        printf("\n");
    }

    return 0;
}
