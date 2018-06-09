/*
8) Elabore um programa que preencha uma matriz 6x4 com números inteiros, calcule e mostre quantos
elementos dessa matriz são maiores que 30 e, em seguida, monte uma segunda matriz com os elemen-
tos diferentes de 30. No lugar do número 30, da segunda matriz, coloque o número zero.
 */

#include <stdio.h>
#include <stdlib.h>
#define L 6
#define C 4

int main(int argc, char** argv) {
    int matriz[L][C], mat2[L][C];
    int i, j, contMaior30 = 0;

    printf("1º Matriz \n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("\tM[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    //Laço para fazer a verificação dos valores digitados
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {

            //Se o número digitado for igual a 30,ele será substituido por 0 na 2º Matriz
            if (matriz[i][j] == 30) {
                mat2[i][j] = 0; //Os valores de MAT 2 serão atribuidos nas mesma posições que na 1º matriz
            }

            //Se for menor que 30 será adicionado na segunda 2º Matriz
            else if (matriz[i][j] < 30) {
                mat2[i][j] = matriz[i][j];
            } else {
                contMaior30++;
            }
        }
    }

    printf("\n2º Matriz: \n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            //"Filtro para imprimir apenas valores entre 0 e 30
            if (mat2[i][j] >= 0 && mat2[i][j] <= 30) {
                printf("\tM2[%d][%d]: %d \n", i, j, mat2[i][j]);
            }
        }
    }

    printf("\nQuantidade de números maiores que 30 digitados: %d \n\n", contMaior30);

    return (EXIT_SUCCESS);
}
