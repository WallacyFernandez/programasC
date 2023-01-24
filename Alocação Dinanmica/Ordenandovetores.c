#include <stdio.h>
#include <stdlib.h>
/*Implemente uma função que preencha um vetor alocado dinamicamente de N
elementos com valores inteiros fornecidos pelos o usuário, de modo que, à medida que um novo
elemento é inserido, o vetor já permaneça organizado de maneira ordenada crescente. Escreva
um programa que utiliza esta função, que deve obedecer ao seguinte protótipo: void
preenche_ordenado(int n, int v);*/

void preenche_ordenado(int tam, int *v);

int main(void)
{
    int tam, *v;
    printf("digite o tamanho do vetor\n");
    scanf("%d", &tam);

    v = (int *)malloc(tam * sizeof(int));
    if (v == NULL)
    {
        printf("malloc fail\n");
    }

    preenche_ordenado(tam, &v);

    free(v);
}

void preenche_ordenado(int tam, int *v)
{

    int i, aux, j;

    for (i = 0; i < tam; i++)
    {

        printf("\ndigite os valores do vetor\n");
        scanf("%d", &v[i]);
    }
    for (i = 0; i < tam; i++)
    {
        for (j = i + 1; j < tam; j++)
        {
            if (v[i] > v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    for (i = 0; i < tam; i++)
    {
        printf("\n%d", *(v + i));
    }
}