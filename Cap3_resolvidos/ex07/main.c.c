/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

    5) 7. Faça um programa que receba o salário base de um funcionário, calcule e mostre seu salário a receber, sabendo-se que o funcionário tem gratificação de R$ 50 e paga imposto de 10%
*/
#include <stdio.h>
int main()

{
float sal,imposto,s_final;
printf(" CALCULO DE SALARIO \n \n");

printf("Digite seu salario: ");
scanf("%f",&sal);

imposto= sal *0.1;
s_final = sal-imposto+50;

printf("Salario a receber: %.2f reais \n",s_final);
return 0;
}
