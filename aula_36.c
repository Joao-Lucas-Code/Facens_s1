// matrix 3x4 - somando as linhas
#include <stdio.h>

int main(){
    int mat[3][4];
    int somalinha = 0;
    int i, j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
        printf("Digite o valor de %d %d:", i, j);
        scanf("%d", &mat[i][j]);
        }
    }
    printf("\nA soma das linhas é: \n");
        for(i = 0; i < 3; i++){
            somalinha = 0;
            for(j = 0; j < 4; j++){
            somalinha += mat[i][j];
        }
        printf("Linha %d: %d\n", i, somalinha);
    }
}