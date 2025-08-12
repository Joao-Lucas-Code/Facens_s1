#include <stdio.h>

int main() {
    int linhas, colunas;
    do {
        printf("Digite o numero de linhas (max 10): ");
        scanf("%d", &linhas);
    } while (linhas <= 0 || linhas > 10);

    do {
        printf("Digite o numero de colunas (max 10): ");
        scanf("%d", &colunas);
    } while (colunas <= 0 || colunas > 10);

    int matriz[linhas][colunas];
    int vetor_soma[colunas];

    for (int j = 0; j < colunas; j++) vetor_soma[j] = 0;

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
            vetor_soma[j] += matriz[i][j];
        }
    }

    printf("\nVetor com a soma dos elementos de cada coluna:\n");
    for (int j = 0; j < colunas; j++) {
        printf("%d ", vetor_soma[j]);
    }
    printf("\n");

    return 0;
}