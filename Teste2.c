#include <stdio.h>
#include <stdlib.h>

int main(){

int num, num2, escolha, soma, divisao, mult;

printf("Digite 1 para soma \nDigite 2 para div \nDigite 3 para multplication \n");
printf("Escolha: ");
scanf("%d", &escolha);

printf("Digite um numero: ");
scanf("%d", &num);
printf("Digite um numero: ");
scanf("%d", &num2);

switch (escolha)
        {
        case 1:
            soma = num + num2;
            printf("Soma = %d ", soma);
            break;
        case 2:
            divisao = num / num2;
            printf("divisao = %d ", divisao);
            break;
        case 3:
            mult = num * num2;
            printf("multiplicacao = %d ", mult);
            break;
        case 4:
            printf("Finalizando...\n");
            break;
        default:
            printf("Opcao invalida!\n");
        }
}