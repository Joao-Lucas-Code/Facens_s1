/*
    01 - Receber dois números e os apresente em ordem crescente. Utilize apenas
    a estrutura de decisão if, ou seja, sem o opcional else.
    Autor: João Lucas Gomes
    Data da última modificação: 18/03/25
*/
#include <stdio.h>

main(){
    float n1, n2;
    printf("Digite dois numeros: ");
    scanf("%f %f", &n1, &n2);
    if (n1 > n2)
    printf("%.1f - %.1f",n2,n1);
    if (n2 > n1)
    printf("%.1f - %.1f",n1,n2);

    return 0;
}