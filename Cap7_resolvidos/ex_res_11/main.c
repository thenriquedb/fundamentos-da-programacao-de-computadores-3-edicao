/*
11) Crie um programa que preencha uma matriz 8x8 com números inteiros e mostre uma mensagem
dizendo se a matriz digitada é simétrica. Uma matriz só pode ser considerada simétrica se A[i,j] =
A[j,i] .
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define T 8

int main(int argc, char** argv) {
    int mat[T][T], QuebraLinha;
    int i, j;

    srand(time(NULL));

    for (i = 0; i < T; i++) {
        QuebraLinha = 1;
        for (j = 0; j < T; j++) {
            //Irá adcionar a posição da linha que esta sendo impressa
            if (QuebraLinha == 1) {
                printf("%dº ", i + 1);
            }

            mat[i][j] = rand() % 64;
            printf("%4d", mat[i][j]);

            //SErá feita uma quebra de linha a cada linha impressa
            if (QuebraLinha == T) {
                printf("\n");
            }
            QuebraLinha++;
        }
    }

    int verificar = 0;

    for (i = 0; i < T; i++) {
        for (j = 0; j < T; j++) {
            if (mat[i][j] == mat[j][i]) {
                verificar++;
            }
        }
    }

    if (verificar == 64) {
        printf("\n Matriz Simétrica \n");
    } else {
        printf("\n Matriz Assimétrica \n");
    }

    return (EXIT_SUCCESS);
}

