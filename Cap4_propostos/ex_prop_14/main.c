/*
14) Faça um programa que receba o salário de um funcionário e, usando a tabela a seguir, calcule e mostre
o novo salário.
 * 
FAIXA SALARIAL             % DE AUMENTO
Até R$ 300,00               50%
R$ 300,00 R$ 500,00         40%
R$ 500,00 R$ 700,00         30%
R$ 700,00 R$ 800,00         20%
R$ 800,00 R$ 1.000,00       10%
Acima de R$ 1.000,00        5%
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float sal;

    printf("Aumento de salário \n\n");
    printf("Digite seu salário atual: ");
    scanf("%f", &sal);

    if (sal <= 300) {
        printf("Percentual de aumento de 50%% \n");
        printf("Seu novo salário será de R$ %.2f", sal = sal * 1.5);
    } else if (sal > 300 && sal <= 500) {
        printf("Percentual de aumento de 40%% \n");
        printf("Seu novo salário será de R$ %.2f", sal = sal * 1.4);
    }
    else if (sal > 500 && sal <= 700) {
        printf("Percentual de aumento de 30%% \n");
        printf("Seu novo salário será de R$ %.2f", sal = sal * 1.3);
    }
    else if (sal > 700 && sal <= 800) {
        printf("Percentual de aumento de 20%% \n");
        printf("Seu novo salário será de R$ %.2f", sal = sal * 1.2);
    }
    else if (sal > 800 && sal <= 1000) {
        printf("Percentual de aumento de 10%% \n");
        printf("Seu novo salário será de R$ %.2f", sal = sal * 1.1);
    }
    else if (sal > 1000) {
        printf("Percentual de aumento de 5%% \n");
        printf("Seu novo salário será de R$ %.2f", sal = sal * 1.05);
    }

    printf("\n \n");
    return (EXIT_SUCCESS);
}

