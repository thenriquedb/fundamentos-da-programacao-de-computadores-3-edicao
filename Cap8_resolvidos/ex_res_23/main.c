/*
23) Crie um programa que carregue uma matriz 3X4 com números reais. Utilize uma função para copiar
todos os valores da matriz para um vetor de 12 posições. Esse vetor deverá ser mostrado no programa
principal.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 3
#define COL 4

int main(int argc, char** argv) {
    int i, j, matriz[LIN][COL];
    void Salvar_Matriz_No_Vetor(int mat[][COL]);

    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            matriz[i][j] = rand() % 12;
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    Salvar_Matriz_No_Vetor(matriz);

    return (EXIT_SUCCESS);
}

void Salvar_Matriz_No_Vetor(int mat[][COL]) {
    int i, j, p = 0, vet[LIN * COL];

    printf("\nVetor resultante: ");
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            vet[p] = mat[i][j];
            printf("%d | ", vet[p]);
            p++;
        }
    }
}