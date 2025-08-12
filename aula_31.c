/*
    01 - ler 15 numeros e armazená-los em um vetor.
    Ao final, exibir o dobro de cada um dos números. (TREINO PROVA)
    Autor: João Lucas Gomes
    Data da última modificação: 06/05/25
*/
#include <stdio.h>

int main()
{
    int numeros[15];
    int i;

    printf("Digite os 15 numero para receber o dobro\n");
    for(i = 0; i < 15; i++){
        printf("Numero %i: ", i+1);
        scanf("%i", &numeros[i]);
    }
    for(int i = 1; i < 15; i++){
        printf("%ix2 = %i\n", numeros[i], numeros[i]*2);
    }
    printf("\n");

    return 0;
}