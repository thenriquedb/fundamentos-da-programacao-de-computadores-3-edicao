/*
17) Faça um programa que receba o salário de um funcionário chamado Carlos. Sabe-se que outro funcionário,
João, tem salário equivalente a um terço do salário de Carlos. Carlos aplicará seu salário integralmente na 
caderneta de poupança, que rende 2% ao mês, e João aplicará seu salário integralmente no fundo de renda fixa, 
que rende 5% ao mês. O programa deverá calcular e mostrar a quantidade de meses necessários para que o valor 
pertencente a João iguale ou ultrapasse o valor pertencente a Carlos.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float sal_carlos, sal_joao;
    int meses, i;

    printf("Digite o salário de Carlos: ");
    scanf("%f", &sal_carlos);

    sal_joao = sal_carlos / 3;

    printf("O salário de João será de R$ %.2f. \n\n", sal_joao);

    while (sal_joao < sal_carlos) {
        sal_joao = sal_joao * 1.05;
        sal_carlos = sal_carlos * 1.02;
        meses++;

    }

    printf("Levará %d meses para o salario de João igual ao salário de Carlos. \n", meses);

    return (EXIT_SUCCESS);
}

