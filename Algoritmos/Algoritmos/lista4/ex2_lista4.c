// Lista 4, Exercicio 2 [cite: 63]
// Receber um número e mostrar sua tabuada do 1 ao 10.

#include <stdio.h>

int main() {
    int numero, i;

    printf("Digite um numero para ver sua tabuada: ");
    scanf("%d", &numero);

    printf("\nTabuada do %d:\n", numero);
    for (i = 1; i < 11; i++) 
    {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}