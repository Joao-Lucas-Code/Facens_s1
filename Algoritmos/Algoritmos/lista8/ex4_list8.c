#include <stdio.h>

int main() {
    int gabarito[6], aposta[10], acertos = 0;
    printf("Digite o gabarito da Mega-Sena (6 numeros):\n");
    for (int i = 0; i < 6; i++) scanf("%d", &gabarito[i]);

    printf("Digite sua aposta (10 numeros):\n");
    for (int i = 0; i < 10; i++) scanf("%d", &aposta[i]);

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 6; j++) {
            if (aposta[i] == gabarito[j]) {
                acertos++;
            }
        }
    }

    printf("O apostador fez %d pontos.\n", acertos);
    if (acertos == 6) printf("Fez a Sena!\n");
    else if (acertos == 5) printf("Fez a Quina!\n");
    else if (acertos == 4) printf("Fez a Quadra!\n");

    return 0;
}