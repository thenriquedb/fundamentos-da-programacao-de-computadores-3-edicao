/*
2) Crie um programa que preencha uma matriz 2x4 com números inteiros, calcule e mostre:
    || a quantidade de elementos entre 12 e 20 em cada linha;
    ||a média dos elementos pares da matriz.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 2
#define C 4

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

    printf("\nNúmeros entre 12 e 20 em cada linha: \n");
    for (i = 0; i < L; i++) {
        cont = 0;
        for (j = 0; j < C; j++) {
            if (mat[i][j] >= 12 && mat[i][j] <= 20) {
                cont++;
            }
        }
        printf("\tLinha %d: %d \n", i + 1, cont);
    }

    return (EXIT_SUCCESS);
}