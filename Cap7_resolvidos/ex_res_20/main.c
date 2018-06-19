/*
20) Crie um programa que utilize uma matriz com dimensões máximas de cinco linhas e quatro colunas
e solicite que sejam digitados os números (desordenadamente), armazenando-os, ordenadamente (em ordem crescente), na
matriz.
 */

#include <stdio.h>
#include <stdlib.h>
#define L 5
#define C 4
#define V L*C

int main(int argc, char** argv) {
    int vet[V], mat[L][C];
    int i, j, aux, p = 0;

    //Os valores digitados serão armazenados em um vetor
    printf("Digite %d números: \n", V);
    for (i = 0; i < V; i++) {
        printf("\tNúmero %d: : ", i + 1);
        scanf("%d", &vet[i]);
    }

    //Em seguida o vetor será organizado utilizando o método bubble sort
    for (i = 0; i < V; i++) {
        for (j = i + 1; j < V; j++) {
            if (vet[i] > vet[j]) {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }

    //Depois o vetor será passado para uma matriz com as dimensões corretas
    for (i = 0; i < L; i++) {
        aux = 0;
        for (j = 0; j < C; j++) {
            if (aux == 0) {
                printf("%4dº", i + 1);
            }

            mat[i][j] = vet[p];
            printf("%4d", mat[i][j]);

            if (aux == C - 1) {
                printf("\n");
            }
            aux++;
            p++;
        }
    }

    return (EXIT_SUCCESS);
}

