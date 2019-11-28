#include <stdio.h>
#include <stdlib.h>

int printFila (int fila[], int fim, int inicio) {
    for (int i = inicio; i < fim; i++) {
        printf("%d ", fila[i]);
    }
}

void adicionaFila (int *pi, int *pt, int n, int fila[], int valor) {
    if ( *pt != n ) {
        fila[(*pt)++] = valor;
    } else {
        printf("Fila cheia!");
    }
}

int removerFila (int *pi, int *pt, int fila[]) {
    int aux;
    if ( *pi != *pt ) {
        aux = fila[(*pi)++];
    } else {
        printf("Fila vazia!");
    }
    return aux;
}

int main()
{
    const n = 5;
    int fila[n], i = 0, t = 0, *pi, *pt;

    pi = &i;
    pt = &t;

    adicionaFila(pi, pt, n, fila, 2);
    adicionaFila(pi, pt, n, fila, 3);
    printf("Fila completa: ");
    printFila(fila, t, i);
    removerFila(pi, pt, fila);
    printf("\nFila depois de remover um elemento: ");
    printFila(fila, t, i);
}
