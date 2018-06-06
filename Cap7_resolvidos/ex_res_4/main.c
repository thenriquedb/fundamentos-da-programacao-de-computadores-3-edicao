/*
4) Crie um programa que preencha uma matriz 10x20 com números inteiros e some cada uma das li-
nhas, armazenando o resultado das somas em um vetor. A seguir, o programa deverá multiplicar cada
elemento da matriz pela soma da linha correspondente e mostrar a matriz resultante.
 */

#include <stdio.h>
#include <stdlib.h>
#define LIN 10
#define COL 20

int main(int argc, char** argv) {
    int matriz[LIN][COL], soma[LIN];
    int i, j, p = 0;

    //Leitura dos números digitados
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            printf("M[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    //Laço que fará a soma das linhas
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            soma[p] += matriz[i][j];
        }
        p++; //A cada laço o vetor soma pulara de posição
    }

    printf("\nSoma das linhas: \n");
    for (i = 0; i < LIN; i++) {
        printf("\tSoma %dº linha: %d \n", i + 1, soma[i]);
    }

    return (EXIT_SUCCESS);
}

