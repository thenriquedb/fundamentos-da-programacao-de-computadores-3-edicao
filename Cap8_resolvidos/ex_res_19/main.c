/*
19) Elabore uma sub-rotina que receba como parâmetro uma matriz A(6,6) e multiplique cada linha pelo
elemento da diagonal principal da linha. A sub-rotina deverá retornar a matriz alterada para ser mos-
trada no programa principal.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 6

int main(int argc, char** argv) {
    int i, j, matriz[DIM][DIM];
    srand(time(NULL));

    void DiagonalPrincipal(int mat[][DIM]);
    void MultiplicacaoPelaDiagPrincipal(int mat[][DIM]);

    for (i = 0; i < DIM; i++) {
        for (j = 0; j < DIM; j++) {
            matriz[i][j] = (rand() % 10) + 1;
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    MultiplicacaoPelaDiagPrincipal(matriz);

    return (EXIT_SUCCESS);
}

void MultiplicacaoPelaDiagPrincipal(int mat[][DIM]) {
    int i, j, DiagPrincipal[DIM], matResultante[DIM][DIM];
    int p = 0;

    //Armazenar elmentos da diagonal principal
    for (i = 0; i < DIM; i++) {
        for (j = 0; j < DIM; j++) {
            if (i == j) {
                DiagPrincipal[p] = mat[i][j];
                p++;
            }
        }
    }

    printf("Matriz resultante \n\n");
    for (i = 0; i < DIM; i++) {
        for (j = 0; j < DIM; j++) {
            matResultante[i][j] = mat[i][j] * DiagPrincipal[i];
            printf("%4d", matResultante[i][j]);
        }
        p++;
        printf("\n");
    }
}