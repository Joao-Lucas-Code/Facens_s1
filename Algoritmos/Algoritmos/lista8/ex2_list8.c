#include <stdio.h>

int main() {
    int n, a[100];
    float somaPar = 0, produtoImpar = 1;
    int contPar = 0;

    printf("Digite o tamanho do vetor (max 100): ");
    scanf("%d", &n);

    if (n > 0 && n <= 100) {
        printf("Digite os %d elementos do vetor:\n", n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            if (i % 2 == 0) {
                somaPar += a[i];
                contPar++;
            } else {
                produtoImpar *= a[i];
            }
        }
        printf("Media dos elementos de indice par: %.2f\n", somaPar / contPar);
        printf("Produto dos elementos de indice impar: %.2f\n", produtoImpar);
    } else {
        printf("Tamanho invalido.\n");
    }
    return 0;
}
