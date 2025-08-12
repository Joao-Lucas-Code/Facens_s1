#include <stdio.h>

int main() {
    int matriculas[3];
    char respostas[3][10];
    char gabarito[10];
    float notas[3] = {0.0, 0.0, 0.0};
    int aprovados = 0;

    printf("Digite o gabarito (10 questoes):\n");
    for (int i = 0; i < 10; i++) scanf(" %c", &gabarito[i]);

    for (int i = 0; i < 3; i++) {
        printf("\nDigite a matricula do aluno %d: ", i + 1);
        scanf("%d", &matriculas[i]);
        printf("Digite as respostas do aluno %d:\n", i + 1);
        for (int j = 0; j < 10; j++) {
            scanf(" %c", &respostas[i][j]);
            if (respostas[i][j] == gabarito[j]) {
                notas[i] += 1.0;
            }
        }
    }

    printf("\n--- Resultados ---\n");
    for (int i = 0; i < 3; i++) {
        printf("a) Aluno Matricula: %d\n", matriculas[i]);
        printf("   Respostas: ");
        for (int j = 0; j < 10; j++) printf("%c ", respostas[i][j]);
        printf("\n   Nota: %.1f\n", notas[i]);
        if (notas[i] >= 5.0) {
            aprovados++;
        }
    }

    float percentual_aprovacao = ((float)aprovados / 3.0) * 100.0;
    printf("\nb) Percentual de aprovacao: %.2f%%\n", percentual_aprovacao);

    return 0;
}

