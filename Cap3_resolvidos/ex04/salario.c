/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

    5). Faça um programa quereceba o salário de um funcionário,calculee mostre o novo salário, sabendo-se que este sofreu um aumento de 25%.
*/

#include <stdio.h>
int main()

{
float salario,n_salario;

printf("PROGRAMA PARA CALCULAR O NOVO SALARIO DE UM FUNCIONARIO. \n \n");
printf("Digite seu salario: ");
    scanf("%f",&salario);
    n_salario = (salario*1.25);

printf("Seu novo salario é de: %.2f",n_salario);
return 0;
}
