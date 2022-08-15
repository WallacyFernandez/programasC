
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
  float a, A, n;
  
  
  printf("Digite um valor ");
  scanf("%f",&a);
  
  printf("Digite um valor ");
  scanf("%f",&A);

  n = (a + A) / 2;
  
  printf("Media aritmetica = %.1f\n",n);
  
  system("pause");
  return 0;  