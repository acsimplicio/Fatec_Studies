#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int qtd_lin = 0;

void contaLinhas()
{
    char aux;
    FILE *arq;

    arq = fopen("arq.txt", "r");

    if (arq == NULL){
        printf("Erro durante a abertura do arquivo!\n");
        system("pause");
        exit(1);
    }
    aux = fgetc(arq);
    while (aux != EOF){
        if(aux == '\n'){
           qtd_lin++;
        }
        aux = fgetc(arq);
    }
    fclose (arq);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    contaLinhas();

    int i, j, lin = 0, col = 0;
    char aux;

    FILE *arq;

    arq = fopen("arq.txt","r");

    if (arq == NULL){
        printf("Erro durante a abertura do arquivo!\n");
        system("pause");
        exit(1);
    }

    char number[qtd_lin][20];

    aux = fgetc(arq);
    while(aux != EOF) {
        if(aux == '$') {
            aux = fgetc(arq);
            while( aux != '\n') {
                number[lin][col] = aux;
                aux = fgetc(arq);
                col++;
            }
            number[lin][col] = '\0';
            lin++;
            col=0;
        }else{
            aux = fgetc(arq);
        }
    }

    float numbers[qtd_lin], total=0;
    char* pEnd;

    for(int i = 0; i < qtd_lin; i++){
        numbers[i] = strtof(number[i],&pEnd);
        total += numbers[i];
    }

    printf("Total a pagar: R$ %.1f",total);
    printf("\n");

    fclose(arq);
}
