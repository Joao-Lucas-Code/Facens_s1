// Lista 1, Exercicio 14 (Pagina 4) [cite: 24, 25, 26, 27]
// A disciplina Algoritmos e Programação é dividida em teoria e prática.
// Teoria: 2 provas (0-10). Prática: 2 provas (0-10).
// Nota final = (média teoria * 0.6) + (média prática * 0.4).
// Receba as notas e mostre a nota final.

#include <stdio.h>

int main() {
    float provaTeoria1, provaTeoria2, provaPratica1, provaPratica2;
    float mediaTeoria, mediaPratica, notaFinal;

    printf("Digite a nota da 1a prova de teoria (0-10): ");
    scanf("%f", &provaTeoria1);
    printf("Digite a nota da 2a prova de teoria (0-10): ");
    scanf("%f", &provaTeoria2);

    printf("Digite a nota da 1a prova de pratica (0-10): ");
    scanf("%f", &provaPratica1);
    printf("Digite a nota da 2a prova de pratica (0-10): ");
    scanf("%f", &provaPratica2);

    mediaTeoria = (provaTeoria1 + provaTeoria2) / 2;
    mediaPratica = (provaPratica1 + provaPratica2) / 2;

    notaFinal = (mediaTeoria * 0.6) + (mediaPratica * 0.4);

    printf("\nMedia Teoria: %.2f\n", mediaTeoria);
    printf("Media Pratica: %.2f\n", mediaPratica);
    printf("Nota Final do Semestre: %.2f\n", notaFinal);

    return 0;
}