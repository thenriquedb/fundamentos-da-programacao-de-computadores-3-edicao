/*
 7) Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça um
programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso
ele não tenha direito ao aumento. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float sal,sal_reajustado;
    printf("Aumento de salário \n\n");
    printf("Digite seu salário: ");
    scanf("%f",&sal);
    
    if(sal <500) {
        printf("Você receberá 30%% de aumento. \n");
        printf("Seu novo salário será de R$ %.2f. \n",sal_reajustado = sal * 1.30);
        printf("\n \n");
    }
    
    else {
        printf("Você não possui direito ao aumento. \n");
    }
    
    return (EXIT_SUCCESS);
}

