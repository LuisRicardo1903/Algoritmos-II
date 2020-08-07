#include <stdio.h>
#include <stdlib.h>
#define TAM 10

typedef struct{

char nPlaca[8]; //Com - ou Espaço
char horaEntrada[5];
char horaSaida[5];

}Vaga;

int main(){

int i;
Vaga vetorGaragem[TAM];
int tempoTotal;
int valor;
float valotTotalRecebido;
int opcao;

do{
printf("1 - Entrada de veiculo: \n");
printf("2 - Saida de veiculo: \n");
printf("3 - Total em caixa: \n");
printf("5 - Sair Sistema");
printf("Opcao: ");
scanf("%d", &opcao);

    switch (opcao){
    case 1: //rotina p/ receber carro
        break;
    case 2: //rotina p/ saida do carro e cobrança
        break;
    case 3: //rotina p/ exibir valor total recebido
        break;
    case 4: //nada
        break;
    case 5: printf("Ate mais \n");
        break;
    default: printf("Opcao invalida \n");
    }
}while (opcao !=5);

return 1;
}
