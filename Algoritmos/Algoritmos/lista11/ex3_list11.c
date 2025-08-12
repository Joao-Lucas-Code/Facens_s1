#include <stdio.h>


int main() {
    char letras[11];
    printf("Digite uma sequencia de 10 letras: ");
    scanf("%10s", letras);

    printf("As 6 primeiras letras sao:\n");
    for (int i = 0; i < 6; i++) {
        printf("%c\n", letras[i]);
    }

    return 0;
}