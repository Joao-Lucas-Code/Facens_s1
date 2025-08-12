/*
    01 - Receber um número e informar se ele é positivo, negativo ou nulo.
    extremidade do intervalo.   
    Autor: João Lucas Gomes
    Data da última modificação: 25/03/25
*/
#include <stdio.h>

int main(){
    int numero;

    printf("Informe um numero: ");
    scanf("%i", &numero);

    if (numero > 0)
    printf("O numero %i e positivo\n",numero);

    if (numero < 0)
    printf("O numero %i e negativo\n",numero);

    if (numero == 0)
    printf("O numero %i e nulo\n",numero);

}