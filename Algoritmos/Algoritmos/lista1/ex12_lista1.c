// Lista 1, Exercicio 12 [cite: 19, 20, 21]
// Uma empresa paga R$ 10.00 por hora normal trabalhada e R$ 15.00 por hora extra.
// Receber o total de horas normais e o total de horas extras trabalhadas por um empregado no mês.
// Calcular e exibir o salário dele.

#include <stdio.h>

int main() {
    float horasNormais, horasExtras, salario;
    float valorHoraNormal = 10.00;
    float valorHoraExtra = 15.00;

    printf("Digite o total de horas normais trabalhadas no mes: ");
    scanf("%f", &horasNormais);

    printf("Digite o total de horas extras trabalhadas no mes: ");
    scanf("%f", &horasExtras);

    salario = (horasNormais * valorHoraNormal) + (horasExtras * valorHoraExtra);

    printf("O salario do empregado e: R$ %.2f\n", salario);

    return 0;
}