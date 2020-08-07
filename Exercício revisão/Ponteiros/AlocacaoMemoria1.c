#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int matricula;
    char nome[45];
}Aluno;

int main() {
    Aluno *vetor;
    int tamanho;
    int i;

    printf("Digite o tamanho desejado: ");
    scanf("%d", &tamanho);

    //alocacao dinamica de memoria
    vetor = malloc(sizeof(Aluno) * tamanho);

    for (i = 0; i < tamanho; i++) {
        printf("Matricula: ");
        scanf("%d", &vetor[i].matricula);
        fflush(stdin);

        printf("Nome: ");
        gets(vetor[i].nome);
        fflush(stdin);
    }

    for (i = 0; i < tamanho; i++) {
        printf("Matricula: %d\n", vetor[i].matricula);
        printf("Nome: %s \n\n", vetor[i].nome);
    }

    printf("\n\n");

    //libera dinamicamente a memoria
    free(vetor);
    return 1;
}
