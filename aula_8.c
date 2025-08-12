/*
    01 - Mostra se o numero é maior que 0, menor que 0 e se o número é 0
    Autor: João Lucas Gomes
    Data da última modificação: 18/03/25
*/
#include <stdio.h>

int main(){
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero > 0)
    printf("O numero e maior que zero.\n");
    else if (numero < 0)
    printf("O numero e menor que zero.\n");
    else
    printf("O numero e zero.\n");

    return 0;
}