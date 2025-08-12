// Lista 2, Exercicio 7 [cite: 36, 37]
// Implemente um programa que calcule aumento de salário no ano corrente.
// Se o salário for de até R$ 1000.00 deve ser calculado o novo salário com
// aumento de 5%, para um salário maior que R$ 1000.00 o aumento é de 7%.

#include <stdio.h>

int main() 
{
    float salarioAtual, novoSalario;

    printf("Digite o salario atual: R$ ");
    scanf("%f", &salarioAtual);

    if (salarioAtual <= 1000.00) 
    {
        novoSalario = salarioAtual * 1.05; 
    } 
    else 
    {
        novoSalario = salarioAtual * 1.07;
    }

    printf("Novo salario: R$ %.2f\n", novoSalario);

    return 0;
}