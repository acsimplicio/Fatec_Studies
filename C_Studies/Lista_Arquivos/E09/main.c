#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char arquivo[30], segundoArquivo[30], saida[30], c;
    FILE *file, *secondFile, *exitfile;

    printf("Digite o nome do arquivo de entrada numero 1 - Exemplo: arquivo (sem extensão): \n");
    fflush(stdin);
    gets(arquivo);

    printf("Digite o nome do arquivo de entrada numero 2 - Exemplo: arquivo (sem extensão): \n");
    fflush(stdin);
    gets(segundoArquivo);

    printf("Digite o nome do arquivo de saida - Exemplo: arquivo (sem extensão): \n");
    fflush(stdin);
    gets(saida);

    system("cls");

    strcat(arquivo, ".txt");
    strcat(segundoArquivo, ".txt");
    strcat(saida, ".txt");

    file = fopen(arquivo, "r");
    secondFile = fopen(segundoArquivo, "r");
    exitfile = fopen(saida, "w");

    if (file == NULL) {
        printf("Erro na abertura do arquivo.\n");
        system("pause");
        exit(1);
    }

    if (secondFile == NULL) {
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
        fputc(c, exitfile);
        c = fgetc(file);
    }
    fclose(file);

    fputc('\n', exitfile);

    c = fgetc(secondFile);
    while (c != EOF) {
        fputc(c, exitfile);
        c = fgetc(secondFile);
    }
    fclose(secondFile);
    fclose(exitfile);
    printf("Fim\n");

    return 0;
}
