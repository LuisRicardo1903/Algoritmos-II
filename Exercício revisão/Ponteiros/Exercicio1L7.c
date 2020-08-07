//1.	Ler uma string e desenvolver uma função para escreve-la verticalmente na tela.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void escreverVerticalmente(char *frase){
    int i;
    for(i = 0; i < strlen(frase); i++){
        printf("%c\n", frase[i]);
    }
}

int main() {

    char frase[45];
    strcpy(frase, "Unifra");
    escreverVerticalmente(frase);



    return 1;
}
