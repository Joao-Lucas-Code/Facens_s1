// Lista 2, Exercicio 4 [cite: 32, 33]
// Calcular a média de um aluno em um semestre com duas provas, onde M = (P1+P2)/2.
// Se a média for maior ou igual a 5 escreva "aprovado", senão
// calcule e mostre quanto faltou para atingir 5.

#include <stdio.h>

int main() {
    float p1, p2, media, faltou;

    printf("Digite a nota da P1: ");
    scanf("%f", &p1);

    printf("Digite a nota da P2: ");
    scanf("%f", &p2);

    media = (p1 + p2) / 2;
    printf("Media: %.2f\n", media);

    if (media >= 5.0) {
        printf("Aprovado!\n");
    } else {
        faltou = 5.0 - media;
        printf("Reprovado. Faltou %.2f para atingir a media 5.\n", faltou);
    }

    return 0;
}