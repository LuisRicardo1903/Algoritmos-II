#include <stdio.h>
#include <stdlib.h>

void calculadoraSemRetorno(int n1, int n2, char op) {

    switch(op){
        case '+' : printf("%d + %d = %d", n1, n2, n1 + n2);
                    break;
        case '-' : printf("%d - %d = %d", n1, n2, n1 - n2);
                    break;
        case '*' : printf("%d * %d = %d", n1, n2, n1 * n2);
                    break;
        case '/' : printf("%d / %d = %.2f", n1, n2, n1 / n2);
                    break;
        default : printf("Opcao Invalida");
    }
}

float calculadoraComRetorno(int n1, int n2, char op) {

    switch(op){
        case '+' : return n1 + n2;
                    //break;
        case '-' : return n1 - n2;
                    //break;
        case '*' : return n1 + n2;
                    //break;
        case '/' : return n1 / n2;
                    //break;
        default : return -27;
    }
}

int main(){

    int num1, num2;
    char operacao;

    printf("Informe o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Informe o segundo numero inteiro: ");
    scanf("%d", &num2);

    fflush(stdin);

    printf("Escolha a operação +  -  *  / : ");
    scanf("%c", &operacao);

    //calculadoraSemRetorno(num1, num2, operacao);

    float resultado = calculadoraComRetorno(num1, num2, operacao);
    printf("Resultado da Operacao: %f\n", resultado);

    return 1;
}
