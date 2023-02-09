#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pessoa
{
    char nome[100];
    int numerododoc;
    int idade;

} Pessoa;

void preenche(Pessoa *i)
{

    int cont;
    for (cont = 0; cont < 4; cont++)
    {

        printf("\n");
        printf("\nDados da pessoa (%d)\n\n", cont + 1);
        printf("Digite o nome: ");
        scanf(" %[^\n]", i[cont].nome);

        printf("Digite o numero do documento: ");
        scanf("%d", &i[cont].numerododoc);

        printf("Digite a idade: ");
        scanf("%d", &i[cont].idade);
    }
}

void imprimir(Pessoa *i)
{

    int cont;
    for (cont = 0; cont < 4; cont++)
    {

        printf("\n");
        printf("\nDados da pessoa (%d)\n\n", cont + 1);
        printf("nome do funcionario: %s\n", i[cont].nome);

        printf("Numero do documento: %d\n", i[cont].numerododoc);

        printf("Idade da pessoa: %d\n", i[cont].idade);
    }
}

void alteraidade(Pessoa *i, int valor)
{

    int cont;

    for (cont = 0; cont < 4; cont++)
    {

        if (valor == i[cont].numerododoc)
            printf("Atualize a idade da pessoa: ");
        scanf("%d", &i[cont].idade);
    }
}

void maioremenor(Pessoa *i)
{

    int menor = i[0].idade;
    int maior = i[0].idade;

    char nomemaior[100];
    char nomemenor[100];

    strcpy(nomemaior, i[0].nome);
    strcpy(nomemenor, i[0].nome);

    for (int cont = 1; cont < 4; cont++)
    {

        if (i[cont].idade > maior)
        {
            strcpy(nomemaior, i[cont].nome);
            maior = i[cont].idade;
        }

        if (i[cont].idade < menor)
        {
            strcpy(nomemenor, i[cont].nome);
            menor = i[cont].idade;
        }
    }

    printf("Pessoa mais velha encontrada idade: %d nome: %s\n", maior, nomemaior);
    printf("Pessoa mais nova encontrada idade: %d nome: %s\n", menor, nomemenor);
}

int main(void)
{

    Pessoa *n1 = (Pessoa *)malloc(4 * sizeof(Pessoa));
    int n2;
    int valor;

    preenche(n1);
    imprimir(n1);

    printf("\n");

    printf("alterar idade de alguma pessoa? (1) sim ou (2) nao\n");
    scanf("%d", &n2);

    if (n2 == 1)
    {
        printf("Digite o numero do documento da pessoa em questao: ");
        scanf("%d", &valor);

        alteraidade(n1, valor);
        printf("\n");

        imprimir(n1);
    }

    printf("\n");
    maioremenor(n1);

    return 0;
}