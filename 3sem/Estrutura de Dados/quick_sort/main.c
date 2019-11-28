#include <stdio.h>
#include <stdlib.h>

int arr[9] = {3, 9, 2, 8, 7, 1, 4, 6, 5}; //expected: 3 2 1 4 5 9 8 6 7
int pivot;

void quickSort(int arr[], int menor, int tam) {
    if (menor < tam) {
        pivot = particiona(arr, menor, tam);
        quickSort(arr, menor, pivot - 1);
        quickSort(arr, pivot + 1, tam);
    }
}

int particiona (int arr[], int menor, int tam) {
    int pivot = arr[tam - 1], posMenor = (menor - 1), aux;
    for (int i = menor; i < tam; i++) {
        if (arr[i] < pivot) {
            posMenor++;
            aux = arr[i];
            arr[i] = arr[posMenor];
            arr[posMenor] = aux;
        }
    }
    posMenor++;
    aux = arr[posMenor];
    arr[posMenor] = pivot;
    arr[tam - 1] = aux;
    return posMenor;
}

void printArr(int arr[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    printArr(arr, 9);
    quickSort(arr, 0, 9);
    printArr(arr, 9);
    return 0;
}
