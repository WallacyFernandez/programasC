#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int numeros[] = {35, 42};
    int indice;
    int i, j, total;
    int m, n;
    printf("Digite a quantidade de linhas: \n");
    scanf("%d", &m);
    printf("Digite a quantidade de colunas: \n");
    scanf("%d", &n);

    int **Matriz = (int **)malloc(m * sizeof(int *));
    for (i = 0; i < 10; i++)
    {

        Matriz[i] = (int *)malloc(n * sizeof(int));

    }

    for (i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++){
          
          indice = rand() %2;
          Matriz[i][j] = numeros[indice];
        }

    }
      

     for (i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++){

            printf("%c ", Matriz[i][j]);
            
            
        }
        printf("\n");

    }

    

    for (i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++){
                 
            
            if (Matriz[i][j] == 35)
            {     
                
                
                // se for o canto superior esquerdo
                if ((i == 0 && j == 0 && (i + 1 < m && Matriz[i + 1][j] == 42) || (j + 1 < n && Matriz[i][j + 1] == 42))) {
                    total++;
                } 
                // se for o canto superior direito
                else if ((i == 0 && j == n - 1 && (i + 1 < m && Matriz[i + 1][j] == 42) || (j > 0 && Matriz[i][j - 1] == 42))) {
                    total++;
                } 
                // se for o canto inferior esquerdo
                else if ((i == m - 1 && j == 0 && (i > 0 && Matriz[i - 1][j] == 42) || (j + 1 < n && Matriz[i][j + 1] == 42))) {
                    total++;
                } 
                // se for o canto inferior direito
                else if ((i == m - 1 && j == n - 1 && (i > 0 && Matriz[i - 1][j] == 42) || (j > 0 && Matriz[i][j - 1] == 42))) {
                    total++;
                      
                } 
                // se for a primeira linha
                else if ((i == m - 1 && j > 0 && j < n - 1 && (Matriz[i][j - 1] == 42 || Matriz[i][j + 1] == 42))) {
                    total++;
                } 
                // se for a ultima linha
                else if ((j == n - 1 && i > 0 && i < m - 1 && (Matriz[i - 1][j] == 42 || Matriz[i + 1][j] == 42))) {
                    total++;
                }
                // se for a primeira coluna
                 else if ((i == 0 && j > 0 && j < n - 1 && (Matriz[i][j - 1] == 42 || Matriz[i][j + 1] == 42))) {
                    total++;
                }
                // se for a ultima coluna
                 else if ((j == 0 && i > 0 && i < m - 1 && (Matriz[i - 1][j] == 42 || Matriz[i + 1][j] == 42))) {
                    total++;
                } 
                // se for o meio
                else if ((i != 0 && j != 0 && j != n - 1 && i != m - 1) && (Matriz[i - 1][j] == 42 || Matriz[i + 1][j] == 42 || Matriz[i][j - 1] == 42 || Matriz[i][j + 1] == 42)) {
                    total++;
                }
            
            }
            
        }
        printf("\n");
    }

    printf("Total: %3d\n", total);
    
    




}