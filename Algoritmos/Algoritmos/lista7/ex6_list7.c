#include <stdio.h>

int main() {
    int vetor[12], negativos = 0;
    printf("Digite 12 numeros:\n");
    for (int i = 0; i < 12; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] < 0) {
            negativos++;
        }
    }
    printf("Quantidade de numeros negativos: %d\n", negativos);
    return 0;
}