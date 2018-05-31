/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

 15) João recebeu seu salário e precisa pagar duas contas atrasadas. Em razão do atraso, ele deverá pagar
multa de 2% sobre cada conta. Faça um programa que calcule e mostre quanto restará do salário de João */

#include <stdio.h>
int main()

{
    float sal,resto,conta1,conta2,juros;
printf("CALCULO DE SALARIO \n \n");
printf("Digite seu salario: ");
    scanf("%f",&sal);
printf("Digite o valor da conta 1: ");
    scanf("%f",&conta1);
printf("Digite o valor da conta 2: ");
    scanf("%f",&conta2);

juros=(conta1 * 1.02) + (conta2 * 1.02) ;
resto=sal-juros;

printf("Restara %.2f reais de seu salario.",resto);

}
