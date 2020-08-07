#include <stdio.h>
#include <stdlib.h>

struct Retangulo{
    int base;
    int altura;
}retangulo;


void exibirLarguraAltura(){
    printf("Base: %d Altura: %d\n", retangulo.base, retangulo.altura);
}

int calcularArea(int v1, int v2){

    return v1 * v2;
}


float calculaMetadeDaArea(int v1, int v2){

    return (v1 * v2)/2.0;
}

void finalizarProva(){

printf("Matricula : 2017011870");
//return 0;

}

main(){


    printf("Digite a base do Retângulo:\n");
    scanf("%d", &retangulo.base);
    printf("Digite a altura do Retângulo:\n");
    scanf("%d", &retangulo.altura);
    printf("Base: %d Altura %d\n", retangulo.base, retangulo.altura);

    printf("Area %d\n", calcularArea(retangulo.base, retangulo.altura));
    printf("Metade %.2f\n", calculaMetadeDaArea(retangulo.base, retangulo.altura));
    finalizarProva(2017011870);
    return 0;
}
