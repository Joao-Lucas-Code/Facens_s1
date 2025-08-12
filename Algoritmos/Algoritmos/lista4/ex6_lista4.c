// Lista 4, Exercicio 6
// Implementar um programa que exibe todos os números inteiros de 1 a
// 1000 em ordem inversa (1000, 999, 998, ..., 3, 2, 1).

#include <stdio.h>

int main() {
    int i;

    printf("Numeros inteiros de 1 a 1000 em ordem inversa:\n");
    for (i = 1000; i >= 1; i--) 
    {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}