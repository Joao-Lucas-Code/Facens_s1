/*
    01 - Receber um ano e se este ano for bissexto exibir na tela “Ano Bissexto”,
    senão exibir na tela “Ano Não-Bissexto”. Um ano é bissexto se for divisível
    por 4, mas não por 100. Um ano também é bissexto se for divisível por 400.
    Autor: João Lucas Gomes
    Data da última modificação: 18/03/25
*/
#include <stdio.h>

main(){
    int ano;
    printf("Digite o Ano que quer verificar: ");
    scanf("%i", &ano);

    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0))
    printf("%i e um ano bissexto\n", ano);
    else
    printf("%i nao e um ano bissexto\n", ano);

    return 0;
}