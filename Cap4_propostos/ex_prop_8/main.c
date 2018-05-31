/*
8) Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O percentual de aumento
encontra-se na tabela a seguir.
 * 
SALÁRIO              PErCENTuAL dE AuMENTo
Até R$ 300,00               35%
Acima de R$ 300,00          15% */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float sal;
    
    printf("Calculo de salário \n\n");
    printf("Digite seu salário: ");
    scanf("%f",&sal);
    
    if (sal <= 300) {
        printf("Você tera 35%% de aumento. \n");
        printf("Seu novo salário será de R$ %.2f.",sal = sal * 1.35);
    }
    
    else {
        printf("Você terá 15%% de aumento. \n");
        printf("Seu novo salário será de R$ %.2f.",sal = sal * 1.15);
    }
    return (EXIT_SUCCESS);
}

