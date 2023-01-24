#include <stdio.h>
#include <stdlib.h>

void function_media(int *vetor)
{
  float media;
}

int main()
{

  int i, j, tam, notas, cont = 0;
  float;

  printf("Informe a quantidade de alunos:\n");
  scanf("%d", &tam);

  notas = tam * 3;

  float vetor[notas];

  for (i = 1; i <= tam; i++)
  {

    for (j = 0; j < 3; j++)
    {

      printf("Digite as notas do aluno (%d): ", i);
      scanf("%f", &vetor[cont]);

      cont++;
    }
  }

  function_media(&vetor);
}