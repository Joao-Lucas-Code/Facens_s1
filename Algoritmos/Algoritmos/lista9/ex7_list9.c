#include <stdio.h>

int main() {
    int original[3][5], modificada[3][5];
    int soma_coluna[5] = {0, 0, 0, 0, 0};

    printf("Digite os elementos da matriz 3x5:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &original[i][j]);
            if (original[i][j] < 0) {
                modificada[i][j] = 0;
            } else {
                modificada[i][j] = original[i][j];
            }
        }
    }

    printf("\nMatriz Original:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) printf("%d\t", original[i][j]);
        printf("\n");
    }

    printf("\nMatriz Modificada:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d\t", modificada[i][j]);
            soma_coluna[j] += modificada[i][j];
        }
        printf("\n");
    }

    printf("\nSoma das colunas da matriz modificada:\n");
    for (int j = 0; j < 5; j++) {
        printf("Coluna %d: %d\n", j, soma_coluna[j]);
    }

    return 0;
}
