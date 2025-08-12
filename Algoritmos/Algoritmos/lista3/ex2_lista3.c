// Lista 3, Exercicio 2
// Receber um intervalo (dois valores) e em seguida um número.
// Informar se o número está dentro, fora ou nas extremidades do intervalo.

#include <stdio.h>

int main() 
{
    float inicioIntervalo, fimIntervalo, numero, temp;

    printf("Digite o valor de inicio do intervalo: ");
    scanf("%f", &inicioIntervalo);
    printf("Digite o valor de fim do intervalo: ");
    scanf("%f", &fimIntervalo);


    if (inicioIntervalo > fimIntervalo) 
    {
        temp = inicioIntervalo;
        inicioIntervalo = fimIntervalo;
        fimIntervalo = temp;
        printf("(Intervalo ordenado para %.2f a %.2f)\n", inicioIntervalo, fimIntervalo);
    }

    printf("Digite um numero para verificar: ");
    scanf("%f", &numero);

    if (numero == inicioIntervalo || numero == fimIntervalo) 
    {
        printf("O numero %.2f esta em uma das extremidades do intervalo [%.2f, %.2f].\n", numero, inicioIntervalo, fimIntervalo);
    } 
    if (numero > inicioIntervalo && numero < fimIntervalo) 
    {
        printf("O numero %.2f esta dentro do intervalo [%.2f, %.2f].\n", numero, inicioIntervalo, fimIntervalo);
    } 
    else 
    {
        printf("O numero %.2f esta fora do intervalo [%.2f, %.2f].\n", numero, inicioIntervalo, fimIntervalo);
    }

    return 0;
}