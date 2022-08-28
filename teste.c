#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct funcionario
{
  char nome[100];
  int idade;
  float salario;

} Funcionario;

int main(void)
{
  system("cls");

  int contador, escolha, cont2 = 0, quantidadedealocacoes = 1, total = 0, unico;
  int numeroescolhido;
  int controlador = 0;
  int n1, n2, n3, n5, n6; // variaveis de contrele while

  Funcionario *vetor = (Funcionario *)malloc(1 * sizeof(Funcionario));

  while (escolha != 5)
  {

    printf("Para introduzir funcionarios digite (1)\n");
    printf("Para introduzir novos funcionarios digite (2)\n");
    printf("Para ver funcionarios introduzidos digite (3)\n");
    printf("Para ver ficha de um funcionario especifico digite (4)\n");
    printf("Para sair do site digite (5)\n");
    printf("escolha: ");
    scanf("%d", &escolha);
    printf("\n");

    if (escolha == 1)
    {

      system("cls");

      controlador++;

      // printf("(%d)\n", controlador);

      if (controlador == 1)
      {

        printf("\n----Digite os dados referentes aos funcionarios--- \n\n");

        for (contador = 0; contador < 1; contador++)
        {

          printf("\nDados do funcionario(%d)\n", contador + 1);
          printf("Digite o nome do funcionario:\n");
          scanf(" %[^\n]", vetor[contador].nome);

          printf("Digite a idade do funcionario\n");
          scanf("%d", &vetor[contador].idade);

          printf("Digite o salario do funcionario\n");
          scanf("%f", &vetor[contador].salario);
          cont2++;
        }
        system("cls");
      }
      else
      {
        n3 = 0;
        while (n3 != 1)
        {

          printf("Voce ja inseriu funcionarios uma vez, tente usar a opcao 'inserir novos usuarios'. \n");
          printf("Voltar ao inicio? (1)sim ou (2)nao \n");
          scanf("%d", &n3);
          printf("\n");
        }
      }
    }
  }
  return 0;
}