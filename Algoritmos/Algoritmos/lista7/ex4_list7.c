#include <stdio.h>

int main() {
    int vetor[15];
    printf("Digite 15 numeros:\n");
    for (int i = 0; i < 15; i++) {
        scanf("%d", &vetor[i]);
    }
    printf("O dobro de cada numero:\n");
    for (int i = 0; i < 15; i++) {
        printf("%d ", vetor[i] * 2);
    }
    printf("\n");
    return 0;
}