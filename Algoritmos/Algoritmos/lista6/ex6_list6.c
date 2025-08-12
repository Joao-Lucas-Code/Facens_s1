#include <stdio.h>

int main() {
    float saldoInicial, valor;
    int tipoOperacao;

    printf("Digite o saldo inicial da conta: ");
    scanf("%f", &saldoInicial);

    do {
        printf("\nDigite a operacao (1.Deposito, 2.Retirada, 3.Fim): ");
        scanf("%d", &tipoOperacao);

        if (tipoOperacao == 1 || tipoOperacao == 2) {
            printf("Digite o valor: ");
            scanf("%f", &valor);
            if (tipoOperacao == 1) {
                saldoInicial += valor;
            } else {
                saldoInicial -= valor;
            }
        }
    } while (tipoOperacao != 3);

    printf("\nSaldo final: R$ %.2f\n", saldoInicial);
    if (saldoInicial == 0) {
        printf("CONTA ZERADA\n");
    } else if (saldoInicial < 0) {
        printf("CONTA ESTOURADA\n");
    } else {
        printf("CONTA PREFERENCIAL\n");
    }

    return 0;
}