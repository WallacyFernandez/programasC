#include <stdio.h>
#include <stdlib.h>
int main()
{
    int f, f1;

    for (f1 = 10; f1 >= 0; f1--)
    {

        for (f = 0; f < f1 + 1; f++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (f = 0; f < 10; f++)
    {

        for (f1 = 0; f1 < f + 1; f1++)
        {
            printf("*");
        }

        printf("\n");
    }

    system("pause");
    return (0);
}
