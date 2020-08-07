#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 500

void populaVetor (int v[], int n){

    int i;
    srand(time(NULL));

        if (n >= TAM)return;

        for(i=0; i<n; i++){

            v[i]=rand()%100;
            }
}

void exibeVetor (int v[], int n){
    int i;

    for (i=0; i<n; i++){
        printf("%d\n", v[i]);
}
}
int main(){

    int vetor[TAM];
    populaVetor(vetor, 3);
    exibeVetor(vetor, 3);


return 1;}
