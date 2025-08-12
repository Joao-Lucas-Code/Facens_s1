#include <stdio.h>

int main() {
    int continuar = 1;
    float numero, maior, soma = 0;
    int contador = 0;

    printf("Digite um numero: ");
    scanf("%f", &numero);
    maior = numero;
    soma += numero;
    contador++;

    while (continuar == 1) {
        printf("Deseja informar mais um numero? (1 para sim, 2 para nao): ");
        scanf("%d", &continuar);

        if (continuar == 1) {
            printf("Digite um numero: ");
            scanf("%f", &numero);
            if (numero > maior) {
                maior = numero;
            }
            soma += numero;
            contador++;
        }
    }

    printf("O maior numero digitado foi: %.2f\n", maior);
    printf("A media dos numeros digitados e: %.2f\n", soma / contador);

    return 0;
}