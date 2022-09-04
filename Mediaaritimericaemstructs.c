#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct notas
{

    float p1, p2, p3;

} notas;

int main(void)
{

    int i, j, alunos;
    float s, media;

    printf("digite a quantidade de alunos:\n");
    scanf("%i", &alunos);

    notas *vetor = (notas *)malloc(alunos * sizeof(notas));

    for (i = 0; i < alunos; i++)
    {

        printf("\n----INSIRA AS NOTAS DO ALUNO (%d)----\n\n", i + 1);
        printf("digite a nota primeira nota: \n");
        scanf("%f", &vetor[i].p1);
        printf("digite a nota segunda nota: \n");
        scanf("%f", &vetor[i].p2);
        printf("digite a nota terceira nota: \n");
        scanf("%f", &vetor[i].p3);
    }

    for (i = 0; i < alunos; i++)
    {

        printf("\n----AS NOTAS DOS ALUNOS----\n\n");
        printf("nota do aluno (%d) = %.2f\n", i, vetor[i].p1);
        printf("nota do aluno (%d) = %.2f\n", i, vetor[i].p2);
        printf("nota do aluno (%d) = %.2f\n", i, vetor[i].p3);
    }

    for (int i = 0; i < alunos; i++)
    {

        s = (vetor[i].p1 + vetor[i].p2 + vetor[i].p3) / 3;

        printf("media do aluno = %.2f\n", s);
    }

    free(vetor);

    return 0;
}