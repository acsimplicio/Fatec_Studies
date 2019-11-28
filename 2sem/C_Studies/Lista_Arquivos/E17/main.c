#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void checkAberturaArquivo (FILE *arq) {
    if (arq == NULL) {
        printf("Houve um erro na abertura do arquivo.");
        exit(1);
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, j, cont = 0, x, y, z;
    char vet[100], aux;
    FILE *arq, *saida;

    arq = fopen("arq.txt", "r");
    checkAberturaArquivo(arq);

    aux = fgetc(arq);
    while (aux != EOF) {
        vet[cont] = aux;
        aux = fgetc(arq);
        cont++;
    }
    x = vet[0]-48;
    y = vet[2]-48;
    z = vet[4]-48;

    int matriz[x][y];

    for (int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++){
            matriz[i][j] = 1;
        }
    }
    int a = 6;
    for(int i = 0; i < z; i++){
        matriz[vet[a]-48][vet[a+2]-48] = 0;
        a += 4;
    }

    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
    fclose (arq);

    saida = fopen("matriz_saida.txt", "w");
    if (saida == NULL){
        printf("Erro durante a abertura do arquivo!\n");
        system("pause");
        exit(1);
    }

    int matriz_char[x][y];

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            matriz_char[i][j] = matriz[i][j]+48;
            fputc(matriz_char[i][j], saida);
        }
        fputc('\n', saida);
    }
    fclose(saida);
}
