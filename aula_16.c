//PROVA C1 E OQUE EU ERREI
#include <stdio.h>

int main()
{
    float n1, n2;

    printf("Digite o valor total: ");
    scanf("%f", &n1);

    printf("Digite a quantidade de itens: ");
    scanf("%f", &n2); // ESQUECI OS &

    if (n2 >= 2 && n2 <= 6)
        printf("O valor total com desconto de 10%% e: %.2f\n", n1 * 0.9); // FIZ AUMENTO NAO DESCONTO

    else if (n2 >= 7)
        printf("O valor total com desconto de 25%% e: %.2f\n", n1 * 0.75);

    else if (n2 == 1)
        printf("O valor total e: %.2f\n", n1);

    else
        printf("O valor digitado e inválido.\n");

    return 0;
}