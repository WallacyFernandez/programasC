#include <stdio.h>


void preenche_ordenado(int n, int *v){
int i, j, aux;

for (i=0 ; i< n ; i++){

printf("\n----preencha o vetor----\n\n");

printf("Digite a posicao (%d), do vetor: \n", i);
scanf("%d", &v[i]);

}


for (i = 0; i < n ; i++){
   
   for (j = i + 1; j < n ; j++){
      if (v[i] > v[j]){
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;
      }
   }


}



printf("N: %d\n", v[0 + 1]);

for(i = 0; i < n ; i++){

printf("Numeros : %d\n", v[i]);

}

}



main(){
int n;

printf("Quantiade de elementos: ");
scanf("%d", &n);

int *vetor = (int *)malloc(n * sizeof(int));

preenche_ordenado(n, &vetor);






free (vetor);
return 0;

}
