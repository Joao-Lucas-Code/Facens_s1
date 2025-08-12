#include <stdio.h>

void bubbleSortDec(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) scanf("%d", &vetor[i]);

    bubbleSortDec(vetor, n);

    printf("Vetor em ordem decrescente: ");
    for (int i = 0; i < n; i++) printf("%d ", vetor[i]);
    printf("\n");

    return 0;
}
