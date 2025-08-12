// Lista 2, Exercicio 8 [cite: 38, 39, 40]
// Plano de 50 min por R$ 50.00. Excedente: R$ 1.50 por min.
// Receber minutos gastos e calcular valor da conta.

#include <stdio.h>

int main() 
{
    int minutosGastos;
    float valorConta;
    float custoPlano = 50.00;
    int minutosPlano = 50;
    float custoMinutoExcedente = 1.50;

    printf("Digite quantos minutos foram gastos no mes: ");
    scanf("%d", &minutosGastos);

    valorConta = custoPlano;

    if (minutosGastos > minutosPlano) 
    {
        valorConta += (minutosGastos - minutosPlano) * custoMinutoExcedente;
    }

    printf("O valor da conta e: R$ %.2f\n", valorConta);

    return 0;
}