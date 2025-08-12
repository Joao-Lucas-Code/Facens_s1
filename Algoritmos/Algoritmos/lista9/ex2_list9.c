#include <stdio.h>

int main() {
    int matriz[3][4], soma = 0;
    printf("Digite os elementos de uma matriz 3x4:\n");

    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    printf("\nA soma de todos os elementos da matriz e: %d\n", soma);

    return 0;
}