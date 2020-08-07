#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char matricula[10];
	char nome[50];
	char curso[25];
} Aluno;


int descobreQuantidadeLinhas(char *nomeArquivo) {
	int qtdLinhas = 0;
	char linha[100];

	FILE *procurador = fopen(nomeArquivo,"r");

	if (!procurador) {
		printf("Arquivo nao localizado\n");
		exit(0); //erro ao localizar o arquivo
	}

	while ( fgets(linha,sizeof(linha), procurador) ) {
		qtdLinhas++;
	}

	fclose(procurador);

	return qtdLinhas;
}

void copiaAlunosArquivo2Lista(char *nomeArquivo, Aluno *lista) {
	FILE *procurador = fopen(nomeArquivo,"r");
	int i = 0;

	do {
		fscanf(procurador,"%s %s %s", lista[i].matricula, lista[i].nome, lista[i].curso);
		i++;
	} while (!feof(procurador));

	fclose(procurador);
}

void exibeLista(Aluno *lista, int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("Aluno: %s\n", lista[i].nome);
	}
}

void copiaAlunosLista2ArquivoBackup(Aluno *lista, int n, char *nomeArquivo) {
	FILE *procurador = fopen(nomeArquivo,"w"); //foi aberto para escrita
	int i;

	fprintf(procurador, "ALUNOS MATRICULADOS\n\n");
	for (i = 0; i < n; i++) {
		fprintf(procurador, "%s\n", lista[i].nome);
		fflush(procurador);
	}

	fclose(procurador);
}

int main() {
	FILE *procuradorArquivoFonte;
	char nomeArquivoFonte[100];

	printf("Informe o nome do arquivo: ");
	scanf("%s", nomeArquivoFonte);

	int qtdLinhas = descobreQuantidadeLinhas(nomeArquivoFonte);
	Aluno lista[qtdLinhas];

	copiaAlunosArquivo2Lista(nomeArquivoFonte, lista);

	exibeLista(lista, qtdLinhas);

	copiaAlunosLista2ArquivoBackup(lista, qtdLinhas, "backup.txt");

	return 1;
}