
#include<stdio.h>
#include<stdlib.h>

typedef struct ingresso{
    int dianormal;
    int diaferias;
    char dataespecial [50];

}ingresso;


int main (void){
 
 int tipomes, i, j;
 printf("janeiro (1)\n");
 printf("fervereiro (2)\n");
 printf("marco (3)\n");
 printf("abril (4)\n");
 printf("maio (5)\n");
 printf("junho (6)\n");
 printf("julho (7)\n");
 printf("agosto (8)\n");
 printf("setembro (9)\n");
 printf("outubro (10)\n");
 printf("novembro (11)\n");
 printf("dezembro (12)\n");
 printf("Digite o mes: ");
 scanf(" %d", &tipomes);

ingresso **mes = (ingresso **) malloc(12 * sizeof(ingresso *));

for (i = 1; i <= 12; i++)
    {
        if(i == 4 || i == 6 || i == 9 || i == 11){
        mes[i] = (ingresso *)malloc(30 * sizeof(ingresso));
        }else if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){
            mes[i] = (ingresso *)malloc(31 * sizeof(ingresso));
        }else if(i == 2){

            mes[i] = (ingresso *)malloc(28 * sizeof(ingresso));
        }
    }

    for (i = 1; i < 12; i++)
    {


        if(i == 4 || i == 6 || i == 9 || i == 11){

            for (j = 1; j <= 30; j++)
        {
            
            mes[i][j].dianormal = j;
            
        }
        
        }else if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){
            for (j = 1; j <= 31; j++)
        {
            
            mes[i][j].dianormal = j;
            
        }
        }else if(i == 2){

            for (j = 1; j <= 28; j++)
        {
            
            mes[i][j].dianormal = j;
            
        }
        }
        
    }

    for (i = 1; i < 12; i++)
    {
        
      printf("\n");
        for (j = 1; j <= 3; j++)
        {
            for (j = 1; j <= 3; j++)
        {
            
           printf(" %d \n", mes[i][j].dianormal);
            
        }
           printf(" %d \n", mes[i][j].dianormal);
            
        }
       printf("\n");
    }

    for (i = 1; i < 12; i++)
    {
        for (j = 1; j < 31; j++)
        {

            free(mes[i]);
        }
    }
    free(mes);


 
 
return 0;

}