#include <stdio.h>
#include <stdlib.h>
#define TAMANHOVETOR 5

typedef struct{         //struct Ponto{
int x;                  //int x;
int y;                  //int y;
}Ponto;                 //}

int main(){

int i;
int qtd1Q=0, qtd2Q=0, qtd3Q=0, qtd4Q=0, qtdEixoX=0, qtdEixoY=0, qtdOrigem=0;

Ponto vetor[TAMANHOVETOR];
for (i=0; i<TAMANHOVETOR; i++){
    printf("Digite o X do ponto %d: ", i);
    scanf("%d", &vetor[i].x);
    printf("Digite o Y do ponto %d: ", i);
    scanf("%d", &vetor[i].y);
}
//Contabilizar os pontos: 1Q, 2Q, 3Q, 4Q
//receber pontos

for(i=0; i<TAMANHOVETOR; i++){
    if(vetor[i].x>0 || vetor[i].x>0){
    qtd1Q++;
    }else if(vetor[i].x<0 || vetor[i].y>0){
    qtd2Q++;
    }else if(vetor[i].x<0 || vetor[i].y<0){
    qtd3Q++;
    }else if(vetor[i].x>0 || vetor[i].y<0){
    qtd4Q++;
    }else if(vetor[i].x !=0 || vetor[i].y==0){
    qtdEixoX++;
    }else if(vetor[i].x ==0 || vetor[i].y !=0){
    qtdEixoY++;
    }else qtdOrigem++;
}

printf("Quantidade de Pontos 1Q: %d\n", qtd1Q);
printf("Quantidade de Pontos 2Q: %d\n", qtd2Q);
printf("Quantidade de Pontos 3Q: %d\n", qtd3Q);
printf("Quantidade de Pontos 4Q: %d\n", qtd4Q);
printf("Quantidade de Pontos Eixo X: %d\n", qtdEixoX);
printf("Quantidade de Pontos Eixo Y: %d\n", qtdEixoY);
printf("Quantidade de Pontos Origem: %d\n", qtdOrigem);

return 1;
}
