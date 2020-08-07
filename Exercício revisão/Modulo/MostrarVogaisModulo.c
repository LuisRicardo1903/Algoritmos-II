#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contaVogais (char frase[]){
    int i;
    int qtdVogais = 0;
    for(i = 0; i < strlen(frase); i++){
        if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u'){
            qtdVogais++;}
    }
    return qtdVogais;
}

int main(){

    int qtdVogais = 0;
    char nome[45];
    printf("Digite o nome: ");
    gets(nome);

    qtdVogais = contaVogais(nome);

    printf("As vogais sao: %d", qtdVogais);
}
