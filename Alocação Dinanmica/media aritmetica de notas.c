#include <stdio.h>
#include <stdlib.h>

int main()
{
  float vet, media;
  float *vet1, soma = 0;
  int i, j, a = 0, A = 0;

  printf("Quantos alunos voce quer armazenar no vetor?:");
  scanf("%f", &vet);

  vet1 = (float *)malloc(vet * sizeof(float));

  for (i = 0; i < vet; i++)
  {

    soma = 0;
    A = 0;
    printf("");

    for (j = 0; j < 3; j++)
    {
      A++;

      printf("\ninsira as tres notas do aluno (%d):  ", A);
      fflush(stdin);
      scanf("%f", &vet1[i]);
      soma = soma + vet1[i];
      media = soma / 3.0;
    }

    printf("");
    a++;
    printf("\nA media aritmetica do aluno (%d): %f\n", a, media);
  }
}