#include <stdio.h>

int main() {
    int vetor[10], i;
    
    printf("Digite 10 numeros\n");
    for (i = 0; i < 10; i++) 
    {
        printf("Digite %d numero:", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("Numeros na ordem recebida: ");
    for (int i = 0; i < 10; i++) 
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}