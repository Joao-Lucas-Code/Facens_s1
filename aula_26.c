/*
    01 - Fazer um while onde o usuario tem que definir 2 numeros
    para 5 opçoes sendo elas somar, subtrair, multiplicar, dividir e sair
    depois printa o resultado do usuario com base na sua escolha
    Autor: João Lucas Gomes
    Data da última modificação: 22/04/25
*/
#include <stdio.h>

int main(){
    int decisao = 0, n1, n2;

    while(decisao != 5){
        printf("Digite os numeros: ");
        scanf("%i %i", &n1, &n2);

        printf("O que gostaria de fazer?\n");
        printf("[1] Somar\n");
        printf("[2] Subtrair\n");
        printf("[3] Multiplicar\n");
        printf("[4] Divisao\n");
        printf("[5] Sair\n");
        scanf("%i", &decisao);

        if(decisao == 1)
            printf("A soma entre %i e %i = %i\n", n1, n2, n1+n2);
        else if(decisao == 2)
            printf("A subtracao entre %i e %i = %i\n", n1, n2, n1-n2);
        else if(decisao == 3)
            printf("A multiplicacao entre %i e %i = %i\n", n1, n2, n1*n2);
        else if(decisao == 4){
            if(n2 != 0)
                printf("A divisao entre %i e %i = %i\n", n1, n2, n1/n2);
            else
                printf("Nao e possivel dividir por zero!\n");
        }
        else if(decisao != 5)
            printf("Voce nao digitou um valor valido.\n");
    }

    return 0;
}
