
#include <stdio.h>
#include <stdlib.h>

int main(){


    int chave, i;
    int quantfrutas;

    printf("Quntidade de frutas: \n");
    scanf("%d", &quantfrutas);

    while(chave != 2){
    
    char **frutas = (char **)malloc(quantfrutas * sizeof(char*));

    if(frutas == NULL){

        printf("Erro de memoria");
        exit(1);
    }

    for (i = 0; i < quantfrutas; i++)
    {

        frutas[i] = (char *)malloc(20 * sizeof(char));
    }


   float *preco = (float*) malloc(quantfrutas * sizeof(float));
   if(preco == NULL){

        printf("Erro de memoria");
        exit(1);
    }

    for (i = 0; i < quantfrutas; i++)
    {

        printf("Digite o nome da fruta: \n");
        scanf(" %[^\n]s", frutas[i]);
        printf("Digite o preco da fruta: \n");
        scanf("%f", &preco[i]);
    }

    for (i = 0; i < quantfrutas; i++)
    {

        printf("Digite o nome da fruta: %s\n", frutas[i]);
        
    }

    printf("Continuar Sim(1) nao (2) \n");
    scanf("%d", &chave);
    }
}
