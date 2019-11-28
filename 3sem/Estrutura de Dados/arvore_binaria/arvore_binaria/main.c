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

cel* buscaMenorValor (cel *nodulo) {
    cel *noduloTemp = nodulo;
    if (noduloTemp && noduloTemp->esq != NULL) {
        noduloTemp = buscaMenorValor(nodulo->esq);
    } else {
        return noduloTemp;
    }
}

cel* remover(int nBusca, cel *nodulo) {
    if (nodulo == NULL) {
        return nodulo;
    }

    if (nBusca < nodulo->valor) {
        nodulo->esq = remover(nBusca, nodulo->esq);
    } else if (nBusca > nodulo->valor){
        nodulo->dir = remover(nBusca, nodulo->dir);
    } else {
        printf("\nAchou o nodulo, o valor: %d\n", nodulo->valor);

        if (nodulo->dir == NULL) {
            cel *noduloTemp = nodulo->esq;
            free(nodulo);
            return noduloTemp;
        } else if (nodulo->esq == NULL) {
            cel *noduloTemp = nodulo->dir;
            free(nodulo);
            return noduloTemp;
        }

        cel *noduloMenor = buscaMenorValor(nodulo);
        nodulo->valor = noduloMenor->valor;
        free(noduloMenor);
        return nodulo;
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
    remover(itens[0], raiz);
    imprime(raiz);
    return 0;
}
