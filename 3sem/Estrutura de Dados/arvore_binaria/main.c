#include <stdio.h>
#include <stdlib.h>

int itens[6] = {5, 9, 15, 2, 17, 0};

typedef struct celula {
    int valor;
    struct cel *esq;
    struct cel *dir;
} cel;

cel* novoNodulo (int x) {
    cel *raiz;
    raiz = malloc(sizeof(cel));
    raiz->valor = x;
    raiz->dir = NULL;
    raiz->esq = NULL;
    return raiz;
}

void imprime(cel *raiz) {
    if (raiz != NULL) {
        imprime(raiz->esq);
        printf("%d ", raiz->valor);
        imprime(raiz->dir);
    }
}

cel* inserir (int x, cel *nodulo) {
    if (nodulo == NULL) {
        return novoNodulo(x);
    }

    if (nodulo->valor > x) {
        nodulo->esq = inserir(x, nodulo->esq);
    }

    if (nodulo->valor < x) {
        nodulo->dir = inserir(x, nodulo->dir);
    }

    return nodulo;
}

cel* encontraCandidato (cel *nodulo) {
    cel *temp = nodulo->esq;
    while (temp->dir != NULL) {
        temp = temp->dir;
    }

    return temp;
}

cel* remover (int nBusca, cel *nodulo) {
    if (nodulo == NULL) {
        return nodulo;
    }

    if (nBusca < nodulo->valor) {
        nodulo->esq = remover(nBusca, nodulo->esq);
    } else if (nBusca > nodulo->valor) {
        nodulo->dir = remover(nBusca, nodulo->dir);
    } else {
        cel *noduloTemp;
        if (nodulo->dir == NULL) {
            noduloTemp = nodulo->esq;
            free(nodulo);
            return noduloTemp;
        } else if (nodulo->esq == NULL) {
            noduloTemp = nodulo->dir;
            free(nodulo);
            return noduloTemp;
        } else {
            cel *candidato = encontraCandidato(nodulo);
            nodulo->valor = candidato->valor;
            nodulo->esq = remover(candidato->valor, nodulo->esq);
            return nodulo;
        }
    }

}

int main()
{
    cel *raiz = novoNodulo(itens[0]);
    inserir(itens[1], raiz);
    inserir(itens[2], raiz);
    inserir(itens[3], raiz);
    inserir(itens[4], raiz);
    inserir(itens[5], raiz);
    imprime(raiz);
    printf("\nRemove o 0:\n");
    remover(0, raiz);
    imprime(raiz);
    printf("\nRemove o 15:\n");
    remover(15, raiz);
    imprime(raiz);
    printf("\nRemove o 5:\n");
    remover(5, raiz);
    imprime(raiz);
    return 0;
}
