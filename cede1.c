/*Crie um programa para calcular a área e o perímetro de um hexágono. O seu programa 
deve implementar uma função chamada calcula_hexagono que calcule a área e o 
perímetro de um hexágono regular de lado l. A função deve obedecer ao seguinte 
protótipo: void calcula_hexagono(float l, float *area, float *perimetro); A área e o 
perímetro de um hexágono regular são dados, respectivamente, por:
𝐴 =
3𝑙
2√3
2
𝑃 = 6𝑙
Para os cálculos, utilize as funções sqrt e pow da biblioteca math.h. Em seguida, crie a 
função principal do programa e utilize a função calcula_hexagono para calcular a área e 
o perímetro de um hexágono de lado l informado pelo usuário.*/

#include<stdio.h>//biblioteca
#include<math.h>//biblioteca para as operacoes matematicas 
#include<stdlib.h>//biblioteca serve para as funcoes nesse caso nos estamos usando o system

// funcao com ponteiros para alterar o conteudo das variaveis aerea e perimetro.
void calcula_hexagono(float l, float *area, float *perimetro){ // prototipo da funcao 

*area = 3 * pow(l, 2) * sqrt(3) / 2; // formula para encontrar a area

*perimetro = 6 * l; // a formula para encontar os perimetro
}

int main (void){ //funcao principal

system("cls"); //comandos de limpar terminal

float l, area, perimetro; //declaracao das variaveis l, area e perimetro

printf("informe o lado\n"); // perdi ao usuario digitar o lado 
scanf("%f", &l);//o scanf  faz a leitura do que usario digitou e depois 
// guarda na variavel que esta indicado ou seja  l.

calcula_hexagono(l, &area, &perimetro);
// retorna a funcao para int main onde ela pegar as informacoes do usuario e logo apos aplica na formula indicada
 
printf("area: %.2f\n", area); // resultado final valor com o valor da area
printf("perimetro: %.2f\n", perimetro); //resultado final com valor do perimetro 
 
return 0;
}