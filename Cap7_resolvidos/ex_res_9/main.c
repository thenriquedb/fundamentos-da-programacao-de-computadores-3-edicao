/*
9) Crie um programa que preencha uma matriz 15x5 com números inteiros, calcule e mostre quais
elementos da matriz se repetem e quantas vezes cada um se repete.
 */

#include <stdio.h>
#include <stdlib.h>
#define L 2
#define C 2

int main(int argc, char** argv) {
    int mat[L][C], matCopia[L][C], repetidos[L][C];
    int i, j, k, l, cont = 0, pL = 0, pC = 0;

    //Leitura dos valores digitados
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("M[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
            matCopia[i][j] = mat[i][j];
        }
    }
    repetidos[0][0] = mat[0][0];


    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {

            for (k = 0; k < L; k++) {
                for (l = 0; l < C; l++) {
                    if (mat[i][j] == matCopia[j][k]) {
                        repetidos[pL][pC] = mat[i][j];
                        printf("R: %d \n", repetidos[pL][pC]);
                    }
                }
            }

        }
    }









    return (EXIT_SUCCESS);
}

