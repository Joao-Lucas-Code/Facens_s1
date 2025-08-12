#include <stdio.h>

int main() {
    int vetor[12];
    printf("Digite 12 numeros:\n");
    for (int i = 0; i < 12; i++) {
        scanf("%d", &vetor[i]);
    }
    printf("Numeros positivos informados: ");
    for (int i = 0; i < 12; i++) {
        if (vetor[i] > 0) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");
    return 0;
}