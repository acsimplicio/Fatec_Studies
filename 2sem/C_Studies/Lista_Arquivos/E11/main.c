#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nomeArquivo[35], palavra[30], formaPalavra[30], c;
    int tamanhoPalavra = 0, palavraCounter = 0;
    FILE *arquivo;

    printf("Digite o nome do arquivo para leitura - Sem extensão:\n");
    gets(nomeArquivo);
    system("cls");

    printf("Digite a palavra que deve ser procurada no arquivo:\n");
    gets(palavra);
    system("cls");

    strcat(nomeArquivo, ".txt");

    arquivo = fopen(nomeArquivo, "r");
    c = fgetc(arquivo);
    while (c != EOF) {
        if (c != ' ') {
            formaPalavra[tamanhoPalavra] = c;
            tamanhoPalavra++;
        } else {
            formaPalavra[tamanhoPalavra] = '\0';
            if (strcmp(formaPalavra, palavra) == 0) {
                palavraCounter++;
            }
            tamanhoPalavra = 0;
        }
        c = fgetc(arquivo);
    }

    formaPalavra[tamanhoPalavra] = '\0';
    if (strcmp(formaPalavra, palavra) == 0) {
        palavraCounter++;
    }

    printf("Número de vezes que a palavra aparece: %d", palavraCounter);
    fclose(arquivo);

    return 0;
}
