#include <stdio.h>

int main() {
    int vetor[10];
    int somaImpares = 0;
    printf("Digite 10 numeros positivos:\n");
    for (int i = 0; i < 10; i++) {
        do {
            printf("Posicao %d: ", i);
            scanf("%d", &vetor[i]);
        } while (vetor[i] <= 0);
    }

    for (int i = 0; i < 10; i++) {
        if (i % 2 != 0) {
            somaImpares += vetor[i];
        }
    }

    printf("Soma dos numeros nas posicoes impares: %d\n", somaImpares);
    return 0;
}