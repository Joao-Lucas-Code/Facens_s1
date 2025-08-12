#include <stdio.h>

int main() {
    int vetor[8], pos;
    printf("Digite 8 numeros:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &vetor[i]);
    }
    printf("Escolha uma posicao do vetor (0 a 7): ");
    scanf("%d", &pos);
    if (pos >= 0 && pos < 8) {
        printf("O numero na posicao %d e: %d\n", pos, vetor[pos]);
    } else {
        printf("Posicao invalida.\n");
    }
    return 0;
}