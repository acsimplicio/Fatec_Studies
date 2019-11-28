#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void checkAberturaArquivo (FILE *arq) {
    if (arq == NULL) {
        printf("Houve um erro na abertura do arquivo.");
        exit(1);
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vet[10], i, j;
    char aux[100];
    FILE *arq;

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        fflush(stdin);
        scanf("%d", &vet[i]);
    }
    system("cls");

    arq = fopen("arq.txt","w");
    checkAberturaArquivo(arq);

    for (int i = 0; i < 10; i++) {
        itoa(vet[i], aux, 2);
        printf("%s\n", aux);
        for (int j = 0; j < strlen(aux); j++) {
            fputc(aux[j], arq);
        }
        fputc('\n', arq);
    }
    fclose(arq);
}
