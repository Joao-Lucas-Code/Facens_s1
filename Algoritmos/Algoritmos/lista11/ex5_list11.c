#include <stdio.h>
#include <string.h>

int main() {
    char caractere;
    int n;
    char resultado[21];

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);
    printf("Digite um numero (n <= 20): ");
    scanf("%d", &n);

    if (n <= 20) {
        for (int i = 0; i < n; i++) {
            resultado[i] = caractere;
        }
        resultado[n] = '\0'; // Finaliza a string
        printf("Saida: %s\n", resultado);
    } else {
        printf("Numero invalido.\n");
    }

    return 0;
}
