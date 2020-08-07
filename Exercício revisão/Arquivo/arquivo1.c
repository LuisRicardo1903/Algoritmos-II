//abrir um arquivo texto e exibi-lo na tela
#include <stdlib.h>
#include <stdio.h>


int main() {
    char nomeArquivo[100];
    FILE *procurador;
    char letra;


    printf("Digite caminho e nome do arquivo a ser aberto: ");
    gets(nomeArquivo);

    //1 - associar e abrir
    procurador = fopen(nomeArquivo, "r"); //somente leitura

    if (procurador == NULL) {
        printf("Arquivo inexistente\n\n");
        exit(0);
    }

    //2 - percorrer e armazenar
    do {
        letra = fgetc(procurador);
        printf("%c",letra);
    } while(letra != EOF);

    //3 - fechar arquivo
    fclose(procurador);

    return 1;
}
