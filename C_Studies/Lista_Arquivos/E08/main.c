#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char arquivo[30], saida[30], c;
    FILE *file;
    FILE *exitfile;

    printf("Digite o nome do arquivo de entrada - Exemplo: arquivo (sem extensão): \n");
    fflush(stdin);
    gets(arquivo);

    printf("Digite o nome do arquivo de saida - Exemplo: arquivo (sem extensão): \n");
    fflush(stdin);
    gets(saida);

    strcat(arquivo, ".txt");
    strcat(saida, ".txt");

    file = fopen(arquivo, "r");
    exitfile = fopen(saida, "w");

    if (file == NULL) {
        printf("Erro na abertura do arquivo.\n");
        system("pause");
        exit(1);
    }

    if (exitfile == NULL) {
        printf("Erro na abertura do arquivo.\n");
        system("pause");
        exit(1);
    }

    c = fgetc(file);
    while (c != EOF) {
        fputc(toupper(c), exitfile);
        c = fgetc(file);
    }
    printf("\nFim.");
    fclose(file);
    fclose(exitfile);

    return 0;
}
