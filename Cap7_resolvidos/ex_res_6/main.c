/*
6) Crie um programa que preencha uma primeira matriz de ordem 4x5 e uma segunda matriz 5x2.
O programa deverá, também, calcular e mostrar a matriz resultante do produto matricial das duas
matrizes anteriores, armazenando-o em uma terceira matriz de ordem 4x2.
 */

#include <stdio.h>
#include <stdlib.h>
#define L1 4
#define C1 5

#define L2 5
#define C2 2

#define L3 4
#define C3 2

int main(int argc, char** argv) {
    int mat1[L1][C1], mat2[L2][C2], mat3;
    int i, j = 0, p;

    printf("1º Matriz \n");
    for (i = 0; i < L1; i++) {
        for (j = 0; j < C1; j++) {
            printf("\tM1[%d][%d] = ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\n2º Matriz \n");
    for (i = 0; i < L2; i++) {
        for (j = 0; j < C2; j++) {
            printf("\tM2[%d][%d] = ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }


    return (EXIT_SUCCESS);
}

