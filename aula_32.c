/*
    01 - Receber 12 números e armazená-los em um vetor.
    Ao final, exibir quais (TREINO PROVA)
    foram os números positivos informados. 
    Autor: João Lucas Gomes
    Data da última modificação: 06/05/25
*/
#include <stdio.h>

int main()
{
    int n[12];
    int i;

    printf("Digite (12) numeros para eu verificar se são positivos ou negativos\n");
    for(i = 1; i<13 ;i++){
        printf("Numero %i: \n ", i);
        scanf("%i", &n[i]);
    }
    for(i = 1; i < 13; i++){
        if(n[i]> 0){
        printf("Numero %i e positivo\n", n[i]);
        }
        else{ 
        printf("Numero %i }e negativo\n", n[i]);
        }
}
    printf("\n");

    return 0;
}