#include <stdio.h>
#include <string.h>

int main() {
    char texto[100];
    printf("Digite um texto: ");
    scanf("%s", texto);

    int len = strlen(texto);
    printf("Texto inverso: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", texto[i]);
    }
    printf("\n");

    return 0;
}
