#include <stdio.h>

int main() {
    int matriz[3][4], linha;
    float soma = 0;

    printf("Digite os elementos da matriz 3x4:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Escolha uma linha para calcular a media (0 a 2): ");
    scanf("%d", &linha);

    if (linha >= 0 && linha < 3) {
        for (int j = 0; j < 4; j++) {
            soma += matriz[linha][j];
        }
        printf("A media da linha %d e: %.2f\n", linha, soma / 4.0);
    } else {
        printf("Linha invalida.\n");
    }

    return 0;
}