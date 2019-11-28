#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    FILE *entrada, *saida;
    char c, nomeEntrada[30], nomeSaida[30], notas[3][3];

    printf("Digite o nome do arquivo de entrada: ");
    fflush(stdin);
    gets(nomeEntrada);
    printf("Digite o nome do arquivo de saida: ");
    fflush(stdin);
    gets(nomeSaida);
    system("cls");

    strcat(nomeEntrada, ".txt");
    strcat(nomeSaida, ".txt");

    entrada = fopen(nomeEntrada, "r");
    if (entrada == NULL) {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    saida = fopen(nomeSaida, "w");
    if (saida == NULL) {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    c = fgetc(entrada);
    for (int i = 0; i < 40; i++) {
        fputc(c, saida);
        c = fgetc(entrada);
    }
    int digitCount = 0, pos = 0;
    while (c != EOF) {
        if (c == ' ') {
            notas[pos][digitCount] = '\0';
            digitCount = 0;
            pos++;
        } else {
            notas[pos][digitCount] = c;
            digitCount++;
        }
        c = fgetc(entrada);
    }
    notas[pos][digitCount] = '\0';
    fclose(entrada);

    char helper[3];
    for (int i = 0; i < 3; i++) {
        for (int y = 0; y < 3; y++) {
            if (atoi(notas[i]) < atoi(notas[y])) {
                strcpy(helper, notas[y]);
                strcpy(notas[y], notas[i]);
                strcpy(notas[i], helper);
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int y = 0; y < 3; y++) {
            fputc(notas[i][y], saida);
        }
        fputc(' ', saida);
    }
    fclose(saida);

    return 0;
}
