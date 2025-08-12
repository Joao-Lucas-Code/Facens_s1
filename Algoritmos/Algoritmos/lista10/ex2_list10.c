#include <stdio.h>

int main() {
    int mat[5][5];
    int soma_acima_principal = 0, soma_abaixo_principal = 0;

    printf("Digite os elementos da matriz 5x5:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &mat[i][j]);
            if (j > i) {
                soma_acima_principal += mat[i][j];
            }
            if (j < i) {
                soma_abaixo_principal += mat[i][j];
            }
        }
    }

    printf("\nSoma dos elementos acima da diagonal principal: %d\n", soma_acima_principal);
    printf("Soma dos elementos abaixo da diagonal principal: %d\n", soma_abaixo_principal);

    return 0;
}