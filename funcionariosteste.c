#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct funcionario
{
  char nome[100], loginnome[100], loginsenha[100], cargo[100];
  int idade;
  float salario;

} Funcionario;

int main(void)
{
  float folha = 0;
  int contador, escolha, cont2 = 0, cont3 = 0, quantidadedealocacoes = 1, total = 1, unico;
  int numeroescolhido, bancoEtxt;
  int controlador = 0;
  int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14; // variaveis de controle while

  Funcionario *vetor = (Funcionario *)malloc(1 * sizeof(Funcionario));

  while (escolha != 7)
  {
    system("cls");
    printf("\n----(Banco De Dados: Funcionarios Da Empresa)---- \n\n");
    printf("Fazer login (1)\n");
    printf("Para introduzir novos funcionarios digite (2)\n");
    printf("Para ver funcionarios introduzidos digite (3)\n");
    printf("Para ver ficha de um funcionario especifico digite (4)\n");
    printf("Criar banco de dados em arquivo txt com dados dos funcionarios (5)\n");
    printf("Ler Banco de dados de arquivo ja existente(6) (Em desenvolvimento)\n");
    printf("Para sair do site digite (7)\n");
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

        for (contador = 0; contador < 1; contador++)
        {
          printf("\n----(LOGIN)--- \n\n");

          printf("login:\n");
          scanf(" %[^\n]", vetor[contador].loginnome);

          printf("Senha:\n");
          scanf(" %[^\n]", vetor[contador].loginsenha);

          cont2++;
        }
      }
      else
      {
        system("cls");
        n3 = 0;
        while (n3 != 1)
        {
          printf("\n----(ERRO)---- \n\n");

          printf("Voce ja fez login. \n");
          printf("Voltar ao inicio? (1)sim ou (2)nao \n");
          scanf("%d", &n3);
          if (n3 == 2)
          {
            printf("Programa encerrado\n");
            exit(1);
          }
          printf("\n");
        }
      }
    }
    else if (escolha == 2)
    {
      system("cls");

      if (cont2 == 0)
      {
        n1 = 0;
        while (n1 != 1)
        {
          printf("\n----(ERRO)---- \n\n");

          printf("Voce nao fez login ainda.\n");
          printf("Voltar ao inicio? (1)sim ou (2)nao \n");
          scanf("%d", &n1);
          if (n1 == 2)
          {
            printf("Programa encerrado\n");
            exit(1);
          }
          printf("\n");
        }
      }
      else if (cont2 == 1)
      {
        system("cls");
        quantidadedealocacoes++;

        printf("\n----(DIGITE OS DADOS REFERENTES AOS FUNCIONARIOS)----\n");

        for (contador = cont3; contador < total; contador++)
        {

          printf("\nDados do funcionario(%d)\n", contador + 1);
          printf("Digite o cargo do do funcionario:\n");
          scanf(" %[^\n]", vetor[contador].cargo);

          printf("Digite o nome do funcionario:\n");
          scanf(" %[^\n]", vetor[contador].nome);

          printf("Digite a idade do funcionario\n");
          scanf("%d", &vetor[contador].idade);

          printf("Digite o salario do funcionario\n");
          scanf("%f", &vetor[contador].salario);
        }
        cont3++;
        total++;
        vetor = realloc(vetor, quantidadedealocacoes * (sizeof(Funcionario)));
      }
    }
    else if (escolha == 3)
    {
      system("cls");
      if (cont2 == 0)
      {

        n6 = 0;
        while (n6 != 1)
        {
          printf("\n----(ERRO)---- \n\n");

          printf("Voce nao fez login ainda.\n");
          printf("Voltar ao inicio? (1)sim ou (2)nao \n");
          scanf("%d", &n6);
          if (n6 == 2)
          {
            printf("Programa encerrado\n");
            exit(1);
          }
          printf("\n");
        }
      }
      else if (cont2 == 1)
      {
        if (cont3 == 0)
        {

          n9 = 0;
          while (n9 != 1)
          {
            printf("\n----(ERRO)---- \n\n");
            printf("Voce ainda nao inseriu nenhum funcionario\n");
            printf("Voltar ao inicio? (1)sim ou (2)nao \n");
            scanf("%d", &n9);
            if (n9 == 2)
            {
              printf("Programa encerrado\n");
              exit(1);
            }
            printf("\n");
          }
        }
        else
        {
          system("cls");

          n5 = 0;

          while (n5 != 1)
          {

            printf("\n----(DADOS DOS FUNCIONARIOS)----\n");
            for (contador = 0; contador < cont3; contador++)
            {

              printf("\nFuncionario(%d)\n", contador + 1);
              printf("Cargo: %s\n", vetor[contador].cargo);
              printf("Nome: %s\n", vetor[contador].nome);
              printf("Idade: %d\n", vetor[contador].idade);
              printf("Salario: R$ %.2f\n", vetor[contador].salario);
              printf("\n");
            }

            folha = 0;
            for (contador = 0; contador < cont3; contador++)
            {

              folha = vetor[contador].salario + folha;
            }

            printf("Total gasto com salarios: R$ %.2f\n", folha);
            printf("\n");

            printf("Voltar ao inicio? (1)sim ou (2)nao \n");
            scanf("%d", &n5);
            if (n5 == 2)
            {
              printf("Programa encerrado\n");
              exit(1);
            }
            printf("\n");
          }
        }
      }
    }
    else if (escolha == 4)
    {
      system("cls");

      if (cont2 == 0)
      {
        n2 = 0;
        while (n2 != 1)
        {
          printf("\n----(ERRO)---- \n\n");
          printf("Voce nao fez login ainda.\n");
          printf("Voltar ao inicio? (1)sim ou (2)nao \n");
          scanf("%d", &n2);
          if (n2 == 2)
          {
            printf("Programa encerrado\n");
            exit(1);
          }
          printf("\n");
        }
      }
      else if (cont2 == 1)
      {
        if (cont3 == 0)
        {

          n10 = 0;
          while (n10 != 1)
          {
            printf("\n----(ERRO)---- \n\n");
            printf("Voce ainda nao inseriu nenhum funcionario\n");
            printf("Voltar ao inicio? (1)sim ou (2)nao \n");
            scanf("%d", &n10);
            if (n10 == 2)
            {
              printf("Programa encerrado\n");
              exit(1);
            }
            printf("\n");
          }
        }
        else
        {
          printf("\n----(BUSCA POR FUNCIONARIO)---- \n\n");
          printf("\nObs: Caso nao lembre do numero do funcionario volte ao inicio e consulte a lista geral. \n\n");
          printf("Digite o numero do funcionario desejado: ");
          scanf("%d", &unico);

          if (unico < 1)
          {
            n8 = 0;
            while (n8 != 1)
            {
              printf("\n----(ERRO)---- \n\n");
              printf("funcionario %d nao existe\n", unico);
              printf("Voltar ao inicio? (1)sim ou (2)nao \n");
              scanf("%d", &n8);
              if (n8 == 2)
              {
                printf("Programa encerrado\n");
                exit(1);
              }
              printf("\n");
            }
          }

          if (unico <= cont3 && unico > 0)
          {
            n7 = 0;
            while (n7 != 1)
            {

              numeroescolhido = unico;

              unico = unico - 1;

              printf("\nfuncionario(%d)\n", numeroescolhido);
              printf("Cargo: %s\n", vetor[contador].cargo);
              printf("Nome: %s\n", vetor[unico].nome);
              printf("Idade: %d\n", vetor[unico].idade);
              printf("Salario: R$ %.2f\n", vetor[unico].salario);
              printf("\n");

              printf("Voltar ao inicio? (1)sim ou (2)nao \n");
              scanf("%d", &n7);
              if (n7 == 2)
              {
                printf("Programa encerrado\n");
                exit(1);
              }
              printf("\n");
            }
          }

          if (unico > cont3)
          {
            n4 = 0;
            while (n4 != 1)
            {
              printf("\n----(ERRO)---- \n\n");
              printf("funcionario %d nao existe\n", unico);
              printf("Voltar ao inicio? (1)sim ou (2)nao \n");
              scanf("%d", &n4);
              if (n4 == 2)
              {
                printf("Programa encerrado\n");
                exit(1);
              }
              printf("\n");
            }
          }
        }
      }

      printf("\n");
    }
    else if (escolha == 5)
    {
      system("cls");
      if (cont2 == 0)
      {

        n11 = 0;
        while (n11 != 1)
        {
          printf("\n----(ERRO)---- \n\n");

          printf("Voce nao fez login ainda.\n");
          printf("Voltar ao inicio? (1)sim ou (2)nao \n");
          scanf("%d", &n11);
          if (n11 == 2)
          {
            printf("Programa encerrado\n");
            exit(1);
          }
          printf("\n");
        }
      }
      else if (cont2 == 1)
      {
        if (cont3 == 0)
        {

          n12 = 0;
          while (n12 != 1)
          {
            printf("\n----(ERRO)---- \n\n");
            printf("Voce ainda nao inseriu nenhum funcionario\n");
            printf("Voltar ao inicio? (1)sim ou (2)nao \n");
            scanf("%d", &n12);
            if (n12 == 2)
            {
              printf("Programa encerrado\n");
              exit(1);
            }
            printf("\n");
          }
        }
        else
        {
          system("cls");

          n13 = 0;

          while (n13 != 1)
          {
            printf("Para imprimir arquivo txt digite (1) Para imprimir banco de dados digite (2)");
            scanf("%d", &bancoEtxt);

            if (bancoEtxt == 1)
            {
              FILE *arquivo;
              arquivo = fopen("Funcionarios.txt", "w");
              fprintf(arquivo, "\n----(DADOS DOS FUNCIONARIOS)----\n");

              for (contador = 0; contador < cont3; contador++)
              {

                fprintf(arquivo, "\nFuncionario(%d)\n", contador + 1);
                fprintf(arquivo, "Cargo: %s\n", vetor[contador].cargo);
                fprintf(arquivo, "Nome: %s\n", vetor[contador].nome);
                fprintf(arquivo, "Idade: %d\n", vetor[contador].idade);
                fprintf(arquivo, "Salario: R$ %.2f\n", vetor[contador].salario);
                fprintf(arquivo, "\n");
              }

              folha = 0;
              for (contador = 0; contador < cont3; contador++)
              {

                folha = vetor[contador].salario + folha;
              }

              fprintf(arquivo, "Total gasto com salarios: R$ %.2f\n", folha);
              fprintf(arquivo, "\n");

              fclose(arquivo);
            }
            else if (bancoEtxt == 2)
            {
              FILE *arquivo;
              arquivo = fopen("banco.txt", "w");

              folha = 0;
              for (contador = 0; contador < cont3; contador++)
              {

                folha = vetor[contador].salario + folha;
              }

              fprintf(arquivo, "%.2f\n", folha);

              for (contador = 0; contador < cont3; contador++)
              {


                fprintf(arquivo, "%s\n", vetor[contador].cargo);
                fprintf(arquivo, "%s\n", vetor[contador].nome);
                fprintf(arquivo, "%d\n", vetor[contador].idade);
                fprintf(arquivo, "%.2f\n", vetor[contador].salario);
              }

              fclose(arquivo);
            }

            printf("Voltar ao inicio? (1)sim ou (2)nao \n");
            scanf("%d", &n13);
            if (n13 == 2)
            {
              printf("Programa encerrado\n");
              exit(1);
            }
            printf("\n");
          }
        }
      }
    }
    else if (escolha == 6)
    {
      system("cls");

      if (cont2 == 0)
      {
        n14 = 0;
        while (n14 != 1)
        {
          printf("\n----(ERRO)---- \n\n");


          printf("Voce nao fez login ainda.\n");
          printf("Voltar ao inicio? (1)sim ou (2)nao \n");
          scanf("%d", &n1);
          if (n1 == 2)
          {
            printf("Programa encerrado\n");
            exit(1);
          }
          printf("\n");
        }
      }
      else if (cont2 == 1)
      {
        system("cls");
        FILE *banco;

        banco = fopen("banco.txt", "r");

        while (fscanf(banco, "%f %[^\n] %[^\n]%d%d", &folha, vetor[contador].cargo, vetor[contador].nome, &vetor[contador].idade, &vetor[contador].salario) != -1)
        {


          quantidadedealocacoes++;

          cont3++;
          total++;
          vetor = realloc(vetor, quantidadedealocacoes * (sizeof(Funcionario)));
        }
      }
    }
  }

  free(vetor);
  return 0;
}