// Lista 5, Exercicio 6 
// Receber altura e sexo (1-Masc, 2-Fem) de 15 pessoas.
// Mostrar: menor altura, média altura mulheres, número de homens, sexo pessoa mais alta.
#include <stdio.h>

int main() {
    const int NUM_PESSOAS = 15; 
    float altura, menorAltura = -1.0, somaAlturaMulheres = 0;
    float maiorAltura = -1.0;
    int sexo, numHomens = 0, numMulheres = 0, sexoPessoaMaisAlta = 0;
    int i;

    for (i = 0; i < NUM_PESSOAS; i++) 
    {
        printf("\nPessoa %d\n", i + 1);
        printf("Digite a altura (em metros, ex: 1.70): ");
        scanf("%f", &altura);
        printf("Digite o sexo (1 para Masculino, 2 para Feminino): ");
        scanf("%d", &sexo);

        if (altura < menorAltura) 
        {
            menorAltura = altura;
        }
        if (altura > maiorAltura) 
        {
            maiorAltura = altura;
            sexoPessoaMaisAlta = sexo;
        }

        if (sexo > 2 && sexo != 0)
        {
            printf("Voce nao digitou o numero certo pedido para a escolha do seu sexo, seu dado foi discartado pelo sistema.\n");
        }
        
        if (sexo == 1) 
        {
            numHomens++; 
        } 
        else if (sexo == 2) 
        { 
            numMulheres++;
            somaAlturaMulheres += altura;
        } 
        else 
        {
            printf("Sexo invalido para pessoa %d. Dados ignorados para algumas estatisticas.\n", i+1);
        }
    }

    printf("\n--- Resultados ---\n");
    if (NUM_PESSOAS > 0) 
    {
        if (menorAltura != -1.0) 
        {
             printf("Menor altura do grupo: %.2f m\n", menorAltura);
        }
        else 
        {
            printf("Nenhuma altura valida informada.\n");
        }

        if (numMulheres > 0) 
        {
            printf("Media de altura das mulheres: %.2f m\n", somaAlturaMulheres / numMulheres); // [cite: 74]
        } 
        else 
        {
            printf("Nenhuma mulher no grupo para calcular a media de altura.\n");
        }

        printf("Numero de homens: %d\n", numHomens); // [cite: 74]

        if (maiorAltura != -1.0) 
        {
            printf("Sexo da pessoa mais alta (%.2fm): ", maiorAltura); // [cite: 75]
            if (sexoPessoaMaisAlta == 1) 
            {
                printf("Masculino\n");
            } 
            else if (sexoPessoaMaisAlta == 2) 
            {
                printf("Feminino\n");
            } 
            else 
            {
                printf("Nao determinado (devido a entrada invalida)\n");
            }
        } 
        else 
        {
             printf("Nenhuma pessoa registrada para determinar a mais alta.\n");
        }


    } 
    else 
    {
        printf("Nenhum dado coletado.\n");
    }

    return 0;
}