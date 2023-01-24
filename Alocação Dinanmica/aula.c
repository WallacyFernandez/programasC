//  faca um programa que determina a quantidade de pessoas que responderam a um questionario

#include <stdio.h>

int main(void)
{
    int tam, i;

    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &tam);

    int *vetor = (int *)malloc(tam * sizeof(int));

    for (i = 0; i < tam; i++)
    {

        printf("Digite o numero da posicao (%d) do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("\n");

    for (i = 0; i < tam; i++)
    {

        printf("  [%d] = %d  ", i + 1, vetor[i]);
    }

    free(vetor);

    return 0;
}