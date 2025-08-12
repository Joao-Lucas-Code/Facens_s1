#include <stdio.h>
#include <string.h>

int main() {
    int voto, votosJose = 0, votosMaria = 0, votosJoao = 0, votosBranco = 0, votosNulo = 0, totalVotos = 0;

    printf("ELEICOES\n");
    printf("1 - Jose\n2 - Maria\n3 - Joao\n4 - Branco\n5 - Nulo\n0 - Encerrar\n");

    do {
        printf("Digite seu voto: ");
        scanf("%d", &voto);

        switch (voto) {
            case 1: votosJose++; totalVotos++; break;
            case 2: votosMaria++; totalVotos++; break;
            case 3: votosJoao++; totalVotos++; break;
            case 4: votosBranco++; totalVotos++; break;
            case 5: votosNulo++; totalVotos++; break;
            case 0: break;
            default: printf("Voto invalido.\n");
        }
    } while (voto != 0);

    printf("\n--- RESULTADO DA ELEICAO ---\n");
    printf("Votos para Jose: %d\n", votosJose);
    printf("Votos para Maria: %d\n", votosMaria);
    printf("Votos para Joao: %d\n", votosJoao);
    printf("Votos em Branco: %d\n", votosBranco);
    printf("Votos Nulos: %d\n", votosNulo);

    char vencedor[10];
    int votosVencedor = 0;

    if (votosJose > votosMaria && votosJose > votosJoao) {
        strcpy(vencedor, "Jose");
        votosVencedor = votosJose;
    } else if (votosMaria > votosJose && votosMaria > votosJoao) {
        strcpy(vencedor, "Maria");
        votosVencedor = votosMaria;
    } else if (votosJoao > votosJose && votosJoao > votosMaria) {
        strcpy(vencedor, "Joao");
        votosVencedor = votosJoao;
    } else {
        strcpy(vencedor, "Empate/Sem vencedor");
    }

    if (votosVencedor > 0) {
        printf("Candidato vencedor: %s\n", vencedor);
        float percentual = ((float)votosVencedor / totalVotos) * 100.0;
        printf("Percentual de eleitores do vencedor: %.2f%%\n", percentual);
    } else {
         printf("Nao houve vencedor.\n");
    }

    return 0;
}