#include <stdio.h>

int main() {
    int a[10], a1[10], a2[10];
    int contA1 = 0, contA2 = 0;

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
        if (a[i] % 2 != 0) {
            a1[contA1++] = a[i];
        } else {
            a2[contA2++] = a[i];
        }
    }

    printf("Vetor A1 (impares): ");
    for (int i = 0; i < contA1; i++) printf("%d ", a1[i]);
    printf("\n");

    printf("Vetor A2 (pares): ");
    for (int i = 0; i < contA2; i++) printf("%d ", a2[i]);
    printf("\n");

    return 0;
}
