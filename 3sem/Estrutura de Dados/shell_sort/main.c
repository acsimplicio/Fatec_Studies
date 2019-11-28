#include <stdio.h>
#include <stdlib.h>
int arr[5] = {5, 9, 2, 1, 0};

void shellSort (int arr[]) {
    for (int gap = 5/2; gap > 0; gap /= 2) {
        for (int i = gap; i < 5; i++) {
            int aux = arr[i], posAnt = i - gap;
            while (posAnt >= 0 && aux < arr[posAnt]) {
                arr[posAnt + gap] = arr[posAnt];
                posAnt -= gap;
            }
            arr[posAnt + gap] = aux;
        }
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
    shellSort(arr);
    printArr(arr);
    return 0;
}
