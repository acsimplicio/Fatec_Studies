#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct aluno {
    char nome[30], status[30];
    float p1, p2;
}al;

typedef struct sala {
    char materia[30];
    int semestre;
    al *aluno[2];
}sl;

sl sala;
int counter = 0;

void definirInfoSala () {
    printf("Matéria: ");fflush(stdin);gets(sala.materia);
    printf("Semestre: ");fflush(stdin);scanf("%d", sala.semestre);
}

void adicionarAluno () {
    printf("Nome: ");fflush(stdin);gets(sala.*aluno[counter].nome);
    printf("P1: ");fflush(stdin);scanf("%f", &sala.*aluno[counter].p1);
    printf("P2: ");fflush(stdin);scanf("%f", &sala.*aluno[counter].p2);
    if (sala.aluno[counter].p1 + sala.aluno[counter].p1 >= 6) {
        strcpy(sala.aluno[counter].status, "APROVADO");
    } else {
        strcpy(sala.aluno[counter].status, "REPROVADO");
    }
    counter++;
    sala.*aluno = (al*) realloc(sala.*aluno, (counter + 1) * sizeof(al));
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char opt;
    while (opt != 'f') {
        printf("a) Definir informacões da turma;\n(b) Inserir aluno e notas;\n(c) Exibir alunos e medias;\n(d) Exibir alunos aprovados;\n(e) Exibir alunos reprovados;\n(f) Salvar dados em Disco;\n(g) Sair do programa (fim);");
        fflush(stdin); scanf("%c", &opt);
        switch (opt) {
            case 'a':
                system("cls");
                break;
            case 'b':
                adicionarAluno();
                system("cls");
                break;
            case 'c':
                system("cls");
                break;
            case 'd':
                system("cls");
                break;
            case 'e':
                system("cls");
                break;
            case 'f':
                printf("Saindo..");
                break;
            default:
                printf("Opção inválida.\n");
                system("pause");
                fflush(stdin);
                break;
        }
    }

    return 0;
}
