/*
25) Elabore um programa que receba as vendas de cinco produtos em três lojas diferentes, e em dois meses con-
secutivos. O programa deverá armazenar essas vendas em duas matrizes 5x3. O bimestre é uma matriz
5x3, resultado da soma das duas matrizes anteriores. Deverá ainda calcular e mostrar:
    || as vendas de cada produto, em cada loja, no bimestre;
    ||a maior venda do bimestre;
    || o total vendido, por loja, no bimestre;
    || o total vendido de cada produto no bimestre.
 */

#include <stdio.h>
#include <stdlib.h>
#define L 5
#define C 3

int main(int argc, char** argv) {
    int mes1[L][C], mes2[L][C], bimestre[L][C], somaLoja[L], somaProduto[C], p = 0;
    ;
    int i, j, p1 = 0, p2 = 0;

    //Leitura do mês 1
    printf("----------------------------------Mês 1----------------------------------\n");
    for (i = 0; i < L; i++) {
        printf("\nLoja %d \n", i + 1);
        for (j = 0; j < C; j++) {
            printf("\tProduto %d: ", j + 1);
            scanf("%d", &mes1[i][j]);

        }
    }

    //Leitura do Mês 2
    printf("----------------------------------Mês 2----------------------------------\n");
    for (i = 0; i < L; i++) {
        printf("\nLoja %d \n", i + 1);
        for (j = 0; j < C; j++) {
            printf("\tProduto %d: ", j + 1);
            scanf("%d", &mes2[i][j]);

        }
    }

    //CAlculo do Bimestre
    for (i = 0; i < L; i++) {
        somaLoja[p] = 0;
        for (j = 0; j < C; j++) {
            bimestre[i][j] = (mes1[i][j] + mes2[i][j]);
            somaLoja[p] += bimestre[i][j]; //Fazer a soma dos produtos em cada loja
        }
        p++;
    }

    printf("\n-------------------------------| Bimestre |------------------------------- \n");
    int maior_venda = bimestre[0][0];

    //Pegar a maior venda do bimestre
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            //Pegar a maior a venda do bimestre
            if (bimestre[i][j] > maior_venda) {
                maior_venda = bimestre[i][j];
            }
        }
    }
    printf("\nMaior venda do Bimestre foi de %d. \n", maior_venda);

    //Imprimir o total de venda em cada loja
    printf("\nTotal vendido em cada loja: \n");
    for (i = 0; i < L; i++) {
        printf("\tLoja %d: %d \n", i + 1, somaLoja[i]);
    }

    //Calcular a quantidade de produtos vendidos por Bimestre
    p = 0;
    for (i = 0; i < L; i++) {
        somaProduto[p] = 0;
        for (j = 0; j < C; j++) {
            somaProduto[p] += bimestre[j][i];
        }
        p++;
    }

    printf("\nVenda de cada produto por bimestre: \n");
    for (i = 0; i < C; i++) {
        printf("\tProduto %d: %d \n", i + 1, somaProduto[i]);
    }

    return (EXIT_SUCCESS);
}

