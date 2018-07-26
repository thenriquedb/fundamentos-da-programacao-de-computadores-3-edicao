/*
19) Elabore uma sub-rotina que receba como parâmetro uma matriz A(6,6) e multiplique cada linha pelo
elemento da diagonal principal da linha. A sub-rotina deverá retornar a matriz alterada para ser mos-
trada no programa principal.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 6

//Funções
void Prencher_Matriz(int mat[][DIM]);
void Imprimir_Matriz(int mat[][DIM]);

void Armazenar_Diagonal_Secundaria(int mat[][DIM]);
void MultiplicacaoPelaDiagPrincipal(int mat[][DIM]);

int main(int argc, char** argv) {
    int i, j;
    int matriz[DIM][DIM];

    Prencher_Matriz(&matriz);
    Imprimir_Matriz(&matriz);
    Armazenar_Diagonal_Secundaria(&matriz);

    return (EXIT_SUCCESS);
}

void Prencher_Matriz(int mat[][DIM]) {
    int i, j;
    srand(time(NULL));

    for (i = 0; i < DIM; i++) {
        for (j = 0; j < DIM; j++) {
            mat[i][j] = (rand() % 10) + 1;
        }
    }
}

void Imprimir_Matriz(int mat[][DIM]) {
    int i, j;

    printf("MATRIZ GERADA \n");
    for (i = 0; i < DIM; i++) {
        for (j = 0; j < DIM; j++) {
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }
}

void Armazenar_Diagonal_Secundaria(int mat[][DIM]) {
    int i, j, p = 0;
    int ElementosDS[DIM];

    for (i = 0; i < DIM; i++) {
        for (j = 0; j < DIM; j++) {
            if (i + j == DIM - 1) {
                ElementosDS[p] = mat[DIM - i];
                printf("%d - ",ElementosDS[p]);
                p++;
            }
        }
    }
}
