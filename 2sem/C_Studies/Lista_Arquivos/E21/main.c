#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct{
    char nome[40];
    float nota;
}DATA;

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

    DATA aluno[n];

    for(int i = 0; i < n; i++){
        printf("Informe o nome do %dº aluno: ",i+1);
        fflush(stdin);
        gets(aluno[i].nome, 40, stdin);
        printf("Informe a nota do %dº aluno: ",i+1);
        fflush(stdin);
        scanf("%f",&aluno[i].nota);
        system("cls");
    }

    FILE *arq;

    arq = fopen("arq.dat","wb+");
    checkAberturaArquivo(arq);

    for(int i = 0; i < n; i++){
        fwrite(&aluno, sizeof(DATA), 1, arq);
    }

    DATA r_aluno[n];

    rewind(arq);

    for(int i = 0; i < n; i++){
        fread(&r_aluno[i], sizeof(r_aluno), 1, arq);
        printf("Nome: %s Nota: %.2f\n", r_aluno[i].nome, r_aluno[i].nota);
    }


    fclose(arq);
}
