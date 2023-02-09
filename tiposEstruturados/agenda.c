
#include<stdio.h>
#include<stdlib.h>

typedef struct ingresso{
    int dianormal;
    int diaferias;
    char dataespecial [50];

}ingresso;

void imprime(){

int i, j;
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

    for (i = 1; i <= 12; i++)
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



     for (i = 1; i <= 12; i++)
    {


        if(i == 4 || i == 6 || i == 9 || i == 11){

            printf("\n");
            printf("\n");
            if(i == 4){

                 printf("Abril\n");
            }else if(i == 6){

                printf("Junho\n");
            }else if(i == 9){

                printf("Setembro\n");
            }else if(i == 11){

                 printf("Novembro\n");
            }
           
            for (j = 1; j <= 30; j++)
        {
            
            if(j == 7 || j == 14 || j == 21 || j == 28){
		  printf("%3d \n", mes[i][j]);
          }else{

             printf("%3d ", mes[i][j]);
          }
            
        }
        
        }else if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){

            printf("\n");
            printf("\n");

            if(i == 1){

                 printf("Janeiro\n");
            }else if(i == 3){

                printf("Marco\n");
            }else if(i == 5){

                printf("Maio\n");
            }else if(i == 7){

                 printf("Julho\n");
            }else if(i == 8){

                printf("Agosto\n");
            }else if(i ==10){

                printf("Outubro\n");
            }else if(i ==12){

                printf("Dezembro\n");
            }
            for (j = 1; j <= 31; j++)
        {
            
            if(j == 7 || j == 14 || j == 21 || j == 28){
		  printf("%3d \n", mes[i][j]);
          }else{

             printf("%3d ", mes[i][j]);
          }
            
        }
        }else if(i == 2){

            printf("\n");
            printf("\n");
            printf("Fervereiro\n");
            for (j = 1; j <= 28; j++)
        {
            
            if(j == 7 || j == 14 || j == 21){
		  printf("%3d \n", mes[i][j]);
          }else{

             printf("%3d ", mes[i][j]);
          }
            
        }
        }
        
    }


    for (i = 1; i < 12; i++)
    {
        for (j = 1; j < 31; j++)
        {

            free(mes[i]);
        }
    }
    free(mes);

}

void consulta(){

        int dia, mes, ano, res, x;
        printf("Digite o dia: ");
        scanf("%d", &dia); //dia
        printf("Digite o mes: ");
        scanf("%d", &mes); //mes
        printf("Digite o ano: ");
        scanf("%d", &ano); //ano
        if (mes > 2)
       {
           mes = mes - 2;
           x = 8;
       }
       else
       {
           ano = ano - 1;
          x = 13;
      }
      res = (x + dia + 2 * mes + ((7 * mes) / 12) + ano % 7 +
              ano / 4 % 7 - (3 * (1 + ano / 100)) / 4 % 7) % 7;
      if (res == 0) printf("Sabado");
       else
          if (res == 1) printf("Domingo");
          else
              if (res == 2) printf("Segunda");
              else
                  if (res == 3) printf("Terca");
                else
                      if (res == 4) printf("Quarta");
                      else
                          if (res == 5) printf("Quinta");
                          else
                              if (res == 6) printf("Sexta");
       return 0;
   
}

int main (void){
 
 int escolha, i, j;
 printf("Para imprimir calendario (1)\n");
 printf("Introduzir evento na agenda (2)\n");
 printf("Consultar data(3)\n");
 scanf(" %d", &escolha);

if(escolha == 1){

imprime();

}else if(escolha == 2){

consulta();
}

return 0;

}