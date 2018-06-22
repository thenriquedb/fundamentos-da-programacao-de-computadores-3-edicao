/*
5) Elabore um programa que preencha uma matriz 12x4 com os valores das vendas de uma loja, em que cada
linha representa um mês do ano e cada coluna representa uma semana do mês. O programa deverá calcular
e mostrar:
    || o total vendido em cada mês do ano, mostrando o nome do mês por extenso;
    || o total vendido em cada semana durante todo o ano;
    || o total vendido pela loja no ano.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MES 12
#define SEM 4

int main(int argc, char** argv) {
    float vendas[MES][SEM], somaMes[MES], totalAno = 0;
    int i, j;

    srand(time(NULL));

    for (i = 0; i < MES; i++) {
        //Switch para printar os nomes dos meses por extenso
        somaMes[i] = 0;
        switch (i) {
            case 0:
                printf("Janeiro \n");
                break;
            case 1:
                printf("Fevereiro \n");
                break;
            case 2:
                printf("Março \n");
                break;
            case 3:
                printf("Abril \n");
                break;
            case 4:
                printf("Maio \n");
                break;
            case 5:
                printf("Junho \n");
                break;
            case 6:
                printf("Julho \n");
                break;
            case 7:
                printf("Agosto \n");
                break;
            case 8:
                printf("Setembro \n");
                break;
            case 9:
                printf("Outubro \n");
                break;
            case 10:
                printf("Novembro \n");
                break;
            case 11:
                printf("Dezembro \n");
                break;
        }

        for (j = 0; j < SEM; j++) {
            vendas[i][j] = rand() % 100;
            printf("\t%dº semana: R$ %.2f \n", j + 1, vendas[i][j]);
            somaMes[i] += vendas[i][j];
            totalAno += somaMes[i];
        }

        printf("Total vendido no mês: R$ %.2f \n", somaMes[i]);
        printf("-------------------------------------------------------------\n");
    }

    printf("\nTotal vendido no ano: R$ %.2f \n", totalAno);

    return (EXIT_SUCCESS);
}

