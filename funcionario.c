#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct funcionario{
    char nome[100];
    int idade; 
    float salario;
}Funcionario;

int main(void){
system("cls");

    Funcionario vetor[3]; 
    int contador; 
    
    printf("\n----Digite os dados referentes aos funcionarios--- \n\n");
    
    for(contador=0; contador<3; contador++){


        printf("\nDados do funcionario(%d)\n", contador+1);
        printf("Digite o nome do funcionario:\n");
        fgets(vetor[contador].nome, 100, stdin);

        printf("Digite a idade do funcionario\n");
        scanf("%d%*c", &vetor[contador].idade);

        printf("Digite o salario do funcionario\n");
        scanf("%f%*c", &vetor[contador].salario);       
    }

   system("cls");

    for(contador=0; contador<3; contador++){

        printf("\nfuncionario(%d)\n", contador+1);
        printf("Nome: %s", vetor[contador].nome);
        printf("Idade: %d\n", vetor[contador].idade);
        printf("Salario: R$ %.2f\n", vetor[contador].salario);       
    
	}
    return 0; 
}