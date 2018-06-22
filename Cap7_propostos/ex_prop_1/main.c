/*
1) Faça um programa que preencha uma matriz 3x5 com números inteiros, calcule e mostre a quantidade de
elementos entre 15 e 20.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 3
#define C 5

int main(int argc, char** argv) {
    int mat[L][5];
    int i, j, cont = 0, c = 0;

    srand(time(NULL));

    for (i = 0; i < L; i++) {
        c = 0;
        for (j = 0; j < C; j++) {
            mat[i][j] = rand() % 30;
            printf("%4d", mat[i][j]);

            if (mat[i][j] >= 15 && mat[i][j] <= 20) {
                cont++;
            }

            if (c == C - 1) {
                printf("\n");
            }
            c++;
        }
    }

    printf("\nA matriz possui %d números entre 15 e 20. \n", cont);

    return (EXIT_SUCCESS);
}

