#include <stdio.h>

int main() {
    int matriz[4][4];
    int maior_elemento, linha_maior = 0;

    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
            if (i == 0 && j == 0) {
                maior_elemento = matriz[i][j];
            } else if (matriz[i][j] > maior_elemento) {
                maior_elemento = matriz[i][j];
                linha_maior = i;
            }
        }
    }

    int minimax = matriz[linha_maior][0];
    int coluna_minimax = 0;
    for (int j = 1; j < 4; j++) {
        if (matriz[linha_maior][j] < minimax) {
            minimax = matriz[linha_maior][j];
            coluna_minimax = j;
        }
    }

    printf("\nO maior elemento e %d (na linha %d).\n", maior_elemento, linha_maior);
    printf("O elemento minimax e %d, na posicao [%d][%d].\n", minimax, linha_maior, coluna_minimax);

    return 0;
}