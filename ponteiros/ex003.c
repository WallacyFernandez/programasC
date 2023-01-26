void calculo_distancia(float* distancia, float x1, float y1, float x2, float y2){

*distancia = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));


}

int main(){

float distancia, x1, y1, x2, y2;

printf("digite o valor de x1: ");
scanf("%f", &x1);
printf("digite o valor de x2: ");
scanf("%f", &x2);
printf("digite o valor de y1: ");
scanf("%f", &y1);
printf("digite o valor de y2: ");
scanf("%f", &y2);

calculo_distancia(&distancia, x1, y1, x2, y2);

printf("A distancia entre os pontos eh: %.2f ", distancia);

}