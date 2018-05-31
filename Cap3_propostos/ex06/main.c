/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

6) Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa
que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu
salário final. */

#include<stdio.h>
int main()

{
    float sal,vendas,comissao,n_sal;

printf("CALCULO DE COMISSAO \n \n");

printf("Digite seu salario: ");
    scanf("%f",&sal);
printf("Digite o valor total de suas vendas: ");
    scanf("%f",&vendas);

    comissao=vendas * 0.04;
    n_sal=sal+comissao;

printf("\n Dados sobre salario \n \n");

printf("Voce recebera %.2f reais de comissao. \n",comissao);
printf("Seu salario total sera de %.2f reais",n_sal);
}
