/*
    01 - Corrige os salários se for até 1000R$ aumento de 5%
    se for maior do que 1000R$ aumento de 7%
    Autor: João Lucas Gomes
    Data da última modificação: 18/03/25
*/
#include <stdio.h>
int main()
{
    float salario;

    printf("Qual e seu salario: ");
    scanf("%f", &salario);
    if (salario < 1000)
    printf("O novo salario é: %f\n", salario*1.05);
    else
    printf("O novo salario e: %.2f\n", salario*1.07);
}