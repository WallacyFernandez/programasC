#include <stdio.h>
#include <stdlib.h>

int main()
{

    int rest, tam, num;
    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &tam);

    printf("\n");

    int *vetor = (int *)malloc(tam * sizeof(int));

    for (int n = 0; n <= tam; n++)
    {

        printf("Digite um numero: ");
        scanf("%d", &vetor[n]);
    }

    printf("\n---Numeros impares---\n\n");

    for (int n = 0; n <= tam; n++)
    {

        rest = vetor[n] % 2;

        if (rest != 0)
        {

            printf("%d\n", vetor[n]);
        }
    }

    printf("\n---Numeros pares---\n\n");

    for (int n = 0; n <= tam; n++)
    {

        rest = vetor[n] % 2;

        if (rest == 0)
        {

            printf("%d\n", vetor[n]);
        }
    }

    return 0;
}
