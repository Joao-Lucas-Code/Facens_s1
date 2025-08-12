// Lista 1, Exercicio 4 [cite: 9]
// Receber o ano de nascimento de uma pessoa e mostrar aproximadamente quantos dias de vida ela tem.
// (Considerando o ano atual como 2025 e 365 dias por ano)

#include <stdio.h>

int main() {
    int anoNascimento, anoAtual = 2025;
    long diasDeVida;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    diasDeVida = (long)(anoAtual - anoNascimento) * 365;

    printf("Aproximadamente %ld dias de vida.\n", diasDeVida);

    return 0;
}
