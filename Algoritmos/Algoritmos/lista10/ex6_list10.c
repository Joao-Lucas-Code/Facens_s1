#include <stdio.h>

int main() {
    int original[7][7], transposta[7][7];

    printf("Digite os elementos da matriz 7x7:\n");
    for(int i=0; i<7; i++) {
        for(int j=0; j<7; j++) {
            scanf("%d", &original[i][j]);
            transposta[j][i] = original[i][j];
        }
    }

    printf("\nMatriz Transposta:\n");
     for(int i=0; i<7; i++) {
        for(int j=0; j<7; j++) {
            printf("%d\t", transposta[i][j]);
        }
        printf("\n");
    }
    return 0;
}
