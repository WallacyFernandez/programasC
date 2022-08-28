#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int i;
    float media;
    float soma;
    float n1, n2;

    printf("Quantos numeros voce quer armazenar no vetor?: \n");
    scanf("%i", &num);

    float vetor[num];

    for (i = 0; i < num; i++)
    {
        printf("insira o valor (%d):", i + 1);
        scanf("%f", &vetor[i]);
    }

    for (i = 0; i < num; i++)
    {
        soma += vetor[i];
    }

    media = soma / num;
    printf("A media aritmetica dos numeros informados: %2.f\n", media);

    for (i = 0; i < num; i++)
    {
        if (vetor[i] > n1)
        {
            n1 = vetor[i];
        }
    }

    for (i = 0; i < num; i++)
    {
        if (vetor[i] < n2)
        {
            n2 = vetor[i];
        }
    }

    printf("Maior valor informado pelo usuario: %.2f\n", n1);
    printf("Menor valor informado pelo usuario: %.2f\n", n2);

    system("pause");
    return 0;
}