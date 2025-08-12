// Lista 2, Exercicio 3 [cite: 30, 31]
// Receber numerador e denominador. Calcular e mostrar o resultado da
// divisão, desde que possível (denominador diferente de zero). Se não for
// possível dividir, apenas escreva "não existe divisão por zero".

#include <stdio.h>

int main() {
    float numerador, denominador, resultado;

    printf("Digite o numerador: ");
    scanf("%f", &numerador);

    printf("Digite o denominador: ");
    scanf("%f", &denominador);

    if (denominador != 0) 
    {
        resultado = numerador / denominador;
        printf("Resultado da divisao: %.2f / %.2f = %.2f\n", numerador, denominador, resultado);
    } 
    else 
    {
        printf("Nao existe divisao por zero.\n");
    }

    return 0;
}