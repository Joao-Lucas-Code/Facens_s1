#include <stdio.h>
#include <string.h>

int main() {
    char palavra[11];
    int len;

    do {
        printf("Digite uma palavra (entre 3 e 10 caracteres): ");
        scanf("%s", palavra);
        len = strlen(palavra);
        if (len < 3 || len > 10) {
            printf("A palavra tem %d caracteres. Por favor, digite novamente.\n", len);
        }
    } while (len < 3 || len > 10);

    printf("Palavra valida: %s\n", palavra);
    return 0;
}