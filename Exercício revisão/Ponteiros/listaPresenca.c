#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 1000
    typedef struct {
    int matricula;
    char nome[45];
    char siglaCurso[2];
} Aluno;

void inicializarLista(Aluno *lista,int n) {
    int i;
    for(i=0; i<n; i++){
        lista[i].matricula = 0;
        strcpy(lista[i].nome,"");
        strcpy(lista[i].siglaCurso,"");
    }
}

void cadastrar(Aluno *lista,int n) {
    int matricula;
    int i;
    printf("\nInforme sua matricula: ");
    scanf("%d", &matricula);
    for (i=0; i<n; i++){
        if (lista[i].matricula == matricula){
            printf("..Matricula ja cadastrada..");
            return;
        }
        if (lista[i].matricula ==0) break;
    }
    printf("\nSeu nome: ");
    scanf("%s", lista[i].nome);
    printf("\nSigla Curso: ");
    scanf("%s", lista[i].siglaCurso);
    lista[i].matricula = matricula;
}

int main(){
    int opcao;
    Aluno listaAlunos[TAM];
    inicializarLista(listaAlunos, TAM);

    do{
        printf("1 - Cadastrar Alunos \n");
        printf("2 - Listar Alunos \n");
        printf("3 - Remover Alunos \n");
        printf("4 - Sair \n");
        printf("\nOpcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: cadastrar(listaAlunos, TAM);
                    break;

            //case 2: listar(listaAlunos, TAM);
             //       break;
        }

    } while (opcao != 4);

    return 1;
    }
