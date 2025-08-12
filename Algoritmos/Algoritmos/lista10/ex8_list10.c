#include <stdio.h>

int main() {
    char respostas[3][10];
    char gabarito[10];
    int resultado[3] = {0, 0, 0};

    printf("Digite o gabarito (10 questoes, a, b, c ou d):\n");
    for (int i = 0; i < 10; i++) {
        scanf(" %c", &gabarito[i]);
    }

    for (int i = 0; i < 3; i++) {
        printf("Digite as respostas do aluno %d:\n", i + 1);
        for (int j = 0; j < 10; j++) {
            scanf(" %c", &respostas[i][j]);
            if (respostas[i][j] == gabarito[j]) {
                resultado[i]++;
            }
        }
    }

    printf("\nPontuacao dos alunos:\n");
    for (int i = 0; i < 3; i++) {
        printf("Aluno %d: %d pontos\n", i + 1, resultado[i]);
    }
    return 0;
}