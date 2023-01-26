
void increment (int* ponteiroparateste){

(*ponteiroparateste)++;

}

int main(void){

int teste = 5;

printf("%d\n", teste);

increment(&teste);

printf("%d\n", teste);

}