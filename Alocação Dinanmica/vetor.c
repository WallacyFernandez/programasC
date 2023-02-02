int main(){


    int *vet = (int *)malloc(10 * sizeof(int));
    int i;
    for(i = 0; i < 10; i++){

        printf("digite um valor: \n");
        scanf("%d", &vet[i]);
        
    }

    for(i = 0; i < 10; i++){

        printf("Valor no indice [%d] do vetor: %d\n", i, vet[i]);
        
    }
    free(vet);
}
