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
  int contador, escolha, cont = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0, quantidadedealocacoes = 1, total = 1, unico;
  int numeroescolhido, bancoEtxt;
  int controlador = 0, retorno, retorno2, letra;
  int n1, n5, n7; // variaveis de controle while

  Funcionario *vetor = (Funcionario *)malloc(1 * sizeof(Funcionario));

  while (escolha != 10)
  {
    system("cls");
    printf("\n----(Banco De Dados: Funcionarios Da Empresa)---- \n\n");
    printf("Fazer login (1)\n");
    printf("Para introduzir novos funcionarios digite (2)\n");
    printf("Para ver funcionarios introduzidos digite (3)\n");
    printf("Para ver ficha de um funcionario especifico digite (4)\n");
    printf("Criar documento de texto com dados dos funcionarios(5)\n");
    printf("Criar Banco de dados com dados dos funcionarios(6)\n");
    printf("Ler Banco de dados (7)\n");
    printf("Atualizar Banco de dados (8)\n");
    printf("Alterar dados de um funcionario especifico (9)\n");
    printf("Para sair do site digite (10)\n");
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
        retorno = 0;
        while (retorno != 1)
        {
          printf("\n----(ERRO)---- \n\n");

          printf("Voce ja fez login. \n");
          printf("Voltar ao inicio? (1)sim ou (2)nao \n");
          retorno2 = scanf("%d", &n1);

          if (n1 > 0 && n1 < 3)
          {

            retorno = retorno2;
          }

          if (retorno == 0)
          {
            printf("\n---(Valor inserido invalido)---\n\n");
          }
          letra = 0;
          while (letra != '\n')
          {

            letra = getchar();
          }

          if (n1 == 2)
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
        system("cls");

        retorno = 0;
        while (retorno != 1)
        {
          printf("\n----(ERRO)---- \n\n");

          printf("Voce nao fez login. \n");
          printf("Voltar ao inicio? (1)sim ou (2)nao \n");
          retorno2 = scanf("%d", &n1);

          if (n1 > 0 && n1 < 3)
          {

            retorno = retorno2;
          }

          if (retorno == 0)
          {
            printf("\n---(Valor inserido invalido)---\n\n");
          }
          letra = 0;
          while (letra != '\n')
          {

            letra = getchar();
          }

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

        while (contador < total)
        {
          contador = cont3;

          printf("\nDados do funcionario(%d)\n", contador + 1);
          printf("Digite o cargo do do funcionario:\n");
          scanf(" %[^\n]", vetor[contador].cargo);

          printf("Digite o nome do funcionario:\n");
          scanf(" %[^\n]", vetor[contador].nome);

          printf("Digite a idade do funcionario\n");
          scanf("%d", &vetor[contador].idade);

          printf("Digite o salario do funcionario\n");
          scanf("%f", &vetor[contador].salario);
          contador++;
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
        system("cls");

        retorno = 0;
        while (retorno != 1)
        {
          printf("\n----(ERRO)---- \n\n");

          printf("Voce nao fez login. \n");
          printf("Voltar ao inicio? (1)sim ou (2)nao \n");
          retorno2 = scanf("%d", &n1);

          if (n1 > 0 && n1 < 3)
          {

            retorno = retorno2;
          }

          if (retorno == 0)
          {
            printf("\n---(Valor inserido invalido)---\n\n");
          }
          letra = 0;
          while (letra != '\n')
          {

            letra = getchar();
          }

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

        if (cont3 == 0)
        {
          system("cls");

          retorno = 0;
          while (retorno != 1)
          {
            printf("\n----(ERRO)---- \n\n");

            printf("Voce nao inseriu nenhum funcionario ainda. \n");
            printf("Voltar ao inicio? (1)sim ou (2)nao \n");
            retorno2 = scanf("%d", &n1);

            if (n1 > 0 && n1 < 3)
            {

              retorno = retorno2;
            }

            if (retorno == 0)
            {
              printf("\n---(Valor inserido invalido)---\n\n");
            }
            letra = 0;
            while (letra != '\n')
            {

              letra = getchar();
            }

            if (n1 == 2)
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
            system("cls");

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
          system("cls");
        }
      }
    }
    else if (escolha == 4)
    {
      system("cls");

      if (cont2 == 0)
      {
        system("cls");
        retorno = 0;
        while (retorno != 1)
        {
          printf("\n----(ERRO)---- \n\n");

          printf("Voce nao fez login. \n");
          printf("Voltar ao inicio? (1)sim ou (2)nao \n");
          retorno2 = scanf("%d", &n1);

          if (n1 > 0 && n1 < 3)
          {

            retorno = retorno2;
          }

          if (retorno == 0)
          {
            printf("\n---(Valor inserido invalido)---\n\n");
          }
          letra = 0;
          while (letra != '\n')
          {

            letra = getchar();
          }

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
        if (cont3 == 0)
        {
          system("cls");

          retorno = 0;
          while (retorno != 1)
          {
            printf("\n----(ERRO)---- \n\n");

            printf("Voce nao inseriu nenhum funcionario ainda. \n");
            printf("Voltar ao inicio? (1)sim ou (2)nao \n");
            retorno2 = scanf("%d", &n1);

            if (n1 > 0 && n1 < 3)
            {

              retorno = retorno2;
            }

            if (retorno == 0)
            {
              printf("\n---(Valor inserido invalido)---\n\n");
            }
            letra = 0;
            while (letra != '\n')
            {

              letra = getchar();
            }

            if (n1 == 2)
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
          printf("\n----(BUSCA POR FUNCIONARIO)---- \n\n");
          printf("\nObs: Caso nao lembre do numero do funcionario volte ao inicio e consulte a lista geral. \n\n");
          printf("Digite o numero do funcionario desejado: ");
          scanf("%d", &unico);

          if (unico < 1)
          {
            system("cls");
            retorno = 0;
            while (retorno != 1)
            {
              printf("\n----(ERRO)---- \n\n");

              printf("Esse funcionario nao existe. \n");
              printf("Voltar ao inicio? (1)sim ou (2)nao \n");
              retorno2 = scanf("%d", &n1);

              if (n1 > 0 && n1 < 3)
              {

                retorno = retorno2;
              }

              if (retorno == 0)
              {
                printf("\n---(Valor inserido invalido)---\n\n");
              }
              letra = 0;
              while (letra != '\n')
              {

                letra = getchar();
              }

              if (n1 == 2)
              {
                printf("Programa encerrado\n");
                exit(1);
              }
              printf("\n");
            }
          }

          if (unico <= cont3 && unico > 0)
          {
            system("cls");

            

            unico = unico - 1;
            printf("\n---(Informacoes do funcionario)---\n\n");
            printf("\nfuncionario(%d)\n", unico + 1);
            printf("Cargo: %s\n", vetor[unico].cargo);
            printf("Nome: %s\n", vetor[unico].nome);
            printf("Idade: %d\n", vetor[unico].idade);
            printf("Salario: R$ %.2f\n", vetor[unico].salario);
            printf("\n");

            retorno = 0;
            while (retorno != 1)
            {

              printf("Voltar ao inicio? (1)sim ou (2)nao \n");
              retorno2 = scanf("%d", &n1);
              if (n1 > 0 && n1 < 3)
              {

                retorno = retorno2;
              }
              if (retorno == 0)
              {
                printf("\n---(Valor inserido invalido)---\n\n");
              }

              letra = 0;
              while (letra != '\n')
              {

                letra = getchar();
              }
              if (n1 == 2)
              {
                printf("Programa encerrado\n");
                exit(1);
              }
              printf("\n");
            }
          }

          if (unico > cont3)
          {
            system("cls");
            retorno = 0;
            while (retorno != 1)
            {

              printf("\n----(ERRO)---- \n\n");

              printf("Esse funcionario nao existe.\n");
              printf("Voltar ao inicio? (1)sim ou (2)nao \n");
              retorno2 = scanf("%d", &n1);

              if (n1 > 0 && n1 < 3)
              {

                retorno = retorno2;
              }

              if (retorno == 0)
              {
                printf("\n---(Valor inserido invalido)---\n\n");
              }
              letra = 0;
              while (letra != '\n')
              {

                letra = getchar();
              }

              if (n1 == 2)
              {
                printf("Programa encerrado\n");
                exit(1);
              }
              printf("\n");
            }
          }
          system("cls");
        }
      }

      printf("\n");
    }
    else if (escolha == 5)
    {
      system("cls");

      if (cont2 == 0)
      {
        system("cls");

        retorno = 0;
        while (retorno != 1)
        {

          printf("\n----(ERRO)---- \n\n");

          printf("Voce nao fez login. \n");
          printf("Voltar ao inicio? (1)sim ou (2)nao \n");
          retorno2 = scanf("%d", &n1);

          if (n1 > 0 && n1 < 3)
          {

            retorno = retorno2;
          }

          if (retorno == 0)
          {
            printf("\n---(Valor inserido invalido)---\n\n");
          }
          letra = 0;
          while (letra != '\n')
          {

            letra = getchar();
          }

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
        if (cont3 == 0)
        {
          system("cls");

          retorno = 0;
          while (retorno != 1)
          {

            printf("\n----(ERRO)---- \n\n");

            printf("Voce nao inseriu nenhum funcionario ainda. \n");
            printf("Voltar ao inicio? (1)sim ou (2)nao \n");
            retorno2 = scanf("%d", &n1);

            if (n1 > 0 && n1 < 3)
            {

              retorno = retorno2;
            }

            if (retorno == 0)
            {
              printf("\n---(Valor inserido invalido)---\n\n");
            }
            letra = 0;
            while (letra != '\n')
            {

              letra = getchar();
            }

            if (n1 == 2)
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

          retorno = 0;

          while (retorno != 1)
          {
            system("cls");

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

            printf("\n---(Documento criado com sucesso!)---\n\n");
            printf("Voltar ao inicio? (1)sim ou (2)nao \n");
            retorno2 = scanf("%d", &n1);

            if (n1 > 0 && n1 < 3)
            {

              retorno = retorno2;
            }
            if (retorno == 0)
            {
              printf("\n---(Valor inserido invalido)---\n\n");
            }
            letra = 0;
            while (letra != '\n')
            {

              letra = getchar();
            }
            if (n1 == 2)
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
        system("cls");

        retorno = 0;
        while (retorno != 1)
        {

          printf("\n----(ERRO)---- \n\n");

          printf("Voce nao fez login. \n");
          printf("Voltar ao inicio? (1)sim ou (2)nao \n");
          retorno2 = scanf("%d", &n1);

          if (n1 > 0 && n1 < 3)
          {

            retorno = retorno2;
          }

          if (retorno == 0)
          {
            printf("\n---(Valor inserido invalido)---\n\n");
          }
          letra = 0;
          while (letra != '\n')
          {

            letra = getchar();
          }

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
        if (cont3 == 0)
        {
          system("cls");

          retorno = 0;
          while (retorno != 1)
          {

            printf("\n----(ERRO)---- \n\n");

            printf("Voce nao inseriu nenhum funcionario ainda. \n");
            printf("Voltar ao inicio? (1)sim ou (2)nao \n");
            retorno2 = scanf("%d", &n1);

            if (n1 > 0 && n1 < 3)
            {

              retorno = retorno2;
            }

            if (retorno == 0)
            {
              printf("\n---(Valor inserido invalido)---\n\n");
            }
            letra = 0;
            while (letra != '\n')
            {

              letra = getchar();
            }

            if (n1 == 2)
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

          retorno = 0;

          while (retorno != 1)
          {
            system("cls");

            cont++;
            if (cont < 2)
            {

              system("cls");

              FILE *arquivo;
              arquivo = fopen("banco.txt", "w");

              fprintf(arquivo, "%d ", cont3);

              for (contador = 0; contador < cont3; contador++)
              {

                fprintf(arquivo, " %s\n %s\n %d %.2f", vetor[contador].cargo, vetor[contador].nome, vetor[contador].idade, vetor[contador].salario);
              }

              fclose(arquivo);
            }
            else
            {
              printf("O Banco ja foi criado, volte a inicio e use a opcao de atualizar o banco de \n");
            }

            printf("Voltar ao inicio? (1)sim ou (2)nao \n");
            retorno2 = scanf("%d", &n1);

            if (n1 > 0 && n1 < 3)
            {

              retorno = retorno2;
            }
            if (retorno == 0)
            {
              printf("\n---(Valor inserido invalido)---\n\n");
            }
            letra = 0;
            while (letra != '\n')
            {

              letra = getchar();
            }
            if (n1 == 2)
            {
              printf("Programa encerrado\n");
              exit(1);
            }
            printf("\n");
          }
        }
      }
    }
    else if (escolha == 7)
    {

      system("cls");

      if (cont2 == 0)
      {
        system("cls");
        retorno = 0;
        while (retorno != 1)
        {
          printf("\n----(ERRO)---- \n\n");

          printf("Voce nao fez login. \n");
          printf("Voltar ao inicio? (1)sim ou (2)nao \n");
          retorno2 = scanf("%d", &n1);

          if (n1 > 0 && n1 < 3)
          {

            retorno = retorno2;
          }

          if (retorno == 0)
          {
            printf("\n---(Valor inserido invalido)---\n\n");
          }
          letra = 0;
          while (letra != '\n')
          {

            letra = getchar();
          }

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
        cont5++;
        if (cont5 < 2)
        {

          system("cls");

          FILE *banco;

          banco = fopen("banco.txt", "r");
          cont4 = 0;

          fscanf(banco, "%d", &cont4);

          for (contador = 0; contador < cont4; contador++)
          {

            fscanf(banco, " %[^\n] %[^\n] %d %f", vetor[contador].cargo, vetor[contador].nome, &vetor[contador].idade, &vetor[contador].salario);

            quantidadedealocacoes++;

            cont3++;

            total++;

            vetor = realloc(vetor, quantidadedealocacoes * (sizeof(Funcionario)));
          }

          fclose(banco);
          retorno = 0;
          while (retorno != 1)
          {

            printf("\n---(Banco de dados lido com sucesso)---\n\n");
            printf("Voltar ao inicio? (1)sim ou (2)nao \n");
            retorno2 = scanf("%d", &n1);

            if (n1 > 0 && n1 < 3)
            {

              retorno = retorno2;
            }

            if (retorno == 0)
            {
              printf("\n---(Valor inserido invalido)---\n\n");
            }
            letra = 0;
            while (letra != '\n')
            {

              letra = getchar();
            }

            if (n1 == 2)
            {
              printf("Programa encerrado\n");
              exit(1);
            }
            printf("\n");
          }
        }
        else
        {
          retorno = 0;
          while (retorno != 1)
          {
            printf("\n----(ERRO)---- \n\n");

            printf("O Banco de dados ja foi lido!\n");
            printf("Voltar ao inicio? (1)sim ou (2)nao \n");
            retorno2 = scanf("%d", &n1);

            if (n1 > 0 && n1 < 3)
            {

              retorno = retorno2;
            }

            if (retorno == 0)
            {
              printf("\n---(Valor inserido invalido)---\n\n");
            }
            letra = 0;
            while (letra != '\n')
            {

              letra = getchar();
            }

            if (n1 == 2)
            {
              printf("Programa encerrado\n");
              exit(1);
            }
            printf("\n");
          }
        }
      }
    }
    else if (escolha == 8)
    {
      if (cont2 == 0)
      {
        system("cls");
        retorno = 0;
        while (retorno != 1)
        {
          printf("\n----(ERRO)---- \n\n");

          printf("Voce nao fez login. \n");
          printf("Voltar ao inicio? (1)sim ou (2)nao \n");
          retorno2 = scanf("%d", &n1);

          if (n1 > 0 && n1 < 3)
          {

            retorno = retorno2;
          }

          if (retorno == 0)
          {
            printf("\n---(Valor inserido invalido)---\n\n");
          }
          letra = 0;
          while (letra != '\n')
          {

            letra = getchar();
          }

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
        if (cont3 == 0)
        {
          system("cls");

          retorno = 0;
          while (retorno != 1)
          {
            printf("\n----(ERRO)---- \n\n");

            printf("Voce nao inseriu nenhum novo funcionario ainda. \n");
            printf("Voltar ao inicio? (1)sim ou (2)nao \n");
            retorno2 = scanf("%d", &n1);

            if (n1 > 0 && n1 < 3)
            {

              retorno = retorno2;
            }

            if (retorno == 0)
            {
              printf("\n---(Valor inserido invalido)---\n\n");
            }
            letra = 0;
            while (letra != '\n')
            {

              letra = getchar();
            }

            if (n1 == 2)
            {
              printf("Programa encerrado\n");
              exit(1);
            }
            printf("\n");
          }
        }
        else if (cont5 == 0 && cont == 0)
        {
          system("cls");

          retorno = 0;
          while (retorno != 1)
          {
            printf("\n----(ERRO)---- \n\n");

            printf("O Banco de dados ainda nao foi lido, nem criado. \n");
            printf("Voltar ao inicio? (1)sim ou (2)nao \n");
            retorno2 = scanf("%d", &n1);

            if (n1 > 0 && n1 < 3)
            {

              retorno = retorno2;
            }

            if (retorno == 0)
            {
              printf("\n---(Valor inserido invalido)---\n\n");
            }
            letra = 0;
            while (letra != '\n')
            {

              letra = getchar();
            }

            if (n1 == 2)
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

          FILE *arquivo;
          arquivo = fopen("banco.txt", "w");

          fprintf(arquivo, "%d ", cont3);

          for (contador = 0; contador < cont3; contador++)
          {

            fprintf(arquivo, " %s\n %s\n %d %.2f", vetor[contador].cargo, vetor[contador].nome, vetor[contador].idade, vetor[contador].salario);
          }

          fclose(arquivo);

          retorno = 0;
          while (retorno != 1)
          {

            printf("\n---(Banco de dados atualizado com sucesso!)---\n\n");
            printf("Voltar ao inicio? (1)sim ou (2)nao \n");
            retorno2 = scanf("%d", &n1);

            if (n1 > 0 && n1 < 3)
            {

              retorno = retorno2;
            }

            if (retorno == 0)
            {
              printf("\n---(Valor inserido invalido)---\n\n");
            }
            letra = 0;
            while (letra != '\n')
            {

              letra = getchar();
            }

            if (n1 == 2)
            {
              printf("Programa encerrado\n");
              exit(1);
            }
            printf("\n");
          }
        }
      }
    }
    else if (escolha == 9)
    {
      system("cls");

      if (cont2 == 0)
      {
        system("cls");
        retorno = 0;
        while (retorno != 1)
        {
          printf("\n----(ERRO)---- \n\n");

          printf("Voce nao fez login. \n");
          printf("Voltar ao inicio? (1)sim ou (2)nao \n");
          retorno2 = scanf("%d", &n1);

          if (n1 > 0 && n1 < 3)
          {

            retorno = retorno2;
          }

          if (retorno == 0)
          {
            printf("\n---(Valor inserido invalido)---\n\n");
          }
          letra = 0;
          while (letra != '\n')
          {

            letra = getchar();
          }

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
        if (cont3 == 0)
        {
          system("cls");

          retorno = 0;
          while (retorno != 1)
          {
            printf("\n----(ERRO)---- \n\n");

            printf("Voce nao inseriu nenhum funcionario ainda. \n");
            printf("Voltar ao inicio? (1)sim ou (2)nao \n");
            retorno2 = scanf("%d", &n1);

            if (n1 > 0 && n1 < 3)
            {

              retorno = retorno2;
            }

            if (retorno == 0)
            {
              printf("\n---(Valor inserido invalido)---\n\n");
            }
            letra = 0;
            while (letra != '\n')
            {

              letra = getchar();
            }

            if (n1 == 2)
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
          printf("\n----(BUSCA POR FUNCIONARIO)---- \n\n");
          printf("\nObs: Caso nao lembre do numero do funcionario volte ao inicio e consulte a lista geral. \n\n");
          printf("Digite o numero do funcionario desejado: ");
          scanf("%d", &unico);

          if (unico < 1)
          {
            system("cls");
            retorno = 0;
            while (retorno != 1)
            {
              printf("\n----(ERRO)---- \n\n");

              printf("Esse funcionario nao existe. \n");
              printf("Voltar ao inicio? (1)sim ou (2)nao \n");
              retorno2 = scanf("%d", &n1);

              if (n1 > 0 && n1 < 3)
              {

                retorno = retorno2;
              }

              if (retorno == 0)
              {
                printf("\n---(Valor inserido invalido)---\n\n");
              }
              letra = 0;
              while (letra != '\n')
              {

                letra = getchar();
              }

              if (n1 == 2)
              {
                printf("Programa encerrado\n");
                exit(1);
              }
              printf("\n");
            }
          }

          if (unico <= cont3 && unico > 0)
          {
            system("cls");

            numeroescolhido = unico;

            unico = unico - 1;

            printf("\n(Digite as novas informacoes do funcionario (%d))\n", unico + 1);
            printf("Digite o cargo do funcionario:\n");
            scanf(" %[^\n]", vetor[unico].cargo);

            printf("Digite o nome do funcionario:\n");
            scanf(" %[^\n]", vetor[unico].nome);

            printf("Digite a idade do funcionario\n");
            scanf("%d", &vetor[unico].idade);

            printf("Digite o salario do funcionario\n");
            scanf("%f", &vetor[unico].salario);
            printf("\n");

            retorno = 0;
            while (retorno != 1)
            {

              printf("Voltar ao inicio? (1)sim ou (2)nao \n");
              retorno2 = scanf("%d", &n1);
              if (n1 > 0 && n1 < 3)
              {

                retorno = retorno2;
              }
              if (retorno == 0)
              {
                printf("\n---(Valor inserido invalido)---\n\n");
              }

              letra = 0;
              while (letra != '\n')
              {

                letra = getchar();
              }
              if (n1 == 2)
              {
                printf("Programa encerrado\n");
                exit(1);
              }
              printf("\n");
            }
          }

          if (unico > cont3)
          {
            system("cls");
            retorno = 0;
            while (retorno != 1)
            {

              printf("\n----(ERRO)---- \n\n");

              printf("Esse funcionario nao existe.\n");
              printf("Voltar ao inicio? (1)sim ou (2)nao \n");
              retorno2 = scanf("%d", &n1);

              if (n1 > 0 && n1 < 3)
              {

                retorno = retorno2;
              }

              if (retorno == 0)
              {
                printf("\n---(Valor inserido invalido)---\n\n");
              }
              letra = 0;
              while (letra != '\n')
              {

                letra = getchar();
              }

              if (n1 == 2)
              {
                printf("Programa encerrado\n");
                exit(1);
              }
              printf("\n");
            }
          }
          system("cls");
        }
      }

      printf("\n");
    }
  }

  free(vetor);
  return 0;
}