#include <stdio.h>
#include <stdbool.h>

int main() {
    int tamanho, i;
    printf("Digite o tamanho do numero: ");
    scanf("%d", &tamanho);

    int numero[tamanho];
    printf("Digite cada algarismo do numero, um por vez:\n");
    for (i = 0; i < tamanho; i++) 
    {
        scanf("%d", &numero[i]);
    }

    bool palindromo = true;
    for (i = 0; i < tamanho / 2; i++) 
    {
        if (numero[i] != numero[tamanho - 1 - i]) 
        {
            palindromo = false;
            break;
        }
    }

    if (palindromo) {
        printf("O numero e um palindromo.\n");
    } else {
        printf("O numero nao e um palindromo.\n");
    }

    return 0;
}