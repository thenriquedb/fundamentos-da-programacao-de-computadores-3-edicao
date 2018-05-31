/*
 Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no último ano. Faça
um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a tabela a
seguir. Mostre o saldo médio e o valor do crédito. 
 
 * SALDO                 MÉDIO PERCENTUAL
Acima de R$ 400,00      30% do saldo médio
R$ 400,00 R$ 300,00     25% do saldo médio
R$ 300,00 R$ 200,00     20% do saldo médio
Até R$ 200,00           10% do saldo médio
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float saldo, credito;
    printf("Calculo de credito \n\n");
    printf("Digite o valor do seu saldo: ");
    scanf("%f", &saldo);

    if (saldo > 400) {
        printf("Você receberá 30%% de credito. \n");
        printf("Você receberá R$ %.2f de credito.", saldo = saldo * 0.3);
    }
    else if (saldo > 300 && saldo <= 400) {
        printf("Você receberá 25%% de credito. \n");
        printf("Você receberá R$ %.2f de credito.", saldo = saldo * 0.25);
    }
    else if (saldo > 200 && saldo <= 300) {
        printf("Você receberá 20%% de credito. \n");
        printf("Você receberá R$ %.2f de credito.", saldo = saldo * 0.20);
    }
    else if (saldo < 200) {
        printf("Você receberá 10%% de credito. \n");
        printf("Você receberá R$ %.2f de credito.", saldo = saldo * 0.1);
    }

    printf("\n\n");
    return (EXIT_SUCCESS);
}

