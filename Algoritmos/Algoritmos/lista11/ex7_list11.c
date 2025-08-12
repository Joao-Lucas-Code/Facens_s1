#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char texto[100];
    printf("Digite um texto: ");
    fgets(texto, 100, stdin); // Ler a linha inteira, incluindo espacos

    for (int i = 0; texto[i] != '\0'; i++) {
        texto[i] = toupper(texto[i]);
    }

    printf("Texto em maiusculas: %s\n", texto);

    return 0;
}




