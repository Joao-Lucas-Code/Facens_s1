#include <stdio.h>

int main() {
    int vetor[10], num, contador;
    printf("Digite 10 numeros para o vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    do {
        printf("Digite um numero para buscar no vetor: ");
        scanf("%d", &num);
        contador = 0;
        for (int i = 0; i < 10; i++) {
            if (vetor[i] == num) {
                contador++;
            }
        }
        if (contador > 0) {
            printf("O numero %d se repete %d vez(es) no vetor.\n", num, contador);
        } else {
            printf("O numero %d nao foi encontrado no vetor. Tente novamente.\n", num);
        }
    } while (contador == 0);

    return 0;
}