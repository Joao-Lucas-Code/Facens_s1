#include <stdio.h>

int main() {
    int n;
    printf("Digite a quantidade de numeros (n): ");
    scanf("%d", &n);

    float sequencia[n];
    int visitado[n];

    printf("Digite a sequencia de numeros:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &sequencia[i]);
        visitado[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        if (visitado[i] == 1) {
            continue;
        }
        int cont = 1;
        for (int j = i + 1; j < n; j++) {
            if (sequencia[i] == sequencia[j]) {
                visitado[j] = 1;
                cont++;
            }
        }
        printf("%.2f ocorre %d vez(es)\n", sequencia[i], cont);
    }

    return 0;
}
