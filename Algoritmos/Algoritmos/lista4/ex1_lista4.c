// Lista 4, Exercicio 1
// Receber 10 números e mostrar o dobro de cada um deles.

#include <stdio.h>

int main() {
    float numero, dobro;
    int i;

    printf("Digite 10 numeros:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Numero %d: ", i + 1);
        scanf("%f", &numero);
        dobro = numero * 2;
        printf("O dobro de %.2f e %.2f\n", numero, dobro);
    }

    return 0;
}