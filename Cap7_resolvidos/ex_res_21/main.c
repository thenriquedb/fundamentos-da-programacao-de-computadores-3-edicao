/*
21) Crie um programa que utilize uma matriz com as dimensões fornecidas pelo usuário e execute as so-
licitações a seguir.

Para realizar essa tarefa, a matriz deverá ser obrigatoriamente quadrada (número igual de linhas e co-
lunas). Sendo assim, solicite que seja informada a dimensão da matriz.
 
Posteriormente, o programa deverá realizar a leitura dos elementos que vão compor a matriz. Por fim,
deverá somar e mostrar os elementos que estão abaixo da diagonal secundária.
Veja o exemplo.

Imagine que sejam informados números, conforme apresentado nesta matriz.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int D;
    int i, j, p = 0, cont = 0;

    printf("Digite a dimensão da matriz: ");
    scanf("%d", &D);

    int mat[D][D];
    int diag[D];

    for (i = 0; i < D; i++) {
        for (j = 0; j < D; j++) {
            printf("M[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nMatriz gerada \n");
    for (i = 0; i < D; i++) {
        cont = 0;
        for (j = 0; j < D; j++) {

            if (cont == 0) {
                printf("%dº", i + 1);
            }
            printf("%4d", mat[i][j]);

            if (cont == D - 1) {
                printf("\n");
            }
            cont++;
        }
    }

    int C = D;

    for (i = 0; i < D; i++) {
        for (j = 0; j < D; j++) {

            if (mat[i][j] == mat[i][C - 1]) {
                diag[p] = mat[i][i + j];
                p++;
                C--;
            }
        }
    }

    printf("Diagonal secundária: \n");
    for (i = 0; i < p; i++) {
        printf(" %d ", diag[i]);
    }

    return (EXIT_SUCCESS);
}

