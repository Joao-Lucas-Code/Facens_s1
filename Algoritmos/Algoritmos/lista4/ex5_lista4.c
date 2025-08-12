// Lista 4, Exercicio 5
// Implementar um programa que exibe todos os números pares contidos entre 10 e 80.
#include <stdio.h>

int main() {
    int i;

    printf("Numeros pares entre 10 e 80:\n");
    for (i = 11; i < 80; i++) 
    { 
         if (i % 2 == 0) 
         {
             printf("%d ", i);
         }
    }
    printf("\n");
    return 0;
}