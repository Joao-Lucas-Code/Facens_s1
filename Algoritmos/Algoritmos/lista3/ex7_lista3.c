// Lista 3, Exercicio 7
// Classificar um triângulo (equilátero, isósceles, escaleno)
// Receber os três lados de um triângulo.

#include <stdio.h>

int main() 
{
    float lado1, lado2, lado3;

    printf("Digite a medida do lado 1 do triangulo: ");
    scanf("%f", &lado1);
    printf("Digite a medida do lado 2 do triangulo: ");
    scanf("%f", &lado2);
    printf("Digite a medida do lado 3 do triangulo: ");
    scanf("%f", &lado3);

    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) 
    {
        if (lado1 == lado2 && lado2 == lado3) 
        {
            printf("O triangulo e Equilatero.\n");
        } 
        else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) 
        {
            printf("O triangulo e Isosceles.\n");
        } 
        else 
        {
            printf("O triangulo e Escaleno.\n");
        }
    } 
    else 
    {
        printf("As medidas informadas nao formam um triangulo valido.\n");
    }

    return 0;
}