#include <stdio.h>

int main(void)
{
    int i, tam, numero;
    float negativ, positiv, soma, media;

    printf("Digite a quantidade de elementos: \n");
    scanf("%d", &tam);

    for (int i = 0; i <= tam; i++)
    {

        printf("Digite um numero: \n");
        scanf("%d", &numero);
        soma = numero + soma;
        if (numero >= 0)
        {

            positiv++;
        }
        if (numero < 0)
        {

            negativ++;
        }
    }
}