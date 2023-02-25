#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct funcionario
{
    char nome[100], cargo[100];
    float salario;
    int identificador;

} Funcionario;

void preenchefuncionario(Funcionario *i)
{

    int cont;
    for (cont = 0; cont < 4; cont++)
    {

        printf("\n");
        printf("\nDados do funcionario (%d)\n\n", cont + 1);
        printf("Digite o nome: ");
        scanf(" %[^\n]", i[cont].nome);
        printf("Digite o cargo: ");
        scanf(" %[^\n]", i[cont].cargo);
        printf("Digite o salario: ");
        scanf("%f", &i[cont].salario);
        printf("Digite o identificador: ");
        scanf("%d", &i[cont].identificador);
    }
}

void imprimir(Funcionario *i)
{

    int cont;
    for (cont = 0; cont < 4; cont++)
    {

        printf("\n");
        printf("\nDados do funcionario (%d)\n\n", cont + 1);
        printf("nome do funcionario: %s\n", i[cont].nome);
        printf("Cargo do funcionario: %s\n", i[cont].cargo);
        printf("Salario do funcionario: %.2f\n", i[cont].salario);
        printf("Salario do funcionario: %d\n", i[cont].identificador);
    }
}

void alterasalario(Funcionario *i, int valor)
{

    int cont;

    for (cont = 0; cont < 4; cont++)
    {

        if (valor == i[cont].identificador)
            printf("digite o novo valor: ");
        scanf("%f", &i[cont].salario);
    }
}

void maioremenor(Funcionario *i)
{

    float menor = i[0].salario;
    float maior = i[0].salario;

    char cargomaior[100];
    char cargomenor[100];

    strcpy(cargomaior, i[0].cargo);
    strcpy(cargomenor, i[0].cargo);

    for (int cont = 1; cont < 4; cont++)
    {

        if (i[cont].salario > maior)
        {
            strcpy(cargomaior, i[cont].cargo);
            maior = i[cont].salario;
        }

        if (i[cont].salario < menor)
        {
            strcpy(cargomenor, i[cont].cargo);
            menor = i[cont].salario;
        }
    }

    printf("Maior salario encontrado: %.2f cargo: %s\n", maior, cargomaior);
    printf("Menor salario encontrado: %.2f cargo: %s\n", menor, cargomenor);
}

int main(void)
{

    Funcionario *n1 = (Funcionario *)malloc(4 * sizeof(Funcionario));
    int n2;
    int valor;

    preenchefuncionario(n1);
    imprimir(n1);

    printf("alterar salario de algum funcionario funcionario? (1) sim ou (2) nao\n");
    scanf("%d", &n2);

    if (n2 == 1)
    {
        printf("Digite o identificador do funcionario: ");
        scanf("%d", &valor);

        alterasalario(n1, valor);
        printf("\n");

        imprimir(n1);
    }

    printf("\n");
    maioremenor(n1);

    return 0;
}