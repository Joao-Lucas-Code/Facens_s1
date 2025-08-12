#include <stdio.h>
#include <string.h>

int main() 
{
    char senha1[7], senha2[7];

    printf("Digite uma senha de 6 caracteres: ");
    scanf("%6s", senha1);

    printf("Digite a senha novamente: ");
    scanf("%6s", senha2);

    if (strcmp(senha1, senha2) == 0) 
    {
        printf("Senha valida.\n");
    } 
    else if (strncmp(senha1, senha2, 3) == 0) 
    {
        printf("Houve algum erro na digitacao.\n");
    } 
    else 
    {
        printf("Senha invalida.\n");
    }

    return 0;
}