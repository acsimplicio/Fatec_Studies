#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct cidade {
    char nome[40];
    char habitantes[10];
}cidade;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    cidade cidades[10];
    char c;
    int counter = 0;
    FILE *arquivo, *arqsaida;

    arquivo = fopen("arquivo.txt", "r");
    if (arquivo == NULL) {
        printf("Falha na abertura do arquivo\n");
        exit(1);
    }

    c = fgetc(arquivo);
    while (c != EOF) {
        for (int i = 0; i < 40; i++) {
            if (i != 39) {
               cidades[counter].nome[i] = c;
            } else {
               cidades[counter].nome[i] = '\0';
            }
            c = fgetc(arquivo);
        }
        int numCounter = 0;
        while (c != '\n') {
            cidades[counter].habitantes[numCounter] = c;
            c = fgetc(arquivo);
            numCounter++;
        }
        cidades[counter].habitantes[numCounter] = '\0';
        counter++;
        c = fgetc(arquivo);
    }
    fclose(arquivo);

    cidade temp;
    for (int i = 0; i < counter; i++) {
        for (int y = 0; y < counter; y++) {
            if (atof(cidades[i].habitantes) > atof(cidades[y].habitantes)) {
                temp = cidades[y];
                cidades[y] = cidades[i];
                cidades[i] = temp;
            }
        }
    }

    arqsaida = fopen("saida.txt", "w");
    if (arquivo == NULL) {
        printf("Falha na abertura do arquivo\n");
        exit(1);
    }

    for (int i = 0; i < counter; i++) {
        for (int y = 0; y < strlen(cidades[i].nome); y++) {
            fputc(cidades[i].nome[y], arqsaida);
        }

        for (int j = 0; j < strlen(cidades[i].habitantes); j++) {
            fputc(cidades[i].habitantes[j], arqsaida);
        }
        fputc('\n', arqsaida);
    }
    fclose(arqsaida);
    printf("Fim\n");

    return 0;
}
