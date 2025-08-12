// Lista 1, Exercicio 9 [cite: 15]
// Receber um número e calcular o valor de sua raiz quadrada e sua oitava potência.
// Utilize as funções pow(base, expoente) e sqrt(num) da biblioteca <math.h>.

#include <stdio.h>
#include <math.h>
int main() {
    double numero, raizQuadrada, oitavaPotencia;

    printf("Digite um numero: ");
    scanf("%lf", &numero);
    if (numero >= 0) {
        raizQuadrada = sqrt(numero);
        printf("A raiz quadrada de %.2lf e: %.2lf\n", numero, raizQuadrada);
    } else {
        printf("Nao e possivel calcular a raiz quadrada de um numero negativo.\n");
    }

    oitavaPotencia = pow(numero, 8);
    printf("A oitava potencia de %.2lf e: %.2lf\n", numero, oitavaPotencia);

    return 0;
}