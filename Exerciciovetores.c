#include <stdio.h>

int main()
{

    int tamanho, maior, menor;

    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    for (int i = 0; i < tamanho; i++)
    {

        printf("Digite o numero da posicao [%d] do vetor: \n", i);
        scanf("%d", &vetor[i]);
    }

    menor = vetor[0];
    maior = vetor[0];

    for (int i = 1; i < tamanho; i++)
    {

        if (vetor[i] > maior)
        {

            maior = vetor[i];
        }

        if (vetor[i] < menor)
        {

            menor = vetor[i];
        }
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
}