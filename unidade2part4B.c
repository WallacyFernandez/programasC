#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, n1;

    for (n = 0; n < 10; n++)
    {

        for (n1 = 0; n1 < n + 1; n1++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (n1 = 10; n1 >= 0; n1--)
    {

        for (n = 0; n < n1 + 1; n++)
        {
            printf("*");
        }

        printf("\n");
    }

    system("pause");
    return (0);