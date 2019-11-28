#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    char valor;
    struct celula *prox;
}cel;

void inserirNaPilha (cel *topo, char x) {
    cel *novo;
    novo = malloc(sizeof(cel));
    novo->valor = x;
    novo->prox = topo->prox;
    topo->prox = novo;
}

char removerDaPilha (cel *topo) {
    cel *removida;
    char valorRemovido;
    removida = topo->prox;
    valorRemovido = removida->valor;
    topo->prox = removida->prox;
    free(removida);
    return valorRemovido;
}

int validarString (char string[], cel *topo) {
    int valido, counter = 0;
    char c = string[counter];
    cel *anterior;
    valido = 1;
    while (c != '\0' && valido != 0) {
        anterior = topo->prox;
        if (c == '{' || c == '(') {
            inserirNaPilha(topo, c);
        } else {
            if (anterior != NULL) {
                if ((c == '}' && anterior->valor == '{') ||
                    (c == ')' && anterior->valor == '(')) {
                    removerDaPilha(topo);
                } else {
                    valido = 0;
                }
            } else {
                valido = 0;
            }
        }
        c = string[counter++];
    }
    return valido;
}

int main()
{
    cel *topo;
    topo = malloc(sizeof(cel));
    topo->prox = NULL;

    char string[100];

    printf("Digite uma string para ser validada: \n");
    fflush(stdin);
    gets(string);

    if (validarString(string, topo) == 1) {
        printf("String valida!");
    } else {
        printf("String invalida!");
    }
}
