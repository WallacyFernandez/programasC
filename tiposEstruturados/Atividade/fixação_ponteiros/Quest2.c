#include <stdio.h>
#include <stdlib.h>




int main() {


int x, *p;
x = 100;
p = x;
printf("Valor de p = %p\tValor de *p = %d", p, *p);


}

/*

O programa tenta exibir o endereço e o valor de x porém na linha 12 
falta o operador de endereço em x que no caso seria o "&"" portando dando erro de compilação



*/