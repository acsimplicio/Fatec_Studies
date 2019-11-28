#include <stdio.h>
#include <stdlib.h>

typedef struct aluno {
    char matricula[10], sobrenome[30];
    int ano_nasc;
}al;

void checkAberturaArquivo(FILE *arq) {
    if (arq == NULL) {
        printf("Erro na abertura do arquivo.");
        exit(1);
    }
}

int main()
{
    FILE *saida, *arq_qtd;
    int qtd = 0, userQtd;
    char import;

    al *alunos, *actual_al;

    printf("Gostaria de importar os outros registros salvos anteriormente? (s/n)\n");
    scanf("%c", &import);

    if (import == 's') {
        saida = fopen("saida.dat", "rb");
        checkAberturaArquivo(saida);
        arq_qtd = fopen("arq_qtd", "rb");
        checkAberturaArquivo(arq_qtd);
        fread(&qtd, sizeof(int), 1, arq_qtd);
        alunos = (al*) calloc(qtd, sizeof(al));
        fread(alunos, sizeof(al), qtd, saida);
        fclose(qtd);
        fclose(saida);
        for (int i = 0; i < qtd; i++) {
            printf("Sobrenome: %s\n", alunos[i].sobrenome);
            printf("Matricula: %s\n", alunos[i].matricula);
            printf("Ano de nascimento: %d\n", alunos[i].ano_nasc);
            printf("-----------------------------------------\n");
        }
        system("pause");
        system("cls");
    }


    printf("Quantos alunos serão cadastrados?\n");
    scanf("%d", &userQtd);
    system("cls");

    userQtd += qtd;

    actual_al = (al*) realloc(alunos, userQtd * sizeof(al));

    for (int i = 0; i < userQtd; i++) {
        printf("Sobrenome: "); fflush(stdin); gets(actual_al[i].sobrenome);
        printf("Matricula: "); fflush(stdin); gets(actual_al[i].matricula);
        printf("Ano de nascimento: "); scanf("%d", &actual_al[i].ano_nasc);
        system("cls");
    }

    saida = fopen("saida.dat", "wb");
    checkAberturaArquivo(saida);

    fwrite(actual_al, sizeof(al), userQtd, saida);

    for (int i = 0; i < (userQtd + qtd); i++) {
        printf("Sobrenome: %s\n", actual_al[i].sobrenome);
        printf("Matricula: %s\n", actual_al[i].matricula);
        printf("Ano de nascimento: %d\n", actual_al[i].ano_nasc);
        printf("-----------------------------------------\n");
    }

    fclose(saida);

    arq_qtd = fopen("arq_qtd", "wb");
    checkAberturaArquivo(arq_qtd);
    fwrite(userQtd, sizeof(int), 1, arq_qtd);
    fclose(arq_qtd);

    free(alunos);

    return 0;
}
