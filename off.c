#include <stdio.h>
#include <stdlib.h>

float function_media( float notas, float notas1, float notas2,  int n1){
 float media;
     media = (notas + notas1 + notas2) / n1;
 return media;
}


int main(){


    int n1, n2, n4, n;
float  notas, notas1, notas2, result;


printf("Informe a quantidade de alunos:\n");
scanf("%d", &n4);
for(n=0; n<n4; n++){


n1 = 3;
for(n2=1;n2<= 1 ;n2++){