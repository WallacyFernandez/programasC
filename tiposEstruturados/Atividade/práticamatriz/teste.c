#include <stdio.h>
#include <stdlib.h> 

void armazenaAleatorios(char *vetor){
    int i;
    for(i=0; i<10; i++){

        for(int j=0; j<10; j++){

            vetor[j]= 'a' + (char)(rand()%26);
        }
       

    }
        
}

void apresenta(char *vetor){
    printf("\n\n\n\n\n");
    int i;
    for (i=0; i<10; i++)
        printf("%s  ", vetor[i]);
    printf("\n\n\n\n\n");
}
int main(){ 


    srand((unsigned)time(NULL));
    char vetor[10][10];
    armazenaAleatorios(&vetor);
    
    apresenta(&vetor);

    system("PAUSE");
}