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
                
                
                
                if ((i == 0 && j == 0 && (i + 1 < m && Matriz[i + 1][j] == 42) || (j + 1 < n && Matriz[i][j + 1] == 42))) {
                    total++;
                } 
               
                else if ((i == 0 && j == n - 1 && (i + 1 < m && Matriz[i + 1][j] == 42) || (j > 0 && Matriz[i][j - 1] == 42))) {
                    total++;
                } 
                
                else if ((i == m - 1 && j == 0 && (i > 0 && Matriz[i - 1][j] == 42) || (j + 1 < n && Matriz[i][j + 1] == 42))) {
                    total++;
                } 
                
                else if ((i == m - 1 && j == n - 1 && (i > 0 && Matriz[i - 1][j] == 42) || (j > 0 && Matriz[i][j - 1] == 42))) {
                    total++;
                      
                } 
                
                else if ((i == m - 1 && j > 0 && j < n - 1 && (Matriz[i][j - 1] == 42 || Matriz[i][j + 1] == 42))) {
                    total++;
                } 
               
                else if ((j == n - 1 && i > 0 && i < m - 1 && (Matriz[i - 1][j] == 42 || Matriz[i + 1][j] == 42))) {
                    total++;
                }
                
                 else if ((i == 0 && j > 0 && j < n - 1 && (Matriz[i][j - 1] == 42 || Matriz[i][j + 1] == 42))) {
                    total++;
                }
                
                 else if ((j == 0 && i > 0 && i < m - 1 && (Matriz[i - 1][j] == 42 || Matriz[i + 1][j] == 42))) {
                    total++;
                } 
                
                else if ((i != 0 && j != 0 && j != n - 1 && i != m - 1) && (Matriz[i - 1][j] == 42 || Matriz[i + 1][j] == 42 || Matriz[i][j - 1] == 42 || Matriz[i][j + 1] == 42)) {
                    total++;
                }
            
            }
            
        }
        printf("\n");
    }

    printf("Total: %3d\n", total);
    
    




}

/*
  
  A logica utilizada foi criar uma matriz com os numeros corespondentes aos caracteres na tabela ascii
  e para gerar aleatoriamente o mapa criei um vetor com esses dois numeros junto com uma variavel indice
  indice vai receber um numero aleatorio entre 1 e 0, e a posição da matriz vai receber um valor do vetor numero
  no indice da variavel indice, como a variavel indice recebe um valor aleatorio entre 1 e 0, a matriz vai receber valores
  aleatorios variando de 35 e 42, sendo 35 = # e 42 = *. com a matriz preenchida tive um pouco de dificuldade para realizar a lógica
  de verifição porém consiste apenas em verificar os 4 lados de cada posição da matriz, tomando cuidado para nao exceder
  o numero de linhas e de colunas durante a verificaçao

*/