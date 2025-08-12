// Lista 4, Exercicio 7 [cite: 66]
// Para 30 alunos, receber média teoria e laboratório, calcular final
// (final = teoria*0.6 + lab*0.4) e informar se foi bem (>=7), razoável (5<=final<7) ou mal (<5).

#include <stdio.h>

int main() {
    float mediaTeoria, mediaLaboratorio, mediaFinal;
    int i;

    for (i = 0; i <= 30; i++) 
    {
        printf("\nAluno %d:\n", i + 1);
        printf("Digite a media de teoria: ");
        scanf("%f", &mediaTeoria);
        printf("Digite a media de laboratorio: ");
        scanf("%f", &mediaLaboratorio);

        mediaFinal = (mediaTeoria * 0.6) + (mediaLaboratorio * 0.4);
        printf("Media Final do Aluno %d: %.2f - ", i + 1, mediaFinal);

        if (mediaFinal >= 7.0) 
        {
            printf("Foi bem!\n");
        } 
        else if (mediaFinal >= 5.0) 
        {
            printf("Razoavel.\n");
        } else 
        {
            printf("Foi mal.\n");
        }
    }

    return 0;
}
