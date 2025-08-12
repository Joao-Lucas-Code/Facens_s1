#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10];
    printf("Digite 10 numeros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor1[i]);
    }

    for (int i = 0; i < 10; i++) {
        vetor2[i] = vetor1[9 - i];
    }

    printf("Posicoes com numeros iguais nos dois vetores: ");
    for (int i = 0; i < 10; i++) {
        if (vetor1[i] == vetor2[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}