/*
18) Crie um programa que leia um vetor vet contendo 18 elementos. A seguir, o programa deverá distribuir
esses elementos em uma matriz 3 × 6 e, no final, mostrar a matriz gerada.
Veja a seguir um exemplo do que seu programa deverá fazer.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 3
#define C 6
#define V 18

int main(int argc, char** argv) {
    int vet[V], mat[L][C];
    int i, j, p = 0, cont = 0;

    srand(time(NULL));

    printf("Digite 18 valores para prencher o vetor: \n");
    for (i = 0; i < V; i++) {
        printf("\tV[%d] = ", i);
        scanf("%d", &vet[i]);
    }

    printf("Matriz: \n");
    for (i = 0; i < L; i++) {
        cont = 0;
        for (j = 0; j < C; j++) {

            if (cont == 0) {
                printf("%4dº", i + 1);
            }

            mat[i][j] = vet[p];
            printf("%4d", mat[i][j]);

            if (cont == C - 1) {
                printf("\n");
            }
            cont++;
            p++;
        }
    }

    return (EXIT_SUCCESS);
}

