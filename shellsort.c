#include <stdio.h>

void shellsort(int v[], int n)
{
    /* v: vetor a ser ordenado
       n: tamanho do vetor
     */
    int gap, i, j, temp;
    // gap: distância entre elementos a serem comparados
    // i: índice do elemento atual
    // j: índice do elemento anterior
    // temp: variável auxiliar para troca de valores
    for (gap = n / 2; gap > 0; gap /= 2) // inicializa gap com o tamanho da metade do vetor
        for (i = gap; i < n; i++)        // percorre o vetor iniciando em gap
            for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap)
            {                      // compara o elemento atual com o anterior
                temp = v[j];       // troca os elementos se o anterior for maior que o atual
                v[j] = v[j + gap]; // vetor na posição j recebe o valor do vetor na posição j + gap
                v[j + gap] = temp; // vetor na posição j + gap recebe o valor do vetor na posição j
            }
}

int main()
{
    int v[] = {65, 75, 6, 57, 99, 27, 0, 96}; // Inicializando vetor
    int n = sizeof(v) / sizeof(v[0]);         // recebendo o tamanho do vetor
    shellsort(v, n);                          // chamada da função
    int i;
    for (i = 0; i < n; i++) // for para imprimir vetor ordenado
        printf("%d ", v[i]);
    return 0;
}