/*1.	Escreva um programa que fa�a o controle das informa��es relativas aos funcion�rios de uma determinada empresa.
As informa��es que devem ser armazenadas s�o: NOME, SAL�RIO, CARGO, IDADE e SEXO.
Defina a estrutura de dados e fa�a a leitura e exibi��o dos dados para um funcion�rio.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {

    char nome[20];
    float salario;
    char cargo[20];
    int idade;
    char sexo[10];
}Empresa;

    int main(){

        Empresa func;

        printf("Digite nome do funcoinario: ");
        scanf("%s", &func.nome);
        fflush(stdin);
        printf("Digite salario do funcoinario: ");
        scanf("%f", &func.salario);
        fflush(stdin);
        printf("Digite cargo do funcoinario: ");
        scanf("%s", &func.cargo);
        fflush(stdin);
        printf("Digite idade do funcoinario: ");
        scanf("%d", &func.idade);
        fflush(stdin);
        printf("Digite sexo do funcoinario: ");
        scanf("%s", &func.sexo);
        fflush(stdin);

        printf("Nome do funcionario eh: %s\n", func.nome);
        printf("Salario do funcionario eh: %f\n", func.salario);
        printf("Cargo do funcionario eh: %s\n", func.cargo);
        printf("Idade do funcionario eh: %d\n", func.idade);
        printf("Sexo do funcionario eh: %s\n", func.sexo);

return 1;
}
