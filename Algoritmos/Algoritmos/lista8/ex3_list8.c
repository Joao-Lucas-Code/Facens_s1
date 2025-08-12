#include <stdio.h>

int main() {
    float a[12], b[12];
    printf("Digite os 12 numeros reais do vetor A:\n");
    for (int i = 0; i < 12; i++) {
        scanf("%f", &a[i]);
    }

    for (int i = 0; i < 12; i++) {
        if (i % 2 == 0) {
            b[i] = a[i] / 2.0;
        } else {
            b[i] = a[i] * 3.0;
        }
    }

    printf("Vetor B:\n");
    for (int i = 0; i < 12; i++) {
        printf("%.2f ", b[i]);
    }
    printf("\n");
    return 0;
}