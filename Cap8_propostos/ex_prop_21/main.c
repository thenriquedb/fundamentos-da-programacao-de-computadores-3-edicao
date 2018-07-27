/*
21) Faça uma sub-rotina que receba uma matriz 10X10 e determine o maior elemento acima da diagonal
principal. Esse valor deverá ser mostrado no programa principal.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 10

//Função para prencher matriz
void PrencherMatriz(int matriz[][DIM]);

//Função para imprimir matriz
void ImprimirMatriz(int matriz[][DIM]);

//Função para pegar o maior elemento acima da diagonal principal
int MaiorElemento(int matriz[][DIM]);

int main(int argc, char** argv) {
    int matriz[DIM][DIM];

    PrencherMatriz(matriz);
    ImprimirMatriz(matriz);
    printf("\n O maior elemento acima da diagonal principal é o %d. \n", MaiorElemento(matriz));
    
    return (EXIT_SUCCESS);
}

void PrencherMatriz(int matriz[][DIM]) {
    int i, j;
    srand(time(NULL));

    for (i = 0; i < DIM; i++) {
        for (j = 0; j < DIM; j++) {
            matriz[i][j] = (rand() % 10) + 1;
        }
    }
}

void ImprimirMatriz(int matriz[][DIM]) {
    int i, j;

    for (i = 0; i < DIM; i++) {
        for (j = 0; j < DIM; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
}

int MaiorElemento(int matriz[][DIM]) {
    int i, j;
    int maior = 0;

    for (i = 0; i < DIM; i++) {
        for (j = 0; j < DIM; j++) {
            if (j > i) {
                if (matriz[i][j] > maior) {
                    maior = matriz[i][j];
                }
            }
        }
    }

    return maior;
}