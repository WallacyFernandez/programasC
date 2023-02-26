#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TURMAS 10
#define MAX_VAGAS 50

typedef struct
{
    int matricula;
    char nome[50];
    float notas[3];
    float media;
} Aluno;

typedef struct
{
    char id;
    int num_alunos;
    Aluno *alunos[MAX_VAGAS];
} Turma;

Turma *cria_turma(char id)
{
    Turma *turma = (Turma *)malloc(sizeof(Turma));
    turma->id = id;
    turma->num_alunos = 0;
    for (int i = 0; i < MAX_VAGAS; i++)
    {
        turma->alunos[i] = NULL;
    }
    return turma;
}

void matricula_aluno(Turma *turma, int mat, char *nome)
{

    if (turma->num_alunos == MAX_VAGAS)
    {
        printf("Turma cheia.\n");
        return;
    }
    Aluno *aluno = (Aluno *)malloc(sizeof(Aluno));
    aluno->matricula = mat;
    strcpy(aluno->nome, nome);
    for (int i = 0; i < 3; i++)
    {
        aluno->notas[i] = 0;
    }
    aluno->media = 0;
    turma->alunos[turma->num_alunos] = aluno;
    turma->num_alunos++;
}

void lanca_notas(Turma *turma)
{
    for (int i = 0; i < turma->num_alunos; i++)
    {
        printf("Notas do aluno %d: ", turma->alunos[i]->matricula);
        for (int j = 0; j < 3; j++)
        {
            scanf("%f", &(turma->alunos[i]->notas[j]));
            turma->alunos[i]->media += turma->alunos[i]->notas[j];
        }
        turma->alunos[i]->media /= 3.0;
    }
}

void imprime_alunos(Turma *turma)
{
    printf("Turma %c:\n", turma->id);
    for (int i = 0; i < turma->num_alunos; i++)
    {
        printf("Matricula: %d\n", turma->alunos[i]->matricula);
        printf("Nome: %s\n", turma->alunos[i]->nome);
        printf("Notas: %.1f %.1f %.1f\n", turma->alunos[i]->notas[0], turma->alunos[i]->notas[1], turma->alunos[i]->notas[2]);
        printf("Media: %.1f\n", turma->alunos[i]->media);
    }
}

Turma *procura_turma(Turma **turmas, int n, char id)
{
    for (int i = 0; i < n; i++)
    {
        if (turmas[i]->id == id)
        {
            return turmas[i];
        }
    }
    return NULL;
}

void imprime_turmas(Turma **turmas, int n)
{
    printf("Lista de turmas:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Turma %c:\n", turmas[i]->id);
        imprime_alunos(turmas[i]);
    }
}

int main()
{
    Turma *turmas[MAX_TURMAS];
    int num_turmas = 0;
    int opcao = 0;
    while (opcao != 6)
    {
        printf("Escolha uma opcao:\n");
        printf("1 - Criar turma\n");
        printf("2 - Matricular aluno\n");
        printf("3 - Lancar notas\n");
        printf("4 - Imprimir dados de alunos\n");
        printf("5 - Imprimir dados de turmas\n");
        printf("6 - Sair\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
        {
            char id;
            printf("Digite o identificador da turma: ");
            scanf(" %c", &id);
            Turma *turma = cria_turma(id);
            turmas[num_turmas] = turma;
            num_turmas++;
            printf("Turma criada com sucesso.\n");
            break;
        }
        case 2:
        {
            char id;
            printf("Digite o identificador da turma: ");
            scanf(" %c", &id);
            Turma *turma = procura_turma(turmas, num_turmas, id);
            if (turma == NULL)
            {
                printf("Turma nao encontrada.\n");
            }
            else
            {
                int mat;
                char nome[50];
                printf("Digite a matricula do aluno: ");
                scanf("%d", &mat);
                printf("Digite o nome do aluno: ");
                scanf(" %[^\n]", nome);
                matricula_aluno(turma, mat, nome);
                printf("Aluno matriculado com sucesso.\n");
            }
            break;
        }
        case 3:
        {
            char id;
            printf("Digite o identificador da turma: ");
            scanf(" %c", &id);
            Turma *turma = procura_turma(turmas, num_turmas, id);
            if (turma == NULL)
            {
                printf("Turma nao encontrada.\n");
            }
            else
            {
                lanca_notas(turma);
                printf("Notas lancadas com sucesso.\n");
            }
            break;
        }
        case 4:
        {
            char id;
            printf("Digite o identificador da turma: ");
            scanf(" %c", &id);
            Turma *turma = procura_turma(turmas, num_turmas, id);
            if (turma == NULL)
            {
                printf("Turma nao encontrada.\n");
            }
            else
            {
                imprime_alunos(turma);
            }
            break;
        }
        case 5:
        {
            imprime_turmas(turmas, num_turmas);
            break;
        }
        case 6:
        {
            printf("Saindo do programa.\n");
            break;
        }
        }
    }
}


/*


A função principal do programa apresenta um menu de opções para o usuário escolher qual ação deseja realizar.
 Ao escolher uma opção, a função principal chama a função correspondente para executar a ação desejada.
  As funções criadas para este programa utilizam ponteiros e alocação dinâmica de memória para manipular os dados das turmas e dos alunos.
   A função cria_turma aloca memória para uma nova turma e inicializa o vetor de ponteiros dos alunos com a constante NULL.
    A função matricula_aluno aloca memória para um novo aluno e o adiciona na turma escolhida pelo usuário, caso haja vaga disponível.
     A função lanca_notas utiliza ponteiros para acessar os dados dos alunos de uma turma e realizar o cálculo da média.
      A função imprime_alunos e imprime_turmas utilizam ponteiros para acessar os dados dos alunos e das turmas e imprimi-los na tela.
       A função procura_turma utiliza ponteiros para percorrer o vetor de turmas e encontrar uma turma específica a partir do identificador informado pelo usuário.
        Com a utilização de ponteiros e alocação dinâmica de memória, o programa é capaz de manipular um número variável de turmas e alunos, tornando-se bastante flexível e escalável.

No entanto, é importante notar que este programa não possui tratamento de erros ou validação de entradas. 
Isso significa que, caso o usuário informe dados inválidos ou o programa alcance o limite máximo de turmas ou alunos, o programa pode apresentar comportamentos inesperados ou até mesmo falhar.
 Além disso, as notas dos alunos são fixadas em zero pela função matricula_aluno, o que pode não ser adequado em situações reais.
  Por fim, é importante lembrar que este código foi desenvolvido com fins educacionais e não deve ser utilizado em ambientes de produção
   sem uma revisão completa e cuidadosa de suas funcionalidades e segurança

*/