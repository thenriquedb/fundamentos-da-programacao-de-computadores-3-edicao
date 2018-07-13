/*
17) Faça uma sub-rotina que receba como parâmetro uma matriz A(5,5) e retorne a soma de seus elementos.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 5

int SomaMatriz(int mat[][DIM]);

int main(int argc, char** argv) {
    int i, j, matriz[DIM][DIM];
    srand(time(NULL));

    for (i = 0; i < DIM; i++) {
        for (j = 0; j < DIM; j++) {
            matriz[i][j] = rand() % 25;
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nA soma dos elementos da matriz é %d. \n", SomaMatriz(matriz));
     
    return (EXIT_SUCCESS);
}

//Para usar matriz como parámentro basta informar uma dimensão
int SomaMatriz(int mat[][DIM]) {
    int i, j, soma = 0;

    for (i = 0; i < DIM; i++) {
        for (j = 0; j < DIM; j++) {
            soma += mat[i][j];
        }
    }

    return soma;
}

