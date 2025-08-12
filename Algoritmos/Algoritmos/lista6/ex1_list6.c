#include <stdio.h>

int main() {
    int i = 0;
    printf("Numeros pares de 0 a 100:\n");
    while (i <= 100) 
    {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");
    return 0;
}