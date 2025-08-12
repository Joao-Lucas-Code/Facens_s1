// Lista 3, Exercicio 8
// Calcular o peso ideal. Não calcular para < 12 anos ou > 65 anos.
// Receber idade, sexo (1-Masc, 2-Fem), altura, peso atual.
// Indicar se está no peso ideal, acima ou abaixo.
// Fórmula homem: (72.7 * altura) - 62
// Fórmula mulher: (62.1 * altura) - 48.7

#include <stdio.h>

int main() {
    int idade, sexo;
    float altura, pesoAtual, pesoIdeal;

    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);

    if (idade < 12 || idade > 65) 
    { 
        printf("O calculo do peso ideal nao e preciso para esta faixa etaria.\n");
        return 0; 
    }

    printf("Digite o sexo (1 para Masculino, 2 para Feminino): ");
    scanf("%d", &sexo);

    printf("Digite a altura (em metros, ex: 1.75): ");
    scanf("%f", &altura);

    printf("Digite o peso atual (em kg): "); 
    scanf("%f", &pesoAtual);

    if (sexo == 1) 
    { 
        pesoIdeal = (72.7 * altura) - 62;
    } 
    else if (sexo == 2) 
    { 
        pesoIdeal = (62.1 * altura) - 48.7; 
    } 
    else 
    {
        printf("Sexo invalido. Use 1 para Masculino ou 2 para Feminino.\n");
        return 1;
    }

    printf("\nPeso Ideal calculado: %.2f kg\n", pesoIdeal);
    printf("Peso Atual: %.2f kg\n", pesoAtual);

    if (pesoAtual < pesoIdeal * 0.95) 
    { 
        printf("Voce esta abaixo do peso ideal.\n"); 
    } 
    else if (pesoAtual > pesoIdeal * 1.05)
    {
        printf("Voce esta acima do peso ideal.\n"); 
    } 
    else 
    {
        printf("Voce esta no peso ideal (ou proximo dele).\n"); 
    }

    return 0;
}