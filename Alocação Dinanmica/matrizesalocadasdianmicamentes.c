#include <stdio.h>
#include <stdlib.h>

void alocacaodinanmicamatrizes(int tamlinha, int tamcoluna)
{
    int i, j;
    system("cls");
    int **ma = (int **)malloc(tamlinha * sizeof(int *));
    int **mb = (int **)malloc(tamlinha * sizeof(int *));
    int **mc = (int **)malloc(tamlinha * sizeof(int *));

    for (i = 0; i < tamlinha; i++)
    {

        ma[i] = (int *)malloc(tamcoluna * sizeof(int));
    }

    for (i = 0; i < tamlinha; i++)
    {

        mb[i] = (int *)malloc(tamcoluna * sizeof(int));
    }

    for (i = 0; i < tamlinha; i++)
    {

        mc[i] = (int *)malloc(tamcoluna * sizeof(int));
    }

    // prencher

    for (i = 0; i < tamlinha; i++)
    {
        for (j = 0; j < tamcoluna; j++)
        {

            printf("Numeros da linha (%d) coluna (%d) Matriz A: \n", i, j);
            scanf("%d", &ma[i][j]);
        }
    }

    for (i = 0; i < tamlinha; i++)
    {
        for (j = 0; j < tamcoluna; j++)
        {

            printf("Numeros da linha (%d) coluna (%d) Matriz B: \n", i, j);
            scanf("%d", &mb[i][j]);
        }
    }

    // soma das matrizes

    for (i = 0; i < tamlinha; i++)
    {
        for (j = 0; j < tamcoluna; j++)
        {

            mc[i][j] = ma[i][j] + mb[i][j];
        }
    }

    // imprimir

    system("cls");
    printf("\n----Matriz A----\n\n");
    for (i = 0; i < tamlinha; i++)
    {
        for (j = 0; j < tamcoluna; j++)
        {

            printf("Numeros da linha (%d) coluna (%d) Matriz A: %3d \n", i + 1, j + 1, ma[i][j]);
            printf("\n");
        }
    }

    printf("\n----Matriz B---\n\n");
    for (i = 0; i < tamlinha; i++)
    {
        for (j = 0; j < tamcoluna; j++)
        {

            printf("Numeros da linha (%d) coluna (%d) Matriz B: %3d \n", i + 1, j + 1, mb[i][j]);
            printf("\n");
        }
    }

    printf("\n----Matriz C = Matriz A + matriz B ----\n\n");
    for (i = 0; i < tamlinha; i++)
    {
        for (j = 0; j < tamcoluna; j++)
        {

            printf("Numeros da linha (%d) coluna (%d) Matriz C: %3d \n", i + 1, j + 1, mc[i][j]);
            printf("\n");
        }
    }

    // liberar

    for (i = 0; i < tamlinha; i++)
    {
        for (j = 0; j < tamcoluna; j++)
        {

            free(ma[i]);
        }
    }
    free(ma);
    for (i = 0; i < tamlinha; i++)
    {
        for (j = 0; j < tamcoluna; j++)
        {

            free(mb[i]);
        }
    }
    free(mb);

    for (i = 0; i < tamlinha; i++)
    {
        for (j = 0; j < tamcoluna; j++)
        {

            free(mc[i]);
        }
    }
    free(mc);
}

int main(void)
{
    system("cls");
    int tamlinha, tamcoluna;

    printf("Quntidade de linhas: \n");
    scanf("%d", &tamlinha);
    printf("Quntidade de colunas: \n");
    scanf("%d", &tamcoluna);

    alocacaodinanmicamatrizes(tamlinha, tamcoluna);

    return 0;
}