/*
3) Elabore um programa que preencha uma matriz 6x3, calcule e mostre:
    || o maior elemento da matriz e sua respectiva posição, ou seja, linha e coluna;
    || o menor elemento da matriz e sua respectiva posição, ou seja, linha e coluna.
 */

#include <stdio.h>
#include <stdlib.h>

#include <time.h>

#define L 6
#define C 3

int main(int argc, char** argv) {
    int mat[L][C];
    int i, j, cont = 0, c = 0;

    srand(time(NULL));

    for (i = 0; i < L; i++) {
        c = 0;
        for (j = 0; j < C; j++) {
            mat[i][j] = rand() % 30;
            printf("%4d", mat[i][j]);

            if (c == C - 1) {
                printf("\n");
            }
            c++;
        }
    }

    int indiceMaiorL, indiceMaiorC, indiceMenorL, indiceMenorC, menor = mat[0][0], maior = mat[0][0];

    for (i = 1; i < L; i++) {
        for (j = 1; j < C; j++) {
            if (mat[i][j] > maior) {
                indiceMaiorL = i;
                indiceMaiorC = c;
                maior = mat[i][j];
            }

            if (mat[i][j] < menor) {
                indiceMenorL = i;
                indiceMenorC = j;
                menor = mat[i][j];
            }
        }
    }

    printf("\nMaior elemento é M[%d][%d] = %d \n", indiceMaiorL, indiceMaiorC, maior);
    printf("Menor elemento é M[%d][%d] = %d \n", indiceMenorL, indiceMenorC, menor);

    return (EXIT_SUCCESS);
}

