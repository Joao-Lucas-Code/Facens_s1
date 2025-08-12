// Lista 3, Exercicio 6 [cite: 52, 53]
// Implementar uma calculadora: usuário digita dois números e uma opção
// (1-adição, 2-subtração, 3-multiplicação, 4-divisão). Mostrar resultado ou opção inválida.

#include <stdio.h>

int main() {
    float num1, num2, resultado;
    int opcao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("\nEscolha a operacao:\n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao) 
    {
        case 1:
            resultado = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, resultado);
            break;
        case 4:
            if (num2 != 0) 
            {
                resultado = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, resultado);
            } 
            else 
            {
                printf("Erro: Divisao por zero nao permitida.\n");
            }
            break;
        default:
            printf("Opcao invalida!\n");
    }
    return 0;
}