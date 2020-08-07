#include <stdio.h>
#include <stdlib.h>
#define TAMANHOVETOR 5

typedef struct{         //struct Ponto{
int x;                  //int x;
int y;                  //int y;
}Ponto;                 //}

int main(){

int i;
Ponto vetor[TAMANHOVETOR];
for (i=0; i<TAMANHOVETOR; i++){
    printf("Digite o X do ponto %d: ", i);
    scanf("%d", &vetor[i].x);
    printf("Digite o Y do ponto %d: ", i);
    scanf("%d", &vetor[i].y);
}
//Contabilizar os pontos: 1Q, 2Q, 3Q, 4Q

return 1;
}
