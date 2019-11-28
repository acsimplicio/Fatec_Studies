#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    FILE *file;

    // Escreve conte�do no arquivo
    file = fopen("arq.txt", "w");
    if (file == NULL) {
        printf("Erro na abertura do arquivo.\n");
        system("pause");
        exit(1);
    }

    printf("Digite o que quiser, aperte 0 ao final da frase para parar.\n");
    char c ;
    while (c != '0') {
        fflush(stdin);
        c = getche();
        if (c != '0') {
            fputc(c, file);
        }
    }
    fclose(file);
    printf("\nArquivo salvo. pressione ENTER para prosseguir.\n");
    getch();
    system("cls");

    // L� e imprime conte�do
    file = fopen("arq.txt", "r");

    printf("Conte�do digitado: \n");
    c = fgetc(file);
    while (c != EOF) {
        printf("%c", c);
        c = fgetc(file);
    }
    fclose(file);

    return 0;
}
