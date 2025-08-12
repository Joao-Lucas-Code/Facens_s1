/*
    01 - Fazer um while que pega 5 alunos com um while
    que pega as tres nota de cada aluno e faz a media
    Autor: João Lucas Gomes
    Data da última modificação: 22/04/25
*/
#include <stdio.h>

int main()
{
    int numAlunos, numNotas;
    float nota, soma, media;

    numAlunos = 1;
    
    while(numAlunos <= 5){
        printf("\nEntre com as notas do aluno %d:\n", numAlunos);

        soma = 0;
        numNotas = 1;  // Reinicia numNotas a cada novo aluno

        while(numNotas <= 3){
            printf("Nota %d: ", numNotas);
            scanf("%f", &nota);
            soma += nota;
            numNotas++;
        }

        media = soma / 3;
        printf("Media do aluno %d eh %.2f\n", numAlunos, media);

        numAlunos++;
    }

    return 0;
}
