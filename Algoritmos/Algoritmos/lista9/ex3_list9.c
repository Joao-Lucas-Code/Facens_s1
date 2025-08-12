#include <stdio.h>

int main() {
    int matriz[5][3];
    int maior, linha_maior, coluna_maior;

    printf("Digite os elementos da matriz 5x3:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (i == 0 && j == 0) {
                maior = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            } else if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }

    printf("\nO maior elemento e %d e esta na posicao [%d][%d].\n", maior, linha_maior, coluna_maior);

    return 0;
}