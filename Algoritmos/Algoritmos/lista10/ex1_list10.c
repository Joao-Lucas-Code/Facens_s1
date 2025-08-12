#include <stdio.h>

int main() {
    int A[4][4], B[4][4], C[4][4];

    printf("Digite os elementos da matriz A 4x4:\n");
    for (int i = 0; i < 4; i++) for (int j = 0; j < 4; j++) 
    {
        scanf("%d", &A[i][j]);
    }    
    printf("Digite os elementos da matriz B 4x4:\n");
    for (int i = 0; i < 4; i++) for (int j = 0; j < 4; j++) 
    {
        scanf("%d", &B[i][j]);
    }    
    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            C[i][j] = (A[i][j] > B[i][j]) ? A[i][j] : B[i][j];
        }
    }

    printf("\nMatriz C (maiores elementos):\n");
    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            printf("%d\t", C[i][j]);
        }
            printf("\n");
    }

    return 0;
}