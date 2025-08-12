#include <stdio.h>
#include <stdbool.h>

int main() {
    float matriz[4][5], numero;
    bool encontrado = false;

    printf("Digite os elementos da matriz 4x5:\n");
    for(int i=0; i<4; i++) for(int j=0; j<5; j++) scanf("%f", &matriz[i][j]);

    printf("Digite um numero para buscar na matriz: ");
    scanf("%f", &numero);

    for(int i=0; i<4; i++) {
        for(int j=0; j<5; j++) {
            if(matriz[i][j] == numero) {
                if(!encontrado) {
                     printf("O numero %.2f esta na matriz nas posicoes:\n", numero);
                }
                printf("[%d][%d]\n", i, j);
                encontrado = true;
            }
        }
    }

    if(!encontrado) {
        printf("O numero %.2f nao esta na matriz.\n", numero);
    }
    return 0;
}
