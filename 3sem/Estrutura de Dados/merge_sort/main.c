#include <stdio.h>
#include <stdlib.h>

int arr[5] = {5, 4, 1, 2, 0, 3}; // expected: 0 - 1 - 2 - 3 - 4 - 5

void sort(int arr[], int inicio, int fim) {
    int meio;
    if (inicio < fim) {
        meio = (inicio + fim) / 2;
        sort(arr, inicio, meio);
        sort(arr, meio + 1, fim);
        merge(arr, inicio, meio, fim);
    }
}

void merge(int arr[], int inicio, int meio, int fim) {
    int tamanho, posicaoArrUm, posicaoArrDois, i;
    tamanho = (fim - inicio) + 1;
    int *arrOrdenado = (int *)malloc(sizeof(int)*tamanho);
    posicaoArrUm = inicio;
    posicaoArrDois = meio + 1;
    for (i = 0; i < tamanho && posicaoArrUm <= meio && posicaoArrDois <= fim; i++) {
        if (arr[posicaoArrUm] < arr[posicaoArrDois]) {
            arrOrdenado[i] = arr[posicaoArrUm];
            posicaoArrUm++;
        } else {
            arrOrdenado[i] = arr[posicaoArrDois];
            posicaoArrDois++;
        }
    }
    for (int y = posicaoArrUm; y <= meio; y++) {
        arrOrdenado[i++] = arr[y];
    }
    for (int y = posicaoArrDois; y <= fim; y++) {
        arrOrdenado[i++] = arr[y];
    }
    int x, y;
    for (x = 0, y = inicio; x < tamanho; x++, y++) {
        arr[y] = arrOrdenado[x];
    }
}

void printArr(int arr[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    printArr(arr, 5);
    sort(arr, 0, 4);
    printArr(arr, 5);
    return 0;
}
