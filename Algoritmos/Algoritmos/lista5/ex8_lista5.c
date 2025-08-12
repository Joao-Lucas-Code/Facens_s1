// Lista 5, Exercicio 8
// Receber qtd alunos 3º sem. Para cada aluno: qtd disciplinas 2º sem e nota final de cada.
// Calcular e mostrar média de cada aluno do último semestre.

#include <stdio.h>

int main() 
{
    int numAlunos, numDisciplinas, i, j;
    float nota, somaNotas, mediaAluno;

    printf("Digite a quantidade de alunos cursando o 3o semestre: ");
    scanf("%d", &numAlunos);

    if (numAlunos <= 0) 
    {
        printf("Quantidade de alunos deve ser positiva.\n");
        return 1;
    }

    for (i = 0; i < numAlunos; i++) 
    {
        printf("\nAluno %d:\n", i + 1);
        printf("Quantas disciplinas o aluno %d cursou no 2o semestre? ", i + 1);
        scanf("%d", &numDisciplinas);

        if (numDisciplinas <= 0) 
        {
            printf("Quantidade de disciplinas invalida para o aluno %d. Media nao calculada.\n", i + 1);
            continue; // Pula para o próximo aluno
        }

        somaNotas = 0;
        printf("Digite as notas finais das %d disciplinas do aluno %d:\n", numDisciplinas, i + 1);
        for (j = 0; j < numDisciplinas; j++) 
        {
            printf("Nota da disciplina %d: ", j + 1);
            scanf("%f", &nota);
            somaNotas += nota;
        }

        mediaAluno = somaNotas / numDisciplinas;
        printf("A media do aluno %d no ultimo semestre cursado foi: %.2f\n", i + 1, mediaAluno);
    }

    return 0;
}