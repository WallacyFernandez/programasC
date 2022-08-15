#include <stdio.h>
#include <stdlib.h>

int main (){
int i, j, n=0, op;
float mat[n][3];

    printf ("\nInsira a quantidade de alunos: ");
    fflush(stdin);
    scanf("%d", &n);

    for (i = 0; i < n; i++){

    for ( j= 0; j < 3; j++){

printf ("\nInsira a nota (%d) do aluno (%d): ", j+1, i+1);
fflush(stdin);
scanf ("%f", &mat[i][j]);

        }

printf("Proximo aluno:\n");

    }


    


printf("\nDeseja ver a tabela de notas de todos os alunos? (1) para sim, (2) para nao:");
scanf("%d",&op);


switch (op){

case 1:

printf("Tabela de Notas pra Busca");
   for (i = 0; i < n; i++){
        for ( j= 0; j < 3; j++){
            printf ("\nA nota %d do aluno %d = %.1f \n", j+1, i+1, mat[i][j]);
        }
    }
  
  break;
  case 2:
  printf ("obrigado por acessar nosso site!");

  default:
  printf("\nOpcao invalida.\n\n");
  }
  
  

  while (op != 2);
system("pause");
return(0);}
