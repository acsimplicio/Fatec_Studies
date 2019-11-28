#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

FILE *estoque;

typedef struct produto {
    char cod[5], desc[30];
    int qtd;
}prod;

prod produto[1000];
int count = 0;

void checkAberturaArquivo(FILE *arq) {
    if (arq == NULL) {
        printf("Erro na abertura do arquivo.");
        exit(1);
    }
}

char imprimeMenu() {
    char opt;
    printf("A - Entrar com novo produto;\nB - Retirar produto;\nC - Gerar relat�rio geral;\nD - Gerar relat�rio dos em falta;\nE - Sair\n");
    fflush(stdin);
    scanf("%c", &opt);
    return opt;
}

void escreverNoArquivo () {
    estoque = fopen("estoque", "wb");
    checkAberturaArquivo(estoque);
    int gravou;
    gravou = fwrite(produto, sizeof(prod), count, estoque);
    if (gravou != count) {
        printf("Erro na escrita\n");
        system("pause");
    }
    fclose(estoque);
    printf("Arquivo estoque salvo.\n");
    system("pause");
}

void retiradaProcutos() {
    estoque = fopen("estoque", "rb");
    fread(produto, sizeof(prod), count, estoque);
    fclose(estoque);
    int opt, qtd;
    printf("Qual dos produtos devem ser retirados?\n");
    for (int i = 0; i < count; i++) {
        printf("%d - %s %s | Quantidade: %d\n", i, produto[i].cod, produto[i].desc, produto[i].qtd);
    }
    scanf("%d", &opt);
    printf("Quantos devem ser retirados?\n");
    scanf("%d", &qtd);
    if (qtd > produto[opt].qtd) {
        printf("Quantidade indispon�vel para retirada;\n");
        system("pause");
    } else {
        produto[opt].qtd = produto[opt].qtd - qtd;
        escreverNoArquivo(count);
    }
}

void entrarComProduto() {
    printf("Codigo do produto: ");
    fflush(stdin); gets(produto[count].cod);
    printf("Descri��o do produto: ");
    fflush(stdin); gets(produto[count].desc);
    printf("Quantidade: ");
    scanf("%d", &produto[count].qtd);
    count++;

    escreverNoArquivo();

}

void gerarRelatorioGeral () {
    FILE *relatorio;

    relatorio = fopen("relatorio_geral.txt", "w");
    checkAberturaArquivo(relatorio);

    for (int i = 0; i < count; i++) {
        fprintf(relatorio, "C�digo: %s | Descri��o: %s | Quantidade: %d\n", produto[i].cod, produto[i].desc, produto[i].qtd);
    }
    fclose(relatorio);
    printf("Relat�rio gerado...\n");
    system("pause");
    system("cls");
}

void gerarRelatorioIndisponivel () {
    FILE *relatorio;

    relatorio = fopen("relatorio_indisponivel.txt", "w");
    checkAberturaArquivo(relatorio);

    for (int i = 0; i < count; i++) {
        if (produto[i].qtd < 1) {
            fprintf(relatorio, "C�digo: %s | Descri��o: %s | Quantidade: %d\n", produto[i].cod, produto[i].desc, produto[i].qtd);
        }
    }
    fclose(relatorio);
    printf("Relat�rio gerado...\n");
    system("pause");
    system("cls");
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    while (strcmp(produto[count].cod, "fim") != 0) {
        printf("-- Digite 'fim' no c�digo para sair --\n");
        printf("Codigo do produto: ");
        fflush(stdin); gets(produto[count].cod);
        if (strcmp(produto[count].cod, "fim") != 0) {
            printf("Descri��o do produto: ");
            fflush(stdin); gets(produto[count].desc);
            printf("Quantidade: ");
            scanf("%d", &produto[count].qtd);
            count++;
        }
        system("cls");
    }
    escreverNoArquivo(produto, count);

    char opt;
    while (opt != 'E') {
        opt = imprimeMenu();
        switch (opt) {
            case 'A':
                entrarComProduto();
                system("cls");
                break;
            case 'B':
                retiradaProcutos();
                system("cls");
                break;
            case 'C':
                gerarRelatorioGeral();
                system("cls");
                break;
            case 'D':
                gerarRelatorioIndisponivel();
                system("cls");
                break;
            case 'E':
                printf("Saindo...");
                break;
            default:
                printf("Opa opa opa! Op��o indispon�vel.\n");
                system("cls");
                break;
        }
    }

    return 0;
}
