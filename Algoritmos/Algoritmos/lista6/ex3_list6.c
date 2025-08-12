#include <stdio.h>

int main() {
    float nota1, nota2, media;

    do {
        printf("Digite a nota do modulo 1 (0 a 10): ");
        scanf("%f", &nota1);
    } while (nota1 < 0 || nota1 > 10);

    do {
        printf("Digite a nota do modulo 2 (0 a 10): ");
        scanf("%f", &nota2);
    } while (nota2 < 0 || nota2 > 10);

    media = (nota1 + nota2) / 2;
    printf("A media do aluno e: %.2f\n", media);

    return 0;
}