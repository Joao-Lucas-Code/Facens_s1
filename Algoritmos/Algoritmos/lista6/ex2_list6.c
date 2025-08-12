#include <stdio.h>

int main() {
    int i = 0;
    printf("Numeros impares de 0 a 100:\n");
    do {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
        i++;
    } while (i <= 100);
    printf("\n");
    return 0;
}