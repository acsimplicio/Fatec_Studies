#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 10

void selectSortVetor(int nums[]) {
    int menor;
    int aux;
    int temp;
    int troca;

    for (aux = 0; aux < TAM; aux++) {
        menor = aux;
        for (temp = aux + 1; temp < TAM; temp++) {
            if (nums[temp] < nums[menor]) {
                menor = temp;
            }
        }

        if (menor != aux) {
            troca = nums[aux];
            nums[aux] = nums[menor];
            nums[menor] = troca;
        }
    }
}

int main()
{
    int nums[TAM] = {8, 5, 7, 6, 9, 4, 1, 2, 3, 0};

    printf("Listagem antes do sort: \n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", nums[i]);
    }

    selectSortVetor(nums);

    printf("\nListagem depois do sort: \n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", nums[i]);
    }
}

