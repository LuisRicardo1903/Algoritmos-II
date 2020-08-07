/*1.	Escreva um programa que faça o controle das informações relativas aos funcionários de uma determinada empresa.
As informações que devem ser armazenadas são: NOME, SALÁRIO, CARGO, IDADE e SEXO.
Defina a estrutura de dados e faça a leitura e exibição dos dados para um funcionário.*/

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
