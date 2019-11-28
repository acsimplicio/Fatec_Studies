#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int qtd_lin=1;

void checkAberturaArquivo (FILE *arq) {
    if (arq == NULL) {
        printf("Houve um erro na abertura do arquivo.");
        exit(1);
    }
}

void contaLinhas()
{
    setlocale(LC_ALL, "Portuguese");

    char aux;

    FILE *arq;

    arq = fopen("arq.txt","r");
    checkAberturaArquivo(arq);

    aux = fgetc(arq);
    while(aux!=EOF){
        if(aux=='\n'){
           qtd_lin++;
        }
        aux = fgetc(arq);
    }
    fclose(arq);
}

int main()
{

    contaLinhas();

    int i, j, lin=0, col=0;
    char aux;

    FILE *arq;

    arq = fopen("arq.txt","r");
    checkAberturaArquivo(arq);

    char nome[qtd_lin][20], dump[qtd_lin][20], dump2[qtd_lin][20];
    int nota[qtd_lin];

    for(int i = 0; i < qtd_lin; i++) {
        fscanf(arq, "%s %s %s %d", dump[i], nome[i], dump2[i], &nota[i]);
    }

    char maior_nome[qtd_lin][20];
    int maior_nota[qtd_lin], maior = 0, cont = 0;

    for(int i = 0; i < qtd_lin; i++) {
        if (maior < nota[i]){
            maior = nota[i];
            strcpy(maior_nome[cont],nome[i]);
            maior_nota[cont]=nota[i];
        } else if (maior == nota[i]){
            cont++;
            strcpy(maior_nome[cont],nome[i]);
            maior_nota[cont] = nota[i];
        }
    }

    if(cont > 0){
        printf("\nMaiores notas\n\n");
        for (int i = 0; i <= cont; i++) {
             printf("Nome: %s Nota: %d\n\n", maior_nome[i], maior_nota[i]);
        }
    } else {
        printf("\nMaior nota\n\nNome: %s Nota: %d\n\n", maior_nome[cont], maior_nota[cont]);
    }

    fclose(arq);
}
