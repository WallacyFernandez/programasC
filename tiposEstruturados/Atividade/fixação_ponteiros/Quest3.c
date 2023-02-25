#include <stdio.h>

int main(void) {


 int a, b, c, d;
 int *p1;     
 int *p2 = &a;
 int *p3 = &c;
 p1 = p2;
 *p2 = 10;
 b = 20;
 int **pp;
 pp = &p1;
 *p3 = **pp;
 int *p4 = &d;
 *p4 = b + (*p1)++;
 printf("%d\t%d\t%d\t%d\n", a, b, c, d);
 return 0;




}

/*

linha 6: a declaração das variaveis
linha 7, 8 e 9: declaração de ponteiros sendo que p2 recebe o endereço de a e p3 recebe o de c.
linha 10: p1 recebe o endereço de p2
linha 11: a variavel que estar sendo apontada por p2 recebe o valor 10
linha 12: a variavel b recebe o valor 20
linha 13: declaraçao de ponteiro para ponteiro do tipo int
linha 14: ponteiro para ponteiro recebe o endereço de p1
linha 15: variavel que esta sendo apontada por p3 recebe o valor da variavel que estar sendo apontada pelo endereço armazenado em pp.
linha 16: declaração de ponteiro p4 recebendo o endereço de d
linha 17: variavel que esta sendo apontada por p4 recebe o valor b mais o valor da variavel que estar sendo apontada por p1 com incremento
linha 18: print na tela dos variaveis 

linha 6: a = ? b = ? c = ? d = ?

linha 7, 8 e 9: a = ? b = ? c = ? d = ?
                 p1 = ? p2 = a p3 = c
                  *p1 = ? *p2 = ? *p3 = ?

linha 10: a = ? b = ? c = ? d = ?
                 p1 = a p2 = a p3 = c
                  *p1 = ? *p2 = ? *p3 = ?


linha 11: a = 10 b = ? c = ? d = ?
                 p1 = a p2 = a p3 = c
                  *p1 = 10 *p2 = 10 *p3 = ?


linha 12: a = 10 b = 20 c = ? d = ?
                 p1 = a p2 = a p3 = c
                  *p1 = 10 *p2 = 10 *p3 = ?


linha 13: a = 10 b = 20 c = ? d = ?
                 p1 = a p2 = a p3 = c
                  *p1 = 10 *p2 = 10 *p3 = ?
                   pp = ? *pp = ?

linha 14: a = 10 b = 20 c = ? d = ?
                 p1 = a p2 = a p3 = c
                  *p1 = 10 *p2 = 10 *p3 = ?
                   pp = p1 *pp = a

linha 15: a = 10 b = 20 c = 10 d = ?
                 p1 = a p2 = a p3 = c
                  *p1 = 10 *p2 = 10 *p3 = 10
                   pp = p1 *pp = a

linha 16: a = 10 b = 20 c = 10 d = ?
                 p1 = a p2 = a p3 = c p4 = d
                  *p1 = 10 *p2 = 10 *p3 = 10 *p4 = ?
                   pp = p1 *pp = a

linha 17: a = 11 b = 20 c = 10 d = 30
                 p1 = a p2 = a p3 = c p4 = d
                  *p1 = 11 *p2 = 11 *p3 = 10 *p4 = 30
                   pp = p1 *pp = a

linha 18: print na tela dos variaveis 


obs: A = 11      B = 20      C = 10      D = 30

*/