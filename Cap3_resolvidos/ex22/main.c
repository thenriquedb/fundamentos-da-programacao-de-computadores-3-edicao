/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

22. Sabe-se que o quilowatt de energia custa um quinto do salário mínimo. Faça um programa que receba
o valor do salário mínimo e a quantidade de quilowatts consumida por uma residência. Calcule e
mostre:
a) o valor de cada quilowatt;
b) o valor a ser pago por essa residência;
c) o valor a ser pago com desconto de 15%. */

#include <stdio.h>
#include <math.h>
int main()

{
float sal,vlr_kw,consumo,desconto,t_com_desconto;
printf("CALCULO DE KW/h \n\n");

printf("Digite o valor do salario minimo: ");
    scanf("%f",&sal);
printf("Digite o consumo de KW/h de sua residencia: ");
    scanf("%f",&consumo);
// Calculos
vlr_kw=sal/5;
consumo=consumo*vlr_kw;
desconto=consumo*0.15;
t_com_desconto=consumo-desconto;

printf("\n \n DADOS A PAGAR \n \n ");

printf("O valor do KW/h será de %.2f reais \n",vlr_kw);
printf("O valor a ser pago sera de %.2f reais \n",consumo);
printf("O valor a ser pago com desconto de 15%% sera de %.2f reais. ",t_com_desconto);
}
