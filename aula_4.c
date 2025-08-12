/*
    01 - int - pega dois valores e motra a Soma, Multiplicação, Subtação e Divisão.
    Autor: João Lucas Gomes
    Data da última modificação: 11/03/25
*/

#include <stdio.h>

int main() {
    int a = 10, b = 4; // necessario colocar valores aqui? Não

    printf("Entre com 2 numeros inteiros: ");
    scanf("%d%d",&a,&b);

    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);
    printf("Divisao inteira: %d\n", a / b);

    return 0;
}