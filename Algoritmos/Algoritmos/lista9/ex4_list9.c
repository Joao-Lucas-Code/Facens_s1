#include <stdio.h>

int main() {
    int matriz_original[3][3], matriz_dobro[3][3];

    printf("Digite os elementos da matriz 3x3\n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz_original[i][j]);
            matriz_dobro[i][j] = matriz_original[i][j] * 2;
        }
    }

    printf("\nMatriz com o dobro dos valores:\n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("%d\t", matriz_dobro[i][j]);
        }
        printf("\n");
    }

    return 0;
}