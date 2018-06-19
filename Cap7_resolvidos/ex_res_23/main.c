/*
22) Crie um programa que receba as vendas semanais (de um mês) de cinco vendedores de uma loja e ar-
mazene essas vendas em uma matriz. O programa deverá calcular e mostrar:
    || o total de vendas do mês de cada vendedor;
    ||o total de vendas de cada semana (todos os vendedores juntos);
    || o total de vendas do mês.
 */

#include <stdio.h>
#include <stdlib.h>
#define L 4 //Semanas
#define C 5 //Quantidades de vendedores

int main(int argc, char** argv) {
    int vendas[L][C], total_vendas[C], vendas_semanais[L], vendas_mensal = 0, soma;
    int i, j, p = 0;

    for (i = 0; i < L; i++) {
        printf("--------------------------------Semana %d--------------------------------\n\n", i + 1);
        soma = 0;
        for (j = 0; j < C; j++) {
            printf("Vendendor %d \n", j + 1);
            printf("Total de vendas: ");
            scanf("%d", &vendas[i][j]);
            printf("\n");
            soma += vendas[i][j];
        }
        vendas_semanais[p] = soma;
        p++;
    }

    p = 0;
    printf("----------------------------------------------------------------------\n");
    printf("Total de vendas \n");
    for (i = 0; i < L; i++) {
        total_vendas[p] = 0;
        for (j = 0; j < C; j++) {
            total_vendas[p] += vendas[j][i];
        }
        printf("\tVendedor %d: %d \n", i + 1, total_vendas[p]);
        p++;
    }


    printf("\nTotal de vendas \n");
    for (i = 0; i < L; i++) {
        printf("\tSemana %d: %d \n", i + 1, vendas_semanais[i]);
    }
    return (EXIT_SUCCESS);
}

