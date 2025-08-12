// Lista 3, Exercicio 3
// Calcular o IMC (Índice de Massa Corporal) de uma pessoa.
// IMC = Peso(kg) / Altura^2(m). Informe a classificação.

#include <stdio.h>
#include <math.h> 
int main() 
{
    float peso, altura, imc;

    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);
    printf("Digite a altura (em metros, ex: 1.75): ");
    scanf("%f", &altura);

    if (altura > 0) 
    {
        imc = peso / pow(altura, 2);
        

        printf("Seu IMC e: %.2f\n", imc);
        printf("Classificacao: ");

        if (imc < 18.5) 
        {
            printf("Abaixo do peso\n");
        } 
        else if (imc < 25.0) 
        {
            printf("Saudavel\n"); 
        } 
        else if (imc < 30.0) 
        {
            printf("Sobrepeso\n");
        } 
        else if (imc < 35.0) 
        {
            printf("Obesidade Grau I\n"); 
        } 
        else if (imc < 40.0) 
        {
            printf("Obesidade Grau II (severa)\n"); 
        } 
        else 
        {
            printf("Obesidade Grau III (morbida)\n"); 
        }
    } 
    else 
    {
        printf("Altura invalida.\n");
    }

    return 0;
}