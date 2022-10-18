#include <stdio.h>
#include <stdlib.h>
// Questão 1) Uma empresa fez uma pesquisa para saber se as pessoas gostaram ou não de um
// novo produto. Um número N de pessoas de ambos os sexos foi entrevistado, e o questionário
// consistia em apenas duas perguntas: (i) o sexo do entrevistado (M/F) e (ii) sua opinião sobre o
// produto (gostou/não gostou). Escreva um programa em C que:
// a) leia as respostas contidas no questionário e armazene-as em dois arrays vinculados, um
// deles contendo a resposta para a primeira pergunta e o outro contendo a resposta para
// a segunda pergunta.
// b) determine a porcentagem de pessoas do sexo feminino que responderam que gostaram
// do produto.
// c) determine a porcentagem de pessoas do sexo masculino que responderam que não
// gostaram do produto.

int main(void)
{
   system("cls");
   int *mf, *SimouNao, totaldepessoas, iniciar2 = 1, i = 0, quantidadedealocacoes = 1, iniciar, cont;
   float masculino = 0, feminino = 0, m = 0, f = 0, porcent1 = 0, porcent2 = 0;

   printf("Estamos realizando uma pesquisa com todos os usuarios, em relacao ao 'descricao do produto', para obter um feedback do pessoal.\n");

   while (iniciar != 2)
   {
      system("cls");
      printf("Iniciar pesquisa? (1) sim (2) nao: \n");
      scanf("%d", &cont);
      if (cont == 1)
      {
         iniciar = 2;
      }
      else
      {
         printf("Nenhuma pessoa respondeu ao questionario. \n");
         exit(1);
      }
   }

   mf = (int *)malloc(1 * sizeof(int));
   if (mf == NULL)
   {

      printf("Error");
      exit(1);
   }

   SimouNao = (int *)malloc(1 * sizeof(int));
   if (SimouNao == NULL)
   {

      printf("Error");
      exit(1);
   }

   while (iniciar2 != 2)
   {
      system("cls");
      printf(" qual seu genero? (1) masculino (2) feminino:\n");
      scanf("%d", &mf[i]);

      printf(" gostou do produto? (1) sim (2) nao:\n");
      scanf("%d", &SimouNao[i]);

      printf("Continuar a pesquisa? (1) sim (2) nao: \n");
      scanf("%d", &iniciar2);

      if (iniciar2 != 1 && iniciar2 != 2)
      {

         printf("Erro numero inserido invalido. \n");
         free(mf);
         free(SimouNao);
         exit(1);
      }

      quantidadedealocacoes++;

      mf = realloc(mf, quantidadedealocacoes * (sizeof(int)));
      SimouNao = realloc(SimouNao, quantidadedealocacoes * (sizeof(int)));

      if (mf == NULL)
      {

         printf("Error");
         exit(1);
      }
      if (SimouNao == NULL)
      {

         printf("Error");
         exit(1);
      }

      i++;
      totaldepessoas++;
      system("cls");
   }

   for (i = 0; i < totaldepessoas; i++)
   {

      if (*(mf + i) == 1)
      {
         m++;

         if (*(SimouNao + i) == 2)
         {
            masculino++;
         }
      }
      else if (*(mf + i) == 2)
      {

         f++;

         if (*(SimouNao + i) == 1)
         {

            feminino++;
         }
      }
   }

   porcent1 = ((feminino / f) * 100.00);
   porcent2 = ((masculino / m) * 100.00);

   if (f > 0.0 && m > 0.0)
   {

      printf("Porcetagem de pessoas do sexo feminino que responderam que gostaram do produto:  %.2f%% \n", porcent1);
      printf("Porcentagem de pessoas do sexo masculino que responderam que nao gostaram do produto: %.2f%% \n", porcent2);
   }
   else if (f > 0 && m == 0)
   {

      printf("Porcetagem de pessoas do sexo feminino que responderam que gostaram do produto:  %.2f%% \n", porcent1);
      printf("Nenhuma pessoa do sexo masculino que respondeu ao questionario. \n");
   }
   else if (f == 0 && m > 0)
   {

      printf("Porcetagem de pessoas do sexo masculino que responderam que nao gostaram do produto:  %.2f%% \n", porcent2);
      printf("Nenhuma pessoa do sexo feminino que respondeu ao questionario. \n");
   }
   else if (f == 0 && m == 0)
   {

      printf("Nenhuma pessoa respondeu ao questionario. \n");
   }

   free(mf);
   free(SimouNao);
   return 0;
}