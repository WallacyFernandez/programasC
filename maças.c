#include <stdio.h>

int main()
{

    float valor, macas;

    printf("\n---Promoção leva 12 ou mais valor: 0,25 unidade---\n\n");

    printf("Digite a quantidade de macas que deseja: \n");
    scanf("%f", &macas);

    if (macas >= 12)
    {

        valor = macas * 0.25;

        printf("Valor a pagar: %.2f\n", valor);
    }
    else if (macas < 12)
    {

        valor = macas * 0.30;

        printf("Valor a pagar: %.2f\n", valor);
    }
}