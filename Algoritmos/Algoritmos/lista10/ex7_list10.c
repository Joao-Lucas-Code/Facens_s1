#include <stdio.h>

int main() {
    int estoque[4][3]; // 4 armazens, 3 produtos

    printf("Digite o estoque dos 3 produtos nos 4 armazens:\n");
    for(int i=0; i<4; i++) { // Armazem
        for(int j=0; j<3; j++) { // Produto
            printf("Estoque do produto %d no armazem %d: ", j+1, i+1);
            scanf("%d", &estoque[i][j]);
        }
    }

    int itens_armazem2 = 0;
    for(int j=0; j<3; j++) {
        itens_armazem2 += estoque[1][j];
    }
    printf("\na) Quantidade de itens no segundo armazem: %d\n", itens_armazem2);

    int soma_armazem3 = 0;
     for(int j=0; j<3; j++) {
        soma_armazem3 += estoque[2][j];
    }
    printf("b) Media de produtos do terceiro armazem: %.2f\n", (float)soma_armazem3/3.0);

    int total_produto1 = 0;
    for(int i=0; i<4; i++) {
        total_produto1 += estoque[i][0];
    }
    printf("c) Quantidade total do primeiro produto: %d\n", total_produto1);

    return 0;
}