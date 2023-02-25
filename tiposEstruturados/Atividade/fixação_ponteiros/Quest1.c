#include <stdio.h>
#include <stdlib.h>

int main(){


    int x, y, *p;
y = 0;
p = &y;
x = *p;
x = 4;
(*p)++;
--x;
(*p) += x;

printf("valor de X: %d, Y: %d, P: %d\n", x, y, *p);

}

 /*
 
 Na primeira interação y recebe o valor 0                                                         Y= 0 X= ? *P = ?
 na segunda p recebe o endereço de y                                                              Y= 0 X= ? *P = 0
 na terceira x recebe o valor da variavel que p está apontando neste caso 0 que é o valor de y    Y= 0 X= 0 *P = 0
 na quarta x recebe 4                                                                             Y= 0 X= 4 *P = 0
 na quinta a variavel que P esta apontando recebe um incremento                                   Y= 1 X= 4 *P = 1
 na sexta x recebe um decremento                                                                  Y= 1 X= 3 *P = 1
 na setima a variavel que P esta apontando recebe o valor dela mais o valor de x                  Y= 4 X= 3 *P = 4
 
 */