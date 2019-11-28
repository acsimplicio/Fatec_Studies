#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int num;
    struct cel *prox;
} cel;

void inserir (cel *p, int x) {
    cel *novo;
    novo = malloc(sizeof(cel));
    novo->num = x;
    novo->prox = p->prox;
    p->prox = novo;
}

void populaLista (int len, int list[],  cel *lst) {
    for (int i = 0; i < len; i++) {
        inserir(lst, list[i]);
    }
}

void imprime (cel *lst) {
    cel *p;
    for(p = lst->prox; p != NULL; p = p->prox) {
        printf("%d ", p->num);
    }
}

void remover (cel *lst) {
    cel *removida;
    removida = lst->prox;
    lst->prox = removida->prox;
}

void buscaEImprime (cel *lst, int x) {
    cel *p;
    p = lst->prox;
    while (p->prox != NULL && p->num != x) {
        p = p->prox;
    }
    printf("%d\n", p->num);
}

void buscaERemove (cel *lst, int x) {
    cel *anterior, *removida;
    anterior = lst;
    removida = lst->prox;
    while (removida->prox != NULL && removida->num != x) {
        anterior = removida;
        removida = removida->prox;
    }
    anterior->prox = removida->prox;
}

void alternaLista (cel *lstPar, cel *lstImpar) {
    cel *par;
    cel *impar;
    par = lstPar->prox;
    impar = lstImpar->prox;
    while (par->prox != NULL) {
        cel *tempPar, *tempImpar;
        tempPar = par->prox;
        tempImpar = impar->prox;
        par->prox = impar;
        impar->prox = par;

    }
}

int main()
{
    int list[5] = {1, 2, 3, 4, 5};
    int listPar[3] = {2, 4, 6};
    int listImpar[3] = {1, 3, 5};

    cel *lst = malloc(sizeof(cel));
    lst->prox = NULL;

    cel *lstPar = malloc(sizeof(cel));
    lstPar->prox = NULL;

    cel *lstImpar = malloc(sizeof(cel));
    lstImpar->prox = NULL;

    //populaLista(5, list, lst);

    //printf("Array inserido como lista:\n");
    //imprime(lst);

    //printf("\nArray com elemento removido:\n");
    //remover(lst);
    //imprime(lst);

    //printf("\nImprime elemento buscado:\n");
    //buscaEImprime(lst, 1);

    //printf("\Remove elemento buscado:\n");
    //buscaERemove(lst, 1);
    //imprime(lst);

    printf("Popula lista par e impar:\n");
    populaLista(3, listPar, lstPar);
    imprime(lstPar);
    printf("\n");
    populaLista(3, listImpar, lstImpar);
    imprime(lstImpar);
}
