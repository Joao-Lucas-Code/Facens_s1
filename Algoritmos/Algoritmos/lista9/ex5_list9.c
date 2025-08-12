#include <stdio.h>

int main() {
    int matriz[4][4], vetor_diagonal[4];
    int soma_diagonal = 0;

    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
            if (i == j) {
                soma_diagonal += matriz[i][j];
                vetor_diagonal[i] = matriz[i][j];
            }
        }
    }

    printf("\nA soma dos elementos da diagonal principal e: %d\n", soma_diagonal);

    printf("Vetor com os elementos da diagonal principal: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", vetor_diagonal[i]);
    }
    printf("\n");

    return 0;
}