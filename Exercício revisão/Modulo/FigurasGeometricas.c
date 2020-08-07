#include<stdio.h>
#include<stdlib.h>

typedef struct quadrado{
    int lado;
    int area;
    int perimetro;
}Quadrado;

          //SEM RETORNO
Quadrado preencheLado(){
    Quadrado q;
    printf("Digite lado do quadrado: ");
    scanf("%d", &q.lado);
    return q;
    }

//          COM RETORNO
//Quadrado preencheLado(Quadrado q){
//    printf("Digite lado do quadrado: ");
//    scanf("%d", &q.lado);
//    return q;
//    }

//          COM PONTEIRO
//void preencheLado(Quadrado *q){
//    printf ("Digite lado do quadrado: ");
//    scanf("%d", *(q).lado);
//    }

//Quadrado CalculaArea(Quadrado q){
//    q.area = q.lado * q.lado;
//    return q;
//}

void calculaPerimetro(Quadrado *q1){
    q1->perimetro = q1->lado*4;
}

void calculaArea(Quadrado *q){
    q->area = q->lado * q->lado;
    }

int main(){

    Quadrado q1;


    q1 = preencheLado();
    //q1 = preencheLado(q1);
    //preencheLado(&q1);

    //q1 = calculaArea(q1);
    calculaArea(&q1);
    calculaPerimetro(&q1);

    printf("Area = %d\n", q1.area);
    printf("Perimetro = %d\n", q1.perimetro);

    return 1;
    }
