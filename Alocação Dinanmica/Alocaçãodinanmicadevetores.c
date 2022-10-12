#include <stdio.h>
#include <stdlib.h>

int main (void) {
    system("cls");
    int i, n;
    int *vet;

printf ("quantos numeros vao ser digitados; \n");
scanf ("%d", &n);


 vet = (int*) malloc(n * sizeof(int));
 if(vet == NULL){
     printf("erro");
     exit(1);
 }
for (int i = 0; i < n; i++) {

     printf("Digite o numero que sera alocado na posicao [%d] do vetor \n", i);
     scanf("%d", &vet[i]);

}

for(int i = 0; i < n ; i++) {

  printf("  posicao [%d] do vetor: %d \n", i, *(vet + i));

}




free(vet);

}