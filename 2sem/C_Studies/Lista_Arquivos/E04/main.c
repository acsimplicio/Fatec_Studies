#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char arquivo[30], c, vogais[5] = {'a', 'e', 'i', 'o', 'u'};
    int vogalCount = 0, spaceCount = 0, totalCount = 0;
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
        for (int i = 0; i < 5; i++) {
            if (c == vogais[i]) {
                vogalCount++;
            }
        }
        if (c == ' ') {
            spaceCount++;
        }
        totalCount++;
        c = fgetc(file);
    }
    fclose(file);
    printf("\nNúmero de vogais: %d\nNúmero de consoantes: %d", vogalCount, totalCount - (vogalCount + spaceCount));

    return 0;
}
