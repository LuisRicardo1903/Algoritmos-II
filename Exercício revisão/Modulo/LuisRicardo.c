#include <stdio.h>
#include <stdlib.h>
#define ANOATUAL 2017

typedef struct {
	int dia;
	int mes;
	int ano;
} Data;

typedef struct {
    int ano;
} AnoBissexto;

AnoBissexto anoBi() {

    AnoBissexto anoBissexto;

    printf("Digite o ano para saber se eh bissexto (No Formato XXXX): ");
    scanf("%d", &anoBissexto.ano);

    return anoBissexto;
}

Data recebeData() {

    Data data;

    printf("Digite um dia (No formato: XX): ");
    scanf("%d", &data.dia);
    printf("Digite um mes (No formato: XX): ");
    scanf("%d", &data.mes);
    printf("Digite um ano (No formato: XXXX): ");
    scanf("%d", &data.ano);

    return data;
}

int ehValida(Data data){

    if (data.dia < 1 || data.dia > 31 ||
        data.mes < 1 || data.mes > 12 ||
        data.ano < 1900 || data.ano > ANOATUAL){
        return 0;
}
        return 1;
}

int anoBissextoRecebe(AnoBissexto anoBissexto){
    if(anoBissexto.ano % 4 == 0 && (anoBissexto.ano % 400 == 0 || anoBissexto.ano % 100 != 0)){
       return 1;
}
       return 0;
}

void menu() {
	Data data;
	int opcao;
    AnoBissexto anoBissexto;

	do {
		printf("1 -> --Inserir data--\n");
		printf("2 -> --Sair programa--\n");
		printf("3 -> --Teste se o ano eh bissexto--\n");
		printf("Opcao: ");
		scanf("%d", &opcao);

		switch (opcao) {
			case 1 :
				data = recebeData();
			    if (ehValida(data) == 1){
                    printf("Voce digitou uma data correta!!\n\n");
			    } else printf("Data Invalida!\n\n");
                break;
			case 2 :
				printf(".....Saindo do programa.....\n\n");
				break;
            case 3 :
                anoBissexto = anoBi();
                if (anoBissextoRecebe(anoBissexto) == 1){
                    printf("\nEste ano eh bissexto\n\n");
                } else printf("\nEste ano nao eh bissexto\n\n");
                break;
			default :
				printf("Opcao invalida\n\n");
		}
	} while (opcao != 2);
}

int main() {

	menu();

	return 1;
}
