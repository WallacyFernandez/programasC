#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    float totaldehorastrabalhadas;
    char localizacao[100];
    char horadeentrada[100];
    char horadesaida[100];
    char pausa[100];
    struct No *proximo;
} No;

typedef struct lista
{

    No *inicio;
    int tam;

} Listf;

void inserirInicio(Lista *lista)
{
    system("cls");
    No *novo = (No *)malloc(sizeof(No));

    printf("Digite o local: \n");
    scanf(" %[^\n]", novo->localizacao);
    printf("Digite o hora de entrada exemplo (12:30):  \n");
    scanf(" %[^\n]", novo->horadeentrada);
    printf("Digite o hora de saida exemplo (12:30):  \n");
    scanf(" %[^\n]", novo->horadesaida);
    printf("Digite o total de horas trabalhadas: \n");
    scanf("%f", &novo->totaldehorastrabalhadas);
    printf("Digite o horario de pausa exemplo (12:30): \n");
    scanf(" %[^\n]", novo->pausa);

    novo->proximo = lista->inicio;
    lista->inicio = novo;
    lista->tam++;
}

void imprimir(Lista *lista)
{
    system("cls");
    No *inicio = lista->inicio;

    printf("Tamanho da lista: %d\n", lista->tam);
    while (inicio != NULL)
    {
        printf("\n");
        printf("local informado: %s\n", inicio->localizacao);
        printf("hora de entrada: %s\n", inicio->horadeentrada);
        printf("hora de saida: %s\n", inicio->horadesaida);
        printf("total de horas trabalhadas: %.2f\n", inicio->totaldehorastrabalhadas);
        printf("horario de pausa: %s\n", inicio->pausa);

        inicio = inicio->proximo;
        printf("\n");
    }
}

int main()
{
    system("cls");

    Listf lista;
    lista.inicio = NULL;
    lista.tam = 0;
    int opcao;

    do
    {

        printf("1 - inserir no inicio\n2 - imprimir\n3 - inserir no final\n4 - Sair\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            inserirInicio(&lista);
            break;
        case 2:
            imprimir(&lista);
            break;
        case 3:

            break;
        case 4:
            printf("Finalizando...\n");
            break;
        default:
            printf("Opcao invalida!\n");
        }
    } while (opcao != 4);
}