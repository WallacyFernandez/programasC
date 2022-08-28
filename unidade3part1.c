#include <stdio.h>
#include <stdlib.h>

float function_diametro(float r)
{
    float diametro;
    diametro = 2 * r;
    return diametro;
}
float function_perimetro(float r)
{
    float perimetro;
    perimetro = 2 * 3.14 * r;
    return perimetro;
}
float function_area(float r)
{
    float area;
    area = 3.14 * (r * r);
    return area;
}

int main()
{
    float r, d, p, area, result;

    printf("Digite o rio da circuferencia.\n");
    scanf("%f", &r);

    d = function_diametro(r);
    printf("O DIAMETRO do circulo corresponde a: %.2f\n", d);
    p = function_perimetro(r);
    printf("O PERIMETRO do circulo corresponde a: %.2f cm\n", p);
    area = function_area(r);
    printf("a AREA do circulo corresponde a: %.2f cm quadrados\n", area);
}