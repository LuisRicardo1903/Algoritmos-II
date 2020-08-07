//1 - Imprime Qntd Palavras
//2 - Conta Qntd Palavras
//3 - Retorna ultimo Sobrenome
#include<stdio.h>
#include<stdlib.h>

void imprimeQuantidadePalavras(char frase[]){

    int i;
    int contaEspacos = 0;

    for(i=0; i<strlen(frase); i++){
        if(frase[i] == ' '){
            contaEspacos++;
        }
    }
    printf("%s tem %d palavras\n", frase, ++contaEspacos);
}



int main(){

    char frase[100];
    printf("Digite seu nome completo: ");
    gets(frase);

    imprimeQuantidadePalavras(frase);

    return 1;
}
