// Lista 5, Exercicio 5 [cite: 71, 72, 73]
// Pesquisa com 15 habitantes: salário e número de filhos.
// Calcular: média salário, média filhos, maior salário, % pessoas salário até R$500.

#include <stdio.h>

int main() 
{
    const int NUM_HABITANTES = 15;
    float salario, somaSalarios = 0, maiorSalario = 0;
    int numFilhos, somaFilhos = 0;
    int contSalarioAte500 = 0;
    int i;

    for (i = 0; i < NUM_HABITANTES; i++) 
    {
        printf("\nHabitante %d\n", i + 1);
        printf("Digite o salario: R$ ");
        scanf("%f", &salario);
        printf("Digite o numero de filhos: ");
        scanf("%d", &numFilhos);

        somaSalarios += salario;
        somaFilhos += numFilhos;

        if (i == 0 || salario > maiorSalario) 
        {
            maiorSalario = salario;
        }
        if (salario <= 500.00) 
        { 
            contSalarioAte500++;
        }
    }

    printf("\n--- Resultados da Pesquisa ---\n");
    if (NUM_HABITANTES > 0) 
    {
        printf("Media do salario da populacao: R$ %.2f\n", somaSalarios / NUM_HABITANTES);
        printf("Media do numero de filhos: %.2f\n", (float)somaFilhos / NUM_HABITANTES); 
        printf("Maior salario: R$ %.2f\n", maiorSalario); 
        printf("Percentual de pessoas com salario ate R$ 500.00: %.2f%%\n",((float)contSalarioAte500 / NUM_HABITANTES) * 100);
    } 
    else 
    {
        printf("Nenhum dado coletado.\n");
    }

    return 0;
}