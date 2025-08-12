#include <stdio.h>

void bubbleSort(float arr[], int n) {
    int i, j;
    float temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n = 5; 
    float original[] = {5.5, 2.2, 8.8, 1.1, 4.4};
    float copia[n];

    for(int i = 0; i < n; i++) 
    {
        copia[i] = original[i];
    }

    bubbleSort(copia, n);

    printf("Vetor original: ");
    for (int i = 0; i < n; i++) printf("%.1f ", original[i]);

    printf("\nVetor copiado e ordenado: ");
    for (int i = 0; i < n; i++) printf("%.1f ", copia[i]);
    printf("\n");

    return 0;
}