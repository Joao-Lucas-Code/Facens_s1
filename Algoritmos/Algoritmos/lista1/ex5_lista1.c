// Lista 1, Exercicio 5 
// Criar um programa em Linguagem C que receba dois números inteiros e
// retorne: o valor da divisão e o resto da divisão.

#include <stdio.h>

int main() {
    int num1, num2, divisao, resto;

    printf("Digite o primeiro numero inteiro (dividendo): ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro (divisor): ");
    scanf("%d", &num2);

    if (num2 != 0) {
        divisao = num1 / num2;
        resto = num1 % num2;
        printf("Divisao: %d / %d = %d\n", num1, num2, divisao);
        printf("Resto da divisao: %d %% %d = %d\n", num1, num2, resto);
    } else {
        printf("Erro: Divisao por zero nao permitida.\n");
    }

    return 0;
}