#include <stdio.h>

int main() {
    int matriz[3][3];
    int soma_pares = 0, soma_total = 0, qtd_impares = 0;

    printf("Digite os elementos da matriz 3x3:\n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            scanf("%d", &matriz[i][j]);
            soma_total += matriz[i][j];
            if(matriz[i][j] % 2 == 0) {
                soma_pares += matriz[i][j];
            } else {
                qtd_impares++;
            }
        }
    }

    printf("\na) Soma dos elementos pares: %d\n", soma_pares);
    printf("b) Media de todos os elementos: %.2f\n", (float)soma_total / 9.0);
    printf("c) Quantidade de elementos impares: %d\n", qtd_impares);

    return 0;
}