#include <stdio.h>

int main(void)
{
    int n;

    printf("Informe um numero inteiro: ");
    scanf("%i", &n);

    if (n % 5 == 0)
    {
        printf("\n (%i) numero multiplo de 5", n);
    }
    else
    {
        printf("\n (%i) nao e multiplo de 3 e 5", n);
    }

    return 0;
}
