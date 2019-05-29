#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char arquivo[30], arquivocpy[34], c, vogais[5] = {'a', 'e', 'i', 'o', 'u'};
    FILE *file;
    FILE *cpyfile;

    printf("Digite o nome do arquivo - Exemplo: arquivo (sem extensão): \n");
    fflush(stdin);
    gets(arquivo);

    strcpy(arquivocpy, arquivo);
    strcat(arquivo, ".txt");
    strcat(arquivocpy, "cpy.txt");

    file = fopen(arquivo, "r");
    cpyfile = fopen(arquivocpy, "w");

    if (file == NULL) {
        printf("Erro na abertura do arquivo.\n");
        system("pause");
        exit(1);
    }

    if (cpyfile == NULL) {
        printf("Erro na abertura do arquivo.\n");
        system("pause");
        exit(1);
    }

    c = tolower(fgetc(file));
    while (c != EOF) {
        int isVogal = 0;
        for (int i = 0; i < 5; i++) {
            if ( c == vogais[i] ) {
                isVogal = 1;
            }
        }
        if (isVogal == 1) {
            fputc('*', cpyfile);
        } else {
            fputc(c, cpyfile);
        }
        c = tolower(fgetc(file));
    }
    printf("\nFim.");
    fclose(file);
    fclose(cpyfile);

    return 0;
}
