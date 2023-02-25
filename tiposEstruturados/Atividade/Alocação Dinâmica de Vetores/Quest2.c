#include <stdio.h>
#include <stdlib.h>

int main()
{

   int *prova, *gabarito, i, j, verificador = 0, alunoaprovado = 0, porcentagem;

   prova = (int *)malloc(100 * sizeof(int));
   if (prova == NULL)
   {

      printf("Error");
      exit(1);
      
   }

   gabarito = (int *)malloc(100 * sizeof(int));
   if (gabarito == NULL)
   {

      printf("Error");
      exit(1);
   }

   for (i = 0; i < 10; i++)
   {

      gabarito[i] = 1 + rand() % 2;
   }

   for (i = 0; i < 10; i++)
   {
      printf("\n\n-----Prova do aluno (%d)-----\n\n", i+1);
      for (j = 0; j < 10; j++)
      {
         
         if (j == 0)
         {
            printf("\n");
            printf("Pergunta 1\n");
            printf("opcao de resposta 1\n");
            printf("opcao de resposta 2\n");
            printf("exemplo: Digitar 1 para resposta 1 e 2 para selecionar resposta 2, escolha: \n");
            scanf("%d", &prova[j]);
            printf("\n");
         }
         else if (j == 1)
         {
            printf("\n");
            printf("Pergunta 2\n");
            printf("opcao de resposta 1\n");
            printf("opcao de resposta 2\n");
            printf("exemplo: Digitar 1 para resposta 1 e 2 para selecionar resposta 2, escolha: \n");
            scanf("%d", &prova[j]);
            printf("\n");
         }
         else if (j == 2)
         {
            printf("\n");
            printf("Pergunta 3\n");
            printf("opcao de resposta 1\n");
            printf("opcao de resposta 2\n");
            printf("exemplo: Digitar 1 para resposta 1 e 2 para selecionar resposta 2, escolha: \n");
            scanf("%d", &prova[j]);
            printf("\n");
         }
         else if (j == 3)
         {
            printf("\n");
            printf("Pergunta 4\n");
            printf("opcao de resposta 1\n");
            printf("opcao de resposta 2\n");
            printf("exemplo: Digitar 1 para resposta 1 e 2 para selecionar resposta 2, escolha: \n");
            scanf("%d", &prova[j]);
            printf("\n");
         }
         else if (j == 4)
         {
            printf("\n");
            printf("Pergunta 5\n");
            printf("opcao de resposta 1\n");
            printf("opcao de resposta 2\n");
            printf("exemplo: Digitar 1 para resposta 1 e 2 para selecionar resposta 2, escolha: \n");
            scanf("%d", &prova[j]);
            printf("\n");
         }
         else if (j == 5)
         {
            printf("\n");
            printf("Pergunta 6\n");
            printf("opcao de resposta 1\n");
            printf("opcao de resposta 2\n");
            printf("exemplo: Digitar 1 para resposta 1 e 2 para selecionar resposta 2, escolha: \n");
            scanf("%d", &prova[j]);
            printf("\n");
         }
         else if (j == 6)
         {
            printf("\n");
            printf("Pergunta 7\n");
            printf("opcao de resposta 1\n");
            printf("opcao de resposta 2\n");
            printf("exemplo: Digitar 1 para resposta 1 e 2 para selecionar resposta 2, escolha: \n");
            scanf("%d", &prova[j]);
            printf("\n");
         }
         else if (j == 7)
         {
            printf("\n");
            printf("Pergunta 8\n");
            printf("opcao de resposta 1\n");
            printf("opcao de resposta 2\n");
            printf("exemplo: Digitar 1 para resposta 1 e 2 para selecionar resposta 2, escolha: \n");
            scanf("%d", &prova[j]);
            printf("\n");
         }
         else if (j == 8)
         {
            printf("\n");
            printf("Pergunta 9\n");
            printf("opcao de resposta 1\n");
            printf("opcao de resposta 2\n");
            printf("exemplo: Digitar 1 para resposta 1 e 2 para selecionar resposta 2, escolha: \n");
            scanf("%d", &prova[j]);
            printf("\n");
         }
         else if (j == 9)
         {
            printf("\n");
            printf("Pergunta 10\n");
            printf("opcao de resposta 1\n");
            printf("opcao de resposta 2\n");
            printf("exemplo: Digitar 1 para resposta 1 e 2 para selecionar resposta 2, escolha: \n");
            scanf("%d", &prova[j]);
            printf("\n");
         }
      }
   }

   for (i = 0; i < 10; i++)
   {

      for (j = 0; j < 10; j++)
      {

         if (prova[j] == gabarito[j])
         {

            verificador++;
         }
      }

      printf("Nota do aluno (%d): %d\n", i+ 1, verificador);
      if (verificador >= 6)
      {

         printf("Aluno aprovado\n");
         alunoaprovado++;
      }else {

         printf("Aluno reprovado\n");
      }
  
      verificador = 0;
   }

   porcentagem = (alunoaprovado*100) / 10;
   
   printf("porcentagem de aprovacao: %d%%\n", porcentagem);
   free(prova);
   free(gabarito);
}

/*

O codigo tem como ponto inicial a criação de dois vetores um com nome prova e o outro com nome gabarito, 
a ideia e preecher o vetor gabarito com numeros aleatórios entre 1 e 2, preecher o velor prova com respostas vinda do
usario que tambem vao ser recebidas como 1 e 2, ao final comparar e verificra se as posiçoes de cada um dos dois vetores  
sao iguais se 6 ou mais posiçoes dos vetores forem iguais o aluno será aprovado se nao, reprovado. utilizando um contador
externo verifico a quantidade de alunos aprovados, e faco o calculo da porcetagem de alunos aprovados tendo em vista
que o numero total de alunos é 10.

*/