#include <stdio.h>
#include <string.h>

int main() {
    char nome[50], sobrenome[50], nome_completo[101];

    printf("Digite o sobrenome: ");
    scanf("%s", sobrenome);
    printf("Digite o nome: ");
    scanf("%s", nome);

    strcpy(nome_completo, nome);
    strcat(nome_completo, " ");
    strcat(nome_completo, sobrenome);

    printf("Nome completo: %s\n", nome_completo);
    printf("Quantidade de caracteres: %zu\n", strlen(nome_completo));

    return 0;
}