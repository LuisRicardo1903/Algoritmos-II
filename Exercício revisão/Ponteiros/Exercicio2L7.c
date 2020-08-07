//2.	Ler uma string e chamar uma função para contar quantos caracteres possui. A main deve exibir a quantidade de caracteres.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contaCaracteres(char *frase){
    return strlen(frase);
    }

int main() {

    char frase[45];
    strcpy(frase, "Unifra");
    //escreverVerticalmente(frase);

    printf("A frase %s tem %d caracteres\n", frase, contaCaracteres(frase));

    return 1;
}
