#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int valor;
    struct celula *prox;
} cel;

void adiciona (cel **pi, cel **pt, int x) {
    cel *nova;
    nova = malloc(sizeof(cel));
    nova->valor = x;
    nova->prox = NULL;
    if (*pi == NULL && *pt == NULL) {
        *pi = nova;
        *pt = nova;
    } else {
        (*pt)->prox = nova;
        *pt = nova;
    }
}

void remover (cel **pi, cel **pt) {
    cel *removido;
    removido = *pi;
    if (*pi == NULL && *pt == NULL) {
        printf("Não há elementos para remover.\n");
    } else {
        if (*pi == *pt) {
            *pi = NULL;
            *pt = NULL;
        } else {
            *pi = removido->prox;
        }
        printf("Elemento removido.\n");
    }
    free(removido);
    system("pause");
}

void printFila (cel **pi, cel **pt) {
    cel *navegador;
    navegador = *pi;
    if (*pi != NULL && *pt != NULL) {
        while (navegador != *pt) {
            printf("%d ", navegador->valor);
            navegador = navegador->prox;
        }
        printf("%d ", (*pt)->valor);
    } else {
        printf("Não há elementos na fila.");
    }
}

int main()
{
    cel *i, *t, **pi, **pt;

    i = NULL;
    t = NULL;

    pi = &i;
    pt = &t;

    int opt, x;

    while (opt != 0) {
        printf("1 - Adicionar na fila\n2 - Remover da fila\n3 - Imprimir fila\n0 - Encerrar programa\nO que deseja fazer?");
        scanf("%d", &opt);
        switch (opt) {
            case 1:
               printf("Digite um número:");
               fflush(stdin);
               scanf("%d", &x);
               adiciona(pi, pt, x);
               system("cls");
               break;
            case 2:
                remover(pi, pt);
                system("cls");
                break;
            case 3:
                printFila(pi, pt);
                printf("\n");
                system("pause");
                system("cls");
                break;
            case 0:
                printf("Encerrando.");
                break;
            default:
                printf("Oh nono");
                break;
        }
    }
}
