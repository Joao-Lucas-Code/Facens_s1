/*
    01 - Faça um programa que recebe uma matriz 3x3 e gera uma 
    segunda matriz com o dobro de cada valor. No final, exiba a
    segunda matriz na tela.
    Autor: João Lucas Gomes
    Data da última modificação: 27/05/25
*/
#include <stdio.h>

#define TAM 3

int main() {
    int mat1[TAM][TAM];
    int mat2[TAM][TAM];
    int i, j;

    // Leitura da matriz original
    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    // Geração da segunda matriz com o dobro dos valores
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            mat2[i][j] = 2 * mat1[i][j];
        }
    }

    // Exibição da segunda matriz
    printf("\nMatriz com o dobro dos valores:\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%4d", mat2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
