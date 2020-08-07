#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10000

void populaVetor(int vetor[], int n){
    int i;
    srand(time(NULL));

    for(i=0; i<n; i++){
        vetor[i] = rand() % 50;
    }
}

void exibeVetor(int vetor[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d\t", vetor[i]);
    }
    printf("\n");
}

int qualMenor(int vetor[], int n){
    int i;
    int menor = vetor[0];

    for(i=1; i<n; i++){
        if (vetor[i] < menor ){
            menor = vetor[i];
        }
    }
    return menor;
}

int main (){

    int vetor[TAM];
    int menorValor;

    populaVetor(vetor, 5);
    exibeVetor(vetor, 5);
    menorValor = qualMenor(vetor, 5);

    printf("O menor valor eh: %d\n", menorValor);

    return 1;
}
