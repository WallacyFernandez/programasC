#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_VAGAS 10
#define MAX_TURMAS 2
int contadorglobal = 0;


struct aluno
{
    int mat;
    char nome[81];
    float notas[3];
    float media;
};
typedef struct aluno Aluno;

struct turma
{

    char id;
    int vagas;
    Aluno *alunos[MAX_VAGAS];
};
typedef struct turma Turma;

Turma *turmas[MAX_TURMAS];

void turma_init(char id)
{

    if (contadorglobal < MAX_TURMAS)
    {

        Turma *i = turmas;

        i[contadorglobal].id = id;
        i[contadorglobal].vagas = MAX_VAGAS;

        printf("Turma %c criada com sucesso!\n\n", i[contadorglobal].id);

        contadorglobal++;
    }
    else
    {

        printf("Nao foi possivel criar a turma! Turmas esgotadas!\n\n");
    }
}

void lista_turmas(Turma *i)
{

    int cont;

    for (cont = 0; cont < contadorglobal; cont++)
    {

        printf("turma %c - %d vagas disponiveis \n", i[cont].id, i[cont].vagas);
    }
}

void matricula_aluno(int mat, char *nome, char id)
{

    
    Turma *busca = turmas;

    for (int i = 0; i < contadorglobal; i++)
    {
        if (busca[i].vagas > 0)
        {
            
            if (id == busca[i].id)
            {
                printf("veio aqui\n");

                busca->alunos[i]->mat = mat;
                
                printf("Aluno matriculado com sucesso!");
                
            }
        }else {

           printf("turma lotada!");

        }
    }
}

int main()
{

    int escolha, mat;
    char id;
    char nome[81];

    while (escolha != 6)
    {

        printf("Menu: \n");
        printf("1 - Criar turma \n");
        printf("2 - Listar turmas \n");
        printf("3 - Matricular aluno \n");
        printf("4 - Lancar notas \n");
        printf("5 - Listar alunos \n");
        printf("6 - Sair \n");
        printf("Escolha: \n");
        scanf("%d", &escolha);

        if (escolha == 1)
        {

            printf("\n\nCriando nova turma...\n");
            printf("Digite um id: \n");
            scanf(" %[^\n]", &id);
            turma_init(id);
        }
        else if (escolha == 2)
        {

            printf("\n\nListndo turmas...\n");
            lista_turmas(turmas);
        }
        else if (escolha == 3)
        {

            printf("\n\nMatriculando aluno...\n");
            printf("Digite o id da turma: \n");
            scanf(" %[^\n]", &id);
            printf("Digite a matricula: ");
            scanf(" %d", &mat);
            printf("Digite o nome: ");
            scanf(" %[^\n]", nome);
            matricula_aluno(mat, &nome, id);
        }
    }
}


