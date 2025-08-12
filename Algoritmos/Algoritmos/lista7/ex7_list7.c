#include <stdio.h>

int main() {
    int pares[50];
    int j = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            pares[j] = i;
            j++;
        }
    }
    printf("Vetor de numeros pares entre 1 e 100:\n");
    for (int i = 0; i < 50; i++) {
        printf("%d ", pares[i]);
    }
    printf("\n");
    return 0;
}