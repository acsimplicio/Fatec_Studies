#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int valor;
    struct celula *prox;
} cel;

void inserirNaPilha (cel *topo, int x) {
    cel *novo;
    novo = malloc(sizeof(cel));
    novo->valor = x;
    novo->prox = topo->prox;
    topo->prox = novo;
}

void removerDaPilha (cel *topo) {
    cel *removida;
    removida = topo->prox;
    topo->prox = removida->prox;
    free(removida);
}

void imprimirPilha (cel *topo) {
    cel *p = topo->prox;
    if (p != NULL) {
        while (p != NULL) {
            printf("%d ", p->valor);
            p = p->prox;
        }
    } else {
        printf("Pilha vazia!");
    }
}

int main()
{
    cel *topo;
    topo = malloc(sizeof(cel));
    topo->prox = NULL;

    printf("Sem inserir:\n");
    imprimirPilha(topo);

    inserirNaPilha(topo, 2);
    printf("\nPilha depois de inserir o 2: \n");
    imprimirPilha(topo);

    inserirNaPilha(topo, 3);
    printf("\nPilha depois de inserir o 3: \n");
    imprimirPilha(topo);

    inserirNaPilha(topo, 4);
    printf("\nPilha depois de inserir o 4: \n");
    imprimirPilha(topo);
    removerDaPilha(topo);

    printf("\nPilha depois de remover um elemento: \n");
    imprimirPilha(topo);
}
