#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char arquivo[30], cToFind, c;
    int caracCount = 0;
    FILE *file;

    printf("Digite o nome do arquivo (Exemplo: arquivo.txt): \n");
    fflush(stdin);
    gets(arquivo);
    system("cls");

    printf("Agora digite um caracter, por favor: \n");
    scanf("%c", &cToFind);

    file = fopen(arquivo, "r");
    if (file == NULL) {
        printf("Erro na abertura do arquivo.\n");
        system("pause");
        exit(1);
    }

    c = fgetc(file);
    while (c != EOF) {
        if (c == cToFind) {
            caracCount++;
        }
        c = fgetc(file);
    }
    fclose(file);
    printf("\nNumero de vezes que %c ocorre: %d", cToFind, caracCount);

    return 0;
}
