void invert (int *vet, int tam){

int aux, i, aux2, j = 0;
int vetor [tam];
for(i = 0; i < tam; i++)
{
    vetor[i] = vet[i];
}

for(i = 0; i < tam; i++)
{
    
    vet[i] = vetor[tam - 1 - i];
}

}

int main (){

int tamanho, i;

printf("digite o tamanho do vetor: ");
scanf("%d", &tamanho);
int vetor[tamanho];

for(i = 0; i < tamanho; i++)
{

    printf("Digite um numero: ");
    scanf("%d", &vetor[i]);
}

printf("\n Vetor normal\n\n");

for(i = 0; i < tamanho; i++)
{
    printf("Posicao (%d) \n", vetor[i]);
}

invert (&vetor, tamanho);


printf("\n Vetor invertido\n\n");
for(i = 0; i < tamanho; i++)
{
    printf("Posicao (%d) \n", vetor[i]);
}
}
