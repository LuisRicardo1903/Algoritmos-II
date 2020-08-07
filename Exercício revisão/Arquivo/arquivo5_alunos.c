#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 1000

typedef struct {
	char matricula[10];
	char nome[50];
	char curso[25];
} Aluno;

void inicializaLista(Aluno *lista, int n) {
	int i;

	for (i = 0; i < n; i++) {
		strcpy(lista[i].matricula,"");
		strcpy(lista[i].nome,"");
		strcpy(lista[i].curso,"");
	}
}

void copiaAlunosLista2Arquivo(Aluno *lista, int n, char *nomeArquivo) {
	FILE *procurador = fopen(nomeArquivo,"a"); //foi aberto para escrita
	int i;

	//fprintf(procurador, "ALUNOS MATRICULADOS\n\n");
	for (i = 0; i < n; i++) {
		
		if (strcmp(lista[i].matricula,"") == 0) {
			break;
		} 

		fprintf(procurador, "%s ", lista[i].matricula);
		fprintf(procurador, "%s ", lista[i].nome);
		fprintf(procurador, "%s\n", lista[i].curso);

		fflush(procurador);
	}

	fclose(procurador);
}

void insereAluno(Aluno *lista, int n) {
	int i;
	FILE *procurador = fopen("salvaAlunos.txt","a");
	char matricula[10];

	printf("Matricula: ");
	scanf("%s", matricula);
	fflush(stdin);

	for (i = 0; i < n; i++) {

		if (strcmp(lista[i].matricula, matricula) == 0) {
			printf("Matricula jah cadastrada. Voltando para menu\n");
			break;
		}

		if (strcmp(lista[i].matricula,"") == 0) {
			printf("Aluno sera inserido na posicao %d.\n", i);
	
			strcpy(lista[i].matricula, matricula);

			printf("Nome: ");
			scanf("%s",lista[i].nome);
			fflush(stdin);

			printf("Sigla curso: ");
			scanf("%s", lista[i].curso);
			fflush(stdin);

			fprintf(procurador, "%s ", lista[i].matricula);
			fprintf(procurador, "%s ", lista[i].nome);
			fprintf(procurador, "%s\n", lista[i].curso);

			fclose(procurador);

			break;
		}
	}

	if (i == n) printf("Lista cheia!\n");
}

void exibeAlunos(Aluno *lista, int n) {
	int i;

	for (i = 0; i < n; i++) {
		if (strcmp(lista[i].matricula,"") == 0) {
			break;
		}
		printf("Matricula: %s\n", lista[i].matricula);
		printf("Nome     : %s\n", lista[i].nome);
		printf("Curso    : %s\n", lista[i].curso);
		printf("--------------------------------------\n");
	}
}


int main() {
	Aluno lista[TAM];
	int opcao;

	inicializaLista(lista, TAM);

	do {
		printf("1 - Insere aluno; 2 - Lista alunos; 3 - Remove aluno; 4 - Sai\n");
		printf("Opcao: ");
		scanf("%d", &opcao);

		switch (opcao) {
			case 1 : printf("INSERCAO DE ALUNO!\n\n");
					 insereAluno(lista,TAM);
			         break;
			case 2 : printf("EXIBICAO DE ALUNOS!\n\n");
			         exibeAlunos(lista, TAM);
			         break;
			case 3 : 
			         break;
			case 4 : 
			         break;	
			default : printf("Opcao invalida!!\n");		         
		}

	} while (opcao != 4);


	//copiaAlunosLista2Arquivo(lista, TAM, "salvaAlunos.txt");

	return 1;
}