#include <stdio.h>
#include <stdlib.h>

float function_media(float n1, float n2, float n3, float n4, float n5)
{
    float media;
    media = (n1 + n2 + n3 + n4 + n5) / 5;
    return media;
}

float function_media_pomderada(float n1, float n2, float n3, float n4, float n5, float p1, float p2, float p3, float p4, float p5)
{
    float mediaP;
    mediaP = (n1 * p1 + n2 * p2 + n3 * p3 + n4 * p4 + n5 * p5) / 5;
    return mediaP;
}

int main()
{
    int op;
    float n1, n2, n3, n4, n5, p1, p2, p3, p4, p5, result, result2;

    printf("\nInforme os numeros.\n");

    printf("numero 1:\n");
    scanf("%f", &n1);
    printf("numero 2:\n");
    scanf("%f", &n2);
    printf("numero 3:\n");
    scanf("%f", &n3);
    printf("numero 4:\n");
    scanf("%f", &n4);
    printf("numero 5:\n");
    scanf("%f", &n5);

    do
    {
        printf("\nPara media aritmetica digite 1, para media pomderada digite 2, qual deseja? Para finalizar o programa digite 3.\n");
        scanf("%i", &op);

        switch (op)
        {
        case 1:

            result = function_media(n1, n2, n3, n4, n5);
            printf("A media aritmetica dos numeros solicitados e: %f", result);

            break;
        case 2:

            printf("informe os pesos de cada numero que voce solicitou para media pomderada\n");
            printf("Peso do numero 1:");
            scanf("%f", &p1);
            printf("Peso do numero 2:");
            scanf("%f", &p2);
            printf("Peso do numero 3:");
            scanf("%f", &p3);
            printf("Peso do numero 4:");
            scanf("%f", &p4);
            printf("Peso do numero 5:");
            scanf("%f", &p5);

            result2 = function_media_pomderada(n1, n2, n3, n4, n5, p1, p2, p3, p4, p5);

            printf("A media pomderada dos numeros solicitados e: %f", result2);
            break;

        case 3:
            printf("Obrigado por ultilizar nossos servicos.\n");

            break;

        default:
            printf("\nOpcao invalida.\n\n");
        }

    } while (op != 3);
    system("pause");
    return (0);
}