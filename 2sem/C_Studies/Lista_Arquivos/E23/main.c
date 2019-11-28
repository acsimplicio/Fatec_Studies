#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    FILE *emp;

    emp = fopen("emp.txt", "w+");
    if (emp == NULL) {
        printf("Erro na abertura do arquivo.");
        exit(1);
    }

    char nome[30], profissao[30];
    int anos;
    for (int i = 0; i < 5; i++) {
        printf("Nome do funcionário: ");
        fflush(stdin);
        gets(nome);

        printf("Profissão: ");
        fflush(stdin);
        gets(profissao);

        printf("Anos de serviço: ");
        scanf("%d", &anos);

        fprintf(emp, "Nome: %s - %s - %d anos\n", nome, profissao, anos);

        system("cls");
    }

    rewind(emp);

    for (int i = 0; i < 5; i++) {
        fscanf(emp, "Nome: %s - %s - %d anos\n", &nome, &profissao, &anos);
        printf("Nome: %s - %s - %d anos\n", nome, profissao, anos);
    }

    return 0;
}
