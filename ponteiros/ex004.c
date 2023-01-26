int soma(int a, int b){

    return a + b;
}
int mult(int a, int b){

    return a * b;
}
int calcula(int x, int y, int (*operacao)(int, int)){

    return (*operacao)(x,y);
}

int main(){

    int resultado = calcula(5, 3, mult);
    printf("%d\n", resultado);
    return;
}