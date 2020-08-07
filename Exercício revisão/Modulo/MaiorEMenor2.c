#include <stdio.h>
#include <stdio.h>
#include <time.h>

void popula(int *v, int n){
    srand(time(NULL));
    for(; n>0; n--){
        v[n-1] = rand()%20;
        }
    }

void exibe(int *v, int n){
    for(; n>0; n--){
        printf("|%d|\t", v[n-1]);
        }
    }

void quaisMM(int *v, int n, int *me, int *ma, int *pme, int *pma){
    int i;

    *me = v[0];
    *ma = v[0];
    *pme = 0;
    *pma = 0;

    for(i=1; i<n; i++){
        if(v[i] < *me){
        *me = v[i];
        *pma  = i;
    }
        if(v[i] > *ma){
        *ma = v[i];
        *pme = i;
        }
    }
}

int main(){
    int vetor[10];
    popula(vetor, 10);
    exibe(vetor, 10);
    int menor, maior, pMaior, pMenor;

    quaisMM(vetor, 10, &menor, &maior, &pMaior, &pMenor);

    printf("Maior %d - posicao: %d\n", maior, pMaior);
    printf("Menor: %d - posicao: %d\n", menor, pMenor);
    printf("♥");
    printf(vetor);

return 1;
}
