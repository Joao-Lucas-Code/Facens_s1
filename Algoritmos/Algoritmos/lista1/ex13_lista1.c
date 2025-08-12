// Lista 1, Exercicio 13 (Pagina 4) [cite: 22, 23]
// Uma empresa contrata um encanador a R$ 35.00 por dia.
// Crie um programa que solicite o número de dias trabalhados pelo encanador e
// mostre o valor líquido a ser pago, sabendo que são descontados 8% de imposto de renda.

#include <stdio.h>

int main() 
{
    int diasTrabalhados;
    float valorPorDia = 35.00;
    float salarioBruto, impostoRenda, salarioLiquido;
    float percentualImposto = 0.08; // 8%

    printf("Digite o numero de dias trabalhados pelo encanador: ");
    scanf("%d", &diasTrabalhados);

    salarioBruto = diasTrabalhados * valorPorDia;
    impostoRenda = salarioBruto * percentualImposto;
    salarioLiquido = salarioBruto - impostoRenda;

    printf("Salario Bruto: R$ %.2f\n", salarioBruto);
    printf("Desconto Imposto de Renda (8%%): R$ %.2f\n", impostoRenda);
    printf("Valor Liquido a ser pago: R$ %.2f\n", salarioLiquido);

    return 0;
}