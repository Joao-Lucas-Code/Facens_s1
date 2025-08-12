#include <stdio.h>

int main() {
    int a[5], b[5], produtoEscalar = 0;

        
        for (int i = 0; i < 5; i++) 
        {
            printf("Digite o %d elemento do vetor A:", i + 1);
            scanf("%d", &a[i]);
        } 
        
        printf ("\n");
        
        for (int i = 0; i < 5; i++)
        {
            printf("Digite o %d elemento do vetor B:", i + 1);
            scanf("%d", &b[i]);
        } 

    for (int i = 0; i < 5; i++) 
    {
        produtoEscalar += a[i] * b[i];
    }

    printf("O produto escalar e: %d\n", produtoEscalar);
    return 0;
}