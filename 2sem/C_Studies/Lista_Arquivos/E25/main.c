#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

typedef struct contato {
    char nome[30], telefone[20];
    int dia, mes;
}contact;

contact contatos[1000];
int count = 0;
FILE *lista, *counter;

void listarContatos() {
    if (count > 0) {
        for (int i = 0; i < count; i++) {
            printf("%d - Nome: %s | Telefone: %s | Aniversário: %d/%d\n",
                    i, contatos[i].nome, contatos[i].telefone, contatos[i].dia, contatos[i].mes);
        }
    } else {
        printf("Não existem contatos..\n");
    }
}

void inserirContato() {
    printf("Nome: ");
    fflush(stdin); gets(contatos[count].nome);
    printf("Telefone: ");
    fflush(stdin); gets(contatos[count].telefone);
    printf("Dia do aniversário: ");
    scanf("%d", &contatos[count].dia);
    printf("Mês do aniversário: ");
    scanf("%d", &contatos[count].mes);
    count++;
}

void removerContato() {
    int removeCont;
    listarContatos();
    printf("Qual contato deseja remover?\n");
    scanf("%d", &removeCont);

    contact temp;
    temp = contatos[0];
    contatos[removeCont] = temp;

    for (int i = 0; i < count; i++){
        contatos[i] = contatos[i+1];
    }
    count--;
}

void checkAberturaArquivo(FILE *arq) {
    if (arq == NULL) {
        printf("Erro na abertura do arquivo.");
        exit(1);
    }
}

void pesquisarPorNome() {
    char nomePesquisa[30];
    printf("Qual o nome?\n");
    fflush(stdin); gets(nomePesquisa);
    for (int i = 0; i < count; i++) {
        if (strcmp(nomePesquisa, contatos[i].nome) == 0) {
            printf("%d - Nome: %s | Telefone: %s | Aniversário: %d/%d\n",
                    i, contatos[i].nome, contatos[i].telefone, contatos[i].dia, contatos[i].mes);
        }
    }
}

void mostrarTodosComALetra() {
    char letra;
    printf("Qual a letra?\n");
    fflush(stdin);
    scanf("%c", &letra);
    for (int i = 0; i < count; i++) {
        if (letra == contatos[i].nome[0]) {
            printf("%d - Nome: %s | Telefone: %s | Aniversário: %d/%d\n",
                    i, contatos[i].nome, contatos[i].telefone, contatos[i].dia, contatos[i].mes);
        }
    }
}

void aniversarianteDoMes(int mon) {
    for (int i = 0; i < count; i++) {
        if (mon == contatos[i].mes) {
            printf("%d - Nome: %s | Telefone: %s | Aniversário: %d/%d\n",
                    i, contatos[i].nome, contatos[i].telefone, contatos[i].dia, contatos[i].mes);
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    counter = fopen("count", "rb");
    checkAberturaArquivo(counter);
    fread(&count, sizeof(int), 1, counter);
    fclose(counter);

    lista = fopen("lista", "rb");
    checkAberturaArquivo(lista);
    fread(contatos, sizeof(contact), count, lista);
    fclose(lista);

    char opt;
    while (opt != 'G') {
        printf("A - Inserir contato;\nB - Remover contato;\nC - Listar todos os contatos;\nD - Pesquisar por nome;\nE - Mostrar todos com a letra;\nF - Aniversariantes do mês;\nG - Sair;\n");
        fflush(stdin);
        scanf("%c", &opt);
        switch (opt) {
            case 'A':
                inserirContato();
                system("cls");
                break;
            case 'B':
                removerContato();
                system("cls");
                break;
            case 'C':
                listarContatos();
                system("pause");
                system("cls");
                break;
            case 'D':
                pesquisarPorNome();
                system("pause");
                system("cls");
                break;
            case 'E':
                mostrarTodosComALetra();
                system("pause");
                system("cls");
                break;
            case 'F':
                aniversarianteDoMes(tm.tm_mon + 1);
                system("pause");
                system("cls");
                break;
            case 'G':
                printf("Saindo...");
                break;
            default:
                printf("Opção inválida.\n");
                system("cls");
                break;
        }
    }

    counter = fopen("count", "wb");
    checkAberturaArquivo(counter);
    fwrite(&count, sizeof(int), 1, counter);
    fclose(counter);

    lista = fopen("lista", "wb");
    checkAberturaArquivo(lista);
    fwrite(contatos, sizeof(contact), count, lista);
    fclose(lista);

    return 0;
}
