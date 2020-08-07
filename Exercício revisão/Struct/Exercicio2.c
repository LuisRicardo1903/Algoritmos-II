/* 3.	A loja VendeTudo possui 50 clientes. O gerente, para cada cliente,
necessita armazenar o nome, cidade onde mora, o total da compra e o mês que o cliente comprou. */
#include<stdio.h>
#include<stdlib.h>
#define TAM 50

typedef struct{

char nome;
char cidade;
float totalCompras;
char mes;

}Loja;

int main(){

    int i;
    Loja cliente[TAM];

for(i=0; i<TAM; i++){

        printf("Digite o nome do cliente: ");
        scanf("%s", &cliente.nome);
        printf("Digite a cidade do cliente: ");
        scanf("%s", &cliente.cidade);
        printf("Digite o total de compras do cliente em R$: ");
        scanf("%f", &cliente.totalCompras);
        printf("Digite o mes da compra: ");
        scanf("%s", &cliente.mes);

}

        printf("O nome do cliente eh: %s", cliente.nome);
        printf("A ciadde do cliente eh: %s", cliente.cidade);
        printf("O total de compras eh: %f", cliente.totalCompras);
        printf("O mes da compra eh: %s", cliente.mes);

}
