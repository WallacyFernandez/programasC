int main(){

    int x, y, *p;
y = 0;
p = &y;
x = *p;
x = 4;
(*p)++;
--x;
(*p) += x;

printf("Valor de x = %d, valor de y = %d, valor de p = %d\n", x, y, *p);
}