// Lista 2, Exercicio 9 [cite: 41, 42]
// Receber um ano e se este ano for bissexto exibir na tela "Ano Bissexto",
// senão exibir na tela "Ano Não-Bissexto".
// Um ano é bissexto se for divisível por 4, mas não por 100.
// Um ano também é bissexto se for divisível por 400.

#include <stdio.h>

int main() 
{
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) 
    {
        printf("%d e um Ano Bissexto.\n", ano);
    } 
    else 
    {
        printf("%d e um Ano Nao-Bissexto.\n", ano);
    }

    return 0;
}