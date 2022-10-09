#include <stdio.h>

int main (void){

    int escolha, numero1, numero2;
    int soma, div, mult, sub;

printf ("Para realizar soma digite (1) \n");
printf ("Para realizar subtracao digite (2) \n");
printf ("Para realizar multiplicacao digite (3) \n");
printf ("Para realizar divisao digite (4) \n");
printf ("Escolha: \n");
scanf("%d", &escolha);

if(escolha == 1){

printf("Digite o primeiro numero: \n");
scanf("%d", &numero1);
printf("Digite o segundo numero: \n");
scanf("%d", &numero2);

soma = numero1 + numero2;

printf("A soma dos numeros eh: %d\n", soma);

}else if(escolha == 2){

printf("Digite o primeiro numero: \n");
scanf("%d", &numero1);
printf("Digite o segundo numero: \n");
scanf("%d", &numero2);

sub = numero1 - numero2;

printf("A subtracao dos numeros eh: %d\n", sub);

}else if(escolha == 3){

printf("Digite o primeiro numero: \n");
scanf("%d", &numero1);
printf("Digite o segundo numero: \n");
scanf("%d", &numero2);

mult = numero1 * numero2;

printf("A multiplicacao dos numeros eh: %d\n", mult);

}else if(escolha == 4){

printf("Digite o primeiro numero: \n");
scanf("%d", &numero1);
printf("Digite o segundo numero: \n");
scanf("%d", &numero2);

div = numero1 / numero2;

printf("A divisao dos numeros eh: %d\n", div);

}



}