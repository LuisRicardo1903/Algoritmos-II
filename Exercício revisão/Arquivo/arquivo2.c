//abrir um arquivo texto e exibi-lo na tela
#include <stdlib.h>
#include <stdio.h>

typedef struct {
    char nome[100];
    int matricula;
}Aluno;

int main() {
    char nomeArquivo[100];
    FILE *procurador;
    char linha[200];

    printf("Digite caminho e nome do arquivo a ser aberto: ");
    gets(nomeArquivo);

    //1 - associar e abrir
    procurador = fopen(nomeArquivo, "r"); //somente leitura

    if (procurador == NULL) {
        printf("Arquivo inexistente\n\n");
        exit(0);
    }

    Aluno lista[14];

    //2 - percorrer e armazenar
    int i = 0;
    while( fgets(linha , sizeof(linha) , procurador) ){
        //printf("%s",linha);
        strcpy(lista[i].nome,linha);
        lista[i].matricula = 0;
        i++;
    }

    for (i = 0; i < 14; i++) {
        printf("%d - %s\n", lista[i].matricula, lista[i].nome);
        printf("---------------------\n");
    }

    //3 - fechar arquivo
    fclose(procurador);

    return 1;
}
