#include <stdio.h>
    
    int main(void)
    {
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