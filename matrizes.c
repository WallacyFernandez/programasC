#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void preenche(int **matrizA, int **matrizB, int linha, int colunas)
{
    int i, j;
    for (i = 0; i < linha; i++)
    {
        
        for (j = 0; j < colunas; j++)
        {

           printf("Digite o numero da linha (%d), colunas (%d): \n", i + 1, j + 1);
           scanf("%d", &matrizA[i][j]);

        }
    }
}

int main (void) {

int j, linhas, colunas;
int **matrizA;
int **matrizB;

printf("Digite a quantidade de linhas: \n");
scanf ("%d", &linhas);
printf("Digite a quantidade de colunas: \n");
scanf ("%d", &colunas);

matrizA = (int**)malloc(linhas * sizeof(int*));

for (j = 0; j < linhas; j++){

     
matrizA[j] = (int*)malloc(colunas * sizeof(int));


}

matrizB = (int**)malloc(linhas * sizeof(int*));

for (j = 0; j < linhas; j++){

     
matrizB[j] = (int*)malloc(colunas * sizeof(int));


}

preenche(matrizA, matrizB, linhas, colunas);




}