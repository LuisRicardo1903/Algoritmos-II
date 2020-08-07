#include <stdio.h>
#include <stdlib.h>
#define TAM 10

typedef struct{

char placa[8]; //Com - ou Espaço
char horaEntrada[5];
char horaSaida[5];

}Vaga;

int main(){

int i=0;
Vaga garagem[TAM];
int tempoTotal;
int valor;
float valotTotalRecebido;
int opcao;
int vagasLivres=TAM;

do{
system ("cls");
printf("1 - Entrada de veiculo: \n");
printf("2 - Saida de veiculo: \n");
printf("3 - Total em caixa: \n");
printf("5 - Sair Sistema");
printf("Opcao: ");
scanf("%d", &opcao);

    switch (opcao){
    case 1: if(vagasLivres=0){
            printf("Nao tem vaga aqui nao filho, vai pra outro lugar\n");
    }else {
            vagasLivres--;
            printf("Placa: ");
            scanf("%c",garagem[i].placa);
            printf("Hora entrada: ");
            scanf("%c",garagem[i].horaEntrada);
            i++;
            }
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
