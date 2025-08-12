/*
    01 - printf - este código e um exemplo que iprime 3 valores na tela
                valores são o tipo int, float e char.
    Autor: Tiemi C Sakata
    Data da última modificação: 11/03/25
*/
#include <stdio.h>

int main(){
    //definindo as variaveis
    int idade = 20;
    float altura = 1.75;
    char inicial = 'A';

    //mostrando a variaveis na tela
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Inicial do nome: %c\n", inicial);

    //pedindo pro usario digitar sua respectiveis variaveis
    printf("Entre com a inicial do nome: ");
    scanf("%c",&inicial);
    printf("Entre com a idade: ");
    scanf("%d", &idade);
    printf("Entre com a altura: ");
    scanf("%f", &altura);

    return 0;
}