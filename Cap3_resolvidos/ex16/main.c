/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

13) Faça um programa que receba o número de horas trabalhadas e o valor do salário mínimo, calcule e
mostre o salário a receber, seguindo estas regras:
a) a hora trabalhada vale a metade do salário mínimo.
b) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada.
c) o imposto equivale a 3% do salário bruto.
d) o salário a receber equivale ao salário bruto menos o imposto.*/

#include <stdio.h>
int main()
{
float horas,sal_min,vlr_hr,vlr_bruto,imposto,sal_total;

printf("CALCULO DE SALARIO \n\n");

printf("Digite o numero de horas trabalhadas: ");
    scanf("%f",&horas);
printf("Digite o valor do salariominimo: ");
    scanf("%f",&sal_min);

// Calculosn a serem efetuados
    vlr_hr=sal_min / horas;
    vlr_bruto= horas*vlr_hr;
    imposto= vlr_bruto * 0.03;
    sal_total=vlr_bruto-imposto;

printf("\n \n O salario a receber será de %.2f reais",sal_total);
}
