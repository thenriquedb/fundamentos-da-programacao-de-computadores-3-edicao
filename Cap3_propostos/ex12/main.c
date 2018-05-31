/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

12)v Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule
e mostre a quantidade de salários mínimos que esse funcionário ganha. */

#include <stdio.h>
int main()
{
    float sal_min,sal_fun,quant;

printf("CALCULO DA QUANTIDADE DE SALARIOS MINIMO QUE UMA PESSOA RECEBE \n \n");

printf("Digite o valor do salario minimo: ");
    scanf("%f",&sal_min);
printf("Digite o valor do seu salario: ");
    scanf("%f",&sal_fun);

quant=sal_fun / sal_min;

printf("Voce recebe %.1f salarios minimos.",quant);
}
