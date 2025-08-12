// Lista 5, Exercicio 7
// Implemente um programa que imprime a figura:
// *
// **
// ***
// ****
// *****

#include <stdio.h>

int main() 
{
    int i, j;
    int numLinhas = 5;
    for (i = 1; i <= numLinhas; i++) 
    { 
        for (j = 1; j <= i; j++) 
        {  
            printf("*");
        }
        printf("\n"); 
    }

    return 0;
}