/*
    01 - Mostra a conta da circunferencia, pedindo para o usuario digitar o Raio
    Autor: João Lucas Gomes
    Data da última modificação: 11/03/25
*/
#include <stdio.h>

int main() {
    const float pi = 3.14;
    float r, resultado;
    
    printf("Digite o Raio: ");
    scanf("%f", &r);
    
    resultado = 2 * pi * r;
    
    printf("O resultado da conta C = 2 x pi x R = %.2f\n", resultado);
    
    return 0;
}
