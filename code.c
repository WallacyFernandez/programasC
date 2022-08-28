/*) Crie um tipo estruturado para armazenar dados de um ingresso. Uma estrutura deste tipo possui os
seguintes campos: preço, local e atração.
a) Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Ingresso e
preencha seus campos com valores fornecidos pelo usuário via teclado. Protótipo: void
preenche(Ingresso* i)*/

#include<stdio.h>
#include<stdlib.h>

typedef struct ingresso{
    float preco;
    char local[100];
    char atracao[100];
}ingresso;
// prototipo da funcao

int preenche(ingresso *i){

    printf("Digite o preco: ");
    scanf("%f", &i->preco);
    printf("Digite o local: ");
    scanf(" %[^\n]", i->local);
    printf("Digite a atracao: ");
    scanf(" %[^\n]", i->atracao);

}
    void imprimir(ingresso *i){
     printf("\n\tExibindo evento\n");
    printf("preco: %.2f\n", i->preco);
    printf("local: %s\n", i->local);
    printf("atracao: %s\n", i->atracao);

}

void altera_preco(ingresso *i, float valor){

  
    i -> preco = valor;
    
}


int main (void){
 
 ingresso n1;
 int n2;
 float valor;

 preenche(&n1);
 imprimir(&n1);

printf("altera preco do evento? (1) sim ou (2) nao\n");
scanf("%d",&n2);
if(n2 == 1){
 printf("Digite o novo valor: ");
 scanf("%f", &valor);
 altera_preco(&n1, valor);
 printf("\n");
 imprimir(&n1);
}



 
 
return 0;
    }