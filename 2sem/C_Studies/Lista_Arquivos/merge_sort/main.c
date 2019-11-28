#include <stdio.h>
#include <stdlib.h>

int arr[10] = {9, 5, 8, 4, 1, 2, 7, 0, 6, 3}; // expected: 0 - 1 - 2 - 3 - 4 - 5 - 6 - 7 - 8 - 9

void mergeSort(int arr[], int inicio, int fim) {
    int meio;
    if (inicio < fim) {
        meio = (inicio + fim) / 2;
        mergeSort(arr, inicio, meio);
        mergeSort(arr, meio + 1, fim);
        merge(arr, inicio, meio, fim);
    }
}

void merge(int arr[], int inicio, int meio, int fim) {
    int arrOrdenado[10], tamanho, posicaoArrUm, posicaoArrDois, fimPrimeiro = 0, fimSegundo = 0;
    tamanho = (fim - inicio) + 1;
    posicaoArrUm = inicio;
    posicaoArrDois = meio + 1;
    for (int i = 0; i < tamanho; i++) {
        if (!fimPrimeiro && !fimSegundo) {
            if (arr[posicaoArrUm] < arr[posicaoArrDois]) {
                arrOrdenado[i] = arr[posicaoArrUm];
                posicaoArrUm++;
            } else {
                arrOrdenado[i] = arr[posicaoArrDois];
                posicaoArrDois++;
            }

            if (posicaoArrUm > meio) fimPrimeiro = 1;
            if (posicaoArrDois > fim) fimSegundo = 1;
        } else {
            if (!fimPrimeiro) {
                arrOrdenado[i] = arr[posicaoArrUm];
                posicaoArrUm++;
            } else {
                arrOrdenado[i] = arr[posicaoArrDois];
                posicaoArrDois++;
            }
        }
    }
    int x, y;
    for (x = 0, y = inicio; x < tamanho; x++, y++) {
        arr[y] = arrOrdenado[x];
    }
}

void printArr(int arr[]) {
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    printArr(arr);
    mergeSort(arr, 0, 9);
    printArr(arr);
    return 0;
}
