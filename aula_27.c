/*
    01 - ler 10 numeros inteiros e armazena-los em um vetor
    mostrar os numeros digitados na ordem digitada
    Autor: João Lucas Gomes
    Data da última modificação: 29/04/25
*/
#include <stdio.h>


int main()
{
    int numero[10];

    printf("Digite os 10 numeros:\n");
    for(int i = 0; i < 10; i++){
        printf("Numero %i: ", i+1);
        scanf("%i", &numero[i]);
}
    printf("Os numeros digitados foram: \n");
    for(int i = 0; i < 10; i++){
        printf("%i|", numero[i]);
    }

    printf("\n");

    return 0;
}