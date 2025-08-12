/*
    01 - Receber um intervalo (dois valores) e em seguida um número. Informar se
    o número está dentro, fora ou nas extremidades do intervalo. Por exemplo,
    em um intervalo de 1 a 3, 0 está fora, 2 está dentro e 1 está em uma
    extremidade do intervalo.   
    Autor: João Lucas Gomes
    Data da última modificação: 25/03/25
*/
#include <stdio.h>

int main(){
    int n1,n2;
    printf("Digite dois numeros: ");
    scanf("%i %i", &n1, &n2);
    printf("O numero dentro e %i\n", n2 - n1); //NUMERO DENTRO
    
    printf("fora e %i\n", n1-1); //NUMERO FORA
    
    printf("e a extremidade e %i\n", n1); //EXTREMIDADE

    return 0;
}