#include <stdio.h>

int main(){
    char nome[7]; // 6 dígitos + 1 para o '\0'

    printf("Digite uma senha de 6 dígitos: ");
    scanf("%6s", nome);  // lê até 6 caracteres

    printf("\nSenha digitada:\n");
    for(int i = 0; i < 6; i++){
        printf("%d = %c\n", i+1, nome[i]); // mostra caractere e valor ASCII
    }

    return 0;
}
