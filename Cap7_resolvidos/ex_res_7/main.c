/*
7) Um elemento Aij de uma matriz é dito ponto de sela da matriz A se, e somente se, Aij for, ao mesmo
tempo, o menor elemento da linha i e o maior elemento da coluna j . Faça um programa que carregue
uma matriz de ordem 5x7, verifique se a matriz possui ponto de sela e, se possuir, mostre seu valor
e sua localização.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 5
#define COL 7

int main(int argc, char** argv) {
    int mat[LIN][COL];
    int i, j, quebra_linha = 0;
    int menor_linha[5], maior_coluna[7], pC = 0, pL = 0, indiceLinha, indiceColuna;

    srand(time(NULL));

    //Imprimir matriz
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            //QUando quebra_linha for = 0, sera impresso a posição da linha
            if (quebra_linha == 0) {
                printf("%dº|", i + 1);
            }

            mat[i][j] = rand() % 35;
            printf("%4d", mat[i][j]);
            quebra_linha++;

            //Quando o contador chegar ao final das colunas,sera feito a quebra de linhas
            if (quebra_linha == 7) {
                quebra_linha = 0;
                printf("\n");
            }
        }
    }

    int maior_comp = 0;
    int menor_comp = 35;
    int indiceLinha = 0;
    int indiceColuna = 0;

    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            if (mat[i][j] > maior_inicio) {
                maior_coluna[p] = mat[i][j];
                p++;
            }

            if (mat[i][j] < menor_linha) {
                menor_linha = mat[indiceLinha][indiceColuna];
                indiceLinha = i;
            }

            if (maior_coluna == menor_linha) {
                printf("Ponto de sela: Valor: %d e localização %d|%d \n", maior_coluna, indiceLinha, indiceColuna);
                break;
            }
        }


    }

    return (EXIT_SUCCESS);
}

