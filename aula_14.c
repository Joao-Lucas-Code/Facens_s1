/*
    01 - Um triângulo pode ser classificado de
    acordo com as medidas de seus lados:
    - Um triângulo equilátero possui todos os lados de mesma medida.
    - Um triângulo isósceles possui dois lados de mesma medida.
    - Um triângulo escaleno possui as medidas dos três lados diferentes.

    Autor: João Lucas Gomes
    Data da última modificação: 25/03/25
*/
#include <stdio.h>

int main(){
    float a,b,c;
    printf("Entre com os 3 lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a == b && b == c)
    {
        printf("Equilatero\n");
    }
    else if (a == b || b == c || a == c)
    {
        printf("Isosceles\n");
    }
    else
    {
        printf("Escaleno\n");
    }

    return 0;
}