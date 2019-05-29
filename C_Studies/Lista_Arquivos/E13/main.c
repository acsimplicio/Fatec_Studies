#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[30], telefone[15];
    FILE *arquivo;

    arquivo = fopen("arquivo.txt", "w");

    while (strcmp(telefone, "0") != 0) {
        printf("Nome do indivíduo: ");
        fflush(stdin);
        gets(nome);
        printf("Telefone do indivíduo: ");
        fflush(stdin);
        gets(telefone);

        if (strcmp(telefone, "0") != 0) {
            for (int i = 0; i < strlen(nome); i++) { fputc(nome[i], arquivo); }
            fputc('\n', arquivo);
            for (int i = 0; i < strlen(telefone); i++) { fputc(telefone[i], arquivo); }
            fputc('\n', arquivo);
        }

        system("cls");
    }
    fclose(arquivo);
    printf("Fim. Arquivo criado.\n");

    return 0;
}
