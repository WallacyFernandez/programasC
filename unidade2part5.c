#include <stdio.h>
#include <stdlib.h>

int main(){
int n1, n2 = 0, aux;

printf("Digite um numero inteiro:\n");
scanf("%i", &n1);
aux = n1;

while (aux != 0)
{n2 = n2 * 10 + aux % 10;
   aux = aux/10;}

if (n2 == n1){ 
printf("\nO numero e um palindrome.\n%i\n", n1);}
else{ 
printf("\nEsse numero nao e palindrome.\n%i\n", n1);}

system("pause");
return 0;
}