/*
    01 - Receber um número e mostrar sua tabuada do 1 ao 10.
    Autor: João Lucas Gomes
    Data da última modificação: 01/04/25
*/
#include <stdio.h>

int main()
{
    int i, num;
    printf("Digite o numero que quer saber a tabuada: ");
    scanf("%i", &num);
    for(i = 1; i <= 10; i++){
        printf("%i X %i = %i \n", num,i,num*i);
    }
    return 0;
}