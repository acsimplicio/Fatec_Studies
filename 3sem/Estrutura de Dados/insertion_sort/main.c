#include <stdio.h>
#include <stdlib.h>

int arr[5] = {5, 9, 2, 1, 0}; // expected: 0 - 1 - 2 - 5 - 9

void insertSort (int arr[]) {
    for (int i = 1; i < 5; i++) {
        int aux = arr[i], posAnt = i - 1;
        while (posAnt >= 0 && aux < arr[posAnt]) {
            arr[posAnt + 1] = arr[posAnt];
            posAnt--;
        }
        arr[posAnt + 1] = aux;
    }
}

void printArr (int arr[]) {
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    printArr(arr);
    insertSort(arr);
    printArr(arr);
    return 0;
}
