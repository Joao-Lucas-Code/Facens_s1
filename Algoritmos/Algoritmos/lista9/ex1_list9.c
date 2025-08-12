#include <stdio.h>

int main() {
    int matriz[4][3];
    printf("Digite os elementos de uma matriz 4x3:\n");

    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz 4x3:\n");
    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}