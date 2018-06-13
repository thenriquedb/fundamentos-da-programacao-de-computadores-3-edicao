/*
12) Elabore um programa que preencha uma matriz 4x4 com números inteiros e verifique se essa matriz
forma o chamado quadrado mágico. Um quadrado mágico é formado quando a soma dos elementos
de cada linha é igual à soma dos elementos de cada coluna dessa linha, é igual à soma dos elementos
da diagonal principal e, também, é igual à soma dos elementos da diagonal secundária.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define T 4

int main(int argc, char** argv) {
    int mat[T][T], SomaLinha[T], somaColuna[T], SomaDiagonalPrincipal = 0, SomaDiagonalSegun = 0;
    int i, j, c = 0, p = 0;

    srand(time(NULL));

    for (i = 0; i < T; i++) {
        for (j = 0; j < T; j++) {
            mat[i][j] = rand() % 5;
        }
    }

    for (i = 0; i < T; i++) {
        c = 1;
        for (j = 0; j < T; j++) {
            printf("%4d", mat[i][j]);
            if (c == 4) {
                printf("\n");
            }
            c++;
        }
    }

    int auxLinha = 0, auxColuna = 0, auxDiag = 0;

    for (i = 0; i < T; i++) {
        for (j = 0; j < T; j++) {
            auxLinha += mat[i][j];
            auxColuna += mat[j][i];
            SomaLinha[i] = auxLinha;
            somaColuna[i] = auxColuna;

            if (i == j) {
                SomaDiagonalPrincipal += mat[i][j];
                SomaDiagonalSegun += mat[i][i - T];
            }
        }
        auxLinha = 0;
        auxColuna = 0;
    }

    printf("\nSoma das linhas: \n");
    for (i = 0; i < T; i++) {
        printf("\tSoma %dº linha: %d \n", i + 1, SomaLinha[i]);
    }

    printf("\nSoma das colunas: \n");
    for (i = 0; i < T; i++) {
        printf("\tSoma %dº coluna: %d \n", i + 1, somaColuna[i]);
    }

    printf("\nSoma das diagonal Principal: %d\n", SomaDiagonalPrincipal);
    printf("Soma das diagonal secundaria: %d\n", SomaDiagonalSegun);

    return (EXIT_SUCCESS);
}