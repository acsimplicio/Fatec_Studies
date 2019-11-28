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

    int i, n;

    printf("Informe o numero de alunos da disciplina: ");
    fflush(stdin);
    scanf("%d",&n);
    system("cls");

    float nota[n];
    char nome[n][40];

    for (int i = 0; i < n; i++){
        printf("Informe o nome do %dº aluno: ",i + 1);
        fflush(stdin);
        gets(nome[i]);
        printf("Informe a nota do %dº aluno: ",i + 1);
        fflush(stdin);
        scanf("%f",&nota[i]);
        system("cls");
    }

    FILE *arq;

    arq = fopen("arq.txt","w");
    checkAberturaArquivo(arq);

    for (int i=0; i < n; i++){
        fprintf(arq,"Nome: %s | Nota: %.2f\n",nome[i], nota[i]);
    }
    fclose (arq);
    printf("Arquivo salvo com sucesso!\n");
    system("pause");

    return 0;
}
