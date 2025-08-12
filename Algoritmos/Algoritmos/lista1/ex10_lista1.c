// Lista 1, Exercicio 10 [cite: 16, 17]
// Calcular e exibir o consumo médio de combustível de um veículo recebendo
// a distância percorrida e a quantidade de combustível gasto.
// Consumo médio = distância percorrida (km) / combustível gasto (l).

#include <stdio.h>

int main() {
    float distancia, combustivelGasto, consumoMedio;

    printf("Digite a distancia percorrida (em km): ");
    scanf("%f", &distancia);

    printf("Digite a quantidade de combustivel gasto (em litros): ");
    scanf("%f", &combustivelGasto);

    if (combustivelGasto > 0) {
        consumoMedio = distancia / combustivelGasto;
        printf("O consumo medio do veiculo e de %.2f km/l.\n", consumoMedio);
    } else {
        printf("A quantidade de combustivel gasto deve ser maior que zero.\n");
    }

    return 0;
}
