/*
14) Faça um programa que receba:
    ||um vetor com o nome de cinco cidades diferentes;
    || uma matriz 5x5 com a distância entre as cidades, e na diagonal principal deve ser colocada auto-
maticamente a distância zero, ou seja, não deve ser permitida a digitação;
    || o consumo de combustível de um veículo, ou seja, quantos quilômetros esse veículo percorre com
um litro de combustível.

O programa deverá calcular e mostrar:
    ||os percursos que não ultrapassam 250 quilômetros (os percursos são compostos pelos nomes das
cidades de origem e pelos nomes das cidades de destino);
    || todos os percursos (nome da cidade de origem e nome da cidade de destino), junto com a quantida-
de de combustível necessária para o veículo percorrê-los.
 */

#include <stdio.h>
#include <stdlib.h>
#define T 5 //Como é um vetor de linhas e colunas de mesmo tamnho,basta apenas um valor de medida
#define QUANT 5 //Quantidade de cidades

/*  Para facilitar a ordenação das matrizes e vetores, criei uma variavel para cada
 função,sendo: pos = Linha, pos2 = Coluna e pos3 = Vetores  */

int main(int argc, char** argv) {
    char cidade_origem[QUANT][40], cidade_destino[QUANT][40];
    float distancia[T][T], consumo[T], percurso[T], gasto_combustivel[T];
    int i, j, c = 0, pos = 0, pos2 = 0, pos3 = 0;

    //Input
    for (i = 0; i < T; i++) {
        for (j = 0; j < T; j++) {
            //O usúario não poderá inserir valores na diagonal principal da matrizi

            f(i != j) {
                printf("\n%d º Viagem \n", c + 1);
                printf("Origem: ");
                setbuf(stdin, NULL);
                gets(cidade_origem[pos3]);

                printf("Destino: ");
                setbuf(stdin, NULL);
                gets(cidade_destino[pos3]);

                printf("Distância entre as cidades: ");
                scanf("%f", &distancia[pos][pos2]);

                printf("Consumo do veçulo(km/L): ");
                scanf("%f", &consumo[pos3]);

                gasto_combustivel[c] = distancia[pos][pos2] / consumo[pos];
                c++;

                if (c == T - 1) {
                    pos++; //Controla a posilçao das linhas;
                    pos2 = 0; //Controla a posição das colunas
                    c = 0;
                }
                pos3++; //Controla as posições dos vetores

            } else {
                distancia[pos][pos2] = 0;
            }
            c++;
            pos2++;
        }
    }

    //Output
    printf("\n---------------------------RELATÓRIO---------------------------\n");
    for (i = 0; i < T; i++) {
        for (j = 0; j < T; j++) {
            if (i != j) {
                if (distancia[i][j] <= 250) {
                    printf("\nVIAGEM %d; \n", i + 1);
                    printf("\tOrigem: %s; \n", cidade_origem[i]);
                    printf("\tDestino: %s; \n", cidade_destino[i]);
                    printf("\tDistância: %.2f km; \n", distancia[i][j]);
                    printf("Gasto de combustivel: %.2f L. \n", consumo[i]);
                }
            }
        }
    }


    return (EXIT_SUCCESS);
}

