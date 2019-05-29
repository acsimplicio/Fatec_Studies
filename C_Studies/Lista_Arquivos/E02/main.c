#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char arquivo[30], c;
    int lineCount = 0;
    FILE *file;

    printf("Digite o nome do arquivo (Exemplo: arquivo.txt): \n");
    fflush(stdin);
    gets(arquivo);

    file = fopen(arquivo, "r");
    if (file == NULL) {
        printf("Erro na abertura do arquivo.\n");
        system("pause");
        exit(1);
    }

    c = fgetc(file);
    while (c != EOF) {
        if (c == '\n') {
            lineCount += 1;
        }
        c = fgetc(file);
    }
    fclose(file);
    printf("\nNumero de linhas: %d", lineCount + 1);

    return 0;
}
