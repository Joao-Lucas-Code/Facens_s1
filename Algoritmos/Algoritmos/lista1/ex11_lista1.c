// Lista 1, Exercicio 11 [cite: 18]
// A velocidade média de um veículo em um percurso é dada através da
// distância percorrida pelo tempo, ou seja, Vm = DeltaS / DeltaT. Calcular e exibir a
// velocidade média do veículo em uma estrada recebendo esses dois dados do percurso.

#include <stdio.h>

int main() {
    float distancia, tempo, velocidadeMedia;

    printf("Digite a distancia percorrida (em km): ");
    scanf("%f", &distancia);

    printf("Digite o tempo gasto (em horas): ");
    scanf("%f", &tempo);

    if (tempo > 0) {
        velocidadeMedia = distancia / tempo;
        printf("A velocidade media do veiculo e de %.2f km/h.\n", velocidadeMedia);
    } else {
        printf("O tempo gasto deve ser maior que zero.\n");
    }

    return 0;
}