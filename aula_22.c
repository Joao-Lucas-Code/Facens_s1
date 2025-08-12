/*
    01 - Fazer um while que mostra o triplo do valor 
    digitado e se digitar um valor >= 0 o programa acaba 
    Autor: João Lucas Gomes
    Data da última modificação: 15/04/25
*/
#include <stdio.h>
int main()
{
    int num=1;
    printf("Valor inicial num %i\n", num);
    while(num > 0)
    {
        printf("Digite um numero: ");
        scanf("%i", &num);
        printf("Triplo %i\n", num*3);
    }
    printf("Fim do programa!!!");

    return 0;
}
