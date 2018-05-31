/*
11) Faça um programa que receba o salário atual de um funcionário e, usando a tabela a seguir, calcule e
mostre o valor do aumento e o novo salário.

SALÁRIO                  PERCENTUAL DE AUMENTO
Até R$ 300,00                     15%
R$ 300,00 R$ 600,00               10%
R$ 600,00 R$ 900,00               5%
Acima de R$ 900,00                0%
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float sal;

    printf("Calculo de aumento de salário. \n\n");
    printf("Digite seu salário: ");
    scanf("%f", &sal);

    if (sal <= 300) {
        printf("Aumento de 15%% \n");
        printf("Seu novo salário será de R$ %.2f.", sal = sal * 1.15);
    } else if (sal > 300 && sal < 600) {
        printf("Aumento de 10%% \n");
        printf("Seu novo salário será de R$ %.2f.", sal = sal * 1.1);
    }
    else if (sal >= 600 && sal <= 900) {
        printf("Aumento de 5%% \n");
        printf("Seu novo salário será de R$ %.2f.", sal = sal * 1.05);
    }
    else if (sal > 900) {
        printf("Você não tem direito ao aumento.");
    }

    printf("\n \n");
    return (EXIT_SUCCESS);
}
