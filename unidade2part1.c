#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, idade2;
    float altura, altura2, salario, salario2;
    printf("Idade do usuario:\n");
    scanf("%d", &idade);
    printf("Altura do usuario:\n");
    scanf("%f", &altura);
    printf("Salario do usuario:\n");
    scanf("%f", &salario);
    printf("Idade do segundo usuario:\n");
    scanf("%d", &idade2);
    printf("Altura do segundo usuario:\n");
    scanf("%f", &altura2);
    printf("Salario do segundo usuario:\n");
    scanf("%f", &salario2);

    if (altura > altura2)
    {
        printf("O primeiro usuario e mais alto com %0.2f centimetros a mais que o segundo usuario\n", (altura - altura2));
    }
    else
    {
        printf("O segundo usuario e mais alto com %0.2f centimetros a mais que o primeiro usuario\n", (altura2 - altura));
    }

    if (idade > idade2)
    {
        printf("O primeiro usuario e mais velho com %d anos a mais que o segundo\n", (idade - idade2));
    }
    else
    {
        printf("O segundo usuario e mais velho com %d anos a mais que o primeiro\n", (idade2 - idade));
    }

    if (salario > salario2)
    {
        printf("O primeiro usuario tem um maior salario ganhando %0.2f reais a mais que o segundo\n", (salario - salario2));
    }
    else
    {
        printf("O segundo usuario tem um maior salario ganhando %0.2f reais a mais que o primeiro\n", (salario2 - salario));
    }
}