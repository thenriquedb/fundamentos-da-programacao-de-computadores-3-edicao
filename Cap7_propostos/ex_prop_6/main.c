/*
6) Faça um programa que preencha uma matriz 20x10 com números inteiros, e some cada uma das colunas,
armazenando o resultado da soma em um vetor. A seguir, o programa deverá multiplicar cada elemento da
matriz pela soma da coluna e mostrar a matriz resultante.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 20
#define C 10

int main(int argc, char** argv) {
    int mat[L][C], mat2[L][C], somaColuna[C];
    int i, j, k, P = 0, c;

    //Gerar matriz
    for (i = 0; i < L; i++) {
        c = 0;
        for (j = 0; j < C; j++) {
            if (c == 0) {
                printf("%dº \t", i + 1);
            }

            mat[i][j] = (rand() % 10) + 1;
            printf("%4d", mat[i][j]);
            somaColuna[P] += mat[j][i];

            if (c == C - 1) {
                printf("\n");
            }
            c++;
        }
    }

    //Laço para fazer a soma das colunas
    for (i = 0; i < C; i++) {
        somaColuna[P] = 0;
        for (j = 0; j < L; j++) {
            somaColuna[P] += mat[j][i];
        }
        P++;
    }

    printf("\n----------------------------------------------------\n\n");

    //Laço para multiplicar a soma da coluna por cada elemnto da mesma
    for (i = 0; i < C; i++) {
        for (j = 0; j < L; j++) {
            mat[j][i] = mat[j][i] * somaColuna[i];
        }
    }

    //Impressão vetor resultante
    for (i = 0; i < L; i++) {
        c = 0;
        for (j = 0; j < C; j++) {
            if (c == 0) {
                printf("%dº \t", i + 1);
            }

            printf("%7d", mat[i][j]);

            if (c == C - 1) {
                printf("\n");
            }
            c++;
        }
    }

        return (EXIT_SUCCESS);
    }

