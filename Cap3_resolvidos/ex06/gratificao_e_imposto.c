/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

    5)Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber, sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% tam- bém sobre o salário base.
*/
#include <stdio.h>
int main()

{
float sal,bonus,imposto,s_final;

printf("CALCULO DE GRATIFICAÇÃO E IMPOSTOS SOBRE O SALARIO DE UM FUNCIONARIO \n \n");

printf("Digite seu salario: ");
    scanf("%f",&sal);

bonus = sal*1.05;
imposto = sal*7/100 ;
s_final = sal+bonus-imposto;

printf("\n\n DADOS ATUALIZADOS \n\n");

printf("Voce receberá %.2f reais de gratificação \n",bonus);
printf("Voce pagara %.2f reais de impostos \n",imposto);
printf("Seu salario final sera de %.2f reais \n",s_final);
}
