#include <stdio.h>

int main() {
    int divisor, inicio, fim, i;

    printf("Digite o valor do divisor: ");
    scanf("%d", &divisor);
    printf("Digite o inicio do intervalo: ");
    scanf("%d", &inicio);
    printf("Digite o final do intervalo: ");
    scanf("%d", &fim);

    printf("Numeros divisiveis por %d no intervalo de %d a %d:\n", divisor, inicio, fim);
    for (i = inicio; i <= fim; i++) {
        if (i % divisor == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}